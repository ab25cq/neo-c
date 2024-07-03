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
char* gComeStackFrameSName[1024];
int gComeStackFrameSLine[1024];
int gComeStackFrameID[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeaderTiny
{
    unsigned long int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sMemHeader* gAllocMem;
struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    void** mFreeMem[4048];
    int mNumFreeMem[4048];
    int mSizeFreeMem[4048];
};
struct sHeapPage gHeapPages;

// header function
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

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

char* dirname(char* anonymous_var_nameX597);

char* basename(char* anonymous_var_nameX598);

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

static void* alloc_from_pages(unsigned long int size);
static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

char* __builtin_string(char* str);

_Bool come_is_contained_element(void** array, int len, void* element);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(unsigned long int self, unsigned long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool string_equals(char* self, char* right);

_Bool charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(unsigned long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

unsigned long int size_t_clone(unsigned long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xdirname(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

char* xrealpath(char* path);

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

int size_t_compare(unsigned long int left, unsigned long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

char* FILE_read(struct _IO_FILE* f);

int FILE_write(struct _IO_FILE* f, char* str);

int FILE_fclose(struct _IO_FILE* f);

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* string_read(char* file_name);

char* charp_read(char* file_name);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

char* charp_puts(char* self);

char* charp_print(char* self);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

char* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

static void integer_finalize(struct integer* self);
int integer_to_int(struct integer* self);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_compare(struct integer* left, struct integer* right);

_Bool integer_equals(struct integer* self, struct integer* right);

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










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
    # 29 "libneo-c.c"
    # 22 "libneo-c.c"
    if(_if_conditional19=gNumComeStackFrame<1024,    _if_conditional19) {
        # 23 "libneo-c.c"
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        # 24 "libneo-c.c"
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        # 25 "libneo-c.c"
        gComeStackFrameID[gNumComeStackFrame]=id;
        # 27 "libneo-c.c"
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
    # 36 "libneo-c.c"
    # 33 "libneo-c.c"
    if(_if_conditional20=gNumComeStackFrame>0,    _if_conditional20) {
        # 34 "libneo-c.c"
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* buf_47;
void* right_value81;
int i_48;
void* right_value82;
_Bool _if_conditional21;
void* right_value83;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
right_value81 = (void*)0;
memset(&i_48, 0, sizeof(int));
right_value82 = (void*)0;
right_value83 = (void*)0;
    # 40 "libneo-c.c"
    buf_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 40, "buffer"))))))));
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 41 "libneo-c.c"
    buffer_append_str(buf_47,((char*)(right_value81=xsprintf("%s %d\n",sname,sline))));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 46 "libneo-c.c"
    for(    i_48=gNumComeStackFrame-2;    i_48>=0;    i_48--    ){
        # 43 "libneo-c.c"
        buffer_append_str(buf_47,((char*)(right_value82=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_48],gComeStackFrameSLine[i_48],gComeStackFrameID[i_48]))));
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 49 "libneo-c.c"
    # 46 "libneo-c.c"
    if(gComeStackFrameBuffer) {
        # 47 "libneo-c.c"
        free(gComeStackFrameBuffer);
    }
    # 49 "libneo-c.c"
    gComeStackFrameBuffer=strdup(((char*)(right_value83=buffer_to_string(buf_47))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
void* __result_obj__;
int i_49;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_49, 0, sizeof(int));
    # 57 "libneo-c.c"
    for(    i_49=gNumComeStackFrame-1;    i_49>=0;    i_49--    ){
        # 55 "libneo-c.c"
        printf("%s %d #%d\n",gComeStackFrameSName[i_49],gComeStackFrameSLine[i_49],gComeStackFrameID[i_49]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value84;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    # 61 "libneo-c.c"
    __result52__ = __result_obj__ = ((char*)(right_value84=__builtin_string(gComeStackFrameBuffer)));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional22;
void* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 72 "libneo-c.c"
    # 66 "libneo-c.c"
    if(_if_conditional22=mem==((void*)0),    _if_conditional22) {
        # 67 "libneo-c.c"
        printf("%s %d #%d: null check error\n",sname,sline,id);
        # 68 "libneo-c.c"
        stackframe();
        # 69 "libneo-c.c"
        exit(2);
    }
    # 72 "libneo-c.c"
    __result53__ = __result_obj__ = mem;
    return __result53__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
void* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 83 "libneo-c.c"
    # 77 "libneo-c.c"
    if(_if_conditional23=mem==((void*)0),    _if_conditional23) {
        # 78 "libneo-c.c"
        printf("%s %d: null check error\n",sname,sline);
        # 79 "libneo-c.c"
        stackframe();
        # 80 "libneo-c.c"
        exit(2);
    }
    # 89 "libneo-c.c"
    # 83 "libneo-c.c"
    if(_if_conditional24=mem<begin,    _if_conditional24) {
        # 84 "libneo-c.c"
        printf("%s %d: range check error\n",sname,sline);
        # 85 "libneo-c.c"
        stackframe();
        # 86 "libneo-c.c"
        exit(2);
    }
    # 95 "libneo-c.c"
    # 89 "libneo-c.c"
    if(_if_conditional25=mem>=end,    _if_conditional25) {
        # 90 "libneo-c.c"
        printf("%s %d: range check error\n",sname,sline);
        # 91 "libneo-c.c"
        stackframe();
        # 92 "libneo-c.c"
        exit(2);
    }
    # 95 "libneo-c.c"
    __result54__ = __result_obj__ = mem;
    return __result54__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional26;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 106 "libneo-c.c"
    # 100 "libneo-c.c"
    if(_if_conditional26=!self,    _if_conditional26) {
        # 101 "libneo-c.c"
        block(parent);
        # 102 "libneo-c.c"
        stackframe();
        # 103 "libneo-c.c"
        exit(1);
    }
    # 106 "libneo-c.c"
    __result55__ = self;
    return __result55__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 111 "libneo-c.c"
    __result56__ = self;
    return __result56__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional27;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    # 120 "libneo-c.c"
    # 116 "libneo-c.c"
    if(_if_conditional27=self<0,    _if_conditional27) {
        # 117 "libneo-c.c"
        block(parent);
    }
    # 120 "libneo-c.c"
    __result57__ = self;
    return __result57__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional28;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    # 131 "libneo-c.c"
    # 125 "libneo-c.c"
    if(_if_conditional28=self<0,    _if_conditional28) {
        # 126 "libneo-c.c"
        block(parent);
        # 127 "libneo-c.c"
        stackframe();
        # 128 "libneo-c.c"
        exit(1);
    }
    # 131 "libneo-c.c"
    __result58__ = self;
    return __result58__;
}

int int_value(int self){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    # 136 "libneo-c.c"
    __result59__ = self;
    return __result59__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional29;
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    # 145 "libneo-c.c"
    # 141 "libneo-c.c"
    if(_if_conditional29=self<0,    _if_conditional29) {
        # 142 "libneo-c.c"
        block(parent);
    }
    # 145 "libneo-c.c"
    __result60__ = self;
    return __result60__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional30;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    # 154 "libneo-c.c"
    # 150 "libneo-c.c"
    if(_if_conditional30=!self,    _if_conditional30) {
        # 151 "libneo-c.c"
        block(parent);
    }
    # 154 "libneo-c.c"
    __result61__ = self;
    return __result61__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional31;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    # 163 "libneo-c.c"
    # 159 "libneo-c.c"
    if(_if_conditional31=!self,    _if_conditional31) {
        # 160 "libneo-c.c"
        block(parent);
    }
    # 163 "libneo-c.c"
    __result62__ = self;
    return __result62__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
    # 168 "libneo-c.c"
    printf("%s...",msg);
    # 173 "libneo-c.c"
    # 169 "libneo-c.c"
    if(_if_conditional32=!test,    _if_conditional32) {
        # 170 "libneo-c.c"
        puts("false");
        # 171 "libneo-c.c"
        exit(2);
    }
    # 173 "libneo-c.c"
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
int i_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_50, 0, sizeof(int));
    # 236 "libneo-c.c"
    gComeMallocLib=come_malloc;
    # 238 "libneo-c.c"
    gComeDebugLib=come_debug;
    # 238 "libneo-c.c"
    gComeGCLib=come_gc;
    # 240 "libneo-c.c"
    gComeStackFrameBuffer=((void*)0);
    # 241 "libneo-c.c"
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    # 242 "libneo-c.c"
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    # 243 "libneo-c.c"
    memset(gComeStackFrameID,0,sizeof(int)*1024);
    # 245 "libneo-c.c"
    gHeapPages.mSizePages=4;
    # 247 "libneo-c.c"
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    # 252 "libneo-c.c"
    for(    i_50=0;    i_50<gHeapPages.mSizePages;    i_50++    ){
        # 249 "libneo-c.c"
        gHeapPages.mPages[i_50]=calloc(1,sizeof(char)*4048);
    }
    # 252 "libneo-c.c"
    gHeapPages.mTop=gHeapPages.mPages[0];
    # 253 "libneo-c.c"
    gHeapPages.mCurrentPages=0;
    # 255 "libneo-c.c"
    memset(gHeapPages.mFreeMem,0,sizeof(void**)*4048);
    # 256 "libneo-c.c"
    memset(gHeapPages.mNumFreeMem,0,sizeof(int)*4048);
    # 257 "libneo-c.c"
    memset(gHeapPages.mSizeFreeMem,0,sizeof(int)*4048);
    # 259 "libneo-c.c"
    gAllocMem=((void*)0);
}

void come_heap_final(){
void* __result_obj__;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
struct sMemHeader* it_51;
int n_52;
_Bool flag_53;
_Bool _if_conditional36;
int i_54;
_Bool _if_conditional37;
_Bool _if_conditional38;
struct sMemHeaderTiny* it_55;
int n_56;
_Bool _if_conditional39;
int i_57;
int i_58;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct sMemHeader*));
memset(&n_52, 0, sizeof(int));
memset(&flag_53, 0, sizeof(_Bool));
memset(&i_54, 0, sizeof(int));
memset(&it_55, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_56, 0, sizeof(int));
memset(&i_57, 0, sizeof(int));
memset(&i_58, 0, sizeof(int));
    # 268 "libneo-c.c"
    # 264 "libneo-c.c"
    if(gComeStackFrameBuffer) {
        # 265 "libneo-c.c"
        free(gComeStackFrameBuffer);
    }
    # 305 "libneo-c.c"
    # 268 "libneo-c.c"
    if(gComeGCLib) {
    }
    else {
        # 305 "libneo-c.c"
        # 270 "libneo-c.c"
        if(gComeDebugLib) {
            # 271 "libneo-c.c"
            it_51=gAllocMem;
            # 272 "libneo-c.c"
            n_52=0;
            # 292 "libneo-c.c"
            while(it_51) {
                # 274 "libneo-c.c"
                n_52++;
                # 276 "libneo-c.c"
                flag_53=(_Bool)0;
                # 277 "libneo-c.c"
                printf("#%d ",n_52);
                # 281 "libneo-c.c"
                # 278 "libneo-c.c"
                if(it_51->class_name) {
                    # 279 "libneo-c.c"
                    printf("%p (%s): ",(char*)it_51+sizeof(struct sMemHeader)+sizeof(unsigned long int)+sizeof(unsigned long int),it_51->class_name);
                }
                # 287 "libneo-c.c"
                for(                i_54=0;                i_54<16;                i_54++                ){
                    # 286 "libneo-c.c"
                    # 282 "libneo-c.c"
                    if(_if_conditional37=it_51->sname[i_54],                    _if_conditional37) {
                        # 283 "libneo-c.c"
                        printf("%s %d #%d, ",it_51->sname[i_54],it_51->sline[i_54],it_51->id[i_54]);
                        # 284 "libneo-c.c"
                        flag_53=(_Bool)1;
                    }
                }
                # 290 "libneo-c.c"
                # 287 "libneo-c.c"
                if(flag_53) {
                    # 288 "libneo-c.c"
                    puts("");
                }
                # 290 "libneo-c.c"
                it_51=it_51->next;
            }
            # 292 "libneo-c.c"
            printf("%d memory leaks. %d alloc, %d free.\n",n_52,gNumAlloc,gNumFree);
        }
        else {
            # 295 "libneo-c.c"
            it_55=(struct sMemHeaderTiny*)gAllocMem;
            # 296 "libneo-c.c"
            n_56=0;
            # 301 "libneo-c.c"
            while(it_55) {
                # 298 "libneo-c.c"
                n_56++;
                # 299 "libneo-c.c"
                it_55=it_55->next;
            }
            # 304 "libneo-c.c"
            # 301 "libneo-c.c"
            if(_if_conditional39=n_56>0,            _if_conditional39) {
                # 302 "libneo-c.c"
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_56,gNumAlloc,gNumFree);
            }
        }
    }
    # 308 "libneo-c.c"
    for(    i_57=0;    i_57<gHeapPages.mSizePages;    i_57++    ){
        # 306 "libneo-c.c"
        free(gHeapPages.mPages[i_57]);
    }
    # 308 "libneo-c.c"
    free(gHeapPages.mPages);
    # 315 "libneo-c.c"
    for(    i_58=0;    i_58<4048;    i_58++    ){
        # 314 "libneo-c.c"
        # 311 "libneo-c.c"
        if(_if_conditional40=gHeapPages.mFreeMem[i_58],        _if_conditional40) {
            # 312 "libneo-c.c"
            free(gHeapPages.mFreeMem[i_58]);
        }
    }
}

