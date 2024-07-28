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

// uniq global variable
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

char* dirname(char* anonymous_var_nameX517);

char* basename(char* anonymous_var_nameX518);

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










void come_push_stackframe(char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional19=gNumComeStackFrame<1024,    _if_conditional19) {
        (come_range_check(&((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 23, 573))[gNumComeStackFrame],((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 23, 573)),((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 23, 573))+(1024), "libneo-c.c", 23), ((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 23, 573))[gNumComeStackFrame]=sname);
        (come_range_check(&((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 24, 574))[gNumComeStackFrame],((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 24, 574)),((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 24, 574))+(1024), "libneo-c.c", 24), ((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 24, 574))[gNumComeStackFrame]=sline);
        (come_range_check(&((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 25, 575))[gNumComeStackFrame],((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 25, 575)),((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 25, 575))+(1024), "libneo-c.c", 25), ((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 25, 575))[gNumComeStackFrame]=id);
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
void* __result_obj__;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional20=gNumComeStackFrame>0,    _if_conditional20) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __result_obj__;
void* right_value79;
void* right_value80;
struct buffer* __exception_result_var_b51;
struct buffer* buf_47;
void* right_value81;
char* __exception_result_var_b52;
struct buffer* __exception_result_var_b53;
int i_48;
void* right_value82;
char* __exception_result_var_b54;
struct buffer* __exception_result_var_b55;
_Bool _if_conditional21;
void* right_value83;
char* __exception_result_var_b56;
char* __exception_result_var_b57;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
right_value81 = (void*)0;
memset(&i_48, 0, sizeof(int));
right_value82 = (void*)0;
right_value83 = (void*)0;
    buf_47=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 40, 577),__exception_result_var_b51=((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 40, "buffer"))), "libneo-c.c", 40, 576)))))), come_pop_stackframe(), __exception_result_var_b51));
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 41, 581),__exception_result_var_b53=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "libneo-c.c", 41, 578)), "libneo-c.c", 41, 579)),(come_push_stackframe("libneo-c.c", 41, 580),__exception_result_var_b52=((char*)(right_value81=xsprintf("%s %d\n",sname,sline))), come_pop_stackframe(), __exception_result_var_b52)), come_pop_stackframe(), __exception_result_var_b53);
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_48=gNumComeStackFrame-2;    i_48>=0;    i_48--    ){
        (come_push_stackframe("libneo-c.c", 43, 588),__exception_result_var_b55=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "libneo-c.c", 43, 582)), "libneo-c.c", 43, 583)),(come_push_stackframe("libneo-c.c", 43, 587),__exception_result_var_b54=((char*)(right_value82=xsprintf("%s %d #%d\n",*(char**)come_range_check(&((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 43, 584))[i_48],((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 43, 584)),((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 43, 584))+(1024), "libneo-c.c", 43),*(int*)come_range_check(&((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 43, 585))[i_48],((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 43, 585)),((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 43, 585))+(1024), "libneo-c.c", 43),*(int*)come_range_check(&((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 43, 586))[i_48],((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 43, 586)),((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 43, 586))+(1024), "libneo-c.c", 43)))), come_pop_stackframe(), __exception_result_var_b54)), come_pop_stackframe(), __exception_result_var_b55);
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(gComeStackFrameBuffer) {
        (come_push_stackframe("libneo-c.c", 47,589),free(gComeStackFrameBuffer),come_pop_stackframe());
    }
    gComeStackFrameBuffer=(come_push_stackframe("libneo-c.c", 49, 593),__exception_result_var_b57=strdup((come_push_stackframe("libneo-c.c", 49, 592),__exception_result_var_b56=((char*)(right_value83=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_47, "libneo-c.c", 49, 590)), "libneo-c.c", 49, 591))))), come_pop_stackframe(), __exception_result_var_b56)), come_pop_stackframe(), __exception_result_var_b57);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
void* __result_obj__;
int i_49;
int __exception_result_var_b58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_49, 0, sizeof(int));
    for(    i_49=gNumComeStackFrame-1;    i_49>=0;    i_49--    ){
        (come_push_stackframe("libneo-c.c", 55, 597),__exception_result_var_b58=printf("%s %d #%d\n",*(char**)come_range_check(&((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 55, 594))[i_49],((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 55, 594)),((char**)come_null_check(gComeStackFrameSName, "libneo-c.c", 55, 594))+(1024), "libneo-c.c", 55),*(int*)come_range_check(&((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 55, 595))[i_49],((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 55, 595)),((int*)come_null_check(gComeStackFrameSLine, "libneo-c.c", 55, 595))+(1024), "libneo-c.c", 55),*(int*)come_range_check(&((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 55, 596))[i_49],((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 55, 596)),((int*)come_null_check(gComeStackFrameID, "libneo-c.c", 55, 596))+(1024), "libneo-c.c", 55)), come_pop_stackframe(), __exception_result_var_b58);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value84;
char* __exception_result_var_b59;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    __result52__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 61, 598),__exception_result_var_b59=((char*)(right_value84=__builtin_string(gComeStackFrameBuffer))), come_pop_stackframe(), __exception_result_var_b59);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
_Bool _if_conditional22;
int __exception_result_var_b60;
void* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional22=mem==((void*)0),    _if_conditional22) {
        (come_push_stackframe("libneo-c.c", 67, 599),__exception_result_var_b60=printf("%s %d #%d: null check error\n",sname,sline,id), come_pop_stackframe(), __exception_result_var_b60);
        (come_push_stackframe("libneo-c.c", 68,600),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c.c", 69,601),exit(2),come_pop_stackframe());
    }
    __result53__ = __result_obj__ = mem;
    return __result53__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
_Bool _if_conditional23;
int __exception_result_var_b61;
_Bool _if_conditional24;
int __exception_result_var_b62;
_Bool _if_conditional25;
int __exception_result_var_b63;
void* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional23=mem==((void*)0),    _if_conditional23) {
        (come_push_stackframe("libneo-c.c", 78, 602),__exception_result_var_b61=printf("%s %d: null check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b61);
        (come_push_stackframe("libneo-c.c", 79,603),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c.c", 80,604),exit(2),come_pop_stackframe());
    }
    if(_if_conditional24=mem<begin,    _if_conditional24) {
        (come_push_stackframe("libneo-c.c", 84, 605),__exception_result_var_b62=printf("%s %d: range check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b62);
        (come_push_stackframe("libneo-c.c", 85,606),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c.c", 86,607),exit(2),come_pop_stackframe());
    }
    if(_if_conditional25=mem>=end,    _if_conditional25) {
        (come_push_stackframe("libneo-c.c", 90, 608),__exception_result_var_b63=printf("%s %d: range check error\n",sname,sline), come_pop_stackframe(), __exception_result_var_b63);
        (come_push_stackframe("libneo-c.c", 91,609),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c.c", 92,610),exit(2),come_pop_stackframe());
    }
    __result54__ = __result_obj__ = mem;
    return __result54__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional26;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional26=!self,    _if_conditional26) {
        block(parent);
        (come_push_stackframe("libneo-c.c", 102,611),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c.c", 103,612),exit(1),come_pop_stackframe());
    }
    __result55__ = self;
    return __result55__;
}

_Bool bool_value(_Bool self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = self;
    return __result56__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional27;
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional27=self<0,    _if_conditional27) {
        block(parent);
    }
    __result57__ = self;
    return __result57__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional28;
int __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional28=self<0,    _if_conditional28) {
        block(parent);
        (come_push_stackframe("libneo-c.c", 127,613),stackframe(),come_pop_stackframe());
        (come_push_stackframe("libneo-c.c", 128,614),exit(1),come_pop_stackframe());
    }
    __result58__ = self;
    return __result58__;
}

int int_value(int self){
void* __result_obj__;
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    __result59__ = self;
    return __result59__;
}

int int_except(int self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional29;
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional29=self<0,    _if_conditional29) {
        block(parent);
    }
    __result60__ = self;
    return __result60__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional30;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional30=!self,    _if_conditional30) {
        block(parent);
    }
    __result61__ = self;
    return __result61__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool _if_conditional31;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional31=!self,    _if_conditional31) {
        block(parent);
    }
    __result62__ = self;
    return __result62__;
}

void xassert(char* msg, _Bool test){
void* __result_obj__;
int __exception_result_var_b64;
_Bool _if_conditional32;
int __exception_result_var_b65;
int __exception_result_var_b66;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("libneo-c.c", 168, 615),__exception_result_var_b64=printf("%s...",msg), come_pop_stackframe(), __exception_result_var_b64);
    if(_if_conditional32=!test,    _if_conditional32) {
        (come_push_stackframe("libneo-c.c", 170, 616),__exception_result_var_b65=puts("false"), come_pop_stackframe(), __exception_result_var_b65);
        (come_push_stackframe("libneo-c.c", 171,617),exit(2),come_pop_stackframe());
    }
    (come_push_stackframe("libneo-c.c", 173, 618),__exception_result_var_b66=puts("ok"), come_pop_stackframe(), __exception_result_var_b66);
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
void* __result_obj__;
void* __exception_result_var_b67;
void* __exception_result_var_b68;
void* __exception_result_var_b69;
void* __exception_result_var_b70;
int i_50;
void* __exception_result_var_b71;
void* __exception_result_var_b72;
void* __exception_result_var_b73;
void* __exception_result_var_b74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_50, 0, sizeof(int));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    (come_push_stackframe("libneo-c.c", 241, 619),__exception_result_var_b67=memset(gComeStackFrameSName,0,sizeof(char*)*1024), come_pop_stackframe(), __exception_result_var_b67);
    (come_push_stackframe("libneo-c.c", 242, 620),__exception_result_var_b68=memset(gComeStackFrameSLine,0,sizeof(int)*1024), come_pop_stackframe(), __exception_result_var_b68);
    (come_push_stackframe("libneo-c.c", 243, 621),__exception_result_var_b69=memset(gComeStackFrameID,0,sizeof(int)*1024), come_pop_stackframe(), __exception_result_var_b69);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=(come_push_stackframe("libneo-c.c", 247, 622),__exception_result_var_b70=calloc(1,sizeof(char**)*gHeapPages.mSizePages), come_pop_stackframe(), __exception_result_var_b70);
    for(    i_50=0;    i_50<gHeapPages.mSizePages;    i_50++    ){
        ((char**)come_null_check(gHeapPages.mPages, "libneo-c.c", 249, 623))[i_50]=(come_push_stackframe("libneo-c.c", 249, 624),__exception_result_var_b71=calloc(1,sizeof(char)*4048), come_pop_stackframe(), __exception_result_var_b71);
    }
    gHeapPages.mTop=((char**)come_null_check(gHeapPages.mPages, "libneo-c.c", 252, 625))[0];
    gHeapPages.mCurrentPages=0;
    (come_push_stackframe("libneo-c.c", 255, 626),__exception_result_var_b72=memset(gHeapPages.mFreeMem,0,sizeof(void**)*4048), come_pop_stackframe(), __exception_result_var_b72);
    (come_push_stackframe("libneo-c.c", 256, 627),__exception_result_var_b73=memset(gHeapPages.mNumFreeMem,0,sizeof(int)*4048), come_pop_stackframe(), __exception_result_var_b73);
    (come_push_stackframe("libneo-c.c", 257, 628),__exception_result_var_b74=memset(gHeapPages.mSizeFreeMem,0,sizeof(int)*4048), come_pop_stackframe(), __exception_result_var_b74);
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
int __exception_result_var_b75;
_Bool _if_conditional36;
int __exception_result_var_b76;
int i_54;
_Bool _if_conditional37;
int __exception_result_var_b77;
_Bool _if_conditional38;
int __exception_result_var_b78;
int __exception_result_var_b79;
struct sMemHeaderTiny* it_55;
int n_56;
_Bool _if_conditional39;
int __exception_result_var_b80;
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
    if(gComeStackFrameBuffer) {
        (come_push_stackframe("libneo-c.c", 265,629),free(gComeStackFrameBuffer),come_pop_stackframe());
    }
    if(gComeGCLib) {
    }
    else {
        if(gComeDebugLib) {
            it_51=gAllocMem;
            n_52=0;
            while(it_51) {
                n_52++;
                flag_53=(_Bool)0;
                (come_push_stackframe("libneo-c.c", 277, 630),__exception_result_var_b75=printf("#%d ",n_52), come_pop_stackframe(), __exception_result_var_b75);
                if(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_51, "libneo-c.c", 278, 631)), "libneo-c.c", 278, 632))->class_name) {
                    (come_push_stackframe("libneo-c.c", 279, 635),__exception_result_var_b76=printf("%p (%s): ",(char*)it_51+sizeof(struct sMemHeader)+sizeof(unsigned long int)+sizeof(unsigned long int),((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_51, "libneo-c.c", 279, 633)), "libneo-c.c", 279, 634))->class_name), come_pop_stackframe(), __exception_result_var_b76);
                }
                for(                i_54=0;                i_54<16;                i_54++                ){
                    if(_if_conditional37=((char**)come_null_check(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_51, "libneo-c.c", 282, 636)), "libneo-c.c", 282, 637))->sname, "libneo-c.c", 282, 638))[i_54],                    _if_conditional37) {
                        (come_push_stackframe("libneo-c.c", 283, 648),__exception_result_var_b77=printf("%s %d #%d, ",((char**)come_null_check(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_51, "libneo-c.c", 283, 639)), "libneo-c.c", 283, 640))->sname, "libneo-c.c", 283, 641))[i_54],((int*)come_null_check(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_51, "libneo-c.c", 283, 642)), "libneo-c.c", 283, 643))->sline, "libneo-c.c", 283, 644))[i_54],((int*)come_null_check(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_51, "libneo-c.c", 283, 645)), "libneo-c.c", 283, 646))->id, "libneo-c.c", 283, 647))[i_54]), come_pop_stackframe(), __exception_result_var_b77);
                        flag_53=(_Bool)1;
                    }
                }
                if(flag_53) {
                    (come_push_stackframe("libneo-c.c", 288, 649),__exception_result_var_b78=puts(""), come_pop_stackframe(), __exception_result_var_b78);
                }
                it_51=((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_51, "libneo-c.c", 290, 650)), "libneo-c.c", 290, 651))->next;
            }
            (come_push_stackframe("libneo-c.c", 292, 652),__exception_result_var_b79=printf("%d memory leaks. %d alloc, %d free.\n",n_52,gNumAlloc,gNumFree), come_pop_stackframe(), __exception_result_var_b79);
        }
        else {
            it_55=(struct sMemHeaderTiny*)gAllocMem;
            n_56=0;
            while(it_55) {
                n_56++;
                it_55=((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_55, "libneo-c.c", 299, 653)), "libneo-c.c", 299, 654))->next;
            }
            if(_if_conditional39=n_56>0,            _if_conditional39) {
                (come_push_stackframe("libneo-c.c", 302, 655),__exception_result_var_b80=printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_56,gNumAlloc,gNumFree), come_pop_stackframe(), __exception_result_var_b80);
            }
        }
    }
    for(    i_57=0;    i_57<gHeapPages.mSizePages;    i_57++    ){
        (come_push_stackframe("libneo-c.c", 306,657),free(((char**)come_null_check(gHeapPages.mPages, "libneo-c.c", 306, 656))[i_57]),come_pop_stackframe());
    }
    (come_push_stackframe("libneo-c.c", 308,658),free(gHeapPages.mPages),come_pop_stackframe());
    for(    i_58=0;    i_58<4048;    i_58++    ){
        if(_if_conditional40=((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 311, 659))[i_58],        _if_conditional40) {
            (come_push_stackframe("libneo-c.c", 312,661),free(((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 312, 660))[i_58]),come_pop_stackframe());
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
void* __exception_result_var_b81;
void** new_pages_63;
int i_64;
void* __exception_result_var_b82;
void* __exception_result_var_b83;
void* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct sMemHeaderTiny*));
memset(&free_area_61, 0, sizeof(unsigned long int));
memset(&new_size_pages_62, 0, sizeof(int));
memset(&new_pages_63, 0, sizeof(void**));
memset(&i_64, 0, sizeof(int));
    result_59=((void*)0);
    if(_if_conditional41=size<4048,    _if_conditional41) {
        if(_if_conditional42=((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 321, 662))[size]&&((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 321, 663))[size]>0,        _if_conditional42) {
            it_60=((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 322, 664))[size][((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 322, 665))[size]-1];
            ((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 323, 666))[size]--;
        }
        if(_if_conditional43=result_59==((void*)0),        _if_conditional43) {
            free_area_61=((char**)come_null_check(gHeapPages.mPages, "libneo-c.c", 327, 667))[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            if(_if_conditional44=size>=free_area_61,            _if_conditional44) {
                gHeapPages.mCurrentPages++;
                if(_if_conditional45=gHeapPages.mCurrentPages==gHeapPages.mSizePages,                _if_conditional45) {
                    new_size_pages_62=gHeapPages.mSizePages*2;
                    new_pages_63=(come_push_stackframe("libneo-c.c", 334, 668),__exception_result_var_b81=calloc(1,sizeof(char*)*new_size_pages_62), come_pop_stackframe(), __exception_result_var_b81);
                    i_64=0;
                    for(                    ;                    i_64<gHeapPages.mSizePages;                    i_64++                    ){
                        ((void**)come_null_check(new_pages_63, "libneo-c.c", 338, 669))[i_64]=((char**)come_null_check(gHeapPages.mPages, "libneo-c.c", 338, 670))[i_64];
                    }
                    for(                    ;                    i_64<new_size_pages_62;                    i_64++                    ){
                        ((void**)come_null_check(new_pages_63, "libneo-c.c", 342, 671))[i_64]=(come_push_stackframe("libneo-c.c", 342, 672),__exception_result_var_b82=calloc(1,sizeof(char)*4048), come_pop_stackframe(), __exception_result_var_b82);
                    }
                    (come_push_stackframe("libneo-c.c", 345,673),free(gHeapPages.mPages),come_pop_stackframe());
                    gHeapPages.mPages=new_pages_63;
                    gHeapPages.mSizePages=new_size_pages_62;
                }
                gHeapPages.mTop=((char**)come_null_check(gHeapPages.mPages, "libneo-c.c", 351, 674))[gHeapPages.mCurrentPages];
            }
            result_59=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_59=(come_push_stackframe("libneo-c.c", 359, 675),__exception_result_var_b83=calloc(1,size), come_pop_stackframe(), __exception_result_var_b83);
    }
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
    if(gComeDebugLib) {
        result_65=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_66=result_65;
        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 372, 676)), "libneo-c.c", 372, 677))->allocated=177783;
        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 374, 678)), "libneo-c.c", 374, 679))->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(_if_conditional47=gNumComeStackFrame<16,        _if_conditional47) {
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 381, 680)), "libneo-c.c", 381, 681))->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 382, 682)), "libneo-c.c", 382, 683))->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 383, 684)), "libneo-c.c", 383, 685))->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 386, 686)), "libneo-c.c", 386, 687))->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 387, 688)), "libneo-c.c", 387, 689))->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 388, 690)), "libneo-c.c", 388, 691))->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 393, 692)), "libneo-c.c", 393, 693))->next=gAllocMem;
        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 394, 694)), "libneo-c.c", 394, 695))->prev=((void*)0);
        if(class_name) {
            ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 397, 696)), "libneo-c.c", 397, 697))->class_name=strdup(class_name);
        }
        else {
            ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_66, "libneo-c.c", 400, 698)), "libneo-c.c", 400, 699))->class_name=((void*)0);
        }
        if(gAllocMem) {
            ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(gAllocMem, "libneo-c.c", 404, 700)), "libneo-c.c", 404, 701))->prev=it_66;
        }
        gAllocMem=it_66;
        gNumAlloc++;
        __result64__ = __result_obj__ = (char*)result_65+sizeof(struct sMemHeader);
        return __result64__;
    }
    else {
        result_67=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_68=result_67;
        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_68, "libneo-c.c", 418, 702)), "libneo-c.c", 418, 703))->allocated=177783;
        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_68, "libneo-c.c", 429, 704)), "libneo-c.c", 429, 705))->size=size+sizeof(struct sMemHeaderTiny);
        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_68, "libneo-c.c", 432, 706)), "libneo-c.c", 432, 707))->next=(struct sMemHeaderTiny*)gAllocMem;
        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_68, "libneo-c.c", 433, 708)), "libneo-c.c", 433, 709))->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)gAllocMem), "libneo-c.c", 436, 710)), "libneo-c.c", 436, 711))->prev=it_68;
        }
        gAllocMem=(struct sMemHeader*)it_68;
        gNumAlloc++;
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
    if(mem) {
        if(gComeGCLib) {
        }
        else {
            if(gComeDebugLib) {
                it_69=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                if(_if_conditional54=((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_69, "libneo-c.c", 455, 712)), "libneo-c.c", 455, 713))->allocated!=177783,                _if_conditional54) {
                    return;
                }
                ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_69, "libneo-c.c", 459, 714)), "libneo-c.c", 459, 715))->allocated=0;
                prev_it_70=((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_69, "libneo-c.c", 461, 716)), "libneo-c.c", 461, 717))->prev;
                next_it_71=((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_69, "libneo-c.c", 462, 718)), "libneo-c.c", 462, 719))->next;
                if(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_69, "libneo-c.c", 464, 720)), "libneo-c.c", 464, 721))->class_name) {
                    free(((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_69, "libneo-c.c", 465, 722)), "libneo-c.c", 465, 723))->class_name);
                }
                if(_if_conditional56=gAllocMem==it_69,                _if_conditional56) {
                    gAllocMem=next_it_71;
                    if(gAllocMem) {
                        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(gAllocMem, "libneo-c.c", 472, 724)), "libneo-c.c", 472, 725))->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_70) {
                        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(prev_it_70, "libneo-c.c", 477, 726)), "libneo-c.c", 477, 727))->next=next_it_71;
                    }
                    if(next_it_71) {
                        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(next_it_71, "libneo-c.c", 480, 728)), "libneo-c.c", 480, 729))->prev=prev_it_70;
                    }
                }
                size_72=((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_69, "libneo-c.c", 484, 730)), "libneo-c.c", 484, 731))->size;
                if(_if_conditional60=size_72<4048,                _if_conditional60) {
                    num_free_mem_73=((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 487, 732))[size_72];
                    size_free_mem_74=((int*)come_null_check(gHeapPages.mSizeFreeMem, "libneo-c.c", 488, 733))[size_72];
                    if(_if_conditional61=((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 490, 734))[size_72]==((void*)0),                    _if_conditional61) {
                        new_size_free_mem_75=16;
                        new_free_mem_76=calloc(1,sizeof(void*)*new_size_free_mem_75);
                        ((int*)come_null_check(gHeapPages.mSizeFreeMem, "libneo-c.c", 494, 735))[size_72]=new_size_free_mem_75;
                        ((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 495, 736))[size_72]=new_free_mem_76;
                    }
                    else {
                        if(_if_conditional62=num_free_mem_73==size_free_mem_74,                        _if_conditional62) {
                            new_size_free_mem_77=size_free_mem_74*2;
                            new_free_mem_78=calloc(1,sizeof(void*)*new_size_free_mem_77);
                            memcpy(new_free_mem_78,((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 501, 737))[size_72],sizeof(void*)*num_free_mem_73);
                            free(((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 503, 738))[size_72]);
                            ((int*)come_null_check(gHeapPages.mSizeFreeMem, "libneo-c.c", 505, 739))[size_72]=new_size_free_mem_77;
                            ((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 506, 740))[size_72]=new_free_mem_78;
                        }
                    }
                    ((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 509, 741))[size_72][((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 509, 742))[size_72]]=it_69;
                    ((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 510, 743))[size_72]++;
                }
                else {
                    free(it_69);
                }
                gNumFree++;
            }
            else {
                it_79=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                if(_if_conditional63=((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_79, "libneo-c.c", 521, 744)), "libneo-c.c", 521, 745))->allocated!=177783,                _if_conditional63) {
                    return;
                }
                ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_79, "libneo-c.c", 525, 746)), "libneo-c.c", 525, 747))->allocated=0;
                prev_it_80=((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_79, "libneo-c.c", 533, 748)), "libneo-c.c", 533, 749))->prev;
                next_it_81=((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_79, "libneo-c.c", 534, 750)), "libneo-c.c", 534, 751))->next;
                if(_if_conditional64=gAllocMem==it_79,                _if_conditional64) {
                    gAllocMem=(struct sMemHeader*)next_it_81;
                    if(gAllocMem) {
                        ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(gAllocMem, "libneo-c.c", 540, 752)), "libneo-c.c", 540, 753))->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_80) {
                        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(prev_it_80, "libneo-c.c", 545, 754)), "libneo-c.c", 545, 755))->next=next_it_81;
                    }
                    if(next_it_81) {
                        ((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(next_it_81, "libneo-c.c", 548, 756)), "libneo-c.c", 548, 757))->prev=prev_it_80;
                    }
                }
                size_82=((struct sMemHeaderTiny*)come_null_check(((struct sMemHeaderTiny*)come_null_check(it_79, "libneo-c.c", 552, 758)), "libneo-c.c", 552, 759))->size;
                if(_if_conditional68=size_82<4048,                _if_conditional68) {
                    num_free_mem_83=((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 555, 760))[size_82];
                    size_free_mem_84=((int*)come_null_check(gHeapPages.mSizeFreeMem, "libneo-c.c", 556, 761))[size_82];
                    if(_if_conditional69=((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 558, 762))[size_82]==((void*)0),                    _if_conditional69) {
                        new_size_free_mem_85=16;
                        new_free_mem_86=calloc(1,sizeof(void*)*new_size_free_mem_85);
                        ((int*)come_null_check(gHeapPages.mSizeFreeMem, "libneo-c.c", 562, 763))[size_82]=new_size_free_mem_85;
                        ((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 563, 764))[size_82]=new_free_mem_86;
                    }
                    else {
                        if(_if_conditional70=num_free_mem_83==size_free_mem_84,                        _if_conditional70) {
                            new_size_free_mem_87=size_free_mem_84*2;
                            new_free_mem_88=calloc(1,sizeof(void*)*new_size_free_mem_87);
                            memcpy(new_free_mem_88,((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 569, 765))[size_82],sizeof(void*)*num_free_mem_83);
                            free(((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 571, 766))[size_82]);
                            ((int*)come_null_check(gHeapPages.mSizeFreeMem, "libneo-c.c", 573, 767))[size_82]=new_size_free_mem_87;
                            ((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 574, 768))[size_82]=new_free_mem_88;
                        }
                    }
                    ((void***)come_null_check(gHeapPages.mFreeMem, "libneo-c.c", 577, 769))[size_82][((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 577, 770))[size_82]]=it_79;
                    ((int*)come_null_check(gHeapPages.mNumFreeMem, "libneo-c.c", 578, 771))[size_82]++;
                }
                else {
                    free(it_79);
                }
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeader* it_89;
_Bool _if_conditional71;
int __exception_result_var_b84;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct sMemHeader*));
    it_89=(struct sMemHeader*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    if(_if_conditional71=((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_89, "libneo-c.c", 633, 772)), "libneo-c.c", 633, 773))->allocated!=177783,    _if_conditional71) {
        (come_push_stackframe("libneo-c.c", 634, 774),__exception_result_var_b84=printf("invalid heap object(%p)\n",it_89), come_pop_stackframe(), __exception_result_var_b84);
        (come_push_stackframe("libneo-c.c", 635,775),exit(2),come_pop_stackframe());
    }
    __result66__ = __result_obj__ = ((struct sMemHeader*)come_null_check(((struct sMemHeader*)come_null_check(it_89, "libneo-c.c", 638, 776)), "libneo-c.c", 638, 777))->class_name;
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
    mem_90=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_91=(unsigned long int*)mem_90;
    *((unsigned long int*)come_null_check(ref_count_91, "libneo-c.c", 649, 778))=0;
    size2_92=(unsigned long int*)(mem_90+sizeof(unsigned long int));
    *((unsigned long int*)come_null_check(size2_92, "libneo-c.c", 653, 779))=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result67__ = __result_obj__ = mem_90+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result67__;
}

