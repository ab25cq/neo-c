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

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);

char* sLambdaNode_kind(struct sLambdaNode* self);

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1901, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1908, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1915, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1922, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1929, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1936, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1952, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1962, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1972, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1982, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1992, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2163, "smart_pointer$1char")))),self,len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2168, "smart_pointer$1short")))),self,len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2173, "smart_pointer$1int")))),self,len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2178, "smart_pointer$1long")))),self,len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2183, "smart_pointer$1float")))),self,len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2188, "smart_pointer$1double")))),self,len)));
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
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2193, "list$1char")))),len,self)));
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
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2198, "list$1short")))),len,self)));
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
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2203, "list$1int")))),len,self)));
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
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2208, "list$1long")))),len,self)));
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
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2213, "list$1float")))),len,self)));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2218, "list$1double")))),len,self)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 221, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 231, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 241, "list_item$1char"))));
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
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 221, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 231, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 241, "list_item$1short"))));
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
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 221, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 231, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 241, "list_item$1int"))));
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
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 221, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 231, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 241, "list_item$1long"))));
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
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 221, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 231, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 241, "list_item$1float"))));
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
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 221, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 231, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 241, "list_item$1double"))));
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










struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sLambdaNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    ((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__;
void* right_value80;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sLambdaNode")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_47;
void* right_value81;
void* right_value82;
struct sType* result_type_48;
void* right_value83;
void* right_value84;
_Bool _if_conditional38;
void* right_value85;
struct CVALUE* come_value_55;
void* right_value86;
char* __dec_obj12;
void* right_value122;
struct sType* __dec_obj36;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_type_48, 0, sizeof(struct sType*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value86 = (void*)0;
right_value122 = (void*)0;
    come_fun_47=info->come_fun;
    info->come_fun=self->mFun;
    result_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 24, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value82,sType_finalize, 0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value83=make_define_var(result_type_48,"__result_obj__",(_Bool)0,info))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value84=make_type_name_string(result_type_48,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value85=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 33, "CVALUE"))));
    come_call_finalizer3(right_value85,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value86=xsprintf("%s",self->mFun->mName))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj36=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(self->mFun->mLambdaType))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value122,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_55->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    info->come_fun=come_fun_47;
    __result73__ = (_Bool)1;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result73__;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional19) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional21=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional21) {
            come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional25=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional25) {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional26=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional26) {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional27=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional27) {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional28) {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional30=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional30) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional31=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional31) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional33) {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional34) {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional35=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional35) {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional36=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional36) {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional37=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional37) {
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
                it_49=self->head;
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    prev_it_50=it_49;
                    it_49=it_49->next;
                    come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional22) {
                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional24=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional24) {
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
                it_51=self->head;
                while(_while_condtional8=it_51!=((void*)0),                _while_condtional8) {
                    prev_it_52=it_51;
                    it_51=it_51->next;
                    come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional29) {
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
                it_53=self->head;
                while(_while_condtional9=it_53!=((void*)0),                _while_condtional9) {
                    prev_it_54=it_53;
                    it_53=it_53->next;
                    come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional32) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional39;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional39=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional39) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional40=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional40) {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional41;
struct sType* __result54__;
void* right_value87;
struct sType* result_56;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value94;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional47;
void* right_value97;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional51;
void* right_value98;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional52;
void* right_value99;
char* __dec_obj20;
_Bool _if_conditional53;
void* right_value100;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional54;
void* right_value108;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value109;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional69;
void* right_value116;
struct list$1charph* __dec_obj30;
_Bool _if_conditional73;
void* right_value117;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional74;
_Bool _if_conditional75;
void* right_value118;
struct sNode* __dec_obj32;
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
_Bool _if_conditional100;
_Bool _if_conditional101;
void* right_value119;
struct sNode* __dec_obj33;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
void* right_value120;
char* __dec_obj34;
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
void* right_value121;
char* __dec_obj35;
_Bool _if_conditional115;
struct sType* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_56, 0, sizeof(struct sType*));
right_value94 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
        if(_if_conditional41=self==(void*)0,        _if_conditional41) {
            __result54__ = __result_obj__ = (void*)0;
            return __result54__;
        }
        result_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional42=self!=((void*)0),        _if_conditional42) {
            result_56->mClass=self->mClass;
        }
        if(_if_conditional43=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional43) {
            __dec_obj16=result_56->mMultipleTypes;
            result_56->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional47) {
            __dec_obj18=result_56->mNoSolvedGenericsType;
            result_56->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value97,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional51=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional51) {
            __dec_obj19=result_56->mOriginalLoadVarType;
            result_56->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value98=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value98,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional52) {
            __dec_obj20=result_56->mGenericsName;
            result_56->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value99=string_clone(self->mGenericsName))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional53) {
            __dec_obj21=result_56->mGenericsTypes;
            result_56->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional54) {
            __dec_obj25=result_56->mArrayNum;
            result_56->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value108=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_56->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional68=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional68) {
            __dec_obj26=result_56->mParamTypes;
            result_56->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional69=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional69) {
            __dec_obj30=result_56->mParamNames;
            result_56->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value116=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value116,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional73=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional73) {
            __dec_obj31=result_56->mResultType;
            result_56->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value117=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value117,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_56->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional75=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional75) {
            __dec_obj32=result_56->mAlignas;
            result_56->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(self->mAlignas))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_56->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_56->mShort=self->mShort;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_56->mLong=self->mLong;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_56->mLongLong=self->mLongLong;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_56->mConstant=self->mConstant;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_56->mRegister=self->mRegister;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_56->mVolatile=self->mVolatile;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_56->mStatic=self->mStatic;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_56->mUniq=self->mUniq;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_56->mRecord=self->mRecord;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_56->mExtern=self->mExtern;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_56->mRestrict=self->mRestrict;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_56->mImmutable=self->mImmutable;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_56->mHeap=self->mHeap;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_56->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_56->mDelegate=self->mDelegate;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_56->mShare=self->mShare;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_56->mClone=self->mClone;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_56->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_56->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_56->mRefference=self->mRefference;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_56->mException=self->mException;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_56->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_56->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_56->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional101=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional101) {
            __dec_obj33=result_56->mSizeNum;
            result_56->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=sNode_clone(self->mSizeNum))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            result_56->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_56->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional104=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional104) {
            __dec_obj34=result_56->mOriginalTypeName;
            result_56->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(self->mOriginalTypeName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_56->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_56->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_56->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_56->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_56->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_56->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_56->mInline=self->mInline;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_56->mNullValue=self->mNullValue;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_56->mGuardValue=self->mGuardValue;
        }
        if(_if_conditional114=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional114) {
            __dec_obj35=result_56->mAsmName;
            result_56->mAsmName=(char*)come_increment_ref_count(((char*)(right_value121=string_clone(self->mAsmName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            result_56->mArrayPointerType=self->mArrayPointerType;
        }
        __result71__ = __result_obj__ = result_56;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result71__;
        come_call_finalizer3(result_56,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct list$1sTypeph* __result55__;
void* right_value88;
void* right_value89;
struct list$1sTypeph* result_57;
struct list_item$1sTypeph* it_58;
_Bool _while_condtional10;
void* right_value93;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
right_value89 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sTypeph*));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
right_value93 = (void*)0;
                if(_if_conditional44=self==((void*)0),                _if_conditional44) {
                    __result55__ = __result_obj__ = ((void*)0);
                    return __result55__;
                }
                result_57=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 137, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value89,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_58=self->head;
                while(_while_condtional10=it_58!=((void*)0),                _while_condtional10) {
                    list$1sTypeph_add(result_57,(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(it_58->item)))));
                    come_call_finalizer3(right_value93,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_58=it_58->next;
                }
                __result58__ = __result_obj__ = result_57;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_57,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result56__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional45;
void* right_value90;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj13;
_Bool _if_conditional46;
void* right_value91;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj14;
void* right_value92;
struct list_item$1sTypeph* litem_61;
struct sType* __dec_obj15;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
right_value91 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
right_value92 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional45=self->len==0,                        _if_conditional45) {
                            litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 151, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_59->prev=((void*)0);
                            litem_59->next=((void*)0);
                            __dec_obj13=litem_59->item;
                            litem_59->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_59;
                            self->head=litem_59;
                        }
                        else {
                            if(_if_conditional46=self->len==1,                            _if_conditional46) {
                                litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 161, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value91,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_60->prev=self->head;
                                litem_60->next=((void*)0);
                                __dec_obj14=litem_60->item;
                                litem_60->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_60;
                                self->head->next=litem_60;
                            }
                            else {
                                litem_61=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value92=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 171, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value92,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                        __result57__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result57__;
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
                it_62=self->head;
                while(_while_condtional11=it_62!=((void*)0),                _while_condtional11) {
                    prev_it_63=it_62;
                    it_62=it_62->next;
                    come_call_finalizer3(prev_it_63,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
struct tuple1$1sTypeph* __result59__;
void* right_value95;
struct tuple1$1sTypeph* result_64;
_Bool _if_conditional50;
void* right_value96;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&result_64, 0, sizeof(struct tuple1$1sTypeph*));
right_value96 = (void*)0;
                if(_if_conditional48=self==(void*)0,                _if_conditional48) {
                    __result59__ = __result_obj__ = (void*)0;
                    return __result59__;
                }
                result_64=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value95,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional50=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional50) {
                    __dec_obj17=result_64->v1;
                    result_64->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value96,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result60__ = __result_obj__ = result_64;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result60__;
                come_call_finalizer3(result_64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional49) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1sNodeph* __result61__;
void* right_value101;
void* right_value102;
struct list$1sNodeph* result_65;
struct list_item$1sNodeph* it_66;
_Bool _while_condtional12;
void* right_value107;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&result_65, 0, sizeof(struct list$1sNodeph*));
memset(&it_66, 0, sizeof(struct list_item$1sNodeph*));
right_value107 = (void*)0;
                if(_if_conditional55=self==((void*)0),                _if_conditional55) {
                    __result61__ = __result_obj__ = ((void*)0);
                    return __result61__;
                }
                result_65=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 137, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value102,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_66=self->head;
                while(_while_condtional12=it_66!=((void*)0),                _while_condtional12) {
                    list$1sNodeph_add(result_65,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(it_66->item)))));
                    if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_66=it_66->next;
                }
                __result66__ = __result_obj__ = result_65;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result66__;
                come_call_finalizer3(result_65,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result62__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result62__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value103;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj22;
_Bool _if_conditional57;
void* right_value104;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj23;
void* right_value105;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value104 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
right_value105 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional56=self->len==0,                        _if_conditional56) {
                            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 151, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_67->prev=((void*)0);
                            litem_67->next=((void*)0);
                            __dec_obj22=litem_67->item;
                            litem_67->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_67;
                            self->head=litem_67;
                        }
                        else {
                            if(_if_conditional57=self->len==1,                            _if_conditional57) {
                                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 161, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value104,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_68->prev=self->head;
                                litem_68->next=((void*)0);
                                __dec_obj23=litem_68->item;
                                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_68;
                                self->head->next=litem_68;
                            }
                            else {
                                litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 171, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value105,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                        __result63__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional58;
struct sNode* __result64__;
void* right_value106;
struct sNode* result_70;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
struct sNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_70, 0, sizeof(struct sNode*));
                        if(_if_conditional58=self==(void*)0,                        _if_conditional58) {
                            __result64__ = __result_obj__ = (void*)0;
                            return __result64__;
                        }
                        result_70=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value106=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value106) { right_value106 = come_decrement_ref_count2(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional59=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional59) {
                            result_70->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            result_70->finalize=self->finalize;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            result_70->clone=self->clone;
                        }
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            result_70->compile=self->compile;
                        }
                        if(_if_conditional63=self!=((void*)0),                        _if_conditional63) {
                            result_70->sline=self->sline;
                        }
                        if(_if_conditional64=self!=((void*)0),                        _if_conditional64) {
                            result_70->sname=self->sname;
                        }
                        if(_if_conditional65=self!=((void*)0),                        _if_conditional65) {
                            result_70->terminated=self->terminated;
                        }
                        if(_if_conditional66=self!=((void*)0),                        _if_conditional66) {
                            result_70->kind=self->kind;
                        }
                        __result65__ = __result_obj__ = result_70;
                        if(result_70) { result_70 = come_decrement_ref_count2(result_70, ((struct sNode*)result_70)->finalize, ((struct sNode*)result_70)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result65__;
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
                it_71=self->head;
                while(_while_condtional13=it_71!=((void*)0),                _while_condtional13) {
                    prev_it_72=it_71;
                    it_71=it_71->next;
                    come_call_finalizer3(prev_it_72,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional70;
struct list$1charph* __result67__;
void* right_value110;
void* right_value111;
struct list$1charph* result_73;
struct list_item$1charph* it_74;
_Bool _while_condtional14;
void* right_value115;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
right_value111 = (void*)0;
memset(&result_73, 0, sizeof(struct list$1charph*));
memset(&it_74, 0, sizeof(struct list_item$1charph*));
right_value115 = (void*)0;
                if(_if_conditional70=self==((void*)0),                _if_conditional70) {
                    __result67__ = __result_obj__ = ((void*)0);
                    return __result67__;
                }
                result_73=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 137, "list$1charph"))))))));
                come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value111,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_74=self->head;
                while(_while_condtional14=it_74!=((void*)0),                _while_condtional14) {
                    list$1charph_add(result_73,(char*)come_increment_ref_count(((char*)(right_value115=string_clone(it_74->item)))));
                    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_74=it_74->next;
                }
                __result70__ = __result_obj__ = result_73;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result70__;
                come_call_finalizer3(result_73,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result68__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result68__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional71;
void* right_value112;
struct list_item$1charph* litem_75;
char* __dec_obj27;
_Bool _if_conditional72;
void* right_value113;
struct list_item$1charph* litem_76;
char* __dec_obj28;
void* right_value114;
struct list_item$1charph* litem_77;
char* __dec_obj29;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value113 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
right_value114 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional71=self->len==0,                        _if_conditional71) {
                            litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 151, "list_item$1charph"))));
                            come_call_finalizer3(right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_75->prev=((void*)0);
                            litem_75->next=((void*)0);
                            __dec_obj27=litem_75->item;
                            litem_75->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_75;
                            self->head=litem_75;
                        }
                        else {
                            if(_if_conditional72=self->len==1,                            _if_conditional72) {
                                litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 161, "list_item$1charph"))));
                                come_call_finalizer3(right_value113,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_76->prev=self->head;
                                litem_76->next=((void*)0);
                                __dec_obj28=litem_76->item;
                                litem_76->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_76;
                                self->head->next=litem_76;
                            }
                            else {
                                litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 171, "list_item$1charph"))));
                                come_call_finalizer3(right_value114,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
                        __result69__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result69__;
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
                it_78=self->head;
                while(_while_condtional15=it_78!=((void*)0),                _while_condtional15) {
                    prev_it_79=it_78;
                    it_78=it_78->next;
                    come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional116;
void* right_value123;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj37;
_Bool _if_conditional118;
void* right_value124;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj38;
void* right_value125;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj39;
struct list$1CVALUEph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1CVALUEph*));
right_value124 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1CVALUEph*));
right_value125 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional116=self->len==0,        _if_conditional116) {
            litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value123=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 221, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value123,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_80->prev=((void*)0);
            litem_80->next=((void*)0);
            __dec_obj37=litem_80->item;
            litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj37,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_80;
            self->head=litem_80;
        }
        else {
            if(_if_conditional118=self->len==1,            _if_conditional118) {
                litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value124=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 231, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value124,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_81->prev=self->head;
                litem_81->next=((void*)0);
                __dec_obj38=litem_81->item;
                litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_81;
                self->head->next=litem_81;
            }
            else {
                litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value125=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 241, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value125,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
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
        __result72__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result72__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional117=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional117) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__;
void* right_value126;
struct sFun* __dec_obj40;
struct sFunNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    ((struct sNodeBase*)(right_value126=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value126,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj40,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result74__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result74__;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__;
void* right_value127;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value127=__builtin_string("sFunNode")));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* come_fun_83;
char* come_fun_name_84;
void* right_value128;
char* __dec_obj41;
_Bool _if_conditional136;
_Bool _if_conditional137;
void* right_value129;
void* right_value130;
struct sType* result_type_85;
void* right_value131;
void* right_value132;
_Bool _if_conditional138;
void* right_value133;
char* __dec_obj42;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_83, 0, sizeof(struct sFun*));
memset(&come_fun_name_84, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&result_type_85, 0, sizeof(struct sType*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
    come_fun_83=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_84=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj41=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(((char*)(right_value128=__builtin_string(info->come_fun->mName))));
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(self->mFun->mBlock) {
        if(_if_conditional137=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional137) {
            add_come_code(info,"come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 78, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value129,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value131=make_define_var(result_type_85,"__result_obj__",(_Bool)0,info))));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code_at_function_head2(info,"memset(&__result_obj__, 0, sizeof(%s));\n",((char*)(right_value132=make_type_name_string(result_type_85,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        if(_if_conditional138=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional138) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value133=xsprintf("come_heap_final();\n"))));
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(result_type_85,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_83;
    __dec_obj42=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_84);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result76__ = (_Bool)1;
    come_fun_name_84 = come_decrement_ref_count2(come_fun_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result76__;
    come_fun_name_84 = come_decrement_ref_count2(come_fun_name_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional119) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional120=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional120) {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional121) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional122) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional123=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional123) {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional124=self!=((void*)0)&&self->mLambdaType!=((void*)0),        _if_conditional124) {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional125=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional125) {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional128=self!=((void*)0)&&self->mSource!=((void*)0),        _if_conditional128) {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional129=self!=((void*)0)&&self->mSourceHead!=((void*)0),        _if_conditional129) {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional130=self!=((void*)0)&&self->mSourceHead2!=((void*)0),        _if_conditional130) {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional131=self!=((void*)0)&&self->mSourceDefer!=((void*)0),        _if_conditional131) {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional132=self!=((void*)0)&&self->mComeHeader!=((void*)0),        _if_conditional132) {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional133=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional133) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional126=self!=((void*)0)&&self->mNodes!=((void*)0),                _if_conditional126) {
                    come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional127=self!=((void*)0)&&self->mVarTable!=((void*)0),                _if_conditional127) {
                    come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__;
void* right_value134;
void* right_value135;
struct list$1sNodeph* __dec_obj43;
struct sBlock* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
right_value135 = (void*)0;
    __dec_obj43=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value135=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value134=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 99, "list$1sNodeph"))))))));
    come_call_finalizer3(__dec_obj43,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value134,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value135,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result77__ = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result77__;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__;
void* right_value136;
struct sType* __dec_obj44;
void* right_value137;
struct list$1charph* __dec_obj45;
void* right_value138;
struct list$1charph* __dec_obj46;
char* __dec_obj47;
struct sType* __dec_obj48;
struct list$1sTypeph* __dec_obj49;
struct list$1charph* __dec_obj50;
struct list$1charph* __dec_obj51;
char* __dec_obj52;
void* right_value139;
char* __dec_obj53;
struct sGenericsFun* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
    __dec_obj44=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(impl_type))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj45=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value137=list$1charphp_clone(generics_type_names))));
    come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value137,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj46=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value138=list$1charphp_clone(method_generics_type_names))));
    come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value138,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
    self->mGenericsSName=(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(generics_sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mGenericsSLine=generics_sline;
    __result78__ = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result78__;
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
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional139=self!=((void*)0)&&self->mImplType!=((void*)0),        _if_conditional139) {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional140=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        _if_conditional140) {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional141=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),        _if_conditional141) {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional142=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional142) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional143=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional143) {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional144=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional144) {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional145=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional145) {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional146=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        _if_conditional146) {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional147=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional147) {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional148=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        _if_conditional148) {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last){
void* __result_obj__;
void* right_value140;
void* right_value141;
struct sBlock* result_86;
int block_level_87;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _while_condtional16;
_Bool _if_conditional151;
int sline_88;
char* sname_89;
void* right_value142;
struct sNode* node_90;
void* right_value143;
char* __dec_obj54;
_Bool _if_conditional152;
_Bool _if_conditional155;
_Bool _while_condtional17;
_Bool _if_conditional156;
void* right_value147;
struct sNode* node_94;
_Bool _if_conditional157;
_Bool _if_conditional158;
char* p_95;
char* head_96;
void* right_value148;
char* source_97;
void* right_value149;
struct sNode* node_98;
_Bool _if_conditional159;
struct sBlock* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&result_86, 0, sizeof(struct sBlock*));
memset(&block_level_87, 0, sizeof(int));
memset(&sline_88, 0, sizeof(int));
memset(&sname_89, 0, sizeof(char*));
right_value142 = (void*)0;
memset(&node_90, 0, sizeof(struct sNode*));
right_value143 = (void*)0;
right_value147 = (void*)0;
memset(&node_94, 0, sizeof(struct sNode*));
memset(&p_95, 0, sizeof(char*));
memset(&head_96, 0, sizeof(char*));
right_value148 = (void*)0;
memset(&source_97, 0, sizeof(char*));
right_value149 = (void*)0;
memset(&node_98, 0, sizeof(struct sNode*));
    result_86=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value141=sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value140=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 129, "sBlock")))),info))));
    come_call_finalizer3(right_value140,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value141,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    block_level_87=info->block_level;
    if(_if_conditional149=!no_block_level,    _if_conditional149) {
        info->block_level++;
    }
    if(_if_conditional150=*info->p==123,    _if_conditional150) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            parse_sharp_v5(info);
            if(_if_conditional151=*info->p==125,            _if_conditional151) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_88=info->sline;
            sname_89=info->sname;
            node_90=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=statment(info))));
            if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj54=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value143=node_90->sname(node_90->_protocol_obj))));
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline=node_90->sline(node_90->_protocol_obj);
            if(_if_conditional152=node_90==((void*)0),            _if_conditional152) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_90));
            parse_sharp_v5(info);
            if(_if_conditional155=node_90->terminated(node_90->_protocol_obj),            _if_conditional155) {
                skip_spaces_and_lf(info);
            }
            while(_while_condtional17=*info->p==59,            _while_condtional17) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(_if_conditional156=*info->p==125,            _if_conditional156) {
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
        node_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=expression_v13(info))));
        if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        if(_if_conditional157=node_94==((void*)0),        _if_conditional157) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_94));
        if(node_94) { node_94 = come_decrement_ref_count2(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(return_self_at_last) {
        p_95=info->p;
        head_96=info->head;
        source_97=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string("return self;"))));
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->p=source_97;
        info->head=source_97;
        node_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value149=expression_v13(info))));
        if(right_value149) { right_value149 = come_decrement_ref_count2(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional159=node_98==((void*)0),        _if_conditional159) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_86->mNodes,(struct sNode*)come_increment_ref_count(node_98));
        info->p=p_95;
        info->head=head_96;
        source_97 = come_decrement_ref_count2(source_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_98) { node_98 = come_decrement_ref_count2(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_87;
    __result80__ = __result_obj__ = result_86;
    come_call_finalizer3(result_86,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(result_86,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional153;
void* right_value144;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj55;
_Bool _if_conditional154;
void* right_value145;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj56;
void* right_value146;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sNodeph*));
right_value145 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1sNodeph*));
right_value146 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional153=self->len==0,                _if_conditional153) {
                    litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 221, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value144,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_91->prev=((void*)0);
                    litem_91->next=((void*)0);
                    __dec_obj55=litem_91->item;
                    litem_91->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_91;
                    self->head=litem_91;
                }
                else {
                    if(_if_conditional154=self->len==1,                    _if_conditional154) {
                        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 231, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value145,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_92->prev=self->head;
                        litem_92->next=((void*)0);
                        __dec_obj56=litem_92->item;
                        litem_92->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_92;
                        self->head->next=litem_92;
                    }
                    else {
                        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value146=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 241, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value146,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                __result79__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result79__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
void* __result_obj__;
_Bool _if_conditional160;
int __result81__;
struct sVarTable* old_table_99;
_Bool _if_conditional161;
void* right_value150;
void* right_value151;
struct sVarTable* __dec_obj58;
struct sVarTable* current_loop_vtable_100;
_Bool _if_conditional162;
struct list$1sTypeph* param_types__101;
struct list$1charph* param_names__102;
_Bool _if_conditional163;
int i_103;
struct list$1charph* o2_saved_104;
char* name_107;
void* right_value152;
struct sType* type_113;
void* right_value153;
int block_level_114;
_Bool _if_conditional170;
_Bool _if_conditional172;
int i_115;
struct list$1sNodeph* o2_saved_116;
struct sNode* node_119;
struct list$1sRightValueObjectph* right_value_objects_122;
void* right_value154;
void* right_value155;
struct list$1sRightValueObjectph* __dec_obj59;
char* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
int stack_num_before_127;
int sline_128;
void* right_value156;
char* sname_129;
void* right_value157;
char* __dec_obj63;
_Bool _if_conditional182;
void* right_value158;
char* __dec_obj64;
struct list$1sRightValueObjectph* __dec_obj65;
_Bool _if_conditional183;
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&old_table_99, 0, sizeof(struct sVarTable*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&current_loop_vtable_100, 0, sizeof(struct sVarTable*));
memset(&param_types__101, 0, sizeof(struct list$1sTypeph*));
memset(&param_names__102, 0, sizeof(struct list$1charph*));
memset(&i_103, 0, sizeof(int));
memset(&o2_saved_104, 0, sizeof(struct list$1charph*));
memset(&name_107, 0, sizeof(char*));
right_value152 = (void*)0;
memset(&type_113, 0, sizeof(struct sType*));
right_value153 = (void*)0;
memset(&block_level_114, 0, sizeof(int));
memset(&i_115, 0, sizeof(int));
memset(&o2_saved_116, 0, sizeof(struct list$1sNodeph*));
memset(&node_119, 0, sizeof(struct sNode*));
memset(&right_value_objects_122, 0, sizeof(struct list$1sRightValueObjectph*));
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&stack_num_before_127, 0, sizeof(int));
memset(&sline_128, 0, sizeof(int));
right_value156 = (void*)0;
memset(&sname_129, 0, sizeof(char*));
right_value157 = (void*)0;
right_value158 = (void*)0;
    if(info->output_header_file) {
        __result81__ = 0;
        return __result81__;
    }
    old_table_99=info->lv_table;
    if(_if_conditional161=!no_var_table,    _if_conditional161) {
        __dec_obj58=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value151=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value150=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 235, "sVarTable")))),(_Bool)0,old_table_99))));
        come_call_finalizer3(__dec_obj58,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value150,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value151,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_100=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__101=info->param_types;
    param_names__102=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(_if_conditional163=param_types&&param_names,    _if_conditional163) {
        for(        o2_saved_104=(param_names),name_107=list$1charph_begin((o2_saved_104));        !list$1charph_end((o2_saved_104));        name_107=list$1charph_next((o2_saved_104))        ){
            type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_103), "05function.c", 253, 0))))));
            come_call_finalizer3(right_value152,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_113->mFunctionParam=(_Bool)1;
            type_113->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_107,(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(type_113)))),info);
            come_call_finalizer3(right_value153,sType_finalize, 0, 1, 0, 0, __result_obj__);
            i_103++;
            come_call_finalizer3(type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_114=info->block_level;
    if(_if_conditional170=!no_var_table,    _if_conditional170) {
        info->block_level++;
    }
    if(_if_conditional172=list$1sNodeph_length(block->mNodes)==0,    _if_conditional172) {
    }
    else {
        for(        o2_saved_116=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_119=list$1sNodeph_begin((o2_saved_116));        !list$1sNodeph_end((o2_saved_116));        node_119=list$1sNodeph_next((o2_saved_116))        ){
            right_value_objects_122=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj59=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value155=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(right_value154=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 272, "list$1sRightValueObjectph"))))))));
            come_call_finalizer3(__dec_obj59,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value154,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value155,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj60=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj61=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj62=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_127=list$1CVALUEph_length(info->stack);
            sline_128=info->sline;
            sname_129=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(info->sname))));
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_119->sline(node_119->_protocol_obj);
            __dec_obj63=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value157=node_119->sname(node_119->_protocol_obj))));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->writing_source_file_position=(_Bool)1;
            if(_if_conditional182=!node_compile(node_119,info),            _if_conditional182) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_128;
            __dec_obj64=info->sname;
            info->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(sname_129))));
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_127);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj65=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_122);
            come_call_finalizer3(__dec_obj65,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_objects_122,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_129 = come_decrement_ref_count2(sname_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_116,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional183=!no_var_table,    _if_conditional183) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_99;
    info->block_level=block_level_114;
    info->param_types=param_types__101;
    info->param_names=param_names__102;
    info->current_loop_vtable=current_loop_vtable_100;
    __result104__ = 0;
    return __result104__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional164;
char* result_105;
char* __result82__;
_Bool _if_conditional165;
char* __result83__;
char* result_106;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_105, 0, sizeof(char*));
memset(&result_106, 0, sizeof(char*));
            if(_if_conditional164=self==((void*)0),            _if_conditional164) {
                memset(&result_105,0,sizeof(char*));
                __result82__ = __result_obj__ = result_105;
                return __result82__;
            }
            self->it=self->head;
            if(self->it) {
                __result83__ = __result_obj__ = self->it->item;
                return __result83__;
            }
            memset(&result_106,0,sizeof(char*));
            __result84__ = __result_obj__ = result_106;
            return __result84__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
            __result85__ = self==((void*)0)||self->it==((void*)0);
            return __result85__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional166;
char* result_108;
char* __result86__;
_Bool _if_conditional167;
char* __result87__;
char* result_109;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
            if(_if_conditional166=self==((void*)0)||self->it==((void*)0),            _if_conditional166) {
                memset(&result_108,0,sizeof(char*));
                __result86__ = __result_obj__ = result_108;
                return __result86__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result87__ = __result_obj__ = self->it->item;
                return __result87__;
            }
            memset(&result_109,0,sizeof(char*));
            __result88__ = __result_obj__ = result_109;
            return __result88__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional168;
struct list_item$1sTypeph* it_110;
int i_111;
_Bool _while_condtional18;
_Bool _if_conditional169;
struct sType* __result89__;
struct sType* default_value_112;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_110, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_111, 0, sizeof(int));
memset(&default_value_112, 0, sizeof(struct sType*));
                if(_if_conditional168=position<0,                _if_conditional168) {
                    position+=self->len;
                }
                it_110=self->head;
                i_111=0;
                while(_while_condtional18=it_110!=((void*)0),                _while_condtional18) {
                    if(_if_conditional169=position==i_111,                    _if_conditional169) {
                        __result89__ = __result_obj__ = it_110->item;
                        return __result89__;
                    }
                    it_110=it_110->next;
                    i_111++;
                }
                memset(&default_value_112,0,sizeof(struct sType*));
                __result90__ = __result_obj__ = default_value_112;
                come_call_finalizer3(default_value_112,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result90__;
                come_call_finalizer3(default_value_112,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional171;
int __result91__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional171=self==((void*)0),        _if_conditional171) {
            __result91__ = 0;
            return __result91__;
        }
        __result92__ = self->len;
        return __result92__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional173;
struct sNode* result_117;
struct sNode* __result93__;
_Bool _if_conditional174;
struct sNode* __result94__;
struct sNode* result_118;
struct sNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_117, 0, sizeof(struct sNode*));
memset(&result_118, 0, sizeof(struct sNode*));
            if(_if_conditional173=self==((void*)0),            _if_conditional173) {
                memset(&result_117,0,sizeof(struct sNode*));
                __result93__ = __result_obj__ = result_117;
                return __result93__;
            }
            self->it=self->head;
            if(self->it) {
                __result94__ = __result_obj__ = self->it->item;
                return __result94__;
            }
            memset(&result_118,0,sizeof(struct sNode*));
            __result95__ = __result_obj__ = result_118;
            return __result95__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
            __result96__ = self==((void*)0)||self->it==((void*)0);
            return __result96__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional175;