static void* alloc_from_pages(unsigned long int size){
void* __result_obj__;
void* result_59;
_Bool _if_conditional41;
_Bool _if_conditional42;
struct sMemHeaderTiny* it_60;
_Bool _if_conditional43;
unsigned long int free_area_61;
_Bool _if_conditional44;
_Bool _if_conditional45;
int new_size_pages_62;
void** new_pages_63;
int i_64;
void* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct sMemHeaderTiny*));
memset(&free_area_61, 0, sizeof(unsigned long int));
memset(&new_size_pages_62, 0, sizeof(int));
memset(&new_pages_63, 0, sizeof(void**));
memset(&i_64, 0, sizeof(int));
    # 319 "libneo-c.c"
    result_59=((void*)0);
    # 362 "libneo-c.c"
    # 320 "libneo-c.c"
    if(_if_conditional41=size<4048,    _if_conditional41) {
        # 326 "libneo-c.c"
        # 321 "libneo-c.c"
        if(_if_conditional42=gHeapPages.mFreeMem[size]&&gHeapPages.mNumFreeMem[size]>0,        _if_conditional42) {
            # 322 "libneo-c.c"
            it_60=gHeapPages.mFreeMem[size][gHeapPages.mNumFreeMem[size]-1];
            # 323 "libneo-c.c"
            gHeapPages.mNumFreeMem[size]--;
        }
        # 357 "libneo-c.c"
        # 326 "libneo-c.c"
        if(_if_conditional43=result_59==((void*)0),        _if_conditional43) {
            # 327 "libneo-c.c"
            free_area_61=gHeapPages.mPages[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            # 354 "libneo-c.c"
            # 329 "libneo-c.c"
            if(_if_conditional44=size>=free_area_61,            _if_conditional44) {
                # 330 "libneo-c.c"
                gHeapPages.mCurrentPages++;
                # 351 "libneo-c.c"
                # 332 "libneo-c.c"
                if(_if_conditional45=gHeapPages.mCurrentPages==gHeapPages.mSizePages,                _if_conditional45) {
                    # 333 "libneo-c.c"
                    new_size_pages_62=gHeapPages.mSizePages*2;
                    # 334 "libneo-c.c"
                    new_pages_63=calloc(1,sizeof(char*)*new_size_pages_62);
                    # 336 "libneo-c.c"
                    i_64=0;
                    # 341 "libneo-c.c"
                    for(                    ;                    i_64<gHeapPages.mSizePages;                    i_64++                    ){
                        # 338 "libneo-c.c"
                        new_pages_63[i_64]=gHeapPages.mPages[i_64];
                    }
                    # 345 "libneo-c.c"
                    for(                    ;                    i_64<new_size_pages_62;                    i_64++                    ){
                        # 342 "libneo-c.c"
                        new_pages_63[i_64]=calloc(1,sizeof(char)*4048);
                    }
                    # 345 "libneo-c.c"
                    free(gHeapPages.mPages);
                    # 347 "libneo-c.c"
                    gHeapPages.mPages=new_pages_63;
                    # 348 "libneo-c.c"
                    gHeapPages.mSizePages=new_size_pages_62;
                }
                # 351 "libneo-c.c"
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            # 354 "libneo-c.c"
            result_59=gHeapPages.mTop;
            # 355 "libneo-c.c"
            gHeapPages.mTop+=size;
        }
    }
    else {
        # 359 "libneo-c.c"
        result_59=calloc(1,size);
    }
    # 362 "libneo-c.c"
    __result63__ = __result_obj__ = result_59;
    return __result63__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional46;
void* result_65;
struct sMemHeader* it_66;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
void* __result64__;
void* result_67;
struct sMemHeaderTiny* it_68;
_Bool _if_conditional50;
void* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct sMemHeader*));
memset(&result_67, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct sMemHeaderTiny*));
    # 445 "libneo-c.c"
    # 367 "libneo-c.c"
    if(gComeDebugLib) {
        # 368 "libneo-c.c"
        result_65=alloc_from_pages(size+sizeof(struct sMemHeader));
        # 370 "libneo-c.c"
        it_66=result_65;
        # 372 "libneo-c.c"
        it_66->allocated=177783;
        # 374 "libneo-c.c"
        it_66->size=size+sizeof(struct sMemHeader);
        # 377 "libneo-c.c"
        come_push_stackframe(sname,sline,0);
        # 391 "libneo-c.c"
        # 380 "libneo-c.c"
        if(_if_conditional47=gNumComeStackFrame<16,        _if_conditional47) {
            # 381 "libneo-c.c"
            memcpy(it_66->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            # 382 "libneo-c.c"
            memcpy(it_66->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            # 383 "libneo-c.c"
            memcpy(it_66->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            # 386 "libneo-c.c"
            memcpy(it_66->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            # 387 "libneo-c.c"
            memcpy(it_66->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            # 388 "libneo-c.c"
            memcpy(it_66->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        # 391 "libneo-c.c"
        come_pop_stackframe();
        # 393 "libneo-c.c"
        it_66->next=gAllocMem;
        # 394 "libneo-c.c"
        it_66->prev=((void*)0);
        # 403 "libneo-c.c"
        # 396 "libneo-c.c"
        if(class_name) {
            # 397 "libneo-c.c"
            it_66->class_name=strdup(class_name);
        }
        else {
            # 400 "libneo-c.c"
            it_66->class_name=((void*)0);
        }
        # 407 "libneo-c.c"
        # 403 "libneo-c.c"
        if(gAllocMem) {
            # 404 "libneo-c.c"
            gAllocMem->prev=it_66;
        }
        # 407 "libneo-c.c"
        gAllocMem=it_66;
        # 409 "libneo-c.c"
        gNumAlloc++;
        # 411 "libneo-c.c"
        __result64__ = __result_obj__ = (char*)result_65+sizeof(struct sMemHeader);
        return __result64__;
    }
    else {
        # 414 "libneo-c.c"
        result_67=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        # 416 "libneo-c.c"
        it_68=result_67;
        # 418 "libneo-c.c"
        it_68->allocated=177783;
        # 429 "libneo-c.c"
        it_68->size=size+sizeof(struct sMemHeaderTiny);
        # 432 "libneo-c.c"
        it_68->next=(struct sMemHeaderTiny*)gAllocMem;
        # 433 "libneo-c.c"
        it_68->prev=((void*)0);
        # 439 "libneo-c.c"
        # 435 "libneo-c.c"
        if(gAllocMem) {
            # 436 "libneo-c.c"
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_68;
        }
        # 439 "libneo-c.c"
        gAllocMem=(struct sMemHeader*)it_68;
        # 441 "libneo-c.c"
        gNumAlloc++;
        # 443 "libneo-c.c"
        __result65__ = __result_obj__ = (char*)result_67+sizeof(struct sMemHeaderTiny);
        return __result65__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
void* __result_obj__;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
struct sMemHeader* it_69;
_Bool _if_conditional54;
struct sMemHeader* prev_it_70;
struct sMemHeader* next_it_71;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
unsigned long int size_72;
_Bool _if_conditional60;
int num_free_mem_73;
int size_free_mem_74;
_Bool _if_conditional61;
int new_size_free_mem_75;
void** new_free_mem_76;
_Bool _if_conditional62;
int new_size_free_mem_77;
void** new_free_mem_78;
struct sMemHeaderTiny* it_79;
_Bool _if_conditional63;
struct sMemHeaderTiny* prev_it_80;
struct sMemHeaderTiny* next_it_81;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
unsigned long int size_82;
_Bool _if_conditional68;
int num_free_mem_83;
int size_free_mem_84;
_Bool _if_conditional69;
int new_size_free_mem_85;
void** new_free_mem_86;
_Bool _if_conditional70;
int new_size_free_mem_87;
void** new_free_mem_88;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct sMemHeader*));
memset(&prev_it_70, 0, sizeof(struct sMemHeader*));
memset(&next_it_71, 0, sizeof(struct sMemHeader*));
memset(&size_72, 0, sizeof(unsigned long int));
memset(&num_free_mem_73, 0, sizeof(int));
memset(&size_free_mem_74, 0, sizeof(int));
memset(&new_size_free_mem_75, 0, sizeof(int));
memset(&new_free_mem_76, 0, sizeof(void**));
memset(&new_size_free_mem_77, 0, sizeof(int));
memset(&new_free_mem_78, 0, sizeof(void**));
memset(&it_79, 0, sizeof(struct sMemHeaderTiny*));
memset(&prev_it_80, 0, sizeof(struct sMemHeaderTiny*));
memset(&next_it_81, 0, sizeof(struct sMemHeaderTiny*));
memset(&size_82, 0, sizeof(unsigned long int));
memset(&num_free_mem_83, 0, sizeof(int));
memset(&size_free_mem_84, 0, sizeof(int));
memset(&new_size_free_mem_85, 0, sizeof(int));
memset(&new_free_mem_86, 0, sizeof(void**));
memset(&new_size_free_mem_87, 0, sizeof(int));
memset(&new_free_mem_88, 0, sizeof(void**));
    # 587 "libneo-c.c"
    # 449 "libneo-c.c"
    if(mem) {
        # 586 "libneo-c.c"
        # 450 "libneo-c.c"
        if(gComeGCLib) {
        }
        else {
            # 586 "libneo-c.c"
            # 452 "libneo-c.c"
            if(gComeDebugLib) {
                # 453 "libneo-c.c"
                it_69=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                # 459 "libneo-c.c"
                # 455 "libneo-c.c"
                if(_if_conditional54=it_69->allocated!=177783,                _if_conditional54) {
                    # 456 "libneo-c.c"
                    return;
                }
                # 459 "libneo-c.c"
                it_69->allocated=0;
                # 461 "libneo-c.c"
                prev_it_70=it_69->prev;
                # 462 "libneo-c.c"
                next_it_71=it_69->next;
                # 468 "libneo-c.c"
                # 464 "libneo-c.c"
                if(it_69->class_name) {
                    # 465 "libneo-c.c"
                    free(it_69->class_name);
                }
                # 484 "libneo-c.c"
                # 468 "libneo-c.c"
                if(_if_conditional56=gAllocMem==it_69,                _if_conditional56) {
                    # 469 "libneo-c.c"
                    gAllocMem=next_it_71;
                    # 474 "libneo-c.c"
                    # 471 "libneo-c.c"
                    if(gAllocMem) {
                        # 472 "libneo-c.c"
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    # 479 "libneo-c.c"
                    # 476 "libneo-c.c"
                    if(prev_it_70) {
                        # 477 "libneo-c.c"
                        prev_it_70->next=next_it_71;
                    }
                    # 482 "libneo-c.c"
                    # 479 "libneo-c.c"
                    if(next_it_71) {
                        # 480 "libneo-c.c"
                        next_it_71->prev=prev_it_70;
                    }
                }
                # 484 "libneo-c.c"
                size_72=it_69->size;
                # 516 "libneo-c.c"
                # 486 "libneo-c.c"
                if(_if_conditional60=size_72<4048,                _if_conditional60) {
                    # 487 "libneo-c.c"
                    num_free_mem_73=gHeapPages.mNumFreeMem[size_72];
                    # 488 "libneo-c.c"
                    size_free_mem_74=gHeapPages.mSizeFreeMem[size_72];
                    # 509 "libneo-c.c"
                    # 490 "libneo-c.c"
                    if(_if_conditional61=gHeapPages.mFreeMem[size_72]==((void*)0),                    _if_conditional61) {
                        # 491 "libneo-c.c"
                        new_size_free_mem_75=16;
                        # 492 "libneo-c.c"
                        new_free_mem_76=calloc(1,sizeof(void*)*new_size_free_mem_75);
                        # 494 "libneo-c.c"
                        gHeapPages.mSizeFreeMem[size_72]=new_size_free_mem_75;
                        # 495 "libneo-c.c"
                        gHeapPages.mFreeMem[size_72]=new_free_mem_76;
                    }
                    else {
                        # 509 "libneo-c.c"
                        # 497 "libneo-c.c"
                        if(_if_conditional62=num_free_mem_73==size_free_mem_74,                        _if_conditional62) {
                            # 498 "libneo-c.c"
                            new_size_free_mem_77=size_free_mem_74*2;
                            # 499 "libneo-c.c"
                            new_free_mem_78=calloc(1,sizeof(void*)*new_size_free_mem_77);
                            # 501 "libneo-c.c"
                            memcpy(new_free_mem_78,gHeapPages.mFreeMem[size_72],sizeof(void*)*num_free_mem_73);
                            # 503 "libneo-c.c"
                            free(gHeapPages.mFreeMem[size_72]);
                            # 505 "libneo-c.c"
                            gHeapPages.mSizeFreeMem[size_72]=new_size_free_mem_77;
                            # 506 "libneo-c.c"
                            gHeapPages.mFreeMem[size_72]=new_free_mem_78;
                        }
                    }
                    # 509 "libneo-c.c"
                    gHeapPages.mFreeMem[size_72][gHeapPages.mNumFreeMem[size_72]]=it_69;
                    # 510 "libneo-c.c"
                    gHeapPages.mNumFreeMem[size_72]++;
                }
                else {
                    # 513 "libneo-c.c"
                    free(it_69);
                }
                # 516 "libneo-c.c"
                gNumFree++;
            }
            else {
                # 519 "libneo-c.c"
                it_79=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                # 525 "libneo-c.c"
                # 521 "libneo-c.c"
                if(_if_conditional63=it_79->allocated!=177783,                _if_conditional63) {
                    # 522 "libneo-c.c"
                    return;
                }
                # 525 "libneo-c.c"
                it_79->allocated=0;
                # 533 "libneo-c.c"
                prev_it_80=it_79->prev;
                # 534 "libneo-c.c"
                next_it_81=it_79->next;
                # 552 "libneo-c.c"
                # 536 "libneo-c.c"
                if(_if_conditional64=gAllocMem==it_79,                _if_conditional64) {
                    # 537 "libneo-c.c"
                    gAllocMem=(struct sMemHeader*)next_it_81;
                    # 542 "libneo-c.c"
                    # 539 "libneo-c.c"
                    if(gAllocMem) {
                        # 540 "libneo-c.c"
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    # 547 "libneo-c.c"
                    # 544 "libneo-c.c"
                    if(prev_it_80) {
                        # 545 "libneo-c.c"
                        prev_it_80->next=next_it_81;
                    }
                    # 550 "libneo-c.c"
                    # 547 "libneo-c.c"
                    if(next_it_81) {
                        # 548 "libneo-c.c"
                        next_it_81->prev=prev_it_80;
                    }
                }
                # 552 "libneo-c.c"
                size_82=it_79->size;
                # 584 "libneo-c.c"
                # 554 "libneo-c.c"
                if(_if_conditional68=size_82<4048,                _if_conditional68) {
                    # 555 "libneo-c.c"
                    num_free_mem_83=gHeapPages.mNumFreeMem[size_82];
                    # 556 "libneo-c.c"
                    size_free_mem_84=gHeapPages.mSizeFreeMem[size_82];
                    # 577 "libneo-c.c"
                    # 558 "libneo-c.c"
                    if(_if_conditional69=gHeapPages.mFreeMem[size_82]==((void*)0),                    _if_conditional69) {
                        # 559 "libneo-c.c"
                        new_size_free_mem_85=16;
                        # 560 "libneo-c.c"
                        new_free_mem_86=calloc(1,sizeof(void*)*new_size_free_mem_85);
                        # 562 "libneo-c.c"
                        gHeapPages.mSizeFreeMem[size_82]=new_size_free_mem_85;
                        # 563 "libneo-c.c"
                        gHeapPages.mFreeMem[size_82]=new_free_mem_86;
                    }
                    else {
                        # 577 "libneo-c.c"
                        # 565 "libneo-c.c"
                        if(_if_conditional70=num_free_mem_83==size_free_mem_84,                        _if_conditional70) {
                            # 566 "libneo-c.c"
                            new_size_free_mem_87=size_free_mem_84*2;
                            # 567 "libneo-c.c"
                            new_free_mem_88=calloc(1,sizeof(void*)*new_size_free_mem_87);
                            # 569 "libneo-c.c"
                            memcpy(new_free_mem_88,gHeapPages.mFreeMem[size_82],sizeof(void*)*num_free_mem_83);
                            # 571 "libneo-c.c"
                            free(gHeapPages.mFreeMem[size_82]);
                            # 573 "libneo-c.c"
                            gHeapPages.mSizeFreeMem[size_82]=new_size_free_mem_87;
                            # 574 "libneo-c.c"
                            gHeapPages.mFreeMem[size_82]=new_free_mem_88;
                        }
                    }
                    # 577 "libneo-c.c"
                    gHeapPages.mFreeMem[size_82][gHeapPages.mNumFreeMem[size_82]]=it_79;
                    # 578 "libneo-c.c"
                    gHeapPages.mNumFreeMem[size_82]++;
                }
                else {
                    # 581 "libneo-c.c"
                    free(it_79);
                }
                # 584 "libneo-c.c"
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeader* it_89;
_Bool _if_conditional71;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct sMemHeader*));
    # 631 "libneo-c.c"
    it_89=(struct sMemHeader*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    # 638 "libneo-c.c"
    # 633 "libneo-c.c"
    if(_if_conditional71=it_89->allocated!=177783,    _if_conditional71) {
        # 634 "libneo-c.c"
        printf("invalid heap object(%p)\n",it_89);
        # 635 "libneo-c.c"
        exit(2);
    }
    # 638 "libneo-c.c"
    __result66__ = __result_obj__ = it_89->class_name;
    return __result66__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_90;
unsigned long int* ref_count_91;
unsigned long int* size2_92;
void* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_90, 0, sizeof(char*));
memset(&ref_count_91, 0, sizeof(unsigned long int*));
memset(&size2_92, 0, sizeof(unsigned long int*));
    # 645 "libneo-c.c"
    mem_90=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    # 647 "libneo-c.c"
    ref_count_91=(unsigned long int*)mem_90;
    # 649 "libneo-c.c"
    *ref_count_91=0;
    # 651 "libneo-c.c"
    size2_92=(unsigned long int*)(mem_90+sizeof(unsigned long int));
    # 653 "libneo-c.c"
    *size2_92=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    # 655 "libneo-c.c"
    __result67__ = __result_obj__ = mem_90+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result67__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional72;
unsigned long int* ref_count_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_93, 0, sizeof(unsigned long int*));
    # 663 "libneo-c.c"
    # 660 "libneo-c.c"
    if(_if_conditional72=mem==((void*)0),    _if_conditional72) {
        # 661 "libneo-c.c"
        return;
    }
    # 671 "libneo-c.c"
    ref_count_93=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 673 "libneo-c.c"
    come_free_mem_of_heap_pool((char*)ref_count_93);
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional73;
unsigned long int* ref_count_94;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_94, 0, sizeof(unsigned long int*));
    # 681 "libneo-c.c"
    # 678 "libneo-c.c"
    if(_if_conditional73=mem==((void*)0),    _if_conditional73) {
        # 679 "libneo-c.c"
        return;
    }
    # 689 "libneo-c.c"
    ref_count_94=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 691 "libneo-c.c"
    come_free_mem_of_heap_pool((char*)ref_count_94);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional74;
void* __result68__;
char* mem_95;
unsigned long int* size_p_96;
unsigned long int size_97;
void* result_98;
void* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_95, 0, sizeof(char*));
memset(&size_p_96, 0, sizeof(unsigned long int*));
memset(&size_97, 0, sizeof(unsigned long int));
memset(&result_98, 0, sizeof(void*));
    # 700 "libneo-c.c"
    # 697 "libneo-c.c"
    if(_if_conditional74=!block,    _if_conditional74) {
        # 698 "libneo-c.c"
        __result68__ = __result_obj__ = ((void*)0);
        return __result68__;
    }
    # 708 "libneo-c.c"
    mem_95=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    # 710 "libneo-c.c"
    size_p_96=(unsigned long int*)(mem_95+sizeof(unsigned long int));
    # 712 "libneo-c.c"
    size_97=*size_p_96-sizeof(unsigned long int)-sizeof(unsigned long int);
    # 715 "libneo-c.c"
    result_98=come_calloc(1,size_97,sname,sline,class_name);
    # 717 "libneo-c.c"
    memcpy(result_98,block,size_97);
    # 719 "libneo-c.c"
    __result69__ = __result_obj__ = result_98;
    return __result69__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional75;
void* __result70__;
unsigned long int* ref_count_99;
void* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_99, 0, sizeof(unsigned long int*));
    # 727 "libneo-c.c"
    # 724 "libneo-c.c"
    if(_if_conditional75=mem==((void*)0),    _if_conditional75) {
        # 725 "libneo-c.c"
        __result70__ = __result_obj__ = mem;
        return __result70__;
    }
    # 735 "libneo-c.c"
    ref_count_99=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 737 "libneo-c.c"
    (*ref_count_99)++;
    # 739 "libneo-c.c"
    __result71__ = __result_obj__ = mem;
    return __result71__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional76;
void* __result72__;
unsigned long int* ref_count_100;
void* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_100, 0, sizeof(unsigned long int*));
    # 747 "libneo-c.c"
    # 744 "libneo-c.c"
    if(_if_conditional76=mem==((void*)0),    _if_conditional76) {
        # 745 "libneo-c.c"
        __result72__ = __result_obj__ = mem;
        return __result72__;
    }
    # 755 "libneo-c.c"
    ref_count_100=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 757 "libneo-c.c"
    printf("ref_count %ld\n",*ref_count_100);
    # 759 "libneo-c.c"
    __result73__ = __result_obj__ = mem;
    return __result73__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
_Bool _if_conditional77;
void* __result74__;
unsigned long int* ref_count_101;
_Bool _if_conditional78;
unsigned long int count_102;
_Bool _if_conditional79;
_Bool _if_conditional80;
void (*finalizer_103)(void*);
void* __result75__;
void* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_101, 0, sizeof(unsigned long int*));
memset(&count_102, 0, sizeof(unsigned long int));
memset(&finalizer_103, 0, sizeof(void (*)(void*)));
    # 768 "libneo-c.c"
    # 764 "libneo-c.c"
    if(_if_conditional77=mem==((void*)0),    _if_conditional77) {
        # 765 "libneo-c.c"
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
    # 768 "libneo-c.c"
    ref_count_101=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 774 "libneo-c.c"
    # 770 "libneo-c.c"
    if(_if_conditional78=!no_decrement,    _if_conditional78) {
        # 771 "libneo-c.c"
        (*ref_count_101)--;
    }
    # 774 "libneo-c.c"
    count_102=*ref_count_101;
    # 786 "libneo-c.c"
    # 775 "libneo-c.c"
    if(_if_conditional79=!no_free&&(count_102<=0||force_delete_),    _if_conditional79) {
        # 782 "libneo-c.c"
        # 776 "libneo-c.c"
        if(_if_conditional80=protocol_obj&&protocol_fun,        _if_conditional80) {
            # 777 "libneo-c.c"
            finalizer_103=protocol_fun;
            # 778 "libneo-c.c"
            finalizer_103(protocol_obj);
            # 780 "libneo-c.c"
            come_free_object(protocol_obj);
        }
        # 782 "libneo-c.c"
        come_free_object(mem);
        # 783 "libneo-c.c"
        __result75__ = __result_obj__ = ((void*)0);
        return __result75__;
    }
    # 786 "libneo-c.c"
    __result76__ = __result_obj__ = mem;
    return __result76__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* __result77__;
_Bool _if_conditional83;
void* __result78__;
unsigned long int* ref_count_104;
_Bool _if_conditional84;
unsigned long int count_105;
_Bool _if_conditional85;
_Bool _if_conditional86;
void (*finalizer_106)(void*);
void* __result79__;
void* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_104, 0, sizeof(unsigned long int*));
memset(&count_105, 0, sizeof(unsigned long int));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
    # 796 "libneo-c.c"
    # 791 "libneo-c.c"
    if(result_obj) {
        # 795 "libneo-c.c"
        # 792 "libneo-c.c"
        if(_if_conditional82=mem==result_obj,        _if_conditional82) {
            # 793 "libneo-c.c"
            __result77__ = __result_obj__ = mem;
            return __result77__;
        }
    }
    # 800 "libneo-c.c"
    # 796 "libneo-c.c"
    if(_if_conditional83=mem==((void*)0),    _if_conditional83) {
        # 797 "libneo-c.c"
        __result78__ = __result_obj__ = ((void*)0);
        return __result78__;
    }
    # 800 "libneo-c.c"
    ref_count_104=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    # 806 "libneo-c.c"
    # 802 "libneo-c.c"
    if(_if_conditional84=!no_decrement,    _if_conditional84) {
        # 803 "libneo-c.c"
        (*ref_count_104)--;
    }
    # 806 "libneo-c.c"
    count_105=*ref_count_104;
    # 818 "libneo-c.c"
    # 807 "libneo-c.c"
    if(_if_conditional85=!no_free&&(count_105<=0||force_delete_),    _if_conditional85) {
        # 814 "libneo-c.c"
        # 808 "libneo-c.c"
        if(_if_conditional86=protocol_obj&&protocol_fun,        _if_conditional86) {
            # 809 "libneo-c.c"
            finalizer_106=protocol_fun;
            # 810 "libneo-c.c"
            finalizer_106(protocol_obj);
            # 812 "libneo-c.c"
            come_free_object(protocol_obj);
        }
        # 814 "libneo-c.c"
        come_free_object(mem);
        # 815 "libneo-c.c"
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    # 818 "libneo-c.c"
    __result80__ = __result_obj__ = mem;
    return __result80__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* __result_obj__;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void (*finalizer_107)(void*);
void (*finalizer_108)(void*);
unsigned long int* ref_count_109;
_Bool _if_conditional91;
unsigned long int count_110;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
void (*finalizer_111)(void*);
_Bool _if_conditional95;
void (*finalizer_112)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
memset(&ref_count_109, 0, sizeof(unsigned long int*));
memset(&count_110, 0, sizeof(unsigned long int));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
    # 827 "libneo-c.c"
    # 823 "libneo-c.c"
    if(_if_conditional87=mem==((void*)0),    _if_conditional87) {
        # 824 "libneo-c.c"
        return;
    }
    # 860 "libneo-c.c"
    # 827 "libneo-c.c"
    if(call_finalizer_only) {
        # 836 "libneo-c.c"
        # 828 "libneo-c.c"
        if(fun) {
            # 833 "libneo-c.c"
            # 829 "libneo-c.c"
            if(_if_conditional90=protocol_obj&&protocol_fun,            _if_conditional90) {
                # 830 "libneo-c.c"
                finalizer_107=protocol_fun;
                # 831 "libneo-c.c"
                finalizer_107(protocol_obj);
            }
            # 833 "libneo-c.c"
            finalizer_108=fun;
            # 834 "libneo-c.c"
            finalizer_108(mem);
        }
    }
    else {
        # 838 "libneo-c.c"
        ref_count_109=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 844 "libneo-c.c"
        # 840 "libneo-c.c"
        if(_if_conditional91=!no_decrement,        _if_conditional91) {
            # 841 "libneo-c.c"
            (*ref_count_109)--;
        }
        # 844 "libneo-c.c"
        count_110=*ref_count_109;
        # 859 "libneo-c.c"
        # 845 "libneo-c.c"
        if(_if_conditional92=!no_free&&(count_110<=0||force_delete_),        _if_conditional92) {
            # 858 "libneo-c.c"
            # 846 "libneo-c.c"
            if(mem) {
                # 852 "libneo-c.c"
                # 847 "libneo-c.c"
                if(_if_conditional94=protocol_obj&&protocol_fun,                _if_conditional94) {
                    # 848 "libneo-c.c"
                    finalizer_111=protocol_fun;
                    # 849 "libneo-c.c"
                    finalizer_111(protocol_obj);
                    # 850 "libneo-c.c"
                    come_free_object(protocol_obj);
                }
                # 856 "libneo-c.c"
                # 852 "libneo-c.c"
                if(fun) {
                    # 853 "libneo-c.c"
                    finalizer_112=fun;
                    # 854 "libneo-c.c"
                    finalizer_112(mem);
                }
                # 856 "libneo-c.c"
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
void (*finalizer_113)(void*);
void (*finalizer_114)(void*);
unsigned long int* ref_count_115;
_Bool _if_conditional102;
unsigned long int count_116;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
void (*finalizer_117)(void*);
_Bool _if_conditional106;
void (*finalizer_118)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&ref_count_115, 0, sizeof(unsigned long int*));
memset(&count_116, 0, sizeof(unsigned long int));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_118, 0, sizeof(void (*)(void*)));
    # 869 "libneo-c.c"
    # 864 "libneo-c.c"
    if(result_obj) {
        # 868 "libneo-c.c"
        # 865 "libneo-c.c"
        if(_if_conditional97=mem==result_obj,        _if_conditional97) {
            # 866 "libneo-c.c"
            return;
        }
    }
    # 873 "libneo-c.c"
    # 869 "libneo-c.c"
    if(_if_conditional98=mem==((void*)0),    _if_conditional98) {
        # 870 "libneo-c.c"
        return;
    }
    # 906 "libneo-c.c"
    # 873 "libneo-c.c"
    if(call_finalizer_only) {
        # 882 "libneo-c.c"
        # 874 "libneo-c.c"
        if(fun) {
            # 879 "libneo-c.c"
            # 875 "libneo-c.c"
            if(_if_conditional101=protocol_obj&&protocol_fun,            _if_conditional101) {
                # 876 "libneo-c.c"
                finalizer_113=protocol_fun;
                # 877 "libneo-c.c"
                finalizer_113(protocol_obj);
            }
            # 879 "libneo-c.c"
            finalizer_114=fun;
            # 880 "libneo-c.c"
            finalizer_114(mem);
        }
    }
    else {
        # 884 "libneo-c.c"
        ref_count_115=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 890 "libneo-c.c"
        # 886 "libneo-c.c"
        if(_if_conditional102=!no_decrement,        _if_conditional102) {
            # 887 "libneo-c.c"
            (*ref_count_115)--;
        }
        # 890 "libneo-c.c"
        count_116=*ref_count_115;
        # 905 "libneo-c.c"
        # 891 "libneo-c.c"
        if(_if_conditional103=!no_free&&(count_116<=0||force_delete_),        _if_conditional103) {
            # 904 "libneo-c.c"
            # 892 "libneo-c.c"
            if(mem) {
                # 898 "libneo-c.c"
                # 893 "libneo-c.c"
                if(_if_conditional105=protocol_obj&&protocol_fun,                _if_conditional105) {
                    # 894 "libneo-c.c"
                    finalizer_117=protocol_fun;
                    # 895 "libneo-c.c"
                    finalizer_117(protocol_obj);
                    # 896 "libneo-c.c"
                    come_free_object(protocol_obj);
                }
                # 902 "libneo-c.c"
                # 898 "libneo-c.c"
                if(fun) {
                    # 899 "libneo-c.c"
                    finalizer_118=fun;
                    # 900 "libneo-c.c"
                    finalizer_118(mem);
                }
                # 902 "libneo-c.c"
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* __result_obj__;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
void (*finalizer_119)(void*);
unsigned long int* ref_count_120;
_Bool _if_conditional112;
unsigned long int count_121;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
void (*finalizer_122)(void*);
memset(&__result_obj__, 0, sizeof(void*));
memset(&finalizer_119, 0, sizeof(void (*)(void*)));
memset(&ref_count_120, 0, sizeof(unsigned long int*));
memset(&count_121, 0, sizeof(unsigned long int));
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
    # 915 "libneo-c.c"
    # 910 "libneo-c.c"
    if(result_obj) {
        # 914 "libneo-c.c"
        # 911 "libneo-c.c"
        if(_if_conditional108=mem==result_obj,        _if_conditional108) {
            # 912 "libneo-c.c"
            return;
        }
    }
    # 919 "libneo-c.c"
    # 915 "libneo-c.c"
    if(_if_conditional109=mem==((void*)0),    _if_conditional109) {
        # 916 "libneo-c.c"
        return;
    }
    # 943 "libneo-c.c"
    # 919 "libneo-c.c"
    if(call_finalizer_only) {
        # 924 "libneo-c.c"
        # 920 "libneo-c.c"
        if(fun) {
            # 921 "libneo-c.c"
            finalizer_119=fun;
            # 922 "libneo-c.c"
            finalizer_119(mem);
        }
    }
    else {
        # 926 "libneo-c.c"
        ref_count_120=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        # 932 "libneo-c.c"
        # 928 "libneo-c.c"
        if(_if_conditional112=!no_decrement,        _if_conditional112) {
            # 929 "libneo-c.c"
            (*ref_count_120)--;
        }
        # 932 "libneo-c.c"
        count_121=*ref_count_120;
        # 942 "libneo-c.c"
        # 933 "libneo-c.c"
        if(_if_conditional113=!no_free&&(count_121<=0||force_delete_),        _if_conditional113) {
            # 941 "libneo-c.c"
            # 934 "libneo-c.c"
            if(mem) {
                # 939 "libneo-c.c"
                # 935 "libneo-c.c"
                if(fun) {
                    # 936 "libneo-c.c"
                    finalizer_122=fun;
                    # 937 "libneo-c.c"
                    finalizer_122(mem);
                }
                # 939 "libneo-c.c"
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional116;
char* __result81__;
int len_123;
void* right_value85;
char* result_124;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_123, 0, sizeof(int));
right_value85 = (void*)0;
memset(&result_124, 0, sizeof(char*));
    # 950 "libneo-c.c"
    # 947 "libneo-c.c"
    if(_if_conditional116=str==((void*)0),    _if_conditional116) {
        # 948 "libneo-c.c"
        __result81__ = __result_obj__ = ((void*)0);
        return __result81__;
    }
    # 950 "libneo-c.c"
    len_123=strlen(str)+1;
    # 952 "libneo-c.c"
    result_124=(char*)come_increment_ref_count(((char*)(right_value85=(char*)come_calloc(1, sizeof(char)*(1*(len_123)), "libneo-c.c", 952, "char"))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 954 "libneo-c.c"
    strncpy(result_124,str,len_123);
    # 956 "libneo-c.c"
    __result82__ = __result_obj__ = result_124;
    result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result82__;
    result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool come_is_contained_element(void** array, int len, void* element){
void* __result_obj__;
_Bool found_125;
int i_126;
_Bool _if_conditional117;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&found_125, 0, sizeof(_Bool));
memset(&i_126, 0, sizeof(int));
    # 961 "libneo-c.c"
    found_125=(_Bool)0;
    # 968 "libneo-c.c"
    for(    i_126=0;    i_126<len;    i_126++    ){
        # 967 "libneo-c.c"
        # 963 "libneo-c.c"
        if(_if_conditional117=array[i_126]==element,        _if_conditional117) {
            # 964 "libneo-c.c"
            found_125=(_Bool)1;
            # 965 "libneo-c.c"
            break;
        }
    }
    # 968 "libneo-c.c"
    __result83__ = found_125;
    return __result83__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
void* right_value86;
char* __dec_obj12;
struct buffer* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    # 976 "libneo-c.c"
    self->size=128;
    # 977 "libneo-c.c"
    __dec_obj12=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value86=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 977, "char"))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 978 "libneo-c.c"
    self->buf[0]=0;
    # 979 "libneo-c.c"
    self->len=0;
    # 981 "libneo-c.c"
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
    # 986 "libneo-c.c"
    # 986 "libneo-c.c"
    if(_if_conditional118=self&&self->buf,    _if_conditional118) {
        # 986 "libneo-c.c"
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
    # 990 "libneo-c.c"
    # 990 "libneo-c.c"
    if(_if_conditional119=self&&self->buf,    _if_conditional119) {
        # 990 "libneo-c.c"
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional120;
struct buffer* __result85__;
void* right_value87;
struct buffer* result_127;
void* right_value88;
char* __dec_obj13;
struct buffer* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_127, 0, sizeof(struct buffer*));
right_value88 = (void*)0;
    # 999 "libneo-c.c"
    # 995 "libneo-c.c"
    if(_if_conditional120=self==((void*)0),    _if_conditional120) {
        # 996 "libneo-c.c"
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    # 999 "libneo-c.c"
    result_127=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 999, "buffer"))));
    come_call_finalizer3(right_value87,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1001 "libneo-c.c"
    result_127->size=self->size;
    # 1002 "libneo-c.c"
    __dec_obj13=result_127->buf;
    result_127->buf=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1002, "char"))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1003 "libneo-c.c"
    result_127->len=self->len;
    # 1004 "libneo-c.c"
    memcpy(result_127->buf,self->buf,self->len);
    # 1006 "libneo-c.c"
    __result86__ = __result_obj__ = result_127;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result86__;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int buffer_length(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional121;
int __result87__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1014 "libneo-c.c"
    # 1011 "libneo-c.c"
    if(_if_conditional121=self==((void*)0),    _if_conditional121) {
        # 1012 "libneo-c.c"
        __result87__ = 0;
        return __result87__;
    }
    # 1014 "libneo-c.c"
    __result88__ = self->len;
    return __result88__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
    # 1022 "libneo-c.c"
    # 1019 "libneo-c.c"
    if(_if_conditional122=self==((void*)0),    _if_conditional122) {
        # 1020 "libneo-c.c"
        return;
    }
    # 1022 "libneo-c.c"
    self->buf[0]=0;
    # 1023 "libneo-c.c"
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional123;
memset(&__result_obj__, 0, sizeof(void*));
    # 1031 "libneo-c.c"
    # 1028 "libneo-c.c"
    if(_if_conditional123=self==((void*)0),    _if_conditional123) {
        # 1029 "libneo-c.c"
        return;
    }
    # 1031 "libneo-c.c"
    self->len-=len;
    # 1032 "libneo-c.c"
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional124;
struct buffer* __result89__;
_Bool _if_conditional125;
void* right_value89;
char* old_buf_128;
int old_len_129;
int new_size_130;
void* right_value90;
char* __dec_obj14;
struct buffer* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&old_buf_128, 0, sizeof(char*));
memset(&old_len_129, 0, sizeof(int));
memset(&new_size_130, 0, sizeof(int));
right_value90 = (void*)0;
    # 1040 "libneo-c.c"
    # 1037 "libneo-c.c"
    if(_if_conditional124=self==((void*)0)||mem==((void*)0),    _if_conditional124) {
        # 1038 "libneo-c.c"
        __result89__ = __result_obj__ = self;
        return __result89__;
    }
    # 1051 "libneo-c.c"
    # 1040 "libneo-c.c"
    if(_if_conditional125=self->len+size+1+1>=self->size,    _if_conditional125) {
        # 1041 "libneo-c.c"
        old_buf_128=(char*)come_increment_ref_count(((char*)(right_value89=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1041, "char"))));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1042 "libneo-c.c"
        memcpy(old_buf_128,self->buf,self->size);
        # 1043 "libneo-c.c"
        old_len_129=self->len;
        # 1044 "libneo-c.c"
        new_size_130=(self->size+size+1)*2;
        # 1045 "libneo-c.c"
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value90=(char*)come_calloc(1, sizeof(char)*(1*(new_size_130)), "libneo-c.c", 1045, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1046 "libneo-c.c"
        memcpy(self->buf,old_buf_128,old_len_129);
        # 1047 "libneo-c.c"
        self->buf[old_len_129]=0;
        # 1048 "libneo-c.c"
        self->size=new_size_130;
        old_buf_128 = come_decrement_ref_count2(old_buf_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1051 "libneo-c.c"
    memcpy(self->buf+self->len,mem,size);
    # 1052 "libneo-c.c"
    self->len+=size;
    # 1053 "libneo-c.c"
    self->buf[self->len]=0;
    # 1055 "libneo-c.c"
    __result90__ = __result_obj__ = self;
    return __result90__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional126;
struct buffer* __result91__;
_Bool _if_conditional127;
void* right_value91;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* right_value92;
char* __dec_obj15;
struct buffer* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&old_buf_131, 0, sizeof(char*));
memset(&old_len_132, 0, sizeof(int));
memset(&new_size_133, 0, sizeof(int));
right_value92 = (void*)0;
    # 1063 "libneo-c.c"
    # 1060 "libneo-c.c"
    if(_if_conditional126=self==((void*)0),    _if_conditional126) {
        # 1061 "libneo-c.c"
        __result91__ = __result_obj__ = ((void*)0);
        return __result91__;
    }
    # 1074 "libneo-c.c"
    # 1063 "libneo-c.c"
    if(_if_conditional127=self->len+1+1+1>=self->size,    _if_conditional127) {
        # 1064 "libneo-c.c"
        old_buf_131=(char*)come_increment_ref_count(((char*)(right_value91=charp_clone(self->buf))));
        right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1065 "libneo-c.c"
        old_len_132=self->len;
        # 1067 "libneo-c.c"
        new_size_133=(self->size+10+1)*2;
        # 1068 "libneo-c.c"
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value92=(char*)come_calloc(1, sizeof(char)*(1*(new_size_133)), "libneo-c.c", 1068, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1069 "libneo-c.c"
        memcpy(self->buf,old_buf_131,old_len_132);
        # 1070 "libneo-c.c"
        self->buf[old_len_132]=0;
        # 1071 "libneo-c.c"
        self->size=new_size_133;
        old_buf_131 = come_decrement_ref_count2(old_buf_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1074 "libneo-c.c"
    self->buf[self->len]=c;
    # 1075 "libneo-c.c"
    self->len++;
    # 1077 "libneo-c.c"
    self->buf[self->len]=0;
    # 1079 "libneo-c.c"
    __result92__ = __result_obj__ = self;
    return __result92__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional128;
struct buffer* __result93__;
int size_134;
_Bool _if_conditional129;
void* right_value93;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* right_value94;
char* __dec_obj16;
struct buffer* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_134, 0, sizeof(int));
right_value93 = (void*)0;
memset(&old_buf_135, 0, sizeof(char*));
memset(&old_len_136, 0, sizeof(int));
memset(&new_size_137, 0, sizeof(int));
right_value94 = (void*)0;
    # 1088 "libneo-c.c"
    # 1084 "libneo-c.c"
    if(_if_conditional128=self==((void*)0)||mem==((void*)0),    _if_conditional128) {
        # 1085 "libneo-c.c"
        __result93__ = __result_obj__ = self;
        return __result93__;
    }
    # 1088 "libneo-c.c"
    size_134=strlen(mem);
    # 1100 "libneo-c.c"
    # 1089 "libneo-c.c"
    if(_if_conditional129=self->len+size_134+1+1>=self->size,    _if_conditional129) {
        # 1090 "libneo-c.c"
        old_buf_135=(char*)come_increment_ref_count(((char*)(right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1090, "char"))));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1091 "libneo-c.c"
        memcpy(old_buf_135,self->buf,self->size);
        # 1092 "libneo-c.c"
        old_len_136=self->len;
        # 1093 "libneo-c.c"
        new_size_137=(self->size+size_134+1)*2;
        # 1094 "libneo-c.c"
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(new_size_137)), "libneo-c.c", 1094, "char"))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1095 "libneo-c.c"
        memcpy(self->buf,old_buf_135,old_len_136);
        # 1096 "libneo-c.c"
        self->buf[old_len_136]=0;
        # 1097 "libneo-c.c"
        self->size=new_size_137;
        old_buf_135 = come_decrement_ref_count2(old_buf_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1100 "libneo-c.c"
    memcpy(self->buf+self->len,mem,size_134);
    # 1101 "libneo-c.c"
    self->len+=size_134;
    # 1102 "libneo-c.c"
    self->buf[self->len]=0;
    # 1104 "libneo-c.c"
    __result94__ = __result_obj__ = self;
    return __result94__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional130;
struct buffer* __result95__;
int size_138;
_Bool _if_conditional131;
void* right_value95;
char* old_buf_139;
int old_len_140;
int new_size_141;
void* right_value96;
char* __dec_obj17;
struct buffer* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_138, 0, sizeof(int));
right_value95 = (void*)0;
memset(&old_buf_139, 0, sizeof(char*));
memset(&old_len_140, 0, sizeof(int));
memset(&new_size_141, 0, sizeof(int));
right_value96 = (void*)0;
    # 1112 "libneo-c.c"
    # 1109 "libneo-c.c"
    if(_if_conditional130=self==((void*)0)||mem==((void*)0),    _if_conditional130) {
        # 1110 "libneo-c.c"
        __result95__ = __result_obj__ = self;
        return __result95__;
    }
    # 1112 "libneo-c.c"
    size_138=strlen(mem)+1;
    # 1124 "libneo-c.c"
    # 1113 "libneo-c.c"
    if(_if_conditional131=self->len+size_138+1+1+1>=self->size,    _if_conditional131) {
        # 1114 "libneo-c.c"
        old_buf_139=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1114, "char"))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1115 "libneo-c.c"
        memcpy(old_buf_139,self->buf,self->size);
        # 1116 "libneo-c.c"
        old_len_140=self->len;
        # 1117 "libneo-c.c"
        new_size_141=(self->size+size_138+1)*2;
        # 1118 "libneo-c.c"
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value96=(char*)come_calloc(1, sizeof(char)*(1*(new_size_141)), "libneo-c.c", 1118, "char"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1119 "libneo-c.c"
        memcpy(self->buf,old_buf_139,old_len_140);
        # 1120 "libneo-c.c"
        self->buf[old_len_140]=0;
        # 1121 "libneo-c.c"
        self->size=new_size_141;
        old_buf_139 = come_decrement_ref_count2(old_buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1124 "libneo-c.c"
    memcpy(self->buf+self->len,mem,size_138);
    # 1125 "libneo-c.c"
    self->len+=size_138;
    # 1126 "libneo-c.c"
    self->buf[self->len]=0;
    # 1127 "libneo-c.c"
    self->len++;
    # 1129 "libneo-c.c"
    __result96__ = __result_obj__ = self;
    return __result96__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
_Bool _if_conditional132;
struct buffer* __result97__;
int* mem_142;
int size_143;
_Bool _if_conditional133;
void* right_value97;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* right_value98;
char* __dec_obj18;
struct buffer* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_142, 0, sizeof(int*));
memset(&size_143, 0, sizeof(int));
right_value97 = (void*)0;
memset(&old_buf_144, 0, sizeof(char*));
memset(&old_len_145, 0, sizeof(int));
memset(&new_size_146, 0, sizeof(int));
right_value98 = (void*)0;
    # 1137 "libneo-c.c"
    # 1134 "libneo-c.c"
    if(_if_conditional132=self==((void*)0),    _if_conditional132) {
        # 1135 "libneo-c.c"
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    # 1137 "libneo-c.c"
    mem_142=&value;
    # 1138 "libneo-c.c"
    size_143=sizeof(int);
    # 1151 "libneo-c.c"
    # 1140 "libneo-c.c"
    if(_if_conditional133=self->len+size_143+1+1>=self->size,    _if_conditional133) {
        # 1141 "libneo-c.c"
        old_buf_144=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1141, "char"))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1142 "libneo-c.c"
        memcpy(old_buf_144,self->buf,self->size);
        # 1143 "libneo-c.c"
        old_len_145=self->len;
        # 1144 "libneo-c.c"
        new_size_146=(self->size+size_143+1)*2;
        # 1145 "libneo-c.c"
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value98=(char*)come_calloc(1, sizeof(char)*(1*(new_size_146)), "libneo-c.c", 1145, "char"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1146 "libneo-c.c"
        memcpy(self->buf,old_buf_144,old_len_145);
        # 1147 "libneo-c.c"
        self->buf[old_len_145]=0;
        # 1148 "libneo-c.c"
        self->size=new_size_146;
        old_buf_144 = come_decrement_ref_count2(old_buf_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1151 "libneo-c.c"
    memcpy(self->buf+self->len,mem_142,size_143);
    # 1152 "libneo-c.c"
    self->len+=size_143;
    # 1153 "libneo-c.c"
    self->buf[self->len]=0;
    # 1155 "libneo-c.c"
    __result98__ = __result_obj__ = self;
    return __result98__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_147;
int size_148;
_Bool _if_conditional134;
void* right_value99;
char* old_buf_149;
int old_len_150;
int new_size_151;
void* right_value100;
char* __dec_obj19;
struct buffer* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_147, 0, sizeof(long*));
memset(&size_148, 0, sizeof(int));
right_value99 = (void*)0;
memset(&old_buf_149, 0, sizeof(char*));
memset(&old_len_150, 0, sizeof(int));
memset(&new_size_151, 0, sizeof(int));
right_value100 = (void*)0;
    # 1160 "libneo-c.c"
    mem_147=&value;
    # 1161 "libneo-c.c"
    size_148=sizeof(long);
    # 1174 "libneo-c.c"
    # 1163 "libneo-c.c"
    if(_if_conditional134=self->len+size_148+1+1>=self->size,    _if_conditional134) {
        # 1164 "libneo-c.c"
        old_buf_149=(char*)come_increment_ref_count(((char*)(right_value99=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1164, "char"))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1165 "libneo-c.c"
        memcpy(old_buf_149,self->buf,self->size);
        # 1166 "libneo-c.c"
        old_len_150=self->len;
        # 1167 "libneo-c.c"
        new_size_151=(self->size+size_148+1)*2;
        # 1168 "libneo-c.c"
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(new_size_151)), "libneo-c.c", 1168, "char"))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1169 "libneo-c.c"
        memcpy(self->buf,old_buf_149,old_len_150);
        # 1170 "libneo-c.c"
        self->buf[old_len_150]=0;
        # 1171 "libneo-c.c"
        self->size=new_size_151;
        old_buf_149 = come_decrement_ref_count2(old_buf_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1174 "libneo-c.c"
    memcpy(self->buf+self->len,mem_147,size_148);
    # 1175 "libneo-c.c"
    self->len+=size_148;
    # 1176 "libneo-c.c"
    self->buf[self->len]=0;
    # 1178 "libneo-c.c"
    __result99__ = __result_obj__ = self;
    return __result99__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
_Bool _if_conditional135;
struct buffer* __result100__;
short short* mem_152;
int size_153;
_Bool _if_conditional136;
void* right_value101;
char* old_buf_154;
int old_len_155;
int new_size_156;
void* right_value102;
char* __dec_obj20;
struct buffer* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_152, 0, sizeof(short short*));
memset(&size_153, 0, sizeof(int));
right_value101 = (void*)0;
memset(&old_buf_154, 0, sizeof(char*));
memset(&old_len_155, 0, sizeof(int));
memset(&new_size_156, 0, sizeof(int));
right_value102 = (void*)0;
    # 1187 "libneo-c.c"
    # 1183 "libneo-c.c"
    if(_if_conditional135=self==((void*)0),    _if_conditional135) {
        # 1184 "libneo-c.c"
        __result100__ = __result_obj__ = ((void*)0);
        return __result100__;
    }
    # 1187 "libneo-c.c"
    mem_152=&value;
    # 1188 "libneo-c.c"
    size_153=sizeof(short short);
    # 1201 "libneo-c.c"
    # 1190 "libneo-c.c"
    if(_if_conditional136=self->len+size_153+1+1>=self->size,    _if_conditional136) {
        # 1191 "libneo-c.c"
        old_buf_154=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1191, "char"))));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1192 "libneo-c.c"
        memcpy(old_buf_154,self->buf,self->size);
        # 1193 "libneo-c.c"
        old_len_155=self->len;
        # 1194 "libneo-c.c"
        new_size_156=(self->size+size_153+1)*2;
        # 1195 "libneo-c.c"
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value102=(char*)come_calloc(1, sizeof(char)*(1*(new_size_156)), "libneo-c.c", 1195, "char"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1196 "libneo-c.c"
        memcpy(self->buf,old_buf_154,old_len_155);
        # 1197 "libneo-c.c"
        self->buf[old_len_155]=0;
        # 1198 "libneo-c.c"
        self->size=new_size_156;
        old_buf_154 = come_decrement_ref_count2(old_buf_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 1201 "libneo-c.c"
    memcpy(self->buf+self->len,mem_152,size_153);
    # 1202 "libneo-c.c"
    self->len+=size_153;
    # 1203 "libneo-c.c"
    self->buf[self->len]=0;
    # 1205 "libneo-c.c"
    __result101__ = __result_obj__ = self;
    return __result101__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional137;
struct buffer* __result102__;
int len_157;
_Bool _if_conditional138;
int new_size_158;
void* right_value103;
char* __dec_obj21;
int i_159;
struct buffer* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_157, 0, sizeof(int));
memset(&new_size_158, 0, sizeof(int));
right_value103 = (void*)0;
memset(&i_159, 0, sizeof(int));
    # 1214 "libneo-c.c"
    # 1210 "libneo-c.c"
    if(_if_conditional137=self==((void*)0),    _if_conditional137) {
        # 1211 "libneo-c.c"
        __result102__ = __result_obj__ = ((void*)0);
        return __result102__;
    }
    # 1214 "libneo-c.c"
    len_157=self->len;
    # 1215 "libneo-c.c"
    len_157=(len_157+3)&~3;
    # 1223 "libneo-c.c"
    # 1217 "libneo-c.c"
    if(_if_conditional138=len_157>=self->size,    _if_conditional138) {
        # 1218 "libneo-c.c"
        new_size_158=(self->size+1+1)*2;
        # 1219 "libneo-c.c"
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value103=(char*)come_calloc(1, sizeof(char)*(1*(new_size_158)), "libneo-c.c", 1219, "char"))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1220 "libneo-c.c"
        self->size=new_size_158;
    }
    # 1227 "libneo-c.c"
    for(    i_159=self->len;    i_159<len_157;    i_159++    ){
        # 1224 "libneo-c.c"
        self->buf[i_159]=0;
    }
    # 1227 "libneo-c.c"
    self->len=len_157;
    # 1229 "libneo-c.c"
    __result103__ = __result_obj__ = self;
    return __result103__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
void* __result_obj__;
_Bool _if_conditional139;
int __result104__;
_Bool _if_conditional140;
int __result105__;
_Bool _if_conditional141;
int __result106__;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1244 "libneo-c.c"
    # 1234 "libneo-c.c"
    if(_if_conditional139=left==((void*)0)&&right==((void*)0),    _if_conditional139) {
        # 1235 "libneo-c.c"
        __result104__ = 0;
        return __result104__;
    }
    else {
        # 1244 "libneo-c.c"
        # 1237 "libneo-c.c"
        if(_if_conditional140=left==((void*)0),        _if_conditional140) {
            # 1238 "libneo-c.c"
            __result105__ = -1;
            return __result105__;
        }
        else {
            # 1244 "libneo-c.c"
            # 1240 "libneo-c.c"
            if(_if_conditional141=right==((void*)0),            _if_conditional141) {
                # 1241 "libneo-c.c"
                __result106__ = 1;
                return __result106__;
            }
        }
    }
    # 1244 "libneo-c.c"
    __result107__ = strcmp(left->buf,right->buf);
    return __result107__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
void* right_value104;
void* right_value105;
struct buffer* result_160;
_Bool _if_conditional142;
struct buffer* __result108__;
struct buffer* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_160, 0, sizeof(struct buffer*));
    # 1249 "libneo-c.c"
    result_160=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value104=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1249, "buffer"))))))));
    come_call_finalizer3(right_value104,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value105,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1255 "libneo-c.c"
    # 1251 "libneo-c.c"
    if(_if_conditional142=self==((void*)0),    _if_conditional142) {
        # 1252 "libneo-c.c"
        __result108__ = __result_obj__ = result_160;
        come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result108__;
    }
    # 1255 "libneo-c.c"
    buffer_append_str(result_160,self);
    # 1257 "libneo-c.c"
    __result109__ = __result_obj__ = result_160;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
void* right_value106;
void* right_value107;
struct buffer* result_161;
_Bool _if_conditional143;
struct buffer* __result110__;
struct buffer* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_161, 0, sizeof(struct buffer*));
    # 1262 "libneo-c.c"
    result_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value106=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1262, "buffer"))))))));
    come_call_finalizer3(right_value106,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1268 "libneo-c.c"
    # 1264 "libneo-c.c"
    if(_if_conditional143=self==((void*)0),    _if_conditional143) {
        # 1265 "libneo-c.c"
        __result110__ = __result_obj__ = result_161;
        come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result110__;
    }
    # 1268 "libneo-c.c"
    buffer_append_str(result_161,self);
    # 1270 "libneo-c.c"
    __result111__ = __result_obj__ = result_161;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional144;
void* right_value108;
char* __result112__;
void* right_value109;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
    # 1279 "libneo-c.c"
    # 1275 "libneo-c.c"
    if(_if_conditional144=self==((void*)0),    _if_conditional144) {
        # 1276 "libneo-c.c"
        __result112__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result112__;
    }
    # 1279 "libneo-c.c"
    __result113__ = __result_obj__ = ((char*)(right_value109=__builtin_string(self->buf)));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1288 "libneo-c.c"
    __result114__ = self==right;
    return __result114__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1293 "libneo-c.c"
    __result115__ = self==right;
    return __result115__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1298 "libneo-c.c"
    __result116__ = self==right;
    return __result116__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1303 "libneo-c.c"
    __result117__ = self==right;
    return __result117__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1308 "libneo-c.c"
    __result118__ = self==right;
    return __result118__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1313 "libneo-c.c"
    __result119__ = self==right;
    return __result119__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1318 "libneo-c.c"
    __result120__ = self==right;
    return __result120__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1323 "libneo-c.c"
    __result121__ = self==right;
    return __result121__;
}