void come_free_object(void* mem){
void* __result_obj__;
_Bool _if_conditional72;
unsigned long int* ref_count_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_93, 0, sizeof(unsigned long int*));
    if(_if_conditional72=mem==((void*)0),    _if_conditional72) {
        return;
    }
    ref_count_93=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (come_push_stackframe("libneo-c.c", 665,780),come_free_mem_of_heap_pool((char*)ref_count_93),come_pop_stackframe());
}

void come_free(void* mem){
void* __result_obj__;
_Bool _if_conditional73;
unsigned long int* ref_count_94;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_94, 0, sizeof(unsigned long int*));
    if(_if_conditional73=mem==((void*)0),    _if_conditional73) {
        return;
    }
    ref_count_94=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_94);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
_Bool _if_conditional74;
void* __result68__;
char* mem_95;
unsigned long int* size_p_96;
unsigned long int size_97;
void* __exception_result_var_b85;
void* result_98;
void* __exception_result_var_b86;
void* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_95, 0, sizeof(char*));
memset(&size_p_96, 0, sizeof(unsigned long int*));
memset(&size_97, 0, sizeof(unsigned long int));
memset(&result_98, 0, sizeof(void*));
    if(_if_conditional74=!block,    _if_conditional74) {
        __result68__ = __result_obj__ = ((void*)0);
        return __result68__;
    }
    mem_95=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_96=(unsigned long int*)(mem_95+sizeof(unsigned long int));
    size_97=*((unsigned long int*)come_null_check(size_p_96, "libneo-c.c", 696, 781))-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_98=(come_push_stackframe("libneo-c.c", 699, 782),__exception_result_var_b85=come_calloc(1,size_97,sname,sline,class_name), come_pop_stackframe(), __exception_result_var_b85);
    (come_push_stackframe("libneo-c.c", 701, 783),__exception_result_var_b86=memcpy(result_98,block,size_97), come_pop_stackframe(), __exception_result_var_b86);
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
    if(_if_conditional75=mem==((void*)0),    _if_conditional75) {
        __result70__ = __result_obj__ = mem;
        return __result70__;
    }
    ref_count_99=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*((unsigned long int*)come_null_check(ref_count_99, "libneo-c.c", 729, 784)))++;
    __result71__ = __result_obj__ = mem;
    return __result71__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
_Bool _if_conditional76;
void* __result72__;
unsigned long int* ref_count_100;
int __exception_result_var_b87;
void* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_100, 0, sizeof(unsigned long int*));
    if(_if_conditional76=mem==((void*)0),    _if_conditional76) {
        __result72__ = __result_obj__ = mem;
        return __result72__;
    }
    ref_count_100=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (come_push_stackframe("libneo-c.c", 749, 786),__exception_result_var_b87=printf("ref_count %ld\n",*((unsigned long int*)come_null_check(ref_count_100, "libneo-c.c", 749, 785))), come_pop_stackframe(), __exception_result_var_b87);
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
    if(_if_conditional77=mem==((void*)0),    _if_conditional77) {
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
    ref_count_101=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional78=!no_decrement,    _if_conditional78) {
        (*((unsigned long int*)come_null_check(ref_count_101, "libneo-c.c", 771, 787)))--;
    }
    count_102=*((unsigned long int*)come_null_check(ref_count_101, "libneo-c.c", 774, 788));
    if(_if_conditional79=!no_free&&(count_102<=0||force_delete_),    _if_conditional79) {
        if(_if_conditional80=protocol_obj&&protocol_fun,        _if_conditional80) {
            finalizer_103=protocol_fun;
            finalizer_103(protocol_obj);
            (come_push_stackframe("libneo-c.c", 780,789),come_free_object(protocol_obj),come_pop_stackframe());
        }
        (come_push_stackframe("libneo-c.c", 782,790),come_free_object(mem),come_pop_stackframe());
        __result75__ = __result_obj__ = ((void*)0);
        return __result75__;
    }
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
    if(result_obj) {
        if(_if_conditional82=mem==result_obj,        _if_conditional82) {
            __result77__ = __result_obj__ = mem;
            return __result77__;
        }
    }
    if(_if_conditional83=mem==((void*)0),    _if_conditional83) {
        __result78__ = __result_obj__ = ((void*)0);
        return __result78__;
    }
    ref_count_104=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(_if_conditional84=!no_decrement,    _if_conditional84) {
        (*((unsigned long int*)come_null_check(ref_count_104, "libneo-c.c", 803, 791)))--;
    }
    count_105=*((unsigned long int*)come_null_check(ref_count_104, "libneo-c.c", 806, 792));
    if(_if_conditional85=!no_free&&(count_105<=0||force_delete_),    _if_conditional85) {
        if(_if_conditional86=protocol_obj&&protocol_fun,        _if_conditional86) {
            finalizer_106=protocol_fun;
            finalizer_106(protocol_obj);
            (come_push_stackframe("libneo-c.c", 812,793),come_free_object(protocol_obj),come_pop_stackframe());
        }
        (come_push_stackframe("libneo-c.c", 814,794),come_free_object(mem),come_pop_stackframe());
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
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
    if(_if_conditional87=mem==((void*)0),    _if_conditional87) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional90=protocol_obj&&protocol_fun,            _if_conditional90) {
                finalizer_107=protocol_fun;
                finalizer_107(protocol_obj);
            }
            finalizer_108=fun;
            finalizer_108(mem);
        }
    }
    else {
        ref_count_109=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional91=!no_decrement,        _if_conditional91) {
            (*((unsigned long int*)come_null_check(ref_count_109, "libneo-c.c", 841, 795)))--;
        }
        count_110=*((unsigned long int*)come_null_check(ref_count_109, "libneo-c.c", 844, 796));
        if(_if_conditional92=!no_free&&(count_110<=0||force_delete_),        _if_conditional92) {
            if(mem) {
                if(_if_conditional94=protocol_obj&&protocol_fun,                _if_conditional94) {
                    finalizer_111=protocol_fun;
                    finalizer_111(protocol_obj);
                    (come_push_stackframe("libneo-c.c", 850,797),come_free_object(protocol_obj),come_pop_stackframe());
                }
                if(fun) {
                    finalizer_112=fun;
                    finalizer_112(mem);
                }
                (come_push_stackframe("libneo-c.c", 856,798),come_free_object(mem),come_pop_stackframe());
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
    if(result_obj) {
        if(_if_conditional97=mem==result_obj,        _if_conditional97) {
            return;
        }
    }
    if(_if_conditional98=mem==((void*)0),    _if_conditional98) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(_if_conditional101=protocol_obj&&protocol_fun,            _if_conditional101) {
                finalizer_113=protocol_fun;
                finalizer_113(protocol_obj);
            }
            finalizer_114=fun;
            finalizer_114(mem);
        }
    }
    else {
        ref_count_115=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional102=!no_decrement,        _if_conditional102) {
            (*((unsigned long int*)come_null_check(ref_count_115, "libneo-c.c", 887, 799)))--;
        }
        count_116=*((unsigned long int*)come_null_check(ref_count_115, "libneo-c.c", 890, 800));
        if(_if_conditional103=!no_free&&(count_116<=0||force_delete_),        _if_conditional103) {
            if(mem) {
                if(_if_conditional105=protocol_obj&&protocol_fun,                _if_conditional105) {
                    finalizer_117=protocol_fun;
                    finalizer_117(protocol_obj);
                    (come_push_stackframe("libneo-c.c", 896,801),come_free_object(protocol_obj),come_pop_stackframe());
                }
                if(fun) {
                    finalizer_118=fun;
                    finalizer_118(mem);
                }
                (come_push_stackframe("libneo-c.c", 902,802),come_free_object(mem),come_pop_stackframe());
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
    if(result_obj) {
        if(_if_conditional108=mem==result_obj,        _if_conditional108) {
            return;
        }
    }
    if(_if_conditional109=mem==((void*)0),    _if_conditional109) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            finalizer_119=fun;
            finalizer_119(mem);
        }
    }
    else {
        ref_count_120=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(_if_conditional112=!no_decrement,        _if_conditional112) {
            (*((unsigned long int*)come_null_check(ref_count_120, "libneo-c.c", 929, 803)))--;
        }
        count_121=*((unsigned long int*)come_null_check(ref_count_120, "libneo-c.c", 932, 804));
        if(_if_conditional113=!no_free&&(count_121<=0||force_delete_),        _if_conditional113) {
            if(mem) {
                if(fun) {
                    finalizer_122=fun;
                    finalizer_122(mem);
                }
                (come_push_stackframe("libneo-c.c", 939,805),come_free_object(mem),come_pop_stackframe());
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
_Bool _if_conditional116;
char* __result81__;
unsigned long int __exception_result_var_b88;
int len_123;
void* right_value85;
char* result_124;
char* __exception_result_var_b89;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_123, 0, sizeof(int));
right_value85 = (void*)0;
memset(&result_124, 0, sizeof(char*));
    if(_if_conditional116=str==((void*)0),    _if_conditional116) {
        __result81__ = __result_obj__ = ((void*)0);
        return __result81__;
    }
    len_123=(come_push_stackframe("libneo-c.c", 950, 806),__exception_result_var_b88=strlen(str), come_pop_stackframe(), __exception_result_var_b88)+1;
    result_124=(char*)come_increment_ref_count(((char*)(right_value85=(char*)come_calloc(1, sizeof(char)*(1*(len_123)), "libneo-c.c", 952, "char"))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 954, 807),__exception_result_var_b89=strncpy(result_124,str,len_123), come_pop_stackframe(), __exception_result_var_b89);
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
    found_125=(_Bool)0;
    for(    i_126=0;    i_126<len;    i_126++    ){
        if(_if_conditional117=((void**)come_null_check(array, "libneo-c.c", 963, 808))[i_126]==element,        _if_conditional117) {
            found_125=(_Bool)1;
            break;
        }
    }
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
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 976, 809)), "libneo-c.c", 976, 810))->size=128;
    __dec_obj12=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 977, 811)), "libneo-c.c", 977, 812))->buf;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 977, 811)), "libneo-c.c", 977, 812))->buf=(char*)come_increment_ref_count(((char*)(right_value86=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 977, 813)), "libneo-c.c", 977, 814))->size)), "libneo-c.c", 977, "char"))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 978, 815)), "libneo-c.c", 978, 816))->buf, "libneo-c.c", 978, 817))[0]=0;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 979, 818)), "libneo-c.c", 979, 819))->len=0;
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
}

void buffer_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional118=self&&((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 986, 820)), "libneo-c.c", 986, 821))->buf,    _if_conditional118) {
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 986, 822)), "libneo-c.c", 986, 823))->buf = come_decrement_ref_count2(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 986, 822)), "libneo-c.c", 986, 823))->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional119=self&&((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 990, 824)), "libneo-c.c", 990, 825))->buf,    _if_conditional119) {
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 990, 826)), "libneo-c.c", 990, 827))->buf = come_decrement_ref_count2(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 990, 826)), "libneo-c.c", 990, 827))->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* __exception_result_var_b90;
struct buffer* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_127, 0, sizeof(struct buffer*));
right_value88 = (void*)0;
    if(_if_conditional120=self==((void*)0),    _if_conditional120) {
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    result_127=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 999, "buffer"))));
    come_call_finalizer3(right_value87,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_127, "libneo-c.c", 1001, 828)), "libneo-c.c", 1001, 829))->size=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1001, 830)), "libneo-c.c", 1001, 831))->size;
    __dec_obj13=((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_127, "libneo-c.c", 1002, 832)), "libneo-c.c", 1002, 833))->buf;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_127, "libneo-c.c", 1002, 832)), "libneo-c.c", 1002, 833))->buf=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1002, 834)), "libneo-c.c", 1002, 835))->size)), "libneo-c.c", 1002, "char"))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_127, "libneo-c.c", 1003, 836)), "libneo-c.c", 1003, 837))->len=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1003, 838)), "libneo-c.c", 1003, 839))->len;
    (come_push_stackframe("libneo-c.c", 1004, 846),__exception_result_var_b90=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_127, "libneo-c.c", 1004, 840)), "libneo-c.c", 1004, 841))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1004, 842)), "libneo-c.c", 1004, 843))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1004, 844)), "libneo-c.c", 1004, 845))->len), come_pop_stackframe(), __exception_result_var_b90);
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
    if(_if_conditional121=self==((void*)0),    _if_conditional121) {
        __result87__ = 0;
        return __result87__;
    }
    __result88__ = ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1014, 847)), "libneo-c.c", 1014, 848))->len;
    return __result88__;
}

void buffer_reset(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional122=self==((void*)0),    _if_conditional122) {
        return;
    }
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1022, 849)), "libneo-c.c", 1022, 850))->buf, "libneo-c.c", 1022, 851))[0]=0;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1023, 852)), "libneo-c.c", 1023, 853))->len=0;
}