struct sNode* result_120;
struct sNode* __result97__;
_Bool _if_conditional176;
struct sNode* __result98__;
struct sNode* result_121;
struct sNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_120, 0, sizeof(struct sNode*));
memset(&result_121, 0, sizeof(struct sNode*));
            if(_if_conditional175=self==((void*)0)||self->it==((void*)0),            _if_conditional175) {
                memset(&result_120,0,sizeof(struct sNode*));
                __result97__ = __result_obj__ = result_120;
                return __result97__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result98__ = __result_obj__ = self->it->item;
                return __result98__;
            }
            memset(&result_121,0,sizeof(struct sNode*));
            __result99__ = __result_obj__ = result_121;
            return __result99__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result100__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result100__;
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
                    it_123=self->head;
                    while(_while_condtional19=it_123!=((void*)0),                    _while_condtional19) {
                        prev_it_124=it_123;
                        it_123=it_123->next;
                        come_call_finalizer3(prev_it_124,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
void* __result_obj__;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional177=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional177) {
                                come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
void* __result_obj__;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional178=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional178) {
                                        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional179=self!=((void*)0)&&self->mVarName!=((void*)0),                                    _if_conditional179) {
                                        self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional180=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional180) {
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
                it_125=self->head;
                while(_while_condtional20=it_125!=((void*)0),                _while_condtional20) {
                    prev_it_126=it_125;
                    it_125=it_125->next;
                    come_call_finalizer3(prev_it_126,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional181;
int __result101__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional181=self==((void*)0),                _if_conditional181) {
                    __result101__ = 0;
                    return __result101__;
                }
                __result102__ = self->len;
                return __result102__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_130;
_Bool _while_condtional21;
struct list_item$1sRightValueObjectph* prev_it_131;
struct list$1sRightValueObjectph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_130, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_131, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_130=self->head;
                while(_while_condtional21=it_130!=((void*)0),                _while_condtional21) {
                    prev_it_131=it_130;
                    it_130=it_130->next;
                    come_call_finalizer3(prev_it_131,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result103__ = __result_obj__ = self;
                return __result103__;
}

void arrange_stack(struct sInfo* info, int top){
void* __result_obj__;
_Bool _if_conditional184;
_Bool _if_conditional185;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional184=list$1CVALUEph_length(info->stack)>top,    _if_conditional184) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(_if_conditional185=list$1CVALUEph_length(info->stack)<top,    _if_conditional185) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional186;
_Bool _if_conditional187;
int __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    parse_sharp_v5(info);
    if(_if_conditional186=*info->p!=c,    _if_conditional186) {
        if(_if_conditional187=!info->no_output_err,        _if_conditional187) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    __result105__ = 0;
    return __result105__;
}

char* skip_block(struct sInfo* info){
void* __result_obj__;
char* head_132;
_Bool _if_conditional188;
_Bool dquort_133;
_Bool squort_134;
int sline_135;
int nest_136;
_Bool _while_condtional22;
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
_Bool _if_conditional211;
_Bool _if_conditional212;
char* tail_137;
void* right_value159;
char* buf_138;
void* right_value160;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_132, 0, sizeof(char*));
memset(&dquort_133, 0, sizeof(_Bool));
memset(&squort_134, 0, sizeof(_Bool));
memset(&sline_135, 0, sizeof(int));
memset(&nest_136, 0, sizeof(int));
memset(&tail_137, 0, sizeof(char*));
right_value159 = (void*)0;
memset(&buf_138, 0, sizeof(char*));
right_value160 = (void*)0;
    head_132=info->p;
    if(_if_conditional188=*info->p==123,    _if_conditional188) {
        info->p++;
        dquort_133=(_Bool)0;
        squort_134=(_Bool)0;
        sline_135=0;
        nest_136=0;
        while(_while_condtional22=1,        _while_condtional22) {
            if(dquort_133) {
                if(_if_conditional190=*info->p==92,                _if_conditional190) {
                    info->p++;
                    if(_if_conditional191=*info->p==0,                    _if_conditional191) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                        exit(2);
                    }
                    if(_if_conditional192=*info->p==10,                    _if_conditional192) {
                        info->p++;
                    }
                    info->p++;
                }
                else {
                    if(_if_conditional193=*info->p==34,                    _if_conditional193) {
                        info->p++;
                        dquort_133=!dquort_133;
                    }
                    else {
                        if(_if_conditional194=*info->p==10,                        _if_conditional194) {
                            info->p++;
                            info->sline++;
                            if(_if_conditional195=*info->p==0,                            _if_conditional195) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                exit(2);
                            }
                        }
                        else {
                            info->p++;
                            if(_if_conditional196=*info->p==0,                            _if_conditional196) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                if(squort_134) {
                    if(_if_conditional198=*info->p==92,                    _if_conditional198) {
                        info->p++;
                        if(_if_conditional199=*info->p==0,                        _if_conditional199) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                            exit(2);
                        }
                        if(_if_conditional200=*info->p==10,                        _if_conditional200) {
                            info->sline++;
                        }
                        info->p++;
                    }
                    else {
                        if(_if_conditional201=*info->p==39,                        _if_conditional201) {
                            info->p++;
                            squort_134=!squort_134;
                        }
                        else {
                            if(_if_conditional202=*info->p==10,                            _if_conditional202) {
                                info->p++;
                                info->sline++;
                                if(_if_conditional203=*info->p==0,                                _if_conditional203) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                    exit(2);
                                }
                            }
                            else {
                                info->p++;
                                if(_if_conditional204=*info->p==0,                                _if_conditional204) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_135);
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    if(_if_conditional205=*info->p==39,                    _if_conditional205) {
                        sline_135=info->sline;
                        info->p++;
                        squort_134=!squort_134;
                    }
                    else {
                        if(_if_conditional206=*info->p==34,                        _if_conditional206) {
                            sline_135=info->sline;
                            info->p++;
                            dquort_133=!dquort_133;
                        }
                        else {
                            if(_if_conditional207=*info->p==35,                            _if_conditional207) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(_if_conditional208=*info->p==123,                                _if_conditional208) {
                                    info->p++;
                                    nest_136++;
                                }
                                else {
                                    if(_if_conditional209=*info->p==125,                                    _if_conditional209) {
                                        info->p++;
                                        if(_if_conditional210=nest_136==0,                                        _if_conditional210) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_136--;
                                    }
                                    else {
                                        if(_if_conditional211=*info->p==0,                                        _if_conditional211) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional212=*info->p==10,                                            _if_conditional212) {
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
    tail_137=info->p;
    buf_138=(char*)come_increment_ref_count(((char*)(right_value159=(char*)come_calloc(1, sizeof(char)*(1*(tail_137-head_132+1)), "05function.c", 478, "char"))));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(buf_138,head_132,tail_137-head_132);
    buf_138[tail_137-head_132]=0;
    __result106__ = __result_obj__ = ((char*)(right_value160=__builtin_string(buf_138)));
    buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
    buf_138 = come_decrement_ref_count2(buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool strmemcmp(char* p, char* p2){
void* __result_obj__;
_Bool terminated_139;
char* p3_140;
int i_141;
_Bool _if_conditional213;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&terminated_139, 0, sizeof(_Bool));
memset(&p3_140, 0, sizeof(char*));
memset(&i_141, 0, sizeof(int));
    terminated_139=(_Bool)0;
    p3_140=p;
    for(    i_141=0;    i_141<strlen(p2);    i_141++    ){
        if(_if_conditional213=*p3_140==0,        _if_conditional213) {
            terminated_139=(_Bool)1;
            break;
        }
        p3_140++;
    }
    __result107__ = !terminated_139&&memcmp(p,p2,strlen(p2))==0;
    return __result107__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__;
void* right_value161;
void* right_value162;
struct buffer* asm_fun_name_142;
_Bool _while_condtional23;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
int brace_num_143;
_Bool _while_condtional24;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
int len_144;
_Bool in_dquort_145;
int brace_num_146;
_Bool _while_condtional25;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
int brace_num_147;
_Bool _while_condtional26;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value163;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
right_value162 = (void*)0;
memset(&asm_fun_name_142, 0, sizeof(struct buffer*));
memset(&brace_num_143, 0, sizeof(int));
memset(&len_144, 0, sizeof(int));
memset(&in_dquort_145, 0, sizeof(_Bool));
memset(&brace_num_146, 0, sizeof(int));
memset(&brace_num_147, 0, sizeof(int));
right_value163 = (void*)0;
    asm_fun_name_142=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value162=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 501, "buffer"))))))));
    come_call_finalizer3(right_value161,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value162,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional23=(_Bool)1,    _while_condtional23) {
        if(_if_conditional214=strmemcmp(info->p,"__attribute_pure__"),        _if_conditional214) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional215=strmemcmp(info->p,"__attribute_malloc__"),            _if_conditional215) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional216=strmemcmp(info->p,"__attr_dealloc_fclose"),                _if_conditional216) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional217=strmemcmp(info->p,"__wur"),                    _if_conditional217) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional218=strmemcmp(info->p,"__noreturn"),                        _if_conditional218) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(_if_conditional219=strmemcmp(info->p,"__attribute__"),                            _if_conditional219) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_143=0;
                                while(_while_condtional24=*info->p,                                _while_condtional24) {
                                    if(_if_conditional220=*info->p==40,                                    _if_conditional220) {
                                        info->p++;
                                        brace_num_143++;
                                    }
                                    else {
                                        if(_if_conditional221=*info->p==41,                                        _if_conditional221) {
                                            info->p++;
                                            brace_num_143--;
                                            if(_if_conditional222=brace_num_143==0,                                            _if_conditional222) {
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
                                if(_if_conditional223=strmemcmp(info->p,"__asm__"),                                _if_conditional223) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_144=0;
                                    in_dquort_145=(_Bool)0;
                                    brace_num_146=0;
                                    while(_while_condtional25=*info->p,                                    _while_condtional25) {
                                        if(_if_conditional224=*info->p==34,                                        _if_conditional224) {
                                            info->p++;
                                            in_dquort_145=!in_dquort_145;
                                        }
                                        else {
                                            if(in_dquort_145) {
                                                buffer_append_char(asm_fun_name_142,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(_if_conditional226=*info->p==40,                                                _if_conditional226) {
                                                    info->p++;
                                                    brace_num_146++;
                                                }
                                                else {
                                                    if(_if_conditional227=*info->p==41,                                                    _if_conditional227) {
                                                        info->p++;
                                                        brace_num_146--;
                                                        if(_if_conditional228=brace_num_146==0,                                                        _if_conditional228) {
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
                                    if(_if_conditional229=strmemcmp(info->p,"__asm"),                                    _if_conditional229) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_147=0;
                                        while(_while_condtional26=*info->p,                                        _while_condtional26) {
                                            if(_if_conditional230=*info->p==40,                                            _if_conditional230) {
                                                info->p++;
                                                brace_num_147++;
                                            }
                                            else {
                                                if(_if_conditional231=*info->p==41,                                                _if_conditional231) {
                                                    info->p++;
                                                    brace_num_147--;
                                                    if(_if_conditional232=brace_num_147==0,                                                    _if_conditional232) {
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
    __result108__ = __result_obj__ = ((char*)(right_value163=buffer_to_string(asm_fun_name_142)));
    come_call_finalizer3(asm_fun_name_142,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
    come_call_finalizer3(asm_fun_name_142,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional27;
char* head_148;
int head_sline_149;
void* right_value164;
char* buf_150;
_Bool _if_conditional233;
void* right_value165;
struct sNode* node_151;
_Bool _while_condtional28;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_148, 0, sizeof(char*));
memset(&head_sline_149, 0, sizeof(int));
right_value164 = (void*)0;
memset(&buf_150, 0, sizeof(char*));
right_value165 = (void*)0;
memset(&node_151, 0, sizeof(struct sNode*));
    while(_while_condtional27=*info->p,    _while_condtional27) {
        parse_sharp_v5(info);
        head_148=info->p;
        head_sline_149=info->sline;
        buf_150=(char*)come_increment_ref_count(((char*)(right_value164=parse_word(info))));
        right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional233=block&&*info->p==125,        _if_conditional233) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=top_level_v99(buf_150,head_148,head_sline_149,info))));
        if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        parse_sharp_v5(info);
        while(_while_condtional28=*info->p==59,        _while_condtional28) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(_if_conditional234=node_151!=((void*)0),        _if_conditional234) {
            if(_if_conditional235=!node_compile(node_151,info),            _if_conditional235) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(_if_conditional236=block&&*info->p==125,        _if_conditional236) {
            info->p++;
            skip_spaces_and_lf(info);
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
void* right_value166;
char* name_152;
void* right_value167;
void* right_value168;
struct sType* result_type_153;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
void* right_value173;
void* right_value174;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
struct sType* __list_values1___154[5];
void* right_value182;
void* right_value183;
struct list$1sTypeph* param_types_159;
void* right_value184;
void* right_value185;
void* right_value186;
void* right_value187;
void* right_value188;
char* __list_values2___160[5];
void* right_value192;
void* right_value193;
struct list$1charph* param_names_165;
void* right_value194;
void* right_value195;
struct list$1charph* param_default_parametors_166;
void* right_value196;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
struct sFun* main_fun_167;
void* right_value209;
void* right_value210;
char* name_212;
void* right_value211;
void* right_value212;
struct sType* result_type_213;
void* right_value213;
void* right_value214;
struct sType* __list_values3___214[1];
void* right_value215;
void* right_value216;
struct list$1sTypeph* param_types_215;
void* right_value217;
char* __list_values4___216[1];
void* right_value218;
void* right_value219;
struct list$1charph* param_names_217;
void* right_value220;
void* right_value221;
struct list$1charph* param_default_parametors_218;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
struct sFun* main_fun_219;
void* right_value226;
void* right_value227;
char* name_220;
void* right_value228;
void* right_value229;
struct sType* result_type_221;
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
void* right_value242;
void* right_value243;
struct sType* __list_values5___222[7];
void* right_value244;
void* right_value245;
struct list$1sTypeph* param_types_223;
void* right_value246;
void* right_value247;
void* right_value248;
void* right_value249;
void* right_value250;
void* right_value251;
void* right_value252;
char* __list_values6___224[7];
void* right_value253;
void* right_value254;
struct list$1charph* param_names_225;
void* right_value255;
void* right_value256;
struct list$1charph* param_default_parametors_226;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
struct sFun* main_fun_227;
void* right_value261;
void* right_value262;
char* name_228;
void* right_value263;
void* right_value264;
struct sType* result_type_229;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
struct sType* __list_values7___230[5];
void* right_value275;
void* right_value276;
struct list$1sTypeph* param_types_231;
void* right_value277;
void* right_value278;
void* right_value279;
void* right_value280;
void* right_value281;
char* __list_values8___232[5];
void* right_value282;
void* right_value283;
struct list$1charph* param_names_233;
void* right_value284;
void* right_value285;
struct list$1charph* param_default_parametors_234;
void* right_value286;
void* right_value287;
void* right_value288;
void* right_value289;
struct sFun* main_fun_235;
void* right_value290;
void* right_value291;
char* name_236;
void* right_value292;
void* right_value293;
struct sType* result_type_237;
void* right_value294;
void* right_value295;
struct sType* __list_values9___238[1];
void* right_value296;
void* right_value297;
struct list$1sTypeph* param_types_239;
void* right_value298;
char* __list_values10___240[1];
void* right_value299;
void* right_value300;
struct list$1charph* param_names_241;
void* right_value301;
void* right_value302;
struct list$1charph* param_default_parametors_242;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
struct sFun* main_fun_243;
void* right_value307;
void* right_value308;
char* name_244;
void* right_value309;
void* right_value310;
struct sType* result_type_245;
void* right_value311;
void* right_value312;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
void* right_value317;
void* right_value318;
struct sType* __list_values11___246[4];
void* right_value319;
void* right_value320;
struct list$1sTypeph* param_types_247;
void* right_value321;
void* right_value322;
void* right_value323;
void* right_value324;
char* __list_values12___248[4];
void* right_value325;
void* right_value326;
struct list$1charph* param_names_249;
void* right_value327;
void* right_value328;
struct list$1charph* param_default_parametors_250;
void* right_value329;
void* right_value330;
void* right_value331;
void* right_value332;
void* right_value333;
void* right_value334;
void* right_value335;
struct sFun* main_fun_251;
void* right_value336;
void* right_value337;
char* name_252;
void* right_value338;
void* right_value339;
struct sType* result_type_253;
void* right_value340;
void* right_value341;
void* right_value342;
void* right_value343;
void* right_value344;
void* right_value345;
struct sType* __list_values13___254[3];
void* right_value346;
void* right_value347;
struct list$1sTypeph* param_types_255;
void* right_value348;
void* right_value349;
void* right_value350;
char* __list_values14___256[3];
void* right_value351;
void* right_value352;
struct list$1charph* param_names_257;
void* right_value353;
void* right_value354;
struct list$1charph* param_default_parametors_258;
void* right_value355;
void* right_value356;
void* right_value357;
void* right_value358;
struct sFun* main_fun_259;
void* right_value359;
void* right_value360;
char* name_260;
void* right_value361;
void* right_value362;
struct sType* result_type_261;
void* right_value363;
void* right_value364;
struct sType* __list_values15___262[1];
void* right_value365;
void* right_value366;
struct list$1sTypeph* param_types_263;
void* right_value367;
char* __list_values16___264[1];
void* right_value368;
void* right_value369;
struct list$1charph* param_names_265;
void* right_value370;
void* right_value371;
struct list$1charph* param_default_parametors_266;
void* right_value372;
void* right_value373;
void* right_value374;
void* right_value375;
struct sFun* main_fun_267;
void* right_value376;
void* right_value377;
char* name_268;
void* right_value378;
void* right_value379;
struct sType* result_type_269;
void* right_value380;
void* right_value381;
void* right_value382;
void* right_value383;
void* right_value384;
void* right_value385;
struct sType* __list_values17___270[3];
void* right_value386;
void* right_value387;
struct list$1sTypeph* param_types_271;
void* right_value388;
void* right_value389;
void* right_value390;
char* __list_values18___272[3];
void* right_value391;
void* right_value392;
struct list$1charph* param_names_273;
void* right_value393;
void* right_value394;
struct list$1charph* param_default_parametors_274;
void* right_value395;
void* right_value396;
void* right_value397;
void* right_value398;
struct sFun* main_fun_275;
void* right_value399;
void* right_value400;
char* name_276;
void* right_value401;
void* right_value402;
struct sType* result_type_277;
void* right_value403;
void* right_value404;
struct list$1sTypeph* param_types_278;
void* right_value405;
void* right_value406;
struct list$1charph* param_names_279;
void* right_value407;
void* right_value408;
struct list$1charph* param_default_parametors_280;
void* right_value409;
void* right_value410;
void* right_value411;
void* right_value412;
struct sFun* main_fun_281;
void* right_value413;
void* right_value414;
char* name_282;
void* right_value415;
void* right_value416;
struct sType* result_type_283;
void* right_value417;
void* right_value418;
void* right_value419;
void* right_value420;
void* right_value421;
void* right_value422;
void* right_value423;
void* right_value424;
struct sType* __list_values19___284[4];
void* right_value425;
void* right_value426;
struct list$1sTypeph* param_types_285;
void* right_value427;
void* right_value428;
void* right_value429;
void* right_value430;
char* __list_values20___286[4];
void* right_value431;
void* right_value432;
struct list$1charph* param_names_287;
void* right_value433;
void* right_value434;
struct list$1charph* param_default_parametors_288;
void* right_value435;
void* right_value436;
void* right_value437;
void* right_value438;
struct sFun* main_fun_289;
void* right_value439;
void* right_value440;
char* name_290;
void* right_value441;
void* right_value442;
struct sType* result_type_291;
void* right_value443;
void* right_value444;
struct list$1sTypeph* param_types_292;
void* right_value445;
void* right_value446;
struct list$1charph* param_names_293;
void* right_value447;
void* right_value448;
struct list$1charph* param_default_parametors_294;
void* right_value449;
void* right_value450;
void* right_value451;
void* right_value452;
struct sFun* fun_295;
void* right_value453;
void* right_value454;
char* name_296;
void* right_value455;
void* right_value456;
struct sType* result_type_297;
void* right_value457;
void* right_value458;
struct list$1sTypeph* param_types_298;
void* right_value459;
void* right_value460;
struct list$1charph* param_names_299;
void* right_value461;
void* right_value462;
struct list$1charph* param_default_parametors_300;
void* right_value463;
void* right_value464;
void* right_value465;
void* right_value466;
struct sFun* fun_301;
void* right_value467;
int __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&name_152, 0, sizeof(char*));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&result_type_153, 0, sizeof(struct sType*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&param_types_159, 0, sizeof(struct list$1sTypeph*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&param_names_165, 0, sizeof(struct list$1charph*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&param_default_parametors_166, 0, sizeof(struct list$1charph*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&main_fun_167, 0, sizeof(struct sFun*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&name_212, 0, sizeof(char*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&result_type_213, 0, sizeof(struct sType*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&param_types_215, 0, sizeof(struct list$1sTypeph*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&param_names_217, 0, sizeof(struct list$1charph*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&param_default_parametors_218, 0, sizeof(struct list$1charph*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&main_fun_219, 0, sizeof(struct sFun*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&name_220, 0, sizeof(char*));
right_value228 = (void*)0;
right_value229 = (void*)0;
memset(&result_type_221, 0, sizeof(struct sType*));
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
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&param_types_223, 0, sizeof(struct list$1sTypeph*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&param_names_225, 0, sizeof(struct list$1charph*));
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&param_default_parametors_226, 0, sizeof(struct list$1charph*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&main_fun_227, 0, sizeof(struct sFun*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&name_228, 0, sizeof(char*));
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
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
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&param_types_231, 0, sizeof(struct list$1sTypeph*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&param_names_233, 0, sizeof(struct list$1charph*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&param_default_parametors_234, 0, sizeof(struct list$1charph*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&main_fun_235, 0, sizeof(struct sFun*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&name_236, 0, sizeof(char*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&result_type_237, 0, sizeof(struct sType*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&param_types_239, 0, sizeof(struct list$1sTypeph*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&param_names_241, 0, sizeof(struct list$1charph*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&param_default_parametors_242, 0, sizeof(struct list$1charph*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&main_fun_243, 0, sizeof(struct sFun*));
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&name_244, 0, sizeof(char*));
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&result_type_245, 0, sizeof(struct sType*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&param_types_247, 0, sizeof(struct list$1sTypeph*));
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&param_names_249, 0, sizeof(struct list$1charph*));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&param_default_parametors_250, 0, sizeof(struct list$1charph*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&main_fun_251, 0, sizeof(struct sFun*));
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&name_252, 0, sizeof(char*));
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&result_type_253, 0, sizeof(struct sType*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&param_types_255, 0, sizeof(struct list$1sTypeph*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&param_names_257, 0, sizeof(struct list$1charph*));
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&param_default_parametors_258, 0, sizeof(struct list$1charph*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&main_fun_259, 0, sizeof(struct sFun*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&name_260, 0, sizeof(char*));
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&result_type_261, 0, sizeof(struct sType*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&param_types_263, 0, sizeof(struct list$1sTypeph*));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&param_names_265, 0, sizeof(struct list$1charph*));
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&param_default_parametors_266, 0, sizeof(struct list$1charph*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&main_fun_267, 0, sizeof(struct sFun*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&name_268, 0, sizeof(char*));
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&result_type_269, 0, sizeof(struct sType*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&param_types_271, 0, sizeof(struct list$1sTypeph*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&param_names_273, 0, sizeof(struct list$1charph*));
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&param_default_parametors_274, 0, sizeof(struct list$1charph*));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&main_fun_275, 0, sizeof(struct sFun*));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&name_276, 0, sizeof(char*));
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&result_type_277, 0, sizeof(struct sType*));
right_value403 = (void*)0;
right_value404 = (void*)0;
memset(&param_types_278, 0, sizeof(struct list$1sTypeph*));
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&param_names_279, 0, sizeof(struct list$1charph*));
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&param_default_parametors_280, 0, sizeof(struct list$1charph*));
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&main_fun_281, 0, sizeof(struct sFun*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&name_282, 0, sizeof(char*));
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&result_type_283, 0, sizeof(struct sType*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
memset(&param_types_285, 0, sizeof(struct list$1sTypeph*));
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
memset(&param_names_287, 0, sizeof(struct list$1charph*));
right_value433 = (void*)0;
right_value434 = (void*)0;
memset(&param_default_parametors_288, 0, sizeof(struct list$1charph*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
memset(&main_fun_289, 0, sizeof(struct sFun*));
right_value439 = (void*)0;
right_value440 = (void*)0;
memset(&name_290, 0, sizeof(char*));
right_value441 = (void*)0;
right_value442 = (void*)0;
memset(&result_type_291, 0, sizeof(struct sType*));
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&param_types_292, 0, sizeof(struct list$1sTypeph*));
right_value445 = (void*)0;
right_value446 = (void*)0;
memset(&param_names_293, 0, sizeof(struct list$1charph*));
right_value447 = (void*)0;
right_value448 = (void*)0;
memset(&param_default_parametors_294, 0, sizeof(struct list$1charph*));
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value452 = (void*)0;
memset(&fun_295, 0, sizeof(struct sFun*));
right_value453 = (void*)0;
right_value454 = (void*)0;
memset(&name_296, 0, sizeof(char*));
right_value455 = (void*)0;
right_value456 = (void*)0;
memset(&result_type_297, 0, sizeof(struct sType*));
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&param_types_298, 0, sizeof(struct list$1sTypeph*));
right_value459 = (void*)0;
right_value460 = (void*)0;
memset(&param_names_299, 0, sizeof(struct list$1charph*));
right_value461 = (void*)0;
right_value462 = (void*)0;
memset(&param_default_parametors_300, 0, sizeof(struct list$1charph*));
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
memset(&fun_301, 0, sizeof(struct sFun*));
right_value467 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_152=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string("come_calloc"))));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_153=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 670, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values1___154[0]=come_increment_ref_count(((struct sType*)(right_value170=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 671, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[1]=come_increment_ref_count(((struct sType*)(right_value172=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value171=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 671, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[2]=come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 671, "sType")))),"char*",(_Bool)0,info))));
__list_values1___154[3]=come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 671, "sType")))),"int",(_Bool)0,info))));
__list_values1___154[4]=come_increment_ref_count(((struct sType*)(right_value178=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value177=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 671, "sType")))),"char*",(_Bool)0,info))));
}        param_types_159=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value183=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 671, "struct list$1sTypeph")))),5,__list_values1___154))));
        come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value170,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value172,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value182,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value183,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values2___160[0]=come_increment_ref_count(((char*)(right_value184=__builtin_string("count"))));
__list_values2___160[1]=come_increment_ref_count(((char*)(right_value185=__builtin_string("size"))));
__list_values2___160[2]=come_increment_ref_count(((char*)(right_value186=__builtin_string("sname"))));
__list_values2___160[3]=come_increment_ref_count(((char*)(right_value187=__builtin_string("sline"))));
__list_values2___160[4]=come_increment_ref_count(((char*)(right_value188=__builtin_string("class_name"))));
}        param_names_165=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value193=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value192=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 672, "struct list$1charph")))),5,__list_values2___160))));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value192,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value193,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_166=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value195=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value194=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 673, "list$1charph"))))))));
        come_call_finalizer3(right_value194,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value195,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_166,((void*)0));
        list$1charph_push_back(param_default_parametors_166,((void*)0));
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string("null")))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("0")))));
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_166,(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string("null")))));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_167=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value202=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value199=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 679, "sFun")))),(char*)come_increment_ref_count(name_152),(struct sType*)come_increment_ref_count(result_type_153),(struct list$1sTypeph*)come_increment_ref_count(param_types_159),(struct list$1charph*)come_increment_ref_count(param_names_165),(struct list$1charph*)come_increment_ref_count(param_default_parametors_166),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string("")))),info))));
        come_call_finalizer3(right_value199,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value202,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(name_152)))),(struct sFun*)come_increment_ref_count(main_fun_167));
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_152 = come_decrement_ref_count2(name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_153,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_159,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_165,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_166,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_167,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_212=(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string("come_increment_ref_count"))));
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_213=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 690, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values3___214[0]=come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 691, "sType")))),"void*",(_Bool)0,info))));
}        param_types_215=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value216=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value215=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 691, "struct list$1sTypeph")))),1,__list_values3___214))));
        come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value215,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value216,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values4___216[0]=come_increment_ref_count(((char*)(right_value217=__builtin_string("mem"))));
}        param_names_217=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value219=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value218=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 692, "struct list$1charph")))),1,__list_values4___216))));
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value218,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value219,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_218=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value221=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value220=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 693, "list$1charph"))))))));
        come_call_finalizer3(right_value220,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value221,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_219=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value225=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value222=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 694, "sFun")))),(char*)come_increment_ref_count(name_212),(struct sType*)come_increment_ref_count(result_type_213),(struct list$1sTypeph*)come_increment_ref_count(param_types_215),(struct list$1charph*)come_increment_ref_count(param_names_217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_218),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string("")))),info))));
        come_call_finalizer3(right_value222,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value225,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(name_212)))),(struct sFun*)come_increment_ref_count(main_fun_219));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_212 = come_decrement_ref_count2(name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_213,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_215,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_217,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_219,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_220=(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string("come_call_finalizer"))));
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value228=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 705, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value228,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values5___222[0]=come_increment_ref_count(((struct sType*)(right_value231=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 706, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[1]=come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 706, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[2]=come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 706, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[3]=come_increment_ref_count(((struct sType*)(right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 706, "sType")))),"void*",(_Bool)0,info))));
__list_values5___222[4]=come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 706, "sType")))),"int",(_Bool)0,info))));
__list_values5___222[5]=come_increment_ref_count(((struct sType*)(right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 706, "sType")))),"int",(_Bool)0,info))));
__list_values5___222[6]=come_increment_ref_count(((struct sType*)(right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 706, "sType")))),"int",(_Bool)0,info))));
}        param_types_223=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value245=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value244=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 706, "struct list$1sTypeph")))),7,__list_values5___222))));
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
        come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value244,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value245,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values6___224[0]=come_increment_ref_count(((char*)(right_value246=__builtin_string("fun"))));
__list_values6___224[1]=come_increment_ref_count(((char*)(right_value247=__builtin_string("mem"))));
__list_values6___224[2]=come_increment_ref_count(((char*)(right_value248=__builtin_string("protocol_fun"))));
__list_values6___224[3]=come_increment_ref_count(((char*)(right_value249=__builtin_string("protocol_obj"))));
__list_values6___224[4]=come_increment_ref_count(((char*)(right_value250=__builtin_string("call_finalizer_only"))));
__list_values6___224[5]=come_increment_ref_count(((char*)(right_value251=__builtin_string("no_decrement"))));
__list_values6___224[6]=come_increment_ref_count(((char*)(right_value252=__builtin_string("no_free"))));
}        param_names_225=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value254=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value253=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 707, "struct list$1charph")))),7,__list_values6___224))));
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value253,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value254,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_226=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value256=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value255=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 708, "list$1charph"))))))));
        come_call_finalizer3(right_value255,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value256,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_227=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value260=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value257=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 709, "sFun")))),(char*)come_increment_ref_count(name_220),(struct sType*)come_increment_ref_count(result_type_221),(struct list$1sTypeph*)come_increment_ref_count(param_types_223),(struct list$1charph*)come_increment_ref_count(param_names_225),(struct list$1charph*)come_increment_ref_count(param_default_parametors_226),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string("")))),info))));
        come_call_finalizer3(right_value257,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value260,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string(name_220)))),(struct sFun*)come_increment_ref_count(main_fun_227));
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_220 = come_decrement_ref_count2(name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_221,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_223,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_225,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_226,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_227,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_228=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string("come_decrement_ref_count"))));
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 720, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values7___230[0]=come_increment_ref_count(((struct sType*)(right_value266=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 721, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[1]=come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 721, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[2]=come_increment_ref_count(((struct sType*)(right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 721, "sType")))),"void*",(_Bool)0,info))));
__list_values7___230[3]=come_increment_ref_count(((struct sType*)(right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 721, "sType")))),"bool",(_Bool)0,info))));
__list_values7___230[4]=come_increment_ref_count(((struct sType*)(right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 721, "sType")))),"bool",(_Bool)0,info))));
}        param_types_231=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value276=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value275=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 721, "struct list$1sTypeph")))),5,__list_values7___230))));
        come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value268,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value269,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value274,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value275,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value276,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values8___232[0]=come_increment_ref_count(((char*)(right_value277=__builtin_string("mem"))));
__list_values8___232[1]=come_increment_ref_count(((char*)(right_value278=__builtin_string("protocol_fun"))));
__list_values8___232[2]=come_increment_ref_count(((char*)(right_value279=__builtin_string("protocol_obj"))));
__list_values8___232[3]=come_increment_ref_count(((char*)(right_value280=__builtin_string("no_decrement"))));
__list_values8___232[4]=come_increment_ref_count(((char*)(right_value281=__builtin_string("no_free"))));
}        param_names_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value283=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value282=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 722, "struct list$1charph")))),5,__list_values8___232))));
        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value282,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value283,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value285=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value284=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 723, "list$1charph"))))))));
        come_call_finalizer3(right_value284,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value285,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_235=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value289=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value286=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 724, "sFun")))),(char*)come_increment_ref_count(name_228),(struct sType*)come_increment_ref_count(result_type_229),(struct list$1sTypeph*)come_increment_ref_count(param_types_231),(struct list$1charph*)come_increment_ref_count(param_names_233),(struct list$1charph*)come_increment_ref_count(param_default_parametors_234),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("")))),info))));
        come_call_finalizer3(right_value286,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value289,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(name_228)))),(struct sFun*)come_increment_ref_count(main_fun_235));
        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_229,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_231,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_233,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_234,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_235,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_236=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string("come_free_object"))));
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_237=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value292=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 735, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value292,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value293,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values9___238[0]=come_increment_ref_count(((struct sType*)(right_value295=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 736, "sType")))),"void*",(_Bool)0,info))));
}        param_types_239=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value297=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value296=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 736, "struct list$1sTypeph")))),1,__list_values9___238))));
        come_call_finalizer3(right_value294,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value295,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value296,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value297,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values10___240[0]=come_increment_ref_count(((char*)(right_value298=__builtin_string("mem"))));
}        param_names_241=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 737, "struct list$1charph")))),1,__list_values10___240))));
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value299,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value300,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_242=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value302=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value301=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 738, "list$1charph"))))))));
        come_call_finalizer3(right_value301,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value302,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_243=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value306=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value303=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 739, "sFun")))),(char*)come_increment_ref_count(name_236),(struct sType*)come_increment_ref_count(result_type_237),(struct list$1sTypeph*)come_increment_ref_count(param_types_239),(struct list$1charph*)come_increment_ref_count(param_names_241),(struct list$1charph*)come_increment_ref_count(param_default_parametors_242),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string("")))),info))));
        come_call_finalizer3(right_value303,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value306,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(name_236)))),(struct sFun*)come_increment_ref_count(main_fun_243));
        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_236 = come_decrement_ref_count2(name_236, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_237,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_239,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_241,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_243,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_244=(char*)come_increment_ref_count(((char*)(right_value308=__builtin_string("come_memdup"))));
        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 750, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values11___246[0]=come_increment_ref_count(((struct sType*)(right_value312=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value311=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 751, "sType")))),"void*",(_Bool)0,info))));
__list_values11___246[1]=come_increment_ref_count(((struct sType*)(right_value314=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value313=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 751, "sType")))),"char*",(_Bool)0,info))));
__list_values11___246[2]=come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 751, "sType")))),"int",(_Bool)0,info))));
__list_values11___246[3]=come_increment_ref_count(((struct sType*)(right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 751, "sType")))),"char*",(_Bool)0,info))));
}        param_types_247=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value320=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value319=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 751, "struct list$1sTypeph")))),4,__list_values11___246))));
        come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value312,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value314,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value315,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value316,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value317,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value319,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value320,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values12___248[0]=come_increment_ref_count(((char*)(right_value321=__builtin_string("block"))));
__list_values12___248[1]=come_increment_ref_count(((char*)(right_value322=__builtin_string("sname"))));
__list_values12___248[2]=come_increment_ref_count(((char*)(right_value323=__builtin_string("sline"))));
__list_values12___248[3]=come_increment_ref_count(((char*)(right_value324=__builtin_string("class_name"))));
}        param_names_249=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value326=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value325=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 752, "struct list$1charph")))),4,__list_values12___248))));
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value325,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value326,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_250=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value328=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value327=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 753, "list$1charph"))))))));
        come_call_finalizer3(right_value327,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value328,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_250,((void*)0));
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string("null")))));
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string("0")))));
        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_250,(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string("null")))));
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        main_fun_251=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value335=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value332=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 758, "sFun")))),(char*)come_increment_ref_count(name_244),(struct sType*)come_increment_ref_count(result_type_245),(struct list$1sTypeph*)come_increment_ref_count(param_types_247),(struct list$1charph*)come_increment_ref_count(param_names_249),(struct list$1charph*)come_increment_ref_count(param_default_parametors_250),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value333=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string("")))),info))));
        come_call_finalizer3(right_value332,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value335,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value336=__builtin_string(name_244)))),(struct sFun*)come_increment_ref_count(main_fun_251));
        right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_247,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_249,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_250,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_251,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_252=(char*)come_increment_ref_count(((char*)(right_value337=__builtin_string("memset"))));
        right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_253=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 769, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values13___254[0]=come_increment_ref_count(((struct sType*)(right_value341=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 770, "sType")))),"void*",(_Bool)0,info))));
__list_values13___254[1]=come_increment_ref_count(((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 770, "sType")))),"int",(_Bool)0,info))));
__list_values13___254[2]=come_increment_ref_count(((struct sType*)(right_value345=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value344=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 770, "sType")))),"long",(_Bool)0,info))));
}        param_types_255=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value347=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value346=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 770, "struct list$1sTypeph")))),3,__list_values13___254))));
        come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value341,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value344,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value345,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value346,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value347,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values14___256[0]=come_increment_ref_count(((char*)(right_value348=__builtin_string("b"))));
__list_values14___256[1]=come_increment_ref_count(((char*)(right_value349=__builtin_string("c"))));
__list_values14___256[2]=come_increment_ref_count(((char*)(right_value350=__builtin_string("len"))));
}        param_names_257=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value352=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value351=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 771, "struct list$1charph")))),3,__list_values14___256))));
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value351,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value352,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_258=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value354=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value353=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 772, "list$1charph"))))))));
        come_call_finalizer3(right_value353,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value354,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_259=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value358=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value355=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 773, "sFun")))),(char*)come_increment_ref_count(name_252),(struct sType*)come_increment_ref_count(result_type_253),(struct list$1sTypeph*)come_increment_ref_count(param_types_255),(struct list$1charph*)come_increment_ref_count(param_names_257),(struct list$1charph*)come_increment_ref_count(param_default_parametors_258),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value356=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(right_value357=__builtin_string("")))),info))));
        come_call_finalizer3(right_value355,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value358,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value359=__builtin_string(name_252)))),(struct sFun*)come_increment_ref_count(main_fun_259));
        right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_252 = come_decrement_ref_count2(name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_253,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_255,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_257,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_258,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_259,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_260=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string("__builtin_string"))));
        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_261=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value361=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 784, "sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer3(right_value361,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value362,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values15___262[0]=come_increment_ref_count(((struct sType*)(right_value364=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value363=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 785, "sType")))),"char*",(_Bool)0,info))));
}        param_types_263=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value366=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value365=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 785, "struct list$1sTypeph")))),1,__list_values15___262))));
        come_call_finalizer3(right_value363,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value364,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value365,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value366,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values16___264[0]=come_increment_ref_count(((char*)(right_value367=__builtin_string("str"))));
}        param_names_265=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value369=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value368=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 786, "struct list$1charph")))),1,__list_values16___264))));
        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value368,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value369,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_266=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value371=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value370=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 787, "list$1charph"))))))));
        come_call_finalizer3(right_value370,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value371,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_267=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value375=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value372=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 788, "sFun")))),(char*)come_increment_ref_count(name_260),(struct sType*)come_increment_ref_count(result_type_261),(struct list$1sTypeph*)come_increment_ref_count(param_types_263),(struct list$1charph*)come_increment_ref_count(param_names_265),(struct list$1charph*)come_increment_ref_count(param_default_parametors_266),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value373=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(right_value374=__builtin_string("")))),info))));
        come_call_finalizer3(right_value372,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value375,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value376=__builtin_string(name_260)))),(struct sFun*)come_increment_ref_count(main_fun_267));
        right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_260 = come_decrement_ref_count2(name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_263,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_265,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_266,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_267,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_268=(char*)come_increment_ref_count(((char*)(right_value377=__builtin_string("come_heap_init"))));
        right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value378=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 799, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value378,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value379,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values17___270[0]=come_increment_ref_count(((struct sType*)(right_value381=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value380=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 800, "sType")))),"int",(_Bool)0,info))));
__list_values17___270[1]=come_increment_ref_count(((struct sType*)(right_value383=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value382=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 800, "sType")))),"int",(_Bool)0,info))));
__list_values17___270[2]=come_increment_ref_count(((struct sType*)(right_value385=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value384=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 800, "sType")))),"int",(_Bool)0,info))));
}        param_types_271=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value387=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value386=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 800, "struct list$1sTypeph")))),3,__list_values17___270))));
        come_call_finalizer3(right_value380,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value381,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value382,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value383,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value384,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value385,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value386,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value387,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values18___272[0]=come_increment_ref_count(((char*)(right_value388=xsprintf("come_malloc"))));
__list_values18___272[1]=come_increment_ref_count(((char*)(right_value389=xsprintf("come_debug"))));
__list_values18___272[2]=come_increment_ref_count(((char*)(right_value390=xsprintf("come_gc"))));
}        param_names_273=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value392=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value391=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 801, "struct list$1charph")))),3,__list_values18___272))));
        right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value391,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value392,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_274=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value394=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value393=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 802, "list$1charph"))))))));
        come_call_finalizer3(right_value393,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value394,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_274,((void*)0));
        main_fun_275=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value398=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value395=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 804, "sFun")))),(char*)come_increment_ref_count(name_268),(struct sType*)come_increment_ref_count(result_type_269),(struct list$1sTypeph*)come_increment_ref_count(param_types_271),(struct list$1charph*)come_increment_ref_count(param_names_273),(struct list$1charph*)come_increment_ref_count(param_default_parametors_274),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value396=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(right_value397=__builtin_string("")))),info))));
        come_call_finalizer3(right_value395,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value398,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value399=__builtin_string(name_268)))),(struct sFun*)come_increment_ref_count(main_fun_275));
        right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_271,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_273,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_274,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_275,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_276=(char*)come_increment_ref_count(((char*)(right_value400=__builtin_string("come_heap_final"))));
        right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value402=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value401=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 815, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value401,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value402,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_types_278=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value404=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value403=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 816, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value403,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value404,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        param_names_279=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value406=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value405=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 817, "list$1charph"))))))));
        come_call_finalizer3(right_value405,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value406,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_280=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value408=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value407=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 818, "list$1charph"))))))));
        come_call_finalizer3(right_value407,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value408,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_281=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value412=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value409=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 819, "sFun")))),(char*)come_increment_ref_count(name_276),(struct sType*)come_increment_ref_count(result_type_277),(struct list$1sTypeph*)come_increment_ref_count(param_types_278),(struct list$1charph*)come_increment_ref_count(param_names_279),(struct list$1charph*)come_increment_ref_count(param_default_parametors_280),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value410=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(right_value411=__builtin_string("")))),info))));
        come_call_finalizer3(right_value409,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value412,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value413=__builtin_string(name_276)))),(struct sFun*)come_increment_ref_count(main_fun_281));
        right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_276 = come_decrement_ref_count2(name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_278,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_279,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_280,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_281,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_282=(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string("come_null_check"))));
        right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_283=(struct sType*)come_increment_ref_count(((struct sType*)(right_value416=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value415=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 830, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(right_value415,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value416,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values19___284[0]=come_increment_ref_count(((struct sType*)(right_value418=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value417=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 831, "sType")))),"void*",(_Bool)0,info))));