_Bool string_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional145;
_Bool __result122__;
_Bool _if_conditional146;
_Bool __result123__;
_Bool _if_conditional147;
_Bool __result124__;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1338 "libneo-c.c"
    # 1328 "libneo-c.c"
    if(_if_conditional145=self==((void*)0)&&right==((void*)0),    _if_conditional145) {
        # 1329 "libneo-c.c"
        __result122__ = (_Bool)1;
        return __result122__;
    }
    else {
        # 1338 "libneo-c.c"
        # 1331 "libneo-c.c"
        if(_if_conditional146=self==((void*)0),        _if_conditional146) {
            # 1332 "libneo-c.c"
            __result123__ = (_Bool)0;
            return __result123__;
        }
        else {
            # 1338 "libneo-c.c"
            # 1334 "libneo-c.c"
            if(_if_conditional147=right==((void*)0),            _if_conditional147) {
                # 1335 "libneo-c.c"
                __result124__ = (_Bool)0;
                return __result124__;
            }
        }
    }
    # 1338 "libneo-c.c"
    __result125__ = strcmp(self,right)==0;
    return __result125__;
}

_Bool charp_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional148;
_Bool __result126__;
_Bool _if_conditional149;
_Bool __result127__;
_Bool _if_conditional150;
_Bool __result128__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1353 "libneo-c.c"
    # 1343 "libneo-c.c"
    if(_if_conditional148=self==((void*)0)&&right==((void*)0),    _if_conditional148) {
        # 1344 "libneo-c.c"
        __result126__ = (_Bool)1;
        return __result126__;
    }
    else {
        # 1353 "libneo-c.c"
        # 1346 "libneo-c.c"
        if(_if_conditional149=self==((void*)0),        _if_conditional149) {
            # 1347 "libneo-c.c"
            __result127__ = (_Bool)0;
            return __result127__;
        }
        else {
            # 1353 "libneo-c.c"
            # 1349 "libneo-c.c"
            if(_if_conditional150=right==((void*)0),            _if_conditional150) {
                # 1350 "libneo-c.c"
                __result128__ = (_Bool)0;
                return __result128__;
            }
        }
    }
    # 1353 "libneo-c.c"
    __result129__ = strcmp(self,right)==0;
    return __result129__;
}