void buffer_trim(struct buffer* self, int len){
void* __result_obj__;
_Bool _if_conditional123;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional123=self==((void*)0),    _if_conditional123) {
        return;
    }
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1031, 854)), "libneo-c.c", 1031, 855))->len-=len;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1032, 856)), "libneo-c.c", 1032, 857))->buf, "libneo-c.c", 1032, 858))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1032, 859)), "libneo-c.c", 1032, 860))->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
_Bool _if_conditional124;
struct buffer* __result89__;
_Bool _if_conditional125;
void* right_value89;
char* old_buf_128;
void* __exception_result_var_b91;
int old_len_129;
int new_size_130;
void* right_value90;
char* __dec_obj14;
void* __exception_result_var_b92;
void* __exception_result_var_b93;
struct buffer* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&old_buf_128, 0, sizeof(char*));
memset(&old_len_129, 0, sizeof(int));
memset(&new_size_130, 0, sizeof(int));
right_value90 = (void*)0;
    if(_if_conditional124=self==((void*)0)||mem==((void*)0),    _if_conditional124) {
        __result89__ = __result_obj__ = self;
        return __result89__;
    }
    if(_if_conditional125=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1040, 861)), "libneo-c.c", 1040, 862))->len+size+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1040, 863)), "libneo-c.c", 1040, 864))->size,    _if_conditional125) {
        old_buf_128=(char*)come_increment_ref_count(((char*)(right_value89=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1041, 865)), "libneo-c.c", 1041, 866))->size)), "libneo-c.c", 1041, "char"))));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1042, 871),__exception_result_var_b91=memcpy(old_buf_128,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1042, 867)), "libneo-c.c", 1042, 868))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1042, 869)), "libneo-c.c", 1042, 870))->size), come_pop_stackframe(), __exception_result_var_b91);
        old_len_129=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1043, 872)), "libneo-c.c", 1043, 873))->len;
        new_size_130=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1044, 874)), "libneo-c.c", 1044, 875))->size+size+1)*2;
        __dec_obj14=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1045, 876)), "libneo-c.c", 1045, 877))->buf;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1045, 876)), "libneo-c.c", 1045, 877))->buf=(char*)come_increment_ref_count(((char*)(right_value90=(char*)come_calloc(1, sizeof(char)*(1*(new_size_130)), "libneo-c.c", 1045, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1046, 880),__exception_result_var_b92=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1046, 878)), "libneo-c.c", 1046, 879))->buf,old_buf_128,old_len_129), come_pop_stackframe(), __exception_result_var_b92);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1047, 881)), "libneo-c.c", 1047, 882))->buf, "libneo-c.c", 1047, 883))[old_len_129]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1048, 884)), "libneo-c.c", 1048, 885))->size=new_size_130;
        old_buf_128 = come_decrement_ref_count2(old_buf_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("libneo-c.c", 1051, 890),__exception_result_var_b93=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1051, 886)), "libneo-c.c", 1051, 887))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1051, 888)), "libneo-c.c", 1051, 889))->len,mem,size), come_pop_stackframe(), __exception_result_var_b93);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1052, 891)), "libneo-c.c", 1052, 892))->len+=size;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1053, 893)), "libneo-c.c", 1053, 894))->buf, "libneo-c.c", 1053, 895))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1053, 896)), "libneo-c.c", 1053, 897))->len]=0;
    __result90__ = __result_obj__ = self;
    return __result90__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
_Bool _if_conditional126;
struct buffer* __result91__;
_Bool _if_conditional127;
char* __exception_result_var_b94;
void* right_value91;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* right_value92;
char* __dec_obj15;
void* __exception_result_var_b95;
struct buffer* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&old_buf_131, 0, sizeof(char*));
memset(&old_len_132, 0, sizeof(int));
memset(&new_size_133, 0, sizeof(int));
right_value92 = (void*)0;
    if(_if_conditional126=self==((void*)0),    _if_conditional126) {
        __result91__ = __result_obj__ = ((void*)0);
        return __result91__;
    }
    if(_if_conditional127=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1063, 898)), "libneo-c.c", 1063, 899))->len+1+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1063, 900)), "libneo-c.c", 1063, 901))->size,    _if_conditional127) {
        old_buf_131=(char*)come_increment_ref_count(((char*)(right_value91=(come_push_stackframe("libneo-c.c", 1064, 904),__exception_result_var_b94=charp_clone(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1064, 902)), "libneo-c.c", 1064, 903))->buf), come_pop_stackframe(), __exception_result_var_b94))));
        right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        old_len_132=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1065, 905)), "libneo-c.c", 1065, 906))->len;
        new_size_133=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1067, 907)), "libneo-c.c", 1067, 908))->size+10+1)*2;
        __dec_obj15=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1068, 909)), "libneo-c.c", 1068, 910))->buf;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1068, 909)), "libneo-c.c", 1068, 910))->buf=(char*)come_increment_ref_count(((char*)(right_value92=(char*)come_calloc(1, sizeof(char)*(1*(new_size_133)), "libneo-c.c", 1068, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1069, 913),__exception_result_var_b95=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1069, 911)), "libneo-c.c", 1069, 912))->buf,old_buf_131,old_len_132), come_pop_stackframe(), __exception_result_var_b95);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1070, 914)), "libneo-c.c", 1070, 915))->buf, "libneo-c.c", 1070, 916))[old_len_132]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1071, 917)), "libneo-c.c", 1071, 918))->size=new_size_133;
        old_buf_131 = come_decrement_ref_count2(old_buf_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1074, 919)), "libneo-c.c", 1074, 920))->buf, "libneo-c.c", 1074, 921))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1074, 922)), "libneo-c.c", 1074, 923))->len]=c;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1075, 924)), "libneo-c.c", 1075, 925))->len++;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1077, 926)), "libneo-c.c", 1077, 927))->buf, "libneo-c.c", 1077, 928))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1077, 929)), "libneo-c.c", 1077, 930))->len]=0;
    __result92__ = __result_obj__ = self;
    return __result92__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional128;
struct buffer* __result93__;
unsigned long int __exception_result_var_b96;
int size_134;
_Bool _if_conditional129;
void* right_value93;
char* old_buf_135;
void* __exception_result_var_b97;
int old_len_136;
int new_size_137;
void* right_value94;
char* __dec_obj16;
void* __exception_result_var_b98;
void* __exception_result_var_b99;
struct buffer* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_134, 0, sizeof(int));
right_value93 = (void*)0;
memset(&old_buf_135, 0, sizeof(char*));
memset(&old_len_136, 0, sizeof(int));
memset(&new_size_137, 0, sizeof(int));
right_value94 = (void*)0;
    if(_if_conditional128=self==((void*)0)||mem==((void*)0),    _if_conditional128) {
        __result93__ = __result_obj__ = self;
        return __result93__;
    }
    size_134=(come_push_stackframe("libneo-c.c", 1088, 931),__exception_result_var_b96=strlen(mem), come_pop_stackframe(), __exception_result_var_b96);
    if(_if_conditional129=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1089, 932)), "libneo-c.c", 1089, 933))->len+size_134+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1089, 934)), "libneo-c.c", 1089, 935))->size,    _if_conditional129) {
        old_buf_135=(char*)come_increment_ref_count(((char*)(right_value93=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1090, 936)), "libneo-c.c", 1090, 937))->size)), "libneo-c.c", 1090, "char"))));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1091, 942),__exception_result_var_b97=memcpy(old_buf_135,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1091, 938)), "libneo-c.c", 1091, 939))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1091, 940)), "libneo-c.c", 1091, 941))->size), come_pop_stackframe(), __exception_result_var_b97);
        old_len_136=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1092, 943)), "libneo-c.c", 1092, 944))->len;
        new_size_137=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1093, 945)), "libneo-c.c", 1093, 946))->size+size_134+1)*2;
        __dec_obj16=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1094, 947)), "libneo-c.c", 1094, 948))->buf;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1094, 947)), "libneo-c.c", 1094, 948))->buf=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(new_size_137)), "libneo-c.c", 1094, "char"))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1095, 951),__exception_result_var_b98=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1095, 949)), "libneo-c.c", 1095, 950))->buf,old_buf_135,old_len_136), come_pop_stackframe(), __exception_result_var_b98);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1096, 952)), "libneo-c.c", 1096, 953))->buf, "libneo-c.c", 1096, 954))[old_len_136]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1097, 955)), "libneo-c.c", 1097, 956))->size=new_size_137;
        old_buf_135 = come_decrement_ref_count2(old_buf_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("libneo-c.c", 1100, 961),__exception_result_var_b99=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1100, 957)), "libneo-c.c", 1100, 958))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1100, 959)), "libneo-c.c", 1100, 960))->len,mem,size_134), come_pop_stackframe(), __exception_result_var_b99);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1101, 962)), "libneo-c.c", 1101, 963))->len+=size_134;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1102, 964)), "libneo-c.c", 1102, 965))->buf, "libneo-c.c", 1102, 966))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1102, 967)), "libneo-c.c", 1102, 968))->len]=0;
    __result94__ = __result_obj__ = self;
    return __result94__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
_Bool _if_conditional130;
struct buffer* __result95__;
unsigned long int __exception_result_var_b100;
int size_138;
_Bool _if_conditional131;
void* right_value95;
char* old_buf_139;
void* __exception_result_var_b101;
int old_len_140;
int new_size_141;
void* right_value96;
char* __dec_obj17;
void* __exception_result_var_b102;
void* __exception_result_var_b103;
struct buffer* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_138, 0, sizeof(int));
right_value95 = (void*)0;
memset(&old_buf_139, 0, sizeof(char*));
memset(&old_len_140, 0, sizeof(int));
memset(&new_size_141, 0, sizeof(int));
right_value96 = (void*)0;
    if(_if_conditional130=self==((void*)0)||mem==((void*)0),    _if_conditional130) {
        __result95__ = __result_obj__ = self;
        return __result95__;
    }
    size_138=(come_push_stackframe("libneo-c.c", 1112, 969),__exception_result_var_b100=strlen(mem), come_pop_stackframe(), __exception_result_var_b100)+1;
    if(_if_conditional131=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1113, 970)), "libneo-c.c", 1113, 971))->len+size_138+1+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1113, 972)), "libneo-c.c", 1113, 973))->size,    _if_conditional131) {
        old_buf_139=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1114, 974)), "libneo-c.c", 1114, 975))->size)), "libneo-c.c", 1114, "char"))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1115, 980),__exception_result_var_b101=memcpy(old_buf_139,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1115, 976)), "libneo-c.c", 1115, 977))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1115, 978)), "libneo-c.c", 1115, 979))->size), come_pop_stackframe(), __exception_result_var_b101);
        old_len_140=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1116, 981)), "libneo-c.c", 1116, 982))->len;
        new_size_141=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1117, 983)), "libneo-c.c", 1117, 984))->size+size_138+1)*2;
        __dec_obj17=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1118, 985)), "libneo-c.c", 1118, 986))->buf;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1118, 985)), "libneo-c.c", 1118, 986))->buf=(char*)come_increment_ref_count(((char*)(right_value96=(char*)come_calloc(1, sizeof(char)*(1*(new_size_141)), "libneo-c.c", 1118, "char"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1119, 989),__exception_result_var_b102=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1119, 987)), "libneo-c.c", 1119, 988))->buf,old_buf_139,old_len_140), come_pop_stackframe(), __exception_result_var_b102);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1120, 990)), "libneo-c.c", 1120, 991))->buf, "libneo-c.c", 1120, 992))[old_len_140]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1121, 993)), "libneo-c.c", 1121, 994))->size=new_size_141;
        old_buf_139 = come_decrement_ref_count2(old_buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("libneo-c.c", 1124, 999),__exception_result_var_b103=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1124, 995)), "libneo-c.c", 1124, 996))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1124, 997)), "libneo-c.c", 1124, 998))->len,mem,size_138), come_pop_stackframe(), __exception_result_var_b103);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1125, 1000)), "libneo-c.c", 1125, 1001))->len+=size_138;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1126, 1002)), "libneo-c.c", 1126, 1003))->buf, "libneo-c.c", 1126, 1004))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1126, 1005)), "libneo-c.c", 1126, 1006))->len]=0;
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1127, 1007)), "libneo-c.c", 1127, 1008))->len++;
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
void* __exception_result_var_b104;
int old_len_145;
int new_size_146;
void* right_value98;
char* __dec_obj18;
void* __exception_result_var_b105;
void* __exception_result_var_b106;
struct buffer* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_142, 0, sizeof(int*));
memset(&size_143, 0, sizeof(int));
right_value97 = (void*)0;
memset(&old_buf_144, 0, sizeof(char*));
memset(&old_len_145, 0, sizeof(int));
memset(&new_size_146, 0, sizeof(int));
right_value98 = (void*)0;
    if(_if_conditional132=self==((void*)0),    _if_conditional132) {
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    mem_142=&value;
    size_143=sizeof(int);
    if(_if_conditional133=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1140, 1009)), "libneo-c.c", 1140, 1010))->len+size_143+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1140, 1011)), "libneo-c.c", 1140, 1012))->size,    _if_conditional133) {
        old_buf_144=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1141, 1013)), "libneo-c.c", 1141, 1014))->size)), "libneo-c.c", 1141, "char"))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1142, 1019),__exception_result_var_b104=memcpy(old_buf_144,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1142, 1015)), "libneo-c.c", 1142, 1016))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1142, 1017)), "libneo-c.c", 1142, 1018))->size), come_pop_stackframe(), __exception_result_var_b104);
        old_len_145=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1143, 1020)), "libneo-c.c", 1143, 1021))->len;
        new_size_146=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1144, 1022)), "libneo-c.c", 1144, 1023))->size+size_143+1)*2;
        __dec_obj18=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1145, 1024)), "libneo-c.c", 1145, 1025))->buf;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1145, 1024)), "libneo-c.c", 1145, 1025))->buf=(char*)come_increment_ref_count(((char*)(right_value98=(char*)come_calloc(1, sizeof(char)*(1*(new_size_146)), "libneo-c.c", 1145, "char"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1146, 1028),__exception_result_var_b105=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1146, 1026)), "libneo-c.c", 1146, 1027))->buf,old_buf_144,old_len_145), come_pop_stackframe(), __exception_result_var_b105);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1147, 1029)), "libneo-c.c", 1147, 1030))->buf, "libneo-c.c", 1147, 1031))[old_len_145]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1148, 1032)), "libneo-c.c", 1148, 1033))->size=new_size_146;
        old_buf_144 = come_decrement_ref_count2(old_buf_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("libneo-c.c", 1151, 1038),__exception_result_var_b106=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1151, 1034)), "libneo-c.c", 1151, 1035))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1151, 1036)), "libneo-c.c", 1151, 1037))->len,mem_142,size_143), come_pop_stackframe(), __exception_result_var_b106);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1152, 1039)), "libneo-c.c", 1152, 1040))->len+=size_143;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1153, 1041)), "libneo-c.c", 1153, 1042))->buf, "libneo-c.c", 1153, 1043))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1153, 1044)), "libneo-c.c", 1153, 1045))->len]=0;
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
void* __exception_result_var_b107;
int old_len_150;
int new_size_151;
void* right_value100;
char* __dec_obj19;
void* __exception_result_var_b108;
void* __exception_result_var_b109;
struct buffer* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_147, 0, sizeof(long*));
memset(&size_148, 0, sizeof(int));
right_value99 = (void*)0;
memset(&old_buf_149, 0, sizeof(char*));
memset(&old_len_150, 0, sizeof(int));
memset(&new_size_151, 0, sizeof(int));
right_value100 = (void*)0;
    mem_147=&value;
    size_148=sizeof(long);
    if(_if_conditional134=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1163, 1046)), "libneo-c.c", 1163, 1047))->len+size_148+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1163, 1048)), "libneo-c.c", 1163, 1049))->size,    _if_conditional134) {
        old_buf_149=(char*)come_increment_ref_count(((char*)(right_value99=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1164, 1050)), "libneo-c.c", 1164, 1051))->size)), "libneo-c.c", 1164, "char"))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1165, 1056),__exception_result_var_b107=memcpy(old_buf_149,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1165, 1052)), "libneo-c.c", 1165, 1053))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1165, 1054)), "libneo-c.c", 1165, 1055))->size), come_pop_stackframe(), __exception_result_var_b107);
        old_len_150=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1166, 1057)), "libneo-c.c", 1166, 1058))->len;
        new_size_151=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1167, 1059)), "libneo-c.c", 1167, 1060))->size+size_148+1)*2;
        __dec_obj19=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1168, 1061)), "libneo-c.c", 1168, 1062))->buf;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1168, 1061)), "libneo-c.c", 1168, 1062))->buf=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(new_size_151)), "libneo-c.c", 1168, "char"))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1169, 1065),__exception_result_var_b108=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1169, 1063)), "libneo-c.c", 1169, 1064))->buf,old_buf_149,old_len_150), come_pop_stackframe(), __exception_result_var_b108);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1170, 1066)), "libneo-c.c", 1170, 1067))->buf, "libneo-c.c", 1170, 1068))[old_len_150]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1171, 1069)), "libneo-c.c", 1171, 1070))->size=new_size_151;
        old_buf_149 = come_decrement_ref_count2(old_buf_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("libneo-c.c", 1174, 1075),__exception_result_var_b109=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1174, 1071)), "libneo-c.c", 1174, 1072))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1174, 1073)), "libneo-c.c", 1174, 1074))->len,mem_147,size_148), come_pop_stackframe(), __exception_result_var_b109);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1175, 1076)), "libneo-c.c", 1175, 1077))->len+=size_148;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1176, 1078)), "libneo-c.c", 1176, 1079))->buf, "libneo-c.c", 1176, 1080))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1176, 1081)), "libneo-c.c", 1176, 1082))->len]=0;
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
void* __exception_result_var_b110;
int old_len_155;
int new_size_156;
void* right_value102;
char* __dec_obj20;
void* __exception_result_var_b111;
void* __exception_result_var_b112;
struct buffer* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_152, 0, sizeof(short short*));
memset(&size_153, 0, sizeof(int));
right_value101 = (void*)0;
memset(&old_buf_154, 0, sizeof(char*));
memset(&old_len_155, 0, sizeof(int));
memset(&new_size_156, 0, sizeof(int));
right_value102 = (void*)0;
    if(_if_conditional135=self==((void*)0),    _if_conditional135) {
        __result100__ = __result_obj__ = ((void*)0);
        return __result100__;
    }
    mem_152=&value;
    size_153=sizeof(short short);
    if(_if_conditional136=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1190, 1083)), "libneo-c.c", 1190, 1084))->len+size_153+1+1>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1190, 1085)), "libneo-c.c", 1190, 1086))->size,    _if_conditional136) {
        old_buf_154=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1191, 1087)), "libneo-c.c", 1191, 1088))->size)), "libneo-c.c", 1191, "char"))));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1192, 1093),__exception_result_var_b110=memcpy(old_buf_154,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1192, 1089)), "libneo-c.c", 1192, 1090))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1192, 1091)), "libneo-c.c", 1192, 1092))->size), come_pop_stackframe(), __exception_result_var_b110);
        old_len_155=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1193, 1094)), "libneo-c.c", 1193, 1095))->len;
        new_size_156=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1194, 1096)), "libneo-c.c", 1194, 1097))->size+size_153+1)*2;
        __dec_obj20=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1195, 1098)), "libneo-c.c", 1195, 1099))->buf;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1195, 1098)), "libneo-c.c", 1195, 1099))->buf=(char*)come_increment_ref_count(((char*)(right_value102=(char*)come_calloc(1, sizeof(char)*(1*(new_size_156)), "libneo-c.c", 1195, "char"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("libneo-c.c", 1196, 1102),__exception_result_var_b111=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1196, 1100)), "libneo-c.c", 1196, 1101))->buf,old_buf_154,old_len_155), come_pop_stackframe(), __exception_result_var_b111);
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1197, 1103)), "libneo-c.c", 1197, 1104))->buf, "libneo-c.c", 1197, 1105))[old_len_155]=0;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1198, 1106)), "libneo-c.c", 1198, 1107))->size=new_size_156;
        old_buf_154 = come_decrement_ref_count2(old_buf_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("libneo-c.c", 1201, 1112),__exception_result_var_b112=memcpy(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1201, 1108)), "libneo-c.c", 1201, 1109))->buf+((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1201, 1110)), "libneo-c.c", 1201, 1111))->len,mem_152,size_153), come_pop_stackframe(), __exception_result_var_b112);
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1202, 1113)), "libneo-c.c", 1202, 1114))->len+=size_153;
    ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1203, 1115)), "libneo-c.c", 1203, 1116))->buf, "libneo-c.c", 1203, 1117))[((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1203, 1118)), "libneo-c.c", 1203, 1119))->len]=0;
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
    if(_if_conditional137=self==((void*)0),    _if_conditional137) {
        __result102__ = __result_obj__ = ((void*)0);
        return __result102__;
    }
    len_157=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1214, 1120)), "libneo-c.c", 1214, 1121))->len;
    len_157=(len_157+3)&~3;
    if(_if_conditional138=len_157>=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1217, 1122)), "libneo-c.c", 1217, 1123))->size,    _if_conditional138) {
        new_size_158=(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1218, 1124)), "libneo-c.c", 1218, 1125))->size+1+1)*2;
        __dec_obj21=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1219, 1126)), "libneo-c.c", 1219, 1127))->buf;
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1219, 1126)), "libneo-c.c", 1219, 1127))->buf=(char*)come_increment_ref_count(((char*)(right_value103=(char*)come_calloc(1, sizeof(char)*(1*(new_size_158)), "libneo-c.c", 1219, "char"))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1220, 1128)), "libneo-c.c", 1220, 1129))->size=new_size_158;
    }
    for(    i_159=((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1223, 1130)), "libneo-c.c", 1223, 1131))->len;    i_159<len_157;    i_159++    ){
        ((char*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1224, 1132)), "libneo-c.c", 1224, 1133))->buf, "libneo-c.c", 1224, 1134))[i_159]=0;
    }
    ((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1227, 1135)), "libneo-c.c", 1227, 1136))->len=len_157;
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
int __exception_result_var_b113;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional139=left==((void*)0)&&right==((void*)0),    _if_conditional139) {
        __result104__ = 0;
        return __result104__;
    }
    else {
        if(_if_conditional140=left==((void*)0),        _if_conditional140) {
            __result105__ = -1;
            return __result105__;
        }
        else {
            if(_if_conditional141=right==((void*)0),            _if_conditional141) {
                __result106__ = 1;
                return __result106__;
            }
        }
    }
    __result107__ = (come_push_stackframe("libneo-c.c", 1244, 1141),__exception_result_var_b113=strcmp(((struct buffer*)come_null_check(((struct buffer*)come_null_check(left, "libneo-c.c", 1244, 1137)), "libneo-c.c", 1244, 1138))->buf,((struct buffer*)come_null_check(((struct buffer*)come_null_check(right, "libneo-c.c", 1244, 1139)), "libneo-c.c", 1244, 1140))->buf), come_pop_stackframe(), __exception_result_var_b113);
    return __result107__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