__list_values19___284[1]=come_increment_ref_count(((struct sType*)(right_value420=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value419=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 831, "sType")))),"char*",(_Bool)0,info))));
__list_values19___284[2]=come_increment_ref_count(((struct sType*)(right_value422=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value421=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 831, "sType")))),"int",(_Bool)0,info))));
__list_values19___284[3]=come_increment_ref_count(((struct sType*)(right_value424=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value423=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 831, "sType")))),"int",(_Bool)0,info))));
}        param_types_285=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value426=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value425=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 831, "struct list$1sTypeph")))),4,__list_values19___284))));
        come_call_finalizer3(right_value417,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value418,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value419,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value420,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value421,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value422,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value423,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value424,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value425,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value426,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values20___286[0]=come_increment_ref_count(((char*)(right_value427=__builtin_string("mem"))));
__list_values20___286[1]=come_increment_ref_count(((char*)(right_value428=__builtin_string("sname"))));
__list_values20___286[2]=come_increment_ref_count(((char*)(right_value429=__builtin_string("sline"))));
__list_values20___286[3]=come_increment_ref_count(((char*)(right_value430=__builtin_string("id"))));
}        param_names_287=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value432=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value431=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 832, "struct list$1charph")))),4,__list_values20___286))));
        right_value427 = come_decrement_ref_count2(right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value431,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value432,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_288=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value434=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value433=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 833, "list$1charph"))))))));
        come_call_finalizer3(right_value433,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value434,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        main_fun_289=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value438=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value435=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 834, "sFun")))),(char*)come_increment_ref_count(name_282),(struct sType*)come_increment_ref_count(result_type_283),(struct list$1sTypeph*)come_increment_ref_count(param_types_285),(struct list$1charph*)come_increment_ref_count(param_names_287),(struct list$1charph*)come_increment_ref_count(param_default_parametors_288),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value436=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(right_value437=__builtin_string("")))),info))));
        come_call_finalizer3(right_value435,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value438,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value439=__builtin_string(name_282)))),(struct sFun*)come_increment_ref_count(main_fun_289));
        right_value439 = come_decrement_ref_count2(right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_285,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_287,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_288,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_289,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_290=(char*)come_increment_ref_count(((char*)(right_value440=__builtin_string("__builtin_va_start"))));
        right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_291=(struct sType*)come_increment_ref_count(((struct sType*)(right_value442=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value441=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 845, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value441,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value442,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_types_292=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value444=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value443=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 846, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value443,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value444,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        param_names_293=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value446=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value445=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 847, "list$1charph"))))))));
        come_call_finalizer3(right_value445,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value446,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_294=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value448=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value447=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 848, "list$1charph"))))))));
        come_call_finalizer3(right_value447,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value448,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_295=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value452=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value449=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 849, "sFun")))),(char*)come_increment_ref_count(name_290),(struct sType*)come_increment_ref_count(result_type_291),(struct list$1sTypeph*)come_increment_ref_count(param_types_292),(struct list$1charph*)come_increment_ref_count(param_names_293),(struct list$1charph*)come_increment_ref_count(param_default_parametors_294),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value450=__builtin_string("void __builtin_va_start()")))),(char*)come_increment_ref_count(((char*)(right_value451=__builtin_string("")))),info))));
        come_call_finalizer3(right_value449,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value450 = come_decrement_ref_count2(right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value451 = come_decrement_ref_count2(right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value452,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value453=__builtin_string(name_290)))),(struct sFun*)come_increment_ref_count(fun_295));
        right_value453 = come_decrement_ref_count2(right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_290 = come_decrement_ref_count2(name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_292,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_293,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_294,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_295,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_296=(char*)come_increment_ref_count(((char*)(right_value454=__builtin_string("__builtin_va_end"))));
        right_value454 = come_decrement_ref_count2(right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_297=(struct sType*)come_increment_ref_count(((struct sType*)(right_value456=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value455=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 860, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value455,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value456,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_types_298=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value458=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value457=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 861, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value457,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value458,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        param_names_299=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value460=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value459=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 862, "list$1charph"))))))));
        come_call_finalizer3(right_value459,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value460,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_300=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value462=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value461=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 863, "list$1charph"))))))));
        come_call_finalizer3(right_value461,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value462,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_301=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value466=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value463=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 864, "sFun")))),(char*)come_increment_ref_count(name_296),(struct sType*)come_increment_ref_count(result_type_297),(struct list$1sTypeph*)come_increment_ref_count(param_types_298),(struct list$1charph*)come_increment_ref_count(param_names_299),(struct list$1charph*)come_increment_ref_count(param_default_parametors_300),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value464=__builtin_string("void __builtin_va_end()")))),(char*)come_increment_ref_count(((char*)(right_value465=__builtin_string("")))),info))));
        come_call_finalizer3(right_value463,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value464 = come_decrement_ref_count2(right_value464, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value466,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value467=__builtin_string(name_296)))),(struct sFun*)come_increment_ref_count(fun_301));
        right_value467 = come_decrement_ref_count2(right_value467, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        name_296 = come_decrement_ref_count2(name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_298,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_299,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_300,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_301,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("05function.c", 874,1),transpile_toplevel((_Bool)0,info),come_pop_stackframe());
    __result137__ = 0;
    return __result137__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_155;
struct list$1sTypeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_155, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_155=0;            i_155<num_value;            i_155++            ){
                list$1sTypeph_push_back(self,values[i_155]);
            }
            __result110__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result110__;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional237;
void* right_value179;
struct list_item$1sTypeph* litem_156;
struct sType* __dec_obj66;
_Bool _if_conditional238;
void* right_value180;
struct list_item$1sTypeph* litem_157;
struct sType* __dec_obj67;
void* right_value181;
struct list_item$1sTypeph* litem_158;
struct sType* __dec_obj68;
struct list$1sTypeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1sTypeph*));
right_value180 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1sTypeph*));
right_value181 = (void*)0;
memset(&litem_158, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional237=self->len==0,                    _if_conditional237) {
                        litem_156=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value179=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 221, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value179,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_156->prev=((void*)0);
                        litem_156->next=((void*)0);
                        __dec_obj66=litem_156->item;
                        litem_156->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_156;
                        self->head=litem_156;
                    }
                    else {
                        if(_if_conditional238=self->len==1,                        _if_conditional238) {
                            litem_157=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value180=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 231, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value180,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_157->prev=self->head;
                            litem_157->next=((void*)0);
                            __dec_obj67=litem_157->item;
                            litem_157->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_157;
                            self->head->next=litem_157;
                        }
                        else {
                            litem_158=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value181=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 241, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value181,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_158->prev=self->tail;
                            litem_158->next=((void*)0);
                            __dec_obj68=litem_158->item;
                            litem_158->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_158;
                            self->tail=litem_158;
                        }
                    }
                    self->len++;
                    __result109__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result109__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_161;
struct list$1charph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_161, 0, sizeof(int));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            for(            i_161=0;            i_161<num_value;            i_161++            ){
                list$1charph_push_back(self,values[i_161]);
            }
            __result112__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result112__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional239;
void* right_value189;
struct list_item$1charph* litem_162;
char* __dec_obj69;
_Bool _if_conditional240;
void* right_value190;
struct list_item$1charph* litem_163;
char* __dec_obj70;
void* right_value191;
struct list_item$1charph* litem_164;
char* __dec_obj71;
struct list$1charph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charph*));
right_value190 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charph*));
right_value191 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1charph*));
                    if(_if_conditional239=self->len==0,                    _if_conditional239) {
                        litem_162=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value189=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 221, "list_item$1charph"))));
                        come_call_finalizer3(right_value189,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_162->prev=((void*)0);
                        litem_162->next=((void*)0);
                        __dec_obj69=litem_162->item;
                        litem_162->item=(char*)come_increment_ref_count(item);
                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_162;
                        self->head=litem_162;
                    }
                    else {
                        if(_if_conditional240=self->len==1,                        _if_conditional240) {
                            litem_163=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value190=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 231, "list_item$1charph"))));
                            come_call_finalizer3(right_value190,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_163->prev=self->head;
                            litem_163->next=((void*)0);
                            __dec_obj70=litem_163->item;
                            litem_163->item=(char*)come_increment_ref_count(item);
                            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_163;
                            self->head->next=litem_163;
                        }
                        else {
                            litem_164=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value191=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 241, "list_item$1charph"))));
                            come_call_finalizer3(right_value191,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_164->prev=self->tail;
                            litem_164->next=((void*)0);
                            __dec_obj71=litem_164->item;
                            litem_164->item=(char*)come_increment_ref_count(item);
                            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail->next=litem_164;
                            self->tail=litem_164;
                        }
                    }
                    self->len++;
                    __result111__ = __result_obj__ = self;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result111__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__;
_Bool _if_conditional241;
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional31;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool same_key_exist_203;
char* it2_206;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct map$2charphsFunph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(unsigned int));
memset(&same_key_exist_203, 0, sizeof(_Bool));
memset(&it2_206, 0, sizeof(char*));
            if(_if_conditional241=self->len*10>=self->size,            _if_conditional241) {
                map$2charphsFunph_rehash(self);
            }
            hash_185=string_get_hash_key(key)%self->size;
            it_186=hash_185;
            while(_while_condtional31=(_Bool)1,            _while_condtional31) {
                if(_if_conditional253=self->item_existance[it_186],                _if_conditional253) {
                    if(_if_conditional254=string_equals(self->keys[it_186],key),                    _if_conditional254) {
                        if(_if_conditional255=1,                        _if_conditional255) {
                            list$1charp_remove(self->key_list,self->keys[it_186]);
                            self->keys[it_186] = come_decrement_ref_count2(self->keys[it_186], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_186]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_186]);
                            self->keys[it_186]=key;
                        }
                        if(_if_conditional275=1,                        _if_conditional275) {
                            come_call_finalizer3(self->items[it_186],sFun_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_186]=(struct sFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_186]=item;
                        }
                        break;
                    }
                    it_186++;
                    if(_if_conditional276=it_186>=self->size,                    _if_conditional276) {
                        it_186=0;
                    }
                    else {
                        if(_if_conditional277=it_186==hash_185,                        _if_conditional277) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_186]=(_Bool)1;
                    if(_if_conditional278=1,                    _if_conditional278) {
                        self->keys[it_186]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_186]=key;
                    }
                    if(_if_conditional279=1,                    _if_conditional279) {
                        self->items[it_186]=(struct sFun*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_186]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_203=(_Bool)0;
            for(            it2_206=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_206=list$1charp_next(self->key_list)            ){
                if(_if_conditional284=string_equals(it2_206,key),                _if_conditional284) {
                    same_key_exist_203=(_Bool)1;
                }
            }
            if(_if_conditional285=!same_key_exist_203,            _if_conditional285) {
                list$1charp_push_back(self->key_list,key);
            }
            __result136__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result136__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
void* __result_obj__;
int size_168;
void* right_value203;
char** keys_169;
void* right_value204;
struct sFun** items_170;
void* right_value205;
_Bool* item_existance_171;
int len_172;
char* it_175;
struct sFun* default_value_178;
struct sFun* it2_181;
unsigned int hash_182;
int n_183;
_Bool _while_condtional30;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
struct sFun* default_value_184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_168, 0, sizeof(int));
right_value203 = (void*)0;
memset(&keys_169, 0, sizeof(char**));
right_value204 = (void*)0;
memset(&items_170, 0, sizeof(struct sFun**));
right_value205 = (void*)0;
memset(&item_existance_171, 0, sizeof(_Bool*));
memset(&len_172, 0, sizeof(int));
memset(&it_175, 0, sizeof(char*));
memset(&default_value_178, 0, sizeof(struct sFun*));
memset(&it2_181, 0, sizeof(struct sFun*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&n_183, 0, sizeof(int));
memset(&default_value_184, 0, sizeof(struct sFun*));
                    size_168=self->size*10;
                    keys_169=(char**)come_increment_ref_count(((char**)(right_value203=(char**)come_calloc(1, sizeof(char*)*(1*(size_168)), "./neo-c.h", 1317, "char*%"))));
                    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_170=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value204=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_168)), "./neo-c.h", 1318, "sFun*%"))));
                    come_call_finalizer3(right_value204,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_171=(_Bool*)come_increment_ref_count(((_Bool*)(right_value205=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_168)), "./neo-c.h", 1319, "bool"))));
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_172=0;
                    for(                    it_175=map$2charphsFunph_begin(self);                    !map$2charphsFunph_end(self);                    it_175=map$2charphsFunph_next(self)                    ){
                        memset(&default_value_178,0,sizeof(struct sFun*));
                        it2_181=map$2charphsFunph_at(self,it_175,default_value_178);
                        hash_182=string_get_hash_key(it_175)%size_168;
                        n_183=hash_182;
                        while(_while_condtional30=(_Bool)1,                        _while_condtional30) {
                            if(_if_conditional250=item_existance_171[n_183],                            _if_conditional250) {
                                n_183++;
                                if(_if_conditional251=n_183>=size_168,                                _if_conditional251) {
                                    n_183=0;
                                }
                                else {
                                    if(_if_conditional252=n_183==hash_182,                                    _if_conditional252) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_171[n_183]=(_Bool)1;
                                keys_169[n_183]=it_175;
                                items_170[n_183]=map$2charphsFunph_at(self,it_175,default_value_184);
                                len_172++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_169;
                    self->items=items_170;
                    self->item_existance=item_existance_171;
                    self->size=size_168;
                    self->len=len_172;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional242;
char* result_173;
char* __result113__;
_Bool _if_conditional243;
char* __result114__;
char* result_174;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_173, 0, sizeof(char*));
memset(&result_174, 0, sizeof(char*));
                        if(_if_conditional242=self==((void*)0),                        _if_conditional242) {
                            memset(&result_173,0,sizeof(char*));
                            __result113__ = __result_obj__ = result_173;
                            return __result113__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result114__ = __result_obj__ = self->key_list->it->item;
                            return __result114__;
                        }
                        memset(&result_174,0,sizeof(char*));
                        __result115__ = __result_obj__ = result_174;
                        return __result115__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result116__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result116__;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__;
_Bool _if_conditional244;
char* result_176;
char* __result117__;
_Bool _if_conditional245;
char* __result118__;
char* result_177;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(char*));
memset(&result_177, 0, sizeof(char*));
                        if(_if_conditional244=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional244) {
                            memset(&result_176,0,sizeof(char*));
                            __result117__ = __result_obj__ = result_176;
                            return __result117__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result118__ = __result_obj__ = self->key_list->it->item;
                            return __result118__;
                        }
                        memset(&result_177,0,sizeof(char*));
                        __result119__ = __result_obj__ = result_177;
                        return __result119__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_179;
unsigned int it_180;
_Bool _while_condtional29;
_Bool _if_conditional246;
_Bool _if_conditional247;
struct sFun* __result120__;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct sFun* __result121__;
struct sFun* __result122__;
struct sFun* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_179, 0, sizeof(unsigned int));
memset(&it_180, 0, sizeof(unsigned int));
                            hash_179=string_get_hash_key(((char*)key))%self->size;
                            it_180=hash_179;
                            while(_while_condtional29=(_Bool)1,                            _while_condtional29) {
                                if(_if_conditional246=self->item_existance[it_180],                                _if_conditional246) {
                                    if(_if_conditional247=string_equals(self->keys[it_180],key),                                    _if_conditional247) {
                                        __result120__ = __result_obj__ = self->items[it_180];
                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result120__;
                                    }
                                    it_180++;
                                    if(_if_conditional248=it_180>=self->size,                                    _if_conditional248) {
                                        it_180=0;
                                    }
                                    else {
                                        if(_if_conditional249=it_180==hash_179,                                        _if_conditional249) {
                                            __result121__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result121__;
                                        }
                                    }
                                }
                                else {
                                    __result122__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result122__;
                                }
                            }
                            __result123__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result123__;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_187;
struct list_item$1charp* it_188;
_Bool _while_condtional32;
_Bool _if_conditional256;
struct list$1charp* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_187, 0, sizeof(int));
memset(&it_188, 0, sizeof(struct list_item$1charp*));
                                it2_187=0;
                                it_188=self->head;
                                while(_while_condtional32=it_188!=((void*)0),                                _while_condtional32) {
                                    if(_if_conditional256=string_equals(it_188->item,item),                                    _if_conditional256) {
                                        list$1charp_delete(self,it2_187,it2_187+1);
                                        break;
                                    }
                                    it2_187++;
                                    it_188=it_188->next;
                                }
                                __result127__ = __result_obj__ = self;
                                return __result127__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
int tmp_189;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
struct list$1charp* __result124__;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct list_item$1charp* it_192;
int i_193;
_Bool _while_condtional34;
_Bool _if_conditional265;
struct list_item$1charp* prev_it_194;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct list_item$1charp* it_195;
int i_196;
_Bool _while_condtional35;
_Bool _if_conditional268;
_Bool _if_conditional269;
struct list_item$1charp* prev_it_197;
struct list_item$1charp* it_198;
struct list_item$1charp* head_prev_it_199;
struct list_item$1charp* tail_it_200;
int i_201;
_Bool _while_condtional36;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct list_item$1charp* prev_it_202;
_Bool _if_conditional273;
_Bool _if_conditional274;
struct list$1charp* __result126__;
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
                                            if(_if_conditional257=head<0,                                            _if_conditional257) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional258=tail<0,                                            _if_conditional258) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional259=head>tail,                                            _if_conditional259) {
                                                tmp_189=tail;
                                                tail=head;
                                                head=tmp_189;
                                            }
                                            if(_if_conditional260=head<0,                                            _if_conditional260) {
                                                head=0;
                                            }
                                            if(_if_conditional261=tail>self->len,                                            _if_conditional261) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional262=head==tail,                                            _if_conditional262) {
                                                __result124__ = __result_obj__ = self;
                                                return __result124__;
                                            }
                                            if(_if_conditional263=head==0&&tail==self->len,                                            _if_conditional263) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional264=head==0,                                                _if_conditional264) {
                                                    it_192=self->head;
                                                    i_193=0;
                                                    while(_while_condtional34=it_192!=((void*)0),                                                    _while_condtional34) {
                                                        if(_if_conditional265=i_193<tail,                                                        _if_conditional265) {
                                                            prev_it_194=it_192;
                                                            it_192=it_192->next;
                                                            i_193++;
                                                            come_call_finalizer3(prev_it_194,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional266=i_193==tail,                                                            _if_conditional266) {
                                                                self->head=it_192;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_192=it_192->next;
                                                                i_193++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional267=tail==self->len,                                                    _if_conditional267) {
                                                        it_195=self->head;
                                                        i_196=0;
                                                        while(_while_condtional35=it_195!=((void*)0),                                                        _while_condtional35) {
                                                            if(_if_conditional268=i_196==head,                                                            _if_conditional268) {
                                                                self->tail=it_195->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional269=i_196>=head,                                                            _if_conditional269) {
                                                                prev_it_197=it_195;
                                                                it_195=it_195->next;
                                                                i_196++;
                                                                come_call_finalizer3(prev_it_197,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_195=it_195->next;
                                                                i_196++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_198=self->head;
                                                        head_prev_it_199=((void*)0);
                                                        tail_it_200=((void*)0);
                                                        i_201=0;
                                                        while(_while_condtional36=it_198!=((void*)0),                                                        _while_condtional36) {
                                                            if(_if_conditional270=i_201==head,                                                            _if_conditional270) {
                                                                head_prev_it_199=it_198->prev;
                                                            }
                                                            if(_if_conditional271=i_201==tail,                                                            _if_conditional271) {
                                                                tail_it_200=it_198;
                                                            }
                                                            if(_if_conditional272=i_201>=head&&i_201<tail,                                                            _if_conditional272) {
                                                                prev_it_202=it_198;
                                                                it_198=it_198->next;
                                                                i_201++;
                                                                come_call_finalizer3(prev_it_202,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_198=it_198->next;
                                                                i_201++;
                                                            }
                                                        }
                                                        if(_if_conditional273=head_prev_it_199!=((void*)0),                                                        _if_conditional273) {
                                                            head_prev_it_199->next=tail_it_200;
                                                        }
                                                        if(_if_conditional274=tail_it_200!=((void*)0),                                                        _if_conditional274) {
                                                            tail_it_200->prev=head_prev_it_199;
                                                        }
                                                    }
                                                }
                                            }
                                            __result126__ = __result_obj__ = self;
                                            return __result126__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_190;
_Bool _while_condtional33;
struct list_item$1charp* prev_it_191;
struct list$1charp* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_190, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_191, 0, sizeof(struct list_item$1charp*));
                                                    it_190=self->head;
                                                    while(_while_condtional33=it_190!=((void*)0),                                                    _while_condtional33) {
                                                        prev_it_191=it_190;
                                                        it_190=it_190->next;
                                                        come_call_finalizer3(prev_it_191,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result125__ = __result_obj__ = self;
                                                    return __result125__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional280;
char* result_204;
char* __result128__;
_Bool _if_conditional281;
char* __result129__;
char* result_205;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_204, 0, sizeof(char*));
memset(&result_205, 0, sizeof(char*));
                if(_if_conditional280=self==((void*)0),                _if_conditional280) {
                    memset(&result_204,0,sizeof(char*));
                    __result128__ = __result_obj__ = result_204;
                    return __result128__;
                }
                self->it=self->head;
                if(self->it) {
                    __result129__ = __result_obj__ = self->it->item;
                    return __result129__;
                }
                memset(&result_205,0,sizeof(char*));
                __result130__ = __result_obj__ = result_205;
                return __result130__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
                __result131__ = self==((void*)0)||self->it==((void*)0);
                return __result131__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional282;
char* result_207;
char* __result132__;
_Bool _if_conditional283;
char* __result133__;
char* result_208;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(char*));
memset(&result_208, 0, sizeof(char*));
                if(_if_conditional282=self==((void*)0)||self->it==((void*)0),                _if_conditional282) {
                    memset(&result_207,0,sizeof(char*));
                    __result132__ = __result_obj__ = result_207;
                    return __result132__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result133__ = __result_obj__ = self->it->item;
                    return __result133__;
                }
                memset(&result_208,0,sizeof(char*));
                __result134__ = __result_obj__ = result_208;
                return __result134__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional286;
void* right_value206;
struct list_item$1charp* litem_209;
_Bool _if_conditional287;
void* right_value207;
struct list_item$1charp* litem_210;
void* right_value208;
struct list_item$1charp* litem_211;
struct list$1charp* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
memset(&litem_209, 0, sizeof(struct list_item$1charp*));
right_value207 = (void*)0;
memset(&litem_210, 0, sizeof(struct list_item$1charp*));
right_value208 = (void*)0;
memset(&litem_211, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional286=self->len==0,                    _if_conditional286) {
                        litem_209=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value206=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 221, "list_item$1charp"))));
                        come_call_finalizer3(right_value206,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_209->prev=((void*)0);
                        litem_209->next=((void*)0);
                        litem_209->item=item;
                        self->tail=litem_209;
                        self->head=litem_209;
                    }
                    else {
                        if(_if_conditional287=self->len==1,                        _if_conditional287) {
                            litem_210=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value207=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 231, "list_item$1charp"))));
                            come_call_finalizer3(right_value207,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_210->prev=self->head;
                            litem_210->next=((void*)0);
                            litem_210->item=item;
                            self->tail=litem_210;
                            self->head->next=litem_210;
                        }
                        else {
                            litem_211=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value208=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 241, "list_item$1charp"))));
                            come_call_finalizer3(right_value208,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_211->prev=self->tail;
                            litem_211->next=((void*)0);
                            litem_211->item=item;
                            self->tail->next=litem_211;
                            self->tail=litem_211;
                        }
                    }
                    self->len++;
                    __result135__ = __result_obj__ = self;
                    return __result135__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_302;