_Bool string_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional151;
_Bool __result130__;
_Bool _if_conditional152;
_Bool __result131__;
_Bool _if_conditional153;
_Bool __result132__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1368 "libneo-c.c"
    # 1358 "libneo-c.c"
    if(_if_conditional151=self==((void*)0)&&right==((void*)0),    _if_conditional151) {
        # 1359 "libneo-c.c"
        __result130__ = (_Bool)1;
        return __result130__;
    }
    else {
        # 1368 "libneo-c.c"
        # 1361 "libneo-c.c"
        if(_if_conditional152=self==((void*)0),        _if_conditional152) {
            # 1362 "libneo-c.c"
            __result131__ = (_Bool)0;
            return __result131__;
        }
        else {
            # 1368 "libneo-c.c"
            # 1364 "libneo-c.c"
            if(_if_conditional153=right==((void*)0),            _if_conditional153) {
                # 1365 "libneo-c.c"
                __result132__ = (_Bool)0;
                return __result132__;
            }
        }
    }
    # 1368 "libneo-c.c"
    __result133__ = strcmp(self,right)==0;
    return __result133__;
}

_Bool charp_operator_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional154;
_Bool __result134__;
_Bool _if_conditional155;
_Bool __result135__;
_Bool _if_conditional156;
_Bool __result136__;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1383 "libneo-c.c"
    # 1373 "libneo-c.c"
    if(_if_conditional154=self==((void*)0)&&right==((void*)0),    _if_conditional154) {
        # 1374 "libneo-c.c"
        __result134__ = (_Bool)1;
        return __result134__;
    }
    else {
        # 1383 "libneo-c.c"
        # 1376 "libneo-c.c"
        if(_if_conditional155=self==((void*)0),        _if_conditional155) {
            # 1377 "libneo-c.c"
            __result135__ = (_Bool)0;
            return __result135__;
        }
        else {
            # 1383 "libneo-c.c"
            # 1379 "libneo-c.c"
            if(_if_conditional156=right==((void*)0),            _if_conditional156) {
                # 1380 "libneo-c.c"
                __result136__ = (_Bool)0;
                return __result136__;
            }
        }
    }
    # 1383 "libneo-c.c"
    __result137__ = strcmp(self,right)==0;
    return __result137__;
}

_Bool string_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional157;
_Bool __result138__;
_Bool _if_conditional158;
_Bool __result139__;
_Bool _if_conditional159;
_Bool __result140__;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1398 "libneo-c.c"
    # 1388 "libneo-c.c"
    if(_if_conditional157=self==((void*)0)&&right==((void*)0),    _if_conditional157) {
        # 1389 "libneo-c.c"
        __result138__ = (_Bool)0;
        return __result138__;
    }
    else {
        # 1398 "libneo-c.c"
        # 1391 "libneo-c.c"
        if(_if_conditional158=self==((void*)0),        _if_conditional158) {
            # 1392 "libneo-c.c"
            __result139__ = (_Bool)1;
            return __result139__;
        }
        else {
            # 1398 "libneo-c.c"
            # 1394 "libneo-c.c"
            if(_if_conditional159=right==((void*)0),            _if_conditional159) {
                # 1395 "libneo-c.c"
                __result140__ = (_Bool)1;
                return __result140__;
            }
        }
    }
    # 1398 "libneo-c.c"
    __result141__ = strcmp(self,right)!=0;
    return __result141__;
}

_Bool charp_operator_not_equals(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional160;
_Bool __result142__;
_Bool _if_conditional161;
_Bool __result143__;
_Bool _if_conditional162;
_Bool __result144__;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1413 "libneo-c.c"
    # 1403 "libneo-c.c"
    if(_if_conditional160=self==((void*)0)&&right==((void*)0),    _if_conditional160) {
        # 1404 "libneo-c.c"
        __result142__ = (_Bool)0;
        return __result142__;
    }
    else {
        # 1413 "libneo-c.c"
        # 1406 "libneo-c.c"
        if(_if_conditional161=self==((void*)0),        _if_conditional161) {
            # 1407 "libneo-c.c"
            __result143__ = (_Bool)1;
            return __result143__;
        }
        else {
            # 1413 "libneo-c.c"
            # 1409 "libneo-c.c"
            if(_if_conditional162=right==((void*)0),            _if_conditional162) {
                # 1410 "libneo-c.c"
                __result144__ = (_Bool)1;
                return __result144__;
            }
        }
    }
    # 1413 "libneo-c.c"
    __result145__ = strcmp(self,right)!=0;
    return __result145__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional163;
void* right_value110;
char* __result146__;
int len_162;
void* right_value111;
char* result_163;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&len_162, 0, sizeof(int));
right_value111 = (void*)0;
memset(&result_163, 0, sizeof(char*));
    # 1422 "libneo-c.c"
    # 1419 "libneo-c.c"
    if(_if_conditional163=self==((void*)0)||right==((void*)0),    _if_conditional163) {
        # 1420 "libneo-c.c"
        __result146__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result146__;
    }
    # 1422 "libneo-c.c"
    len_162=strlen(self)+strlen(right);
    # 1424 "libneo-c.c"
    result_163=(char*)come_increment_ref_count(((char*)(right_value111=(char*)come_calloc(1, sizeof(char)*(1*(len_162+1)), "libneo-c.c", 1424, "char"))));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1426 "libneo-c.c"
    strncpy(result_163,self,len_162+1);
    # 1427 "libneo-c.c"
    strncat(result_163,right,len_162+1);
    # 1429 "libneo-c.c"
    __result147__ = __result_obj__ = result_163;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result147__;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional164;
void* right_value112;
char* __result148__;
int len_164;
void* right_value113;
char* result_165;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&len_164, 0, sizeof(int));
right_value113 = (void*)0;
memset(&result_165, 0, sizeof(char*));
    # 1437 "libneo-c.c"
    # 1434 "libneo-c.c"
    if(_if_conditional164=self==((void*)0)||right==((void*)0),    _if_conditional164) {
        # 1435 "libneo-c.c"
        __result148__ = __result_obj__ = ((char*)(right_value112=__builtin_string("")));
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result148__;
    }
    # 1437 "libneo-c.c"
    len_164=strlen(self)+strlen(right);
    # 1439 "libneo-c.c"
    result_165=(char*)come_increment_ref_count(((char*)(right_value113=(char*)come_calloc(1, sizeof(char)*(1*(len_164+1)), "libneo-c.c", 1439, "char"))));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1441 "libneo-c.c"
    strncpy(result_165,self,len_164+1);
    # 1442 "libneo-c.c"
    strncat(result_165,right,len_164+1);
    # 1444 "libneo-c.c"
    __result149__ = __result_obj__ = result_165;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result149__;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value114;