void* right_value104;
void* right_value105;
struct buffer* __exception_result_var_b114;
struct buffer* result_160;
_Bool _if_conditional142;
struct buffer* __result108__;
struct buffer* __exception_result_var_b115;
struct buffer* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_160, 0, sizeof(struct buffer*));
    result_160=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1249, 1144),__exception_result_var_b114=((struct buffer*)(right_value105=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value104=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1249, "buffer"))), "libneo-c.c", 1249, 1142)), "libneo-c.c", 1249, 1143)))))), come_pop_stackframe(), __exception_result_var_b114));
    come_call_finalizer3(right_value104,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value105,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional142=self==((void*)0),    _if_conditional142) {
        __result108__ = __result_obj__ = result_160;
        come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result108__;
    }
    (come_push_stackframe("libneo-c.c", 1255, 1147),__exception_result_var_b115=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_160, "libneo-c.c", 1255, 1145)), "libneo-c.c", 1255, 1146)),self), come_pop_stackframe(), __exception_result_var_b115);
    __result109__ = __result_obj__ = result_160;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
void* right_value106;
void* right_value107;
struct buffer* __exception_result_var_b116;
struct buffer* result_161;
_Bool _if_conditional143;
struct buffer* __result110__;
struct buffer* __exception_result_var_b117;
struct buffer* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_161, 0, sizeof(struct buffer*));
    result_161=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1262, 1150),__exception_result_var_b116=((struct buffer*)(right_value107=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value106=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1262, "buffer"))), "libneo-c.c", 1262, 1148)), "libneo-c.c", 1262, 1149)))))), come_pop_stackframe(), __exception_result_var_b116));
    come_call_finalizer3(right_value106,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional143=self==((void*)0),    _if_conditional143) {
        __result110__ = __result_obj__ = result_161;
        come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result110__;
    }
    (come_push_stackframe("libneo-c.c", 1268, 1153),__exception_result_var_b117=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(result_161, "libneo-c.c", 1268, 1151)), "libneo-c.c", 1268, 1152)),self), come_pop_stackframe(), __exception_result_var_b117);
    __result111__ = __result_obj__ = result_161;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
_Bool _if_conditional144;
void* right_value108;
char* __exception_result_var_b118;
char* __result112__;
void* right_value109;
char* __exception_result_var_b119;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
    if(_if_conditional144=self==((void*)0),    _if_conditional144) {
        __result112__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1276, 1154),__exception_result_var_b118=((char*)(right_value108=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b118);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result112__;
    }
    __result113__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1279, 1157),__exception_result_var_b119=((char*)(right_value109=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(self, "libneo-c.c", 1279, 1155)), "libneo-c.c", 1279, 1156))->buf))), come_pop_stackframe(), __exception_result_var_b119);
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool bool_equals(_Bool self, _Bool right){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = self==right;
    return __result114__;
}

_Bool int_equals(int self, int right){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = self==right;
    return __result115__;
}

_Bool char_equals(char self, char right){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = self==right;
    return __result116__;
}

_Bool short_equals(short short self, short short right){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = self==right;
    return __result117__;
}

_Bool long_equals(long self, long right){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = self==right;
    return __result118__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
void* __result_obj__;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = self==right;
    return __result119__;
}

_Bool float_equals(float self, float right){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = self==right;
    return __result120__;
}

_Bool double_equals(double self, double right){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
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
int __exception_result_var_b120;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional145=self==((void*)0)&&right==((void*)0),    _if_conditional145) {
        __result122__ = (_Bool)1;
        return __result122__;
    }
    else {
        if(_if_conditional146=self==((void*)0),        _if_conditional146) {
            __result123__ = (_Bool)0;
            return __result123__;
        }
        else {
            if(_if_conditional147=right==((void*)0),            _if_conditional147) {
                __result124__ = (_Bool)0;
                return __result124__;
            }
        }
    }
    __result125__ = (come_push_stackframe("libneo-c.c", 1338, 1158),__exception_result_var_b120=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b120)==0;
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
int __exception_result_var_b121;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional148=self==((void*)0)&&right==((void*)0),    _if_conditional148) {
        __result126__ = (_Bool)1;
        return __result126__;
    }
    else {
        if(_if_conditional149=self==((void*)0),        _if_conditional149) {
            __result127__ = (_Bool)0;
            return __result127__;
        }
        else {
            if(_if_conditional150=right==((void*)0),            _if_conditional150) {
                __result128__ = (_Bool)0;
                return __result128__;
            }
        }
    }
    __result129__ = (come_push_stackframe("libneo-c.c", 1353, 1159),__exception_result_var_b121=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b121)==0;
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
int __exception_result_var_b122;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional151=self==((void*)0)&&right==((void*)0),    _if_conditional151) {
        __result130__ = (_Bool)1;
        return __result130__;
    }
    else {
        if(_if_conditional152=self==((void*)0),        _if_conditional152) {
            __result131__ = (_Bool)0;
            return __result131__;
        }
        else {
            if(_if_conditional153=right==((void*)0),            _if_conditional153) {
                __result132__ = (_Bool)0;
                return __result132__;
            }
        }
    }
    __result133__ = (come_push_stackframe("libneo-c.c", 1368, 1160),__exception_result_var_b122=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b122)==0;
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
int __exception_result_var_b123;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional154=self==((void*)0)&&right==((void*)0),    _if_conditional154) {
        __result134__ = (_Bool)1;
        return __result134__;
    }
    else {
        if(_if_conditional155=self==((void*)0),        _if_conditional155) {
            __result135__ = (_Bool)0;
            return __result135__;
        }
        else {
            if(_if_conditional156=right==((void*)0),            _if_conditional156) {
                __result136__ = (_Bool)0;
                return __result136__;
            }
        }
    }
    __result137__ = (come_push_stackframe("libneo-c.c", 1383, 1161),__exception_result_var_b123=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b123)==0;
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
int __exception_result_var_b124;
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional157=self==((void*)0)&&right==((void*)0),    _if_conditional157) {
        __result138__ = (_Bool)0;
        return __result138__;
    }
    else {
        if(_if_conditional158=self==((void*)0),        _if_conditional158) {
            __result139__ = (_Bool)1;
            return __result139__;
        }
        else {
            if(_if_conditional159=right==((void*)0),            _if_conditional159) {
                __result140__ = (_Bool)1;
                return __result140__;
            }
        }
    }
    __result141__ = (come_push_stackframe("libneo-c.c", 1398, 1162),__exception_result_var_b124=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b124)!=0;
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
int __exception_result_var_b125;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional160=self==((void*)0)&&right==((void*)0),    _if_conditional160) {
        __result142__ = (_Bool)0;
        return __result142__;
    }
    else {
        if(_if_conditional161=self==((void*)0),        _if_conditional161) {
            __result143__ = (_Bool)1;
            return __result143__;
        }
        else {
            if(_if_conditional162=right==((void*)0),            _if_conditional162) {
                __result144__ = (_Bool)1;
                return __result144__;
            }
        }
    }
    __result145__ = (come_push_stackframe("libneo-c.c", 1413, 1163),__exception_result_var_b125=strcmp(self,right), come_pop_stackframe(), __exception_result_var_b125)!=0;
    return __result145__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional163;
void* right_value110;
char* __exception_result_var_b126;
char* __result146__;
unsigned long int __exception_result_var_b127;
unsigned long int __exception_result_var_b128;
int len_162;
void* right_value111;
char* result_163;
char* __exception_result_var_b129;
char* __exception_result_var_b130;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&len_162, 0, sizeof(int));
right_value111 = (void*)0;
memset(&result_163, 0, sizeof(char*));
    if(_if_conditional163=self==((void*)0)||right==((void*)0),    _if_conditional163) {
        __result146__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1420, 1164),__exception_result_var_b126=((char*)(right_value110=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b126);
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result146__;
    }
    len_162=(come_push_stackframe("libneo-c.c", 1422, 1165),__exception_result_var_b127=strlen(self), come_pop_stackframe(), __exception_result_var_b127)+(come_push_stackframe("libneo-c.c", 1422, 1166),__exception_result_var_b128=strlen(right), come_pop_stackframe(), __exception_result_var_b128);
    result_163=(char*)come_increment_ref_count(((char*)(right_value111=(char*)come_calloc(1, sizeof(char)*(1*(len_162+1)), "libneo-c.c", 1424, "char"))));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1426, 1167),__exception_result_var_b129=strncpy(result_163,self,len_162+1), come_pop_stackframe(), __exception_result_var_b129);
    (come_push_stackframe("libneo-c.c", 1427, 1168),__exception_result_var_b130=strncat(result_163,right,len_162+1), come_pop_stackframe(), __exception_result_var_b130);
    __result147__ = __result_obj__ = result_163;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result147__;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
_Bool _if_conditional164;
void* right_value112;
char* __exception_result_var_b131;
char* __result148__;
unsigned long int __exception_result_var_b132;
unsigned long int __exception_result_var_b133;
int len_164;
void* right_value113;
char* result_165;
char* __exception_result_var_b134;
char* __exception_result_var_b135;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&len_164, 0, sizeof(int));
right_value113 = (void*)0;
memset(&result_165, 0, sizeof(char*));
    if(_if_conditional164=self==((void*)0)||right==((void*)0),    _if_conditional164) {
        __result148__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1435, 1169),__exception_result_var_b131=((char*)(right_value112=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b131);
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result148__;
    }
    len_164=(come_push_stackframe("libneo-c.c", 1437, 1170),__exception_result_var_b132=strlen(self), come_pop_stackframe(), __exception_result_var_b132)+(come_push_stackframe("libneo-c.c", 1437, 1171),__exception_result_var_b133=strlen(right), come_pop_stackframe(), __exception_result_var_b133);
    result_165=(char*)come_increment_ref_count(((char*)(right_value113=(char*)come_calloc(1, sizeof(char)*(1*(len_164+1)), "libneo-c.c", 1439, "char"))));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1441, 1172),__exception_result_var_b134=strncpy(result_165,self,len_164+1), come_pop_stackframe(), __exception_result_var_b134);
    (come_push_stackframe("libneo-c.c", 1442, 1173),__exception_result_var_b135=strncat(result_165,right,len_164+1), come_pop_stackframe(), __exception_result_var_b135);
    __result149__ = __result_obj__ = result_165;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result149__;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value114;
char* __exception_result_var_b136;
char* __result150__;
void* right_value115;
void* right_value116;
struct buffer* __exception_result_var_b137;
struct buffer* buf_166;
int i_167;
struct buffer* __exception_result_var_b138;
void* right_value117;
char* __exception_result_var_b139;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&buf_166, 0, sizeof(struct buffer*));
memset(&i_167, 0, sizeof(int));
right_value117 = (void*)0;
    if(_if_conditional165=self==((void*)0),    _if_conditional165) {
        __result150__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1450, 1174),__exception_result_var_b136=((char*)(right_value114=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b136);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result150__;
    }
    buf_166=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1452, 1176),__exception_result_var_b137=((struct buffer*)(right_value116=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value115=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1452, "buffer"))), "libneo-c.c", 1452, 1175)))))), come_pop_stackframe(), __exception_result_var_b137));
    come_call_finalizer3(right_value115,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value116,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_167=0;    i_167<right;    i_167++    ){
        (come_push_stackframe("libneo-c.c", 1455, 1179),__exception_result_var_b138=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_166, "libneo-c.c", 1455, 1177)), "libneo-c.c", 1455, 1178)),self), come_pop_stackframe(), __exception_result_var_b138);
    }
    __result151__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1458, 1182),__exception_result_var_b139=((char*)(right_value117=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_166, "libneo-c.c", 1458, 1180)), "libneo-c.c", 1458, 1181))))), come_pop_stackframe(), __exception_result_var_b139);
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
_Bool _if_conditional166;
void* right_value118;
char* __exception_result_var_b140;
char* __result152__;
void* right_value119;
void* right_value120;
struct buffer* __exception_result_var_b141;
struct buffer* buf_168;
int i_169;
struct buffer* __exception_result_var_b142;
void* right_value121;
char* __exception_result_var_b143;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&buf_168, 0, sizeof(struct buffer*));
memset(&i_169, 0, sizeof(int));
right_value121 = (void*)0;
    if(_if_conditional166=self==((void*)0),    _if_conditional166) {
        __result152__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1464, 1183),__exception_result_var_b140=((char*)(right_value118=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b140);
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result152__;
    }
    buf_168=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1466, 1185),__exception_result_var_b141=((struct buffer*)(right_value120=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value119=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1466, "buffer"))), "libneo-c.c", 1466, 1184)))))), come_pop_stackframe(), __exception_result_var_b141));
    come_call_finalizer3(right_value119,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value120,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_169=0;    i_169<right;    i_169++    ){
        (come_push_stackframe("libneo-c.c", 1469, 1188),__exception_result_var_b142=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_168, "libneo-c.c", 1469, 1186)), "libneo-c.c", 1469, 1187)),self), come_pop_stackframe(), __exception_result_var_b142);
    }
    __result153__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1472, 1191),__exception_result_var_b143=((char*)(right_value121=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_168, "libneo-c.c", 1472, 1189)), "libneo-c.c", 1472, 1190))))), come_pop_stackframe(), __exception_result_var_b143);
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result153__;
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

unsigned int bool_get_hash_key(_Bool value){
void* __result_obj__;
unsigned int __exception_result_var_b144;
unsigned int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = ((come_push_stackframe("libneo-c.c", 1480, 1192),__exception_result_var_b144=int_get_hash_key(((int)value)), come_pop_stackframe(), __exception_result_var_b144));
    return __result154__;
}

unsigned int char_get_hash_key(char value){
void* __result_obj__;
unsigned int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = value;
    return __result155__;
}

unsigned int short_get_hash_key(short int value){
void* __result_obj__;
unsigned int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    __result156__ = value;
    return __result156__;
}

unsigned int int_get_hash_key(int value){
void* __result_obj__;
unsigned int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = value;
    return __result157__;
}

unsigned int long_get_hash_key(long value){
void* __result_obj__;
unsigned int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = value;
    return __result158__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
void* __result_obj__;
unsigned int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = value;
    return __result159__;
}

unsigned int float_get_hash_key(float value){
void* __result_obj__;
unsigned int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = (unsigned int)value;
    return __result160__;
}

unsigned int double_get_hash_key(double value){
void* __result_obj__;
unsigned int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
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
    if(_if_conditional167=value==((void*)0),    _if_conditional167) {
        __result162__ = 0;
        return __result162__;
    }
    result_170=0;
    p_171=value;
    while(_while_condtional7=*((char*)come_null_check(p_171, "libneo-c.c", 1525, 1193)),    _while_condtional7) {
        result_170+=(*((char*)come_null_check(p_171, "libneo-c.c", 1526, 1194)));
        p_171++;
    }
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
    if(_if_conditional168=value==((void*)0),    _if_conditional168) {
        __result164__ = 0;
        return __result164__;
    }
    result_172=0;
    p_173=value;
    while(_while_condtional8=*((char*)come_null_check(p_173, "libneo-c.c", 1539, 1195)),    _while_condtional8) {
        result_172+=(*((char*)come_null_check(p_173, "libneo-c.c", 1540, 1196)));
        p_173++;
    }
    __result165__ = result_172;
    return __result165__;
}

_Bool bool_clone(_Bool self){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = self;
    return __result166__;
}

char char_clone(char self){
void* __result_obj__;
char __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = self;
    return __result167__;
}

short int short_clone(short short self){
void* __result_obj__;
short int __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = self;
    return __result168__;
}

int int_clone(int self){
void* __result_obj__;
int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = self;
    return __result169__;
}

long int long_clone(long self){
void* __result_obj__;
long int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    __result170__ = self;
    return __result170__;
}

unsigned long int size_t_clone(unsigned long int self){
void* __result_obj__;
unsigned long int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    __result171__ = self;
    return __result171__;
}

double double_clone(double self){
void* __result_obj__;
double __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = self;
    return __result172__;
}

float float_clone(float self){
void* __result_obj__;
float __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    __result173__ = self;
    return __result173__;
}

char* charp_clone(char* self){
void* __result_obj__;
_Bool _if_conditional169;
char* __result174__;
void* right_value122;
char* __exception_result_var_b145;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    if(_if_conditional169=self==((void*)0),    _if_conditional169) {
        __result174__ = __result_obj__ = ((void*)0);
        return __result174__;
    }
    __result175__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1592, 1197),__exception_result_var_b145=((char*)(right_value122=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b145);
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
}

char* string_clone(char* self){
void* __result_obj__;
_Bool _if_conditional170;
char* __result176__;
void* right_value123;
char* __exception_result_var_b146;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    if(_if_conditional170=self==((void*)0),    _if_conditional170) {
        __result176__ = __result_obj__ = ((void*)0);
        return __result176__;
    }
    __result177__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1599, 1198),__exception_result_var_b146=((char*)(right_value123=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b146);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result177__;
}

_Bool xiswalpha(unsigned int c){
void* __result_obj__;
_Bool result_174;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(_Bool));
    result_174=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result178__ = result_174;
    return __result178__;
}

_Bool xiswblank(unsigned int c){
void* __result_obj__;
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    __result179__ = c==32||c==9;
    return __result179__;
}

_Bool xiswdigit(unsigned int c){
void* __result_obj__;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    __result180__ = (c>=48&&c<=57);
    return __result180__;
}

_Bool xiswalnum(unsigned int c){
void* __result_obj__;
_Bool __exception_result_var_b147;
_Bool __exception_result_var_b148;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
    __result181__ = (come_push_stackframe("libneo-c.c", 1623, 1199),__exception_result_var_b147=xiswalpha(c), come_pop_stackframe(), __exception_result_var_b147)||(come_push_stackframe("libneo-c.c", 1623, 1200),__exception_result_var_b148=xiswdigit(c), come_pop_stackframe(), __exception_result_var_b148);
    return __result181__;
}

_Bool xisalpha(char c){
void* __result_obj__;
_Bool result_175;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(_Bool));
    result_175=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result182__ = result_175;
    return __result182__;
}

_Bool xisblank(char c){
void* __result_obj__;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    __result183__ = c==32||c==9;
    return __result183__;
}

_Bool xisdigit(char c){
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    __result184__ = (c>=48&&c<=57);
    return __result184__;
}

_Bool xisalnum(char c){
void* __result_obj__;
_Bool __exception_result_var_b149;
_Bool __exception_result_var_b150;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    __result185__ = (come_push_stackframe("libneo-c.c", 1644, 1201),__exception_result_var_b149=xisalpha(c), come_pop_stackframe(), __exception_result_var_b149)||(come_push_stackframe("libneo-c.c", 1644, 1202),__exception_result_var_b150=xisdigit(c), come_pop_stackframe(), __exception_result_var_b150);
    return __result185__;
}

_Bool xisascii(char c){
void* __result_obj__;
_Bool result_176;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(_Bool));
    result_176=(c>=32&&c<=126);
    __result186__ = result_176;
    return __result186__;
}

_Bool xiswascii(unsigned int c){
void* __result_obj__;
_Bool result_177;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_177, 0, sizeof(_Bool));
    result_177=(c>=32&&c<=126);
    __result187__ = result_177;
    return __result187__;
}

int string_length(char* str){
void* __result_obj__;
_Bool _if_conditional171;
int __result188__;
unsigned long int __exception_result_var_b151;
int __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional171=str==((void*)0),    _if_conditional171) {
        __result188__ = 0;
        return __result188__;
    }
    __result189__ = (come_push_stackframe("libneo-c.c", 1667, 1203),__exception_result_var_b151=strlen(str), come_pop_stackframe(), __exception_result_var_b151);
    return __result189__;
}