_Bool is_type_name_flag_303;
int sline_304;
_Bool define_struct_nobody_305;
char* p_306;
int sline_307;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value468;
char* word_308;
_Bool _if_conditional290;
_Bool define_function_pointer_result_function_309;
_Bool define_variable_between_brace_310;
_Bool _if_conditional291;
char* p_311;
_Bool _if_conditional292;
void* right_value469;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_312;
char* fun_name_313;
_Bool err_314;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value470;
char* word_315;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool define_function_flag_316;
_Bool _if_conditional300;
char* p_317;
_Bool _if_conditional301;
void* right_value471;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_318;
char* fun_name_319;
_Bool err_320;
_Bool _if_conditional302;
char* word_321;
_Bool _if_conditional303;
void* right_value472;
char* __dec_obj72;
_Bool _if_conditional304;
void* right_value473;
char* __dec_obj73;
char* __dec_obj74;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _while_condtional37;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value474;
char* __dec_obj75;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool define_variable_322;
_Bool _if_conditional313;
char* p_323;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value475;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_324;
char* fun_name_325;
_Bool err_326;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value476;
char* word_327;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value477;
char* word_328;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _while_condtional38;
_Bool _if_conditional327;
char* p_329;
_Bool _if_conditional328;
_Bool _if_conditional329;
void* right_value478;
_Bool _if_conditional330;
void* right_value479;
char* word_330;
_Bool _if_conditional331;
void* right_value480;
char* __dec_obj76;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _while_condtional39;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value481;
char* word_331;
_Bool _if_conditional338;
_Bool _while_condtional41;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value482;
char* word_334;
void* right_value483;
void* right_value484;
struct sNode* node_335;
struct sNode* __result139__;
_Bool _if_conditional342;
_Bool _if_conditional343;
void* right_value485;
struct sNode* __result140__;
_Bool _if_conditional344;
char* header_head_336;
void* right_value486;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_337;
char* fun_name_338;
_Bool err_339;
_Bool _if_conditional345;
void* right_value487;
void* right_value488;
struct list$1sTypeph* param_types_340;
void* right_value489;
void* right_value490;
struct list$1charph* param_names_341;
_Bool _if_conditional346;
_Bool _while_condtional42;
void* right_value491;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_342;
char* param_name_343;
_Bool err_344;
_Bool _if_conditional347;
static int num_function_pointer_result_var_name_a_345=0;
void* right_value492;
_Bool _if_conditional348;
_Bool _if_conditional349;
int __exception_result_var_b1;
_Bool _if_conditional350;
void* right_value493;
void* right_value494;
struct list$1sTypeph* param_types2_346;
void* right_value495;
void* right_value496;
struct list$1charph* param_names2_347;
_Bool _if_conditional351;
_Bool _while_condtional43;
void* right_value497;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_348;
char* param_name_349;
_Bool err_350;
_Bool _if_conditional352;
static int num_function_pointer_result_var_name_b_351=0;
void* right_value498;
_Bool _if_conditional353;
_Bool _if_conditional354;
char* header_tail_352;
void* right_value499;
void* right_value500;
struct sType* result_type2_353;
void* right_value501;
void* right_value502;
struct tuple1$1sTypeph* __dec_obj78;
void* right_value503;
struct list$1sTypeph* __dec_obj79;
void* right_value504;
struct list$1charph* __dec_obj80;
_Bool var_args_354;
void* right_value505;
void* right_value506;
struct buffer* header_buf_355;
void* right_value507;
void* right_value508;
struct list$1charph* param_default_parametors_356;
void* right_value509;
void* right_value510;
void* right_value511;
void* right_value512;
void* right_value513;
struct sFun* fun_357;
void* right_value514;
struct sFun* fun2_361;
_Bool _if_conditional359;
void* right_value515;
void* right_value516;
void* right_value517;
struct sNode* _inf_value1;
struct sFunNode* _inf_obj_value1;
void* right_value552;
struct sNode* __result170__;
_Bool _if_conditional427;
void* right_value553;
struct sNode* __result171__;
_Bool _if_conditional428;
void* right_value554;
struct sNode* node_398;
char* source_tail_399;
void* right_value555;
void* right_value556;
struct buffer* header_400;
void* right_value557;
struct sNode* __result172__;
void* right_value558;
char* buf2_401;
void* right_value559;
struct sNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_302, 0, sizeof(char*));
memset(&is_type_name_flag_303, 0, sizeof(_Bool));
memset(&sline_304, 0, sizeof(int));
memset(&define_struct_nobody_305, 0, sizeof(_Bool));
memset(&p_306, 0, sizeof(char*));
memset(&sline_307, 0, sizeof(int));
right_value468 = (void*)0;
memset(&word_308, 0, sizeof(char*));
memset(&define_function_pointer_result_function_309, 0, sizeof(_Bool));
memset(&define_variable_between_brace_310, 0, sizeof(_Bool));
memset(&p_311, 0, sizeof(char*));
right_value469 = (void*)0;
memset(&result_type_312, 0, sizeof(struct sType*));
memset(&fun_name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
memset(&result_type_312, 0, sizeof(struct sType*));
memset(&fun_name_313, 0, sizeof(char*));
memset(&err_314, 0, sizeof(_Bool));
right_value470 = (void*)0;
memset(&word_315, 0, sizeof(char*));
memset(&define_function_flag_316, 0, sizeof(_Bool));
memset(&p_317, 0, sizeof(char*));
right_value471 = (void*)0;
memset(&result_type_318, 0, sizeof(struct sType*));
memset(&fun_name_319, 0, sizeof(char*));
memset(&err_320, 0, sizeof(_Bool));
memset(&result_type_318, 0, sizeof(struct sType*));
memset(&fun_name_319, 0, sizeof(char*));
memset(&err_320, 0, sizeof(_Bool));
memset(&word_321, 0, sizeof(char*));
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&define_variable_322, 0, sizeof(_Bool));
memset(&p_323, 0, sizeof(char*));
right_value475 = (void*)0;
memset(&result_type_324, 0, sizeof(struct sType*));
memset(&fun_name_325, 0, sizeof(char*));
memset(&err_326, 0, sizeof(_Bool));
memset(&result_type_324, 0, sizeof(struct sType*));
memset(&fun_name_325, 0, sizeof(char*));
memset(&err_326, 0, sizeof(_Bool));
right_value476 = (void*)0;
memset(&word_327, 0, sizeof(char*));
right_value477 = (void*)0;
memset(&word_328, 0, sizeof(char*));
memset(&p_329, 0, sizeof(char*));
right_value478 = (void*)0;
right_value479 = (void*)0;
memset(&word_330, 0, sizeof(char*));
right_value480 = (void*)0;
right_value481 = (void*)0;
memset(&word_331, 0, sizeof(char*));
right_value482 = (void*)0;
memset(&word_334, 0, sizeof(char*));
right_value483 = (void*)0;
right_value484 = (void*)0;
memset(&node_335, 0, sizeof(struct sNode*));
right_value485 = (void*)0;
memset(&header_head_336, 0, sizeof(char*));
right_value486 = (void*)0;
memset(&result_type_337, 0, sizeof(struct sType*));
memset(&fun_name_338, 0, sizeof(char*));
memset(&err_339, 0, sizeof(_Bool));
memset(&result_type_337, 0, sizeof(struct sType*));
memset(&fun_name_338, 0, sizeof(char*));
memset(&err_339, 0, sizeof(_Bool));
right_value487 = (void*)0;
right_value488 = (void*)0;
memset(&param_types_340, 0, sizeof(struct list$1sTypeph*));
right_value489 = (void*)0;
right_value490 = (void*)0;
memset(&param_names_341, 0, sizeof(struct list$1charph*));
right_value491 = (void*)0;
memset(&param_type_342, 0, sizeof(struct sType*));
memset(&param_name_343, 0, sizeof(char*));
memset(&err_344, 0, sizeof(_Bool));
memset(&param_type_342, 0, sizeof(struct sType*));
memset(&param_name_343, 0, sizeof(char*));
memset(&err_344, 0, sizeof(_Bool));
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
memset(&param_types2_346, 0, sizeof(struct list$1sTypeph*));
right_value495 = (void*)0;
right_value496 = (void*)0;
memset(&param_names2_347, 0, sizeof(struct list$1charph*));
right_value497 = (void*)0;
memset(&param_type_348, 0, sizeof(struct sType*));
memset(&param_name_349, 0, sizeof(char*));
memset(&err_350, 0, sizeof(_Bool));
memset(&param_type_348, 0, sizeof(struct sType*));
memset(&param_name_349, 0, sizeof(char*));
memset(&err_350, 0, sizeof(_Bool));
right_value498 = (void*)0;
memset(&header_tail_352, 0, sizeof(char*));
right_value499 = (void*)0;
right_value500 = (void*)0;
memset(&result_type2_353, 0, sizeof(struct sType*));
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&var_args_354, 0, sizeof(_Bool));
right_value505 = (void*)0;
right_value506 = (void*)0;
memset(&header_buf_355, 0, sizeof(struct buffer*));
right_value507 = (void*)0;
right_value508 = (void*)0;
memset(&param_default_parametors_356, 0, sizeof(struct list$1charph*));
right_value509 = (void*)0;
right_value510 = (void*)0;
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
memset(&fun_357, 0, sizeof(struct sFun*));
right_value514 = (void*)0;
memset(&fun2_361, 0, sizeof(struct sFun*));
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value552 = (void*)0;
right_value553 = (void*)0;
right_value554 = (void*)0;
memset(&node_398, 0, sizeof(struct sNode*));
memset(&source_tail_399, 0, sizeof(char*));
right_value555 = (void*)0;
right_value556 = (void*)0;
memset(&header_400, 0, sizeof(struct buffer*));
right_value557 = (void*)0;
right_value558 = (void*)0;
memset(&buf2_401, 0, sizeof(char*));
right_value559 = (void*)0;
    source_head_302=info->p;
    is_type_name_flag_303=is_type_name(buf,info);
    sline_304=info->sline;
    define_struct_nobody_305=(_Bool)0;
    {
        p_306=info->p;
        sline_307=info->sline;
        if(_if_conditional288=charp_operator_equals(buf,"struct"),        _if_conditional288) {
            if(_if_conditional289=xisalpha(*info->p)||*info->p==95,            _if_conditional289) {
                word_308=(char*)come_increment_ref_count(((char*)(right_value468=parse_word(info))));
                right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional290=*info->p==59,                _if_conditional290) {
                    define_struct_nobody_305=(_Bool)1;
                }
                word_308 = come_decrement_ref_count2(word_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_307;
    }
    define_function_pointer_result_function_309=(_Bool)0;
    define_variable_between_brace_310=(_Bool)0;
    if(is_type_name_flag_303) {
        p_311=info->p;
        info->p=head;
        if(_if_conditional292=xisalpha(*info->p)||*info->p==95,        _if_conditional292) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value469=backtrace_parse_type((_Bool)0,info)));
            result_type_312=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_313=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_314=multiple_assign_var1->v3;
            come_call_finalizer3(right_value469,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional295=*info->p==40,            _if_conditional295) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional296=*info->p!=42,                _if_conditional296) {
                    define_function_pointer_result_function_309=(_Bool)1;
                    if(_if_conditional297=xisalpha(*info->p)||*info->p==95,                    _if_conditional297) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_315=(char*)come_increment_ref_count(((char*)(right_value470=parse_word(info))));
                        right_value470 = come_decrement_ref_count2(right_value470, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional298=!is_type_name(word_315,info)&&*info->p==41,                        _if_conditional298) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional299=*info->p==40,                            _if_conditional299) {
                            }
                            else {
                                define_variable_between_brace_310=(_Bool)1;
                            }
                        }
                        word_315 = come_decrement_ref_count2(word_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_313 = come_decrement_ref_count2(fun_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_304;
    }
    define_function_flag_316=(_Bool)0;
    if(_if_conditional300=is_type_name_flag_303&&!define_function_pointer_result_function_309&&charp_operator_not_equals(buf,"__typeof__"),    _if_conditional300) {
        p_317=info->p;
        info->p=head;
        if(_if_conditional301=xisalpha(*info->p)||*info->p==95,        _if_conditional301) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value471=backtrace_parse_type((_Bool)0,info)));
            result_type_318=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_319=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_320=multiple_assign_var2->v3;
            come_call_finalizer3(right_value471,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_319 = come_decrement_ref_count2(fun_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional302=!info->define_struct,        _if_conditional302) {
            info->define_struct=(_Bool)0;
            word_321=((void*)0);
            if(_if_conditional303=xisalnum(*info->p)||*info->p==95,            _if_conditional303) {
                __dec_obj72=word_321;
                word_321=(char*)come_increment_ref_count(((char*)(right_value472=parse_word(info))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value472 = come_decrement_ref_count2(right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional304=string_operator_equals(word_321,"extern"),                _if_conditional304) {
                    __dec_obj73=word_321;
                    word_321=(char*)come_increment_ref_count(((char*)(right_value473=parse_word(info))));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                __dec_obj74=word_321;
                word_321=((void*)0);
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_321) {
                if(_if_conditional306=is_type_name(word_321,info),                _if_conditional306) {
                    while(_while_condtional37=*info->p==42,                    _while_condtional37) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional307=*info->p==91&&*(info->p+1)==93,                    _if_conditional307) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional308=*info->p==58,                    _if_conditional308) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional309=*info->p==58,                    _if_conditional309) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional310=xisalnum(*info->p)||*info->p==95,                    _if_conditional310) {
                        __dec_obj75=word_321;
                        word_321=(char*)come_increment_ref_count(((char*)(right_value474=parse_word(info))));
                        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(_if_conditional311=strlen(word_321)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                _if_conditional311) {
                    if(is_type_name_flag_303) {
                        define_function_flag_316=(_Bool)1;
                    }
                }
            }
            word_321 = come_decrement_ref_count2(word_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_317;
        info->sline=sline_304;
    }
    define_variable_322=(_Bool)1;
    if(_if_conditional313=is_type_name_flag_303&&!define_function_pointer_result_function_309,    _if_conditional313) {
        p_323=info->p;
        info->p=head;
        if(_if_conditional314=!is_type_name_flag_303,        _if_conditional314) {
            define_variable_322=(_Bool)0;
        }
        if(_if_conditional315=xisalpha(*info->p)||*info->p==95,        _if_conditional315) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(right_value475=backtrace_parse_type((_Bool)0,info)));
            result_type_324=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_325=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_326=multiple_assign_var3->v3;
            come_call_finalizer3(right_value475,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional316=*info->p==40,            _if_conditional316) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional317=*info->p==42,                _if_conditional317) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional318=xisalpha(*info->p)||*info->p==95,                    _if_conditional318) {
                        word_327=(char*)come_increment_ref_count(((char*)(right_value476=parse_word(info))));
                        right_value476 = come_decrement_ref_count2(right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional319=*info->p==41,                        _if_conditional319) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional320=*info->p==40,                            _if_conditional320) {
                                define_variable_322=(_Bool)1;
                            }
                        }
                        word_327 = come_decrement_ref_count2(word_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(_if_conditional321=xisalpha(*info->p)||*info->p==95,                    _if_conditional321) {
                        word_328=(char*)come_increment_ref_count(((char*)(right_value477=parse_word(info))));
                        right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional322=*info->p==41,                        _if_conditional322) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional323=!is_type_name(word_328,info)&&*info->p!=40,                            _if_conditional323) {
                                define_variable_322=(_Bool)1;
                            }
                        }
                        word_328 = come_decrement_ref_count2(word_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_324,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_325 = come_decrement_ref_count2(fun_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_322=(_Bool)0;
        }
        else {
            if(define_variable_322) {
            }
            else {
                if(_if_conditional326=!(xisalpha(*info->p)||*info->p==95),                _if_conditional326) {
                    define_variable_322=(_Bool)0;
                }
                while(_while_condtional38=xisalpha(*info->p)||*info->p==95,                _while_condtional38) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional327=*info->p==40||*info->p==58,                _if_conditional327) {
                    define_variable_322=(_Bool)0;
                }
            }
        }
        info->p=p_323;
        info->sline=sline_304;
    }
    else {
        define_variable_322=(_Bool)0;
    }
    {
        p_329=info->p;
        info->p=head;
        if(_if_conditional328=charp_operator_equals(buf,"struct"),        _if_conditional328) {
            if(_if_conditional329=xisalpha(*info->p)||*info->p==95,            _if_conditional329) {
                ((char*)(right_value478=parse_word(info)));
                right_value478 = come_decrement_ref_count2(right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional330=xisalpha(*info->p)||*info->p==95,                _if_conditional330) {
                    word_330=(char*)come_increment_ref_count(((char*)(right_value479=parse_word(info))));
                    right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional331=xisalpha(*info->p)||*info->p==95,                    _if_conditional331) {
                        __dec_obj76=word_330;
                        word_330=(char*)come_increment_ref_count(((char*)(right_value480=parse_word(info))));
                        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value480 = come_decrement_ref_count2(right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional332=string_operator_equals(word_330,"extends"),                        _if_conditional332) {
                            define_variable_322=(_Bool)0;
                        }
                    }
                    word_330 = come_decrement_ref_count2(word_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_322=(_Bool)0;
        }
        else {
            if(define_variable_322) {
            }
            else {
                if(_if_conditional335=!(xisalpha(*info->p)||*info->p==95),                _if_conditional335) {
                    define_variable_322=(_Bool)0;
                }
                while(_while_condtional39=xisalpha(*info->p)||*info->p==95,                _while_condtional39) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional336=*info->p==40||*info->p==58,                _if_conditional336) {
                    define_variable_322=(_Bool)0;
                }
            }
        }
        info->p=p_329;
        info->sline=sline_304;
    }
    if(_if_conditional337=charp_operator_equals(buf,"template"),    _if_conditional337) {
        word_331=(char*)come_increment_ref_count(((char*)(right_value481=parse_word(info))));
        right_value481 = come_decrement_ref_count2(right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional338=*info->p==60,        _if_conditional338) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while(_while_condtional41=(_Bool)1,            _while_condtional41) {
                if(_if_conditional339=*info->p==62,                _if_conditional339) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional340=*info->p==44,                    _if_conditional340) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional341=*info->p==0,                        _if_conditional341) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_334=(char*)come_increment_ref_count(((char*)(right_value482=parse_word(info))));
                            right_value482 = come_decrement_ref_count2(right_value482, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value483=string_clone(word_334)))));
                            right_value483 = come_decrement_ref_count2(right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_334 = come_decrement_ref_count2(word_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value484=parse_function(info))));
            if(right_value484) { right_value484 = come_decrement_ref_count2(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1charph_reset(info->method_generics_type_names);
            __result139__ = __result_obj__ = node_335;
            if(node_335) { node_335 = come_decrement_ref_count2(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_331 = come_decrement_ref_count2(word_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result139__;
            if(node_335) { node_335 = come_decrement_ref_count2(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_331 = come_decrement_ref_count2(word_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_305) {
        }
        else {
            if(define_variable_between_brace_310) {
                info->p=head;
                info->sline=sline_304;
                __result140__ = __result_obj__ = ((struct sNode*)(right_value485=parse_global_variable(info)));
                if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result140__;
            }
            else {
                if(define_function_pointer_result_function_309) {
                    header_head_336=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value486=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_337=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_338=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_339=multiple_assign_var4->v3;
                    come_call_finalizer3(right_value486,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional345=*info->p==40,                    _if_conditional345) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_340=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value488=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value487=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1188, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value487,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value488,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        param_names_341=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value490=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value489=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1189, "list$1charph"))))))));
                        come_call_finalizer3(right_value489,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value490,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional346=*info->p==41,                        _if_conditional346) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while(_while_condtional42=(_Bool)1,                            _while_condtional42) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value491=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_342=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_343=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_344=multiple_assign_var5->v3;
                                come_call_finalizer3(right_value491,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional347=!err_344,                                _if_conditional347) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_340,(struct sType*)come_increment_ref_count(param_type_342));
                                list$1charph_push_back(param_names_341,(char*)come_increment_ref_count(((char*)(right_value492=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_345)))));
                                right_value492 = come_decrement_ref_count2(right_value492, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional348=*info->p==44,                                _if_conditional348) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(_if_conditional349=*info->p==41,                                    _if_conditional349) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer3(param_type_342,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_343 = come_decrement_ref_count2(param_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer3(param_type_342,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_343 = come_decrement_ref_count2(param_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        (come_push_stackframe("05function.c", 1225, 2),__exception_result_var_b1=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b1);
                        if(_if_conditional350=*info->p==40,                        _if_conditional350) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_346=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value494=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value493=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1231, "list$1sTypeph"))))))));
                            come_call_finalizer3(right_value493,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value494,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            param_names2_347=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value496=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value495=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1232, "list$1charph"))))))));
                            come_call_finalizer3(right_value495,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value496,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional351=*info->p==41,                            _if_conditional351) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(_while_condtional43=(_Bool)1,                                _while_condtional43) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value497=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_348=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_349=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_350=multiple_assign_var6->v3;
                                    come_call_finalizer3(right_value497,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional352=!err_350,                                    _if_conditional352) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_346,(struct sType*)come_increment_ref_count(param_type_348));
                                    list$1charph_push_back(param_names2_347,(char*)come_increment_ref_count(((char*)(right_value498=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_351)))));
                                    right_value498 = come_decrement_ref_count2(right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional353=*info->p==44,                                    _if_conditional353) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional354=*info->p==41,                                        _if_conditional354) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer3(param_type_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_349 = come_decrement_ref_count2(param_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer3(param_type_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_349 = come_decrement_ref_count2(param_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_352=info->p;
                            result_type2_353=(struct sType*)come_increment_ref_count(((struct sType*)(right_value500=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value499=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1270, "sType")))),"lambda",(_Bool)0,info))));
                            come_call_finalizer3(right_value499,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value500,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj78=result_type2_353->mResultType;
                            result_type2_353->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value502=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value501=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1272, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_337)))));
                            come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value501,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value502,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj79=result_type2_353->mParamTypes;
                            result_type2_353->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value503=list$1sTypephp_clone(param_types2_346))));
                            come_call_finalizer3(__dec_obj79,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value503,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj80=result_type2_353->mParamNames;
                            result_type2_353->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value504=list$1charphp_clone(param_names2_347))));
                            come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value504,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            result_type2_353->mVarArgs=(_Bool)0;
                            result_type2_353->mStatic=(_Bool)0;
                            var_args_354=(_Bool)0;
                            header_buf_355=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value506=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value505=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1280, "buffer"))))))));
                            come_call_finalizer3(right_value505,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value506,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_355,header_head_336,header_tail_352-header_head_336);
                            buffer_append_char(header_buf_355,0);
                            param_default_parametors_356=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value508=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value507=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1284, "list$1charph"))))))));
                            come_call_finalizer3(right_value507,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value508,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            fun_357=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value513=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value509=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1286, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value510=__builtin_string(fun_name_338)))),(struct sType*)come_increment_ref_count(result_type2_353),(struct list$1sTypeph*)come_increment_ref_count(param_types_340),(struct list$1charph*)come_increment_ref_count(param_names_341),(struct list$1charph*)come_increment_ref_count(param_default_parametors_356),(_Bool)1,var_args_354,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value511=buffer_to_string(header_buf_355)))),(char*)come_increment_ref_count(((char*)(right_value512=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value509,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value510 = come_decrement_ref_count2(right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value511 = come_decrement_ref_count2(right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value512 = come_decrement_ref_count2(right_value512, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value513,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_361=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value514=__builtin_string(fun_name_338))));
                            right_value514 = come_decrement_ref_count2(right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional359=fun2_361==((void*)0)||fun2_361->mExternal,                            _if_conditional359) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value515=string_clone(fun_name_338)))),(struct sFun*)come_increment_ref_count(fun_357));
                                right_value515 = come_decrement_ref_count2(right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1298, "struct sNode");
                            _inf_obj_value1=come_increment_ref_count(((struct sFunNode*)(right_value517=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value516=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1298, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_357),info))));
                            _inf_value1->_protocol_obj=_inf_obj_value1;
                            _inf_value1->finalize=(void*)sFunNode_finalize;
                            _inf_value1->clone=(void*)sFunNode_clone;
                            _inf_value1->compile=(void*)sFunNode_compile;
                            _inf_value1->sline=(void*)sNodeBase_sline;
                            _inf_value1->sname=(void*)sNodeBase_sname;
                            _inf_value1->terminated=(void*)sNodeBase_terminated;
                            _inf_value1->kind=(void*)sFunNode_kind;
                            __result170__ = __result_obj__ = ((struct sNode*)(right_value552=_inf_value1));
                            come_call_finalizer3(param_types2_346,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_347,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_355,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_357,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_340,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_338 = come_decrement_ref_count2(fun_name_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value516,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value517,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value552) { right_value552 = come_decrement_ref_count2(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result170__;
                            come_call_finalizer3(param_types2_346,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_347,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_355,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_357,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer3(param_types_340,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_names_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(result_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_338 = come_decrement_ref_count2(fun_name_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_316) {
                        info->p=head;
                        info->sline=sline_304;
                        __result171__ = __result_obj__ = ((struct sNode*)(right_value553=parse_function(info)));
                        if(right_value553) { right_value553 = come_decrement_ref_count2(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result171__;
                    }
                    else {
                        if(define_variable_322) {
                            info->p=head;
                            info->sline=sline_304;
                            node_398=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value554=parse_global_variable(info))));
                            if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            source_tail_399=info->p;
                            header_400=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value556=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value555=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1320, "buffer"))))))));
                            come_call_finalizer3(right_value555,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value556,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_400,source_head_302,source_tail_399-source_head_302);
                            add_come_code_at_come_header(info,"%s %s;\n",buf,((char*)(right_value557=buffer_to_string(header_400))));
                            right_value557 = come_decrement_ref_count2(right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __result172__ = __result_obj__ = node_398;
                            if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(header_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            return __result172__;
                            if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(header_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_304;
    buf2_401=(char*)come_increment_ref_count(((char*)(right_value558=parse_word(info))));
    right_value558 = come_decrement_ref_count2(right_value558, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result173__ = __result_obj__ = ((struct sNode*)(right_value559=top_level_v98(buf2_401,head,head_sline,info)));
    buf2_401 = come_decrement_ref_count2(buf2_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result173__;
    buf2_401 = come_decrement_ref_count2(buf2_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional293;
_Bool _if_conditional294;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional293=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional293) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional294=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional294) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_332;
_Bool _while_condtional40;
struct list_item$1charph* prev_it_333;
struct list$1charph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_332, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_333, 0, sizeof(struct list_item$1charph*));
                it_332=self->head;
                while(_while_condtional40=it_332!=((void*)0),                _while_condtional40) {
                    prev_it_333=it_332;
                    it_332=it_332->next;
                    come_call_finalizer3(prev_it_333,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result138__ = __result_obj__ = self;
                return __result138__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj77;
struct tuple1$1sTypeph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
                                __dec_obj77=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
                                __result141__ = __result_obj__ = self;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result141__;
                                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_358;
unsigned int hash_359;
unsigned int it_360;
_Bool _while_condtional44;
_Bool _if_conditional355;
_Bool _if_conditional356;
struct sFun* __result142__;
_Bool _if_conditional357;
_Bool _if_conditional358;
struct sFun* __result143__;
struct sFun* __result144__;
struct sFun* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_358, 0, sizeof(struct sFun*));
memset(&hash_359, 0, sizeof(unsigned int));
memset(&it_360, 0, sizeof(unsigned int));
                                memset(&default_value_358,0,sizeof(struct sFun*));
                                hash_359=string_get_hash_key(((char*)key))%self->size;
                                it_360=hash_359;
                                while(_while_condtional44=(_Bool)1,                                _while_condtional44) {
                                    if(_if_conditional355=self->item_existance[it_360],                                    _if_conditional355) {
                                        if(_if_conditional356=string_equals(self->keys[it_360],key),                                        _if_conditional356) {
                                            __result142__ = __result_obj__ = self->items[it_360];
                                            come_call_finalizer3(default_value_358,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result142__;
                                        }
                                        it_360++;
                                        if(_if_conditional357=it_360>=self->size,                                        _if_conditional357) {
                                            it_360=0;
                                        }
                                        else {
                                            if(_if_conditional358=it_360==hash_359,                                            _if_conditional358) {
                                                __result143__ = __result_obj__ = default_value_358;
                                                come_call_finalizer3(default_value_358,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result143__;
                                            }
                                        }
                                    }
                                    else {
                                        __result144__ = __result_obj__ = default_value_358;
                                        come_call_finalizer3(default_value_358,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result144__;
                                    }
                                }
                                __result145__ = __result_obj__ = default_value_358;
                                come_call_finalizer3(default_value_358,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result145__;
                                come_call_finalizer3(default_value_358,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional366;
struct sFun* __result147__;
void* right_value520;
struct sFun* result_363;
_Bool _if_conditional367;
void* right_value521;
char* __dec_obj82;
_Bool _if_conditional368;
void* right_value522;
struct sType* __dec_obj83;
_Bool _if_conditional369;
void* right_value523;
struct list$1sTypeph* __dec_obj84;
_Bool _if_conditional370;
void* right_value524;
struct list$1charph* __dec_obj85;
_Bool _if_conditional371;
void* right_value525;
struct list$1charph* __dec_obj86;
_Bool _if_conditional372;
void* right_value526;
struct sType* __dec_obj87;
_Bool _if_conditional373;
void* right_value544;
struct sBlock* __dec_obj93;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
void* right_value545;
struct buffer* __dec_obj94;
_Bool _if_conditional420;
void* right_value546;
struct buffer* __dec_obj95;
_Bool _if_conditional421;
void* right_value547;
struct buffer* __dec_obj96;
_Bool _if_conditional422;
void* right_value548;
struct buffer* __dec_obj97;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value549;
char* __dec_obj98;
_Bool _if_conditional425;
_Bool _if_conditional426;
void* right_value550;
char* __dec_obj99;
struct sFun* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value520 = (void*)0;
memset(&result_363, 0, sizeof(struct sFun*));
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
                                        if(_if_conditional366=self==(void*)0,                                        _if_conditional366) {
                                            __result147__ = __result_obj__ = (void*)0;
                                            return __result147__;
                                        }
                                        result_363=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value520=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"))));
                                        come_call_finalizer3(right_value520,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional367=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional367) {
                                            __dec_obj82=result_363->mName;
                                            result_363->mName=(char*)come_increment_ref_count(((char*)(right_value521=string_clone(self->mName))));
                                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value521 = come_decrement_ref_count2(right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional368=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional368) {
                                            __dec_obj83=result_363->mResultType;
                                            result_363->mResultType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value522=sType_clone(self->mResultType))));
                                            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value522,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional369=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional369) {
                                            __dec_obj84=result_363->mParamTypes;
                                            result_363->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value523=list$1sTypephp_clone(self->mParamTypes))));
                                            come_call_finalizer3(__dec_obj84,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value523,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional370=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional370) {
                                            __dec_obj85=result_363->mParamNames;
                                            result_363->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value524=list$1charphp_clone(self->mParamNames))));
                                            come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value524,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional371=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                        _if_conditional371) {
                                            __dec_obj86=result_363->mParamDefaultParametors;
                                            result_363->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value525=list$1charphp_clone(self->mParamDefaultParametors))));
                                            come_call_finalizer3(__dec_obj86,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value525,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional372=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                        _if_conditional372) {
                                            __dec_obj87=result_363->mLambdaType;
                                            result_363->mLambdaType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value526=sType_clone(self->mLambdaType))));
                                            come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value526,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional373=self!=((void*)0)&&self->mBlock!=((void*)0),                                        _if_conditional373) {
                                            __dec_obj93=result_363->mBlock;
                                            result_363->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value544=sBlock_clone(self->mBlock))));
                                            come_call_finalizer3(__dec_obj93,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value544,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional417=self!=((void*)0),                                        _if_conditional417) {
                                            result_363->mExternal=self->mExternal;
                                        }
                                        if(_if_conditional418=self!=((void*)0),                                        _if_conditional418) {
                                            result_363->mVarArgs=self->mVarArgs;
                                        }
                                        if(_if_conditional419=self!=((void*)0)&&self->mSource!=((void*)0),                                        _if_conditional419) {
                                            __dec_obj94=result_363->mSource;
                                            result_363->mSource=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value545=buffer_clone(self->mSource))));
                                            come_call_finalizer3(__dec_obj94,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value545,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional420=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                        _if_conditional420) {
                                            __dec_obj95=result_363->mSourceHead;
                                            result_363->mSourceHead=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value546=buffer_clone(self->mSourceHead))));
                                            come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value546,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional421=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                        _if_conditional421) {
                                            __dec_obj96=result_363->mSourceHead2;
                                            result_363->mSourceHead2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value547=buffer_clone(self->mSourceHead2))));
                                            come_call_finalizer3(__dec_obj96,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value547,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional422=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                        _if_conditional422) {
                                            __dec_obj97=result_363->mSourceDefer;
                                            result_363->mSourceDefer=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value548=buffer_clone(self->mSourceDefer))));
                                            come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value548,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional423=self!=((void*)0),                                        _if_conditional423) {
                                            result_363->mStatic=self->mStatic;
                                        }
                                        if(_if_conditional424=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                        _if_conditional424) {
                                            __dec_obj98=result_363->mComeHeader;
                                            result_363->mComeHeader=(char*)come_increment_ref_count(((char*)(right_value549=string_clone(self->mComeHeader))));
                                            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value549 = come_decrement_ref_count2(right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional425=self!=((void*)0),                                        _if_conditional425) {
                                            result_363->mCloner=self->mCloner;
                                        }
                                        if(_if_conditional426=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                        _if_conditional426) {
                                            __dec_obj99=result_363->mDeclareSName;
                                            result_363->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value550=string_clone(self->mDeclareSName))));
                                            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value550 = come_decrement_ref_count2(right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result168__ = __result_obj__ = result_363;
                                        come_call_finalizer3(result_363,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result168__;
                                        come_call_finalizer3(result_363,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional374;
struct sBlock* __result148__;
void* right_value527;
struct sBlock* result_364;
_Bool _if_conditional375;
void* right_value528;
struct list$1sNodeph* __dec_obj88;
_Bool _if_conditional376;
void* right_value543;
struct sVarTable* __dec_obj92;
struct sBlock* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value527 = (void*)0;
memset(&result_364, 0, sizeof(struct sBlock*));
right_value528 = (void*)0;
right_value543 = (void*)0;
                                                if(_if_conditional374=self==(void*)0,                                                _if_conditional374) {
                                                    __result148__ = __result_obj__ = (void*)0;
                                                    return __result148__;
                                                }
                                                result_364=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value527=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
                                                come_call_finalizer3(right_value527,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional375=self!=((void*)0)&&self->mNodes!=((void*)0),                                                _if_conditional375) {
                                                    __dec_obj88=result_364->mNodes;
                                                    result_364->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value528=list$1sNodephp_clone(self->mNodes))));
                                                    come_call_finalizer3(__dec_obj88,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value528,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional376=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                _if_conditional376) {
                                                    __dec_obj92=result_364->mVarTable;
                                                    result_364->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value543=sVarTable_clone(self->mVarTable))));
                                                    come_call_finalizer3(__dec_obj92,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value543,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result167__ = __result_obj__ = result_364;
                                                come_call_finalizer3(result_364,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result167__;
                                                come_call_finalizer3(result_364,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional377;
struct sVarTable* __result149__;
void* right_value529;
struct sVarTable* result_365;
_Bool _if_conditional378;
void* right_value542;
struct map$2charphsVarph* __dec_obj91;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
struct sVarTable* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value529 = (void*)0;
memset(&result_365, 0, sizeof(struct sVarTable*));
right_value542 = (void*)0;
                                                        if(_if_conditional377=self==(void*)0,                                                        _if_conditional377) {
                                                            __result149__ = __result_obj__ = (void*)0;
                                                            return __result149__;
                                                        }
                                                        result_365=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value529=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                                                        come_call_finalizer3(right_value529,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional378=self!=((void*)0)&&self->mVars!=((void*)0),                                                        _if_conditional378) {
                                                            __dec_obj91=result_365->mVars;
                                                            result_365->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value542=map$2charphsVarphp_clone(self->mVars))));
                                                            come_call_finalizer3(__dec_obj91,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value542,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional414=self!=((void*)0),                                                        _if_conditional414) {
                                                            result_365->mGlobal=self->mGlobal;
                                                        }
                                                        if(_if_conditional415=self!=((void*)0),                                                        _if_conditional415) {
                                                            result_365->mParent=self->mParent;
                                                        }
                                                        if(_if_conditional416=self!=((void*)0),                                                        _if_conditional416) {
                                                            result_365->mID=self->mID;
                                                        }
                                                        __result166__ = __result_obj__ = result_365;
                                                        come_call_finalizer3(result_365,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result166__;
                                                        come_call_finalizer3(result_365,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional379;
struct map$2charphsVarph* __result150__;
void* right_value530;
void* right_value536;
struct map$2charphsVarph* result_371;
void* right_value537;
void* right_value538;
struct list$1charp* __dec_obj90;
char* it_374;
struct sVar* default_value_377;
struct sVar* it2_380;
struct map$2charphsVarph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value530 = (void*)0;
right_value536 = (void*)0;
memset(&result_371, 0, sizeof(struct map$2charphsVarph*));
right_value537 = (void*)0;
right_value538 = (void*)0;
memset(&it_374, 0, sizeof(char*));
memset(&default_value_377, 0, sizeof(struct sVar*));
memset(&it2_380, 0, sizeof(struct sVar*));
                                                                if(_if_conditional379=self==((void*)0),                                                                _if_conditional379) {
                                                                    __result150__ = __result_obj__ = ((void*)0);
                                                                    return __result150__;
                                                                }
                                                                result_371=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value536=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value530=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1160, "map$2charphsVarph"))))))));
                                                                come_call_finalizer3(right_value530,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value536,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                __dec_obj90=result_371->key_list;
                                                                result_371->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value538=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value537=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1162, "list$1charp"))))))));
                                                                come_call_finalizer3(__dec_obj90,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value537,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value538,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                for(                                                                it_374=map$2charphsVarph_begin(self);                                                                !map$2charphsVarph_end(self);                                                                it_374=map$2charphsVarph_next(self)                                                                ){
                                                                    memset(&default_value_377,0,sizeof(struct sVar*));
                                                                    it2_380=map$2charphsVarph_at(self,it_374,default_value_377);
                                                                    map$2charphsVarph_insert2(result_371,it_374,it2_380);
                                                                }
                                                                __result165__ = __result_obj__ = result_371;
                                                                come_call_finalizer3(result_371,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result165__;
                                                                come_call_finalizer3(result_371,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value531;
void* right_value532;
void* right_value533;
int i_366;
void* right_value534;
void* right_value535;
struct list$1charp* __dec_obj89;
struct map$2charphsVarph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
memset(&i_366, 0, sizeof(int));
right_value534 = (void*)0;
right_value535 = (void*)0;
                                                                    self->keys=(char**)come_increment_ref_count(((char**)(right_value531=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1066, "char*%"))));
                                                                    right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value532=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1067, "sVar*%"))));
                                                                    come_call_finalizer3(right_value532,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value533=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1068, "bool"))));
                                                                    right_value533 = come_decrement_ref_count2(right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    for(                                                                    i_366=0;                                                                    i_366<128;                                                                    i_366++                                                                    ){
                                                                        self->item_existance[i_366]=(_Bool)0;
                                                                    }
                                                                    self->size=128;
                                                                    self->len=0;
                                                                    __dec_obj89=self->key_list;
                                                                    self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value535=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value534=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1078, "list$1charp"))))))));
                                                                    come_call_finalizer3(__dec_obj89,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value534,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer3(right_value535,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    self->it=0;
                                                                    __result152__ = __result_obj__ = self;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result152__;
                                                                    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool _if_conditional383;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        if(_if_conditional380=self!=((void*)0)&&self->mName!=((void*)0),                                                                        _if_conditional380) {
                                                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional381=self!=((void*)0)&&self->mCValueName!=((void*)0),                                                                        _if_conditional381) {
                                                                            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional382=self!=((void*)0)&&self->mType!=((void*)0),                                                                        _if_conditional382) {
                                                                            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        if(_if_conditional383=self!=((void*)0)&&self->mFunName!=((void*)0),                                                                        _if_conditional383) {
                                                                            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result151__ = __result_obj__ = self;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result151__;
                                                                        come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_367;
_Bool _while_condtional45;
struct list_item$1charp* prev_it_368;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_367, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_368, 0, sizeof(struct list_item$1charp*));
                                                                            it_367=self->head;
                                                                            while(_while_condtional45=it_367!=((void*)0),                                                                            _while_condtional45) {
                                                                                prev_it_368=it_367;
                                                                                it_367=it_367->next;
                                                                                come_call_finalizer3(prev_it_368,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_369;
_Bool _if_conditional384;
_Bool _if_conditional385;
int i_370;
_Bool _if_conditional386;
_Bool _if_conditional387;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_369, 0, sizeof(int));
memset(&i_370, 0, sizeof(int));
                                                                        for(                                                                        i_369=0;                                                                        i_369<self->size;                                                                        i_369++                                                                        ){
                                                                            if(_if_conditional384=self->item_existance[i_369],                                                                            _if_conditional384) {
                                                                                if(_if_conditional385=1,                                                                                _if_conditional385) {
                                                                                    come_call_finalizer3(self->items[i_369],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->items);
                                                                        for(                                                                        i_370=0;                                                                        i_370<self->size;                                                                        i_370++                                                                        ){
                                                                            if(_if_conditional386=self->item_existance[i_370],                                                                            _if_conditional386) {
                                                                                if(_if_conditional387=1,                                                                                _if_conditional387) {
                                                                                    self->keys[i_370] = come_decrement_ref_count2(self->keys[i_370], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                            }
                                                                        }
                                                                        come_free((char*)self->keys);
                                                                        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional388;
char* result_372;
char* __result153__;
_Bool _if_conditional389;
char* __result154__;
char* result_373;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_372, 0, sizeof(char*));
memset(&result_373, 0, sizeof(char*));
                                                                    if(_if_conditional388=self==((void*)0),                                                                    _if_conditional388) {
                                                                        memset(&result_372,0,sizeof(char*));
                                                                        __result153__ = __result_obj__ = result_372;
                                                                        return __result153__;
                                                                    }
                                                                    self->key_list->it=self->key_list->head;
                                                                    if(self->key_list->it) {
                                                                        __result154__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result154__;
                                                                    }
                                                                    memset(&result_373,0,sizeof(char*));
                                                                    __result155__ = __result_obj__ = result_373;
                                                                    return __result155__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                    __result156__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                                    return __result156__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional390;
char* result_375;
char* __result157__;
_Bool _if_conditional391;
char* __result158__;
char* result_376;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_375, 0, sizeof(char*));
memset(&result_376, 0, sizeof(char*));
                                                                    if(_if_conditional390=self==((void*)0)||self->key_list->it==((void*)0),                                                                    _if_conditional390) {
                                                                        memset(&result_375,0,sizeof(char*));
                                                                        __result157__ = __result_obj__ = result_375;
                                                                        return __result157__;
                                                                    }
                                                                    self->key_list->it=self->key_list->it->next;
                                                                    if(self->key_list->it) {
                                                                        __result158__ = __result_obj__ = self->key_list->it->item;
                                                                        return __result158__;
                                                                    }
                                                                    memset(&result_376,0,sizeof(char*));
                                                                    __result159__ = __result_obj__ = result_376;
                                                                    return __result159__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_378;
unsigned int it_379;
_Bool _while_condtional46;
_Bool _if_conditional392;
_Bool _if_conditional393;
struct sVar* __result160__;
_Bool _if_conditional394;
_Bool _if_conditional395;
struct sVar* __result161__;
struct sVar* __result162__;
struct sVar* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_378, 0, sizeof(unsigned int));
memset(&it_379, 0, sizeof(unsigned int));
                                                                        hash_378=string_get_hash_key(((char*)key))%self->size;
                                                                        it_379=hash_378;
                                                                        while(_while_condtional46=(_Bool)1,                                                                        _while_condtional46) {
                                                                            if(_if_conditional392=self->item_existance[it_379],                                                                            _if_conditional392) {
                                                                                if(_if_conditional393=string_equals(self->keys[it_379],key),                                                                                _if_conditional393) {
                                                                                    __result160__ = __result_obj__ = self->items[it_379];
                                                                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                    return __result160__;
                                                                                }
                                                                                it_379++;
                                                                                if(_if_conditional394=it_379>=self->size,                                                                                _if_conditional394) {
                                                                                    it_379=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional395=it_379==hash_378,                                                                                    _if_conditional395) {
                                                                                        __result161__ = __result_obj__ = default_value;
                                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                        return __result161__;
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __result162__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result162__;
                                                                            }
                                                                        }
                                                                        __result163__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result163__;
                                                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional396;
unsigned int hash_392;
int it_393;
_Bool _while_condtional48;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool same_key_exist_394;
char* it2_395;
_Bool _if_conditional408;
_Bool _if_conditional409;
struct map$2charphsVarph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_392, 0, sizeof(unsigned int));
memset(&it_393, 0, sizeof(int));
memset(&same_key_exist_394, 0, sizeof(_Bool));
memset(&it2_395, 0, sizeof(char*));
                                                                        if(_if_conditional396=self->len*2>=self->size,                                                                        _if_conditional396) {
                                                                            map$2charphsVarph_rehash(self);
                                                                        }
                                                                        hash_392=string_get_hash_key(key)%self->size;
                                                                        it_393=hash_392;
                                                                        while(_while_condtional48=(_Bool)1,                                                                        _while_condtional48) {
                                                                            if(_if_conditional400=self->item_existance[it_393],                                                                            _if_conditional400) {
                                                                                if(_if_conditional401=string_equals(self->keys[it_393],key),                                                                                _if_conditional401) {
                                                                                    if(_if_conditional402=1,                                                                                    _if_conditional402) {
                                                                                        self->keys[it_393] = come_decrement_ref_count2(self->keys[it_393], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        list$1charp_remove(self->key_list,self->keys[it_393]);
                                                                                        self->keys[it_393]=(char*)come_increment_ref_count(key);
                                                                                    }
                                                                                    else {
                                                                                        list$1charp_remove(self->key_list,self->keys[it_393]);
                                                                                        self->keys[it_393]=key;
                                                                                    }
                                                                                    if(_if_conditional403=1,                                                                                    _if_conditional403) {
                                                                                        come_call_finalizer3(self->items[it_393],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        self->items[it_393]=(struct sVar*)come_increment_ref_count(item);
                                                                                    }
                                                                                    else {
                                                                                        self->items[it_393]=item;
                                                                                    }
                                                                                    break;
                                                                                }
                                                                                it_393++;
                                                                                if(_if_conditional404=it_393>=self->size,                                                                                _if_conditional404) {
                                                                                    it_393=0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional405=it_393==hash_392,                                                                                    _if_conditional405) {
                                                                                        printf("unexpected error in map.insert\n");
                                                                                        stackframe();
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                self->item_existance[it_393]=(_Bool)1;
                                                                                if(_if_conditional406=1,                                                                                _if_conditional406) {
                                                                                    self->keys[it_393]=(char*)come_increment_ref_count(key);
                                                                                }
                                                                                else {
                                                                                    self->keys[it_393]=key;
                                                                                }
                                                                                if(_if_conditional407=1,                                                                                _if_conditional407) {
                                                                                    self->items[it_393]=(struct sVar*)come_increment_ref_count(item);
                                                                                }
                                                                                else {
                                                                                    self->items[it_393]=item;
                                                                                }
                                                                                self->len++;
                                                                                break;
                                                                            }
                                                                        }
                                                                        same_key_exist_394=(_Bool)0;
                                                                        for(                                                                        it2_395=list$1charp_begin(self->key_list);                                                                        !list$1charp_end(self->key_list);                                                                        it2_395=list$1charp_next(self->key_list)                                                                        ){
                                                                            if(_if_conditional408=string_equals(it2_395,key),                                                                            _if_conditional408) {
                                                                                same_key_exist_394=(_Bool)1;
                                                                            }
                                                                        }
                                                                        if(_if_conditional409=!same_key_exist_394,                                                                        _if_conditional409) {
                                                                            list$1charp_push_back(self->key_list,key);
                                                                        }
                                                                        __result164__ = __result_obj__ = self;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result164__;
                                                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_381;
void* right_value539;
char** keys_382;
void* right_value540;
struct sVar** items_383;
void* right_value541;
_Bool* item_existance_384;
int len_385;
char* it_386;
struct sVar* default_value_387;
struct sVar* it2_388;
unsigned int hash_389;
int n_390;
_Bool _while_condtional47;
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
struct sVar* default_value_391;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_381, 0, sizeof(int));
right_value539 = (void*)0;
memset(&keys_382, 0, sizeof(char**));
right_value540 = (void*)0;
memset(&items_383, 0, sizeof(struct sVar**));
right_value541 = (void*)0;
memset(&item_existance_384, 0, sizeof(_Bool*));
memset(&len_385, 0, sizeof(int));
memset(&it_386, 0, sizeof(char*));
memset(&default_value_387, 0, sizeof(struct sVar*));
memset(&it2_388, 0, sizeof(struct sVar*));
memset(&hash_389, 0, sizeof(unsigned int));
memset(&n_390, 0, sizeof(int));
memset(&default_value_391, 0, sizeof(struct sVar*));
                                                                                size_381=self->size*10;
                                                                                keys_382=(char**)come_increment_ref_count(((char**)(right_value539=(char**)come_calloc(1, sizeof(char*)*(1*(size_381)), "./neo-c.h", 1317, "char*%"))));
                                                                                right_value539 = come_decrement_ref_count2(right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                items_383=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value540=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_381)), "./neo-c.h", 1318, "sVar*%"))));
                                                                                come_call_finalizer3(right_value540,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                item_existance_384=(_Bool*)come_increment_ref_count(((_Bool*)(right_value541=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_381)), "./neo-c.h", 1319, "bool"))));
                                                                                right_value541 = come_decrement_ref_count2(right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                len_385=0;
                                                                                for(                                                                                it_386=map$2charphsVarph_begin(self);                                                                                !map$2charphsVarph_end(self);                                                                                it_386=map$2charphsVarph_next(self)                                                                                ){
                                                                                    memset(&default_value_387,0,sizeof(struct sVar*));
                                                                                    it2_388=map$2charphsVarph_at(self,it_386,default_value_387);
                                                                                    hash_389=string_get_hash_key(it_386)%size_381;
                                                                                    n_390=hash_389;
                                                                                    while(_while_condtional47=(_Bool)1,                                                                                    _while_condtional47) {
                                                                                        if(_if_conditional397=item_existance_384[n_390],                                                                                        _if_conditional397) {
                                                                                            n_390++;
                                                                                            if(_if_conditional398=n_390>=size_381,                                                                                            _if_conditional398) {
                                                                                                n_390=0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional399=n_390==hash_389,                                                                                                _if_conditional399) {
                                                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                                                    stackframe();
                                                                                                    exit(2);
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            item_existance_384[n_390]=(_Bool)1;
                                                                                            keys_382[n_390]=it_386;
                                                                                            items_383[n_390]=map$2charphsVarph_at(self,it_386,default_value_391);
                                                                                            len_385++;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                                come_free((char*)self->items);
                                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_free((char*)self->keys);
                                                                                self->keys=keys_382;
                                                                                self->items=items_383;
                                                                                self->item_existance=item_existance_384;
                                                                                self->size=size_381;
                                                                                self->len=len_385;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_396;
_Bool _if_conditional410;
_Bool _if_conditional411;
int i_397;
_Bool _if_conditional412;
_Bool _if_conditional413;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_396, 0, sizeof(int));
memset(&i_397, 0, sizeof(int));
                                                                for(                                                                i_396=0;                                                                i_396<self->size;                                                                i_396++                                                                ){
                                                                    if(_if_conditional410=self->item_existance[i_396],                                                                    _if_conditional410) {
                                                                        if(_if_conditional411=1,                                                                        _if_conditional411) {
                                                                            come_call_finalizer3(self->items[i_396],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                come_free((char*)self->items);
                                                                for(                                                                i_397=0;                                                                i_397<self->size;                                                                i_397++                                                                ){
                                                                    if(_if_conditional412=self->item_existance[i_397],                                                                    _if_conditional412) {
                                                                        if(_if_conditional413=1,                                                                        _if_conditional413) {
                                                                            self->keys[i_397] = come_decrement_ref_count2(self->keys[i_397], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                    }
                                                                }
                                                                come_free((char*)self->keys);
                                                                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_407;
struct sType* type_411;
struct sClass* generics_class_412;
void* right_value560;
_Bool generics_type_name_414;
void* right_value561;
_Bool mgenerics_type_name_415;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_407, 0, sizeof(struct sClass*));
memset(&type_411, 0, sizeof(struct sType*));
memset(&generics_class_412, 0, sizeof(struct sClass*));
right_value560 = (void*)0;
memset(&generics_type_name_414, 0, sizeof(_Bool));
right_value561 = (void*)0;
memset(&mgenerics_type_name_415, 0, sizeof(_Bool));
    klass_407=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_411=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_412=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_414=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value560=__builtin_string(buf)))));
    right_value560 = come_decrement_ref_count2(right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    mgenerics_type_name_415=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value561=__builtin_string(buf)))));
    right_value561 = come_decrement_ref_count2(right_value561, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result184__ = generics_class_412||generics_type_name_414||mgenerics_type_name_415||klass_407||type_411||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
    return __result184__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_402;
unsigned int hash_403;
unsigned int it_404;
_Bool _while_condtional49;
_Bool _if_conditional429;
_Bool _if_conditional430;
struct sClass* __result174__;
_Bool _if_conditional438;
_Bool _if_conditional439;
struct sClass* __result175__;
struct sClass* __result176__;
struct sClass* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_402, 0, sizeof(struct sClass*));
memset(&hash_403, 0, sizeof(unsigned int));
memset(&it_404, 0, sizeof(unsigned int));
        memset(&default_value_402,0,sizeof(struct sClass*));
        hash_403=string_get_hash_key(((char*)key))%self->size;
        it_404=hash_403;
        while(_while_condtional49=(_Bool)1,        _while_condtional49) {
            if(_if_conditional429=self->item_existance[it_404],            _if_conditional429) {
                if(_if_conditional430=string_equals(self->keys[it_404],key),                _if_conditional430) {
                    __result174__ = __result_obj__ = self->items[it_404];
                    come_call_finalizer3(default_value_402,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result174__;
                }
                it_404++;
                if(_if_conditional438=it_404>=self->size,                _if_conditional438) {
                    it_404=0;
                }
                else {
                    if(_if_conditional439=it_404==hash_403,                    _if_conditional439) {
                        __result175__ = __result_obj__ = default_value_402;
                        come_call_finalizer3(default_value_402,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result175__;
                    }
                }
            }
            else {
                __result176__ = __result_obj__ = default_value_402;
                come_call_finalizer3(default_value_402,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result176__;
            }
        }
        __result177__ = __result_obj__ = default_value_402;
        come_call_finalizer3(default_value_402,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result177__;
        come_call_finalizer3(default_value_402,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional431=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional431) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional432=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional432) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional436=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional436) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional437=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional437) {
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_405;
_Bool _while_condtional50;
struct list_item$1tuple2$2charphsTypephph* prev_it_406;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_405, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_406, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_405=self->head;
                                while(_while_condtional50=it_405!=((void*)0),                                _while_condtional50) {
                                    prev_it_406=it_405;
                                    it_405=it_405->next;
                                    come_call_finalizer3(prev_it_406,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional433=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional433) {
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional434;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional434=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional434) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional435=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional435) {
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_408;
unsigned int hash_409;
unsigned int it_410;
_Bool _while_condtional51;
_Bool _if_conditional440;
_Bool _if_conditional441;
struct sType* __result178__;
_Bool _if_conditional442;
_Bool _if_conditional443;
struct sType* __result179__;
struct sType* __result180__;
struct sType* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_408, 0, sizeof(struct sType*));
memset(&hash_409, 0, sizeof(unsigned int));
memset(&it_410, 0, sizeof(unsigned int));
        memset(&default_value_408,0,sizeof(struct sType*));
        hash_409=string_get_hash_key(((char*)key))%self->size;
        it_410=hash_409;
        while(_while_condtional51=(_Bool)1,        _while_condtional51) {
            if(_if_conditional440=self->item_existance[it_410],            _if_conditional440) {
                if(_if_conditional441=string_equals(self->keys[it_410],key),                _if_conditional441) {
                    __result178__ = __result_obj__ = self->items[it_410];
                    come_call_finalizer3(default_value_408,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result178__;
                }
                it_410++;
                if(_if_conditional442=it_410>=self->size,                _if_conditional442) {
                    it_410=0;
                }
                else {
                    if(_if_conditional443=it_410==hash_409,                    _if_conditional443) {
                        __result179__ = __result_obj__ = default_value_408;
                        come_call_finalizer3(default_value_408,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result179__;
                    }
                }
            }
            else {
                __result180__ = __result_obj__ = default_value_408;
                come_call_finalizer3(default_value_408,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result180__;
            }
        }
        __result181__ = __result_obj__ = default_value_408;
        come_call_finalizer3(default_value_408,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result181__;
        come_call_finalizer3(default_value_408,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_413;
_Bool _if_conditional444;
_Bool __result182__;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_413, 0, sizeof(char*));
        for(        it_413=list$1charph_begin(self);        !list$1charph_end(self);        it_413=list$1charph_next(self)        ){
            if(_if_conditional444=string_operator_equals(it_413,item),            _if_conditional444) {
                __result182__ = (_Bool)1;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result182__;
            }
        }
        __result183__ = (_Bool)0;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result183__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_416;
int caller_line_417;
char* caller_sname_418;
char* last_code_419;
char* __dec_obj101;
char* last_code2_420;
char* __dec_obj102;
char* last_code3_421;
char* __dec_obj103;
void* right_value562;
char* sname_top_422;
int sline_top_423;
_Bool _if_conditional445;
struct sFun* funX_424;
_Bool _if_conditional446;
_Bool __result185__;
void* right_value563;
struct sType* result_type_425;
void* right_value564;
void* right_value565;
struct list$1sTypeph* param_types_426;
struct list$1sTypeph* o2_saved_427;
struct sType* it_430;
void* right_value566;
void* right_value567;
struct sType* param_type_433;
void* right_value568;
void* right_value569;
struct list$1charph* param_names_434;
void* right_value570;
struct list$1charph* param_default_parametors_435;
char* p_436;
int sline_437;
char* sname_438;
char* head_439;
struct buffer* source_440;
void* right_value571;
struct buffer* __dec_obj104;
struct sType* generics_type_saved_441;
void* right_value572;
struct sType* __dec_obj105;
struct list$1charph* method_generics_type_names_442;
void* right_value573;
void* right_value574;
struct list$1charph* __dec_obj106;
struct list$1charph* o2_saved_443;
char* it_444;
void* right_value575;
void* right_value576;
struct list$1charph* __dec_obj107;
char* __dec_obj108;
void* right_value577;
struct sBlock* block_445;
struct buffer* __dec_obj109;
char* __dec_obj110;
_Bool var_args_446;
void* right_value578;
void* right_value579;
void* right_value580;
void* right_value581;
void* right_value582;
struct sFun* fun_447;
void* right_value583;
void* right_value584;
void* right_value585;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* right_value589;
struct sNode* node_449;
_Bool _if_conditional457;
_Bool __result195__;
struct sType* __dec_obj113;
struct list$1charph* __dec_obj114;
struct list$1charph* __dec_obj115;
void* right_value590;
char* __dec_obj116;
char* __dec_obj117;
char* __dec_obj118;
char* __dec_obj119;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_416, 0, sizeof(struct sFun*));
memset(&caller_line_417, 0, sizeof(int));
memset(&caller_sname_418, 0, sizeof(char*));
memset(&last_code_419, 0, sizeof(char*));
memset(&last_code2_420, 0, sizeof(char*));
memset(&last_code3_421, 0, sizeof(char*));
right_value562 = (void*)0;
memset(&sname_top_422, 0, sizeof(char*));
memset(&sline_top_423, 0, sizeof(int));
memset(&funX_424, 0, sizeof(struct sFun*));
right_value563 = (void*)0;
memset(&result_type_425, 0, sizeof(struct sType*));
right_value564 = (void*)0;
right_value565 = (void*)0;
memset(&param_types_426, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_427, 0, sizeof(struct list$1sTypeph*));
memset(&it_430, 0, sizeof(struct sType*));
right_value566 = (void*)0;
right_value567 = (void*)0;
memset(&param_type_433, 0, sizeof(struct sType*));
right_value568 = (void*)0;
right_value569 = (void*)0;
memset(&param_names_434, 0, sizeof(struct list$1charph*));
right_value570 = (void*)0;
memset(&param_default_parametors_435, 0, sizeof(struct list$1charph*));
memset(&p_436, 0, sizeof(char*));
memset(&sline_437, 0, sizeof(int));
memset(&sname_438, 0, sizeof(char*));
memset(&head_439, 0, sizeof(char*));
memset(&source_440, 0, sizeof(struct buffer*));
right_value571 = (void*)0;
memset(&generics_type_saved_441, 0, sizeof(struct sType*));
right_value572 = (void*)0;
memset(&method_generics_type_names_442, 0, sizeof(struct list$1charph*));
right_value573 = (void*)0;
right_value574 = (void*)0;
memset(&o2_saved_443, 0, sizeof(struct list$1charph*));
memset(&it_444, 0, sizeof(char*));
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
memset(&block_445, 0, sizeof(struct sBlock*));
memset(&var_args_446, 0, sizeof(_Bool));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
right_value581 = (void*)0;
right_value582 = (void*)0;
memset(&fun_447, 0, sizeof(struct sFun*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value589 = (void*)0;
memset(&node_449, 0, sizeof(struct sNode*));
right_value590 = (void*)0;
    caller_fun_416=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_417=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_418=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_419=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj101=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_420=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj102=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_421=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj103=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_422=(char*)come_increment_ref_count(((char*)(right_value562=__builtin_string(info->sname))));
    right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_423=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_424=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_424) {
        __result185__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_419 = come_decrement_ref_count2(last_code_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_420 = come_decrement_ref_count2(last_code2_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_421 = come_decrement_ref_count2(last_code3_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_422 = come_decrement_ref_count2(sname_top_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result185__;
    }
    result_type_425=(struct sType*)come_increment_ref_count(((struct sType*)(right_value563=solve_generics(generics_fun->mResultType,generics_type,info))));
    come_call_finalizer3(right_value563,sType_finalize, 0, 1, 0, 0, __result_obj__);
    param_types_426=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value565=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value564=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1376, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value564,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value565,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_427=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_430=list$1sTypeph_begin((o2_saved_427));    !list$1sTypeph_end((o2_saved_427));    it_430=list$1sTypeph_next((o2_saved_427))    ){
        param_type_433=(struct sType*)come_increment_ref_count(((struct sType*)(right_value567=solve_generics(((struct sType*)(right_value566=sType_clone(it_430))),generics_type,info))));
        come_call_finalizer3(right_value566,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value567,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_433->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_426,(struct sType*)come_increment_ref_count(((struct sType*)(right_value568=sType_clone(param_type_433)))));
        come_call_finalizer3(right_value568,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(param_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_434=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value569=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value569,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_435=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value570=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value570,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    p_436=info->p;
    sline_437=info->sline;
    sname_438=(char*)come_increment_ref_count(info->sname);
    head_439=info->head;
    source_440=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj104=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value571=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value571,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_441=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj105=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value572=sType_clone(generics_type))));
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value572,sType_finalize, 0, 1, 0, 0, __result_obj__);
    method_generics_type_names_442=info->method_generics_type_names;
    __dec_obj106=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value574=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value573=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1403, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj106,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value573,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value574,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_443=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_444=list$1charph_begin((o2_saved_443));    !list$1charph_end((o2_saved_443));    it_444=list$1charph_next((o2_saved_443))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value575=string_clone(it_444)))));
        right_value575 = come_decrement_ref_count2(right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_443,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj107=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value576=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value576,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj108=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_445=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value577=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value577,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    info->head=head_439;
    __dec_obj109=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_440);
    come_call_finalizer3(__dec_obj109,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_436;
    info->sline=sline_437;
    __dec_obj110=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_438);
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_425->mInline=(_Bool)0;
    var_args_446=generics_fun->mVarArgs;
    fun_447=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value582=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value578=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1425, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_425),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value579=list$1sTypephp_clone(param_types_426)))),(struct list$1charph*)come_increment_ref_count(param_names_434),(struct list$1charph*)come_increment_ref_count(param_default_parametors_435),(_Bool)0,var_args_446,(struct sBlock*)come_increment_ref_count(block_445),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value580=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value581=__builtin_string("")))),info))));
    come_call_finalizer3(right_value578,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value579,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    right_value580 = come_decrement_ref_count2(right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value581 = come_decrement_ref_count2(right_value581, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value582,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value583=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_447));
    right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1432, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(right_value585=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value584=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1432, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_447),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunNode_finalize;
    _inf_value2->clone=(void*)sFunNode_clone;
    _inf_value2->compile=(void*)sFunNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFunNode_kind;
    node_449=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=_inf_value2)));
    come_call_finalizer3(right_value584,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value585,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional457=!node_compile(node_449,info),    _if_conditional457) {
        __result195__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_419 = come_decrement_ref_count2(last_code_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_420 = come_decrement_ref_count2(last_code2_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_421 = come_decrement_ref_count2(last_code3_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_422 = come_decrement_ref_count2(sname_top_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_426,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_434,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_435,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_438 = come_decrement_ref_count2(sname_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_440,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_441,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_445,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_447,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result195__;
    }
    __dec_obj113=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_441);
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=method_generics_type_names_442;
    __dec_obj115=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_442);
    come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj116=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value590=__builtin_string(sname_top_422))));
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value590 = come_decrement_ref_count2(right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_423;
    __dec_obj117=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_419);
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj118=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_420);
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj119=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_421);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_416;
    info->caller_line=caller_line_417;
    info->caller_sname=caller_sname_418;
    __result196__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_419 = come_decrement_ref_count2(last_code_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_420 = come_decrement_ref_count2(last_code2_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_421 = come_decrement_ref_count2(last_code3_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_422 = come_decrement_ref_count2(sname_top_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_426,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_434,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_435,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_438 = come_decrement_ref_count2(sname_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_440,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_441,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_445,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_447,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result196__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_419 = come_decrement_ref_count2(last_code_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_420 = come_decrement_ref_count2(last_code2_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_421 = come_decrement_ref_count2(last_code3_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_422 = come_decrement_ref_count2(sname_top_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_426,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_434,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_435,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_438 = come_decrement_ref_count2(sname_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_440,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_441,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_445,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_447,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional447;
struct sType* result_428;
struct sType* __result186__;
_Bool _if_conditional448;
struct sType* __result187__;
struct sType* result_429;
struct sType* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_428, 0, sizeof(struct sType*));
memset(&result_429, 0, sizeof(struct sType*));
        if(_if_conditional447=self==((void*)0),        _if_conditional447) {
            memset(&result_428,0,sizeof(struct sType*));
            __result186__ = __result_obj__ = result_428;
            return __result186__;
        }
        self->it=self->head;
        if(self->it) {
            __result187__ = __result_obj__ = self->it->item;
            return __result187__;
        }
        memset(&result_429,0,sizeof(struct sType*));
        __result188__ = __result_obj__ = result_429;
        return __result188__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
        __result189__ = self==((void*)0)||self->it==((void*)0);
        return __result189__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional449;
struct sType* result_431;
struct sType* __result190__;
_Bool _if_conditional450;
struct sType* __result191__;
struct sType* result_432;
struct sType* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_431, 0, sizeof(struct sType*));
memset(&result_432, 0, sizeof(struct sType*));
        if(_if_conditional449=self==((void*)0)||self->it==((void*)0),        _if_conditional449) {
            memset(&result_431,0,sizeof(struct sType*));
            __result190__ = __result_obj__ = result_431;
            return __result190__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result191__ = __result_obj__ = self->it->item;
            return __result191__;
        }
        memset(&result_432,0,sizeof(struct sType*));
        __result192__ = __result_obj__ = result_432;
        return __result192__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
void* __result_obj__;
struct sFun* caller_fun_450;
int caller_line_451;
char* caller_sname_452;
char* last_code_453;
char* __dec_obj120;
char* last_code2_454;
char* __dec_obj121;
char* last_code3_455;
char* __dec_obj122;
void* right_value591;
char* sname_top_456;
int sline_top_457;
struct sFun* funX_458;
_Bool _if_conditional458;
_Bool __result197__;
void* right_value592;
struct sType* result_type_459;
void* right_value593;
void* right_value594;
struct list$1sTypeph* param_types_460;
struct list$1sTypeph* o2_saved_461;
struct sType* it_462;
void* right_value595;
void* right_value596;
struct sType* param_type_463;
void* right_value597;
void* right_value598;
struct list$1charph* param_names_464;
void* right_value599;
struct list$1charph* param_default_parametors_465;
char* p_466;
int sline_467;
char* sname_468;
char* head_469;
struct buffer* source_470;
void* right_value600;
struct buffer* __dec_obj123;
struct list$1charph* method_generics_type_names_471;
void* right_value601;
void* right_value602;
struct list$1charph* __dec_obj124;
struct list$1charph* o2_saved_472;
char* it_473;
void* right_value603;
void* right_value604;
struct list$1charph* __dec_obj125;
char* __dec_obj126;
void* right_value605;
struct sBlock* block_474;
struct buffer* __dec_obj127;
char* __dec_obj128;
_Bool var_args_475;
void* right_value606;
void* right_value607;
void* right_value608;
void* right_value609;
void* right_value610;
struct sFun* fun_476;
void* right_value611;
void* right_value612;
void* right_value613;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* right_value617;
struct sNode* node_478;
_Bool _if_conditional465;
_Bool __result200__;
struct list$1charph* __dec_obj131;
struct list$1charph* __dec_obj132;
void* right_value618;
char* __dec_obj133;
char* __dec_obj134;
char* __dec_obj135;
char* __dec_obj136;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&caller_fun_450, 0, sizeof(struct sFun*));
memset(&caller_line_451, 0, sizeof(int));
memset(&caller_sname_452, 0, sizeof(char*));
memset(&last_code_453, 0, sizeof(char*));
memset(&last_code2_454, 0, sizeof(char*));
memset(&last_code3_455, 0, sizeof(char*));
right_value591 = (void*)0;
memset(&sname_top_456, 0, sizeof(char*));
memset(&sline_top_457, 0, sizeof(int));
memset(&funX_458, 0, sizeof(struct sFun*));
right_value592 = (void*)0;
memset(&result_type_459, 0, sizeof(struct sType*));
right_value593 = (void*)0;
right_value594 = (void*)0;
memset(&param_types_460, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_461, 0, sizeof(struct list$1sTypeph*));
memset(&it_462, 0, sizeof(struct sType*));
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&param_type_463, 0, sizeof(struct sType*));
right_value597 = (void*)0;
right_value598 = (void*)0;
memset(&param_names_464, 0, sizeof(struct list$1charph*));
right_value599 = (void*)0;
memset(&param_default_parametors_465, 0, sizeof(struct list$1charph*));
memset(&p_466, 0, sizeof(char*));
memset(&sline_467, 0, sizeof(int));
memset(&sname_468, 0, sizeof(char*));
memset(&head_469, 0, sizeof(char*));
memset(&source_470, 0, sizeof(struct buffer*));
right_value600 = (void*)0;
memset(&method_generics_type_names_471, 0, sizeof(struct list$1charph*));
right_value601 = (void*)0;
right_value602 = (void*)0;
memset(&o2_saved_472, 0, sizeof(struct list$1charph*));
memset(&it_473, 0, sizeof(char*));
right_value603 = (void*)0;
right_value604 = (void*)0;
right_value605 = (void*)0;
memset(&block_474, 0, sizeof(struct sBlock*));
memset(&var_args_475, 0, sizeof(_Bool));
right_value606 = (void*)0;
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value609 = (void*)0;
right_value610 = (void*)0;
memset(&fun_476, 0, sizeof(struct sFun*));
right_value611 = (void*)0;
right_value612 = (void*)0;
right_value613 = (void*)0;
right_value617 = (void*)0;
memset(&node_478, 0, sizeof(struct sNode*));
right_value618 = (void*)0;
    caller_fun_450=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_451=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_452=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_453=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj120=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_454=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj121=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_455=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj122=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_456=(char*)come_increment_ref_count(((char*)(right_value591=__builtin_string(info->sname))));
    right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    sline_top_457=info->sline;
    funX_458=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_458) {
        __result197__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_453 = come_decrement_ref_count2(last_code_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_454 = come_decrement_ref_count2(last_code2_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_455 = come_decrement_ref_count2(last_code3_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_456 = come_decrement_ref_count2(sname_top_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result197__;
    }
    result_type_459=(struct sType*)come_increment_ref_count(((struct sType*)(right_value592=solve_method_generics(generics_fun->mResultType,info))));
    come_call_finalizer3(right_value592,sType_finalize, 0, 1, 0, 0, __result_obj__);
    param_types_460=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value594=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value593=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1484, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value593,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value594,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_461=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_462=list$1sTypeph_begin((o2_saved_461));    !list$1sTypeph_end((o2_saved_461));    it_462=list$1sTypeph_next((o2_saved_461))    ){
        param_type_463=(struct sType*)come_increment_ref_count(((struct sType*)(right_value596=solve_method_generics(((struct sType*)(right_value595=sType_clone(it_462))),info))));
        come_call_finalizer3(right_value595,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value596,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_463->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_460,(struct sType*)come_increment_ref_count(((struct sType*)(right_value597=sType_clone(param_type_463)))));
        come_call_finalizer3(right_value597,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(param_type_463,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_461,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_464=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value598=list$1charphp_clone(generics_fun->mParamNames))));
    come_call_finalizer3(right_value598,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_465=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value599=list$1charphp_clone(generics_fun->mParamDefaultParametors))));
    come_call_finalizer3(right_value599,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    p_466=info->p;
    sline_467=info->sline;
    sname_468=(char*)come_increment_ref_count(info->sname);
    head_469=info->head;
    source_470=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj123=info->source;
    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value600=string_to_buffer(generics_fun->mBlock))));
    come_call_finalizer3(__dec_obj123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value600,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_471=info->method_generics_type_names;
    __dec_obj124=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value602=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value601=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1508, "list$1charph"))))))));
    come_call_finalizer3(__dec_obj124,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value601,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value602,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_472=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_473=list$1charph_begin((o2_saved_472));    !list$1charph_end((o2_saved_472));    it_473=list$1charph_next((o2_saved_472))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(right_value603=string_clone(it_473)))));
        right_value603 = come_decrement_ref_count2(right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_472,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj125=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value604=list$1charphp_clone(generics_fun->mGenericsTypeNames))));
    come_call_finalizer3(__dec_obj125,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value604,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj126=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_474=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value605=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value605,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    info->head=head_469;
    __dec_obj127=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_470);
    come_call_finalizer3(__dec_obj127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_466;
    info->sline=sline_467;
    __dec_obj128=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_468);
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_459->mInline=(_Bool)0;
    var_args_475=generics_fun->mVarArgs;
    fun_476=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value610=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value606=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1530, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_459),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value607=list$1sTypephp_clone(param_types_460)))),(struct list$1charph*)come_increment_ref_count(param_names_464),(struct list$1charph*)come_increment_ref_count(param_default_parametors_465),(_Bool)0,var_args_475,(struct sBlock*)come_increment_ref_count(block_474),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value608=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(right_value609=__builtin_string("")))),info))));
    come_call_finalizer3(right_value606,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value607,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    right_value608 = come_decrement_ref_count2(right_value608, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value610,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value611=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_476));
    right_value611 = come_decrement_ref_count2(right_value611, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1537, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(right_value613=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value612=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1537, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_476),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_478=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value617=_inf_value3)));
    come_call_finalizer3(right_value612,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value613,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value617) { right_value617 = come_decrement_ref_count2(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional465=!node_compile(node_478,info),    _if_conditional465) {
        __result200__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_453 = come_decrement_ref_count2(last_code_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_454 = come_decrement_ref_count2(last_code2_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_455 = come_decrement_ref_count2(last_code3_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_456 = come_decrement_ref_count2(sname_top_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_464,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_465,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_468 = come_decrement_ref_count2(sname_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_470,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_474,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_476,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_478) { node_478 = come_decrement_ref_count2(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result200__;
    }
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj131=method_generics_type_names_471;
    __dec_obj132=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_471);
    come_call_finalizer3(__dec_obj132,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj133=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(right_value618=__builtin_string(sname_top_456))));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value618 = come_decrement_ref_count2(right_value618, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    info->sline=sline_top_457;
    __dec_obj134=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_453);
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj135=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_454);
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_455);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_450;
    info->caller_line=caller_line_451;
    info->caller_sname=caller_sname_452;
    __result201__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_453 = come_decrement_ref_count2(last_code_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_454 = come_decrement_ref_count2(last_code2_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_455 = come_decrement_ref_count2(last_code3_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_456 = come_decrement_ref_count2(sname_top_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_464,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_465,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_468 = come_decrement_ref_count2(sname_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_470,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_474,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_476,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_478) { node_478 = come_decrement_ref_count2(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result201__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_453 = come_decrement_ref_count2(last_code_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_454 = come_decrement_ref_count2(last_code2_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_455 = come_decrement_ref_count2(last_code3_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_456 = come_decrement_ref_count2(sname_top_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_460,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_464,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_465,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_468 = come_decrement_ref_count2(sname_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_470,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_474,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_476,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_478) { node_478 = come_decrement_ref_count2(node_478, ((struct sNode*)node_478)->finalize, ((struct sNode*)node_478)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__;
char* header_head_479;
char* source_head_480;
struct sType* result_type_481;
char* var_name_482;
_Bool constructor__483;
_Bool _if_conditional466;
void* right_value619;
void* right_value620;
struct sType* __dec_obj137;
void* right_value621;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_484;
char* var_name2_485;
_Bool err_486;
struct sType* __dec_obj138;
char* __dec_obj139;
_Bool _if_conditional467;
_Bool _if_conditional468;
_Bool method_definition_487;
char* p_488;
int sline_489;
void* right_value622;
void* right_value623;
struct buffer* buf2_490;
_Bool _while_condtional52;
_Bool _while_condtional53;
_Bool _while_condtional54;
_Bool _while_condtional55;
_Bool _if_conditional469;
char* fun_name_491;
char* base_fun_name_492;
_Bool _if_conditional470;
void* right_value624;
void* right_value625;
char* __dec_obj140;
_Bool _if_conditional471;
void* right_value626;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_493;
char* name_494;
_Bool err_495;
_Bool _if_conditional472;
int __exception_result_var_b2;
int __exception_result_var_b3;
void* right_value627;
void* right_value628;
char* __dec_obj141;
_Bool _if_conditional473;
void* right_value629;
void* right_value630;
char* __dec_obj142;
void* right_value631;
char* __dec_obj143;
void* right_value632;
_Bool _if_conditional474;
void* right_value633;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_496;
struct list$1charph* param_names_497;
struct list$1charph* param_default_parametors_498;
_Bool var_args_499;
char* header_tail_500;
_Bool _if_conditional478;
void* right_value634;
void* right_value635;
struct buffer* header_buf_501;
int version_502;
_Bool _if_conditional479;
int n_503;
_Bool _while_condtional56;
_Bool _if_conditional480;
void* right_value636;
struct sBlock* block_504;
static int lambda_num_505=0;
void* right_value637;
char* fun_name_506;
void* right_value638;
void* right_value639;
void* right_value640;
void* right_value641;
void* right_value642;
struct sFun* fun_507;
void* right_value643;
struct sFun* fun2_508;
_Bool _if_conditional481;
void* right_value644;
void* right_value645;
void* right_value646;
struct sNode* _inf_value4;
struct sLambdaNode* _inf_obj_value4;
void* right_value649;
struct sNode* __result204__;
_Bool _if_conditional488;
void* right_value650;
char* none_generics_name_510;
void* right_value651;
char* generics_sname_511;
int generics_sline_512;
void* right_value652;
char* block_513;
void* right_value653;
void* right_value654;
void* right_value655;
void* right_value656;
void* right_value657;
void* right_value658;
struct sGenericsFun* fun_514;
void* right_value659;
char* fun_name3_515;
void* right_value663;
struct sNode* __result219__;
_Bool _if_conditional511;
void* right_value664;
char* generics_sname_537;
int generics_sline_538;
void* right_value665;
char* block_539;
void* right_value666;
void* right_value667;
void* right_value668;
void* right_value669;
void* right_value670;
void* right_value671;
struct sGenericsFun* fun_540;
void* right_value672;
char* fun_name3_541;
void* right_value673;
struct sNode* __result220__;
_Bool _if_conditional512;
char* source_tail_542;
void* right_value674;
void* right_value675;
struct buffer* header_543;
_Bool _if_conditional513;
_Bool _if_conditional515;
void* right_value676;
char* name_544;
void* right_value677;
void* right_value678;
char* name_545;
void* right_value679;
int i_546;
struct sType* param_type_547;
char* param_name_551;
char* default_parametor_552;
_Bool _if_conditional518;
void* right_value680;
void* right_value681;
void* right_value682;
void* right_value683;
_Bool _if_conditional519;
_Bool _if_conditional520;
_Bool _if_conditional521;
void* right_value684;
char* impl_name_553;
void* right_value685;
char* result_type_name_554;
void* right_value686;
void* right_value687;
char* impl_name_555;
void* right_value688;
char* result_type_name_556;
void* right_value689;
int i_557;
struct sType* param_type_558;
char* param_name_559;
char* default_parametor_560;
_Bool _if_conditional522;
void* right_value690;
void* right_value691;
void* right_value692;
void* right_value693;
_Bool _if_conditional523;
_Bool _if_conditional524;
void* right_value694;
void* right_value695;
struct sBlock* block_561;
_Bool static__562;
_Bool _if_conditional525;
_Bool _if_conditional526;
void* right_value696;
void* right_value697;
char* new_fun_name_563;
void* right_value698;
char* __dec_obj145;
void* right_value699;
void* right_value700;
void* right_value701;
void* right_value702;
void* right_value703;
void* right_value704;
struct sFun* fun_564;
_Bool _if_conditional527;
void* right_value705;
void* right_value706;
struct sFun* fun2_565;
_Bool _if_conditional528;
void* right_value707;
void* right_value708;
void* right_value709;
struct sNode* _inf_value5;
struct sFunNode* _inf_obj_value5;
void* right_value713;
struct sNode* __result227__;
_Bool _if_conditional535;
_Bool _if_conditional536;
void* right_value714;
char* new_fun_name_567;
void* right_value715;
char* __dec_obj148;
_Bool _if_conditional537;
void* right_value716;
void* right_value717;
void* right_value718;
void* right_value719;
void* right_value720;
struct sFun* fun_568;
void* right_value721;
struct sFun* fun2_569;
_Bool _if_conditional538;
void* right_value722;
char* source_tail_570;
void* right_value723;
void* right_value724;
struct buffer* header_571;
void* right_value725;
void* right_value726;
void* right_value727;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* right_value731;
struct sNode* __result230__;
void* right_value732;
char* asm_fun_573;
_Bool _if_conditional545;
void* right_value733;
char* __dec_obj151;
int __exception_result_var_b4;
void* right_value734;
void* right_value735;
void* right_value736;
void* right_value737;
void* right_value738;
struct sFun* fun_574;
void* right_value739;
struct sFun* fun2_575;
_Bool _if_conditional546;
void* right_value740;
char* source_tail_576;
void* right_value741;
void* right_value742;
struct buffer* header_577;
void* right_value743;
void* right_value744;
void* right_value745;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* right_value749;
struct sNode* __result233__;
struct sNode* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&header_head_479, 0, sizeof(char*));
memset(&source_head_480, 0, sizeof(char*));
memset(&result_type_481, 0, sizeof(struct sType*));
memset(&var_name_482, 0, sizeof(char*));
memset(&constructor__483, 0, sizeof(_Bool));
right_value619 = (void*)0;
right_value620 = (void*)0;
right_value621 = (void*)0;
memset(&result_type2_484, 0, sizeof(struct sType*));
memset(&var_name2_485, 0, sizeof(char*));
memset(&err_486, 0, sizeof(_Bool));
memset(&result_type2_484, 0, sizeof(struct sType*));
memset(&var_name2_485, 0, sizeof(char*));
memset(&err_486, 0, sizeof(_Bool));
memset(&method_definition_487, 0, sizeof(_Bool));
memset(&p_488, 0, sizeof(char*));
memset(&sline_489, 0, sizeof(int));
right_value622 = (void*)0;
right_value623 = (void*)0;
memset(&buf2_490, 0, sizeof(struct buffer*));
memset(&fun_name_491, 0, sizeof(char*));
memset(&base_fun_name_492, 0, sizeof(char*));
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value626 = (void*)0;
memset(&obj_type_493, 0, sizeof(struct sType*));
memset(&name_494, 0, sizeof(char*));
memset(&err_495, 0, sizeof(_Bool));
memset(&obj_type_493, 0, sizeof(struct sType*));
memset(&name_494, 0, sizeof(char*));
memset(&err_495, 0, sizeof(_Bool));
right_value627 = (void*)0;
right_value628 = (void*)0;
right_value629 = (void*)0;
right_value630 = (void*)0;
right_value631 = (void*)0;
right_value632 = (void*)0;
right_value633 = (void*)0;
memset(&param_types_496, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_497, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_498, 0, sizeof(struct list$1charph*));
memset(&var_args_499, 0, sizeof(_Bool));
memset(&param_types_496, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_497, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_498, 0, sizeof(struct list$1charph*));
memset(&var_args_499, 0, sizeof(_Bool));
memset(&header_tail_500, 0, sizeof(char*));
right_value634 = (void*)0;
right_value635 = (void*)0;
memset(&header_buf_501, 0, sizeof(struct buffer*));
memset(&version_502, 0, sizeof(int));
memset(&n_503, 0, sizeof(int));
right_value636 = (void*)0;
memset(&block_504, 0, sizeof(struct sBlock*));
right_value637 = (void*)0;
memset(&fun_name_506, 0, sizeof(char*));
right_value638 = (void*)0;
right_value639 = (void*)0;
right_value640 = (void*)0;
right_value641 = (void*)0;
right_value642 = (void*)0;
memset(&fun_507, 0, sizeof(struct sFun*));
right_value643 = (void*)0;
memset(&fun2_508, 0, sizeof(struct sFun*));
right_value644 = (void*)0;
right_value645 = (void*)0;
right_value646 = (void*)0;
right_value649 = (void*)0;
right_value650 = (void*)0;
memset(&none_generics_name_510, 0, sizeof(char*));
right_value651 = (void*)0;
memset(&generics_sname_511, 0, sizeof(char*));
memset(&generics_sline_512, 0, sizeof(int));
right_value652 = (void*)0;
memset(&block_513, 0, sizeof(char*));
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
right_value657 = (void*)0;
right_value658 = (void*)0;
memset(&fun_514, 0, sizeof(struct sGenericsFun*));
right_value659 = (void*)0;
memset(&fun_name3_515, 0, sizeof(char*));
right_value663 = (void*)0;
right_value664 = (void*)0;
memset(&generics_sname_537, 0, sizeof(char*));
memset(&generics_sline_538, 0, sizeof(int));
right_value665 = (void*)0;
memset(&block_539, 0, sizeof(char*));
right_value666 = (void*)0;
right_value667 = (void*)0;
right_value668 = (void*)0;
right_value669 = (void*)0;
right_value670 = (void*)0;
right_value671 = (void*)0;
memset(&fun_540, 0, sizeof(struct sGenericsFun*));
right_value672 = (void*)0;
memset(&fun_name3_541, 0, sizeof(char*));
right_value673 = (void*)0;
memset(&source_tail_542, 0, sizeof(char*));
right_value674 = (void*)0;
right_value675 = (void*)0;
memset(&header_543, 0, sizeof(struct buffer*));
right_value676 = (void*)0;
memset(&name_544, 0, sizeof(char*));
right_value677 = (void*)0;
right_value678 = (void*)0;
memset(&name_545, 0, sizeof(char*));
right_value679 = (void*)0;
memset(&i_546, 0, sizeof(int));
memset(&param_type_547, 0, sizeof(struct sType*));
memset(&param_name_551, 0, sizeof(char*));
memset(&default_parametor_552, 0, sizeof(char*));
right_value680 = (void*)0;
right_value681 = (void*)0;
right_value682 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
memset(&impl_name_553, 0, sizeof(char*));
right_value685 = (void*)0;
memset(&result_type_name_554, 0, sizeof(char*));
right_value686 = (void*)0;
right_value687 = (void*)0;
memset(&impl_name_555, 0, sizeof(char*));
right_value688 = (void*)0;
memset(&result_type_name_556, 0, sizeof(char*));
right_value689 = (void*)0;
memset(&i_557, 0, sizeof(int));
memset(&param_type_558, 0, sizeof(struct sType*));
memset(&param_name_559, 0, sizeof(char*));
memset(&default_parametor_560, 0, sizeof(char*));
right_value690 = (void*)0;
right_value691 = (void*)0;
right_value692 = (void*)0;
right_value693 = (void*)0;
right_value694 = (void*)0;
right_value695 = (void*)0;
memset(&block_561, 0, sizeof(struct sBlock*));
memset(&static__562, 0, sizeof(_Bool));
right_value696 = (void*)0;
right_value697 = (void*)0;
memset(&new_fun_name_563, 0, sizeof(char*));
right_value698 = (void*)0;
right_value699 = (void*)0;
right_value700 = (void*)0;
right_value701 = (void*)0;
right_value702 = (void*)0;
right_value703 = (void*)0;
right_value704 = (void*)0;
memset(&fun_564, 0, sizeof(struct sFun*));
right_value705 = (void*)0;
right_value706 = (void*)0;
memset(&fun2_565, 0, sizeof(struct sFun*));
right_value707 = (void*)0;
right_value708 = (void*)0;
right_value709 = (void*)0;
right_value713 = (void*)0;
right_value714 = (void*)0;
memset(&new_fun_name_567, 0, sizeof(char*));
right_value715 = (void*)0;
right_value716 = (void*)0;
right_value717 = (void*)0;
right_value718 = (void*)0;
right_value719 = (void*)0;
right_value720 = (void*)0;
memset(&fun_568, 0, sizeof(struct sFun*));
right_value721 = (void*)0;
memset(&fun2_569, 0, sizeof(struct sFun*));
right_value722 = (void*)0;
memset(&source_tail_570, 0, sizeof(char*));
right_value723 = (void*)0;
right_value724 = (void*)0;
memset(&header_571, 0, sizeof(struct buffer*));
right_value725 = (void*)0;
right_value726 = (void*)0;
right_value727 = (void*)0;
right_value731 = (void*)0;
right_value732 = (void*)0;
memset(&asm_fun_573, 0, sizeof(char*));
right_value733 = (void*)0;
right_value734 = (void*)0;
right_value735 = (void*)0;
right_value736 = (void*)0;
right_value737 = (void*)0;
right_value738 = (void*)0;
memset(&fun_574, 0, sizeof(struct sFun*));
right_value739 = (void*)0;
memset(&fun2_575, 0, sizeof(struct sFun*));
right_value740 = (void*)0;
memset(&source_tail_576, 0, sizeof(char*));
right_value741 = (void*)0;
right_value742 = (void*)0;
memset(&header_577, 0, sizeof(struct buffer*));
right_value743 = (void*)0;
right_value744 = (void*)0;
right_value745 = (void*)0;
right_value749 = (void*)0;
    header_head_479=info->p;
    source_head_480=info->p;
    result_type_481=((void*)0);
    var_name_482=((void*)0);
    constructor__483=(_Bool)0;
    if(_if_conditional466=info->in_class&&memcmp(info->p,"new(",4)==0,    _if_conditional466) {
        ((char*)(right_value619=parse_word(info)));
        right_value619 = come_decrement_ref_count2(right_value619, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj137=result_type_481;
        result_type_481=(struct sType*)come_increment_ref_count(((struct sType*)(right_value620=sType_clone(info->impl_type))));
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value620,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_481->mHeap=(_Bool)1;
        constructor__483=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value621=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_484=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_485=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_486=multiple_assign_var7->v3;
        come_call_finalizer3(right_value621,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj138=result_type_481;
        result_type_481=(struct sType*)come_increment_ref_count(result_type2_484);
        come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj139=var_name_482;
        var_name_482=(char*)come_increment_ref_count(var_name2_485);
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(_if_conditional468=!err_486,        _if_conditional468) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_484,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_485 = come_decrement_ref_count2(var_name2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_487=(_Bool)0;
    {
        p_488=info->p;
        sline_489=info->sline;
        buf2_490=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value623=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value622=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1600, "buffer"))))))));
        come_call_finalizer3(right_value622,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value623,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional52=xisalnum(*info->p)||*info->p==95,        _while_condtional52) {
            buffer_append_char(buf2_490,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(_while_condtional53=*info->p==91&&*(info->p+1)==93,        _while_condtional53) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional54=*info->p==42,        _while_condtional54) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(_while_condtional55=*info->p==37,        _while_condtional55) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(_if_conditional469=buffer_length(buf2_490)>0&&*info->p==58&&*(info->p+1)==58,        _if_conditional469) {
            method_definition_487=(_Bool)1;
        }
        info->p=p_488;
        info->sline=sline_489;
        come_call_finalizer3(buf2_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_492=((void*)0);
    if(constructor__483) {
        base_fun_name_492=(char*)come_increment_ref_count(((char*)(right_value624=__builtin_string("initialize"))));
        right_value624 = come_decrement_ref_count2(right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj140=fun_name_491;
        fun_name_491=(char*)come_increment_ref_count(((char*)(right_value625=create_method_name(info->impl_type,(_Bool)0,base_fun_name_492,info,(_Bool)1))));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        if(method_definition_487) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value626=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_493=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_494=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_495=multiple_assign_var8->v3;
            come_call_finalizer3(right_value626,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional472=!err_495,            _if_conditional472) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            (come_push_stackframe("05function.c", 1642, 3),__exception_result_var_b2=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b2);
            (come_push_stackframe("05function.c", 1643, 4),__exception_result_var_b3=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b3);
            base_fun_name_492=(char*)come_increment_ref_count(((char*)(right_value627=parse_word(info))));
            right_value627 = come_decrement_ref_count2(right_value627, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj141=fun_name_491;
            fun_name_491=(char*)come_increment_ref_count(((char*)(right_value628=create_method_name(obj_type_493,(_Bool)0,base_fun_name_492,info,(_Bool)1))));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value628 = come_decrement_ref_count2(right_value628, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(obj_type_493,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_494 = come_decrement_ref_count2(name_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                base_fun_name_492=(char*)come_increment_ref_count(((char*)(right_value629=parse_word(info))));
                right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj142=fun_name_491;
                fun_name_491=(char*)come_increment_ref_count(((char*)(right_value630=create_method_name(info->impl_type,(_Bool)0,base_fun_name_492,info,(_Bool)1))));
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value630 = come_decrement_ref_count2(right_value630, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj143=fun_name_491;
                fun_name_491=(char*)come_increment_ref_count(((char*)(right_value631=parse_word(info))));
                __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value631 = come_decrement_ref_count2(right_value631, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_492=(char*)come_increment_ref_count(((char*)(right_value632=__builtin_string(fun_name_491))));
                right_value632 = come_decrement_ref_count2(right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
    }
    if(_if_conditional474=info->in_class&&charp_operator_equals(base_fun_name_492,"initialize"),    _if_conditional474) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value633=parse_params(info,constructor__483)));
    param_types_496=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_497=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_498=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_499=multiple_assign_var9->v4;
    come_call_finalizer3(right_value633,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_500=info->p;
    if(_if_conditional478=info->in_class&&charp_operator_equals(base_fun_name_492,"initialize"),    _if_conditional478) {
        info->in_class=(_Bool)1;
    }
    header_buf_501=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value635=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value634=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1667, "buffer"))))))));
    come_call_finalizer3(right_value634,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value635,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_501,header_head_479,header_tail_500-header_head_479);
    buffer_append_char(header_buf_501,0);
    version_502=0;
    if(_if_conditional479=parsecmp("version",info),    _if_conditional479) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_503=0;
        while(_while_condtional56=xisdigit(*info->p),        _while_condtional56) {
            n_503=n_503*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_502=n_503;
    }
    if(_if_conditional480=charp_operator_equals(base_fun_name_492,"lambda"),    _if_conditional480) {
        block_504=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value636=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value636,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        lambda_num_505++;
        fun_name_506=(char*)come_increment_ref_count(((char*)(right_value637=xsprintf("lambda%d",lambda_num_505))));
        right_value637 = come_decrement_ref_count2(right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_481->mStatic=(_Bool)0;
        fun_507=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value642=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value638=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1697, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value639=__builtin_string(fun_name_506)))),(struct sType*)come_increment_ref_count(result_type_481),(struct list$1sTypeph*)come_increment_ref_count(param_types_496),(struct list$1charph*)come_increment_ref_count(param_names_497),(struct list$1charph*)come_increment_ref_count(param_default_parametors_498),(_Bool)0,var_args_499,(struct sBlock*)come_increment_ref_count(block_504),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value640=buffer_to_string(header_buf_501)))),(char*)come_increment_ref_count(((char*)(right_value641=__builtin_string("")))),info))));
        come_call_finalizer3(right_value638,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value639 = come_decrement_ref_count2(right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value640 = come_decrement_ref_count2(right_value640, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value641 = come_decrement_ref_count2(right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value642,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_508=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value643=__builtin_string(fun_name_506))));
        right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional481=fun2_508==((void*)0)||fun2_508->mExternal,        _if_conditional481) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value644=string_clone(fun_name_506)))),(struct sFun*)come_increment_ref_count(fun_507));
            right_value644 = come_decrement_ref_count2(right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_492 = come_decrement_ref_count2(base_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1709, "struct sNode");
        _inf_obj_value4=come_increment_ref_count(((struct sLambdaNode*)(right_value646=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value645=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1709, "sLambdaNode")))),fun_507,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sLambdaNode_finalize;
        _inf_value4->clone=(void*)sLambdaNode_clone;
        _inf_value4->compile=(void*)sLambdaNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sLambdaNode_kind;
        __result204__ = __result_obj__ = ((struct sNode*)(right_value649=_inf_value4));
        come_call_finalizer3(block_504,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_506 = come_decrement_ref_count2(fun_name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_507,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_491 = come_decrement_ref_count2(fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value645,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value646,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value649) { right_value649 = come_decrement_ref_count2(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result204__;
        come_call_finalizer3(block_504,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_506 = come_decrement_ref_count2(fun_name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_507,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional488=info->impl_type&&list$1charph_length(info->generics_type_names)>0,        _if_conditional488) {
            none_generics_name_510=(char*)come_increment_ref_count(((char*)(right_value650=get_none_generics_name(info->impl_type->mClass->mName))));
            right_value650 = come_decrement_ref_count2(right_value650, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sname_511=(char*)come_increment_ref_count(((char*)(right_value651=__builtin_string(info->sname))));
            right_value651 = come_decrement_ref_count2(right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            generics_sline_512=info->sline;
            block_513=(char*)come_increment_ref_count(((char*)(right_value652=skip_block(info))));
            right_value652 = come_decrement_ref_count2(right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_514=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value658=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value653=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1719, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value654=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value655=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value656=__builtin_string(fun_name_491)))),(struct sType*)come_increment_ref_count(result_type_481),(struct list$1sTypeph*)come_increment_ref_count(param_types_496),(struct list$1charph*)come_increment_ref_count(param_names_497),(struct list$1charph*)come_increment_ref_count(param_default_parametors_498),var_args_499,(char*)come_increment_ref_count(block_513),info,(char*)come_increment_ref_count(((char*)(right_value657=__builtin_string(generics_sname_511)))),generics_sline_512))));
            come_call_finalizer3(right_value653,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value654,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value655,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            right_value656 = come_decrement_ref_count2(right_value656, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value657 = come_decrement_ref_count2(right_value657, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value658,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name3_515=(char*)come_increment_ref_count(((char*)(right_value659=xsprintf("%s_%s",none_generics_name_510,base_fun_name_492))));
            right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value663=__builtin_string(fun_name3_515)))),(struct sGenericsFun*)come_increment_ref_count(fun_514));
            right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_492 = come_decrement_ref_count2(base_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result219__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_510 = come_decrement_ref_count2(none_generics_name_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_511 = come_decrement_ref_count2(generics_sname_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_513 = come_decrement_ref_count2(block_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_514,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_515 = come_decrement_ref_count2(fun_name3_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_491 = come_decrement_ref_count2(fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result219__;
            none_generics_name_510 = come_decrement_ref_count2(none_generics_name_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_511 = come_decrement_ref_count2(generics_sname_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_513 = come_decrement_ref_count2(block_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_514,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_515 = come_decrement_ref_count2(fun_name3_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional511=list$1charph_length(info->method_generics_type_names)>0,            _if_conditional511) {
                generics_sname_537=(char*)come_increment_ref_count(((char*)(right_value664=__builtin_string(info->sname))));
                right_value664 = come_decrement_ref_count2(right_value664, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                generics_sline_538=info->sline;
                block_539=(char*)come_increment_ref_count(((char*)(right_value665=skip_block(info))));
                right_value665 = come_decrement_ref_count2(right_value665, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_540=(struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value671=sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(right_value666=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1735, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(right_value667=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(right_value668=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(right_value669=__builtin_string(fun_name_491)))),(struct sType*)come_increment_ref_count(result_type_481),(struct list$1sTypeph*)come_increment_ref_count(param_types_496),(struct list$1charph*)come_increment_ref_count(param_names_497),(struct list$1charph*)come_increment_ref_count(param_default_parametors_498),var_args_499,(char*)come_increment_ref_count(block_539),info,(char*)come_increment_ref_count(((char*)(right_value670=__builtin_string(generics_sname_537)))),generics_sline_538))));
                come_call_finalizer3(right_value666,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value667,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value668,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                right_value669 = come_decrement_ref_count2(right_value669, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value670 = come_decrement_ref_count2(right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value671,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name3_541=(char*)come_increment_ref_count(((char*)(right_value672=charp_clone(base_fun_name_492))));
                right_value672 = come_decrement_ref_count2(right_value672, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(right_value673=__builtin_string(fun_name3_541)))),(struct sGenericsFun*)come_increment_ref_count(fun_540));
                right_value673 = come_decrement_ref_count2(right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_492 = come_decrement_ref_count2(base_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                __result220__ = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_537 = come_decrement_ref_count2(generics_sname_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_539 = come_decrement_ref_count2(block_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_540,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_541 = come_decrement_ref_count2(fun_name3_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_491 = come_decrement_ref_count2(fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result220__;
                generics_sname_537 = come_decrement_ref_count2(generics_sname_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_539 = come_decrement_ref_count2(block_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_540,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_541 = come_decrement_ref_count2(fun_name3_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional512=*info->p==123,                _if_conditional512) {
                    source_tail_542=info->p-1;
                    header_543=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value675=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value674=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1748, "buffer"))))))));
                    come_call_finalizer3(right_value674,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value675,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    if(constructor__483) {
                        if(_if_conditional515=list$1sTypeph_length(param_types_496)==1,                        _if_conditional515) {
                            name_544=(char*)come_increment_ref_count(((char*)(right_value676=string_clone(info->impl_type->mClass->mName))));
                            right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            buffer_append_str(header_543,((char*)(right_value677=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_544,name_544,name_544))));
                            right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_544 = come_decrement_ref_count2(name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_545=(char*)come_increment_ref_count(((char*)(right_value678=string_clone(info->impl_type->mClass->mName))));
                            right_value678 = come_decrement_ref_count2(right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            buffer_append_str(header_543,((char*)(right_value679=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_545,name_545,name_545))));
                            right_value679 = come_decrement_ref_count2(right_value679, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_546=1;                            i_546<list$1sTypeph_length(param_types_496);                            i_546++                            ){
                                param_type_547=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_496,i_546), "05function.c", 1760, 5));
                                param_name_551=((char*)come_null_check(list$1charphp_operator_load_element(param_names_497,i_546), "05function.c", 1761, 6));
                                default_parametor_552=list$1charphp_operator_load_element(param_default_parametors_498,i_546);
                                if(default_parametor_552) {
                                    buffer_append_str(header_543,((char*)(right_value681=xsprintf("extern %s %s=%s",((char*)(right_value680=make_come_type_name_string_no_solved(param_type_547,info))),param_name_551,default_parametor_552))));
                                    right_value680 = come_decrement_ref_count2(right_value680, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value681 = come_decrement_ref_count2(right_value681, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_543,((char*)(right_value683=xsprintf("extern %s %s",((char*)(right_value682=make_come_type_name_string_no_solved(param_type_547,info))),param_name_551))));
                                    right_value682 = come_decrement_ref_count2(right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value683 = come_decrement_ref_count2(right_value683, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional519=i_546!=list$1sTypeph_length(param_types_496)-1,                                _if_conditional519) {
                                    buffer_append_str(header_543,",");
                                }
                            }
                            buffer_append_str(header_543,");\n");
                            name_545 = come_decrement_ref_count2(name_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(_if_conditional520=info->in_class&&info->impl_type,                        _if_conditional520) {
                            if(_if_conditional521=list$1sTypeph_length(param_types_496)==1,                            _if_conditional521) {
                                impl_name_553=(char*)come_increment_ref_count(((char*)(right_value684=string_clone(info->impl_type->mClass->mName))));
                                right_value684 = come_decrement_ref_count2(right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                result_type_name_554=(char*)come_increment_ref_count(((char*)(right_value685=make_come_type_name_string_no_solved(result_type_481,info))));
                                right_value685 = come_decrement_ref_count2(right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                buffer_append_str(header_543,((char*)(right_value686=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_554,impl_name_553,base_fun_name_492,impl_name_553))));
                                right_value686 = come_decrement_ref_count2(right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_553 = come_decrement_ref_count2(impl_name_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_554 = come_decrement_ref_count2(result_type_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_555=(char*)come_increment_ref_count(((char*)(right_value687=string_clone(info->impl_type->mClass->mName))));
                                right_value687 = come_decrement_ref_count2(right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                result_type_name_556=(char*)come_increment_ref_count(((char*)(right_value688=make_come_type_name_string_no_solved(result_type_481,info))));
                                right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                buffer_append_str(header_543,((char*)(right_value689=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_556,impl_name_555,base_fun_name_492,impl_name_555))));
                                right_value689 = come_decrement_ref_count2(right_value689, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_557=1;                                i_557<list$1sTypeph_length(param_types_496);                                i_557++                                ){
                                    param_type_558=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_496,i_557), "05function.c", 1791, 7));
                                    param_name_559=((char*)come_null_check(list$1charphp_operator_load_element(param_names_497,i_557), "05function.c", 1792, 8));
                                    default_parametor_560=list$1charphp_operator_load_element(param_default_parametors_498,i_557);
                                    if(default_parametor_560) {
                                        buffer_append_str(header_543,((char*)(right_value691=xsprintf("extern %s %s=%s",((char*)(right_value690=make_come_type_name_string_no_solved(param_type_558,info))),param_name_559,default_parametor_560))));
                                        right_value690 = come_decrement_ref_count2(right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value691 = come_decrement_ref_count2(right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_543,((char*)(right_value693=xsprintf("extern %s %s",((char*)(right_value692=make_come_type_name_string_no_solved(param_type_558,info))),param_name_559))));
                                        right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional523=i_557!=list$1sTypeph_length(param_types_496)-1,                                    _if_conditional523) {
                                        buffer_append_str(header_543,",");
                                    }
                                }
                                buffer_append_str(header_543,");\n");
                                impl_name_555 = come_decrement_ref_count2(impl_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_556 = come_decrement_ref_count2(result_type_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_543,source_head_480,source_tail_542-source_head_480);
                            buffer_append_str(header_543,";\n");
                        }
                    }
                    if(_if_conditional524=!result_type_481->mStatic,                    _if_conditional524) {
                        add_come_code_at_come_header(info,"%s",((char*)(right_value694=buffer_to_string(header_543))));
                        right_value694 = come_decrement_ref_count2(right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_561=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value695=parse_block(info,(_Bool)0,constructor__483))));
                    come_call_finalizer3(right_value695,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    static__562=(_Bool)0;
                    if(result_type_481->mStatic) {
                        result_type_481->mStatic=(_Bool)0;
                        static__562=(_Bool)1;
                    }
                    if(_if_conditional526=version_502>0,                    _if_conditional526) {
                        new_fun_name_563=(char*)come_increment_ref_count(((char*)(right_value697=xsprintf("%s_v%d",((char*)(right_value696=__builtin_string(fun_name_491))),version_502))));
                        right_value696 = come_decrement_ref_count2(right_value696, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value697 = come_decrement_ref_count2(right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj145=fun_name_491;
                        fun_name_491=(char*)come_increment_ref_count(((char*)(right_value698=__builtin_string(new_fun_name_563))));
                        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value698 = come_decrement_ref_count2(right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        new_fun_name_563 = come_decrement_ref_count2(new_fun_name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_564=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value704=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value699=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1832, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value700=__builtin_string(fun_name_491)))),(struct sType*)come_increment_ref_count(result_type_481),(struct list$1sTypeph*)come_increment_ref_count(param_types_496),(struct list$1charph*)come_increment_ref_count(param_names_497),(struct list$1charph*)come_increment_ref_count(param_default_parametors_498),(_Bool)0,var_args_499,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value701=sBlock_clone(block_561)))),static__562,(char*)come_increment_ref_count(((char*)(right_value702=buffer_to_string(header_buf_501)))),(char*)come_increment_ref_count(((char*)(right_value703=__builtin_string(info->sname)))),info))));
                    come_call_finalizer3(right_value699,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value700 = come_decrement_ref_count2(right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value701,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value704,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value705=string_clone(fun_name_491)))),(struct sFun*)come_increment_ref_count(fun_564));
                        right_value705 = come_decrement_ref_count2(right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        fun2_565=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value706=__builtin_string(fun_name_491))));
                        right_value706 = come_decrement_ref_count2(right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional528=fun2_565==((void*)0)||fun2_565->mExternal,                        _if_conditional528) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value707=string_clone(fun_name_491)))),(struct sFun*)come_increment_ref_count(fun_564));
                            right_value707 = come_decrement_ref_count2(right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    base_fun_name_492 = come_decrement_ref_count2(base_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1854, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sFunNode*)(right_value709=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value708=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1854, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_564),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sFunNode_finalize;
                    _inf_value5->clone=(void*)sFunNode_clone;
                    _inf_value5->compile=(void*)sFunNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sFunNode_kind;
                    __result227__ = __result_obj__ = ((struct sNode*)(right_value713=_inf_value5));
                    come_call_finalizer3(header_543,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_561,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_564,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_491 = come_decrement_ref_count2(fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_names_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_default_parametors_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(header_buf_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value708,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value709,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value713) { right_value713 = come_decrement_ref_count2(right_value713, ((struct sNode*)right_value713)->finalize, ((struct sNode*)right_value713)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result227__;
                    come_call_finalizer3(header_543,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_561,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_564,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional535=xisalpha(*info->p)||*info->p==95||*info->p==59,                    _if_conditional535) {
                        if(_if_conditional536=version_502>0,                        _if_conditional536) {
                            new_fun_name_567=(char*)come_increment_ref_count(((char*)(right_value714=xsprintf("%s_v%d",fun_name_491,version_502))));
                            right_value714 = come_decrement_ref_count2(right_value714, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj148=fun_name_491;
                            fun_name_491=(char*)come_increment_ref_count(((char*)(right_value715=__builtin_string(new_fun_name_567))));
                            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value715 = come_decrement_ref_count2(right_value715, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            new_fun_name_567 = come_decrement_ref_count2(new_fun_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional537=*info->p==59,                        _if_conditional537) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_481->mStatic=(_Bool)0;
                            fun_568=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value720=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value716=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1868, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value717=__builtin_string(fun_name_491)))),(struct sType*)come_increment_ref_count(result_type_481),(struct list$1sTypeph*)come_increment_ref_count(param_types_496),(struct list$1charph*)come_increment_ref_count(param_names_497),(struct list$1charph*)come_increment_ref_count(param_default_parametors_498),(_Bool)1,var_args_499,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value718=buffer_to_string(header_buf_501)))),(char*)come_increment_ref_count(((char*)(right_value719=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value716,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value717 = come_decrement_ref_count2(right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value718 = come_decrement_ref_count2(right_value718, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value720,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_569=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value721=__builtin_string(fun_name_491))));
                            right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional538=fun2_569==((void*)0)||fun2_569->mExternal,                            _if_conditional538) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value722=string_clone(fun_name_491)))),(struct sFun*)come_increment_ref_count(fun_568));
                                right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_492 = come_decrement_ref_count2(base_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_570=info->p;
                            header_571=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value724=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value723=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1884, "buffer"))))))));
                            come_call_finalizer3(right_value723,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value724,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_571,source_head_480,source_tail_570-source_head_480);
                            add_come_code_at_come_header(info,"%s",((char*)(right_value725=buffer_to_string(header_571))));
                            right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1889, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(right_value727=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value726=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1889, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_568),info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sFunNode_finalize;
                            _inf_value6->clone=(void*)sFunNode_clone;
                            _inf_value6->compile=(void*)sFunNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sFunNode_kind;
                            __result230__ = __result_obj__ = ((struct sNode*)(right_value731=_inf_value6));
                            come_call_finalizer3(fun_568,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_571,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_491 = come_decrement_ref_count2(fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value726,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value727,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value731) { right_value731 = come_decrement_ref_count2(right_value731, ((struct sNode*)right_value731)->finalize, ((struct sNode*)right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result230__;
                            come_call_finalizer3(fun_568,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_571,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_573=(char*)come_increment_ref_count(((char*)(right_value732=parse_attribute(info))));
                            right_value732 = come_decrement_ref_count2(right_value732, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional545=string_operator_not_equals(asm_fun_573,""),                            _if_conditional545) {
                                __dec_obj151=fun_name_491;
                                fun_name_491=(char*)come_increment_ref_count(((char*)(right_value733=__builtin_string(asm_fun_573))));
                                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value733 = come_decrement_ref_count2(right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            (come_push_stackframe("05function.c", 1898, 9),__exception_result_var_b4=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b4);
                            result_type_481->mStatic=(_Bool)0;
                            fun_574=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value738=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value734=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1902, "sFun")))),(char*)come_increment_ref_count(((char*)(right_value735=__builtin_string(fun_name_491)))),(struct sType*)come_increment_ref_count(result_type_481),(struct list$1sTypeph*)come_increment_ref_count(param_types_496),(struct list$1charph*)come_increment_ref_count(param_names_497),(struct list$1charph*)come_increment_ref_count(param_default_parametors_498),(_Bool)1,var_args_499,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value736=buffer_to_string(header_buf_501)))),(char*)come_increment_ref_count(((char*)(right_value737=__builtin_string(info->sname)))),info))));
                            come_call_finalizer3(right_value734,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value735 = come_decrement_ref_count2(right_value735, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value736 = come_decrement_ref_count2(right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value737 = come_decrement_ref_count2(right_value737, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value738,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            fun2_575=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value739=__builtin_string(fun_name_491))));
                            right_value739 = come_decrement_ref_count2(right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional546=fun2_575==((void*)0)||fun2_575->mExternal,                            _if_conditional546) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value740=string_clone(fun_name_491)))),(struct sFun*)come_increment_ref_count(fun_574));
                                right_value740 = come_decrement_ref_count2(right_value740, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_492 = come_decrement_ref_count2(base_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_576=info->p;
                            header_577=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value742=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value741=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1918, "buffer"))))))));
                            come_call_finalizer3(right_value741,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value742,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_577,source_head_480,source_tail_576-source_head_480);
                            add_come_code_at_come_header(info,"%s",((char*)(right_value743=buffer_to_string(header_577))));
                            right_value743 = come_decrement_ref_count2(right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1923, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(right_value745=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value744=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1923, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_574),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result233__ = __result_obj__ = ((struct sNode*)(right_value749=_inf_value7));
                            asm_fun_573 = come_decrement_ref_count2(asm_fun_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_574,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_491 = come_decrement_ref_count2(fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value744,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value745,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value749) { right_value749 = come_decrement_ref_count2(right_value749, ((struct sNode*)right_value749)->finalize, ((struct sNode*)right_value749)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result233__;
                            asm_fun_573 = come_decrement_ref_count2(asm_fun_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_574,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    base_fun_name_492 = come_decrement_ref_count2(base_fun_name_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result234__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_491 = come_decrement_ref_count2(fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result234__;
    come_call_finalizer3(result_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_482 = come_decrement_ref_count2(var_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_491 = come_decrement_ref_count2(fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_496,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_498,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional475;
_Bool _if_conditional476;
_Bool _if_conditional477;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional475=self!=((void*)0)&&self->v1!=((void*)0),        _if_conditional475) {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional476=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional476) {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional477=self!=((void*)0)&&self->v3!=((void*)0),        _if_conditional477) {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional482;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional482=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional482) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__;
_Bool _if_conditional483;
struct sLambdaNode* __result202__;
void* right_value647;
struct sLambdaNode* result_509;
_Bool _if_conditional484;
_Bool _if_conditional485;
void* right_value648;
char* __dec_obj144;
_Bool _if_conditional486;
struct sLambdaNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value647 = (void*)0;
memset(&result_509, 0, sizeof(struct sLambdaNode*));
right_value648 = (void*)0;
            if(_if_conditional483=self==(void*)0,            _if_conditional483) {
                __result202__ = __result_obj__ = (void*)0;
                return __result202__;
            }
            result_509=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(right_value647=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"))));
            come_call_finalizer3(right_value647,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional484=self!=((void*)0),            _if_conditional484) {
                result_509->sline=self->sline;
            }
            if(_if_conditional485=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional485) {
                __dec_obj144=result_509->sname;
                result_509->sname=(char*)come_increment_ref_count(((char*)(right_value648=string_clone(self->sname))));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value648 = come_decrement_ref_count2(right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional486=self!=((void*)0),            _if_conditional486) {
                result_509->mFun=self->mFun;
            }
            __result203__ = __result_obj__ = result_509;
            come_call_finalizer3(result_509,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result203__;
            come_call_finalizer3(result_509,sLambdaNode_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional487;
int __result205__;
int __result206__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional487=self==((void*)0),            _if_conditional487) {
                __result205__ = 0;
                return __result205__;
            }
            __result206__ = self->len;
            return __result206__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__;
_Bool _if_conditional489;
unsigned int hash_533;
unsigned int it_534;
_Bool _while_condtional59;
_Bool _if_conditional501;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
_Bool _if_conditional505;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _if_conditional508;
_Bool same_key_exist_535;
char* it2_536;
_Bool _if_conditional509;
_Bool _if_conditional510;
struct map$2charphsGenericsFunph* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_533, 0, sizeof(unsigned int));
memset(&it_534, 0, sizeof(unsigned int));
memset(&same_key_exist_535, 0, sizeof(_Bool));
memset(&it2_536, 0, sizeof(char*));
                if(_if_conditional489=self->len*10>=self->size,                _if_conditional489) {
                    map$2charphsGenericsFunph_rehash(self);
                }
                hash_533=string_get_hash_key(key)%self->size;
                it_534=hash_533;
                while(_while_condtional59=(_Bool)1,                _while_condtional59) {
                    if(_if_conditional501=self->item_existance[it_534],                    _if_conditional501) {
                        if(_if_conditional502=string_equals(self->keys[it_534],key),                        _if_conditional502) {
                            if(_if_conditional503=1,                            _if_conditional503) {
                                list$1charp_remove(self->key_list,self->keys[it_534]);
                                self->keys[it_534] = come_decrement_ref_count2(self->keys[it_534], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                self->keys[it_534]=(char*)come_increment_ref_count(key);
                            }
                            else {
                                list$1charp_remove(self->key_list,self->keys[it_534]);
                                self->keys[it_534]=key;
                            }
                            if(_if_conditional504=1,                            _if_conditional504) {
                                come_call_finalizer3(self->items[it_534],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                self->items[it_534]=(struct sGenericsFun*)come_increment_ref_count(item);
                            }
                            else {
                                self->items[it_534]=item;
                            }
                            break;
                        }
                        it_534++;
                        if(_if_conditional505=it_534>=self->size,                        _if_conditional505) {
                            it_534=0;
                        }
                        else {
                            if(_if_conditional506=it_534==hash_533,                            _if_conditional506) {
                                printf("unexpected error in map.insert\n");
                                stackframe();
                                exit(2);
                            }
                        }
                    }
                    else {
                        self->item_existance[it_534]=(_Bool)1;
                        if(_if_conditional507=1,                        _if_conditional507) {
                            self->keys[it_534]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            self->keys[it_534]=key;
                        }
                        if(_if_conditional508=1,                        _if_conditional508) {
                            self->items[it_534]=(struct sGenericsFun*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_534]=item;
                        }
                        self->len++;
                        break;
                    }
                }
                same_key_exist_535=(_Bool)0;
                for(                it2_536=list$1charp_begin(self->key_list);                !list$1charp_end(self->key_list);                it2_536=list$1charp_next(self->key_list)                ){
                    if(_if_conditional509=string_equals(it2_536,key),                    _if_conditional509) {
                        same_key_exist_535=(_Bool)1;
                    }
                }
                if(_if_conditional510=!same_key_exist_535,                _if_conditional510) {
                    list$1charp_push_back(self->key_list,key);
                }
                __result218__ = __result_obj__ = self;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result218__;
                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
int size_516;
void* right_value660;
char** keys_517;
void* right_value661;
struct sGenericsFun** items_518;
void* right_value662;
_Bool* item_existance_519;
int len_520;
char* it_523;
struct sGenericsFun* default_value_526;
struct sGenericsFun* it2_529;
unsigned int hash_530;
int n_531;
_Bool _while_condtional58;
_Bool _if_conditional498;
_Bool _if_conditional499;
_Bool _if_conditional500;
struct sGenericsFun* default_value_532;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_516, 0, sizeof(int));
right_value660 = (void*)0;
memset(&keys_517, 0, sizeof(char**));
right_value661 = (void*)0;
memset(&items_518, 0, sizeof(struct sGenericsFun**));
right_value662 = (void*)0;
memset(&item_existance_519, 0, sizeof(_Bool*));
memset(&len_520, 0, sizeof(int));
memset(&it_523, 0, sizeof(char*));
memset(&default_value_526, 0, sizeof(struct sGenericsFun*));
memset(&it2_529, 0, sizeof(struct sGenericsFun*));
memset(&hash_530, 0, sizeof(unsigned int));
memset(&n_531, 0, sizeof(int));
memset(&default_value_532, 0, sizeof(struct sGenericsFun*));
                        size_516=self->size*10;
                        keys_517=(char**)come_increment_ref_count(((char**)(right_value660=(char**)come_calloc(1, sizeof(char*)*(1*(size_516)), "./neo-c.h", 1317, "char*%"))));
                        right_value660 = come_decrement_ref_count2(right_value660, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        items_518=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(right_value661=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_516)), "./neo-c.h", 1318, "sGenericsFun*%"))));
                        come_call_finalizer3(right_value661,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                        item_existance_519=(_Bool*)come_increment_ref_count(((_Bool*)(right_value662=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_516)), "./neo-c.h", 1319, "bool"))));
                        right_value662 = come_decrement_ref_count2(right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        len_520=0;
                        for(                        it_523=map$2charphsGenericsFunph_begin(self);                        !map$2charphsGenericsFunph_end(self);                        it_523=map$2charphsGenericsFunph_next(self)                        ){
                            memset(&default_value_526,0,sizeof(struct sGenericsFun*));
                            it2_529=map$2charphsGenericsFunph_at(self,it_523,default_value_526);
                            hash_530=string_get_hash_key(it_523)%size_516;
                            n_531=hash_530;
                            while(_while_condtional58=(_Bool)1,                            _while_condtional58) {
                                if(_if_conditional498=item_existance_519[n_531],                                _if_conditional498) {
                                    n_531++;
                                    if(_if_conditional499=n_531>=size_516,                                    _if_conditional499) {
                                        n_531=0;
                                    }
                                    else {
                                        if(_if_conditional500=n_531==hash_530,                                        _if_conditional500) {
                                            printf("unexpected error in map.rehash(1)\n");
                                            stackframe();
                                            exit(2);
                                        }
                                    }
                                }
                                else {
                                    item_existance_519[n_531]=(_Bool)1;
                                    keys_517[n_531]=it_523;
                                    items_518[n_531]=map$2charphsGenericsFunph_at(self,it_523,default_value_532);
                                    len_520++;
                                    break;
                                }
                            }
                        }
                        come_free((char*)self->items);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_free((char*)self->keys);
                        self->keys=keys_517;
                        self->items=items_518;
                        self->item_existance=item_existance_519;
                        self->size=size_516;
                        self->len=len_520;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional490;
char* result_521;
char* __result207__;
_Bool _if_conditional491;
char* __result208__;
char* result_522;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_521, 0, sizeof(char*));
memset(&result_522, 0, sizeof(char*));
                            if(_if_conditional490=self==((void*)0),                            _if_conditional490) {
                                memset(&result_521,0,sizeof(char*));
                                __result207__ = __result_obj__ = result_521;
                                return __result207__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result208__ = __result_obj__ = self->key_list->it->item;
                                return __result208__;
                            }
                            memset(&result_522,0,sizeof(char*));
                            __result209__ = __result_obj__ = result_522;
                            return __result209__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool __result210__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result210__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result210__;
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
_Bool _if_conditional492;
char* result_524;
char* __result211__;
_Bool _if_conditional493;
char* __result212__;
char* result_525;
char* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_524, 0, sizeof(char*));
memset(&result_525, 0, sizeof(char*));
                            if(_if_conditional492=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional492) {
                                memset(&result_524,0,sizeof(char*));
                                __result211__ = __result_obj__ = result_524;
                                return __result211__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result212__ = __result_obj__ = self->key_list->it->item;
                                return __result212__;
                            }
                            memset(&result_525,0,sizeof(char*));
                            __result213__ = __result_obj__ = result_525;
                            return __result213__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_527;
unsigned int it_528;
_Bool _while_condtional57;
_Bool _if_conditional494;
_Bool _if_conditional495;
struct sGenericsFun* __result214__;
_Bool _if_conditional496;
_Bool _if_conditional497;
struct sGenericsFun* __result215__;
struct sGenericsFun* __result216__;
struct sGenericsFun* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_527, 0, sizeof(unsigned int));
memset(&it_528, 0, sizeof(unsigned int));
                                hash_527=string_get_hash_key(((char*)key))%self->size;
                                it_528=hash_527;
                                while(_while_condtional57=(_Bool)1,                                _while_condtional57) {
                                    if(_if_conditional494=self->item_existance[it_528],                                    _if_conditional494) {
                                        if(_if_conditional495=string_equals(self->keys[it_528],key),                                        _if_conditional495) {
                                            __result214__ = __result_obj__ = self->items[it_528];
                                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result214__;
                                        }
                                        it_528++;
                                        if(_if_conditional496=it_528>=self->size,                                        _if_conditional496) {
                                            it_528=0;
                                        }
                                        else {
                                            if(_if_conditional497=it_528==hash_527,                                            _if_conditional497) {
                                                __result215__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result215__;
                                            }
                                        }
                                    }
                                    else {
                                        __result216__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result216__;
                                    }
                                }
                                __result217__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result217__;
                                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional514;
int __result221__;
int __result222__;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional514=self==((void*)0),                            _if_conditional514) {
                                __result221__ = 0;
                                return __result221__;
                            }
                            __result222__ = self->len;
                            return __result222__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional516;
struct list_item$1charph* it_548;
int i_549;
_Bool _while_condtional60;
_Bool _if_conditional517;
char* __result223__;
char* default_value_550;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_548, 0, sizeof(struct list_item$1charph*));
memset(&i_549, 0, sizeof(int));
memset(&default_value_550, 0, sizeof(char*));
                                    if(_if_conditional516=position<0,                                    _if_conditional516) {
                                        position+=self->len;
                                    }
                                    it_548=self->head;
                                    i_549=0;
                                    while(_while_condtional60=it_548!=((void*)0),                                    _while_condtional60) {
                                        if(_if_conditional517=position==i_549,                                        _if_conditional517) {
                                            __result223__ = __result_obj__ = it_548->item;
                                            return __result223__;
                                        }
                                        it_548=it_548->next;
                                        i_549++;
                                    }
                                    memset(&default_value_550,0,sizeof(char*));
                                    __result224__ = __result_obj__ = default_value_550;
                                    default_value_550 = come_decrement_ref_count2(default_value_550, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result224__;
                                    default_value_550 = come_decrement_ref_count2(default_value_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_579;
char* __dec_obj154;
char* last_code2_580;
char* __dec_obj155;
char* last_code3_581;
char* __dec_obj156;
struct sClass* current_stack_frame_struct_582;
struct sFun* finalizer_583;
void* right_value750;
char* real_fun_name_584;
void* right_value751;
char* user_real_fun_name_585;
struct sFun* user_finalizer_586;
void* right_value752;
struct sType* type2_587;
struct sClass* klass_588;
_Bool _if_conditional553;
void* right_value753;
void* right_value754;
struct buffer* source_589;
_Bool _if_conditional554;
struct list$1tuple2$2charphsTypephph* o2_saved_591;
struct tuple2$2charphsTypeph* it_594;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_597;
struct sType* field_type_598;
_Bool _if_conditional559;
_Bool _if_conditional560;
char* p_600;
int sline_601;
char* sname_602;
char* head_603;
struct buffer* source3_604;
struct buffer* __dec_obj157;
void* right_value755;
char* __dec_obj158;
void* right_value756;
struct sBlock* block_605;
void* right_value757;
void* right_value758;
struct sType* result_type_606;
void* right_value759;
char* name_607;
void* right_value760;
struct sType* self_type_608;
_Bool _if_conditional561;
struct sType* __list_values21___609[1];
void* right_value761;
void* right_value762;
struct list$1sTypeph* param_types_610;
void* right_value763;
char* __list_values22___611[1];
void* right_value764;
void* right_value765;
struct list$1charph* param_names_612;
void* right_value766;
void* right_value767;
struct list$1charph* param_default_parametors_613;
void* right_value768;
void* right_value769;
struct buffer* header_buf_614;
void* right_value770;
int i_615;
struct sType* param_type_616;
char* param_name_617;
void* right_value771;
_Bool _if_conditional562;
void* right_value772;
void* right_value773;
void* right_value774;
void* right_value775;
struct sFun* fun_618;
void* right_value776;
struct sFun* fun2_619;
_Bool _if_conditional563;
void* right_value777;
void* right_value778;
void* right_value779;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* right_value783;
struct sNode* node_621;
_Bool _if_conditional570;
struct buffer* __dec_obj161;
char* __dec_obj162;
char* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
void* right_value784;
void* right_value785;
struct tuple2$2sFunpcharph* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_579, 0, sizeof(char*));
memset(&last_code2_580, 0, sizeof(char*));
memset(&last_code3_581, 0, sizeof(char*));
memset(&current_stack_frame_struct_582, 0, sizeof(struct sClass*));
memset(&finalizer_583, 0, sizeof(struct sFun*));
right_value750 = (void*)0;
memset(&real_fun_name_584, 0, sizeof(char*));
right_value751 = (void*)0;
memset(&user_real_fun_name_585, 0, sizeof(char*));
memset(&user_finalizer_586, 0, sizeof(struct sFun*));
right_value752 = (void*)0;
memset(&type2_587, 0, sizeof(struct sType*));
memset(&klass_588, 0, sizeof(struct sClass*));
right_value753 = (void*)0;
right_value754 = (void*)0;
memset(&source_589, 0, sizeof(struct buffer*));
memset(&o2_saved_591, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_594, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_597, 0, sizeof(char*));
memset(&field_type_598, 0, sizeof(struct sType*));
memset(&name_597, 0, sizeof(char*));
memset(&field_type_598, 0, sizeof(struct sType*));
memset(&p_600, 0, sizeof(char*));
memset(&sline_601, 0, sizeof(int));
memset(&sname_602, 0, sizeof(char*));
memset(&head_603, 0, sizeof(char*));
memset(&source3_604, 0, sizeof(struct buffer*));
right_value755 = (void*)0;
right_value756 = (void*)0;
memset(&block_605, 0, sizeof(struct sBlock*));
right_value757 = (void*)0;
right_value758 = (void*)0;
memset(&result_type_606, 0, sizeof(struct sType*));
right_value759 = (void*)0;
memset(&name_607, 0, sizeof(char*));
right_value760 = (void*)0;
memset(&self_type_608, 0, sizeof(struct sType*));
right_value761 = (void*)0;
right_value762 = (void*)0;
memset(&param_types_610, 0, sizeof(struct list$1sTypeph*));
right_value763 = (void*)0;
right_value764 = (void*)0;
right_value765 = (void*)0;
memset(&param_names_612, 0, sizeof(struct list$1charph*));
right_value766 = (void*)0;
right_value767 = (void*)0;
memset(&param_default_parametors_613, 0, sizeof(struct list$1charph*));
right_value768 = (void*)0;
right_value769 = (void*)0;
memset(&header_buf_614, 0, sizeof(struct buffer*));
right_value770 = (void*)0;
memset(&i_615, 0, sizeof(int));
memset(&param_type_616, 0, sizeof(struct sType*));
memset(&param_name_617, 0, sizeof(char*));
right_value771 = (void*)0;
right_value772 = (void*)0;
right_value773 = (void*)0;
right_value774 = (void*)0;
right_value775 = (void*)0;
memset(&fun_618, 0, sizeof(struct sFun*));
right_value776 = (void*)0;
memset(&fun2_619, 0, sizeof(struct sFun*));
right_value777 = (void*)0;
right_value778 = (void*)0;
right_value779 = (void*)0;
right_value783 = (void*)0;
memset(&node_621, 0, sizeof(struct sNode*));
right_value784 = (void*)0;
right_value785 = (void*)0;
    last_code_579=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj154=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_580=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj155=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_581=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj156=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_582=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_583=((void*)0);
    real_fun_name_584=(char*)come_increment_ref_count(((char*)(right_value750=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value750 = come_decrement_ref_count2(right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    user_real_fun_name_585=(char*)come_increment_ref_count(((char*)(right_value751=create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1))));
    right_value751 = come_decrement_ref_count2(right_value751, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    user_finalizer_586=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_585);
    type2_587=(struct sType*)come_increment_ref_count(((struct sType*)(right_value752=solve_generics(type,type,info))));
    come_call_finalizer3(right_value752,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_587;
    klass_588=type->mClass;
    if(_if_conditional553=type->mPointerNum>0&&klass_588->mStruct,    _if_conditional553) {
        source_589=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value754=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value753=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1962, "buffer"))))))));
        come_call_finalizer3(right_value753,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value754,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_589,123);
        if(user_finalizer_586) {
            char source2_590[1024];
            memset(&source2_590, 0, sizeof(char)            *(1024)            );
            snprintf(source2_590,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_585);
            buffer_append_str(source_589,source2_590);
        }
        klass_588=map$2charphsClassphp_operator_load_element(info->classes,klass_588->mName);
        for(        o2_saved_591=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_588->mFields)),it_594=list$1tuple2$2charphsTypephph_begin((o2_saved_591));        !list$1tuple2$2charphsTypephph_end((o2_saved_591));        it_594=list$1tuple2$2charphsTypephph_next((o2_saved_591))        ){
            multiple_assign_var10=it_594;
            name_597=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_598=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(_if_conditional559=string_operator_equals(type->mClass->mName,field_type_598->mClass->mName)&&type->mPointerNum==field_type_598->mPointerNum&&field_type_598->mHeap,            _if_conditional559) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_598->mHeap) {
                char source2_599[1024];
                memset(&source2_599, 0, sizeof(char)                *(1024)                );
                snprintf(source2_599,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_597,name_597);
                buffer_append_str(source_589,source2_599);
            }
            name_597 = come_decrement_ref_count2(name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_591,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_589,125);
        p_600=info->p;
        sline_601=info->sline;
        sname_602=(char*)come_increment_ref_count(info->sname);
        head_603=info->head;
        source3_604=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj157=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_589);
        come_call_finalizer3(__dec_obj157,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_589->buf;
        info->head=source_589->buf;
        __dec_obj158=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value755=__builtin_string(real_fun_name_584))));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value755 = come_decrement_ref_count2(right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_605=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value756=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value756,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_606=(struct sType*)come_increment_ref_count(((struct sType*)(right_value758=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value757=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2008, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value757,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value758,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_607=(char*)come_increment_ref_count(((char*)(right_value759=string_clone(real_fun_name_584))));
        right_value759 = come_decrement_ref_count2(right_value759, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_608=(struct sType*)come_increment_ref_count(((struct sType*)(right_value760=sType_clone(type))));
        come_call_finalizer3(right_value760,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_608->mHeap=(_Bool)0;
        if(_if_conditional561=self_type_608->mPointerNum>1,        _if_conditional561) {
            self_type_608->mPointerNum=1;
        }
        {__list_values21___609[0]=come_increment_ref_count(self_type_608);
}        param_types_610=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value762=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value761=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2015, "struct list$1sTypeph")))),1,__list_values21___609))));
        come_call_finalizer3(right_value761,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value762,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values22___611[0]=come_increment_ref_count(((char*)(right_value763=__builtin_string("self"))));
}        param_names_612=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value765=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value764=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2016, "struct list$1charph")))),1,__list_values22___611))));
        right_value763 = come_decrement_ref_count2(right_value763, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value764,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value765,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_613=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value767=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value766=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2017, "list$1charph"))))))));
        come_call_finalizer3(right_value766,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value767,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_613,((void*)0));
        header_buf_614=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value769=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value768=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2020, "buffer"))))))));
        come_call_finalizer3(right_value768,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value769,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_614,((char*)(right_value770=make_come_type_name_string(result_type_606,info))));
        right_value770 = come_decrement_ref_count2(right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_614," ");
        buffer_append_str(header_buf_614,real_fun_name_584);
        buffer_append_str(header_buf_614,"(");
        for(        i_615=0;        i_615<list$1sTypeph_length(param_types_610);        i_615++        ){
            param_type_616=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_610,i_615), "05function.c", 2028, 10));
            param_name_617=((char*)come_null_check(list$1charphp_operator_load_element(param_names_612,i_615), "05function.c", 2029, 11));
            buffer_append_str(header_buf_614,((char*)(right_value771=make_come_type_name_string(param_type_616,info))));
            right_value771 = come_decrement_ref_count2(right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_614," ");
            buffer_append_str(header_buf_614,param_name_617);
            if(_if_conditional562=i_615!=list$1sTypeph_length(param_types_610)-1,            _if_conditional562) {
                buffer_append_str(header_buf_614,",");
            }
        }
        buffer_append_str(header_buf_614,")");
        result_type_606->mStatic=(_Bool)0;
        fun_618=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value775=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value772=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2043, "sFun")))),(char*)come_increment_ref_count(name_607),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sTypeph*)come_increment_ref_count(param_types_610),(struct list$1charph*)come_increment_ref_count(param_names_612),(struct list$1charph*)come_increment_ref_count(param_default_parametors_613),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_605),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value773=buffer_to_string(header_buf_614)))),(char*)come_increment_ref_count(((char*)(right_value774=__builtin_string("")))),info))));
        come_call_finalizer3(right_value772,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value773 = come_decrement_ref_count2(right_value773, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value774 = come_decrement_ref_count2(right_value774, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value775,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_619=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value776=__builtin_string(fun_name))));
        right_value776 = come_decrement_ref_count2(right_value776, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional563=fun2_619==((void*)0)||fun2_619->mExternal,        _if_conditional563) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value777=string_clone(name_607)))),(struct sFun*)come_increment_ref_count(fun_618));
            right_value777 = come_decrement_ref_count2(right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_583=fun_618;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2059, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(right_value779=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value778=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2059, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_618),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFunNode_finalize;
        _inf_value8->clone=(void*)sFunNode_clone;
        _inf_value8->compile=(void*)sFunNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sFunNode_kind;
        node_621=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value783=_inf_value8)));
        come_call_finalizer3(right_value778,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value779,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value783) { right_value783 = come_decrement_ref_count2(right_value783, ((struct sNode*)right_value783)->finalize, ((struct sNode*)right_value783)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional570=!node_compile(node_621,info),        _if_conditional570) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj161=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_604);
        come_call_finalizer3(__dec_obj161,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_600;
        info->head=head_603;
        info->sline=sline_601;
        __dec_obj162=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_602);
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_602 = come_decrement_ref_count2(sname_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_604,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_605,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_607 = come_decrement_ref_count2(name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_610,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_612,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_613,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_614,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_618,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_582;
    __dec_obj163=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_579);
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj164=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_580);
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj165=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_581);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result245__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value785=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value784=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2079, "struct tuple2$2sFunpcharph")))),finalizer_583,(char*)come_increment_ref_count(real_fun_name_584))));
    last_code_579 = come_decrement_ref_count2(last_code_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_580 = come_decrement_ref_count2(last_code2_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_581 = come_decrement_ref_count2(last_code3_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_584 = come_decrement_ref_count2(real_fun_name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_585 = come_decrement_ref_count2(user_real_fun_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_587,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value784 = come_decrement_ref_count2(right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value785,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result245__;
    last_code_579 = come_decrement_ref_count2(last_code_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_580 = come_decrement_ref_count2(last_code2_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_581 = come_decrement_ref_count2(last_code3_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_584 = come_decrement_ref_count2(real_fun_name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_585 = come_decrement_ref_count2(user_real_fun_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_587,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional555;
struct tuple2$2charphsTypeph* result_592;
struct tuple2$2charphsTypeph* __result235__;
_Bool _if_conditional556;
struct tuple2$2charphsTypeph* __result236__;
struct tuple2$2charphsTypeph* result_593;
struct tuple2$2charphsTypeph* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_592, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_593, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional555=self==((void*)0),            _if_conditional555) {
                memset(&result_592,0,sizeof(struct tuple2$2charphsTypeph*));
                __result235__ = __result_obj__ = result_592;
                return __result235__;
            }
            self->it=self->head;
            if(self->it) {
                __result236__ = __result_obj__ = self->it->item;
                return __result236__;
            }
            memset(&result_593,0,sizeof(struct tuple2$2charphsTypeph*));
            __result237__ = __result_obj__ = result_593;
            return __result237__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result238__;
memset(&__result_obj__, 0, sizeof(void*));
            __result238__ = self==((void*)0)||self->it==((void*)0);
            return __result238__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional557;
struct tuple2$2charphsTypeph* result_595;
struct tuple2$2charphsTypeph* __result239__;
_Bool _if_conditional558;
struct tuple2$2charphsTypeph* __result240__;
struct tuple2$2charphsTypeph* result_596;
struct tuple2$2charphsTypeph* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_595, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_596, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional557=self==((void*)0)||self->it==((void*)0),            _if_conditional557) {
                memset(&result_595,0,sizeof(struct tuple2$2charphsTypeph*));
                __result239__ = __result_obj__ = result_595;
                return __result239__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result240__ = __result_obj__ = self->it->item;
                return __result240__;
            }
            memset(&result_596,0,sizeof(struct tuple2$2charphsTypeph*));
            __result241__ = __result_obj__ = result_596;
            return __result241__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__;
char* __dec_obj166;
struct tuple2$2sFunpcharph* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
        self->v1=v1;
        __dec_obj166=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result244__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result244__;
        come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional571;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional571=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional571) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_622;
char* __dec_obj167;
char* last_code2_623;
char* __dec_obj168;
char* last_code3_624;
char* __dec_obj169;
struct sClass* current_stack_frame_struct_625;
struct sFun* finalizer_626;
void* right_value786;
char* real_fun_name_627;
void* right_value787;
struct sType* type2_628;
struct sClass* klass_629;
_Bool _if_conditional572;
void* right_value788;
void* right_value789;
struct buffer* source_630;
struct list$1tuple2$2charphsTypephph* o2_saved_631;
struct tuple2$2charphsTypeph* it_632;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_633;
struct sType* field_type_634;
_Bool _if_conditional573;
_Bool _if_conditional574;
char* p_636;
int sline_637;
char* sname_638;
char* head_639;
struct buffer* source3_640;
struct buffer* __dec_obj170;
void* right_value790;
char* __dec_obj171;
void* right_value791;
struct sBlock* block_641;
void* right_value792;
void* right_value793;
struct sType* result_type_642;
void* right_value794;
char* name_643;
void* right_value795;
struct sType* self_type_644;
_Bool _if_conditional575;
struct sType* __list_values23___645[1];
void* right_value796;
void* right_value797;
struct list$1sTypeph* param_types_646;
void* right_value798;
char* __list_values24___647[1];
void* right_value799;
void* right_value800;
struct list$1charph* param_names_648;
void* right_value801;
void* right_value802;
struct list$1charph* param_default_parametors_649;
void* right_value803;
void* right_value804;
struct buffer* header_buf_650;
void* right_value805;
int i_651;
struct sType* param_type_652;
char* param_name_653;
void* right_value806;
_Bool _if_conditional576;
void* right_value807;
void* right_value808;
void* right_value809;
void* right_value810;
struct sFun* fun_654;
void* right_value811;
struct sFun* fun2_655;
_Bool _if_conditional577;
void* right_value812;
void* right_value813;
void* right_value814;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* right_value818;
struct sNode* node_657;
_Bool _if_conditional584;
struct buffer* __dec_obj174;
char* __dec_obj175;
char* __dec_obj176;
char* __dec_obj177;
char* __dec_obj178;
void* right_value819;
void* right_value820;
struct tuple2$2sFunpcharph* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_622, 0, sizeof(char*));
memset(&last_code2_623, 0, sizeof(char*));
memset(&last_code3_624, 0, sizeof(char*));
memset(&current_stack_frame_struct_625, 0, sizeof(struct sClass*));
memset(&finalizer_626, 0, sizeof(struct sFun*));
right_value786 = (void*)0;
memset(&real_fun_name_627, 0, sizeof(char*));
right_value787 = (void*)0;
memset(&type2_628, 0, sizeof(struct sType*));
memset(&klass_629, 0, sizeof(struct sClass*));
right_value788 = (void*)0;
right_value789 = (void*)0;
memset(&source_630, 0, sizeof(struct buffer*));
memset(&o2_saved_631, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_632, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_633, 0, sizeof(char*));
memset(&field_type_634, 0, sizeof(struct sType*));
memset(&name_633, 0, sizeof(char*));
memset(&field_type_634, 0, sizeof(struct sType*));
memset(&p_636, 0, sizeof(char*));
memset(&sline_637, 0, sizeof(int));
memset(&sname_638, 0, sizeof(char*));
memset(&head_639, 0, sizeof(char*));
memset(&source3_640, 0, sizeof(struct buffer*));
right_value790 = (void*)0;
right_value791 = (void*)0;
memset(&block_641, 0, sizeof(struct sBlock*));
right_value792 = (void*)0;
right_value793 = (void*)0;
memset(&result_type_642, 0, sizeof(struct sType*));
right_value794 = (void*)0;
memset(&name_643, 0, sizeof(char*));
right_value795 = (void*)0;
memset(&self_type_644, 0, sizeof(struct sType*));
right_value796 = (void*)0;
right_value797 = (void*)0;
memset(&param_types_646, 0, sizeof(struct list$1sTypeph*));
right_value798 = (void*)0;
right_value799 = (void*)0;
right_value800 = (void*)0;
memset(&param_names_648, 0, sizeof(struct list$1charph*));
right_value801 = (void*)0;
right_value802 = (void*)0;
memset(&param_default_parametors_649, 0, sizeof(struct list$1charph*));
right_value803 = (void*)0;
right_value804 = (void*)0;
memset(&header_buf_650, 0, sizeof(struct buffer*));
right_value805 = (void*)0;
memset(&i_651, 0, sizeof(int));
memset(&param_type_652, 0, sizeof(struct sType*));
memset(&param_name_653, 0, sizeof(char*));
right_value806 = (void*)0;
right_value807 = (void*)0;
right_value808 = (void*)0;
right_value809 = (void*)0;
right_value810 = (void*)0;
memset(&fun_654, 0, sizeof(struct sFun*));
right_value811 = (void*)0;
memset(&fun2_655, 0, sizeof(struct sFun*));
right_value812 = (void*)0;
right_value813 = (void*)0;
right_value814 = (void*)0;
right_value818 = (void*)0;
memset(&node_657, 0, sizeof(struct sNode*));
right_value819 = (void*)0;
right_value820 = (void*)0;
    last_code_622=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj167=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_623=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj168=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_624=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj169=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_625=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_626=((void*)0);
    real_fun_name_627=(char*)come_increment_ref_count(((char*)(right_value786=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value786 = come_decrement_ref_count2(right_value786, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_628=(struct sType*)come_increment_ref_count(((struct sType*)(right_value787=solve_generics(type,type,info))));
    come_call_finalizer3(right_value787,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_628;
    klass_629=type->mClass;
    if(_if_conditional572=type->mPointerNum>0&&klass_629->mStruct,    _if_conditional572) {
        source_630=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value789=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value788=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2106, "buffer"))))))));
        come_call_finalizer3(right_value788,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value789,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_630,123);
        klass_629=map$2charphsClassphp_operator_load_element(info->classes,klass_629->mName);
        for(        o2_saved_631=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_629->mFields)),it_632=list$1tuple2$2charphsTypephph_begin((o2_saved_631));        !list$1tuple2$2charphsTypephph_end((o2_saved_631));        it_632=list$1tuple2$2charphsTypephph_next((o2_saved_631))        ){
            multiple_assign_var11=it_632;
            name_633=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_634=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(_if_conditional573=string_operator_equals(type->mClass->mName,field_type_634->mClass->mName)&&type->mPointerNum==field_type_634->mPointerNum&&field_type_634->mHeap,            _if_conditional573) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_634->mHeap) {
                char source2_635[1024];
                memset(&source2_635, 0, sizeof(char)                *(1024)                );
                snprintf(source2_635,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_633,name_633);
                buffer_append_str(source_630,source2_635);
            }
            name_633 = come_decrement_ref_count2(name_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_631,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_630,125);
        p_636=info->p;
        sline_637=info->sline;
        sname_638=(char*)come_increment_ref_count(info->sname);
        head_639=info->head;
        source3_640=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj170=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_630);
        come_call_finalizer3(__dec_obj170,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_630->buf;
        info->head=source_630->buf;
        __dec_obj171=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value790=__builtin_string(real_fun_name_627))));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value790 = come_decrement_ref_count2(right_value790, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_641=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value791=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value791,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_642=(struct sType*)come_increment_ref_count(((struct sType*)(right_value793=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value792=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2145, "sType")))),"void",(_Bool)0,info))));
        come_call_finalizer3(right_value792,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value793,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_643=(char*)come_increment_ref_count(((char*)(right_value794=string_clone(real_fun_name_627))));
        right_value794 = come_decrement_ref_count2(right_value794, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_644=(struct sType*)come_increment_ref_count(((struct sType*)(right_value795=sType_clone(type))));
        come_call_finalizer3(right_value795,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_644->mHeap=(_Bool)0;
        if(_if_conditional575=self_type_644->mPointerNum>1,        _if_conditional575) {
            self_type_644->mPointerNum=1;
        }
        {__list_values23___645[0]=come_increment_ref_count(self_type_644);
}        param_types_646=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value797=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value796=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2152, "struct list$1sTypeph")))),1,__list_values23___645))));
        come_call_finalizer3(right_value796,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value797,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values24___647[0]=come_increment_ref_count(((char*)(right_value798=__builtin_string("self"))));
}        param_names_648=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value800=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value799=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2153, "struct list$1charph")))),1,__list_values24___647))));
        right_value798 = come_decrement_ref_count2(right_value798, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value799,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value800,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_649=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value802=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value801=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2154, "list$1charph"))))))));
        come_call_finalizer3(right_value801,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value802,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_649,((void*)0));
        header_buf_650=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value804=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value803=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2157, "buffer"))))))));
        come_call_finalizer3(right_value803,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value804,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_650,((char*)(right_value805=make_come_type_name_string(result_type_642,info))));
        right_value805 = come_decrement_ref_count2(right_value805, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_650," ");
        buffer_append_str(header_buf_650,real_fun_name_627);
        buffer_append_str(header_buf_650,"(");
        for(        i_651=0;        i_651<list$1sTypeph_length(param_types_646);        i_651++        ){
            param_type_652=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_646,i_651), "05function.c", 2165, 12));
            param_name_653=((char*)come_null_check(list$1charphp_operator_load_element(param_names_648,i_651), "05function.c", 2166, 13));
            buffer_append_str(header_buf_650,((char*)(right_value806=make_come_type_name_string(param_type_652,info))));
            right_value806 = come_decrement_ref_count2(right_value806, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_650," ");
            buffer_append_str(header_buf_650,param_name_653);
            if(_if_conditional576=i_651!=list$1sTypeph_length(param_types_646)-1,            _if_conditional576) {
                buffer_append_str(header_buf_650,",");
            }
        }
        buffer_append_str(header_buf_650,")");
        result_type_642->mStatic=(_Bool)0;
        fun_654=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value810=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value807=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2180, "sFun")))),(char*)come_increment_ref_count(name_643),(struct sType*)come_increment_ref_count(result_type_642),(struct list$1sTypeph*)come_increment_ref_count(param_types_646),(struct list$1charph*)come_increment_ref_count(param_names_648),(struct list$1charph*)come_increment_ref_count(param_default_parametors_649),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_641),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value808=buffer_to_string(header_buf_650)))),(char*)come_increment_ref_count(((char*)(right_value809=__builtin_string("")))),info))));
        come_call_finalizer3(right_value807,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value808 = come_decrement_ref_count2(right_value808, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value809 = come_decrement_ref_count2(right_value809, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value810,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_655=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value811=__builtin_string(fun_name))));
        right_value811 = come_decrement_ref_count2(right_value811, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional577=fun2_655==((void*)0)||fun2_655->mExternal,        _if_conditional577) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value812=string_clone(name_643)))),(struct sFun*)come_increment_ref_count(fun_654));
            right_value812 = come_decrement_ref_count2(right_value812, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_626=fun_654;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2196, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(right_value814=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value813=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2196, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_654),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_657=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value818=_inf_value9)));
        come_call_finalizer3(right_value813,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value814,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value818) { right_value818 = come_decrement_ref_count2(right_value818, ((struct sNode*)right_value818)->finalize, ((struct sNode*)right_value818)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional584=!node_compile(node_657,info),        _if_conditional584) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj174=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_640);
        come_call_finalizer3(__dec_obj174,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_636;
        info->head=head_639;
        info->sline=sline_637;
        __dec_obj175=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_638);
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_630,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_638 = come_decrement_ref_count2(sname_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_640,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_641,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_643 = come_decrement_ref_count2(name_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_646,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_648,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_649,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_650,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_654,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_657) { node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_625;
    __dec_obj176=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_622);
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_623);
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj178=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_624);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result248__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value820=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value819=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2216, "struct tuple2$2sFunpcharph")))),finalizer_626,(char*)come_increment_ref_count(real_fun_name_627))));
    last_code_622 = come_decrement_ref_count2(last_code_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_623 = come_decrement_ref_count2(last_code2_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_624 = come_decrement_ref_count2(last_code3_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_627 = come_decrement_ref_count2(real_fun_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_628,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value819 = come_decrement_ref_count2(right_value819, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value820,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result248__;
    last_code_622 = come_decrement_ref_count2(last_code_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_623 = come_decrement_ref_count2(last_code2_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_624 = come_decrement_ref_count2(last_code3_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_627 = come_decrement_ref_count2(real_fun_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_628,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_658;
char* __dec_obj179;
char* last_code2_659;
char* __dec_obj180;
char* last_code3_660;
char* __dec_obj181;
struct sClass* current_stack_frame_struct_661;
struct sFun* equaler_662;
void* right_value821;
char* real_fun_name_663;
void* right_value822;
struct sType* type2_664;
struct sClass* klass_665;
_Bool _if_conditional585;
void* right_value823;
void* right_value824;
struct buffer* source_666;
_Bool _if_conditional586;
char* name_667;
struct list$1tuple2$2charphsTypephph* o2_saved_669;
struct tuple2$2charphsTypeph* it_670;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_671;
struct sType* field_type_672;
_Bool _if_conditional587;
char* p_674;
int sline_675;
char* sname_676;
char* head_677;
struct buffer* source3_678;
struct buffer* __dec_obj182;
void* right_value825;
char* __dec_obj183;
void* right_value826;
struct sBlock* block_679;
void* right_value827;
void* right_value828;
struct sType* result_type_680;
void* right_value829;
char* name_681;
void* right_value830;
struct sType* left_type_682;
void* right_value831;
struct sType* right_type_683;
struct sType* __list_values25___684[2];
void* right_value832;
void* right_value833;
struct list$1sTypeph* param_types_685;
void* right_value834;
void* right_value835;
char* __list_values26___686[2];
void* right_value836;
void* right_value837;
struct list$1charph* param_names_687;
void* right_value838;
void* right_value839;
struct list$1charph* param_default_parametors_688;
void* right_value840;
void* right_value841;
struct buffer* header_buf_689;
void* right_value842;
int i_690;
struct sType* param_type_691;
char* param_name_692;
void* right_value843;
_Bool _if_conditional588;
void* right_value844;
void* right_value845;
void* right_value846;
void* right_value847;
struct sFun* fun_693;
void* right_value848;
struct sFun* fun2_694;
_Bool _if_conditional589;
void* right_value849;
void* right_value850;
void* right_value851;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* right_value855;
struct sNode* node_696;
_Bool _if_conditional596;
struct buffer* __dec_obj186;
char* __dec_obj187;
char* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
void* right_value856;
void* right_value857;
struct tuple2$2sFunpcharph* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_658, 0, sizeof(char*));
memset(&last_code2_659, 0, sizeof(char*));
memset(&last_code3_660, 0, sizeof(char*));
memset(&current_stack_frame_struct_661, 0, sizeof(struct sClass*));
memset(&equaler_662, 0, sizeof(struct sFun*));
right_value821 = (void*)0;
memset(&real_fun_name_663, 0, sizeof(char*));
right_value822 = (void*)0;
memset(&type2_664, 0, sizeof(struct sType*));
memset(&klass_665, 0, sizeof(struct sClass*));
right_value823 = (void*)0;
right_value824 = (void*)0;
memset(&source_666, 0, sizeof(struct buffer*));
memset(&name_667, 0, sizeof(char*));
memset(&o2_saved_669, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_670, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_671, 0, sizeof(char*));
memset(&field_type_672, 0, sizeof(struct sType*));
memset(&name_671, 0, sizeof(char*));
memset(&field_type_672, 0, sizeof(struct sType*));
memset(&p_674, 0, sizeof(char*));
memset(&sline_675, 0, sizeof(int));
memset(&sname_676, 0, sizeof(char*));
memset(&head_677, 0, sizeof(char*));
memset(&source3_678, 0, sizeof(struct buffer*));
right_value825 = (void*)0;
right_value826 = (void*)0;
memset(&block_679, 0, sizeof(struct sBlock*));
right_value827 = (void*)0;
right_value828 = (void*)0;
memset(&result_type_680, 0, sizeof(struct sType*));
right_value829 = (void*)0;
memset(&name_681, 0, sizeof(char*));
right_value830 = (void*)0;
memset(&left_type_682, 0, sizeof(struct sType*));
right_value831 = (void*)0;
memset(&right_type_683, 0, sizeof(struct sType*));
right_value832 = (void*)0;
right_value833 = (void*)0;
memset(&param_types_685, 0, sizeof(struct list$1sTypeph*));
right_value834 = (void*)0;
right_value835 = (void*)0;
right_value836 = (void*)0;
right_value837 = (void*)0;
memset(&param_names_687, 0, sizeof(struct list$1charph*));
right_value838 = (void*)0;
right_value839 = (void*)0;
memset(&param_default_parametors_688, 0, sizeof(struct list$1charph*));
right_value840 = (void*)0;
right_value841 = (void*)0;
memset(&header_buf_689, 0, sizeof(struct buffer*));
right_value842 = (void*)0;
memset(&i_690, 0, sizeof(int));
memset(&param_type_691, 0, sizeof(struct sType*));
memset(&param_name_692, 0, sizeof(char*));
right_value843 = (void*)0;
right_value844 = (void*)0;
right_value845 = (void*)0;
right_value846 = (void*)0;
right_value847 = (void*)0;
memset(&fun_693, 0, sizeof(struct sFun*));
right_value848 = (void*)0;
memset(&fun2_694, 0, sizeof(struct sFun*));
right_value849 = (void*)0;
right_value850 = (void*)0;
right_value851 = (void*)0;
right_value855 = (void*)0;
memset(&node_696, 0, sizeof(struct sNode*));
right_value856 = (void*)0;
right_value857 = (void*)0;
    last_code_658=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj179=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_659=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj180=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_660=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj181=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_661=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_662=((void*)0);
    real_fun_name_663=(char*)come_increment_ref_count(((char*)(right_value821=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value821 = come_decrement_ref_count2(right_value821, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_664=(struct sType*)come_increment_ref_count(((struct sType*)(right_value822=solve_generics(type,type,info))));
    come_call_finalizer3(right_value822,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_664;
    klass_665=type->mClass;
    if(_if_conditional585=type->mPointerNum>0&&!klass_665->mNumber,    _if_conditional585) {
        source_666=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value824=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value823=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2241, "buffer"))))))));
        come_call_finalizer3(right_value823,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value824,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_666,123);
        if(klass_665->mProtocol) {
            name_667="_protocol_obj";
            char source2_668[1024];
            memset(&source2_668, 0, sizeof(char)            *(1024)            );
            snprintf(source2_668,1024,"return left.%s.equals(right.%s);\n",name_667,name_667);
            buffer_append_str(source_666,source2_668);
        }
        else {
            klass_665=map$2charphsClassphp_operator_load_element(info->classes,klass_665->mName);
            for(            o2_saved_669=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_665->mFields)),it_670=list$1tuple2$2charphsTypephph_begin((o2_saved_669));            !list$1tuple2$2charphsTypephph_end((o2_saved_669));            it_670=list$1tuple2$2charphsTypephph_next((o2_saved_669))            ){
                multiple_assign_var12=it_670;
                name_671=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_672=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(_if_conditional587=string_operator_equals(type->mClass->mName,field_type_672->mClass->mName)&&type->mPointerNum==field_type_672->mPointerNum&&field_type_672->mHeap,                _if_conditional587) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_673[1024];
                memset(&source2_673, 0, sizeof(char)                *(1024)                );
                snprintf(source2_673,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_671,name_671);
                buffer_append_str(source_666,source2_673);
                name_671 = come_decrement_ref_count2(name_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_669,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_666,"return true;");
        buffer_append_char(source_666,125);
        p_674=info->p;
        sline_675=info->sline;
        sname_676=(char*)come_increment_ref_count(info->sname);
        head_677=info->head;
        source3_678=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj182=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_666);
        come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_666->buf;
        info->head=source_666->buf;
        __dec_obj183=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value825=__builtin_string(real_fun_name_663))));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value825 = come_decrement_ref_count2(right_value825, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_679=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value826=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value826,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_680=(struct sType*)come_increment_ref_count(((struct sType*)(right_value828=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value827=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2287, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value827,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value828,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_681=(char*)come_increment_ref_count(((char*)(right_value829=string_clone(real_fun_name_663))));
        right_value829 = come_decrement_ref_count2(right_value829, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_682=(struct sType*)come_increment_ref_count(((struct sType*)(right_value830=sType_clone(type))));
        come_call_finalizer3(right_value830,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_682->mHeap=(_Bool)0;
        right_type_683=(struct sType*)come_increment_ref_count(((struct sType*)(right_value831=sType_clone(type))));
        come_call_finalizer3(right_value831,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_683->mHeap=(_Bool)0;
        {__list_values25___684[0]=come_increment_ref_count(left_type_682);
__list_values25___684[1]=come_increment_ref_count(right_type_683);
}        param_types_685=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value833=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value832=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2293, "struct list$1sTypeph")))),2,__list_values25___684))));
        come_call_finalizer3(right_value832,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value833,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values26___686[0]=come_increment_ref_count(((char*)(right_value834=__builtin_string("left"))));
__list_values26___686[1]=come_increment_ref_count(((char*)(right_value835=__builtin_string("right"))));
}        param_names_687=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value837=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value836=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2294, "struct list$1charph")))),2,__list_values26___686))));
        right_value834 = come_decrement_ref_count2(right_value834, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value835 = come_decrement_ref_count2(right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value836,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value837,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_688=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value839=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value838=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2295, "list$1charph"))))))));
        come_call_finalizer3(right_value838,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value839,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_688,((void*)0));
        list$1charph_push_back(param_default_parametors_688,((void*)0));
        header_buf_689=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value841=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value840=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2299, "buffer"))))))));
        come_call_finalizer3(right_value840,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value841,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_689,((char*)(right_value842=make_come_type_name_string(result_type_680,info))));
        right_value842 = come_decrement_ref_count2(right_value842, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_689," ");
        buffer_append_str(header_buf_689,real_fun_name_663);
        buffer_append_str(header_buf_689,"(");
        for(        i_690=0;        i_690<list$1sTypeph_length(param_types_685);        i_690++        ){
            param_type_691=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_685,i_690), "05function.c", 2307, 14));
            param_name_692=((char*)come_null_check(list$1charphp_operator_load_element(param_names_687,i_690), "05function.c", 2308, 15));
            buffer_append_str(header_buf_689,((char*)(right_value843=make_come_type_name_string(param_type_691,info))));
            right_value843 = come_decrement_ref_count2(right_value843, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_689," ");
            buffer_append_str(header_buf_689,param_name_692);
            if(_if_conditional588=i_690!=list$1sTypeph_length(param_types_685)-1,            _if_conditional588) {
                buffer_append_str(header_buf_689,",");
            }
        }
        buffer_append_str(header_buf_689,")");
        result_type_680->mStatic=(_Bool)0;
        fun_693=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value847=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value844=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2322, "sFun")))),(char*)come_increment_ref_count(name_681),(struct sType*)come_increment_ref_count(result_type_680),(struct list$1sTypeph*)come_increment_ref_count(param_types_685),(struct list$1charph*)come_increment_ref_count(param_names_687),(struct list$1charph*)come_increment_ref_count(param_default_parametors_688),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_679),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value845=buffer_to_string(header_buf_689)))),(char*)come_increment_ref_count(((char*)(right_value846=__builtin_string("")))),info))));
        come_call_finalizer3(right_value844,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value845 = come_decrement_ref_count2(right_value845, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value846 = come_decrement_ref_count2(right_value846, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value847,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_694=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value848=__builtin_string(fun_name))));
        right_value848 = come_decrement_ref_count2(right_value848, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional589=fun2_694==((void*)0)||fun2_694->mExternal,        _if_conditional589) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value849=string_clone(name_681)))),(struct sFun*)come_increment_ref_count(fun_693));
            right_value849 = come_decrement_ref_count2(right_value849, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_662=fun_693;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2338, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(right_value851=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value850=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2338, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_693),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_696=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value855=_inf_value10)));
        come_call_finalizer3(right_value850,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value851,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value855) { right_value855 = come_decrement_ref_count2(right_value855, ((struct sNode*)right_value855)->finalize, ((struct sNode*)right_value855)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional596=!node_compile(node_696,info),        _if_conditional596) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj186=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_678);
        come_call_finalizer3(__dec_obj186,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_674;
        info->head=head_677;
        info->sline=sline_675;
        __dec_obj187=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_676);
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_676 = come_decrement_ref_count2(sname_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_678,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_679,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_680,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_683,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_685,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_687,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_688,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_689,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_693,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_696) { node_696 = come_decrement_ref_count2(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_661;
    __dec_obj188=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_658);
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj189=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_659);
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj190=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_660);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result251__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value857=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value856=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2358, "struct tuple2$2sFunpcharph")))),equaler_662,(char*)come_increment_ref_count(real_fun_name_663))));
    last_code_658 = come_decrement_ref_count2(last_code_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_659 = come_decrement_ref_count2(last_code2_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_660 = come_decrement_ref_count2(last_code3_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_663 = come_decrement_ref_count2(real_fun_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_664,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value856 = come_decrement_ref_count2(right_value856, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value857,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result251__;
    last_code_658 = come_decrement_ref_count2(last_code_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_659 = come_decrement_ref_count2(last_code2_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_660 = come_decrement_ref_count2(last_code3_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_663 = come_decrement_ref_count2(real_fun_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_664,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_697;
char* __dec_obj191;
char* last_code2_698;
char* __dec_obj192;
char* last_code3_699;
char* __dec_obj193;
struct sClass* current_stack_frame_struct_700;
struct sFun* equaler_701;
void* right_value858;
char* real_fun_name_702;
void* right_value859;
struct sType* type2_703;
struct sClass* klass_704;
_Bool _if_conditional597;
void* right_value860;
void* right_value861;
struct buffer* source_705;
_Bool _if_conditional598;
char* name_706;
int i_709;
struct list$1tuple2$2charphsTypephph* o2_saved_710;
struct tuple2$2charphsTypeph* it_711;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_712;
struct sType* field_type_713;
_Bool _if_conditional599;
_Bool _if_conditional601;
char* p_717;
int sline_718;
char* sname_719;
char* head_720;
struct buffer* source3_721;
struct buffer* __dec_obj194;
void* right_value862;
char* __dec_obj195;
void* right_value863;
struct sBlock* block_722;
void* right_value864;
void* right_value865;
struct sType* result_type_723;
void* right_value866;
char* name_724;
void* right_value867;
struct sType* left_type_725;
void* right_value868;
struct sType* right_type_726;
struct sType* __list_values27___727[2];
void* right_value869;
void* right_value870;
struct list$1sTypeph* param_types_728;
void* right_value871;
void* right_value872;
char* __list_values28___729[2];
void* right_value873;
void* right_value874;
struct list$1charph* param_names_730;
void* right_value875;
void* right_value876;
struct list$1charph* param_default_parametors_731;
void* right_value877;
void* right_value878;
struct buffer* header_buf_732;
void* right_value879;
int i_733;
struct sType* param_type_734;
char* param_name_735;
void* right_value880;
_Bool _if_conditional602;
void* right_value881;
void* right_value882;
void* right_value883;
void* right_value884;
struct sFun* fun_736;
void* right_value885;
struct sFun* fun2_737;
_Bool _if_conditional603;
void* right_value886;
void* right_value887;
void* right_value888;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* right_value892;
struct sNode* node_739;
_Bool _if_conditional610;
struct buffer* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
void* right_value893;
void* right_value894;
struct tuple2$2sFunpcharph* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_697, 0, sizeof(char*));
memset(&last_code2_698, 0, sizeof(char*));
memset(&last_code3_699, 0, sizeof(char*));
memset(&current_stack_frame_struct_700, 0, sizeof(struct sClass*));
memset(&equaler_701, 0, sizeof(struct sFun*));
right_value858 = (void*)0;
memset(&real_fun_name_702, 0, sizeof(char*));
right_value859 = (void*)0;
memset(&type2_703, 0, sizeof(struct sType*));
memset(&klass_704, 0, sizeof(struct sClass*));
right_value860 = (void*)0;
right_value861 = (void*)0;
memset(&source_705, 0, sizeof(struct buffer*));
memset(&name_706, 0, sizeof(char*));
memset(&i_709, 0, sizeof(int));
memset(&o2_saved_710, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_711, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_712, 0, sizeof(char*));
memset(&field_type_713, 0, sizeof(struct sType*));
memset(&name_712, 0, sizeof(char*));
memset(&field_type_713, 0, sizeof(struct sType*));
memset(&p_717, 0, sizeof(char*));
memset(&sline_718, 0, sizeof(int));
memset(&sname_719, 0, sizeof(char*));
memset(&head_720, 0, sizeof(char*));
memset(&source3_721, 0, sizeof(struct buffer*));
right_value862 = (void*)0;
right_value863 = (void*)0;
memset(&block_722, 0, sizeof(struct sBlock*));
right_value864 = (void*)0;
right_value865 = (void*)0;
memset(&result_type_723, 0, sizeof(struct sType*));
right_value866 = (void*)0;
memset(&name_724, 0, sizeof(char*));
right_value867 = (void*)0;
memset(&left_type_725, 0, sizeof(struct sType*));
right_value868 = (void*)0;
memset(&right_type_726, 0, sizeof(struct sType*));
right_value869 = (void*)0;
right_value870 = (void*)0;
memset(&param_types_728, 0, sizeof(struct list$1sTypeph*));
right_value871 = (void*)0;
right_value872 = (void*)0;
right_value873 = (void*)0;
right_value874 = (void*)0;
memset(&param_names_730, 0, sizeof(struct list$1charph*));
right_value875 = (void*)0;
right_value876 = (void*)0;
memset(&param_default_parametors_731, 0, sizeof(struct list$1charph*));
right_value877 = (void*)0;
right_value878 = (void*)0;
memset(&header_buf_732, 0, sizeof(struct buffer*));
right_value879 = (void*)0;
memset(&i_733, 0, sizeof(int));
memset(&param_type_734, 0, sizeof(struct sType*));
memset(&param_name_735, 0, sizeof(char*));
right_value880 = (void*)0;
right_value881 = (void*)0;
right_value882 = (void*)0;
right_value883 = (void*)0;
right_value884 = (void*)0;
memset(&fun_736, 0, sizeof(struct sFun*));
right_value885 = (void*)0;
memset(&fun2_737, 0, sizeof(struct sFun*));
right_value886 = (void*)0;
right_value887 = (void*)0;
right_value888 = (void*)0;
right_value892 = (void*)0;
memset(&node_739, 0, sizeof(struct sNode*));
right_value893 = (void*)0;
right_value894 = (void*)0;
    last_code_697=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj191=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_698=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj192=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_699=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj193=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_700=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_701=((void*)0);
    real_fun_name_702=(char*)come_increment_ref_count(((char*)(right_value858=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value858 = come_decrement_ref_count2(right_value858, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_703=(struct sType*)come_increment_ref_count(((struct sType*)(right_value859=solve_generics(type,type,info))));
    come_call_finalizer3(right_value859,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_703;
    klass_704=type->mClass;
    if(_if_conditional597=type->mPointerNum>0&&!klass_704->mNumber,    _if_conditional597) {
        source_705=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value861=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value860=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2383, "buffer"))))))));
        come_call_finalizer3(right_value860,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value861,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_705,123);
        if(klass_704->mProtocol) {
            name_706="_protocol_obj";
            char source2_707[1024];
            memset(&source2_707, 0, sizeof(char)            *(1024)            );
            snprintf(source2_707,1024,"return !left.%s.equals(right.%s);\n",name_706,name_706);
            buffer_append_str(source_705,source2_707);
        }
        else {
            char source2_708[1024];
            memset(&source2_708, 0, sizeof(char)            *(1024)            );
            snprintf(source2_708,1024,"return !(");
            buffer_append_str(source_705,source2_708);
            i_709=0;
            klass_704=map$2charphsClassphp_operator_load_element(info->classes,klass_704->mName);
            for(            o2_saved_710=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_704->mFields)),it_711=list$1tuple2$2charphsTypephph_begin((o2_saved_710));            !list$1tuple2$2charphsTypephph_end((o2_saved_710));            it_711=list$1tuple2$2charphsTypephph_next((o2_saved_710))            ){
                multiple_assign_var13=it_711;
                name_712=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_713=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(_if_conditional599=string_operator_equals(type->mClass->mName,field_type_713->mClass->mName)&&type->mPointerNum==field_type_713->mPointerNum&&field_type_713->mHeap,                _if_conditional599) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_714[1024];
                memset(&source2_714, 0, sizeof(char)                *(1024)                );
                snprintf(source2_714,1024,"left.%s.equals(right.%s)",name_712,name_712);
                buffer_append_str(source_705,source2_714);
                if(_if_conditional601=i_709==list$1tuple2$2charphsTypephph_length(klass_704->mFields)-1,                _if_conditional601) {
                    char source2_715[1024];
                    memset(&source2_715, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_715,1024,");");
                    buffer_append_str(source_705,source2_715);
                }
                else {
                    char source2_716[1024];
                    memset(&source2_716, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_716,1024," && ");
                    buffer_append_str(source_705,source2_716);
                }
                i_709++;
                name_712 = come_decrement_ref_count2(name_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_713,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_710,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_705,125);
        p_717=info->p;
        sline_718=info->sline;
        sname_719=(char*)come_increment_ref_count(info->sname);
        head_720=info->head;
        source3_721=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj194=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_705);
        come_call_finalizer3(__dec_obj194,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_705->buf;
        info->head=source_705->buf;
        __dec_obj195=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value862=__builtin_string(real_fun_name_702))));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value862 = come_decrement_ref_count2(right_value862, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_722=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value863=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value863,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_723=(struct sType*)come_increment_ref_count(((struct sType*)(right_value865=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value864=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2446, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value864,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value865,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_724=(char*)come_increment_ref_count(((char*)(right_value866=string_clone(real_fun_name_702))));
        right_value866 = come_decrement_ref_count2(right_value866, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_725=(struct sType*)come_increment_ref_count(((struct sType*)(right_value867=sType_clone(type))));
        come_call_finalizer3(right_value867,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_725->mHeap=(_Bool)0;
        right_type_726=(struct sType*)come_increment_ref_count(((struct sType*)(right_value868=sType_clone(type))));
        come_call_finalizer3(right_value868,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_726->mHeap=(_Bool)0;
        {__list_values27___727[0]=come_increment_ref_count(left_type_725);
__list_values27___727[1]=come_increment_ref_count(right_type_726);
}        param_types_728=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value870=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value869=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2452, "struct list$1sTypeph")))),2,__list_values27___727))));
        come_call_finalizer3(right_value869,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value870,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values28___729[0]=come_increment_ref_count(((char*)(right_value871=__builtin_string("left"))));
__list_values28___729[1]=come_increment_ref_count(((char*)(right_value872=__builtin_string("right"))));
}        param_names_730=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value874=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value873=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2453, "struct list$1charph")))),2,__list_values28___729))));
        right_value871 = come_decrement_ref_count2(right_value871, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value872 = come_decrement_ref_count2(right_value872, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value873,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value874,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_731=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value876=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value875=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2454, "list$1charph"))))))));
        come_call_finalizer3(right_value875,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value876,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_731,((void*)0));
        list$1charph_push_back(param_default_parametors_731,((void*)0));
        header_buf_732=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value878=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value877=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2458, "buffer"))))))));
        come_call_finalizer3(right_value877,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value878,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_732,((char*)(right_value879=make_come_type_name_string(result_type_723,info))));
        right_value879 = come_decrement_ref_count2(right_value879, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_732," ");
        buffer_append_str(header_buf_732,real_fun_name_702);
        buffer_append_str(header_buf_732,"(");
        for(        i_733=0;        i_733<list$1sTypeph_length(param_types_728);        i_733++        ){
            param_type_734=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_728,i_733), "05function.c", 2466, 16));
            param_name_735=((char*)come_null_check(list$1charphp_operator_load_element(param_names_730,i_733), "05function.c", 2467, 17));
            buffer_append_str(header_buf_732,((char*)(right_value880=make_come_type_name_string(param_type_734,info))));
            right_value880 = come_decrement_ref_count2(right_value880, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_732," ");
            buffer_append_str(header_buf_732,param_name_735);
            if(_if_conditional602=i_733!=list$1sTypeph_length(param_types_728)-1,            _if_conditional602) {
                buffer_append_str(header_buf_732,",");
            }
        }
        buffer_append_str(header_buf_732,")");
        result_type_723->mStatic=(_Bool)0;
        fun_736=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value884=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value881=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2481, "sFun")))),(char*)come_increment_ref_count(name_724),(struct sType*)come_increment_ref_count(result_type_723),(struct list$1sTypeph*)come_increment_ref_count(param_types_728),(struct list$1charph*)come_increment_ref_count(param_names_730),(struct list$1charph*)come_increment_ref_count(param_default_parametors_731),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_722),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value882=buffer_to_string(header_buf_732)))),(char*)come_increment_ref_count(((char*)(right_value883=__builtin_string("")))),info))));
        come_call_finalizer3(right_value881,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value882 = come_decrement_ref_count2(right_value882, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value883 = come_decrement_ref_count2(right_value883, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value884,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_737=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value885=__builtin_string(fun_name))));
        right_value885 = come_decrement_ref_count2(right_value885, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional603=fun2_737==((void*)0)||fun2_737->mExternal,        _if_conditional603) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value886=string_clone(name_724)))),(struct sFun*)come_increment_ref_count(fun_736));
            right_value886 = come_decrement_ref_count2(right_value886, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_701=fun_736;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2497, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(right_value888=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value887=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2497, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_736),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_739=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value892=_inf_value11)));
        come_call_finalizer3(right_value887,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value888,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value892) { right_value892 = come_decrement_ref_count2(right_value892, ((struct sNode*)right_value892)->finalize, ((struct sNode*)right_value892)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional610=!node_compile(node_739,info),        _if_conditional610) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj198=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_721);
        come_call_finalizer3(__dec_obj198,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_717;
        info->head=head_720;
        info->sline=sline_718;
        __dec_obj199=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_719);
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_705,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_719 = come_decrement_ref_count2(sname_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_721,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_722,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_723,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_724 = come_decrement_ref_count2(name_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_726,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_728,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_730,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_731,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_736,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_700;
    __dec_obj200=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_697);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj201=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_698);
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj202=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_699);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result256__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value894=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value893=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2517, "struct tuple2$2sFunpcharph")))),equaler_701,(char*)come_increment_ref_count(real_fun_name_702))));
    last_code_697 = come_decrement_ref_count2(last_code_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_698 = come_decrement_ref_count2(last_code2_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_699 = come_decrement_ref_count2(last_code3_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_702 = come_decrement_ref_count2(real_fun_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_703,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value893 = come_decrement_ref_count2(right_value893, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value894,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result256__;
    last_code_697 = come_decrement_ref_count2(last_code_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_698 = come_decrement_ref_count2(last_code2_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_699 = come_decrement_ref_count2(last_code3_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_702 = come_decrement_ref_count2(real_fun_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_703,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional600;
int __result252__;
int __result253__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional600=self==((void*)0),                    _if_conditional600) {
                        __result252__ = 0;
                        return __result252__;
                    }
                    __result253__ = self->len;
                    return __result253__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_740;
char* __dec_obj203;
char* last_code2_741;
char* __dec_obj204;
char* last_code3_742;
char* __dec_obj205;
struct sClass* current_stack_frame_struct_743;
struct sFun* equaler_744;
void* right_value895;
char* real_fun_name_745;
void* right_value896;
struct sType* type2_746;
struct sClass* klass_747;
_Bool _if_conditional611;
void* right_value897;
void* right_value898;
struct buffer* source_748;
_Bool _if_conditional612;
char* name_749;
struct list$1tuple2$2charphsTypephph* o2_saved_751;
struct tuple2$2charphsTypeph* it_752;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_753;
struct sType* field_type_754;
_Bool _if_conditional613;
char* p_756;
int sline_757;
char* sname_758;
char* head_759;
struct buffer* source3_760;
struct buffer* __dec_obj206;
void* right_value899;
char* __dec_obj207;
void* right_value900;
struct sBlock* block_761;
void* right_value901;
void* right_value902;
struct sType* result_type_762;
void* right_value903;
char* name_763;
void* right_value904;
struct sType* left_type_764;
void* right_value905;
struct sType* right_type_765;
struct sType* __list_values29___766[2];
void* right_value906;
void* right_value907;
struct list$1sTypeph* param_types_767;
void* right_value908;
void* right_value909;
char* __list_values30___768[2];
void* right_value910;
void* right_value911;
struct list$1charph* param_names_769;
void* right_value912;
void* right_value913;
struct list$1charph* param_default_parametors_770;
void* right_value914;
void* right_value915;
struct buffer* header_buf_771;
void* right_value916;
int i_772;
struct sType* param_type_773;
char* param_name_774;
void* right_value917;
_Bool _if_conditional614;
void* right_value918;
void* right_value919;
void* right_value920;
void* right_value921;
struct sFun* fun_775;
void* right_value922;
struct sFun* fun2_776;
_Bool _if_conditional615;
void* right_value923;
void* right_value924;
void* right_value925;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* right_value929;
struct sNode* node_778;
_Bool _if_conditional622;
struct buffer* __dec_obj210;
char* __dec_obj211;
char* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
void* right_value930;
void* right_value931;
struct tuple2$2sFunpcharph* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_740, 0, sizeof(char*));
memset(&last_code2_741, 0, sizeof(char*));
memset(&last_code3_742, 0, sizeof(char*));
memset(&current_stack_frame_struct_743, 0, sizeof(struct sClass*));
memset(&equaler_744, 0, sizeof(struct sFun*));
right_value895 = (void*)0;
memset(&real_fun_name_745, 0, sizeof(char*));
right_value896 = (void*)0;
memset(&type2_746, 0, sizeof(struct sType*));
memset(&klass_747, 0, sizeof(struct sClass*));
right_value897 = (void*)0;
right_value898 = (void*)0;
memset(&source_748, 0, sizeof(struct buffer*));
memset(&name_749, 0, sizeof(char*));
memset(&o2_saved_751, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_752, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_753, 0, sizeof(char*));
memset(&field_type_754, 0, sizeof(struct sType*));
memset(&name_753, 0, sizeof(char*));
memset(&field_type_754, 0, sizeof(struct sType*));
memset(&p_756, 0, sizeof(char*));
memset(&sline_757, 0, sizeof(int));
memset(&sname_758, 0, sizeof(char*));
memset(&head_759, 0, sizeof(char*));
memset(&source3_760, 0, sizeof(struct buffer*));
right_value899 = (void*)0;
right_value900 = (void*)0;
memset(&block_761, 0, sizeof(struct sBlock*));
right_value901 = (void*)0;
right_value902 = (void*)0;
memset(&result_type_762, 0, sizeof(struct sType*));
right_value903 = (void*)0;
memset(&name_763, 0, sizeof(char*));
right_value904 = (void*)0;
memset(&left_type_764, 0, sizeof(struct sType*));
right_value905 = (void*)0;
memset(&right_type_765, 0, sizeof(struct sType*));
right_value906 = (void*)0;
right_value907 = (void*)0;
memset(&param_types_767, 0, sizeof(struct list$1sTypeph*));
right_value908 = (void*)0;
right_value909 = (void*)0;
right_value910 = (void*)0;
right_value911 = (void*)0;
memset(&param_names_769, 0, sizeof(struct list$1charph*));
right_value912 = (void*)0;
right_value913 = (void*)0;
memset(&param_default_parametors_770, 0, sizeof(struct list$1charph*));
right_value914 = (void*)0;
right_value915 = (void*)0;
memset(&header_buf_771, 0, sizeof(struct buffer*));
right_value916 = (void*)0;
memset(&i_772, 0, sizeof(int));
memset(&param_type_773, 0, sizeof(struct sType*));
memset(&param_name_774, 0, sizeof(char*));
right_value917 = (void*)0;
right_value918 = (void*)0;
right_value919 = (void*)0;
right_value920 = (void*)0;
right_value921 = (void*)0;
memset(&fun_775, 0, sizeof(struct sFun*));
right_value922 = (void*)0;
memset(&fun2_776, 0, sizeof(struct sFun*));
right_value923 = (void*)0;
right_value924 = (void*)0;
right_value925 = (void*)0;
right_value929 = (void*)0;
memset(&node_778, 0, sizeof(struct sNode*));
right_value930 = (void*)0;
right_value931 = (void*)0;
    last_code_740=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj203=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_741=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj204=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_742=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj205=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_743=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_744=((void*)0);
    real_fun_name_745=(char*)come_increment_ref_count(((char*)(right_value895=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value895 = come_decrement_ref_count2(right_value895, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_746=(struct sType*)come_increment_ref_count(((struct sType*)(right_value896=solve_generics(type,type,info))));
    come_call_finalizer3(right_value896,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_746;
    klass_747=type->mClass;
    if(_if_conditional611=type->mPointerNum>0&&!klass_747->mNumber,    _if_conditional611) {
        source_748=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value898=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value897=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2542, "buffer"))))))));
        come_call_finalizer3(right_value897,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value898,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_748,123);
        if(klass_747->mProtocol) {
            name_749="_protocol_obj";
            char source2_750[1024];
            memset(&source2_750, 0, sizeof(char)            *(1024)            );
            snprintf(source2_750,1024,"return left.%s.equals(right.%s);\n",name_749,name_749);
            buffer_append_str(source_748,source2_750);
        }
        else {
            klass_747=map$2charphsClassphp_operator_load_element(info->classes,klass_747->mName);
            for(            o2_saved_751=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_747->mFields)),it_752=list$1tuple2$2charphsTypephph_begin((o2_saved_751));            !list$1tuple2$2charphsTypephph_end((o2_saved_751));            it_752=list$1tuple2$2charphsTypephph_next((o2_saved_751))            ){
                multiple_assign_var14=it_752;
                name_753=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_754=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(_if_conditional613=string_operator_equals(type->mClass->mName,field_type_754->mClass->mName)&&type->mPointerNum==field_type_754->mPointerNum&&field_type_754->mHeap,                _if_conditional613) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_755[1024];
                memset(&source2_755, 0, sizeof(char)                *(1024)                );
                snprintf(source2_755,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_753,name_753);
                buffer_append_str(source_748,source2_755);
                name_753 = come_decrement_ref_count2(name_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_751,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_748,"return true;\n");
        buffer_append_char(source_748,125);
        p_756=info->p;
        sline_757=info->sline;
        sname_758=(char*)come_increment_ref_count(info->sname);
        head_759=info->head;
        source3_760=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj206=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_748);
        come_call_finalizer3(__dec_obj206,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_748->buf;
        info->head=source_748->buf;
        __dec_obj207=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value899=__builtin_string(real_fun_name_745))));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value899 = come_decrement_ref_count2(right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=0;
        block_761=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value900=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value900,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_762=(struct sType*)come_increment_ref_count(((struct sType*)(right_value902=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value901=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2588, "sType")))),"bool",(_Bool)0,info))));
        come_call_finalizer3(right_value901,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value902,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_763=(char*)come_increment_ref_count(((char*)(right_value903=string_clone(real_fun_name_745))));
        right_value903 = come_decrement_ref_count2(right_value903, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        left_type_764=(struct sType*)come_increment_ref_count(((struct sType*)(right_value904=sType_clone(type))));
        come_call_finalizer3(right_value904,sType_finalize, 0, 1, 0, 0, __result_obj__);
        left_type_764->mHeap=(_Bool)0;
        right_type_765=(struct sType*)come_increment_ref_count(((struct sType*)(right_value905=sType_clone(type))));
        come_call_finalizer3(right_value905,sType_finalize, 0, 1, 0, 0, __result_obj__);
        right_type_765->mHeap=(_Bool)0;
        {__list_values29___766[0]=come_increment_ref_count(left_type_764);
__list_values29___766[1]=come_increment_ref_count(right_type_765);
}        param_types_767=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value907=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value906=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2594, "struct list$1sTypeph")))),2,__list_values29___766))));
        come_call_finalizer3(right_value906,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value907,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values30___768[0]=come_increment_ref_count(((char*)(right_value908=__builtin_string("left"))));
__list_values30___768[1]=come_increment_ref_count(((char*)(right_value909=__builtin_string("right"))));
}        param_names_769=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value911=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value910=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2595, "struct list$1charph")))),2,__list_values30___768))));
        right_value908 = come_decrement_ref_count2(right_value908, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value909 = come_decrement_ref_count2(right_value909, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value910,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value911,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_770=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value913=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value912=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2596, "list$1charph"))))))));
        come_call_finalizer3(right_value912,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value913,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_770,((void*)0));
        list$1charph_push_back(param_default_parametors_770,((void*)0));
        header_buf_771=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value915=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value914=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2600, "buffer"))))))));
        come_call_finalizer3(right_value914,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value915,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_771,((char*)(right_value916=make_come_type_name_string(result_type_762,info))));
        right_value916 = come_decrement_ref_count2(right_value916, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_771," ");
        buffer_append_str(header_buf_771,real_fun_name_745);
        buffer_append_str(header_buf_771,"(");
        for(        i_772=0;        i_772<list$1sTypeph_length(param_types_767);        i_772++        ){
            param_type_773=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_767,i_772), "05function.c", 2608, 18));
            param_name_774=((char*)come_null_check(list$1charphp_operator_load_element(param_names_769,i_772), "05function.c", 2609, 19));
            buffer_append_str(header_buf_771,((char*)(right_value917=make_come_type_name_string(param_type_773,info))));
            right_value917 = come_decrement_ref_count2(right_value917, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_771," ");
            buffer_append_str(header_buf_771,param_name_774);
            if(_if_conditional614=i_772!=list$1sTypeph_length(param_types_767)-1,            _if_conditional614) {
                buffer_append_str(header_buf_771,",");
            }
        }
        buffer_append_str(header_buf_771,")");
        result_type_762->mStatic=(_Bool)0;
        fun_775=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value921=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value918=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2623, "sFun")))),(char*)come_increment_ref_count(name_763),(struct sType*)come_increment_ref_count(result_type_762),(struct list$1sTypeph*)come_increment_ref_count(param_types_767),(struct list$1charph*)come_increment_ref_count(param_names_769),(struct list$1charph*)come_increment_ref_count(param_default_parametors_770),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_761),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value919=buffer_to_string(header_buf_771)))),(char*)come_increment_ref_count(((char*)(right_value920=__builtin_string("")))),info))));
        come_call_finalizer3(right_value918,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value919 = come_decrement_ref_count2(right_value919, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value920 = come_decrement_ref_count2(right_value920, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value921,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun2_776=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value922=__builtin_string(fun_name))));
        right_value922 = come_decrement_ref_count2(right_value922, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional615=fun2_776==((void*)0)||fun2_776->mExternal,        _if_conditional615) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value923=string_clone(name_763)))),(struct sFun*)come_increment_ref_count(fun_775));
            right_value923 = come_decrement_ref_count2(right_value923, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_744=fun_775;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2639, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(right_value925=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value924=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2639, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_775),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_778=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value929=_inf_value12)));
        come_call_finalizer3(right_value924,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value925,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value929) { right_value929 = come_decrement_ref_count2(right_value929, ((struct sNode*)right_value929)->finalize, ((struct sNode*)right_value929)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional622=!node_compile(node_778,info),        _if_conditional622) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj210=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_760);
        come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_756;
        info->head=head_759;
        info->sline=sline_757;
        __dec_obj211=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_758);
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_748,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_758 = come_decrement_ref_count2(sname_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_760,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_761,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_763 = come_decrement_ref_count2(name_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_764,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_767,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_769,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_770,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_771,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_775,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_778) { node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_743;
    __dec_obj212=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_740);
    __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj213=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_741);
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj214=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_742);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result259__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value931=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value930=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2659, "struct tuple2$2sFunpcharph")))),equaler_744,(char*)come_increment_ref_count(real_fun_name_745))));
    last_code_740 = come_decrement_ref_count2(last_code_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_741 = come_decrement_ref_count2(last_code2_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_742 = come_decrement_ref_count2(last_code3_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_745 = come_decrement_ref_count2(real_fun_name_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_746,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value930 = come_decrement_ref_count2(right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value931,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result259__;
    last_code_740 = come_decrement_ref_count2(last_code_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_741 = come_decrement_ref_count2(last_code2_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_742 = come_decrement_ref_count2(last_code3_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_745 = come_decrement_ref_count2(real_fun_name_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_746,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__;
char* last_code_779;
char* __dec_obj215;
char* last_code2_780;
char* __dec_obj216;
char* last_code3_781;
char* __dec_obj217;
struct sClass* current_stack_frame_struct_782;
struct sFun* cloner_783;
void* right_value932;
char* real_fun_name_784;
void* right_value933;
struct sType* type2_785;
struct sClass* klass_786;
_Bool _if_conditional623;
void* right_value934;
void* right_value935;
struct buffer* source_787;
void* right_value936;
void* right_value937;
_Bool _if_conditional624;
char* name_788;
struct list$1tuple2$2charphsTypephph* o2_saved_790;
struct tuple2$2charphsTypeph* it_791;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_792;
struct sType* field_type_793;
_Bool _if_conditional625;
_Bool _if_conditional626;
_Bool _if_conditional627;
struct list$1tuple2$2charphsTypephph* o2_saved_796;
struct tuple2$2charphsTypeph* it_797;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_798;
struct sType* field_type_799;
_Bool _if_conditional628;
_Bool _if_conditional629;
_Bool _if_conditional630;
void* right_value938;
char* p_803;
int sline_804;
char* sname_805;
struct buffer* source3_806;
char* head_807;
struct buffer* __dec_obj218;
void* right_value939;
char* __dec_obj219;
void* right_value940;
struct sBlock* block_808;
void* right_value941;
struct sType* result_type_809;
void* right_value942;
char* name_810;
void* right_value943;
struct sType* self_type_811;
struct sType* __list_values31___812[1];
void* right_value944;
void* right_value945;
struct list$1sTypeph* param_types_813;
void* right_value946;
char* __list_values32___814[1];
void* right_value947;
void* right_value948;
struct list$1charph* param_names_815;
void* right_value949;
void* right_value950;
struct list$1charph* param_default_parametors_816;
void* right_value951;
void* right_value952;
struct buffer* header_buf_817;
void* right_value953;
int i_818;
struct sType* param_type_819;
char* param_name_820;
void* right_value954;
_Bool _if_conditional631;
void* right_value955;
void* right_value956;
void* right_value957;
void* right_value958;
struct sFun* fun_821;
void* right_value959;
struct sFun* fun2_822;
_Bool _if_conditional632;
void* right_value960;
void* right_value961;
void* right_value962;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* right_value966;
struct sNode* node_824;
_Bool _if_conditional639;
char* __dec_obj222;
struct buffer* __dec_obj223;
char* __dec_obj224;
char* __dec_obj225;
char* __dec_obj226;
void* right_value967;
void* right_value968;
struct tuple2$2sFunpcharph* __result262__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&last_code_779, 0, sizeof(char*));
memset(&last_code2_780, 0, sizeof(char*));
memset(&last_code3_781, 0, sizeof(char*));
memset(&current_stack_frame_struct_782, 0, sizeof(struct sClass*));
memset(&cloner_783, 0, sizeof(struct sFun*));
right_value932 = (void*)0;
memset(&real_fun_name_784, 0, sizeof(char*));
right_value933 = (void*)0;
memset(&type2_785, 0, sizeof(struct sType*));
memset(&klass_786, 0, sizeof(struct sClass*));
right_value934 = (void*)0;
right_value935 = (void*)0;
memset(&source_787, 0, sizeof(struct buffer*));
right_value936 = (void*)0;
right_value937 = (void*)0;
memset(&name_788, 0, sizeof(char*));
memset(&o2_saved_790, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_791, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_792, 0, sizeof(char*));
memset(&field_type_793, 0, sizeof(struct sType*));
memset(&name_792, 0, sizeof(char*));
memset(&field_type_793, 0, sizeof(struct sType*));
memset(&o2_saved_796, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_797, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_798, 0, sizeof(char*));
memset(&field_type_799, 0, sizeof(struct sType*));
memset(&name_798, 0, sizeof(char*));
memset(&field_type_799, 0, sizeof(struct sType*));
right_value938 = (void*)0;
memset(&p_803, 0, sizeof(char*));
memset(&sline_804, 0, sizeof(int));
memset(&sname_805, 0, sizeof(char*));
memset(&source3_806, 0, sizeof(struct buffer*));
memset(&head_807, 0, sizeof(char*));
right_value939 = (void*)0;
right_value940 = (void*)0;
memset(&block_808, 0, sizeof(struct sBlock*));
right_value941 = (void*)0;
memset(&result_type_809, 0, sizeof(struct sType*));
right_value942 = (void*)0;
memset(&name_810, 0, sizeof(char*));
right_value943 = (void*)0;
memset(&self_type_811, 0, sizeof(struct sType*));
right_value944 = (void*)0;
right_value945 = (void*)0;
memset(&param_types_813, 0, sizeof(struct list$1sTypeph*));
right_value946 = (void*)0;
right_value947 = (void*)0;
right_value948 = (void*)0;
memset(&param_names_815, 0, sizeof(struct list$1charph*));
right_value949 = (void*)0;
right_value950 = (void*)0;
memset(&param_default_parametors_816, 0, sizeof(struct list$1charph*));
right_value951 = (void*)0;
right_value952 = (void*)0;
memset(&header_buf_817, 0, sizeof(struct buffer*));
right_value953 = (void*)0;
memset(&i_818, 0, sizeof(int));
memset(&param_type_819, 0, sizeof(struct sType*));
memset(&param_name_820, 0, sizeof(char*));
right_value954 = (void*)0;
right_value955 = (void*)0;
right_value956 = (void*)0;
right_value957 = (void*)0;
right_value958 = (void*)0;
memset(&fun_821, 0, sizeof(struct sFun*));
right_value959 = (void*)0;
memset(&fun2_822, 0, sizeof(struct sFun*));
right_value960 = (void*)0;
right_value961 = (void*)0;
right_value962 = (void*)0;
right_value966 = (void*)0;
memset(&node_824, 0, sizeof(struct sNode*));
right_value967 = (void*)0;
right_value968 = (void*)0;
    last_code_779=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj215=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_780=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj216=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_781=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj217=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_782=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_783=((void*)0);
    real_fun_name_784=(char*)come_increment_ref_count(((char*)(right_value932=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
    right_value932 = come_decrement_ref_count2(right_value932, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_785=(struct sType*)come_increment_ref_count(((struct sType*)(right_value933=solve_generics(type,type,info))));
    come_call_finalizer3(right_value933,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type=type2_785;
    klass_786=type->mClass;
    if(_if_conditional623=type->mPointerNum>0&&!klass_786->mNumber,    _if_conditional623) {
        source_787=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value935=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value934=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2684, "buffer"))))))));
        come_call_finalizer3(right_value934,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value935,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_787,"{\n");
        buffer_append_str(source_787,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_787,((char*)(right_value937=xsprintf("var result = new %s;\n",((char*)(right_value936=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info)))))));
        right_value936 = come_decrement_ref_count2(right_value936, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value937 = come_decrement_ref_count2(right_value937, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_786->mProtocol) {
            name_788="_protocol_obj";
            char source2_789[1024];
            memset(&source2_789, 0, sizeof(char)            *(1024)            );
            snprintf(source2_789,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_787,source2_789);
            klass_786=map$2charphsClassphp_operator_load_element(info->classes,klass_786->mName);
            for(            o2_saved_790=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_786->mFields)),it_791=list$1tuple2$2charphsTypephph_begin((o2_saved_790));            !list$1tuple2$2charphsTypephph_end((o2_saved_790));            it_791=list$1tuple2$2charphsTypephph_next((o2_saved_790))            ){
                multiple_assign_var15=it_791;
                name_792=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_793=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(_if_conditional625=string_operator_equals(type->mClass->mName,field_type_793->mClass->mName)&&type->mPointerNum==field_type_793->mPointerNum&&field_type_793->mHeap,                _if_conditional625) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(_if_conditional626=string_operator_equals(name_792,"_protocol_obj"),                _if_conditional626) {
                }
                else {
                    if(_if_conditional627=list$1sNodeph_length(field_type_793->mArrayNum)>0,                    _if_conditional627) {
                        char source2_794[1024];
                        memset(&source2_794, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_794,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_792,name_792,name_792);
                        buffer_append_str(source_787,source2_794);
                    }
                    else {
                        char source2_795[1024];
                        memset(&source2_795, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_795,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_792,name_792);
                        buffer_append_str(source_787,source2_795);
                    }
                }
                name_792 = come_decrement_ref_count2(name_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_793,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_790,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_786=map$2charphsClassphp_operator_load_element(info->classes,klass_786->mName);
            for(            o2_saved_796=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_786->mFields)),it_797=list$1tuple2$2charphsTypephph_begin((o2_saved_796));            !list$1tuple2$2charphsTypephph_end((o2_saved_796));            it_797=list$1tuple2$2charphsTypephph_next((o2_saved_796))            ){
                multiple_assign_var16=it_797;
                name_798=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_799=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(_if_conditional628=string_operator_equals(type->mClass->mName,field_type_799->mClass->mName)&&type->mPointerNum==field_type_799->mPointerNum&&field_type_799->mHeap,                _if_conditional628) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_799->mHeap) {
                    char source2_800[1024];
                    memset(&source2_800, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_800,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_798,name_798,name_798);
                    buffer_append_str(source_787,source2_800);
                }
                else {
                    if(_if_conditional630=list$1sNodeph_length(field_type_799->mArrayNum)>0,                    _if_conditional630) {
                        char source2_801[1024];
                        memset(&source2_801, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_801,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_798,name_798,name_798);
                        buffer_append_str(source_787,source2_801);
                    }
                    else {
                        char source2_802[1024];
                        memset(&source2_802, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_802,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_798,name_798);
                        buffer_append_str(source_787,source2_802);
                    }
                }
                name_798 = come_decrement_ref_count2(name_798, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_799,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_796,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_787,((char*)(right_value938=xsprintf("return result;"))));
        right_value938 = come_decrement_ref_count2(right_value938, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_787,125);
        p_803=info->p;
        sline_804=info->sline;
        sname_805=(char*)come_increment_ref_count(info->sname);
        source3_806=(struct buffer*)come_increment_ref_count(info->source);
        head_807=info->head;
        __dec_obj218=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_787);
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj219=info->sname;
        info->sname=(char*)come_increment_ref_count(((char*)(right_value939=__builtin_string(real_fun_name_784))));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value939 = come_decrement_ref_count2(right_value939, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        info->sline=1;
        block_808=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value940=parse_block(info,(_Bool)0,(_Bool)0))));
        come_call_finalizer3(right_value940,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_809=(struct sType*)come_increment_ref_count(((struct sType*)(right_value941=sType_clone(type))));
        come_call_finalizer3(right_value941,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_810=(char*)come_increment_ref_count(((char*)(right_value942=string_clone(real_fun_name_784))));
        right_value942 = come_decrement_ref_count2(right_value942, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self_type_811=(struct sType*)come_increment_ref_count(((struct sType*)(right_value943=sType_clone(type))));
        come_call_finalizer3(right_value943,sType_finalize, 0, 1, 0, 0, __result_obj__);
        self_type_811->mHeap=(_Bool)0;
        {__list_values31___812[0]=come_increment_ref_count(self_type_811);
}        param_types_813=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value945=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value944=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2778, "struct list$1sTypeph")))),1,__list_values31___812))));
        come_call_finalizer3(right_value944,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value945,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values32___814[0]=come_increment_ref_count(((char*)(right_value946=__builtin_string("self"))));
}        param_names_815=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value948=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value947=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2779, "struct list$1charph")))),1,__list_values32___814))));
        right_value946 = come_decrement_ref_count2(right_value946, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value947,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value948,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_816=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value950=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value949=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2780, "list$1charph"))))))));
        come_call_finalizer3(right_value949,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value950,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_816,((void*)0));
        header_buf_817=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value952=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value951=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2783, "buffer"))))))));
        come_call_finalizer3(right_value951,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value952,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_817,((char*)(right_value953=make_come_type_name_string(result_type_809,info))));
        right_value953 = come_decrement_ref_count2(right_value953, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_817," ");
        buffer_append_str(header_buf_817,real_fun_name_784);
        buffer_append_str(header_buf_817,"(");
        for(        i_818=0;        i_818<list$1sTypeph_length(param_types_813);        i_818++        ){
            param_type_819=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_813,i_818), "05function.c", 2791, 20));
            param_name_820=((char*)come_null_check(list$1charphp_operator_load_element(param_names_815,i_818), "05function.c", 2792, 21));
            buffer_append_str(header_buf_817,((char*)(right_value954=make_come_type_name_string(param_type_819,info))));
            right_value954 = come_decrement_ref_count2(right_value954, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_817," ");
            buffer_append_str(header_buf_817,param_name_820);
            if(_if_conditional631=i_818!=list$1sTypeph_length(param_types_813)-1,            _if_conditional631) {
                buffer_append_str(header_buf_817,",");
            }
        }
        buffer_append_str(header_buf_817,")");
        result_type_809->mStatic=(_Bool)0;
        fun_821=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value958=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value955=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2806, "sFun")))),(char*)come_increment_ref_count(name_810),(struct sType*)come_increment_ref_count(result_type_809),(struct list$1sTypeph*)come_increment_ref_count(param_types_813),(struct list$1charph*)come_increment_ref_count(param_names_815),(struct list$1charph*)come_increment_ref_count(param_default_parametors_816),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_808),(_Bool)1,(char*)come_increment_ref_count(((char*)(right_value956=buffer_to_string(header_buf_817)))),(char*)come_increment_ref_count(((char*)(right_value957=__builtin_string("")))),info))));
        come_call_finalizer3(right_value955,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        right_value956 = come_decrement_ref_count2(right_value956, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value957 = come_decrement_ref_count2(right_value957, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value958,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        fun_821->mCloner=(_Bool)1;
        fun2_822=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(right_value959=__builtin_string(fun_name))));
        right_value959 = come_decrement_ref_count2(right_value959, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional632=fun2_822==((void*)0)||fun2_822->mExternal,        _if_conditional632) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(right_value960=string_clone(name_810)))),(struct sFun*)come_increment_ref_count(fun_821));
            right_value960 = come_decrement_ref_count2(right_value960, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_783=fun_821;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2823, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(right_value962=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value961=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2823, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_821),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_824=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value966=_inf_value13)));
        come_call_finalizer3(right_value961,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value962,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value966) { right_value966 = come_decrement_ref_count2(right_value966, ((struct sNode*)right_value966)->finalize, ((struct sNode*)right_value966)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional639=!node_compile(node_824,info),        _if_conditional639) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj222=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_805);
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_804;
        __dec_obj223=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_806);
        come_call_finalizer3(__dec_obj223,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_803;
        info->head=head_807;
        info->sline=sline_804;
        come_call_finalizer3(source_787,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_805 = come_decrement_ref_count2(sname_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_806,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_808,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_809,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_810 = come_decrement_ref_count2(name_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_811,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_813,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_815,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_817,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_821,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_824) { node_824 = come_decrement_ref_count2(node_824, ((struct sNode*)node_824)->finalize, ((struct sNode*)node_824)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_782;
    __dec_obj224=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_779);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj225=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_780);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj226=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_781);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result262__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(right_value968=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(right_value967=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2845, "struct tuple2$2sFunpcharph")))),cloner_783,(char*)come_increment_ref_count(real_fun_name_784))));
    last_code_779 = come_decrement_ref_count2(last_code_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_780 = come_decrement_ref_count2(last_code2_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_781 = come_decrement_ref_count2(last_code3_781, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_784 = come_decrement_ref_count2(real_fun_name_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_785,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value967 = come_decrement_ref_count2(right_value967, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value968,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result262__;
    last_code_779 = come_decrement_ref_count2(last_code_779, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_780 = come_decrement_ref_count2(last_code2_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_781 = come_decrement_ref_count2(last_code3_781, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_784 = come_decrement_ref_count2(real_fun_name_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_785,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFunNode_finalize(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional633;
_Bool _if_conditional634;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional633=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional633) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional634=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional634) {
                come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__;
_Bool _if_conditional635;
struct sFunNode* __result260__;
void* right_value963;
struct sFunNode* result_823;
_Bool _if_conditional636;
_Bool _if_conditional637;
void* right_value964;
char* __dec_obj220;
_Bool _if_conditional638;
void* right_value965;
struct sFun* __dec_obj221;
struct sFunNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value963 = (void*)0;
memset(&result_823, 0, sizeof(struct sFunNode*));
right_value964 = (void*)0;
right_value965 = (void*)0;
            if(_if_conditional635=self==(void*)0,            _if_conditional635) {
                __result260__ = __result_obj__ = (void*)0;
                return __result260__;
            }
            result_823=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(right_value963=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"))));
            come_call_finalizer3(right_value963,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional636=self!=((void*)0),            _if_conditional636) {
                result_823->sline=self->sline;
            }
            if(_if_conditional637=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional637) {
                __dec_obj220=result_823->sname;
                result_823->sname=(char*)come_increment_ref_count(((char*)(right_value964=string_clone(self->sname))));
                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value964 = come_decrement_ref_count2(right_value964, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional638=self!=((void*)0)&&self->mFun!=((void*)0),            _if_conditional638) {
                __dec_obj221=result_823->mFun;
                result_823->mFun=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value965=sFun_clone(self->mFun))));
                come_call_finalizer3(__dec_obj221,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value965,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result261__ = __result_obj__ = result_823;
            come_call_finalizer3(result_823,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result261__;
            come_call_finalizer3(result_823,sFunNode_finalize, 0, 0, 0, 0, (void*)0);
}