char* __result150__;
void* right_value115;
void* right_value116;
struct buffer* buf_166;
int i_167;
void* right_value117;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&buf_166, 0, sizeof(struct buffer*));
memset(&i_167, 0, sizeof(int));
right_value117 = (void*)0;
    # 1452 "libneo-c.c"
    # 1449 "libneo-c.c"
    if(_if_conditional165=self==((void*)0),    _if_conditional165) {
        # 1450 "libneo-c.c"
        __result150__ = __result_obj__ = ((char*)(right_value114=__builtin_string("")));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result150__;
    }
    # 1452 "libneo-c.c"
    buf_166=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value116=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value115=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1452, "buffer"))))))));
    come_call_finalizer3(right_value115,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value116,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1458 "libneo-c.c"
    for(    i_167=0;    i_167<right;    i_167++    ){
        # 1455 "libneo-c.c"
        buffer_append_str(buf_166,self);
    }
    # 1458 "libneo-c.c"
    __result151__ = __result_obj__ = ((char*)(right_value117=buffer_to_string(buf_166)));
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional166;
void* right_value118;
char* __result152__;
void* right_value119;
void* right_value120;
struct buffer* buf_168;
int i_169;
void* right_value121;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&buf_168, 0, sizeof(struct buffer*));
memset(&i_169, 0, sizeof(int));
right_value121 = (void*)0;
    # 1466 "libneo-c.c"
    # 1463 "libneo-c.c"
    if(_if_conditional166=self==((void*)0),    _if_conditional166) {
        # 1464 "libneo-c.c"
        __result152__ = __result_obj__ = ((char*)(right_value118=__builtin_string("")));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result152__;
    }
    # 1466 "libneo-c.c"
    buf_168=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1466, "buffer"))))))));
    come_call_finalizer3(right_value119,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value120,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1472 "libneo-c.c"
    for(    i_169=0;    i_169<right;    i_169++    ){
        # 1469 "libneo-c.c"
        buffer_append_str(buf_168,self);
    }
    # 1472 "libneo-c.c"
    __result153__ = __result_obj__ = ((char*)(right_value121=buffer_to_string(buf_168)));
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result153__;
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1480 "libneo-c.c"
    __result154__ = (int_get_hash_key(((int)value)));
    return __result154__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1485 "libneo-c.c"
    __result155__ = value;
    return __result155__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1490 "libneo-c.c"
    __result156__ = value;
    return __result156__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1495 "libneo-c.c"
    __result157__ = value;
    return __result157__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1500 "libneo-c.c"
    __result158__ = value;
    return __result158__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1505 "libneo-c.c"
    __result159__ = value;
    return __result159__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1510 "libneo-c.c"
    __result160__ = (unsigned int)value;
    return __result160__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1515 "libneo-c.c"
    __result161__ = (unsigned int)value;
    return __result161__;
}

unsigned int string_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional167;
unsigned int __result162__;
int result_170;
char* p_171;
_Bool _while_condtional7;
unsigned int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_170, 0, sizeof(int));
memset(&p_171, 0, sizeof(char*));
    # 1523 "libneo-c.c"
    # 1520 "libneo-c.c"
    if(_if_conditional167=value==((void*)0),    _if_conditional167) {
        # 1521 "libneo-c.c"
        __result162__ = 0;
        return __result162__;
    }
    # 1523 "libneo-c.c"
    result_170=0;
    # 1524 "libneo-c.c"
    p_171=value;
    # 1529 "libneo-c.c"
    while(_while_condtional7=*p_171,    _while_condtional7) {
        # 1526 "libneo-c.c"
        result_170+=(*p_171);
        # 1527 "libneo-c.c"
        p_171++;
    }
    # 1529 "libneo-c.c"
    __result163__ = result_170;
    return __result163__;
}

unsigned int charp_get_hash_key(char* value){
void* __result_obj__;
_Bool _if_conditional168;
unsigned int __result164__;
int result_172;
char* p_173;
_Bool _while_condtional8;
unsigned int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(int));
memset(&p_173, 0, sizeof(char*));
    # 1537 "libneo-c.c"
    # 1534 "libneo-c.c"
    if(_if_conditional168=value==((void*)0),    _if_conditional168) {
        # 1535 "libneo-c.c"
        __result164__ = 0;
        return __result164__;
    }
    # 1537 "libneo-c.c"
    result_172=0;
    # 1538 "libneo-c.c"
    p_173=value;
    # 1543 "libneo-c.c"
    while(_while_condtional8=*p_173,    _while_condtional8) {
        # 1540 "libneo-c.c"
        result_172+=(*p_173);
        # 1541 "libneo-c.c"
        p_173++;
    }
    # 1543 "libneo-c.c"
    __result165__ = result_172;
    return __result165__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1551 "libneo-c.c"
    __result166__ = self;
    return __result166__;
}

char char_clone(char self){
void* __result_obj__;
char __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1556 "libneo-c.c"
    __result167__ = self;
    return __result167__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1561 "libneo-c.c"
    __result168__ = self;
    return __result168__;
}

int int_clone(int self){
void* __result_obj__;
int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1566 "libneo-c.c"
    __result169__ = self;
    return __result169__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1571 "libneo-c.c"
    __result170__ = self;
    return __result170__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1576 "libneo-c.c"
    __result171__ = self;
    return __result171__;
}

double double_clone(double self){
void* __result_obj__;
double __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1581 "libneo-c.c"
    __result172__ = self;
    return __result172__;
}

float float_clone(float self){
void* __result_obj__;
float __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1586 "libneo-c.c"
    __result173__ = self;
    return __result173__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional169;
char* __result174__;
void* right_value122;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    # 1592 "libneo-c.c"
    # 1591 "libneo-c.c"
    if(_if_conditional169=self==((void*)0),    _if_conditional169) {
        # 1591 "libneo-c.c"
        __result174__ = __result_obj__ = ((void*)0);
        return __result174__;
    }
    # 1592 "libneo-c.c"
    __result175__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self)));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional170;
char* __result176__;
void* right_value123;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    # 1599 "libneo-c.c"
    # 1597 "libneo-c.c"
    if(_if_conditional170=self==((void*)0),    _if_conditional170) {
        # 1597 "libneo-c.c"
        __result176__ = __result_obj__ = ((void*)0);
        return __result176__;
    }
    # 1599 "libneo-c.c"
    __result177__ = __result_obj__ = ((char*)(right_value123=__builtin_string(self)));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result177__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_174;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(_Bool));
    # 1607 "libneo-c.c"
    result_174=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1608 "libneo-c.c"
    __result178__ = result_174;
    return __result178__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1613 "libneo-c.c"
    __result179__ = c==32||c==9;
    return __result179__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1618 "libneo-c.c"
    __result180__ = (c>=48&&c<=57);
    return __result180__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1623 "libneo-c.c"
    __result181__ = xiswalpha(c)||xiswdigit(c);
    return __result181__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_175;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(_Bool));
    # 1628 "libneo-c.c"
    result_175=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 1629 "libneo-c.c"
    __result182__ = result_175;
    return __result182__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1634 "libneo-c.c"
    __result183__ = c==32||c==9;
    return __result183__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1639 "libneo-c.c"
    __result184__ = (c>=48&&c<=57);
    return __result184__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1644 "libneo-c.c"
    __result185__ = xisalpha(c)||xisdigit(c);
    return __result185__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_176;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(_Bool));
    # 1649 "libneo-c.c"
    result_176=(c>=32&&c<=126);
    # 1650 "libneo-c.c"
    __result186__ = result_176;
    return __result186__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_177;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_177, 0, sizeof(_Bool));
    # 1655 "libneo-c.c"
    result_177=(c>=32&&c<=126);
    # 1656 "libneo-c.c"
    __result187__ = result_177;
    return __result187__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional171;
int __result188__;
int __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1667 "libneo-c.c"
    # 1664 "libneo-c.c"
    if(_if_conditional171=str==((void*)0),    _if_conditional171) {
        # 1665 "libneo-c.c"
        __result188__ = 0;
        return __result188__;
    }
    # 1667 "libneo-c.c"
    __result189__ = strlen(str);
    return __result189__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional172;
int __result190__;
int __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1674 "libneo-c.c"
    # 1671 "libneo-c.c"
    if(_if_conditional172=str==((void*)0),    _if_conditional172) {
        # 1672 "libneo-c.c"
        __result190__ = 0;
        return __result190__;
    }
    # 1674 "libneo-c.c"
    __result191__ = strlen(str);
    return __result191__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional173;