int charp_length(char* str){
void* __result_obj__;
_Bool _if_conditional172;
int __result190__;
unsigned long int __exception_result_var_b152;
int __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional172=str==((void*)0),    _if_conditional172) {
        __result190__ = 0;
        return __result190__;
    }
    __result191__ = (come_push_stackframe("libneo-c.c", 1674, 1204),__exception_result_var_b152=strlen(str), come_pop_stackframe(), __exception_result_var_b152);
    return __result191__;
}

char* string_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional173;
void* right_value124;
char* __exception_result_var_b153;
char* __result192__;
unsigned long int __exception_result_var_b154;
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
    if(_if_conditional173=str==((void*)0),    _if_conditional173) {
        __result192__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1680, 1205),__exception_result_var_b153=((char*)(right_value124=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b153);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result192__;
    }
    len_178=(come_push_stackframe("libneo-c.c", 1682, 1206),__exception_result_var_b154=strlen(str), come_pop_stackframe(), __exception_result_var_b154);
    result_179=(char*)come_increment_ref_count(((char*)(right_value125=(char*)come_calloc(1, sizeof(char)*(1*(len_178+1)), "libneo-c.c", 1683, "char"))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_180=0;    i_180<len_178;    i_180++    ){
        ((char*)come_null_check(result_179, "libneo-c.c", 1686, 1207))[i_180]=((char*)come_null_check(str, "libneo-c.c", 1686, 1208))[len_178-i_180-1];
    }
    ((char*)come_null_check(result_179, "libneo-c.c", 1689, 1209))[len_178]=0;
    __result193__ = __result_obj__ = result_179;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result193__;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_reverse(char* str){
void* __result_obj__;
_Bool _if_conditional174;
void* right_value126;
char* __exception_result_var_b155;
char* __result194__;
unsigned long int __exception_result_var_b156;
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
    if(_if_conditional174=str==((void*)0),    _if_conditional174) {
        __result194__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1697, 1210),__exception_result_var_b155=((char*)(right_value126=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b155);
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result194__;
    }
    len_181=(come_push_stackframe("libneo-c.c", 1699, 1211),__exception_result_var_b156=strlen(str), come_pop_stackframe(), __exception_result_var_b156);
    result_182=(char*)come_increment_ref_count(((char*)(right_value127=(char*)come_calloc(1, sizeof(char)*(1*(len_181+1)), "libneo-c.c", 1700, "char"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_183=0;    i_183<len_181;    i_183++    ){
        ((char*)come_null_check(result_182, "libneo-c.c", 1703, 1212))[i_183]=((char*)come_null_check(str, "libneo-c.c", 1703, 1213))[len_181-i_183-1];
    }
    ((char*)come_null_check(result_182, "libneo-c.c", 1706, 1214))[len_181]=0;
    __result195__ = __result_obj__ = result_182;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result195__;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value128;
char* __exception_result_var_b157;
char* __result196__;
unsigned long int __exception_result_var_b158;
int len_184;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value129;
char* __exception_result_var_b159;
void* right_value130;
char* __exception_result_var_b160;
char* __result197__;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value131;
char* __exception_result_var_b161;
char* __result198__;
_Bool _if_conditional182;
void* right_value132;
char* __exception_result_var_b162;
char* __result199__;
void* right_value133;
char* result_185;
void* __exception_result_var_b163;
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
    if(_if_conditional175=str==((void*)0),    _if_conditional175) {
        __result196__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1713, 1215),__exception_result_var_b157=((char*)(right_value128=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b157);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result196__;
    }
    len_184=(come_push_stackframe("libneo-c.c", 1716, 1216),__exception_result_var_b158=strlen(str), come_pop_stackframe(), __exception_result_var_b158);
    if(_if_conditional176=head<0,    _if_conditional176) {
        head+=len_184;
    }
    if(_if_conditional177=tail<0,    _if_conditional177) {
        tail+=len_184+1;
    }
    if(_if_conditional178=head>tail,    _if_conditional178) {
        __result197__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1726, 1222),__exception_result_var_b160=((char*)(right_value130=string_reverse(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c.c", 1726, 1219),__exception_result_var_b159=((char*)(right_value129=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c.c", 1726, 1217)), "libneo-c.c", 1726, 1218)),tail,head))), come_pop_stackframe(), __exception_result_var_b159), "libneo-c.c", 1726, 1220)), "libneo-c.c", 1726, 1221))))), come_pop_stackframe(), __exception_result_var_b160);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result197__;
    }
    if(_if_conditional179=head<0,    _if_conditional179) {
        head=0;
    }
    if(_if_conditional180=tail>=len_184,    _if_conditional180) {
        tail=len_184;
    }
    if(_if_conditional181=head==tail,    _if_conditional181) {
        __result198__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1738, 1223),__exception_result_var_b161=((char*)(right_value131=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b161);
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result198__;
    }
    if(_if_conditional182=tail-head+1<1,    _if_conditional182) {
        __result199__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1742, 1224),__exception_result_var_b162=((char*)(right_value132=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b162);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    result_185=(char*)come_increment_ref_count(((char*)(right_value133=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1745, "char"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1747, 1225),__exception_result_var_b163=memcpy(result_185,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b163);
    ((char*)come_null_check(result_185, "libneo-c.c", 1748, 1226))[tail-head]=0;
    __result200__ = __result_obj__ = result_185;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result200__;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional183;
void* right_value134;
char* __exception_result_var_b164;
char* __result201__;
unsigned long int __exception_result_var_b165;
int len_186;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value135;
char* __exception_result_var_b166;
void* right_value136;
char* __exception_result_var_b167;
char* __result202__;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value137;
char* __exception_result_var_b168;
char* __result203__;
_Bool _if_conditional190;
void* right_value138;
char* __exception_result_var_b169;
char* __result204__;
void* right_value139;
char* result_187;
void* __exception_result_var_b170;
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
    if(_if_conditional183=str==((void*)0),    _if_conditional183) {
        __result201__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1756, 1227),__exception_result_var_b164=((char*)(right_value134=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b164);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result201__;
    }
    len_186=(come_push_stackframe("libneo-c.c", 1759, 1228),__exception_result_var_b165=strlen(str), come_pop_stackframe(), __exception_result_var_b165);
    if(_if_conditional184=head<0,    _if_conditional184) {
        head+=len_186;
    }
    if(_if_conditional185=tail<0,    _if_conditional185) {
        tail+=len_186+1;
    }
    if(_if_conditional186=head>tail,    _if_conditional186) {
        __result202__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1769, 1234),__exception_result_var_b167=((char*)(right_value136=string_reverse(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c.c", 1769, 1231),__exception_result_var_b166=((char*)(right_value135=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c.c", 1769, 1229)), "libneo-c.c", 1769, 1230)),tail,head))), come_pop_stackframe(), __exception_result_var_b166), "libneo-c.c", 1769, 1232)), "libneo-c.c", 1769, 1233))))), come_pop_stackframe(), __exception_result_var_b167);
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result202__;
    }
    if(_if_conditional187=head<0,    _if_conditional187) {
        head=0;
    }
    if(_if_conditional188=tail>=len_186,    _if_conditional188) {
        tail=len_186;
    }
    if(_if_conditional189=head==tail,    _if_conditional189) {
        __result203__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1781, 1235),__exception_result_var_b168=((char*)(right_value137=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b168);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result203__;
    }
    if(_if_conditional190=tail-head+1<1,    _if_conditional190) {
        __result204__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1785, 1236),__exception_result_var_b169=((char*)(right_value138=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b169);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    result_187=(char*)come_increment_ref_count(((char*)(right_value139=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1788, "char"))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1790, 1237),__exception_result_var_b170=memcpy(result_187,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b170);
    ((char*)come_null_check(result_187, "libneo-c.c", 1791, 1238))[tail-head]=0;
    __result205__ = __result_obj__ = result_187;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result205__;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional191;
void* right_value140;
char* __exception_result_var_b171;
char* __result206__;
unsigned long int __exception_result_var_b172;
int len_188;
_Bool _if_conditional192;
_Bool _if_conditional193;
_Bool _if_conditional194;
void* right_value141;
char* __exception_result_var_b173;
void* right_value142;
char* __exception_result_var_b174;
char* __result207__;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value143;
char* __exception_result_var_b175;
char* __result208__;
_Bool _if_conditional198;
void* right_value144;
char* __exception_result_var_b176;
char* __result209__;
void* right_value145;
char* result_189;
void* __exception_result_var_b177;
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
    if(_if_conditional191=str==((void*)0),    _if_conditional191) {
        __result206__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1799, 1239),__exception_result_var_b171=((char*)(right_value140=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b171);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result206__;
    }
    len_188=(come_push_stackframe("libneo-c.c", 1802, 1240),__exception_result_var_b172=strlen(str), come_pop_stackframe(), __exception_result_var_b172);
    if(_if_conditional192=head<0,    _if_conditional192) {
        head+=len_188;
    }
    if(_if_conditional193=tail<0,    _if_conditional193) {
        tail+=len_188+1;
    }
    if(_if_conditional194=head>tail,    _if_conditional194) {
        __result207__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1812, 1246),__exception_result_var_b174=((char*)(right_value142=string_reverse(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c.c", 1812, 1243),__exception_result_var_b173=((char*)(right_value141=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c.c", 1812, 1241)), "libneo-c.c", 1812, 1242)),tail,head))), come_pop_stackframe(), __exception_result_var_b173), "libneo-c.c", 1812, 1244)), "libneo-c.c", 1812, 1245))))), come_pop_stackframe(), __exception_result_var_b174);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    if(_if_conditional195=head<0,    _if_conditional195) {
        head=0;
    }
    if(_if_conditional196=tail>=len_188,    _if_conditional196) {
        tail=len_188;
    }
    if(_if_conditional197=head==tail,    _if_conditional197) {
        __result208__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1824, 1247),__exception_result_var_b175=((char*)(right_value143=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b175);
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result208__;
    }
    if(_if_conditional198=tail-head+1<1,    _if_conditional198) {
        __result209__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1828, 1248),__exception_result_var_b176=((char*)(right_value144=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b176);
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    result_189=(char*)come_increment_ref_count(((char*)(right_value145=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1831, "char"))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1833, 1249),__exception_result_var_b177=memcpy(result_189,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b177);
    ((char*)come_null_check(result_189, "libneo-c.c", 1834, 1250))[tail-head]=0;
    __result210__ = __result_obj__ = result_189;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result210__;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional199;
void* right_value146;
char* __exception_result_var_b178;
char* __result211__;
unsigned long int __exception_result_var_b179;
int len_190;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value147;
char* __exception_result_var_b180;
void* right_value148;
char* __exception_result_var_b181;
char* __result212__;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value149;
char* __exception_result_var_b182;
char* __result213__;
_Bool _if_conditional206;
void* right_value150;
char* __exception_result_var_b183;
char* __result214__;
void* right_value151;
char* result_191;
void* __exception_result_var_b184;
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
    if(_if_conditional199=str==((void*)0),    _if_conditional199) {
        __result211__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1842, 1251),__exception_result_var_b178=((char*)(right_value146=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b178);
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result211__;
    }
    len_190=(come_push_stackframe("libneo-c.c", 1845, 1252),__exception_result_var_b179=strlen(str), come_pop_stackframe(), __exception_result_var_b179);
    if(_if_conditional200=head<0,    _if_conditional200) {
        head+=len_190;
    }
    if(_if_conditional201=tail<0,    _if_conditional201) {
        tail+=len_190+1;
    }
    if(_if_conditional202=head>tail,    _if_conditional202) {
        __result212__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1855, 1258),__exception_result_var_b181=((char*)(right_value148=string_reverse(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("libneo-c.c", 1855, 1255),__exception_result_var_b180=((char*)(right_value147=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c.c", 1855, 1253)), "libneo-c.c", 1855, 1254)),tail,head))), come_pop_stackframe(), __exception_result_var_b180), "libneo-c.c", 1855, 1256)), "libneo-c.c", 1855, 1257))))), come_pop_stackframe(), __exception_result_var_b181);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result212__;
    }
    if(_if_conditional203=head<0,    _if_conditional203) {
        head=0;
    }
    if(_if_conditional204=tail>=len_190,    _if_conditional204) {
        tail=len_190;
    }
    if(_if_conditional205=head==tail,    _if_conditional205) {
        __result213__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1867, 1259),__exception_result_var_b182=((char*)(right_value149=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b182);
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result213__;
    }
    if(_if_conditional206=tail-head+1<1,    _if_conditional206) {
        __result214__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1871, 1260),__exception_result_var_b183=((char*)(right_value150=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b183);
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result214__;
    }
    result_191=(char*)come_increment_ref_count(((char*)(right_value151=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1874, "char"))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1876, 1261),__exception_result_var_b184=memcpy(result_191,str+head,tail-head), come_pop_stackframe(), __exception_result_var_b184);
    ((char*)come_null_check(result_191, "libneo-c.c", 1877, 1262))[tail-head]=0;
    __result215__ = __result_obj__ = result_191;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result215__;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
_Bool _if_conditional207;
void* right_value152;
char* __exception_result_var_b185;
char* __result216__;
va_list args_192;
char* result_193;
int __exception_result_var_b186;
int len_194;
_Bool _if_conditional208;
void* right_value153;
char* __exception_result_var_b187;
char* __result217__;
void* right_value154;
char* __exception_result_var_b188;
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
    if(_if_conditional207=msg==((void*)0),    _if_conditional207) {
        __result216__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1885, 1263),__exception_result_var_b185=((char*)(right_value152=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b185);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result216__;
    }
    (come_push_stackframe("libneo-c.c", 1888,1264),__builtin_va_start(args_192,msg),come_pop_stackframe());
    len_194=(come_push_stackframe("libneo-c.c", 1890, 1265),__exception_result_var_b186=vasprintf(&result_193,msg,args_192), come_pop_stackframe(), __exception_result_var_b186);
    (come_push_stackframe("libneo-c.c", 1891,1266),__builtin_va_end(args_192),come_pop_stackframe());
    if(_if_conditional208=len_194<0,    _if_conditional208) {
        __result217__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1894, 1267),__exception_result_var_b187=((char*)(right_value153=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b187);
        come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result217__;
    }
    result2_195=(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1897, 1268),__exception_result_var_b188=((char*)(right_value154=__builtin_string(result_193))), come_pop_stackframe(), __exception_result_var_b188));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1899,1269),free(result_193),come_pop_stackframe());
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
char* __exception_result_var_b189;
char* __result219__;
unsigned long int __exception_result_var_b190;
int len_196;
int __exception_result_var_b191;
_Bool _if_conditional210;
void* right_value156;
char* __exception_result_var_b192;
char* __result220__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value157;
char* __exception_result_var_b193;
char* __result221__;
_Bool _if_conditional215;
void* right_value158;
char* __exception_result_var_b194;
char* sub_str_197;
int __exception_result_var_b195;
void* __exception_result_var_b196;
void* right_value159;
char* __exception_result_var_b197;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&len_196, 0, sizeof(int));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&sub_str_197, 0, sizeof(char*));
right_value159 = (void*)0;
    if(_if_conditional209=str==((void*)0),    _if_conditional209) {
        __result219__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1907, 1270),__exception_result_var_b189=((char*)(right_value155=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b189);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result219__;
    }
    len_196=(come_push_stackframe("libneo-c.c", 1910, 1271),__exception_result_var_b190=strlen(str), come_pop_stackframe(), __exception_result_var_b190);
    if(_if_conditional210=(come_push_stackframe("libneo-c.c", 1912, 1272),__exception_result_var_b191=strcmp(str,""), come_pop_stackframe(), __exception_result_var_b191)==0,    _if_conditional210) {
        __result220__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1913, 1273),__exception_result_var_b192=((char*)(right_value156=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b192);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result220__;
    }
    if(_if_conditional211=head<0,    _if_conditional211) {
        head+=len_196;
    }
    if(_if_conditional212=tail<0,    _if_conditional212) {
        tail+=len_196+1;
    }
    if(_if_conditional213=head<0,    _if_conditional213) {
        head=0;
    }
    if(_if_conditional214=tail<0,    _if_conditional214) {
        __result221__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1929, 1274),__exception_result_var_b193=((char*)(right_value157=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b193);
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result221__;
    }
    if(_if_conditional215=tail>=len_196,    _if_conditional215) {
        tail=len_196;
    }
    sub_str_197=(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1936, 1277),__exception_result_var_b194=((char*)(right_value158=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c.c", 1936, 1275)), "libneo-c.c", 1936, 1276)),tail,-1))), come_pop_stackframe(), __exception_result_var_b194));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1938, 1281),__exception_result_var_b196=memcpy(str+head,sub_str_197,(come_push_stackframe("libneo-c.c", 1938, 1280),__exception_result_var_b195=string_length(((char*)come_null_check(((char*)come_null_check(sub_str_197, "libneo-c.c", 1938, 1278)), "libneo-c.c", 1938, 1279))), come_pop_stackframe(), __exception_result_var_b195)+1), come_pop_stackframe(), __exception_result_var_b196);
    __result222__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1940, 1282),__exception_result_var_b197=((char*)(right_value159=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b197);
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result222__;
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
_Bool _if_conditional216;
void* right_value160;
char* __exception_result_var_b198;
char* __result223__;
unsigned long int __exception_result_var_b199;
int len_198;
int __exception_result_var_b200;
_Bool _if_conditional217;
void* right_value161;
char* __exception_result_var_b201;
char* __result224__;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value162;
char* __exception_result_var_b202;
char* __result225__;
_Bool _if_conditional222;
void* right_value163;
char* __exception_result_var_b203;
char* sub_str_199;
int __exception_result_var_b204;
void* __exception_result_var_b205;
void* right_value164;
char* __exception_result_var_b206;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&len_198, 0, sizeof(int));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&sub_str_199, 0, sizeof(char*));
right_value164 = (void*)0;
    if(_if_conditional216=str==((void*)0),    _if_conditional216) {
        __result223__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1946, 1283),__exception_result_var_b198=((char*)(right_value160=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b198);
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result223__;
    }
    len_198=(come_push_stackframe("libneo-c.c", 1949, 1284),__exception_result_var_b199=strlen(str), come_pop_stackframe(), __exception_result_var_b199);
    if(_if_conditional217=(come_push_stackframe("libneo-c.c", 1951, 1285),__exception_result_var_b200=strcmp(str,""), come_pop_stackframe(), __exception_result_var_b200)==0,    _if_conditional217) {
        __result224__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1952, 1286),__exception_result_var_b201=((char*)(right_value161=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b201);
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result224__;
    }
    if(_if_conditional218=head<0,    _if_conditional218) {
        head+=len_198;
    }
    if(_if_conditional219=tail<0,    _if_conditional219) {
        tail+=len_198+1;
    }
    if(_if_conditional220=head<0,    _if_conditional220) {
        head=0;
    }
    if(_if_conditional221=tail<0,    _if_conditional221) {
        __result225__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1968, 1287),__exception_result_var_b202=((char*)(right_value162=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b202);
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result225__;
    }
    if(_if_conditional222=tail>=len_198,    _if_conditional222) {
        tail=len_198;
    }
    sub_str_199=(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1975, 1290),__exception_result_var_b203=((char*)(right_value163=charp_substring(((char*)come_null_check(((char*)come_null_check(str, "libneo-c.c", 1975, 1288)), "libneo-c.c", 1975, 1289)),tail,-1))), come_pop_stackframe(), __exception_result_var_b203));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 1977, 1294),__exception_result_var_b205=memcpy(str+head,sub_str_199,(come_push_stackframe("libneo-c.c", 1977, 1293),__exception_result_var_b204=string_length(((char*)come_null_check(((char*)come_null_check(sub_str_199, "libneo-c.c", 1977, 1291)), "libneo-c.c", 1977, 1292))), come_pop_stackframe(), __exception_result_var_b204)+1), come_pop_stackframe(), __exception_result_var_b205);
    __result226__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1979, 1295),__exception_result_var_b206=((char*)(right_value164=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b206);
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
struct list$1charph* __exception_result_var_b207;
struct list$1charph* __result228__;
void* right_value167;
void* right_value168;
struct list$1charph* __exception_result_var_b208;
struct list$1charph* result_202;
void* right_value169;
void* right_value170;
struct buffer* __exception_result_var_b209;
struct buffer* str_203;
int i_204;
int __exception_result_var_b210;
_Bool _if_conditional225;
void* right_value174;
char* __exception_result_var_b211;
struct list$1charph* __exception_result_var_b212;
struct buffer* __exception_result_var_b213;
int __exception_result_var_b214;
_Bool _if_conditional228;
void* right_value175;
char* __exception_result_var_b215;
struct list$1charph* __exception_result_var_b216;
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
    if(_if_conditional223=self==((void*)0),    _if_conditional223) {
        __result228__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 1985, 1311),__exception_result_var_b207=((struct list$1charph*)(right_value166=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value165=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1985, "list$1charph"))), "libneo-c.c", 1985, 1296)))))), come_pop_stackframe(), __exception_result_var_b207);
        come_call_finalizer3(right_value165,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value166,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result228__;
    }
    result_202=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1988, 1314),__exception_result_var_b208=((struct list$1charph*)(right_value168=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1988, "list$1charph"))), "libneo-c.c", 1988, 1312)), "libneo-c.c", 1988, 1313)))))), come_pop_stackframe(), __exception_result_var_b208));
    come_call_finalizer3(right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value168,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    str_203=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1990, 1317),__exception_result_var_b209=((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1990, "buffer"))), "libneo-c.c", 1990, 1315)), "libneo-c.c", 1990, 1316)))))), come_pop_stackframe(), __exception_result_var_b209));
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_204=0;    i_204<(come_push_stackframe("libneo-c.c", 1992, 1320),__exception_result_var_b210=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c.c", 1992, 1318)), "libneo-c.c", 1992, 1319))), come_pop_stackframe(), __exception_result_var_b210);    i_204++    ){
        if(_if_conditional225=((char*)come_null_check(self, "libneo-c.c", 1993, 1321))[i_204]==c,        _if_conditional225) {
            (come_push_stackframe("libneo-c.c", 1994, 1371),__exception_result_var_b212=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_202, "libneo-c.c", 1994, 1322)), "libneo-c.c", 1994, 1323)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 1994, 1370),__exception_result_var_b211=((char*)(right_value174=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_203, "libneo-c.c", 1994, 1368)), "libneo-c.c", 1994, 1369))->buf))), come_pop_stackframe(), __exception_result_var_b211))), come_pop_stackframe(), __exception_result_var_b212);
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c.c", 1995,1374),buffer_reset(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_203, "libneo-c.c", 1995, 1372)), "libneo-c.c", 1995, 1373))),come_pop_stackframe());
        }
        else {
            (come_push_stackframe("libneo-c.c", 1998, 1378),__exception_result_var_b213=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_203, "libneo-c.c", 1998, 1375)), "libneo-c.c", 1998, 1376)),((char*)come_null_check(self, "libneo-c.c", 1998, 1377))[i_204]), come_pop_stackframe(), __exception_result_var_b213);
        }
    }
    if(_if_conditional228=(come_push_stackframe("libneo-c.c", 2001, 1381),__exception_result_var_b214=buffer_length(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_203, "libneo-c.c", 2001, 1379)), "libneo-c.c", 2001, 1380))), come_pop_stackframe(), __exception_result_var_b214)!=0,    _if_conditional228) {
        (come_push_stackframe("libneo-c.c", 2002, 1387),__exception_result_var_b216=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_202, "libneo-c.c", 2002, 1382)), "libneo-c.c", 2002, 1383)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2002, 1386),__exception_result_var_b215=((char*)(right_value175=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_203, "libneo-c.c", 2002, 1384)), "libneo-c.c", 2002, 1385))->buf))), come_pop_stackframe(), __exception_result_var_b215))), come_pop_stackframe(), __exception_result_var_b216);
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
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
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1297)), "./neo-c.h", 101, 1298))->head=((void*)0);
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1299)), "./neo-c.h", 102, 1300))->tail=((void*)0);
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1301)), "./neo-c.h", 103, 1302))->len=0;
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
                it_200=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1303)), "./neo-c.h", 120, 1304))->head;
                while(_while_condtional9=it_200!=((void*)0),                _while_condtional9) {
                    prev_it_201=it_200;
                    it_200=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_200, "./neo-c.h", 123, 1305)), "./neo-c.h", 123, 1306))->next;
                    come_call_finalizer3(prev_it_201,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional224=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 1307)), "list_item$1charphp_finalize", 0, 1308))->item!=((void*)0),                        _if_conditional224) {
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 1309)), "list_item$1charphp_finalize", 0, 1310))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 1309)), "list_item$1charphp_finalize", 0, 1310))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                if(_if_conditional226=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 1324)), "./neo-c.h", 222, 1325))->len==0,                _if_conditional226) {
                    litem_205=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph"))));
                    come_call_finalizer3(right_value171,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_205, "./neo-c.h", 225, 1326)), "./neo-c.h", 225, 1327))->prev=((void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_205, "./neo-c.h", 226, 1328)), "./neo-c.h", 226, 1329))->next=((void*)0);
                    __dec_obj22=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_205, "./neo-c.h", 227, 1330)), "./neo-c.h", 227, 1331))->item;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_205, "./neo-c.h", 227, 1330)), "./neo-c.h", 227, 1331))->item=(char*)come_increment_ref_count(item);
                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 1332)), "./neo-c.h", 229, 1333))->tail=litem_205;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 1334)), "./neo-c.h", 230, 1335))->head=litem_205;
                }
                else {
                    if(_if_conditional227=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 1336)), "./neo-c.h", 232, 1337))->len==1,                    _if_conditional227) {
                        litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph"))));
                        come_call_finalizer3(right_value172,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_206, "./neo-c.h", 235, 1338)), "./neo-c.h", 235, 1339))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 1340)), "./neo-c.h", 235, 1341))->head;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_206, "./neo-c.h", 236, 1342)), "./neo-c.h", 236, 1343))->next=((void*)0);
                        __dec_obj23=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_206, "./neo-c.h", 237, 1344)), "./neo-c.h", 237, 1345))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_206, "./neo-c.h", 237, 1344)), "./neo-c.h", 237, 1345))->item=(char*)come_increment_ref_count(item);
                        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 1346)), "./neo-c.h", 239, 1347))->tail=litem_206;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 1348)), "./neo-c.h", 240, 1349))->head, "./neo-c.h", 240, 1350)), "./neo-c.h", 240, 1351))->next=litem_206;
                    }
                    else {
                        litem_207=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph"))));
                        come_call_finalizer3(right_value173,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_207, "./neo-c.h", 245, 1352)), "./neo-c.h", 245, 1353))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 1354)), "./neo-c.h", 245, 1355))->tail;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_207, "./neo-c.h", 246, 1356)), "./neo-c.h", 246, 1357))->next=((void*)0);
                        __dec_obj24=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_207, "./neo-c.h", 247, 1358)), "./neo-c.h", 247, 1359))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_207, "./neo-c.h", 247, 1358)), "./neo-c.h", 247, 1359))->item=(char*)come_increment_ref_count(item);
                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 1360)), "./neo-c.h", 249, 1361))->tail, "./neo-c.h", 249, 1362)), "./neo-c.h", 249, 1363))->next=litem_207;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 1364)), "./neo-c.h", 250, 1365))->tail=litem_207;
                    }
                }
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 1366)), "./neo-c.h", 253, 1367))->len++;
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
struct list$1charph* __exception_result_var_b217;
struct list$1charph* __result231__;
void* right_value178;
void* right_value179;
struct list$1charph* __exception_result_var_b218;
struct list$1charph* result_208;
void* right_value180;
void* right_value181;
struct buffer* __exception_result_var_b219;
struct buffer* str_209;
int i_210;
int __exception_result_var_b220;
_Bool _if_conditional230;
void* right_value182;
char* __exception_result_var_b221;
struct list$1charph* __exception_result_var_b222;
struct buffer* __exception_result_var_b223;
int __exception_result_var_b224;
_Bool _if_conditional231;
void* right_value183;
char* __exception_result_var_b225;
struct list$1charph* __exception_result_var_b226;
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
    if(_if_conditional229=self==((void*)0),    _if_conditional229) {
        __result231__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2011, 1389),__exception_result_var_b217=((struct list$1charph*)(right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2011, "list$1charph"))), "libneo-c.c", 2011, 1388)))))), come_pop_stackframe(), __exception_result_var_b217);
        come_call_finalizer3(right_value176,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result231__;
    }
    result_208=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2014, 1392),__exception_result_var_b218=((struct list$1charph*)(right_value179=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value178=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2014, "list$1charph"))), "libneo-c.c", 2014, 1390)), "libneo-c.c", 2014, 1391)))))), come_pop_stackframe(), __exception_result_var_b218));
    come_call_finalizer3(right_value178,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    str_209=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2016, 1395),__exception_result_var_b219=((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2016, "buffer"))), "libneo-c.c", 2016, 1393)), "libneo-c.c", 2016, 1394)))))), come_pop_stackframe(), __exception_result_var_b219));
    come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_210=0;    i_210<(come_push_stackframe("libneo-c.c", 2018, 1398),__exception_result_var_b220=charp_length(((char*)come_null_check(((char*)come_null_check(self, "libneo-c.c", 2018, 1396)), "libneo-c.c", 2018, 1397))), come_pop_stackframe(), __exception_result_var_b220);    i_210++    ){
        if(_if_conditional230=((char*)come_null_check(self, "libneo-c.c", 2019, 1399))[i_210]==c,        _if_conditional230) {
            (come_push_stackframe("libneo-c.c", 2020, 1405),__exception_result_var_b222=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_208, "libneo-c.c", 2020, 1400)), "libneo-c.c", 2020, 1401)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2020, 1404),__exception_result_var_b221=((char*)(right_value182=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_209, "libneo-c.c", 2020, 1402)), "libneo-c.c", 2020, 1403))->buf))), come_pop_stackframe(), __exception_result_var_b221))), come_pop_stackframe(), __exception_result_var_b222);
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("libneo-c.c", 2021,1408),buffer_reset(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_209, "libneo-c.c", 2021, 1406)), "libneo-c.c", 2021, 1407))),come_pop_stackframe());
        }
        else {
            (come_push_stackframe("libneo-c.c", 2024, 1412),__exception_result_var_b223=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_209, "libneo-c.c", 2024, 1409)), "libneo-c.c", 2024, 1410)),((char*)come_null_check(self, "libneo-c.c", 2024, 1411))[i_210]), come_pop_stackframe(), __exception_result_var_b223);
        }
    }
    if(_if_conditional231=(come_push_stackframe("libneo-c.c", 2027, 1415),__exception_result_var_b224=buffer_length(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_209, "libneo-c.c", 2027, 1413)), "libneo-c.c", 2027, 1414))), come_pop_stackframe(), __exception_result_var_b224)!=0,    _if_conditional231) {
        (come_push_stackframe("libneo-c.c", 2028, 1421),__exception_result_var_b226=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_208, "libneo-c.c", 2028, 1416)), "libneo-c.c", 2028, 1417)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2028, 1420),__exception_result_var_b225=((char*)(right_value183=__builtin_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(str_209, "libneo-c.c", 2028, 1418)), "libneo-c.c", 2028, 1419))->buf))), come_pop_stackframe(), __exception_result_var_b225))), come_pop_stackframe(), __exception_result_var_b226);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
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
char* __exception_result_var_b227;
char* __result233__;
unsigned long int __exception_result_var_b228;
char* p_211;
_Bool _while_condtional10;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value185;
char* __exception_result_var_b229;
char* __result234__;
void* right_value186;
char* __exception_result_var_b230;
char* __result235__;
void* right_value187;
char* __exception_result_var_b231;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&p_211, 0, sizeof(char*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    if(_if_conditional232=path==((void*)0),    _if_conditional232) {
        __result233__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2040, 1422),__exception_result_var_b227=((char*)(right_value184=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b227);
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result233__;
    }
    p_211=path+(come_push_stackframe("libneo-c.c", 2042, 1423),__exception_result_var_b228=strlen(path), come_pop_stackframe(), __exception_result_var_b228);
    while(_while_condtional10=p_211>=path,    _while_condtional10) {
        if(_if_conditional233=*((char*)come_null_check(p_211, "libneo-c.c", 2045, 1424))==47,        _if_conditional233) {
            break;
        }
        else {
            p_211--;
        }
    }
    if(_if_conditional234=p_211<path,    _if_conditional234) {
        __result234__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2054, 1425),__exception_result_var_b229=((char*)(right_value185=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b229);
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result234__;
    }
    else {
        __result235__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2057, 1426),__exception_result_var_b230=((char*)(right_value186=__builtin_string(p_211+1))), come_pop_stackframe(), __exception_result_var_b230);
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result235__;
    }
    __result236__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2060, 1427),__exception_result_var_b231=((char*)(right_value187=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b231);
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result236__;
}