void* right_value124;
char* __result192__;
int len_178;
void* right_value125;
char* result_179;
int i_180;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&len_178, 0, sizeof(int));
right_value125 = (void*)0;
memset(&result_179, 0, sizeof(char*));
memset(&i_180, 0, sizeof(int));
    # 1682 "libneo-c.c"
    # 1679 "libneo-c.c"
    if(_if_conditional173=str==((void*)0),    _if_conditional173) {
        # 1680 "libneo-c.c"
        __result192__ = __result_obj__ = ((char*)(right_value124=__builtin_string("")));
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result192__;
    }
    # 1682 "libneo-c.c"
    len_178=strlen(str);
    # 1683 "libneo-c.c"
    result_179=(char*)come_increment_ref_count(((char*)(right_value125=(char*)come_calloc(1, sizeof(char)*(1*(len_178+1)), "libneo-c.c", 1683, "char"))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1689 "libneo-c.c"
    for(    i_180=0;    i_180<len_178;    i_180++    ){
        # 1686 "libneo-c.c"
        result_179[i_180]=str[len_178-i_180-1];
    }
    # 1689 "libneo-c.c"
    result_179[len_178]=0;
    # 1691 "libneo-c.c"
    __result193__ = __result_obj__ = result_179;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result193__;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional174;
void* right_value126;
char* __result194__;
int len_181;
void* right_value127;
char* result_182;
int i_183;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&len_181, 0, sizeof(int));
right_value127 = (void*)0;
memset(&result_182, 0, sizeof(char*));
memset(&i_183, 0, sizeof(int));
    # 1699 "libneo-c.c"
    # 1696 "libneo-c.c"
    if(_if_conditional174=str==((void*)0),    _if_conditional174) {
        # 1697 "libneo-c.c"
        __result194__ = __result_obj__ = ((char*)(right_value126=__builtin_string("")));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result194__;
    }
    # 1699 "libneo-c.c"
    len_181=strlen(str);
    # 1700 "libneo-c.c"
    result_182=(char*)come_increment_ref_count(((char*)(right_value127=(char*)come_calloc(1, sizeof(char)*(1*(len_181+1)), "libneo-c.c", 1700, "char"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1706 "libneo-c.c"
    for(    i_183=0;    i_183<len_181;    i_183++    ){
        # 1703 "libneo-c.c"
        result_182[i_183]=str[len_181-i_183-1];
    }
    # 1706 "libneo-c.c"
    result_182[len_181]=0;
    # 1708 "libneo-c.c"
    __result195__ = __result_obj__ = result_182;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result195__;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value128;
char* __result196__;
int len_184;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value129;
void* right_value130;
char* __result197__;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value131;
char* __result198__;
_Bool _if_conditional182;
void* right_value132;
char* __result199__;
void* right_value133;
char* result_185;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&len_184, 0, sizeof(int));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&result_185, 0, sizeof(char*));
    # 1716 "libneo-c.c"
    # 1712 "libneo-c.c"
    if(_if_conditional175=str==((void*)0),    _if_conditional175) {
        # 1713 "libneo-c.c"
        __result196__ = __result_obj__ = ((char*)(right_value128=__builtin_string("")));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result196__;
    }
    # 1716 "libneo-c.c"
    len_184=strlen(str);
    # 1721 "libneo-c.c"
    # 1718 "libneo-c.c"
    if(_if_conditional176=head<0,    _if_conditional176) {
        # 1719 "libneo-c.c"
        head+=len_184;
    }
    # 1725 "libneo-c.c"
    # 1721 "libneo-c.c"
    if(_if_conditional177=tail<0,    _if_conditional177) {
        # 1722 "libneo-c.c"
        tail+=len_184+1;
    }
    # 1729 "libneo-c.c"
    # 1725 "libneo-c.c"
    if(_if_conditional178=head>tail,    _if_conditional178) {
        # 1726 "libneo-c.c"
        __result197__ = __result_obj__ = ((char*)(right_value130=string_reverse(((char*)(right_value129=charp_substring(str,tail,head))))));
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result197__;
    }
    # 1733 "libneo-c.c"
    # 1729 "libneo-c.c"
    if(_if_conditional179=head<0,    _if_conditional179) {
        # 1730 "libneo-c.c"
        head=0;
    }
    # 1737 "libneo-c.c"
    # 1733 "libneo-c.c"
    if(_if_conditional180=tail>=len_184,    _if_conditional180) {
        # 1734 "libneo-c.c"
        tail=len_184;
    }
    # 1741 "libneo-c.c"
    # 1737 "libneo-c.c"
    if(_if_conditional181=head==tail,    _if_conditional181) {
        # 1738 "libneo-c.c"
        __result198__ = __result_obj__ = ((char*)(right_value131=__builtin_string("")));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result198__;
    }
    # 1745 "libneo-c.c"
    # 1741 "libneo-c.c"
    if(_if_conditional182=tail-head+1<1,    _if_conditional182) {
        # 1742 "libneo-c.c"
        __result199__ = __result_obj__ = ((char*)(right_value132=__builtin_string("")));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    # 1745 "libneo-c.c"
    result_185=(char*)come_increment_ref_count(((char*)(right_value133=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1745, "char"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1747 "libneo-c.c"
    memcpy(result_185,str+head,tail-head);
    # 1748 "libneo-c.c"
    result_185[tail-head]=0;
    # 1750 "libneo-c.c"
    __result200__ = __result_obj__ = result_185;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result200__;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional183;
void* right_value134;
char* __result201__;
int len_186;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value135;
void* right_value136;
char* __result202__;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value137;
char* __result203__;
_Bool _if_conditional190;
void* right_value138;
char* __result204__;
void* right_value139;
char* result_187;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&len_186, 0, sizeof(int));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_187, 0, sizeof(char*));
    # 1759 "libneo-c.c"
    # 1755 "libneo-c.c"
    if(_if_conditional183=str==((void*)0),    _if_conditional183) {
        # 1756 "libneo-c.c"
        __result201__ = __result_obj__ = ((char*)(right_value134=__builtin_string("")));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result201__;
    }
    # 1759 "libneo-c.c"
    len_186=strlen(str);
    # 1764 "libneo-c.c"
    # 1761 "libneo-c.c"
    if(_if_conditional184=head<0,    _if_conditional184) {
        # 1762 "libneo-c.c"
        head+=len_186;
    }
    # 1768 "libneo-c.c"
    # 1764 "libneo-c.c"
    if(_if_conditional185=tail<0,    _if_conditional185) {
        # 1765 "libneo-c.c"
        tail+=len_186+1;
    }
    # 1772 "libneo-c.c"
    # 1768 "libneo-c.c"
    if(_if_conditional186=head>tail,    _if_conditional186) {
        # 1769 "libneo-c.c"
        __result202__ = __result_obj__ = ((char*)(right_value136=string_reverse(((char*)(right_value135=charp_substring(str,tail,head))))));
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result202__;
    }
    # 1776 "libneo-c.c"
    # 1772 "libneo-c.c"
    if(_if_conditional187=head<0,    _if_conditional187) {
        # 1773 "libneo-c.c"
        head=0;
    }
    # 1780 "libneo-c.c"
    # 1776 "libneo-c.c"
    if(_if_conditional188=tail>=len_186,    _if_conditional188) {
        # 1777 "libneo-c.c"
        tail=len_186;
    }
    # 1784 "libneo-c.c"
    # 1780 "libneo-c.c"
    if(_if_conditional189=head==tail,    _if_conditional189) {
        # 1781 "libneo-c.c"
        __result203__ = __result_obj__ = ((char*)(right_value137=__builtin_string("")));
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result203__;
    }
    # 1788 "libneo-c.c"
    # 1784 "libneo-c.c"
    if(_if_conditional190=tail-head+1<1,    _if_conditional190) {
        # 1785 "libneo-c.c"
        __result204__ = __result_obj__ = ((char*)(right_value138=__builtin_string("")));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    # 1788 "libneo-c.c"
    result_187=(char*)come_increment_ref_count(((char*)(right_value139=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1788, "char"))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1790 "libneo-c.c"
    memcpy(result_187,str+head,tail-head);
    # 1791 "libneo-c.c"
    result_187[tail-head]=0;
    # 1793 "libneo-c.c"
    __result205__ = __result_obj__ = result_187;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result205__;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional191;
void* right_value140;
char* __result206__;
int len_188;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value141;
void* right_value142;
char* __result207__;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value143;
char* __result208__;
_Bool _if_conditional198;
void* right_value144;
char* __result209__;
void* right_value145;
char* result_189;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&len_188, 0, sizeof(int));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_189, 0, sizeof(char*));
    # 1802 "libneo-c.c"
    # 1798 "libneo-c.c"
    if(_if_conditional191=str==((void*)0),    _if_conditional191) {
        # 1799 "libneo-c.c"
        __result206__ = __result_obj__ = ((char*)(right_value140=__builtin_string("")));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result206__;
    }
    # 1802 "libneo-c.c"
    len_188=strlen(str);
    # 1807 "libneo-c.c"
    # 1804 "libneo-c.c"
    if(_if_conditional192=head<0,    _if_conditional192) {
        # 1805 "libneo-c.c"
        head+=len_188;
    }
    # 1811 "libneo-c.c"
    # 1807 "libneo-c.c"
    if(_if_conditional193=tail<0,    _if_conditional193) {
        # 1808 "libneo-c.c"
        tail+=len_188+1;
    }
    # 1815 "libneo-c.c"
    # 1811 "libneo-c.c"
    if(_if_conditional194=head>tail,    _if_conditional194) {
        # 1812 "libneo-c.c"
        __result207__ = __result_obj__ = ((char*)(right_value142=string_reverse(((char*)(right_value141=charp_substring(str,tail,head))))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    # 1819 "libneo-c.c"
    # 1815 "libneo-c.c"
    if(_if_conditional195=head<0,    _if_conditional195) {
        # 1816 "libneo-c.c"
        head=0;
    }
    # 1823 "libneo-c.c"
    # 1819 "libneo-c.c"
    if(_if_conditional196=tail>=len_188,    _if_conditional196) {
        # 1820 "libneo-c.c"
        tail=len_188;
    }
    # 1827 "libneo-c.c"
    # 1823 "libneo-c.c"
    if(_if_conditional197=head==tail,    _if_conditional197) {
        # 1824 "libneo-c.c"
        __result208__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result208__;
    }
    # 1831 "libneo-c.c"
    # 1827 "libneo-c.c"
    if(_if_conditional198=tail-head+1<1,    _if_conditional198) {
        # 1828 "libneo-c.c"
        __result209__ = __result_obj__ = ((char*)(right_value144=__builtin_string("")));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    # 1831 "libneo-c.c"
    result_189=(char*)come_increment_ref_count(((char*)(right_value145=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1831, "char"))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1833 "libneo-c.c"
    memcpy(result_189,str+head,tail-head);
    # 1834 "libneo-c.c"
    result_189[tail-head]=0;
    # 1836 "libneo-c.c"
    __result210__ = __result_obj__ = result_189;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result210__;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional199;
void* right_value146;
char* __result211__;
int len_190;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value147;
void* right_value148;
char* __result212__;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value149;
char* __result213__;
_Bool _if_conditional206;
void* right_value150;
char* __result214__;
void* right_value151;
char* result_191;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&len_190, 0, sizeof(int));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_191, 0, sizeof(char*));
    # 1845 "libneo-c.c"
    # 1841 "libneo-c.c"
    if(_if_conditional199=str==((void*)0),    _if_conditional199) {
        # 1842 "libneo-c.c"
        __result211__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result211__;
    }
    # 1845 "libneo-c.c"
    len_190=strlen(str);
    # 1850 "libneo-c.c"
    # 1847 "libneo-c.c"
    if(_if_conditional200=head<0,    _if_conditional200) {
        # 1848 "libneo-c.c"
        head+=len_190;
    }
    # 1854 "libneo-c.c"
    # 1850 "libneo-c.c"
    if(_if_conditional201=tail<0,    _if_conditional201) {
        # 1851 "libneo-c.c"
        tail+=len_190+1;
    }
    # 1858 "libneo-c.c"
    # 1854 "libneo-c.c"
    if(_if_conditional202=head>tail,    _if_conditional202) {
        # 1855 "libneo-c.c"
        __result212__ = __result_obj__ = ((char*)(right_value148=string_reverse(((char*)(right_value147=charp_substring(str,tail,head))))));
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result212__;
    }
    # 1862 "libneo-c.c"
    # 1858 "libneo-c.c"
    if(_if_conditional203=head<0,    _if_conditional203) {
        # 1859 "libneo-c.c"
        head=0;
    }
    # 1866 "libneo-c.c"
    # 1862 "libneo-c.c"
    if(_if_conditional204=tail>=len_190,    _if_conditional204) {
        # 1863 "libneo-c.c"
        tail=len_190;
    }
    # 1870 "libneo-c.c"
    # 1866 "libneo-c.c"
    if(_if_conditional205=head==tail,    _if_conditional205) {
        # 1867 "libneo-c.c"
        __result213__ = __result_obj__ = ((char*)(right_value149=__builtin_string("")));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result213__;
    }
    # 1874 "libneo-c.c"
    # 1870 "libneo-c.c"
    if(_if_conditional206=tail-head+1<1,    _if_conditional206) {
        # 1871 "libneo-c.c"
        __result214__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result214__;
    }
    # 1874 "libneo-c.c"
    result_191=(char*)come_increment_ref_count(((char*)(right_value151=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1874, "char"))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1876 "libneo-c.c"
    memcpy(result_191,str+head,tail-head);
    # 1877 "libneo-c.c"
    result_191[tail-head]=0;
    # 1879 "libneo-c.c"
    __result215__ = __result_obj__ = result_191;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result215__;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional207;
void* right_value152;
char* __result216__;
va_list args_192;
char* result_193;
int len_194;
_Bool _if_conditional208;
void* right_value153;
char* __result217__;
void* right_value154;
char* result2_195;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&args_192, 0, sizeof(va_list));
memset(&result_193, 0, sizeof(char*));
memset(&len_194, 0, sizeof(int));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&result2_195, 0, sizeof(char*));
    # 1887 "libneo-c.c"
    # 1884 "libneo-c.c"
    if(_if_conditional207=msg==((void*)0),    _if_conditional207) {
        # 1885 "libneo-c.c"
        __result216__ = __result_obj__ = ((char*)(right_value152=__builtin_string("")));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result216__;
    }
    # 1887 "libneo-c.c"
    # 1888 "libneo-c.c"
    __builtin_va_start(args_192,msg);
    # 1889 "libneo-c.c"
    # 1890 "libneo-c.c"
    len_194=vasprintf(&result_193,msg,args_192);
    # 1891 "libneo-c.c"
    __builtin_va_end(args_192);
    # 1897 "libneo-c.c"
    # 1893 "libneo-c.c"
    if(_if_conditional208=len_194<0,    _if_conditional208) {
        # 1894 "libneo-c.c"
        __result217__ = __result_obj__ = ((char*)(right_value153=__builtin_string("")));
        come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result217__;
    }
    # 1897 "libneo-c.c"
    result2_195=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(result_193))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1899 "libneo-c.c"
    free(result_193);
    # 1901 "libneo-c.c"
    __result218__ = __result_obj__ = result2_195;
    come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_195 = come_decrement_ref_count2(result2_195, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result218__;
    come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_195 = come_decrement_ref_count2(result2_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional209;
void* right_value155;
char* __result219__;
int len_196;
_Bool _if_conditional210;
void* right_value156;
char* __result220__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value157;
char* __result221__;
_Bool _if_conditional215;
void* right_value158;
char* sub_str_197;
void* right_value159;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&len_196, 0, sizeof(int));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&sub_str_197, 0, sizeof(char*));
right_value159 = (void*)0;
    # 1910 "libneo-c.c"
    # 1906 "libneo-c.c"
    if(_if_conditional209=str==((void*)0),    _if_conditional209) {
        # 1907 "libneo-c.c"
        __result219__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result219__;
    }
    # 1910 "libneo-c.c"
    len_196=strlen(str);
    # 1916 "libneo-c.c"
    # 1912 "libneo-c.c"
    if(_if_conditional210=strcmp(str,"")==0,    _if_conditional210) {
        # 1913 "libneo-c.c"
        __result220__ = __result_obj__ = ((char*)(right_value156=__builtin_string(str)));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result220__;
    }
    # 1920 "libneo-c.c"
    # 1916 "libneo-c.c"
    if(_if_conditional211=head<0,    _if_conditional211) {
        # 1917 "libneo-c.c"
        head+=len_196;
    }
    # 1924 "libneo-c.c"
    # 1920 "libneo-c.c"
    if(_if_conditional212=tail<0,    _if_conditional212) {
        # 1921 "libneo-c.c"
        tail+=len_196+1;
    }
    # 1928 "libneo-c.c"
    # 1924 "libneo-c.c"
    if(_if_conditional213=head<0,    _if_conditional213) {
        # 1925 "libneo-c.c"
        head=0;
    }
    # 1932 "libneo-c.c"
    # 1928 "libneo-c.c"
    if(_if_conditional214=tail<0,    _if_conditional214) {
        # 1929 "libneo-c.c"
        __result221__ = __result_obj__ = ((char*)(right_value157=__builtin_string(str)));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result221__;
    }
    # 1936 "libneo-c.c"
    # 1932 "libneo-c.c"
    if(_if_conditional215=tail>=len_196,    _if_conditional215) {
        # 1933 "libneo-c.c"
        tail=len_196;
    }
    # 1936 "libneo-c.c"
    sub_str_197=(char*)come_increment_ref_count(((char*)(right_value158=charp_substring(str,tail,-1))));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1938 "libneo-c.c"
    memcpy(str+head,sub_str_197,string_length(sub_str_197)+1);
    # 1940 "libneo-c.c"
    __result222__ = __result_obj__ = ((char*)(right_value159=__builtin_string(str)));
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result222__;
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional216;
void* right_value160;
char* __result223__;
int len_198;
_Bool _if_conditional217;
void* right_value161;
char* __result224__;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value162;
char* __result225__;
_Bool _if_conditional222;
void* right_value163;
char* sub_str_199;
void* right_value164;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&len_198, 0, sizeof(int));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&sub_str_199, 0, sizeof(char*));
right_value164 = (void*)0;
    # 1949 "libneo-c.c"
    # 1945 "libneo-c.c"
    if(_if_conditional216=str==((void*)0),    _if_conditional216) {
        # 1946 "libneo-c.c"
        __result223__ = __result_obj__ = ((char*)(right_value160=__builtin_string("")));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result223__;
    }
    # 1949 "libneo-c.c"
    len_198=strlen(str);
    # 1955 "libneo-c.c"
    # 1951 "libneo-c.c"
    if(_if_conditional217=strcmp(str,"")==0,    _if_conditional217) {
        # 1952 "libneo-c.c"
        __result224__ = __result_obj__ = ((char*)(right_value161=__builtin_string(str)));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result224__;
    }
    # 1959 "libneo-c.c"
    # 1955 "libneo-c.c"
    if(_if_conditional218=head<0,    _if_conditional218) {
        # 1956 "libneo-c.c"
        head+=len_198;
    }
    # 1963 "libneo-c.c"
    # 1959 "libneo-c.c"
    if(_if_conditional219=tail<0,    _if_conditional219) {
        # 1960 "libneo-c.c"
        tail+=len_198+1;
    }
    # 1967 "libneo-c.c"
    # 1963 "libneo-c.c"
    if(_if_conditional220=head<0,    _if_conditional220) {
        # 1964 "libneo-c.c"
        head=0;
    }
    # 1971 "libneo-c.c"
    # 1967 "libneo-c.c"
    if(_if_conditional221=tail<0,    _if_conditional221) {
        # 1968 "libneo-c.c"
        __result225__ = __result_obj__ = ((char*)(right_value162=__builtin_string(str)));
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result225__;
    }
    # 1975 "libneo-c.c"
    # 1971 "libneo-c.c"
    if(_if_conditional222=tail>=len_198,    _if_conditional222) {
        # 1972 "libneo-c.c"
        tail=len_198;
    }
    # 1975 "libneo-c.c"
    sub_str_199=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(str,tail,-1))));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1977 "libneo-c.c"
    memcpy(str+head,sub_str_199,string_length(sub_str_199)+1);
    # 1979 "libneo-c.c"
    __result226__ = __result_obj__ = ((char*)(right_value164=__builtin_string(str)));
    sub_str_199 = come_decrement_ref_count2(sub_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result226__;
    sub_str_199 = come_decrement_ref_count2(sub_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional223;
void* right_value165;
void* right_value166;
struct list$1charph* __result228__;
void* right_value167;
void* right_value168;
struct list$1charph* result_202;
void* right_value169;
void* right_value170;
struct buffer* str_203;
int i_204;
_Bool _if_conditional225;
void* right_value174;
_Bool _if_conditional228;
void* right_value175;
struct list$1charph* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&result_202, 0, sizeof(struct list$1charph*));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&str_203, 0, sizeof(struct buffer*));
memset(&i_204, 0, sizeof(int));
right_value174 = (void*)0;
right_value175 = (void*)0;
    # 1988 "libneo-c.c"
    # 1984 "libneo-c.c"
    if(_if_conditional223=self==((void*)0),    _if_conditional223) {
        # 1985 "libneo-c.c"
        __result228__ = __result_obj__ = ((struct list$1charph*)(right_value166=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1985, "list$1charph")))))));
        come_call_finalizer3(right_value165,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value166,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result228__;
    }
    # 1988 "libneo-c.c"
    result_202=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value168=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1988, "list$1charph"))))))));
    come_call_finalizer3(right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value168,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1990 "libneo-c.c"
    str_203=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1990, "buffer"))))))));
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2001 "libneo-c.c"
    for(    i_204=0;    i_204<charp_length(self);    i_204++    ){
        # 2000 "libneo-c.c"
        # 1993 "libneo-c.c"
        if(_if_conditional225=self[i_204]==c,        _if_conditional225) {
            # 1994 "libneo-c.c"
            list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(str_203->buf)))));
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1995 "libneo-c.c"
            buffer_reset(str_203);
        }
        else {
            # 1998 "libneo-c.c"
            buffer_append_char(str_203,self[i_204]);
        }
    }
    # 2005 "libneo-c.c"
    # 2001 "libneo-c.c"
    if(_if_conditional228=buffer_length(str_203)!=0,    _if_conditional228) {
        # 2002 "libneo-c.c"
        list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string(str_203->buf)))));
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 2005 "libneo-c.c"
    __result230__ = __result_obj__ = result_202;
    come_call_finalizer3(result_202,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result230__;
    come_call_finalizer3(result_202,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(str_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result227__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result227__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_200;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_200, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_201, 0, sizeof(struct list_item$1charph*));
                # 114 "./neo-c.h"
                it_200=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional9=it_200!=((void*)0),                _while_condtional9) {
                    # 116 "./neo-c.h"
                    prev_it_201=it_200;
                    # 117 "./neo-c.h"
                    it_200=it_200->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_201,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1charphp_finalize"
                        # 0 "list_item$1charphp_finalize"
                        if(_if_conditional224=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional224) {
                            # 0 "list_item$1charphp_finalize"
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional226;
void* right_value171;
struct list_item$1charph* litem_205;
char* __dec_obj22;
_Bool _if_conditional227;
void* right_value172;
struct list_item$1charph* litem_206;
char* __dec_obj23;
void* right_value173;
struct list_item$1charph* litem_207;
char* __dec_obj24;
struct list$1charph* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&litem_205, 0, sizeof(struct list_item$1charph*));
right_value172 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1charph*));
right_value173 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1charph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional226=self->len==0,                _if_conditional226) {
                    # 217 "./neo-c.h"
                    litem_205=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value171,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_205->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_205->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj22=litem_205->item;
                    litem_205->item=(char*)come_increment_ref_count(item);
                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_205;
                    # 224 "./neo-c.h"
                    self->head=litem_205;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional227=self->len==1,                    _if_conditional227) {
                        # 227 "./neo-c.h"
                        litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value172,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_206->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_206->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj23=litem_206->item;
                        litem_206->item=(char*)come_increment_ref_count(item);
                        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_206;
                        # 234 "./neo-c.h"
                        self->head->next=litem_206;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_207=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value173,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_207->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_207->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj24=litem_207->item;
                        litem_207->item=(char*)come_increment_ref_count(item);
                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_207;
                        # 244 "./neo-c.h"
                        self->tail=litem_207;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result229__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result229__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
_Bool _if_conditional229;
void* right_value176;
void* right_value177;
struct list$1charph* __result231__;
void* right_value178;
void* right_value179;
struct list$1charph* result_208;
void* right_value180;
void* right_value181;
struct buffer* str_209;
int i_210;
_Bool _if_conditional230;
void* right_value182;
_Bool _if_conditional231;
void* right_value183;
struct list$1charph* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&result_208, 0, sizeof(struct list$1charph*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&str_209, 0, sizeof(struct buffer*));
memset(&i_210, 0, sizeof(int));
right_value182 = (void*)0;
right_value183 = (void*)0;
    # 2014 "libneo-c.c"
    # 2010 "libneo-c.c"
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        # 2011 "libneo-c.c"
        __result231__ = __result_obj__ = ((struct list$1charph*)(right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2011, "list$1charph")))))));
        come_call_finalizer3(right_value176,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result231__;
    }
    # 2014 "libneo-c.c"
    result_208=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value179=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value178=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2014, "list$1charph"))))))));
    come_call_finalizer3(right_value178,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2016 "libneo-c.c"
    str_209=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2016, "buffer"))))))));
    come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2027 "libneo-c.c"
    for(    i_210=0;    i_210<charp_length(self);    i_210++    ){
        # 2026 "libneo-c.c"
        # 2019 "libneo-c.c"
        if(_if_conditional230=self[i_210]==c,        _if_conditional230) {
            # 2020 "libneo-c.c"
            list$1charph_push_back(result_208,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(str_209->buf)))));
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 2021 "libneo-c.c"
            buffer_reset(str_209);
        }
        else {
            # 2024 "libneo-c.c"
            buffer_append_char(str_209,self[i_210]);
        }
    }
    # 2031 "libneo-c.c"
    # 2027 "libneo-c.c"
    if(_if_conditional231=buffer_length(str_209)!=0,    _if_conditional231) {
        # 2028 "libneo-c.c"
        list$1charph_push_back(result_208,(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(str_209->buf)))));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 2031 "libneo-c.c"
    __result232__ = __result_obj__ = result_208;
    come_call_finalizer3(result_208,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result232__;
    come_call_finalizer3(result_208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(str_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* xbasename(char* path){
void* __result_obj__;
_Bool _if_conditional232;
void* right_value184;
char* __result233__;
char* p_211;
_Bool _while_condtional10;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value185;
char* __result234__;
void* right_value186;
char* __result235__;
void* right_value187;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&p_211, 0, sizeof(char*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    # 2042 "libneo-c.c"
    # 2039 "libneo-c.c"
    if(_if_conditional232=path==((void*)0),    _if_conditional232) {
        # 2040 "libneo-c.c"
        __result233__ = __result_obj__ = ((char*)(right_value184=__builtin_string("")));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result233__;
    }
    # 2042 "libneo-c.c"
    p_211=path+strlen(path);
    # 2053 "libneo-c.c"
    while(_while_condtional10=p_211>=path,    _while_condtional10) {
        # 2051 "libneo-c.c"
        # 2045 "libneo-c.c"
        if(_if_conditional233=*p_211==47,        _if_conditional233) {
            # 2046 "libneo-c.c"
            break;
        }
        else {
            # 2049 "libneo-c.c"
            p_211--;
        }
    }
    # 2060 "libneo-c.c"
    # 2053 "libneo-c.c"
    if(_if_conditional234=p_211<path,    _if_conditional234) {
        # 2054 "libneo-c.c"
        __result234__ = __result_obj__ = ((char*)(right_value185=__builtin_string(path)));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result234__;
    }
    else {
        # 2057 "libneo-c.c"
        __result235__ = __result_obj__ = ((char*)(right_value186=__builtin_string(p_211+1)));
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result235__;
    }
    # 2060 "libneo-c.c"
    __result236__ = __result_obj__ = ((char*)(right_value187=__builtin_string("")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result236__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional235;
void* right_value188;
char* __result237__;
void* right_value189;
void* right_value190;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
    # 2068 "libneo-c.c"
    # 2065 "libneo-c.c"
    if(_if_conditional235=path==((void*)0),    _if_conditional235) {
        # 2066 "libneo-c.c"
        __result237__ = __result_obj__ = ((char*)(right_value188=__builtin_string("")));
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result237__;
    }
    # 2068 "libneo-c.c"
    __result238__ = __result_obj__ = ((char*)(right_value190=__builtin_string(dirname(((char*)(right_value189=__builtin_string(path)))))));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result238__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional236;
void* right_value191;
char* __result239__;
void* right_value192;
char* path2_212;
char* p_213;
_Bool _while_condtional11;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value193;
char* __result240__;
void* right_value194;
char* __result241__;
void* right_value195;
char* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&path2_212, 0, sizeof(char*));
memset(&p_213, 0, sizeof(char*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
    # 2076 "libneo-c.c"
    # 2073 "libneo-c.c"
    if(_if_conditional236=path==((void*)0),    _if_conditional236) {
        # 2074 "libneo-c.c"
        __result239__ = __result_obj__ = ((char*)(right_value191=__builtin_string("")));
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result239__;
    }
    # 2076 "libneo-c.c"
    path2_212=(char*)come_increment_ref_count(((char*)(right_value192=xbasename(path))));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2078 "libneo-c.c"
    p_213=path2_212+strlen(path2_212);
    # 2089 "libneo-c.c"
    while(_while_condtional11=p_213>=path2_212,    _while_condtional11) {
        # 2087 "libneo-c.c"
        # 2081 "libneo-c.c"
        if(_if_conditional237=*p_213==46,        _if_conditional237) {
            # 2082 "libneo-c.c"
            break;
        }
        else {
            # 2085 "libneo-c.c"
            p_213--;
        }
    }
    # 2096 "libneo-c.c"
    # 2089 "libneo-c.c"
    if(_if_conditional238=p_213<path2_212,    _if_conditional238) {
        # 2090 "libneo-c.c"
        __result240__ = __result_obj__ = ((char*)(right_value193=__builtin_string(path2_212)));
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result240__;
    }
    else {
        # 2093 "libneo-c.c"
        __result241__ = __result_obj__ = ((char*)(right_value194=string_substring(path2_212,0,p_213-path2_212)));
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result241__;
    }
    # 2096 "libneo-c.c"
    __result242__ = __result_obj__ = ((char*)(right_value195=__builtin_string("")));
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result242__;
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional239;
void* right_value196;
char* __result243__;
char* p_214;
_Bool _while_condtional12;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value197;
char* __result244__;
void* right_value198;
char* __result245__;
void* right_value199;
char* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&p_214, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
    # 2104 "libneo-c.c"
    # 2101 "libneo-c.c"
    if(_if_conditional239=path==((void*)0),    _if_conditional239) {
        # 2102 "libneo-c.c"
        __result243__ = __result_obj__ = ((char*)(right_value196=__builtin_string("")));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result243__;
    }
    # 2104 "libneo-c.c"
    p_214=path+strlen(path);
    # 2115 "libneo-c.c"
    while(_while_condtional12=p_214>=path,    _while_condtional12) {
        # 2113 "libneo-c.c"
        # 2107 "libneo-c.c"
        if(_if_conditional240=*p_214==46,        _if_conditional240) {
            # 2108 "libneo-c.c"
            break;
        }
        else {
            # 2111 "libneo-c.c"
            p_214--;
        }
    }
    # 2122 "libneo-c.c"
    # 2115 "libneo-c.c"
    if(_if_conditional241=p_214<path,    _if_conditional241) {
        # 2116 "libneo-c.c"
        __result244__ = __result_obj__ = ((char*)(right_value197=__builtin_string(path)));
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result244__;
    }
    else {
        # 2119 "libneo-c.c"
        __result245__ = __result_obj__ = ((char*)(right_value198=__builtin_string(p_214+1)));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result245__;
    }
    # 2122 "libneo-c.c"
    __result246__ = __result_obj__ = ((char*)(right_value199=__builtin_string("")));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result246__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional242;
void* right_value200;
char* __result247__;
char* result_215;
void* right_value201;
char* result2_216;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
memset(&result_215, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&result2_216, 0, sizeof(char*));
    # 2130 "libneo-c.c"
    # 2127 "libneo-c.c"
    if(_if_conditional242=path==((void*)0),    _if_conditional242) {
        # 2128 "libneo-c.c"
        __result247__ = __result_obj__ = ((char*)(right_value200=__builtin_string("")));
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result247__;
    }
    # 2130 "libneo-c.c"
    result_215=realpath(path,((void*)0));
    # 2132 "libneo-c.c"
    result2_216=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(result_215))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2134 "libneo-c.c"
    free(result_215);
    # 2136 "libneo-c.c"
    __result248__ = __result_obj__ = result2_216;
    result2_216 = come_decrement_ref_count2(result2_216, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result248__;
    result2_216 = come_decrement_ref_count2(result2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional243;
void* right_value202;
char* __result249__;
void* right_value203;
char* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
    # 2150 "libneo-c.c"
    # 2144 "libneo-c.c"
    if(self) {
        # 2145 "libneo-c.c"
        __result249__ = __result_obj__ = ((char*)(right_value202=__builtin_string("true")));
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result249__;
    }
    else {
        # 2148 "libneo-c.c"
        __result250__ = __result_obj__ = ((char*)(right_value203=__builtin_string("false")));
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result250__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
void* right_value204;
char* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    # 2154 "libneo-c.c"
    __result251__ = __result_obj__ = ((char*)(right_value204=xsprintf("%c",self)));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result251__;
}

char* short_to_string(short short self){
void* __result_obj__;
void* right_value205;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    # 2159 "libneo-c.c"
    __result252__ = __result_obj__ = ((char*)(right_value205=xsprintf("%d",self)));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

char* int_to_string(int self){
void* __result_obj__;
void* right_value206;
char* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    # 2164 "libneo-c.c"
    __result253__ = __result_obj__ = ((char*)(right_value206=xsprintf("%d",self)));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result253__;
}

char* long_to_string(long self){
void* __result_obj__;
void* right_value207;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    # 2169 "libneo-c.c"
    __result254__ = __result_obj__ = ((char*)(right_value207=xsprintf("%ld",self)));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result254__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
void* right_value208;
char* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
    # 2174 "libneo-c.c"
    __result255__ = __result_obj__ = ((char*)(right_value208=xsprintf("%ld",self)));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result255__;
}

char* float_to_string(float self){
void* __result_obj__;
void* right_value209;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    # 2179 "libneo-c.c"
    __result256__ = __result_obj__ = ((char*)(right_value209=xsprintf("%f",self)));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result256__;
}

char* double_to_string(double self){
void* __result_obj__;
void* right_value210;
char* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
    # 2184 "libneo-c.c"
    __result257__ = __result_obj__ = ((char*)(right_value210=xsprintf("%lf",self)));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result257__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional244;
void* right_value211;
char* __result258__;
void* right_value212;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
right_value212 = (void*)0;
    # 2192 "libneo-c.c"
    # 2189 "libneo-c.c"
    if(_if_conditional244=self==((void*)0),    _if_conditional244) {
        # 2190 "libneo-c.c"
        __result258__ = __result_obj__ = ((char*)(right_value211=__builtin_string("")));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result258__;
    }
    # 2192 "libneo-c.c"
    __result259__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self)));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result259__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional245;
void* right_value213;
char* __result260__;
void* right_value214;
char* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
right_value214 = (void*)0;
    # 2200 "libneo-c.c"
    # 2197 "libneo-c.c"
    if(_if_conditional245=self==((void*)0),    _if_conditional245) {
        # 2198 "libneo-c.c"
        __result260__ = __result_obj__ = ((char*)(right_value213=__builtin_string("")));
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result260__;
    }
    # 2200 "libneo-c.c"
    __result261__ = __result_obj__ = ((char*)(right_value214=__builtin_string(self)));
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result261__;
}

int bool_compare(_Bool left, _Bool right){
void* __result_obj__;
_Bool _if_conditional246;
int __result262__;
_Bool _if_conditional247;
int __result263__;
_Bool _if_conditional248;
int __result264__;
int __result265__;
int __result266__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2221 "libneo-c.c"
    # 2208 "libneo-c.c"
    if(_if_conditional246=!left&&right,    _if_conditional246) {
        # 2209 "libneo-c.c"
        __result262__ = -1;
        return __result262__;
    }
    else {
        # 2221 "libneo-c.c"
        # 2211 "libneo-c.c"
        if(_if_conditional247=left&&right,        _if_conditional247) {
            # 2212 "libneo-c.c"
            __result263__ = 0;
            return __result263__;
        }
        else {
            # 2221 "libneo-c.c"
            # 2214 "libneo-c.c"
            if(_if_conditional248=!left&&!right,            _if_conditional248) {
                # 2215 "libneo-c.c"
                __result264__ = 0;
                return __result264__;
            }
            else {
                # 2218 "libneo-c.c"
                __result265__ = 1;
                return __result265__;
            }
        }
    }
    # 2221 "libneo-c.c"
    __result266__ = 0;
    return __result266__;
}

int char_compare(char left, char right){
void* __result_obj__;
_Bool _if_conditional249;
int __result267__;
_Bool _if_conditional250;
int __result268__;
int __result269__;
int __result270__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2236 "libneo-c.c"
    # 2226 "libneo-c.c"
    if(_if_conditional249=left<right,    _if_conditional249) {
        # 2227 "libneo-c.c"
        __result267__ = -1;
        return __result267__;
    }
    else {
        # 2236 "libneo-c.c"
        # 2229 "libneo-c.c"
        if(_if_conditional250=left>right,        _if_conditional250) {
            # 2230 "libneo-c.c"
            __result268__ = 1;
            return __result268__;
        }
        else {
            # 2233 "libneo-c.c"
            __result269__ = 0;
            return __result269__;
        }
    }
    # 2236 "libneo-c.c"
    __result270__ = 0;
    return __result270__;
}

int short_compare(short short left, short short right){
void* __result_obj__;
_Bool _if_conditional251;
int __result271__;
_Bool _if_conditional252;
int __result272__;
int __result273__;
int __result274__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2251 "libneo-c.c"
    # 2241 "libneo-c.c"
    if(_if_conditional251=left<right,    _if_conditional251) {
        # 2242 "libneo-c.c"
        __result271__ = -1;
        return __result271__;
    }
    else {
        # 2251 "libneo-c.c"
        # 2244 "libneo-c.c"
        if(_if_conditional252=left>right,        _if_conditional252) {
            # 2245 "libneo-c.c"
            __result272__ = 1;
            return __result272__;
        }
        else {
            # 2248 "libneo-c.c"
            __result273__ = 0;
            return __result273__;
        }
    }
    # 2251 "libneo-c.c"
    __result274__ = 0;
    return __result274__;
}

int int_compare(int left, int right){
void* __result_obj__;
_Bool _if_conditional253;
int __result275__;
_Bool _if_conditional254;
int __result276__;
int __result277__;
int __result278__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2266 "libneo-c.c"
    # 2256 "libneo-c.c"
    if(_if_conditional253=left<right,    _if_conditional253) {
        # 2257 "libneo-c.c"
        __result275__ = -1;
        return __result275__;
    }
    else {
        # 2266 "libneo-c.c"
        # 2259 "libneo-c.c"
        if(_if_conditional254=left>right,        _if_conditional254) {
            # 2260 "libneo-c.c"
            __result276__ = 1;
            return __result276__;
        }
        else {
            # 2263 "libneo-c.c"
            __result277__ = 0;
            return __result277__;
        }
    }
    # 2266 "libneo-c.c"
    __result278__ = 0;
    return __result278__;
}

int long_compare(long left, long right){
void* __result_obj__;
_Bool _if_conditional255;
int __result279__;
_Bool _if_conditional256;
int __result280__;
int __result281__;
int __result282__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2281 "libneo-c.c"
    # 2271 "libneo-c.c"
    if(_if_conditional255=left<right,    _if_conditional255) {
        # 2272 "libneo-c.c"
        __result279__ = -1;
        return __result279__;
    }
    else {
        # 2281 "libneo-c.c"
        # 2274 "libneo-c.c"
        if(_if_conditional256=left>right,        _if_conditional256) {
            # 2275 "libneo-c.c"
            __result280__ = 1;
            return __result280__;
        }
        else {
            # 2278 "libneo-c.c"
            __result281__ = 0;
            return __result281__;
        }
    }
    # 2281 "libneo-c.c"
    __result282__ = 0;
    return __result282__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
void* __result_obj__;
_Bool _if_conditional257;
int __result283__;
_Bool _if_conditional258;
int __result284__;
int __result285__;
int __result286__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2296 "libneo-c.c"
    # 2286 "libneo-c.c"
    if(_if_conditional257=left<right,    _if_conditional257) {
        # 2287 "libneo-c.c"
        __result283__ = -1;
        return __result283__;
    }
    else {
        # 2296 "libneo-c.c"
        # 2289 "libneo-c.c"
        if(_if_conditional258=left>right,        _if_conditional258) {
            # 2290 "libneo-c.c"
            __result284__ = 1;
            return __result284__;
        }
        else {
            # 2293 "libneo-c.c"
            __result285__ = 0;
            return __result285__;
        }
    }
    # 2296 "libneo-c.c"
    __result286__ = 0;
    return __result286__;
}

int float_compare(float left, float right){
void* __result_obj__;
_Bool _if_conditional259;
int __result287__;
_Bool _if_conditional260;
int __result288__;
int __result289__;
int __result290__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2311 "libneo-c.c"
    # 2301 "libneo-c.c"
    if(_if_conditional259=left<right,    _if_conditional259) {
        # 2302 "libneo-c.c"
        __result287__ = -1;
        return __result287__;
    }
    else {
        # 2311 "libneo-c.c"
        # 2304 "libneo-c.c"
        if(_if_conditional260=left>right,        _if_conditional260) {
            # 2305 "libneo-c.c"
            __result288__ = 1;
            return __result288__;
        }
        else {
            # 2308 "libneo-c.c"
            __result289__ = 0;
            return __result289__;
        }
    }
    # 2311 "libneo-c.c"
    __result290__ = 0;
    return __result290__;
}

int double_compare(double left, double right){
void* __result_obj__;
_Bool _if_conditional261;
int __result291__;
_Bool _if_conditional262;
int __result292__;
int __result293__;
int __result294__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2326 "libneo-c.c"
    # 2316 "libneo-c.c"
    if(_if_conditional261=left<right,    _if_conditional261) {
        # 2317 "libneo-c.c"
        __result291__ = -1;
        return __result291__;
    }
    else {
        # 2326 "libneo-c.c"
        # 2319 "libneo-c.c"
        if(_if_conditional262=left>right,        _if_conditional262) {
            # 2320 "libneo-c.c"
            __result292__ = 1;
            return __result292__;
        }
        else {
            # 2323 "libneo-c.c"
            __result293__ = 0;
            return __result293__;
        }
    }
    # 2326 "libneo-c.c"
    __result294__ = 0;
    return __result294__;
}

int string_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional263;
int __result295__;
_Bool _if_conditional264;
int __result296__;
_Bool _if_conditional265;
int __result297__;
int __result298__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2341 "libneo-c.c"
    # 2331 "libneo-c.c"
    if(_if_conditional263=left==((void*)0)&&right==((void*)0),    _if_conditional263) {
        # 2332 "libneo-c.c"
        __result295__ = 0;
        return __result295__;
    }
    else {
        # 2341 "libneo-c.c"
        # 2334 "libneo-c.c"
        if(_if_conditional264=left==((void*)0),        _if_conditional264) {
            # 2335 "libneo-c.c"
            __result296__ = -1;
            return __result296__;
        }
        else {
            # 2341 "libneo-c.c"
            # 2337 "libneo-c.c"
            if(_if_conditional265=right==((void*)0),            _if_conditional265) {
                # 2338 "libneo-c.c"
                __result297__ = 1;
                return __result297__;
            }
        }
    }
    # 2341 "libneo-c.c"
    __result298__ = strcmp(left,right);
    return __result298__;
}

int charp_compare(char* left, char* right){
void* __result_obj__;
_Bool _if_conditional266;
int __result299__;
_Bool _if_conditional267;
int __result300__;
_Bool _if_conditional268;
int __result301__;
int __result302__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2356 "libneo-c.c"
    # 2346 "libneo-c.c"
    if(_if_conditional266=left==((void*)0)&&right==((void*)0),    _if_conditional266) {
        # 2347 "libneo-c.c"
        __result299__ = 0;
        return __result299__;
    }
    else {
        # 2356 "libneo-c.c"
        # 2349 "libneo-c.c"
        if(_if_conditional267=left==((void*)0),        _if_conditional267) {
            # 2350 "libneo-c.c"
            __result300__ = -1;
            return __result300__;
        }
        else {
            # 2356 "libneo-c.c"
            # 2352 "libneo-c.c"
            if(_if_conditional268=right==((void*)0),            _if_conditional268) {
                # 2353 "libneo-c.c"
                __result301__ = 1;
                return __result301__;
            }
        }
    }
    # 2356 "libneo-c.c"
    __result302__ = strcmp(left,right);
    return __result302__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional269;
void* right_value215;
char* __result303__;
void* right_value216;
void* right_value217;
struct buffer* buf_217;
_Bool _while_condtional13;
int size_219;
_Bool _if_conditional270;
void* right_value218;
char* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&buf_217, 0, sizeof(struct buffer*));
memset(&size_219, 0, sizeof(int));
right_value218 = (void*)0;
    # 2367 "libneo-c.c"
    # 2364 "libneo-c.c"
    if(_if_conditional269=f==((void*)0),    _if_conditional269) {
        # 2365 "libneo-c.c"
        __result303__ = __result_obj__ = ((char*)(right_value215=__builtin_string("")));
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result303__;
    }
    # 2367 "libneo-c.c"
    buf_217=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value216=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2367, "buffer"))))))));
    come_call_finalizer3(right_value216,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2381 "libneo-c.c"
    while(_while_condtional13=1,    _while_condtional13) {
        # 2370 "libneo-c.c"
        char buf2_218[1024];
        memset(&buf2_218, 0, sizeof(char)        *(1024)        );
        # 2372 "libneo-c.c"
        size_219=fread(buf2_218,1,1024,f);
        # 2374 "libneo-c.c"
        buffer_append(buf_217,buf2_218,size_219);
        # 2379 "libneo-c.c"
        # 2376 "libneo-c.c"
        if(_if_conditional270=size_219<1024,        _if_conditional270) {
            # 2377 "libneo-c.c"
            break;
        }
    }
    # 2381 "libneo-c.c"
    __result304__ = __result_obj__ = ((char*)(right_value218=buffer_to_string(buf_217)));
    come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result304__;
    come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional271;
int __result305__;
int __result306__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2390 "libneo-c.c"
    # 2386 "libneo-c.c"
    if(_if_conditional271=f==((void*)0)||str==((void*)0),    _if_conditional271) {
        # 2387 "libneo-c.c"
        __result305__ = -1;
        return __result305__;
    }
    # 2390 "libneo-c.c"
    __result306__ = fwrite(str,strlen(str),1,f);
    return __result306__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional272;
int __result307__;
int result_220;
_Bool _if_conditional273;
int __result308__;
int __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(int));
    # 2399 "libneo-c.c"
    # 2395 "libneo-c.c"
    if(_if_conditional272=f==((void*)0),    _if_conditional272) {
        # 2396 "libneo-c.c"
        __result307__ = -1;
        return __result307__;
    }
    # 2399 "libneo-c.c"
    result_220=fclose(f);
    # 2405 "libneo-c.c"
    # 2401 "libneo-c.c"
    if(_if_conditional273=result_220<0,    _if_conditional273) {
        # 2402 "libneo-c.c"
        __result308__ = result_220;
        return __result308__;
    }
    # 2405 "libneo-c.c"
    __result309__ = result_220;
    return __result309__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional274;
struct _IO_FILE* __result310__;
va_list args_222;
int result_223;
_Bool _if_conditional275;
struct _IO_FILE* __result311__;
struct _IO_FILE* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_222, 0, sizeof(va_list));
memset(&result_223, 0, sizeof(int));
    # 2413 "libneo-c.c"
    # 2410 "libneo-c.c"
    if(_if_conditional274=f==((void*)0)||msg==((void*)0),    _if_conditional274) {
        # 2411 "libneo-c.c"
        __result310__ = __result_obj__ = f;
        return __result310__;
    }
    # 2413 "libneo-c.c"
    char msg2_221[1024*2*2*2];
    memset(&msg2_221, 0, sizeof(char)    *(1024*2*2*2)    );
    # 2415 "libneo-c.c"
    # 2416 "libneo-c.c"
    __builtin_va_start(args_222,msg);
    # 2417 "libneo-c.c"
    vsnprintf(msg2_221,1024*2*2*2,msg,args_222);
    # 2418 "libneo-c.c"
    __builtin_va_end(args_222);
    # 2420 "libneo-c.c"
    result_223=fprintf(f,"%s",msg2_221);
    # 2426 "libneo-c.c"
    # 2422 "libneo-c.c"
    if(_if_conditional275=result_223<0,    _if_conditional275) {
        # 2423 "libneo-c.c"
        __result311__ = __result_obj__ = f;
        come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return __result311__;
    }
    # 2426 "libneo-c.c"
    __result312__ = __result_obj__ = f;
    come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
    return __result312__;
    come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int string_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional276;
int __result313__;
struct _IO_FILE* f_224;
_Bool _if_conditional277;
_Bool _if_conditional278;
int __result314__;
int result_225;
_Bool _if_conditional279;
int __result315__;
int result2_226;
_Bool _if_conditional280;
int __result316__;
int __result317__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_224, 0, sizeof(struct _IO_FILE*));
memset(&result_225, 0, sizeof(int));
memset(&result2_226, 0, sizeof(int));
    # 2435 "libneo-c.c"
    # 2431 "libneo-c.c"
    if(_if_conditional276=self==((void*)0)||file_name==((void*)0),    _if_conditional276) {
        # 2432 "libneo-c.c"
        __result313__ = -1;
        return __result313__;
    }
    # 2435 "libneo-c.c"
    # 2443 "libneo-c.c"
    # 2436 "libneo-c.c"
    if(append) {
        # 2437 "libneo-c.c"
        f_224=fopen(file_name,"a");
    }
    else {
        # 2440 "libneo-c.c"
        f_224=fopen(file_name,"w");
    }
    # 2447 "libneo-c.c"
    # 2443 "libneo-c.c"
    if(_if_conditional278=f_224==((void*)0),    _if_conditional278) {
        # 2444 "libneo-c.c"
        __result314__ = -1;
        return __result314__;
    }
    # 2447 "libneo-c.c"
    result_225=fwrite(self,strlen(self),1,f_224);
    # 2453 "libneo-c.c"
    # 2449 "libneo-c.c"
    if(_if_conditional279=result_225<0,    _if_conditional279) {
        # 2450 "libneo-c.c"
        __result315__ = result_225;
        return __result315__;
    }
    # 2455 "libneo-c.c"
    result2_226=fclose(f_224);
    # 2459 "libneo-c.c"
    # 2455 "libneo-c.c"
    if(_if_conditional280=result2_226<0,    _if_conditional280) {
        # 2456 "libneo-c.c"
        __result316__ = result2_226;
        return __result316__;
    }
    # 2459 "libneo-c.c"
    __result317__ = result_225;
    return __result317__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional281;
int __result318__;
struct _IO_FILE* f_227;
_Bool _if_conditional282;
_Bool _if_conditional283;
int __result319__;
int result_228;
_Bool _if_conditional284;
int __result320__;
int result2_229;
_Bool _if_conditional285;
int __result321__;
int __result322__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_227, 0, sizeof(struct _IO_FILE*));
memset(&result_228, 0, sizeof(int));
memset(&result2_229, 0, sizeof(int));
    # 2468 "libneo-c.c"
    # 2464 "libneo-c.c"
    if(_if_conditional281=self==((void*)0)||file_name==((void*)0),    _if_conditional281) {
        # 2465 "libneo-c.c"
        __result318__ = -1;
        return __result318__;
    }
    # 2468 "libneo-c.c"
    # 2476 "libneo-c.c"
    # 2469 "libneo-c.c"
    if(append) {
        # 2470 "libneo-c.c"
        f_227=fopen(file_name,"a");
    }
    else {
        # 2473 "libneo-c.c"
        f_227=fopen(file_name,"w");
    }
    # 2480 "libneo-c.c"
    # 2476 "libneo-c.c"
    if(_if_conditional283=f_227==((void*)0),    _if_conditional283) {
        # 2477 "libneo-c.c"
        __result319__ = -1;
        return __result319__;
    }
    # 2480 "libneo-c.c"
    result_228=fwrite(self,strlen(self),1,f_227);
    # 2486 "libneo-c.c"
    # 2482 "libneo-c.c"
    if(_if_conditional284=result_228<0,    _if_conditional284) {
        # 2483 "libneo-c.c"
        __result320__ = result_228;
        return __result320__;
    }
    # 2488 "libneo-c.c"
    result2_229=fclose(f_227);
    # 2492 "libneo-c.c"
    # 2488 "libneo-c.c"
    if(_if_conditional285=result2_229<0,    _if_conditional285) {
        # 2489 "libneo-c.c"
        __result321__ = result2_229;
        return __result321__;
    }
    # 2492 "libneo-c.c"
    __result322__ = result_228;
    return __result322__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional286;