char* xdirname(char* path){
void* __result_obj__;
_Bool _if_conditional235;
void* right_value188;
char* __exception_result_var_b232;
char* __result237__;
void* right_value189;
char* __exception_result_var_b233;
char* __exception_result_var_b234;
void* right_value190;
char* __exception_result_var_b235;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
    if(_if_conditional235=path==((void*)0),    _if_conditional235) {
        __result237__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2066, 1428),__exception_result_var_b232=((char*)(right_value188=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b232);
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result237__;
    }
    __result238__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2068, 1431),__exception_result_var_b235=((char*)(right_value190=__builtin_string((come_push_stackframe("libneo-c.c", 2068, 1430),__exception_result_var_b234=dirname((come_push_stackframe("libneo-c.c", 2068, 1429),__exception_result_var_b233=((char*)(right_value189=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b233)), come_pop_stackframe(), __exception_result_var_b234)))), come_pop_stackframe(), __exception_result_var_b235);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result238__;
}

char* xnoextname(char* path){
void* __result_obj__;
_Bool _if_conditional236;
void* right_value191;
char* __exception_result_var_b236;
char* __result239__;
void* right_value192;
char* __exception_result_var_b237;
char* path2_212;
unsigned long int __exception_result_var_b238;
char* p_213;
_Bool _while_condtional11;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value193;
char* __exception_result_var_b239;
char* __result240__;
void* right_value194;
char* __exception_result_var_b240;
char* __result241__;
void* right_value195;
char* __exception_result_var_b241;
char* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&path2_212, 0, sizeof(char*));
memset(&p_213, 0, sizeof(char*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
    if(_if_conditional236=path==((void*)0),    _if_conditional236) {
        __result239__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2074, 1432),__exception_result_var_b236=((char*)(right_value191=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b236);
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result239__;
    }
    path2_212=(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2076, 1433),__exception_result_var_b237=((char*)(right_value192=xbasename(path))), come_pop_stackframe(), __exception_result_var_b237));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    p_213=path2_212+(come_push_stackframe("libneo-c.c", 2078, 1434),__exception_result_var_b238=strlen(path2_212), come_pop_stackframe(), __exception_result_var_b238);
    while(_while_condtional11=p_213>=path2_212,    _while_condtional11) {
        if(_if_conditional237=*((char*)come_null_check(p_213, "libneo-c.c", 2081, 1435))==46,        _if_conditional237) {
            break;
        }
        else {
            p_213--;
        }
    }
    if(_if_conditional238=p_213<path2_212,    _if_conditional238) {
        __result240__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2090, 1436),__exception_result_var_b239=((char*)(right_value193=__builtin_string(path2_212))), come_pop_stackframe(), __exception_result_var_b239);
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result240__;
    }
    else {
        __result241__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2093, 1439),__exception_result_var_b240=((char*)(right_value194=string_substring(((char*)come_null_check(((char*)come_null_check(path2_212, "libneo-c.c", 2093, 1437)), "libneo-c.c", 2093, 1438)),0,p_213-path2_212))), come_pop_stackframe(), __exception_result_var_b240);
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result241__;
    }
    __result242__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2096, 1440),__exception_result_var_b241=((char*)(right_value195=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b241);
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result242__;
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xextname(char* path){
void* __result_obj__;
_Bool _if_conditional239;
void* right_value196;
char* __exception_result_var_b242;
char* __result243__;
unsigned long int __exception_result_var_b243;
char* p_214;
_Bool _while_condtional12;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value197;
char* __exception_result_var_b244;
char* __result244__;
void* right_value198;
char* __exception_result_var_b245;
char* __result245__;
void* right_value199;
char* __exception_result_var_b246;
char* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
memset(&p_214, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
    if(_if_conditional239=path==((void*)0),    _if_conditional239) {
        __result243__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2102, 1441),__exception_result_var_b242=((char*)(right_value196=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b242);
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result243__;
    }
    p_214=path+(come_push_stackframe("libneo-c.c", 2104, 1442),__exception_result_var_b243=strlen(path), come_pop_stackframe(), __exception_result_var_b243);
    while(_while_condtional12=p_214>=path,    _while_condtional12) {
        if(_if_conditional240=*((char*)come_null_check(p_214, "libneo-c.c", 2107, 1443))==46,        _if_conditional240) {
            break;
        }
        else {
            p_214--;
        }
    }
    if(_if_conditional241=p_214<path,    _if_conditional241) {
        __result244__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2116, 1444),__exception_result_var_b244=((char*)(right_value197=__builtin_string(path))), come_pop_stackframe(), __exception_result_var_b244);
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result244__;
    }
    else {
        __result245__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2119, 1445),__exception_result_var_b245=((char*)(right_value198=__builtin_string(p_214+1))), come_pop_stackframe(), __exception_result_var_b245);
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result245__;
    }
    __result246__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2122, 1446),__exception_result_var_b246=((char*)(right_value199=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b246);
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result246__;
}

char* xrealpath(char* path){
void* __result_obj__;
_Bool _if_conditional242;
void* right_value200;
char* __exception_result_var_b247;
char* __result247__;
char* __exception_result_var_b248;
char* result_215;
void* right_value201;
char* __exception_result_var_b249;
char* result2_216;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
memset(&result_215, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&result2_216, 0, sizeof(char*));
    if(_if_conditional242=path==((void*)0),    _if_conditional242) {
        __result247__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2128, 1447),__exception_result_var_b247=((char*)(right_value200=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b247);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result247__;
    }
    result_215=(come_push_stackframe("libneo-c.c", 2130, 1448),__exception_result_var_b248=realpath(path,((void*)0)), come_pop_stackframe(), __exception_result_var_b248);
    result2_216=(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2132, 1449),__exception_result_var_b249=((char*)(right_value201=__builtin_string(result_215))), come_pop_stackframe(), __exception_result_var_b249));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("libneo-c.c", 2134,1450),free(result_215),come_pop_stackframe());
    __result248__ = __result_obj__ = result2_216;
    result2_216 = come_decrement_ref_count2(result2_216, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result248__;
    result2_216 = come_decrement_ref_count2(result2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* bool_to_string(_Bool self){
void* __result_obj__;
_Bool _if_conditional243;
void* right_value202;
char* __exception_result_var_b250;
char* __result249__;
void* right_value203;
char* __exception_result_var_b251;
char* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
    if(self) {
        __result249__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2145, 1451),__exception_result_var_b250=((char*)(right_value202=__builtin_string("true"))), come_pop_stackframe(), __exception_result_var_b250);
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result249__;
    }
    else {
        __result250__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2148, 1452),__exception_result_var_b251=((char*)(right_value203=__builtin_string("false"))), come_pop_stackframe(), __exception_result_var_b251);
        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result250__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
void* right_value204;
char* __exception_result_var_b252;
char* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    __result251__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2154, 1453),__exception_result_var_b252=((char*)(right_value204=xsprintf("%c",self))), come_pop_stackframe(), __exception_result_var_b252);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result251__;
}

char* short_to_string(short short self){
void* __result_obj__;
void* right_value205;
char* __exception_result_var_b253;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result252__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2159, 1454),__exception_result_var_b253=((char*)(right_value205=xsprintf("%d",self))), come_pop_stackframe(), __exception_result_var_b253);
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

char* int_to_string(int self){
void* __result_obj__;
void* right_value206;
char* __exception_result_var_b254;
char* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    __result253__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2164, 1455),__exception_result_var_b254=((char*)(right_value206=xsprintf("%d",self))), come_pop_stackframe(), __exception_result_var_b254);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result253__;
}

char* long_to_string(long self){
void* __result_obj__;
void* right_value207;
char* __exception_result_var_b255;
char* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    __result254__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2169, 1456),__exception_result_var_b255=((char*)(right_value207=xsprintf("%ld",self))), come_pop_stackframe(), __exception_result_var_b255);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result254__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
void* right_value208;
char* __exception_result_var_b256;
char* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
    __result255__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2174, 1457),__exception_result_var_b256=((char*)(right_value208=xsprintf("%ld",self))), come_pop_stackframe(), __exception_result_var_b256);
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result255__;
}

char* float_to_string(float self){
void* __result_obj__;
void* right_value209;
char* __exception_result_var_b257;
char* __result256__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    __result256__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2179, 1458),__exception_result_var_b257=((char*)(right_value209=xsprintf("%f",self))), come_pop_stackframe(), __exception_result_var_b257);
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result256__;
}

char* double_to_string(double self){
void* __result_obj__;
void* right_value210;
char* __exception_result_var_b258;
char* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
    __result257__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2184, 1459),__exception_result_var_b258=((char*)(right_value210=xsprintf("%lf",self))), come_pop_stackframe(), __exception_result_var_b258);
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result257__;
}