void* right_value219;
char* __result323__;
struct _IO_FILE* f_230;
_Bool _if_conditional287;
void* right_value220;
char* __result324__;
void* right_value221;
void* right_value222;
struct buffer* buf_231;
_Bool _while_condtional14;
int size_233;
_Bool _if_conditional288;
void* right_value223;
char* result_234;
int result2_235;
_Bool _if_conditional289;
void* right_value224;
char* __result325__;
char* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
memset(&f_230, 0, sizeof(struct _IO_FILE*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&buf_231, 0, sizeof(struct buffer*));
memset(&size_233, 0, sizeof(int));
right_value223 = (void*)0;
memset(&result_234, 0, sizeof(char*));
memset(&result2_235, 0, sizeof(int));
right_value224 = (void*)0;
    # 2501 "libneo-c.c"
    # 2497 "libneo-c.c"
    if(_if_conditional286=file_name==((void*)0),    _if_conditional286) {
        # 2498 "libneo-c.c"
        __result323__ = __result_obj__ = ((char*)(right_value219=__builtin_string("")));
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result323__;
    }
    # 2501 "libneo-c.c"
    f_230=fopen(file_name,"r");
    # 2507 "libneo-c.c"
    # 2503 "libneo-c.c"
    if(_if_conditional287=f_230==((void*)0),    _if_conditional287) {
        # 2504 "libneo-c.c"
        __result324__ = __result_obj__ = ((char*)(right_value220=__builtin_string("")));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result324__;
    }
    # 2507 "libneo-c.c"
    buf_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value221=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2507, "buffer"))))))));
    come_call_finalizer3(right_value221,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value222,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2521 "libneo-c.c"
    while(_while_condtional14=1,    _while_condtional14) {
        # 2510 "libneo-c.c"
        char buf2_232[1024];
        memset(&buf2_232, 0, sizeof(char)        *(1024)        );
        # 2512 "libneo-c.c"
        size_233=fread(buf2_232,1,1024,f_230);
        # 2514 "libneo-c.c"
        buffer_append(buf_231,buf2_232,size_233);
        # 2519 "libneo-c.c"
        # 2516 "libneo-c.c"
        if(_if_conditional288=size_233<1024,        _if_conditional288) {
            # 2517 "libneo-c.c"
            break;
        }
    }
    # 2521 "libneo-c.c"
    result_234=(char*)come_increment_ref_count(((char*)(right_value223=buffer_to_string(buf_231))));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2525 "libneo-c.c"
    result2_235=fclose(f_230);
    # 2529 "libneo-c.c"
    # 2525 "libneo-c.c"
    if(_if_conditional289=result2_235<0,    _if_conditional289) {
        # 2526 "libneo-c.c"
        __result325__ = __result_obj__ = ((char*)(right_value224=__builtin_string("")));
        come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result325__;
    }
    # 2529 "libneo-c.c"
    __result326__ = __result_obj__ = result_234;
    come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result326__;
    come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional290;
void* right_value225;
char* __result327__;
struct _IO_FILE* f_236;
_Bool _if_conditional291;
void* right_value226;
char* __result328__;
void* right_value227;
void* right_value228;
struct buffer* buf_237;
_Bool _while_condtional15;
int size_239;
_Bool _if_conditional292;
void* right_value229;
char* result_240;
int result2_241;
_Bool _if_conditional293;
void* right_value230;
char* __result329__;
char* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
memset(&f_236, 0, sizeof(struct _IO_FILE*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&buf_237, 0, sizeof(struct buffer*));
memset(&size_239, 0, sizeof(int));
right_value229 = (void*)0;
memset(&result_240, 0, sizeof(char*));
memset(&result2_241, 0, sizeof(int));
right_value230 = (void*)0;
    # 2538 "libneo-c.c"
    # 2534 "libneo-c.c"
    if(_if_conditional290=file_name==((void*)0),    _if_conditional290) {
        # 2535 "libneo-c.c"
        __result327__ = __result_obj__ = ((char*)(right_value225=__builtin_string("")));
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result327__;
    }
    # 2538 "libneo-c.c"
    f_236=fopen(file_name,"r");
    # 2544 "libneo-c.c"
    # 2540 "libneo-c.c"
    if(_if_conditional291=f_236==((void*)0),    _if_conditional291) {
        # 2541 "libneo-c.c"
        __result328__ = __result_obj__ = ((char*)(right_value226=__builtin_string("")));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result328__;
    }
    # 2544 "libneo-c.c"
    buf_237=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value228=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value227=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2544, "buffer"))))))));
    come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value228,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 2558 "libneo-c.c"
    while(_while_condtional15=1,    _while_condtional15) {
        # 2547 "libneo-c.c"
        char buf2_238[1024];
        memset(&buf2_238, 0, sizeof(char)        *(1024)        );
        # 2549 "libneo-c.c"
        size_239=fread(buf2_238,1,1024,f_236);
        # 2551 "libneo-c.c"
        buffer_append(buf_237,buf2_238,size_239);
        # 2556 "libneo-c.c"
        # 2553 "libneo-c.c"
        if(_if_conditional292=size_239<1024,        _if_conditional292) {
            # 2554 "libneo-c.c"
            break;
        }
    }
    # 2558 "libneo-c.c"
    result_240=(char*)come_increment_ref_count(((char*)(right_value229=buffer_to_string(buf_237))));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2562 "libneo-c.c"
    result2_241=fclose(f_236);
    # 2566 "libneo-c.c"
    # 2562 "libneo-c.c"
    if(_if_conditional293=result2_241<0,    _if_conditional293) {
        # 2563 "libneo-c.c"
        __result329__ = __result_obj__ = ((char*)(right_value230=__builtin_string("")));
        come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result329__;
    }
    # 2566 "libneo-c.c"
    __result330__ = __result_obj__ = result_240;
    come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result330__;
    come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
void* right_value231;
void* right_value232;
struct list$1charph* result_242;
_Bool _if_conditional294;
struct list$1charph* __result331__;
_Bool _while_condtional16;
_Bool _if_conditional295;
void* right_value233;
struct list$1charph* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&result_242, 0, sizeof(struct list$1charph*));
right_value233 = (void*)0;
    # 2571 "libneo-c.c"
    result_242=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value232=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value231=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2571, "list$1charph"))))))));
    come_call_finalizer3(right_value231,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value232,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 2577 "libneo-c.c"
    # 2573 "libneo-c.c"
    if(_if_conditional294=f==((void*)0),    _if_conditional294) {
        # 2574 "libneo-c.c"
        __result331__ = __result_obj__ = result_242;
        come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result331__;
    }
    # 2587 "libneo-c.c"
    while(_while_condtional16=1,    _while_condtional16) {
        # 2578 "libneo-c.c"
        char buf_243[1024];
        memset(&buf_243, 0, sizeof(char)        *(1024)        );
        # 2584 "libneo-c.c"
        # 2580 "libneo-c.c"
        if(_if_conditional295=fgets(buf_243,1024,f)==((void*)0),        _if_conditional295) {
            # 2581 "libneo-c.c"
            break;
        }
        # 2584 "libneo-c.c"
        list$1charph_push_back(result_242,(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(buf_243)))));
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 2587 "libneo-c.c"
    __result332__ = __result_obj__ = result_242;
    come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result332__;
    come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional296;
int __result333__;
struct _IO_FILE* f_244;
_Bool _if_conditional297;
int __result334__;
int __result335__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_244, 0, sizeof(struct _IO_FILE*));
    # 2595 "libneo-c.c"
    # 2592 "libneo-c.c"
    if(_if_conditional296=path==((void*)0)||mode==((void*)0),    _if_conditional296) {
        # 2593 "libneo-c.c"
        __result333__ = -1;
        return __result333__;
    }
    # 2595 "libneo-c.c"
    f_244=fopen(path,mode);
    # 2605 "libneo-c.c"
    # 2597 "libneo-c.c"
    if(f_244) {
        # 2598 "libneo-c.c"
        block(parent,f_244);
        # 2600 "libneo-c.c"
        fclose(f_244);
        # 2602 "libneo-c.c"
        __result334__ = 0;
        return __result334__;
    }
    # 2605 "libneo-c.c"
    __result335__ = -1;
    return __result335__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional298;
void* right_value234;
char* __result336__;
void* right_value235;
char* __result337__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
    # 2616 "libneo-c.c"
    # 2613 "libneo-c.c"
    if(_if_conditional298=self==((void*)0),    _if_conditional298) {
        # 2614 "libneo-c.c"
        __result336__ = __result_obj__ = ((char*)(right_value234=__builtin_string("")));
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result336__;
    }
    # 2616 "libneo-c.c"
    puts(self);
    # 2618 "libneo-c.c"
    __result337__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self)));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result337__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional299;
void* right_value236;
char* __result338__;
void* right_value237;
char* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
    # 2626 "libneo-c.c"
    # 2623 "libneo-c.c"
    if(_if_conditional299=self==((void*)0),    _if_conditional299) {
        # 2624 "libneo-c.c"
        __result338__ = __result_obj__ = ((char*)(right_value236=__builtin_string("")));
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result338__;
    }
    # 2626 "libneo-c.c"
    printf("%s",self);
    # 2628 "libneo-c.c"
    __result339__ = __result_obj__ = ((char*)(right_value237=__builtin_string(self)));
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result339__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional300;
void* right_value238;
char* __result340__;
char* msg2_245;
va_list args_246;
void* right_value239;
char* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&msg2_245, 0, sizeof(char*));
memset(&args_246, 0, sizeof(va_list));
right_value239 = (void*)0;
    # 2637 "libneo-c.c"
    # 2634 "libneo-c.c"
    if(_if_conditional300=self==((void*)0),    _if_conditional300) {
        # 2635 "libneo-c.c"
        __result340__ = __result_obj__ = ((char*)(right_value238=__builtin_string("")));
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result340__;
    }
    # 2637 "libneo-c.c"
    # 2639 "libneo-c.c"
    # 2640 "libneo-c.c"
    __builtin_va_start(args_246,self);
    # 2641 "libneo-c.c"
    vasprintf(&msg2_245,self,args_246);
    # 2642 "libneo-c.c"
    __builtin_va_end(args_246);
    # 2644 "libneo-c.c"
    printf("%s",msg2_245);
    # 2646 "libneo-c.c"
    free(msg2_245);
    # 2648 "libneo-c.c"
    __result341__ = __result_obj__ = ((char*)(right_value239=__builtin_string(self)));
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result341__;
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional301;
void* right_value240;
char* __result342__;
char* msg2_247;
va_list args_248;
void* right_value241;
char* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
memset(&msg2_247, 0, sizeof(char*));
memset(&args_248, 0, sizeof(va_list));
right_value241 = (void*)0;
    # 2656 "libneo-c.c"
    # 2653 "libneo-c.c"
    if(_if_conditional301=self==((void*)0),    _if_conditional301) {
        # 2654 "libneo-c.c"
        __result342__ = __result_obj__ = ((char*)(right_value240=__builtin_string("")));
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result342__;
    }
    # 2656 "libneo-c.c"
    # 2658 "libneo-c.c"
    # 2659 "libneo-c.c"
    __builtin_va_start(args_248,self);
    # 2660 "libneo-c.c"
    vasprintf(&msg2_247,self,args_248);
    # 2661 "libneo-c.c"
    __builtin_va_end(args_248);
    # 2663 "libneo-c.c"
    printf("%s",msg2_247);
    # 2665 "libneo-c.c"
    free(msg2_247);
    # 2667 "libneo-c.c"
    __result343__ = __result_obj__ = ((char*)(right_value241=__builtin_string(self)));
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result343__;
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __result344__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2672 "libneo-c.c"
    printf(msg,self);
    # 2674 "libneo-c.c"
    __result344__ = self;
    return __result344__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional302;
void* right_value242;
char* __result345__;
void* right_value243;
char* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    # 2682 "libneo-c.c"
    # 2679 "libneo-c.c"
    if(_if_conditional302=self==((void*)0),    _if_conditional302) {
        # 2680 "libneo-c.c"
        __result345__ = __result_obj__ = ((char*)(right_value242=__builtin_string("")));
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result345__;
    }
    # 2682 "libneo-c.c"
    puts(self);
    # 2684 "libneo-c.c"
    __result346__ = __result_obj__ = ((char*)(right_value243=__builtin_string(self)));
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result346__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_249;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_249, 0, sizeof(int));
    # 2695 "libneo-c.c"
    for(    i_249=0;    i_249<self;    i_249++    ){
        # 2693 "libneo-c.c"
        block(parent,i_249);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2702 "libneo-c.c"
    self->value=value;
    # 2704 "libneo-c.c"
    __result347__ = __result_obj__ = self;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
    return __result347__;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
}

static void integer_finalize(struct integer* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int integer_to_int(struct integer* self){
void* __result_obj__;
int __result348__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2709 "libneo-c.c"
    __result348__ = self->value;
    return __result348__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
void* right_value244;
void* right_value245;
struct integer* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
    # 2714 "libneo-c.c"
    __result349__ = __result_obj__ = ((struct integer*)(right_value245=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value244=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2714, "integer")))),self)));
    come_call_finalizer3(right_value244,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value245,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result349__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
void* right_value246;
void* right_value247;
struct integer* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
right_value247 = (void*)0;
    # 2719 "libneo-c.c"
    __result350__ = __result_obj__ = ((struct integer*)(right_value247=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value246=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2719, "integer")))),self)));
    come_call_finalizer3(right_value246,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value247,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result350__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
void* right_value248;
void* right_value249;
struct integer* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
    # 2724 "libneo-c.c"
    __result351__ = __result_obj__ = ((struct integer*)(right_value249=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value248=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2724, "integer")))),self)));
    come_call_finalizer3(right_value248,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value249,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result351__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
void* right_value250;
void* right_value251;
struct integer* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
right_value251 = (void*)0;
    # 2729 "libneo-c.c"
    __result352__ = __result_obj__ = ((struct integer*)(right_value251=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value250=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2729, "integer")))),self)));
    come_call_finalizer3(right_value250,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value251,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result352__;
}

int integer_compare(struct integer* left, struct integer* right){
void* __result_obj__;
_Bool _if_conditional303;
int __result353__;
_Bool _if_conditional304;
int __result354__;
int __result355__;
int __result356__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2744 "libneo-c.c"
    # 2734 "libneo-c.c"
    if(_if_conditional303=left->value<right->value,    _if_conditional303) {
        # 2735 "libneo-c.c"
        __result353__ = -1;
        return __result353__;
    }
    else {
        # 2744 "libneo-c.c"
        # 2737 "libneo-c.c"
        if(_if_conditional304=left->value>right->value,        _if_conditional304) {
            # 2738 "libneo-c.c"
            __result354__ = 1;
            return __result354__;
        }
        else {
            # 2741 "libneo-c.c"
            __result355__ = 0;
            return __result355__;
        }
    }
    # 2744 "libneo-c.c"
    __result356__ = 0;
    return __result356__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result357__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2749 "libneo-c.c"
    __result357__ = self->value==right->value;
    return __result357__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result358__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2754 "libneo-c.c"
    __result358__ = self->value==right->value;
    return __result358__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result359__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2759 "libneo-c.c"
    __result359__ = self->value!=right->value;
    return __result359__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value252;
void* right_value253;
struct integer* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    # 2764 "libneo-c.c"
    __result360__ = __result_obj__ = ((struct integer*)(right_value253=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value252=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2764, "integer")))),left->value+right->value)));
    come_call_finalizer3(right_value252,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value253,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result360__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value254;
void* right_value255;
struct integer* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
right_value255 = (void*)0;
    # 2769 "libneo-c.c"
    __result361__ = __result_obj__ = ((struct integer*)(right_value255=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value254=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2769, "integer")))),left->value-right->value)));
    come_call_finalizer3(right_value254,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value255,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result361__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value256;
void* right_value257;
struct integer* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
right_value257 = (void*)0;
    # 2774 "libneo-c.c"
    __result362__ = __result_obj__ = ((struct integer*)(right_value257=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value256=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2774, "integer")))),left->value*right->value)));
    come_call_finalizer3(right_value256,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value257,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result362__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value258;
void* right_value259;
struct integer* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
right_value259 = (void*)0;
    # 2779 "libneo-c.c"
    __result363__ = __result_obj__ = ((struct integer*)(right_value259=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value258=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2779, "integer")))),left->value/right->value)));
    come_call_finalizer3(right_value258,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value259,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result363__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value260;
void* right_value261;
struct integer* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    # 2784 "libneo-c.c"
    __result364__ = __result_obj__ = ((struct integer*)(right_value261=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value260=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2784, "integer")))),left->value%right->value)));
    come_call_finalizer3(right_value260,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value261,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result364__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value262;
void* right_value263;
struct integer* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    # 2789 "libneo-c.c"
    __result365__ = __result_obj__ = ((struct integer*)(right_value263=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value262=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2789, "integer")))),left->value<<right->value)));
    come_call_finalizer3(right_value262,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value263,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result365__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value264;
void* right_value265;
struct integer* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
right_value265 = (void*)0;
    # 2794 "libneo-c.c"
    __result366__ = __result_obj__ = ((struct integer*)(right_value265=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value264=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2794, "integer")))),left->value>>right->value)));
    come_call_finalizer3(right_value264,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value265,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result366__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value266;
void* right_value267;
struct integer* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
right_value267 = (void*)0;
    # 2799 "libneo-c.c"
    __result367__ = __result_obj__ = ((struct integer*)(right_value267=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value266=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2799, "integer")))),left->value>=right->value)));
    come_call_finalizer3(right_value266,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value267,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result367__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value268;
void* right_value269;
struct integer* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
right_value269 = (void*)0;
    # 2804 "libneo-c.c"
    __result368__ = __result_obj__ = ((struct integer*)(right_value269=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value268=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2804, "integer")))),left->value<=right->value)));
    come_call_finalizer3(right_value268,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value269,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result368__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value270;
void* right_value271;
struct integer* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
right_value271 = (void*)0;
    # 2809 "libneo-c.c"
    __result369__ = __result_obj__ = ((struct integer*)(right_value271=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value270=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2809, "integer")))),left->value<right->value)));
    come_call_finalizer3(right_value270,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value271,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result369__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value272;
void* right_value273;
struct integer* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
right_value273 = (void*)0;
    # 2814 "libneo-c.c"
    __result370__ = __result_obj__ = ((struct integer*)(right_value273=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value272=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2814, "integer")))),left->value>right->value)));
    come_call_finalizer3(right_value272,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value273,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result370__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value274;
void* right_value275;
struct integer* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
    # 2819 "libneo-c.c"
    __result371__ = __result_obj__ = ((struct integer*)(right_value275=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value274=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2819, "integer")))),left->value&right->value)));
    come_call_finalizer3(right_value274,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value275,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result371__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value276;
void* right_value277;
struct integer* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
    # 2824 "libneo-c.c"
    __result372__ = __result_obj__ = ((struct integer*)(right_value277=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value276=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2824, "integer")))),left->value^right->value)));
    come_call_finalizer3(right_value276,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value277,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result372__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value278;
void* right_value279;
struct integer* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    # 2829 "libneo-c.c"
    __result373__ = __result_obj__ = ((struct integer*)(right_value279=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value278=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2829, "integer")))),left->value|right->value)));
    come_call_finalizer3(right_value278,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value279,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result373__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value280;
void* right_value281;
struct integer* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
right_value281 = (void*)0;
    # 2834 "libneo-c.c"
    __result374__ = __result_obj__ = ((struct integer*)(right_value281=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value280=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2834, "integer")))),left->value&&right->value)));
    come_call_finalizer3(right_value280,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value281,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result374__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value282;
void* right_value283;
struct integer* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    # 2839 "libneo-c.c"
    __result375__ = __result_obj__ = ((struct integer*)(right_value283=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value282=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2839, "integer")))),left->value||right->value)));
    come_call_finalizer3(right_value282,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value283,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result375__;
}