char* string_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional244;
void* right_value211;
char* __exception_result_var_b259;
char* __result258__;
void* right_value212;
char* __exception_result_var_b260;
char* __result259__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
right_value212 = (void*)0;
    if(_if_conditional244=self==((void*)0),    _if_conditional244) {
        __result258__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2190, 1460),__exception_result_var_b259=((char*)(right_value211=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b259);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result258__;
    }
    __result259__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2192, 1461),__exception_result_var_b260=((char*)(right_value212=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b260);
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result259__;
}

char* charp_to_string(char* self){
void* __result_obj__;
_Bool _if_conditional245;
void* right_value213;
char* __exception_result_var_b261;
char* __result260__;
void* right_value214;
char* __exception_result_var_b262;
char* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
right_value214 = (void*)0;
    if(_if_conditional245=self==((void*)0),    _if_conditional245) {
        __result260__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2198, 1462),__exception_result_var_b261=((char*)(right_value213=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b261);
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result260__;
    }
    __result261__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2200, 1463),__exception_result_var_b262=((char*)(right_value214=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b262);
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
    if(_if_conditional246=!left&&right,    _if_conditional246) {
        __result262__ = -1;
        return __result262__;
    }
    else {
        if(_if_conditional247=left&&right,        _if_conditional247) {
            __result263__ = 0;
            return __result263__;
        }
        else {
            if(_if_conditional248=!left&&!right,            _if_conditional248) {
                __result264__ = 0;
                return __result264__;
            }
            else {
                __result265__ = 1;
                return __result265__;
            }
        }
    }
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
    if(_if_conditional249=left<right,    _if_conditional249) {
        __result267__ = -1;
        return __result267__;
    }
    else {
        if(_if_conditional250=left>right,        _if_conditional250) {
            __result268__ = 1;
            return __result268__;
        }
        else {
            __result269__ = 0;
            return __result269__;
        }
    }
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
    if(_if_conditional251=left<right,    _if_conditional251) {
        __result271__ = -1;
        return __result271__;
    }
    else {
        if(_if_conditional252=left>right,        _if_conditional252) {
            __result272__ = 1;
            return __result272__;
        }
        else {
            __result273__ = 0;
            return __result273__;
        }
    }
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
    if(_if_conditional253=left<right,    _if_conditional253) {
        __result275__ = -1;
        return __result275__;
    }
    else {
        if(_if_conditional254=left>right,        _if_conditional254) {
            __result276__ = 1;
            return __result276__;
        }
        else {
            __result277__ = 0;
            return __result277__;
        }
    }
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
    if(_if_conditional255=left<right,    _if_conditional255) {
        __result279__ = -1;
        return __result279__;
    }
    else {
        if(_if_conditional256=left>right,        _if_conditional256) {
            __result280__ = 1;
            return __result280__;
        }
        else {
            __result281__ = 0;
            return __result281__;
        }
    }
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
    if(_if_conditional257=left<right,    _if_conditional257) {
        __result283__ = -1;
        return __result283__;
    }
    else {
        if(_if_conditional258=left>right,        _if_conditional258) {
            __result284__ = 1;
            return __result284__;
        }
        else {
            __result285__ = 0;
            return __result285__;
        }
    }
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
    if(_if_conditional259=left<right,    _if_conditional259) {
        __result287__ = -1;
        return __result287__;
    }
    else {
        if(_if_conditional260=left>right,        _if_conditional260) {
            __result288__ = 1;
            return __result288__;
        }
        else {
            __result289__ = 0;
            return __result289__;
        }
    }
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
    if(_if_conditional261=left<right,    _if_conditional261) {
        __result291__ = -1;
        return __result291__;
    }
    else {
        if(_if_conditional262=left>right,        _if_conditional262) {
            __result292__ = 1;
            return __result292__;
        }
        else {
            __result293__ = 0;
            return __result293__;
        }
    }
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
int __exception_result_var_b263;
int __result298__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional263=left==((void*)0)&&right==((void*)0),    _if_conditional263) {
        __result295__ = 0;
        return __result295__;
    }
    else {
        if(_if_conditional264=left==((void*)0),        _if_conditional264) {
            __result296__ = -1;
            return __result296__;
        }
        else {
            if(_if_conditional265=right==((void*)0),            _if_conditional265) {
                __result297__ = 1;
                return __result297__;
            }
        }
    }
    __result298__ = (come_push_stackframe("libneo-c.c", 2341, 1464),__exception_result_var_b263=strcmp(left,right), come_pop_stackframe(), __exception_result_var_b263);
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
int __exception_result_var_b264;
int __result302__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional266=left==((void*)0)&&right==((void*)0),    _if_conditional266) {
        __result299__ = 0;
        return __result299__;
    }
    else {
        if(_if_conditional267=left==((void*)0),        _if_conditional267) {
            __result300__ = -1;
            return __result300__;
        }
        else {
            if(_if_conditional268=right==((void*)0),            _if_conditional268) {
                __result301__ = 1;
                return __result301__;
            }
        }
    }
    __result302__ = (come_push_stackframe("libneo-c.c", 2356, 1465),__exception_result_var_b264=strcmp(left,right), come_pop_stackframe(), __exception_result_var_b264);
    return __result302__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional269;
void* right_value215;
char* __exception_result_var_b265;
char* __result303__;
void* right_value216;
void* right_value217;
struct buffer* __exception_result_var_b266;
struct buffer* buf_217;
_Bool _while_condtional13;
unsigned long int __exception_result_var_b267;
int size_219;
struct buffer* __exception_result_var_b268;
_Bool _if_conditional270;
void* right_value218;
char* __exception_result_var_b269;
char* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&buf_217, 0, sizeof(struct buffer*));
memset(&size_219, 0, sizeof(int));
right_value218 = (void*)0;
    if(_if_conditional269=f==((void*)0),    _if_conditional269) {
        __result303__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2365, 1466),__exception_result_var_b265=((char*)(right_value215=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b265);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result303__;
    }
    buf_217=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2367, 1469),__exception_result_var_b266=((struct buffer*)(right_value217=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value216=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2367, "buffer"))), "libneo-c.c", 2367, 1467)), "libneo-c.c", 2367, 1468)))))), come_pop_stackframe(), __exception_result_var_b266));
    come_call_finalizer3(right_value216,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional13=1,    _while_condtional13) {
        char buf2_218[1024];
        memset(&buf2_218, 0, sizeof(char)        *(1024)        );
        size_219=(come_push_stackframe("libneo-c.c", 2372, 1470),__exception_result_var_b267=fread(buf2_218,1,1024,f), come_pop_stackframe(), __exception_result_var_b267);
        (come_push_stackframe("libneo-c.c", 2374, 1473),__exception_result_var_b268=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_217, "libneo-c.c", 2374, 1471)), "libneo-c.c", 2374, 1472)),buf2_218,size_219), come_pop_stackframe(), __exception_result_var_b268);
        if(_if_conditional270=size_219<1024,        _if_conditional270) {
            break;
        }
    }
    __result304__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2381, 1476),__exception_result_var_b269=((char*)(right_value218=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_217, "libneo-c.c", 2381, 1474)), "libneo-c.c", 2381, 1475))))), come_pop_stackframe(), __exception_result_var_b269);
    come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result304__;
    come_call_finalizer3(buf_217,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int FILE_write(struct _IO_FILE* f, char* str){
void* __result_obj__;
_Bool _if_conditional271;
int __result305__;
unsigned long int __exception_result_var_b270;
unsigned long int __exception_result_var_b271;
int __result306__;
memset(&__result_obj__, 0, sizeof(void*));
    if(_if_conditional271=f==((void*)0)||str==((void*)0),    _if_conditional271) {
        __result305__ = -1;
        return __result305__;
    }
    __result306__ = (come_push_stackframe("libneo-c.c", 2390, 1478),__exception_result_var_b271=fwrite(str,(come_push_stackframe("libneo-c.c", 2390, 1477),__exception_result_var_b270=strlen(str), come_pop_stackframe(), __exception_result_var_b270),1,f), come_pop_stackframe(), __exception_result_var_b271);
    return __result306__;
}

int FILE_fclose(struct _IO_FILE* f){
void* __result_obj__;
_Bool _if_conditional272;
int __result307__;
int __exception_result_var_b272;
int result_220;
_Bool _if_conditional273;
int __result308__;
int __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(int));
    if(_if_conditional272=f==((void*)0),    _if_conditional272) {
        __result307__ = -1;
        return __result307__;
    }
    result_220=(come_push_stackframe("libneo-c.c", 2399, 1479),__exception_result_var_b272=fclose(f), come_pop_stackframe(), __exception_result_var_b272);
    if(_if_conditional273=result_220<0,    _if_conditional273) {
        __result308__ = result_220;
        return __result308__;
    }
    __result309__ = result_220;
    return __result309__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
_Bool _if_conditional274;
struct _IO_FILE* __result310__;
va_list args_222;
int __exception_result_var_b273;
int __exception_result_var_b274;
int result_223;
_Bool _if_conditional275;
struct _IO_FILE* __result311__;
struct _IO_FILE* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_222, 0, sizeof(va_list));
memset(&result_223, 0, sizeof(int));
    if(_if_conditional274=f==((void*)0)||msg==((void*)0),    _if_conditional274) {
        __result310__ = __result_obj__ = f;
        return __result310__;
    }
    char msg2_221[1024*2*2*2];
    memset(&msg2_221, 0, sizeof(char)    *(1024*2*2*2)    );
    (come_push_stackframe("libneo-c.c", 2416,1480),__builtin_va_start(args_222,msg),come_pop_stackframe());
    (come_push_stackframe("libneo-c.c", 2417, 1481),__exception_result_var_b273=vsnprintf(msg2_221,1024*2*2*2,msg,args_222), come_pop_stackframe(), __exception_result_var_b273);
    (come_push_stackframe("libneo-c.c", 2418,1482),__builtin_va_end(args_222),come_pop_stackframe());
    result_223=(come_push_stackframe("libneo-c.c", 2420, 1483),__exception_result_var_b274=fprintf(f,"%s",msg2_221), come_pop_stackframe(), __exception_result_var_b274);
    if(_if_conditional275=result_223<0,    _if_conditional275) {
        __result311__ = __result_obj__ = f;
        come_call_finalizer3((&args_222),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return __result311__;
    }
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
struct _IO_FILE* __exception_result_var_b275;
struct _IO_FILE* __exception_result_var_b276;
_Bool _if_conditional278;
int __result314__;
unsigned long int __exception_result_var_b277;
unsigned long int __exception_result_var_b278;
int result_225;
_Bool _if_conditional279;
int __result315__;
int __exception_result_var_b279;
int result2_226;
_Bool _if_conditional280;
int __result316__;
int __result317__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_224, 0, sizeof(struct _IO_FILE*));
memset(&result_225, 0, sizeof(int));
memset(&result2_226, 0, sizeof(int));
    if(_if_conditional276=self==((void*)0)||file_name==((void*)0),    _if_conditional276) {
        __result313__ = -1;
        return __result313__;
    }
    if(append) {
        f_224=(come_push_stackframe("libneo-c.c", 2437, 1484),__exception_result_var_b275=fopen(file_name,"a"), come_pop_stackframe(), __exception_result_var_b275);
    }
    else {
        f_224=(come_push_stackframe("libneo-c.c", 2440, 1485),__exception_result_var_b276=fopen(file_name,"w"), come_pop_stackframe(), __exception_result_var_b276);
    }
    if(_if_conditional278=f_224==((void*)0),    _if_conditional278) {
        __result314__ = -1;
        return __result314__;
    }
    result_225=(come_push_stackframe("libneo-c.c", 2447, 1487),__exception_result_var_b278=fwrite(self,(come_push_stackframe("libneo-c.c", 2447, 1486),__exception_result_var_b277=strlen(self), come_pop_stackframe(), __exception_result_var_b277),1,f_224), come_pop_stackframe(), __exception_result_var_b278);
    if(_if_conditional279=result_225<0,    _if_conditional279) {
        __result315__ = result_225;
        return __result315__;
    }
    result2_226=(come_push_stackframe("libneo-c.c", 2455, 1488),__exception_result_var_b279=fclose(f_224), come_pop_stackframe(), __exception_result_var_b279);
    if(_if_conditional280=result2_226<0,    _if_conditional280) {
        __result316__ = result2_226;
        return __result316__;
    }
    __result317__ = result_225;
    return __result317__;
}

int charp_write(char* self, char* file_name, _Bool append){
void* __result_obj__;
_Bool _if_conditional281;
int __result318__;
struct _IO_FILE* f_227;
_Bool _if_conditional282;
struct _IO_FILE* __exception_result_var_b280;
struct _IO_FILE* __exception_result_var_b281;
_Bool _if_conditional283;
int __result319__;
unsigned long int __exception_result_var_b282;
unsigned long int __exception_result_var_b283;
int result_228;
_Bool _if_conditional284;
int __result320__;
int __exception_result_var_b284;
int result2_229;
_Bool _if_conditional285;
int __result321__;
int __result322__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_227, 0, sizeof(struct _IO_FILE*));
memset(&result_228, 0, sizeof(int));
memset(&result2_229, 0, sizeof(int));
    if(_if_conditional281=self==((void*)0)||file_name==((void*)0),    _if_conditional281) {
        __result318__ = -1;
        return __result318__;
    }
    if(append) {
        f_227=(come_push_stackframe("libneo-c.c", 2470, 1489),__exception_result_var_b280=fopen(file_name,"a"), come_pop_stackframe(), __exception_result_var_b280);
    }
    else {
        f_227=(come_push_stackframe("libneo-c.c", 2473, 1490),__exception_result_var_b281=fopen(file_name,"w"), come_pop_stackframe(), __exception_result_var_b281);
    }
    if(_if_conditional283=f_227==((void*)0),    _if_conditional283) {
        __result319__ = -1;
        return __result319__;
    }
    result_228=(come_push_stackframe("libneo-c.c", 2480, 1492),__exception_result_var_b283=fwrite(self,(come_push_stackframe("libneo-c.c", 2480, 1491),__exception_result_var_b282=strlen(self), come_pop_stackframe(), __exception_result_var_b282),1,f_227), come_pop_stackframe(), __exception_result_var_b283);
    if(_if_conditional284=result_228<0,    _if_conditional284) {
        __result320__ = result_228;
        return __result320__;
    }
    result2_229=(come_push_stackframe("libneo-c.c", 2488, 1493),__exception_result_var_b284=fclose(f_227), come_pop_stackframe(), __exception_result_var_b284);
    if(_if_conditional285=result2_229<0,    _if_conditional285) {
        __result321__ = result2_229;
        return __result321__;
    }
    __result322__ = result_228;
    return __result322__;
}

char* string_read(char* file_name){
void* __result_obj__;
_Bool _if_conditional286;
void* right_value219;
char* __exception_result_var_b285;
char* __result323__;
struct _IO_FILE* __exception_result_var_b286;
struct _IO_FILE* f_230;
_Bool _if_conditional287;
void* right_value220;
char* __exception_result_var_b287;
char* __result324__;
void* right_value221;
void* right_value222;
struct buffer* __exception_result_var_b288;
struct buffer* buf_231;
_Bool _while_condtional14;
unsigned long int __exception_result_var_b289;
int size_233;
struct buffer* __exception_result_var_b290;
_Bool _if_conditional288;
void* right_value223;
char* __exception_result_var_b291;
char* result_234;
int __exception_result_var_b292;
int result2_235;
_Bool _if_conditional289;
void* right_value224;
char* __exception_result_var_b293;
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
    if(_if_conditional286=file_name==((void*)0),    _if_conditional286) {
        __result323__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2498, 1494),__exception_result_var_b285=((char*)(right_value219=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b285);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result323__;
    }
    f_230=(come_push_stackframe("libneo-c.c", 2501, 1495),__exception_result_var_b286=fopen(file_name,"r"), come_pop_stackframe(), __exception_result_var_b286);
    if(_if_conditional287=f_230==((void*)0),    _if_conditional287) {
        __result324__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2504, 1496),__exception_result_var_b287=((char*)(right_value220=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b287);
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result324__;
    }
    buf_231=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2507, 1499),__exception_result_var_b288=((struct buffer*)(right_value222=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value221=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2507, "buffer"))), "libneo-c.c", 2507, 1497)), "libneo-c.c", 2507, 1498)))))), come_pop_stackframe(), __exception_result_var_b288));
    come_call_finalizer3(right_value221,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value222,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional14=1,    _while_condtional14) {
        char buf2_232[1024];
        memset(&buf2_232, 0, sizeof(char)        *(1024)        );
        size_233=(come_push_stackframe("libneo-c.c", 2512, 1500),__exception_result_var_b289=fread(buf2_232,1,1024,f_230), come_pop_stackframe(), __exception_result_var_b289);
        (come_push_stackframe("libneo-c.c", 2514, 1503),__exception_result_var_b290=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_231, "libneo-c.c", 2514, 1501)), "libneo-c.c", 2514, 1502)),buf2_232,size_233), come_pop_stackframe(), __exception_result_var_b290);
        if(_if_conditional288=size_233<1024,        _if_conditional288) {
            break;
        }
    }
    result_234=(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2521, 1506),__exception_result_var_b291=((char*)(right_value223=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_231, "libneo-c.c", 2521, 1504)), "libneo-c.c", 2521, 1505))))), come_pop_stackframe(), __exception_result_var_b291));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_235=(come_push_stackframe("libneo-c.c", 2525, 1507),__exception_result_var_b292=fclose(f_230), come_pop_stackframe(), __exception_result_var_b292);
    if(_if_conditional289=result2_235<0,    _if_conditional289) {
        __result325__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2526, 1508),__exception_result_var_b293=((char*)(right_value224=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b293);
        come_call_finalizer3(buf_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_234 = come_decrement_ref_count2(result_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result325__;
    }
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
char* __exception_result_var_b294;
char* __result327__;
struct _IO_FILE* __exception_result_var_b295;
struct _IO_FILE* f_236;
_Bool _if_conditional291;
void* right_value226;
char* __exception_result_var_b296;
char* __result328__;
void* right_value227;
void* right_value228;
struct buffer* __exception_result_var_b297;
struct buffer* buf_237;
_Bool _while_condtional15;
unsigned long int __exception_result_var_b298;
int size_239;
struct buffer* __exception_result_var_b299;
_Bool _if_conditional292;
void* right_value229;
char* __exception_result_var_b300;
char* result_240;
int __exception_result_var_b301;
int result2_241;
_Bool _if_conditional293;
void* right_value230;
char* __exception_result_var_b302;
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
    if(_if_conditional290=file_name==((void*)0),    _if_conditional290) {
        __result327__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2535, 1509),__exception_result_var_b294=((char*)(right_value225=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b294);
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result327__;
    }
    f_236=(come_push_stackframe("libneo-c.c", 2538, 1510),__exception_result_var_b295=fopen(file_name,"r"), come_pop_stackframe(), __exception_result_var_b295);
    if(_if_conditional291=f_236==((void*)0),    _if_conditional291) {
        __result328__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2541, 1511),__exception_result_var_b296=((char*)(right_value226=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b296);
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result328__;
    }
    buf_237=(struct buffer*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2544, 1514),__exception_result_var_b297=((struct buffer*)(right_value228=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct buffer*)(right_value227=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2544, "buffer"))), "libneo-c.c", 2544, 1512)), "libneo-c.c", 2544, 1513)))))), come_pop_stackframe(), __exception_result_var_b297));
    come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value228,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional15=1,    _while_condtional15) {
        char buf2_238[1024];
        memset(&buf2_238, 0, sizeof(char)        *(1024)        );
        size_239=(come_push_stackframe("libneo-c.c", 2549, 1515),__exception_result_var_b298=fread(buf2_238,1,1024,f_236), come_pop_stackframe(), __exception_result_var_b298);
        (come_push_stackframe("libneo-c.c", 2551, 1518),__exception_result_var_b299=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_237, "libneo-c.c", 2551, 1516)), "libneo-c.c", 2551, 1517)),buf2_238,size_239), come_pop_stackframe(), __exception_result_var_b299);
        if(_if_conditional292=size_239<1024,        _if_conditional292) {
            break;
        }
    }
    result_240=(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2558, 1521),__exception_result_var_b300=((char*)(right_value229=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_237, "libneo-c.c", 2558, 1519)), "libneo-c.c", 2558, 1520))))), come_pop_stackframe(), __exception_result_var_b300));
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_241=(come_push_stackframe("libneo-c.c", 2562, 1522),__exception_result_var_b301=fclose(f_236), come_pop_stackframe(), __exception_result_var_b301);
    if(_if_conditional293=result2_241<0,    _if_conditional293) {
        __result329__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2563, 1523),__exception_result_var_b302=((char*)(right_value230=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b302);
        come_call_finalizer3(buf_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_240 = come_decrement_ref_count2(result_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result329__;
    }
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
struct list$1charph* __exception_result_var_b303;
struct list$1charph* result_242;
_Bool _if_conditional294;
struct list$1charph* __result331__;
_Bool _while_condtional16;
char* __exception_result_var_b304;
_Bool _if_conditional295;
void* right_value233;
char* __exception_result_var_b305;
struct list$1charph* __exception_result_var_b306;
struct list$1charph* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&result_242, 0, sizeof(struct list$1charph*));
right_value233 = (void*)0;
    result_242=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2571, 1526),__exception_result_var_b303=((struct list$1charph*)(right_value232=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value231=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2571, "list$1charph"))), "libneo-c.c", 2571, 1524)), "libneo-c.c", 2571, 1525)))))), come_pop_stackframe(), __exception_result_var_b303));
    come_call_finalizer3(right_value231,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value232,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional294=f==((void*)0),    _if_conditional294) {
        __result331__ = __result_obj__ = result_242;
        come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result331__;
    }
    while(_while_condtional16=1,    _while_condtional16) {
        char buf_243[1024];
        memset(&buf_243, 0, sizeof(char)        *(1024)        );
        if(_if_conditional295=(come_push_stackframe("libneo-c.c", 2580, 1527),__exception_result_var_b304=fgets(buf_243,1024,f), come_pop_stackframe(), __exception_result_var_b304)==((void*)0),        _if_conditional295) {
            break;
        }
        (come_push_stackframe("libneo-c.c", 2584, 1531),__exception_result_var_b306=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_242, "libneo-c.c", 2584, 1528)), "libneo-c.c", 2584, 1529)),(char*)come_increment_ref_count((come_push_stackframe("libneo-c.c", 2584, 1530),__exception_result_var_b305=((char*)(right_value233=__builtin_string(buf_243))), come_pop_stackframe(), __exception_result_var_b305))), come_pop_stackframe(), __exception_result_var_b306);
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result332__ = __result_obj__ = result_242;
    come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result332__;
    come_call_finalizer3(result_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
void* __result_obj__;
_Bool _if_conditional296;
int __result333__;
struct _IO_FILE* __exception_result_var_b307;
struct _IO_FILE* f_244;
_Bool _if_conditional297;
int __exception_result_var_b308;
int __result334__;
int __result335__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&f_244, 0, sizeof(struct _IO_FILE*));
    if(_if_conditional296=path==((void*)0)||mode==((void*)0),    _if_conditional296) {
        __result333__ = -1;
        return __result333__;
    }
    f_244=(come_push_stackframe("libneo-c.c", 2595, 1532),__exception_result_var_b307=fopen(path,mode), come_pop_stackframe(), __exception_result_var_b307);
    if(f_244) {
        block(parent,f_244);
        (come_push_stackframe("libneo-c.c", 2600, 1533),__exception_result_var_b308=fclose(f_244), come_pop_stackframe(), __exception_result_var_b308);
        __result334__ = 0;
        return __result334__;
    }
    __result335__ = -1;
    return __result335__;
}

char* charp_puts(char* self){
void* __result_obj__;
_Bool _if_conditional298;
void* right_value234;
char* __exception_result_var_b309;
char* __result336__;
int __exception_result_var_b310;
void* right_value235;
char* __exception_result_var_b311;
char* __result337__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
    if(_if_conditional298=self==((void*)0),    _if_conditional298) {
        __result336__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2614, 1534),__exception_result_var_b309=((char*)(right_value234=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b309);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result336__;
    }
    (come_push_stackframe("libneo-c.c", 2616, 1535),__exception_result_var_b310=puts(self), come_pop_stackframe(), __exception_result_var_b310);
    __result337__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2618, 1536),__exception_result_var_b311=((char*)(right_value235=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b311);
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result337__;
}

char* charp_print(char* self){
void* __result_obj__;
_Bool _if_conditional299;
void* right_value236;
char* __exception_result_var_b312;
char* __result338__;
int __exception_result_var_b313;
void* right_value237;
char* __exception_result_var_b314;
char* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
right_value237 = (void*)0;
    if(_if_conditional299=self==((void*)0),    _if_conditional299) {
        __result338__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2624, 1537),__exception_result_var_b312=((char*)(right_value236=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b312);
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result338__;
    }
    (come_push_stackframe("libneo-c.c", 2626, 1538),__exception_result_var_b313=printf("%s",self), come_pop_stackframe(), __exception_result_var_b313);
    __result339__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2628, 1539),__exception_result_var_b314=((char*)(right_value237=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b314);
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result339__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional300;
void* right_value238;
char* __exception_result_var_b315;
char* __result340__;
char* msg2_245;
va_list args_246;
int __exception_result_var_b316;
int __exception_result_var_b317;
void* right_value239;
char* __exception_result_var_b318;
char* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&msg2_245, 0, sizeof(char*));
memset(&args_246, 0, sizeof(va_list));
right_value239 = (void*)0;
    if(_if_conditional300=self==((void*)0),    _if_conditional300) {
        __result340__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2635, 1540),__exception_result_var_b315=((char*)(right_value238=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b315);
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result340__;
    }
    (come_push_stackframe("libneo-c.c", 2640,1541),__builtin_va_start(args_246,self),come_pop_stackframe());
    (come_push_stackframe("libneo-c.c", 2641, 1542),__exception_result_var_b316=vasprintf(&msg2_245,self,args_246), come_pop_stackframe(), __exception_result_var_b316);
    (come_push_stackframe("libneo-c.c", 2642,1543),__builtin_va_end(args_246),come_pop_stackframe());
    (come_push_stackframe("libneo-c.c", 2644, 1544),__exception_result_var_b317=printf("%s",msg2_245), come_pop_stackframe(), __exception_result_var_b317);
    (come_push_stackframe("libneo-c.c", 2646,1545),free(msg2_245),come_pop_stackframe());
    __result341__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2648, 1546),__exception_result_var_b318=((char*)(right_value239=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b318);
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result341__;
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

char* charp_printf(char* self, ...){
void* __result_obj__;
_Bool _if_conditional301;
void* right_value240;
char* __exception_result_var_b319;
char* __result342__;
char* msg2_247;
va_list args_248;
int __exception_result_var_b320;
int __exception_result_var_b321;
void* right_value241;
char* __exception_result_var_b322;
char* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
memset(&msg2_247, 0, sizeof(char*));
memset(&args_248, 0, sizeof(va_list));
right_value241 = (void*)0;
    if(_if_conditional301=self==((void*)0),    _if_conditional301) {
        __result342__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2654, 1547),__exception_result_var_b319=((char*)(right_value240=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b319);
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result342__;
    }
    (come_push_stackframe("libneo-c.c", 2659,1548),__builtin_va_start(args_248,self),come_pop_stackframe());
    (come_push_stackframe("libneo-c.c", 2660, 1549),__exception_result_var_b320=vasprintf(&msg2_247,self,args_248), come_pop_stackframe(), __exception_result_var_b320);
    (come_push_stackframe("libneo-c.c", 2661,1550),__builtin_va_end(args_248),come_pop_stackframe());
    (come_push_stackframe("libneo-c.c", 2663, 1551),__exception_result_var_b321=printf("%s",msg2_247), come_pop_stackframe(), __exception_result_var_b321);
    (come_push_stackframe("libneo-c.c", 2665,1552),free(msg2_247),come_pop_stackframe());
    __result343__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2667, 1553),__exception_result_var_b322=((char*)(right_value241=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b322);
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result343__;
    come_call_finalizer3((&args_248),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int int_printf(int self, char* msg){
void* __result_obj__;
int __exception_result_var_b323;
int __result344__;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("libneo-c.c", 2672, 1554),__exception_result_var_b323=printf(msg,self), come_pop_stackframe(), __exception_result_var_b323);
    __result344__ = self;
    return __result344__;
}

char* string_puts(char* self){
void* __result_obj__;
_Bool _if_conditional302;
void* right_value242;
char* __exception_result_var_b324;
char* __result345__;
int __exception_result_var_b325;
void* right_value243;
char* __exception_result_var_b326;
char* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    if(_if_conditional302=self==((void*)0),    _if_conditional302) {
        __result345__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2680, 1555),__exception_result_var_b324=((char*)(right_value242=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b324);
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result345__;
    }
    (come_push_stackframe("libneo-c.c", 2682, 1556),__exception_result_var_b325=puts(self), come_pop_stackframe(), __exception_result_var_b325);
    __result346__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2684, 1557),__exception_result_var_b326=((char*)(right_value243=__builtin_string(self))), come_pop_stackframe(), __exception_result_var_b326);
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result346__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
void* __result_obj__;
int i_249;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_249, 0, sizeof(int));
    for(    i_249=0;    i_249<self;    i_249++    ){
        block(parent,i_249);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c.c", 2702, 1558)), "libneo-c.c", 2702, 1559))->value=value;
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
    __result348__ = ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c.c", 2709, 1560)), "libneo-c.c", 2709, 1561))->value;
    return __result348__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
void* right_value244;
void* right_value245;
struct integer* __exception_result_var_b327;
struct integer* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
    __result349__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2714, 1563),__exception_result_var_b327=((struct integer*)(right_value245=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value244=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2714, "integer"))), "libneo-c.c", 2714, 1562))),self))), come_pop_stackframe(), __exception_result_var_b327);
    come_call_finalizer3(right_value244,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value245,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result349__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
void* right_value246;
void* right_value247;
struct integer* __exception_result_var_b328;
struct integer* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
right_value247 = (void*)0;
    __result350__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2719, 1565),__exception_result_var_b328=((struct integer*)(right_value247=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value246=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2719, "integer"))), "libneo-c.c", 2719, 1564))),self))), come_pop_stackframe(), __exception_result_var_b328);
    come_call_finalizer3(right_value246,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value247,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result350__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
void* right_value248;
void* right_value249;
struct integer* __exception_result_var_b329;
struct integer* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
    __result351__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2724, 1567),__exception_result_var_b329=((struct integer*)(right_value249=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value248=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2724, "integer"))), "libneo-c.c", 2724, 1566))),self))), come_pop_stackframe(), __exception_result_var_b329);
    come_call_finalizer3(right_value248,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value249,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result351__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
void* right_value250;
void* right_value251;
struct integer* __exception_result_var_b330;
struct integer* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
right_value251 = (void*)0;
    __result352__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2729, 1569),__exception_result_var_b330=((struct integer*)(right_value251=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value250=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2729, "integer"))), "libneo-c.c", 2729, 1568))),self))), come_pop_stackframe(), __exception_result_var_b330);
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
    if(_if_conditional303=((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2734, 1570)), "libneo-c.c", 2734, 1571))->value<((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2734, 1572)), "libneo-c.c", 2734, 1573))->value,    _if_conditional303) {
        __result353__ = -1;
        return __result353__;
    }
    else {
        if(_if_conditional304=((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2737, 1574)), "libneo-c.c", 2737, 1575))->value>((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2737, 1576)), "libneo-c.c", 2737, 1577))->value,        _if_conditional304) {
            __result354__ = 1;
            return __result354__;
        }
        else {
            __result355__ = 0;
            return __result355__;
        }
    }
    __result356__ = 0;
    return __result356__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result357__;
memset(&__result_obj__, 0, sizeof(void*));
    __result357__ = ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c.c", 2749, 1578)), "libneo-c.c", 2749, 1579))->value==((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2749, 1580)), "libneo-c.c", 2749, 1581))->value;
    return __result357__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result358__;
memset(&__result_obj__, 0, sizeof(void*));
    __result358__ = ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c.c", 2754, 1582)), "libneo-c.c", 2754, 1583))->value==((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2754, 1584)), "libneo-c.c", 2754, 1585))->value;
    return __result358__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
void* __result_obj__;
_Bool __result359__;
memset(&__result_obj__, 0, sizeof(void*));
    __result359__ = ((struct integer*)come_null_check(((struct integer*)come_null_check(self, "libneo-c.c", 2759, 1586)), "libneo-c.c", 2759, 1587))->value!=((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2759, 1588)), "libneo-c.c", 2759, 1589))->value;
    return __result359__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value252;
void* right_value253;
struct integer* __exception_result_var_b331;
struct integer* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    __result360__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2764, 1595),__exception_result_var_b331=((struct integer*)(right_value253=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value252=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2764, "integer"))), "libneo-c.c", 2764, 1590))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2764, 1591)), "libneo-c.c", 2764, 1592))->value+((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2764, 1593)), "libneo-c.c", 2764, 1594))->value))), come_pop_stackframe(), __exception_result_var_b331);
    come_call_finalizer3(right_value252,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value253,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result360__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value254;
void* right_value255;
struct integer* __exception_result_var_b332;
struct integer* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
right_value255 = (void*)0;
    __result361__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2769, 1601),__exception_result_var_b332=((struct integer*)(right_value255=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value254=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2769, "integer"))), "libneo-c.c", 2769, 1596))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2769, 1597)), "libneo-c.c", 2769, 1598))->value-((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2769, 1599)), "libneo-c.c", 2769, 1600))->value))), come_pop_stackframe(), __exception_result_var_b332);
    come_call_finalizer3(right_value254,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value255,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result361__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value256;
void* right_value257;
struct integer* __exception_result_var_b333;
struct integer* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
right_value257 = (void*)0;
    __result362__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2774, 1607),__exception_result_var_b333=((struct integer*)(right_value257=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value256=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2774, "integer"))), "libneo-c.c", 2774, 1602))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2774, 1603)), "libneo-c.c", 2774, 1604))->value*((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2774, 1605)), "libneo-c.c", 2774, 1606))->value))), come_pop_stackframe(), __exception_result_var_b333);
    come_call_finalizer3(right_value256,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value257,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result362__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value258;
void* right_value259;
struct integer* __exception_result_var_b334;
struct integer* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
right_value259 = (void*)0;
    __result363__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2779, 1613),__exception_result_var_b334=((struct integer*)(right_value259=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value258=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2779, "integer"))), "libneo-c.c", 2779, 1608))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2779, 1609)), "libneo-c.c", 2779, 1610))->value/((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2779, 1611)), "libneo-c.c", 2779, 1612))->value))), come_pop_stackframe(), __exception_result_var_b334);
    come_call_finalizer3(right_value258,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value259,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result363__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value260;
void* right_value261;
struct integer* __exception_result_var_b335;
struct integer* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    __result364__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2784, 1619),__exception_result_var_b335=((struct integer*)(right_value261=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value260=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2784, "integer"))), "libneo-c.c", 2784, 1614))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2784, 1615)), "libneo-c.c", 2784, 1616))->value%((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2784, 1617)), "libneo-c.c", 2784, 1618))->value))), come_pop_stackframe(), __exception_result_var_b335);
    come_call_finalizer3(right_value260,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value261,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result364__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value262;
void* right_value263;
struct integer* __exception_result_var_b336;
struct integer* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    __result365__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2789, 1625),__exception_result_var_b336=((struct integer*)(right_value263=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value262=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2789, "integer"))), "libneo-c.c", 2789, 1620))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2789, 1621)), "libneo-c.c", 2789, 1622))->value<<((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2789, 1623)), "libneo-c.c", 2789, 1624))->value))), come_pop_stackframe(), __exception_result_var_b336);
    come_call_finalizer3(right_value262,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value263,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result365__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value264;
void* right_value265;
struct integer* __exception_result_var_b337;
struct integer* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
right_value265 = (void*)0;
    __result366__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2794, 1631),__exception_result_var_b337=((struct integer*)(right_value265=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value264=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2794, "integer"))), "libneo-c.c", 2794, 1626))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2794, 1627)), "libneo-c.c", 2794, 1628))->value>>((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2794, 1629)), "libneo-c.c", 2794, 1630))->value))), come_pop_stackframe(), __exception_result_var_b337);
    come_call_finalizer3(right_value264,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value265,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result366__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value266;
void* right_value267;
struct integer* __exception_result_var_b338;
struct integer* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
right_value267 = (void*)0;
    __result367__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2799, 1637),__exception_result_var_b338=((struct integer*)(right_value267=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value266=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2799, "integer"))), "libneo-c.c", 2799, 1632))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2799, 1633)), "libneo-c.c", 2799, 1634))->value>=((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2799, 1635)), "libneo-c.c", 2799, 1636))->value))), come_pop_stackframe(), __exception_result_var_b338);
    come_call_finalizer3(right_value266,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value267,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result367__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value268;
void* right_value269;
struct integer* __exception_result_var_b339;
struct integer* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
right_value269 = (void*)0;
    __result368__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2804, 1643),__exception_result_var_b339=((struct integer*)(right_value269=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value268=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2804, "integer"))), "libneo-c.c", 2804, 1638))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2804, 1639)), "libneo-c.c", 2804, 1640))->value<=((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2804, 1641)), "libneo-c.c", 2804, 1642))->value))), come_pop_stackframe(), __exception_result_var_b339);
    come_call_finalizer3(right_value268,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value269,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result368__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value270;
void* right_value271;
struct integer* __exception_result_var_b340;
struct integer* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
right_value271 = (void*)0;
    __result369__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2809, 1649),__exception_result_var_b340=((struct integer*)(right_value271=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value270=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2809, "integer"))), "libneo-c.c", 2809, 1644))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2809, 1645)), "libneo-c.c", 2809, 1646))->value<((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2809, 1647)), "libneo-c.c", 2809, 1648))->value))), come_pop_stackframe(), __exception_result_var_b340);
    come_call_finalizer3(right_value270,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value271,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result369__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value272;
void* right_value273;
struct integer* __exception_result_var_b341;
struct integer* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
right_value273 = (void*)0;
    __result370__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2814, 1655),__exception_result_var_b341=((struct integer*)(right_value273=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value272=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2814, "integer"))), "libneo-c.c", 2814, 1650))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2814, 1651)), "libneo-c.c", 2814, 1652))->value>((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2814, 1653)), "libneo-c.c", 2814, 1654))->value))), come_pop_stackframe(), __exception_result_var_b341);
    come_call_finalizer3(right_value272,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value273,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result370__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value274;
void* right_value275;
struct integer* __exception_result_var_b342;
struct integer* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
    __result371__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2819, 1661),__exception_result_var_b342=((struct integer*)(right_value275=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value274=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2819, "integer"))), "libneo-c.c", 2819, 1656))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2819, 1657)), "libneo-c.c", 2819, 1658))->value&((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2819, 1659)), "libneo-c.c", 2819, 1660))->value))), come_pop_stackframe(), __exception_result_var_b342);
    come_call_finalizer3(right_value274,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value275,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result371__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value276;
void* right_value277;
struct integer* __exception_result_var_b343;
struct integer* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
    __result372__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2824, 1667),__exception_result_var_b343=((struct integer*)(right_value277=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value276=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2824, "integer"))), "libneo-c.c", 2824, 1662))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2824, 1663)), "libneo-c.c", 2824, 1664))->value^((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2824, 1665)), "libneo-c.c", 2824, 1666))->value))), come_pop_stackframe(), __exception_result_var_b343);
    come_call_finalizer3(right_value276,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value277,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result372__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value278;
void* right_value279;
struct integer* __exception_result_var_b344;
struct integer* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    __result373__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2829, 1673),__exception_result_var_b344=((struct integer*)(right_value279=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value278=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2829, "integer"))), "libneo-c.c", 2829, 1668))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2829, 1669)), "libneo-c.c", 2829, 1670))->value|((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2829, 1671)), "libneo-c.c", 2829, 1672))->value))), come_pop_stackframe(), __exception_result_var_b344);
    come_call_finalizer3(right_value278,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value279,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result373__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value280;
void* right_value281;
struct integer* __exception_result_var_b345;
struct integer* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
right_value281 = (void*)0;
    __result374__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2834, 1679),__exception_result_var_b345=((struct integer*)(right_value281=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value280=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2834, "integer"))), "libneo-c.c", 2834, 1674))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2834, 1675)), "libneo-c.c", 2834, 1676))->value&&((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2834, 1677)), "libneo-c.c", 2834, 1678))->value))), come_pop_stackframe(), __exception_result_var_b345);
    come_call_finalizer3(right_value280,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value281,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result374__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value282;
void* right_value283;
struct integer* __exception_result_var_b346;
struct integer* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    __result375__ = __result_obj__ = (come_push_stackframe("libneo-c.c", 2839, 1685),__exception_result_var_b346=((struct integer*)(right_value283=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)come_null_check(((struct integer*)(right_value282=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2839, "integer"))), "libneo-c.c", 2839, 1680))),((struct integer*)come_null_check(((struct integer*)come_null_check(left, "libneo-c.c", 2839, 1681)), "libneo-c.c", 2839, 1682))->value||((struct integer*)come_null_check(((struct integer*)come_null_check(right, "libneo-c.c", 2839, 1683)), "libneo-c.c", 2839, 1684))->value))), come_pop_stackframe(), __exception_result_var_b346);
    come_call_finalizer3(right_value282,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value283,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result375__;
}

