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
struct sInterfaceNode
{
    int sline;
    char* sname;
    char* name;
    struct sClass* klass;
    _Bool mOutput;
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

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

char* sInterfaceNode_kind(struct sInterfaceNode* self);

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
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










struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
void* right_value80;
char* __exception_result_var_b52;
char* __dec_obj12;
struct sClass* __exception_result_var_b87;
void* right_value134;
struct sClass* __dec_obj47;
struct sInterfaceNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value134 = (void*)0;
    (come_push_stackframe("23interface.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "23interface.c", 7, 573)), "23interface.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 9, 580))->name;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 9, 580))->name=(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 9, 581),__exception_result_var_b52=((char*)(right_value80=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b52));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj47=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 10, 582))->klass;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 10, 582))->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value134=(come_push_stackframe("23interface.c", 10, 1411),__exception_result_var_b87=sClass_clone(klass), come_pop_stackframe(), __exception_result_var_b87))));
    come_call_finalizer3(__dec_obj47,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value134,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 12, 1412))->mOutput=output;
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sInterfaceNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer3(self,sInterfaceNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

char* sInterfaceNode_kind(struct sInterfaceNode* self){
void* __result_obj__;
void* right_value135;
char* __exception_result_var_b88;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
    __result83__ = __result_obj__ = (come_push_stackframe("23interface.c", 17, 1425),__exception_result_var_b88=((char*)(right_value135=__builtin_string("sInterfaceNode"))), come_pop_stackframe(), __exception_result_var_b88);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* __exception_result_var_b89;
char* name_90;
struct sClass* klass_91;
void* right_value137;
void* right_value138;
struct buffer* __exception_result_var_b90;
struct buffer* buf_92;
void* right_value139;
char* __exception_result_var_b91;
struct buffer* __exception_result_var_b92;
struct list$1tuple2$2charphsTypephph* o2_saved_93;
struct tuple2$2charphsTypeph* __exception_result_var_b95;
struct tuple2$2charphsTypeph* it_96;
_Bool __exception_result_var_b96;
struct tuple2$2charphsTypeph* __exception_result_var_b99;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_99;
struct sType* type_100;
struct buffer* __exception_result_var_b100;
void* right_value140;
char* __exception_result_var_b101;
struct buffer* __exception_result_var_b102;
struct buffer* __exception_result_var_b103;
struct buffer* __exception_result_var_b104;
_Bool _if_conditional165;
void* right_value141;
char* __exception_result_var_b105;
void* right_value148;
char* __exception_result_var_b137;
struct sClass* __exception_result_var_b138;
void* right_value149;
struct map$2charphsClassph* __exception_result_var_b139;
_Bool __result115__;
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
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
    name_90=(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 22, 1428),__exception_result_var_b89=((char*)(right_value136=__builtin_string(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "23interface.c", 22, 1426)), "23interface.c", 22, 1427))->name))), come_pop_stackframe(), __exception_result_var_b89));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_91=((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "23interface.c", 23, 1429)), "23interface.c", 23, 1430))->klass;
    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_91, "23interface.c", 24, 1431)), "23interface.c", 24, 1432))->mProtocol=(_Bool)1;
    buf_92=(struct buffer*)come_increment_ref_count((come_push_stackframe("23interface.c", 26, 1434),__exception_result_var_b90=((struct buffer*)(right_value138=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value137=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 26, "buffer"))), "23interface.c", 26, 1433)))))), come_pop_stackframe(), __exception_result_var_b90));
    come_call_finalizer3(right_value137,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value138,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("23interface.c", 28, 1440),__exception_result_var_b92=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_92, "23interface.c", 28, 1435)), "23interface.c", 28, 1436)),(come_push_stackframe("23interface.c", 28, 1439),__exception_result_var_b91=((char*)(right_value139=xsprintf("struct %s\n{\n",((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_91, "23interface.c", 28, 1437)), "23interface.c", 28, 1438))->mName))), come_pop_stackframe(), __exception_result_var_b91)), come_pop_stackframe(), __exception_result_var_b92);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    o2_saved_93=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_91, "23interface.c", 31, 1441)), "23interface.c", 31, 1442))->mFields)),it_96=(come_push_stackframe("23interface.c", 31, 1457),__exception_result_var_b95=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_93), "23interface.c", 31, 1443)), "23interface.c", 31, 1444))), come_pop_stackframe(), __exception_result_var_b95);    !(come_push_stackframe("23interface.c", 31, 1462),__exception_result_var_b96=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_93), "23interface.c", 31, 1458)), "23interface.c", 31, 1459))), come_pop_stackframe(), __exception_result_var_b96);    it_96=(come_push_stackframe("23interface.c", 31, 1481),__exception_result_var_b99=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_93), "23interface.c", 31, 1463)), "23interface.c", 31, 1464))), come_pop_stackframe(), __exception_result_var_b99)    ){
        multiple_assign_var1=it_96;
        name_99=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_100=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        (come_push_stackframe("23interface.c", 34, 1484),__exception_result_var_b100=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_92, "23interface.c", 34, 1482)), "23interface.c", 34, 1483)),"    "), come_pop_stackframe(), __exception_result_var_b100);
        (come_push_stackframe("23interface.c", 35, 1488),__exception_result_var_b102=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_92, "23interface.c", 35, 1485)), "23interface.c", 35, 1486)),(come_push_stackframe("23interface.c", 35, 1487),__exception_result_var_b101=((char*)(right_value140=make_define_var(type_100,name_99,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b101)), come_pop_stackframe(), __exception_result_var_b102);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("23interface.c", 36, 1491),__exception_result_var_b103=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_92, "23interface.c", 36, 1489)), "23interface.c", 36, 1490)),";\n"), come_pop_stackframe(), __exception_result_var_b103);
        name_99 = come_decrement_ref_count2(name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_100,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_93,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("23interface.c", 39, 1494),__exception_result_var_b104=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_92, "23interface.c", 39, 1492)), "23interface.c", 39, 1493)),"};\n"), come_pop_stackframe(), __exception_result_var_b104);
    if(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "23interface.c", 41, 1495)), "23interface.c", 41, 1496))->mOutput) {
        (come_push_stackframe("23interface.c", 42,1500),add_come_code_at_source_head(info,"%s",(come_push_stackframe("23interface.c", 42, 1499),__exception_result_var_b105=((char*)(right_value141=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_92, "23interface.c", 42, 1497)), "23interface.c", 42, 1498))))), come_pop_stackframe(), __exception_result_var_b105)),come_pop_stackframe());
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("23interface.c", 43, 1879),__exception_result_var_b139=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 43, 1501)), "23interface.c", 43, 1502))->classes, "23interface.c", 43, 1503)), "23interface.c", 43, 1504)),(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 43, 1877),__exception_result_var_b137=((char*)(right_value148=__builtin_string(name_90))), come_pop_stackframe(), __exception_result_var_b137)),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value149=(come_push_stackframe("23interface.c", 43, 1878),__exception_result_var_b138=sClass_clone(klass_91), come_pop_stackframe(), __exception_result_var_b138))))), come_pop_stackframe(), __exception_result_var_b139);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value149,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    __result115__ = (_Bool)1;
    name_90 = come_decrement_ref_count2(name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_92,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result115__;
    name_90 = come_decrement_ref_count2(name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_92,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 576)), "sNodeBase_finalize", 0, 577))->sname!=((void*)0),        _if_conditional19) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sClass* __result52__;
void* right_value81;
struct sClass* result_47;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
char* __exception_result_var_b53;
void* right_value82;
char* __dec_obj13;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b84;
void* right_value131;
struct list$1tuple2$2charphsTypephph* __dec_obj44;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
char* __exception_result_var_b85;
void* right_value132;
char* __dec_obj45;
_Bool _if_conditional156;
_Bool _if_conditional157;
char* __exception_result_var_b86;
void* right_value133;
char* __dec_obj46;
struct sClass* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&result_47, 0, sizeof(struct sClass*));
right_value82 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
        if(_if_conditional20=self==(void*)0,        _if_conditional20) {
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        result_47=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value81=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
        come_call_finalizer3(right_value81,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional45=self!=((void*)0),        _if_conditional45) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 4, 695)), "sClass_clone", 4, 696))->mStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 4, 697)), "sClass_clone", 4, 698))->mStruct;
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 5, 699)), "sClass_clone", 5, 700))->mFloat=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 5, 701)), "sClass_clone", 5, 702))->mFloat;
        }
        if(_if_conditional47=self!=((void*)0),        _if_conditional47) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 6, 703)), "sClass_clone", 6, 704))->mUnion=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 6, 705)), "sClass_clone", 6, 706))->mUnion;
        }
        if(_if_conditional48=self!=((void*)0),        _if_conditional48) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 7, 707)), "sClass_clone", 7, 708))->mGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 7, 709)), "sClass_clone", 7, 710))->mGenerics;
        }
        if(_if_conditional49=self!=((void*)0),        _if_conditional49) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 8, 711)), "sClass_clone", 8, 712))->mMethodGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 8, 713)), "sClass_clone", 8, 714))->mMethodGenerics;
        }
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 9, 715)), "sClass_clone", 9, 716))->mEnum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 9, 717)), "sClass_clone", 9, 718))->mEnum;
        }
        if(_if_conditional51=self!=((void*)0),        _if_conditional51) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 10, 719)), "sClass_clone", 10, 720))->mProtocol=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 10, 721)), "sClass_clone", 10, 722))->mProtocol;
        }
        if(_if_conditional52=self!=((void*)0),        _if_conditional52) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 11, 723)), "sClass_clone", 11, 724))->mNumber=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 11, 725)), "sClass_clone", 11, 726))->mNumber;
        }
        if(_if_conditional53=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 727)), "sClass_clone", 12, 728))->mName!=((void*)0),        _if_conditional53) {
            __dec_obj13=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 12, 729)), "sClass_clone", 12, 730))->mName;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 12, 729)), "sClass_clone", 12, 730))->mName=(char*)come_increment_ref_count(((char*)(right_value82=(come_push_stackframe("sClass_clone", 12, 733),__exception_result_var_b53=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 731)), "sClass_clone", 12, 732))->mName), come_pop_stackframe(), __exception_result_var_b53))));
            __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 13, 734)), "sClass_clone", 13, 735))->mGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 13, 736)), "sClass_clone", 13, 737))->mGenericsNum;
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 14, 738)), "sClass_clone", 14, 739))->mMethodGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 14, 740)), "sClass_clone", 14, 741))->mMethodGenericsNum;
        }
        if(_if_conditional56=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 742)), "sClass_clone", 15, 743))->mFields!=((void*)0),        _if_conditional56) {
            __dec_obj44=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 15, 744)), "sClass_clone", 15, 745))->mFields;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 15, 744)), "sClass_clone", 15, 745))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value131=(come_push_stackframe("sClass_clone", 15, 1380),__exception_result_var_b84=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 746)), "sClass_clone", 15, 747))->mFields), come_pop_stackframe(), __exception_result_var_b84))));
            come_call_finalizer3(__dec_obj44,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value131,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional153=self!=((void*)0),        _if_conditional153) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 16, 1385)), "sClass_clone", 16, 1386))->mOutputed=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 16, 1387)), "sClass_clone", 16, 1388))->mOutputed;
        }
        if(_if_conditional154=self!=((void*)0),        _if_conditional154) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 17, 1389)), "sClass_clone", 17, 1390))->mOutputed2=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 17, 1391)), "sClass_clone", 17, 1392))->mOutputed2;
        }
        if(_if_conditional155=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 1393)), "sClass_clone", 18, 1394))->mDeclareSName!=((void*)0),        _if_conditional155) {
            __dec_obj45=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 18, 1395)), "sClass_clone", 18, 1396))->mDeclareSName;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 18, 1395)), "sClass_clone", 18, 1396))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value132=(come_push_stackframe("sClass_clone", 18, 1399),__exception_result_var_b85=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 1397)), "sClass_clone", 18, 1398))->mDeclareSName), come_pop_stackframe(), __exception_result_var_b85))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional156=self!=((void*)0),        _if_conditional156) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 19, 1400)), "sClass_clone", 19, 1401))->mNobodyStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 19, 1402)), "sClass_clone", 19, 1403))->mNobodyStruct;
        }
        if(_if_conditional157=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 1404)), "sClass_clone", 20, 1405))->mParentClassName!=((void*)0),        _if_conditional157) {
            __dec_obj46=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 20, 1406)), "sClass_clone", 20, 1407))->mParentClassName;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_47, "sClass_clone", 20, 1406)), "sClass_clone", 20, 1407))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value133=(come_push_stackframe("sClass_clone", 20, 1410),__exception_result_var_b86=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 1408)), "sClass_clone", 20, 1409))->mParentClassName), come_pop_stackframe(), __exception_result_var_b86))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result81__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result81__;
        come_call_finalizer3(result_47,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional43;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional21=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 583)), "sClass_finalize", 0, 584))->mName!=((void*)0),            _if_conditional21) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 585)), "sClass_finalize", 0, 586))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 585)), "sClass_finalize", 0, 586))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 587)), "sClass_finalize", 1, 588))->mFields!=((void*)0),            _if_conditional22) {
                come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 589)), "sClass_finalize", 1, 590))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional43=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 687)), "sClass_finalize", 2, 688))->mDeclareSName!=((void*)0),            _if_conditional43) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 689)), "sClass_finalize", 2, 690))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 689)), "sClass_finalize", 2, 690))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional44=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 691)), "sClass_finalize", 3, 692))->mParentClassName!=((void*)0),            _if_conditional44) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 693)), "sClass_finalize", 3, 694))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 693)), "sClass_finalize", 3, 694))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                    it_48=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 591)), "./neo-c.h", 120, 592))->head;
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        prev_it_49=it_48;
                        it_48=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_48, "./neo-c.h", 123, 593)), "./neo-c.h", 123, 594))->next;
                        come_call_finalizer3(prev_it_49,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional23=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 595)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 596))->item!=((void*)0),                            _if_conditional23) {
                                come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 597)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 598))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
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
                                            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 607)), "sType_finalize", 0, 608))->mMultipleTypes!=((void*)0),                                            _if_conditional26) {
                                                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 609)), "sType_finalize", 0, 610))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 619)), "sType_finalize", 1, 620))->mNoSolvedGenericsType!=((void*)0),                                            _if_conditional28) {
                                                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 621)), "sType_finalize", 1, 622))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 627)), "sType_finalize", 2, 628))->mOriginalLoadVarType!=((void*)0),                                            _if_conditional30) {
                                                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 629)), "sType_finalize", 2, 630))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 631)), "sType_finalize", 3, 632))->mGenericsName!=((void*)0),                                            _if_conditional31) {
                                                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 633)), "sType_finalize", 3, 634))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 633)), "sType_finalize", 3, 634))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 635)), "sType_finalize", 4, 636))->mGenericsTypes!=((void*)0),                                            _if_conditional32) {
                                                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 637)), "sType_finalize", 4, 638))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 639)), "sType_finalize", 5, 640))->mArrayNum!=((void*)0),                                            _if_conditional33) {
                                                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 641)), "sType_finalize", 5, 642))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 651)), "sType_finalize", 6, 652))->mParamTypes!=((void*)0),                                            _if_conditional35) {
                                                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 653)), "sType_finalize", 6, 654))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 655)), "sType_finalize", 7, 656))->mParamNames!=((void*)0),                                            _if_conditional36) {
                                                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 657)), "sType_finalize", 7, 658))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 667)), "sType_finalize", 8, 668))->mResultType!=((void*)0),                                            _if_conditional38) {
                                                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 669)), "sType_finalize", 8, 670))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 671)), "sType_finalize", 9, 672))->mAlignas!=((void*)0),                                            _if_conditional39) {
                                                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 673)), "sType_finalize", 9, 674))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 673)), "sType_finalize", 9, 674))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 673)), "sType_finalize", 9, 674))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 673)), "sType_finalize", 9, 674))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 673)), "sType_finalize", 9, 674))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 675)), "sType_finalize", 10, 676))->mSizeNum!=((void*)0),                                            _if_conditional40) {
                                                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 677)), "sType_finalize", 10, 678))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 677)), "sType_finalize", 10, 678))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 677)), "sType_finalize", 10, 678))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 677)), "sType_finalize", 10, 678))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 677)), "sType_finalize", 10, 678))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 679)), "sType_finalize", 11, 680))->mOriginalTypeName!=((void*)0),                                            _if_conditional41) {
                                                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 681)), "sType_finalize", 11, 682))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 681)), "sType_finalize", 11, 682))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 683)), "sType_finalize", 12, 684))->mAsmName!=((void*)0),                                            _if_conditional42) {
                                                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 685)), "sType_finalize", 12, 686))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 685)), "sType_finalize", 12, 686))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                                                    it_50=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 611)), "./neo-c.h", 120, 612))->head;
                                                    while(_while_condtional8=it_50!=((void*)0),                                                    _while_condtional8) {
                                                        prev_it_51=it_50;
                                                        it_50=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_50, "./neo-c.h", 123, 613)), "./neo-c.h", 123, 614))->next;
                                                        come_call_finalizer3(prev_it_51,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional27=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 615)), "list_item$1sTypephp_finalize", 0, 616))->item!=((void*)0),                                                            _if_conditional27) {
                                                                come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 617)), "list_item$1sTypephp_finalize", 0, 618))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional29=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 623)), "tuple1$1sTypephp_finalize", 0, 624))->v1!=((void*)0),                                                    _if_conditional29) {
                                                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 625)), "tuple1$1sTypephp_finalize", 0, 626))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                                                    it_52=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 643)), "./neo-c.h", 120, 644))->head;
                                                    while(_while_condtional9=it_52!=((void*)0),                                                    _while_condtional9) {
                                                        prev_it_53=it_52;
                                                        it_52=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_52, "./neo-c.h", 123, 645)), "./neo-c.h", 123, 646))->next;
                                                        come_call_finalizer3(prev_it_53,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional34=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 647)), "list_item$1sNodephp_finalize", 0, 648))->item!=((void*)0),                                                            _if_conditional34) {
                                                                if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 649)), "list_item$1sNodephp_finalize", 0, 650))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 649)), "list_item$1sNodephp_finalize", 0, 650))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 649)), "list_item$1sNodephp_finalize", 0, 650))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 649)), "list_item$1sNodephp_finalize", 0, 650))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 649)), "list_item$1sNodephp_finalize", 0, 650))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                                                    it_54=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 659)), "./neo-c.h", 120, 660))->head;
                                                    while(_while_condtional10=it_54!=((void*)0),                                                    _while_condtional10) {
                                                        prev_it_55=it_54;
                                                        it_54=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_54, "./neo-c.h", 123, 661)), "./neo-c.h", 123, 662))->next;
                                                        come_call_finalizer3(prev_it_55,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional37=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 663)), "list_item$1charphp_finalize", 0, 664))->item!=((void*)0),                                                            _if_conditional37) {
                                                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 665)), "list_item$1charphp_finalize", 0, 666))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 665)), "list_item$1charphp_finalize", 0, 666))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional57;
struct list$1tuple2$2charphsTypephph* __result53__;
void* right_value83;
void* right_value84;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b54;
struct list$1tuple2$2charphsTypephph* result_56;
struct list_item$1tuple2$2charphsTypephph* it_57;
_Bool _while_condtional11;
struct tuple2$2charphsTypeph* __exception_result_var_b82;
void* right_value130;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b83;
struct list$1tuple2$2charphsTypephph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_56, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_57, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value130 = (void*)0;
                if(_if_conditional57=self==((void*)0),                _if_conditional57) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_56=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 756),__exception_result_var_b54=((struct list$1tuple2$2charphsTypephph*)(right_value84=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value83=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsTypephph"))), "./neo-c.h", 139, 748)), "./neo-c.h", 139, 749)))))), come_pop_stackframe(), __exception_result_var_b54));
                come_call_finalizer3(right_value83,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value84,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_57=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 141, 757)), "./neo-c.h", 141, 758))->head;
                while(_while_condtional11=it_57!=((void*)0),                _while_condtional11) {
                    (come_push_stackframe("./neo-c.h", 143, 1377),__exception_result_var_b83=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_56, "./neo-c.h", 143, 759)), "./neo-c.h", 143, 760)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value130=(come_push_stackframe("./neo-c.h", 143, 1376),__exception_result_var_b82=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_57, "./neo-c.h", 143, 829)), "./neo-c.h", 143, 830))->item), come_pop_stackframe(), __exception_result_var_b82))))), come_pop_stackframe(), __exception_result_var_b83);
                    come_call_finalizer3(right_value130,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_57=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_57, "./neo-c.h", 145, 1378)), "./neo-c.h", 145, 1379))->next;
                }
                __result80__ = __result_obj__ = result_56;
                come_call_finalizer3(result_56,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result80__;
                come_call_finalizer3(result_56,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 101, 750)), "./neo-c.h", 101, 751))->head=((void*)0);
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 102, 752)), "./neo-c.h", 102, 753))->tail=((void*)0);
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 103, 754)), "./neo-c.h", 103, 755))->len=0;
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional58;
void* right_value85;
struct list_item$1tuple2$2charphsTypephph* litem_58;
struct tuple2$2charphsTypeph* __dec_obj14;
_Bool _if_conditional61;
void* right_value86;
struct list_item$1tuple2$2charphsTypephph* litem_59;
struct tuple2$2charphsTypeph* __dec_obj15;
void* right_value87;
struct list_item$1tuple2$2charphsTypephph* litem_60;
struct tuple2$2charphsTypeph* __dec_obj16;
struct list$1tuple2$2charphsTypephph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value86 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value87 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional58=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 152, 761)), "./neo-c.h", 152, 762))->len==0,                        _if_conditional58) {
                            litem_58=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value85=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value85,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_58, "./neo-c.h", 155, 763)), "./neo-c.h", 155, 764))->prev=((void*)0);
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_58, "./neo-c.h", 156, 765)), "./neo-c.h", 156, 766))->next=((void*)0);
                            __dec_obj14=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_58, "./neo-c.h", 157, 767)), "./neo-c.h", 157, 768))->item;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_58, "./neo-c.h", 157, 767)), "./neo-c.h", 157, 768))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj14,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 159, 777)), "./neo-c.h", 159, 778))->tail=litem_58;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 160, 779)), "./neo-c.h", 160, 780))->head=litem_58;
                        }
                        else {
                            if(_if_conditional61=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 162, 781)), "./neo-c.h", 162, 782))->len==1,                            _if_conditional61) {
                                litem_59=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value86=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value86,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_59, "./neo-c.h", 165, 783)), "./neo-c.h", 165, 784))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 165, 785)), "./neo-c.h", 165, 786))->head;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_59, "./neo-c.h", 166, 787)), "./neo-c.h", 166, 788))->next=((void*)0);
                                __dec_obj15=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_59, "./neo-c.h", 167, 789)), "./neo-c.h", 167, 790))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_59, "./neo-c.h", 167, 789)), "./neo-c.h", 167, 790))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 169, 799)), "./neo-c.h", 169, 800))->tail=litem_59;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 170, 801)), "./neo-c.h", 170, 802))->head, "./neo-c.h", 170, 803)), "./neo-c.h", 170, 804))->next=litem_59;
                            }
                            else {
                                litem_60=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value87=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value87,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_60, "./neo-c.h", 175, 805)), "./neo-c.h", 175, 806))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 175, 807)), "./neo-c.h", 175, 808))->tail;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_60, "./neo-c.h", 176, 809)), "./neo-c.h", 176, 810))->next=((void*)0);
                                __dec_obj16=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_60, "./neo-c.h", 177, 811)), "./neo-c.h", 177, 812))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_60, "./neo-c.h", 177, 811)), "./neo-c.h", 177, 812))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj16,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 179, 821)), "./neo-c.h", 179, 822))->tail, "./neo-c.h", 179, 823)), "./neo-c.h", 179, 824))->next=litem_60;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 180, 825)), "./neo-c.h", 180, 826))->tail=litem_60;
                            }
                        }
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 183, 827)), "./neo-c.h", 183, 828))->len++;
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional64=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 813)), "tuple2$2charphsTypephp_finalize", 0, 814))->v1!=((void*)0),                                    _if_conditional64) {
                                        ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 815)), "tuple2$2charphsTypephp_finalize", 0, 816))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 815)), "tuple2$2charphsTypephp_finalize", 0, 816))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional65=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 817)), "tuple2$2charphsTypephp_finalize", 1, 818))->v2!=((void*)0),                                    _if_conditional65) {
                                        come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 819)), "tuple2$2charphsTypephp_finalize", 1, 820))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct tuple2$2charphsTypeph* __result56__;
void* right_value88;
struct tuple2$2charphsTypeph* result_61;
_Bool _if_conditional69;
char* __exception_result_var_b55;
void* right_value89;
char* __dec_obj17;
_Bool _if_conditional70;
struct sType* __exception_result_var_b81;
void* right_value129;
struct sType* __dec_obj43;
struct tuple2$2charphsTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value89 = (void*)0;
right_value129 = (void*)0;
                        if(_if_conditional66=self==(void*)0,                        _if_conditional66) {
                            __result56__ = __result_obj__ = (void*)0;
                            return __result56__;
                        }
                        result_61=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value88=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer3(right_value88,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional69=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 839)), "tuple2$2charphsTypephp_clone", 4, 840))->v1!=((void*)0),                        _if_conditional69) {
                            __dec_obj17=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_61, "tuple2$2charphsTypephp_clone", 4, 841)), "tuple2$2charphsTypephp_clone", 4, 842))->v1;
                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_61, "tuple2$2charphsTypephp_clone", 4, 841)), "tuple2$2charphsTypephp_clone", 4, 842))->v1=(char*)come_increment_ref_count(((char*)(right_value89=(come_push_stackframe("tuple2$2charphsTypephp_clone", 4, 845),__exception_result_var_b55=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 843)), "tuple2$2charphsTypephp_clone", 4, 844))->v1), come_pop_stackframe(), __exception_result_var_b55))));
                            __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional70=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 846)), "tuple2$2charphsTypephp_clone", 5, 847))->v2!=((void*)0),                        _if_conditional70) {
                            __dec_obj43=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_61, "tuple2$2charphsTypephp_clone", 5, 848)), "tuple2$2charphsTypephp_clone", 5, 849))->v2;
                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_61, "tuple2$2charphsTypephp_clone", 5, 848)), "tuple2$2charphsTypephp_clone", 5, 849))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(come_push_stackframe("tuple2$2charphsTypephp_clone", 5, 1375),__exception_result_var_b81=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 850)), "tuple2$2charphsTypephp_clone", 5, 851))->v2), come_pop_stackframe(), __exception_result_var_b81))));
                            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value129,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        __result79__ = __result_obj__ = result_61;
                        come_call_finalizer3(result_61,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                        return __result79__;
                        come_call_finalizer3(result_61,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional67;
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional67=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 831)), "tuple2$2charphsTypeph_finalize", 0, 832))->v1!=((void*)0),                            _if_conditional67) {
                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 833)), "tuple2$2charphsTypeph_finalize", 0, 834))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 833)), "tuple2$2charphsTypeph_finalize", 0, 834))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional68=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 835)), "tuple2$2charphsTypeph_finalize", 1, 836))->v2!=((void*)0),                            _if_conditional68) {
                                come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 837)), "tuple2$2charphsTypeph_finalize", 1, 838))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional71;
struct sType* __result57__;
void* right_value90;
struct sType* result_62;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct list$1sTypeph* __exception_result_var_b59;
void* right_value97;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional77;
struct tuple1$1sTypeph* __exception_result_var_b61;
void* right_value100;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional81;
struct tuple1$1sTypeph* __exception_result_var_b63;
void* right_value103;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional84;
char* __exception_result_var_b64;
void* right_value104;
char* __dec_obj26;
_Bool _if_conditional85;
struct list$1sTypeph* __exception_result_var_b65;
void* right_value105;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional86;
struct list$1sNodeph* __exception_result_var_b69;
void* right_value113;
struct list$1sNodeph* __dec_obj31;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct list$1sTypeph* __exception_result_var_b70;
void* right_value114;
struct list$1sTypeph* __dec_obj32;
_Bool _if_conditional101;
struct list$1charph* __exception_result_var_b74;
void* right_value121;
struct list$1charph* __dec_obj36;
_Bool _if_conditional105;
struct tuple1$1sTypeph* __exception_result_var_b76;
void* right_value124;
struct tuple1$1sTypeph* __dec_obj38;
_Bool _if_conditional108;
_Bool _if_conditional109;
struct sNode* __exception_result_var_b77;
void* right_value125;
struct sNode* __dec_obj39;
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
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct sNode* __exception_result_var_b78;
void* right_value126;
struct sNode* __dec_obj40;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
char* __exception_result_var_b79;
void* right_value127;
char* __dec_obj41;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
char* __exception_result_var_b80;
void* right_value128;
char* __dec_obj42;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_62, 0, sizeof(struct sType*));
right_value97 = (void*)0;
right_value100 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value121 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
                                if(_if_conditional71=self==(void*)0,                                _if_conditional71) {
                                    __result57__ = __result_obj__ = (void*)0;
                                    return __result57__;
                                }
                                result_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                come_call_finalizer3(right_value90,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional72=self!=((void*)0),                                _if_conditional72) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 4, 852)), "sType_clone", 4, 853))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 854)), "sType_clone", 4, 855))->mClass;
                                }
                                if(_if_conditional73=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 856)), "sType_clone", 5, 857))->mMultipleTypes!=((void*)0),                                _if_conditional73) {
                                    __dec_obj21=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 5, 858)), "sType_clone", 5, 859))->mMultipleTypes;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 5, 858)), "sType_clone", 5, 859))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value97=(come_push_stackframe("sType_clone", 5, 925),__exception_result_var_b59=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 860)), "sType_clone", 5, 861))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b59))));
                                    come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value97,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 930)), "sType_clone", 6, 931))->mNoSolvedGenericsType!=((void*)0),                                _if_conditional77) {
                                    __dec_obj23=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 6, 932)), "sType_clone", 6, 933))->mNoSolvedGenericsType;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 6, 932)), "sType_clone", 6, 933))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value100=(come_push_stackframe("sType_clone", 6, 947),__exception_result_var_b61=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 934)), "sType_clone", 6, 935))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b61))));
                                    come_call_finalizer3(__dec_obj23,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value100,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 948)), "sType_clone", 7, 949))->mOriginalLoadVarType!=((void*)0),                                _if_conditional81) {
                                    __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 7, 950)), "sType_clone", 7, 951))->mOriginalLoadVarType;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 7, 950)), "sType_clone", 7, 951))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value103=(come_push_stackframe("sType_clone", 7, 961),__exception_result_var_b63=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 952)), "sType_clone", 7, 953))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b63))));
                                    come_call_finalizer3(__dec_obj25,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value103,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional84=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 962)), "sType_clone", 8, 963))->mGenericsName!=((void*)0),                                _if_conditional84) {
                                    __dec_obj26=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 8, 964)), "sType_clone", 8, 965))->mGenericsName;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 8, 964)), "sType_clone", 8, 965))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value104=(come_push_stackframe("sType_clone", 8, 968),__exception_result_var_b64=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 966)), "sType_clone", 8, 967))->mGenericsName), come_pop_stackframe(), __exception_result_var_b64))));
                                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional85=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 969)), "sType_clone", 9, 970))->mGenericsTypes!=((void*)0),                                _if_conditional85) {
                                    __dec_obj27=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 9, 971)), "sType_clone", 9, 972))->mGenericsTypes;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 9, 971)), "sType_clone", 9, 972))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=(come_push_stackframe("sType_clone", 9, 975),__exception_result_var_b65=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 973)), "sType_clone", 9, 974))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b65))));
                                    come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional86=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 976)), "sType_clone", 10, 977))->mArrayNum!=((void*)0),                                _if_conditional86) {
                                    __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 10, 978)), "sType_clone", 10, 979))->mArrayNum;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 10, 978)), "sType_clone", 10, 979))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value113=(come_push_stackframe("sType_clone", 10, 1079),__exception_result_var_b69=list$1sNodeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 980)), "sType_clone", 10, 981))->mArrayNum), come_pop_stackframe(), __exception_result_var_b69))));
                                    come_call_finalizer3(__dec_obj31,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value113,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional99=self!=((void*)0),                                _if_conditional99) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 11, 1084)), "sType_clone", 11, 1085))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 1086)), "sType_clone", 11, 1087))->mOmitArrayNum;
                                }
                                if(_if_conditional100=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1088)), "sType_clone", 12, 1089))->mParamTypes!=((void*)0),                                _if_conditional100) {
                                    __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 12, 1090)), "sType_clone", 12, 1091))->mParamTypes;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 12, 1090)), "sType_clone", 12, 1091))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value114=(come_push_stackframe("sType_clone", 12, 1094),__exception_result_var_b70=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1092)), "sType_clone", 12, 1093))->mParamTypes), come_pop_stackframe(), __exception_result_var_b70))));
                                    come_call_finalizer3(__dec_obj32,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value114,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional101=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1095)), "sType_clone", 13, 1096))->mParamNames!=((void*)0),                                _if_conditional101) {
                                    __dec_obj36=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 13, 1097)), "sType_clone", 13, 1098))->mParamNames;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 13, 1097)), "sType_clone", 13, 1098))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(come_push_stackframe("sType_clone", 13, 1164),__exception_result_var_b74=list$1charph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1099)), "sType_clone", 13, 1100))->mParamNames), come_pop_stackframe(), __exception_result_var_b74))));
                                    come_call_finalizer3(__dec_obj36,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional105=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1169)), "sType_clone", 14, 1170))->mResultType!=((void*)0),                                _if_conditional105) {
                                    __dec_obj38=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 14, 1171)), "sType_clone", 14, 1172))->mResultType;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 14, 1171)), "sType_clone", 14, 1172))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value124=(come_push_stackframe("sType_clone", 14, 1182),__exception_result_var_b76=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1173)), "sType_clone", 14, 1174))->mResultType), come_pop_stackframe(), __exception_result_var_b76))));
                                    come_call_finalizer3(__dec_obj38,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value124,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional108=self!=((void*)0),                                _if_conditional108) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 15, 1183)), "sType_clone", 15, 1184))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1185)), "sType_clone", 15, 1186))->mVarArgs;
                                }
                                if(_if_conditional109=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1187)), "sType_clone", 16, 1188))->mAlignas!=((void*)0),                                _if_conditional109) {
                                    __dec_obj39=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 16, 1189)), "sType_clone", 16, 1190))->mAlignas;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 16, 1189)), "sType_clone", 16, 1190))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=(come_push_stackframe("sType_clone", 16, 1193),__exception_result_var_b77=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1191)), "sType_clone", 16, 1192))->mAlignas), come_pop_stackframe(), __exception_result_var_b77))));
                                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional110=self!=((void*)0),                                _if_conditional110) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 17, 1194)), "sType_clone", 17, 1195))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1196)), "sType_clone", 17, 1197))->mUnsigned;
                                }
                                if(_if_conditional111=self!=((void*)0),                                _if_conditional111) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 18, 1198)), "sType_clone", 18, 1199))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1200)), "sType_clone", 18, 1201))->mShort;
                                }
                                if(_if_conditional112=self!=((void*)0),                                _if_conditional112) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 19, 1202)), "sType_clone", 19, 1203))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1204)), "sType_clone", 19, 1205))->mLong;
                                }
                                if(_if_conditional113=self!=((void*)0),                                _if_conditional113) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 20, 1206)), "sType_clone", 20, 1207))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1208)), "sType_clone", 20, 1209))->mLongLong;
                                }
                                if(_if_conditional114=self!=((void*)0),                                _if_conditional114) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 21, 1210)), "sType_clone", 21, 1211))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1212)), "sType_clone", 21, 1213))->mConstant;
                                }
                                if(_if_conditional115=self!=((void*)0),                                _if_conditional115) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 22, 1214)), "sType_clone", 22, 1215))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1216)), "sType_clone", 22, 1217))->mRegister;
                                }
                                if(_if_conditional116=self!=((void*)0),                                _if_conditional116) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 23, 1218)), "sType_clone", 23, 1219))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1220)), "sType_clone", 23, 1221))->mVolatile;
                                }
                                if(_if_conditional117=self!=((void*)0),                                _if_conditional117) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 24, 1222)), "sType_clone", 24, 1223))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1224)), "sType_clone", 24, 1225))->mStatic;
                                }
                                if(_if_conditional118=self!=((void*)0),                                _if_conditional118) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 25, 1226)), "sType_clone", 25, 1227))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1228)), "sType_clone", 25, 1229))->mUniq;
                                }
                                if(_if_conditional119=self!=((void*)0),                                _if_conditional119) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 26, 1230)), "sType_clone", 26, 1231))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1232)), "sType_clone", 26, 1233))->mRecord;
                                }
                                if(_if_conditional120=self!=((void*)0),                                _if_conditional120) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 27, 1234)), "sType_clone", 27, 1235))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1236)), "sType_clone", 27, 1237))->mExtern;
                                }
                                if(_if_conditional121=self!=((void*)0),                                _if_conditional121) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 28, 1238)), "sType_clone", 28, 1239))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1240)), "sType_clone", 28, 1241))->mRestrict;
                                }
                                if(_if_conditional122=self!=((void*)0),                                _if_conditional122) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 29, 1242)), "sType_clone", 29, 1243))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1244)), "sType_clone", 29, 1245))->mImmutable;
                                }
                                if(_if_conditional123=self!=((void*)0),                                _if_conditional123) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 30, 1246)), "sType_clone", 30, 1247))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1248)), "sType_clone", 30, 1249))->mHeap;
                                }
                                if(_if_conditional124=self!=((void*)0),                                _if_conditional124) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 31, 1250)), "sType_clone", 31, 1251))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1252)), "sType_clone", 31, 1253))->mDummyHeap;
                                }
                                if(_if_conditional125=self!=((void*)0),                                _if_conditional125) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 32, 1254)), "sType_clone", 32, 1255))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1256)), "sType_clone", 32, 1257))->mDelegate;
                                }
                                if(_if_conditional126=self!=((void*)0),                                _if_conditional126) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 33, 1258)), "sType_clone", 33, 1259))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1260)), "sType_clone", 33, 1261))->mShare;
                                }
                                if(_if_conditional127=self!=((void*)0),                                _if_conditional127) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 34, 1262)), "sType_clone", 34, 1263))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1264)), "sType_clone", 34, 1265))->mClone;
                                }
                                if(_if_conditional128=self!=((void*)0),                                _if_conditional128) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 35, 1266)), "sType_clone", 35, 1267))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1268)), "sType_clone", 35, 1269))->mNoHeap;
                                }
                                if(_if_conditional129=self!=((void*)0),                                _if_conditional129) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 36, 1270)), "sType_clone", 36, 1271))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1272)), "sType_clone", 36, 1273))->mNoCallingDestructor;
                                }
                                if(_if_conditional130=self!=((void*)0),                                _if_conditional130) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 37, 1274)), "sType_clone", 37, 1275))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1276)), "sType_clone", 37, 1277))->mRefference;
                                }
                                if(_if_conditional131=self!=((void*)0),                                _if_conditional131) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 38, 1278)), "sType_clone", 38, 1279))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1280)), "sType_clone", 38, 1281))->mException;
                                }
                                if(_if_conditional132=self!=((void*)0),                                _if_conditional132) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 39, 1282)), "sType_clone", 39, 1283))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1284)), "sType_clone", 39, 1285))->mPointerNum;
                                }
                                if(_if_conditional133=self!=((void*)0),                                _if_conditional133) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 40, 1286)), "sType_clone", 40, 1287))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1288)), "sType_clone", 40, 1289))->mOriginalTypeNamePointerNum;
                                }
                                if(_if_conditional134=self!=((void*)0),                                _if_conditional134) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 41, 1290)), "sType_clone", 41, 1291))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1292)), "sType_clone", 41, 1293))->mNoArrayPointerNum;
                                }
                                if(_if_conditional135=self!=((void*)0),                                _if_conditional135) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 42, 1294)), "sType_clone", 42, 1295))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1296)), "sType_clone", 42, 1297))->mTypedefOriginalPointerNum;
                                }
                                if(_if_conditional136=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1298)), "sType_clone", 43, 1299))->mSizeNum!=((void*)0),                                _if_conditional136) {
                                    __dec_obj40=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 43, 1300)), "sType_clone", 43, 1301))->mSizeNum;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 43, 1300)), "sType_clone", 43, 1301))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=(come_push_stackframe("sType_clone", 43, 1304),__exception_result_var_b78=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1302)), "sType_clone", 43, 1303))->mSizeNum), come_pop_stackframe(), __exception_result_var_b78))));
                                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional137=self!=((void*)0),                                _if_conditional137) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 44, 1305)), "sType_clone", 44, 1306))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1307)), "sType_clone", 44, 1308))->mDynamicArrayNum;
                                }
                                if(_if_conditional138=self!=((void*)0),                                _if_conditional138) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 45, 1309)), "sType_clone", 45, 1310))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1311)), "sType_clone", 45, 1312))->mTypeOfExpression;
                                }
                                if(_if_conditional139=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1313)), "sType_clone", 46, 1314))->mOriginalTypeName!=((void*)0),                                _if_conditional139) {
                                    __dec_obj41=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 46, 1315)), "sType_clone", 46, 1316))->mOriginalTypeName;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 46, 1315)), "sType_clone", 46, 1316))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value127=(come_push_stackframe("sType_clone", 46, 1319),__exception_result_var_b79=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1317)), "sType_clone", 46, 1318))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b79))));
                                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional140=self!=((void*)0),                                _if_conditional140) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 47, 1320)), "sType_clone", 47, 1321))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1322)), "sType_clone", 47, 1323))->mOriginalPointerNum;
                                }
                                if(_if_conditional141=self!=((void*)0),                                _if_conditional141) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 48, 1324)), "sType_clone", 48, 1325))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1326)), "sType_clone", 48, 1327))->mFunctionParam;
                                }
                                if(_if_conditional142=self!=((void*)0),                                _if_conditional142) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 49, 1328)), "sType_clone", 49, 1329))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1330)), "sType_clone", 49, 1331))->mAllocaValue;
                                }
                                if(_if_conditional143=self!=((void*)0),                                _if_conditional143) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 50, 1332)), "sType_clone", 50, 1333))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1334)), "sType_clone", 50, 1335))->mGenericsStruct;
                                }
                                if(_if_conditional144=self!=((void*)0),                                _if_conditional144) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 51, 1336)), "sType_clone", 51, 1337))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1338)), "sType_clone", 51, 1339))->mSolvedGenericsName;
                                }
                                if(_if_conditional145=self!=((void*)0),                                _if_conditional145) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 52, 1340)), "sType_clone", 52, 1341))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1342)), "sType_clone", 52, 1343))->mComeMemCore;
                                }
                                if(_if_conditional146=self!=((void*)0),                                _if_conditional146) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 53, 1344)), "sType_clone", 53, 1345))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1346)), "sType_clone", 53, 1347))->mInline;
                                }
                                if(_if_conditional147=self!=((void*)0),                                _if_conditional147) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 54, 1348)), "sType_clone", 54, 1349))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1350)), "sType_clone", 54, 1351))->mNullValue;
                                }
                                if(_if_conditional148=self!=((void*)0),                                _if_conditional148) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 55, 1352)), "sType_clone", 55, 1353))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1354)), "sType_clone", 55, 1355))->mGuardValue;
                                }
                                if(_if_conditional149=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1356)), "sType_clone", 56, 1357))->mAsmName!=((void*)0),                                _if_conditional149) {
                                    __dec_obj42=((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 56, 1358)), "sType_clone", 56, 1359))->mAsmName;
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 56, 1358)), "sType_clone", 56, 1359))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value128=(come_push_stackframe("sType_clone", 56, 1362),__exception_result_var_b80=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1360)), "sType_clone", 56, 1361))->mAsmName), come_pop_stackframe(), __exception_result_var_b80))));
                                    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional150=self!=((void*)0),                                _if_conditional150) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 57, 1363)), "sType_clone", 57, 1364))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1365)), "sType_clone", 57, 1366))->mArrayPointerType;
                                }
                                if(_if_conditional151=self!=((void*)0),                                _if_conditional151) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 58, 1367)), "sType_clone", 58, 1368))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1369)), "sType_clone", 58, 1370))->mLambdaArray;
                                }
                                if(_if_conditional152=self!=((void*)0),                                _if_conditional152) {
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_62, "sType_clone", 59, 1371)), "sType_clone", 59, 1372))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1373)), "sType_clone", 59, 1374))->mNoNumberArray;
                                }
                                __result78__ = __result_obj__ = result_62;
                                come_call_finalizer3(result_62,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result78__;
                                come_call_finalizer3(result_62,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional74;
struct list$1sTypeph* __result58__;
void* right_value91;
void* right_value92;
struct list$1sTypeph* __exception_result_var_b56;
struct list$1sTypeph* result_63;
struct list_item$1sTypeph* it_64;
_Bool _while_condtional12;
struct sType* __exception_result_var_b57;
void* right_value96;
struct list$1sTypeph* __exception_result_var_b58;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sTypeph*));
memset(&it_64, 0, sizeof(struct list_item$1sTypeph*));
right_value96 = (void*)0;
                                        if(_if_conditional74=self==((void*)0),                                        _if_conditional74) {
                                            __result58__ = __result_obj__ = ((void*)0);
                                            return __result58__;
                                        }
                                        result_63=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 870),__exception_result_var_b56=((struct list$1sTypeph*)(right_value92=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value91=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 862)), "./neo-c.h", 139, 863)))))), come_pop_stackframe(), __exception_result_var_b56));
                                        come_call_finalizer3(right_value91,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        it_64=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 871)), "./neo-c.h", 141, 872))->head;
                                        while(_while_condtional12=it_64!=((void*)0),                                        _while_condtional12) {
                                            (come_push_stackframe("./neo-c.h", 143, 922),__exception_result_var_b58=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_63, "./neo-c.h", 143, 873)), "./neo-c.h", 143, 874)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=(come_push_stackframe("./neo-c.h", 143, 921),__exception_result_var_b57=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_64, "./neo-c.h", 143, 919)), "./neo-c.h", 143, 920))->item), come_pop_stackframe(), __exception_result_var_b57))))), come_pop_stackframe(), __exception_result_var_b58);
                                            come_call_finalizer3(right_value96,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_64=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_64, "./neo-c.h", 145, 923)), "./neo-c.h", 145, 924))->next;
                                        }
                                        __result61__ = __result_obj__ = result_63;
                                        come_call_finalizer3(result_63,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result61__;
                                        come_call_finalizer3(result_63,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 864)), "./neo-c.h", 101, 865))->head=((void*)0);
                                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 866)), "./neo-c.h", 102, 867))->tail=((void*)0);
                                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 868)), "./neo-c.h", 103, 869))->len=0;
                                            __result59__ = __result_obj__ = self;
                                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result59__;
                                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional75;
void* right_value93;
struct list_item$1sTypeph* litem_65;
struct sType* __dec_obj18;
_Bool _if_conditional76;
void* right_value94;
struct list_item$1sTypeph* litem_66;
struct sType* __dec_obj19;
void* right_value95;
struct list_item$1sTypeph* litem_67;
struct sType* __dec_obj20;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sTypeph*));
right_value94 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sTypeph*));
right_value95 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sTypeph*));
                                                if(_if_conditional75=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 875)), "./neo-c.h", 152, 876))->len==0,                                                _if_conditional75) {
                                                    litem_65=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value93=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                                    come_call_finalizer3(right_value93,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_65, "./neo-c.h", 155, 877)), "./neo-c.h", 155, 878))->prev=((void*)0);
                                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_65, "./neo-c.h", 156, 879)), "./neo-c.h", 156, 880))->next=((void*)0);
                                                    __dec_obj18=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_65, "./neo-c.h", 157, 881)), "./neo-c.h", 157, 882))->item;
                                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_65, "./neo-c.h", 157, 881)), "./neo-c.h", 157, 882))->item=(struct sType*)come_increment_ref_count(item);
                                                    come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 883)), "./neo-c.h", 159, 884))->tail=litem_65;
                                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 885)), "./neo-c.h", 160, 886))->head=litem_65;
                                                }
                                                else {
                                                    if(_if_conditional76=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 887)), "./neo-c.h", 162, 888))->len==1,                                                    _if_conditional76) {
                                                        litem_66=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value94,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_66, "./neo-c.h", 165, 889)), "./neo-c.h", 165, 890))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 891)), "./neo-c.h", 165, 892))->head;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_66, "./neo-c.h", 166, 893)), "./neo-c.h", 166, 894))->next=((void*)0);
                                                        __dec_obj19=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_66, "./neo-c.h", 167, 895)), "./neo-c.h", 167, 896))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_66, "./neo-c.h", 167, 895)), "./neo-c.h", 167, 896))->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 897)), "./neo-c.h", 169, 898))->tail=litem_66;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 899)), "./neo-c.h", 170, 900))->head, "./neo-c.h", 170, 901)), "./neo-c.h", 170, 902))->next=litem_66;
                                                    }
                                                    else {
                                                        litem_67=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value95=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value95,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_67, "./neo-c.h", 175, 903)), "./neo-c.h", 175, 904))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 905)), "./neo-c.h", 175, 906))->tail;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_67, "./neo-c.h", 176, 907)), "./neo-c.h", 176, 908))->next=((void*)0);
                                                        __dec_obj20=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_67, "./neo-c.h", 177, 909)), "./neo-c.h", 177, 910))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_67, "./neo-c.h", 177, 909)), "./neo-c.h", 177, 910))->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 911)), "./neo-c.h", 179, 912))->tail, "./neo-c.h", 179, 913)), "./neo-c.h", 179, 914))->next=litem_67;
                                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 915)), "./neo-c.h", 180, 916))->tail=litem_67;
                                                    }
                                                }
                                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 917)), "./neo-c.h", 183, 918))->len++;
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
                                        it_68=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 926)), "./neo-c.h", 120, 927))->head;
                                        while(_while_condtional13=it_68!=((void*)0),                                        _while_condtional13) {
                                            prev_it_69=it_68;
                                            it_68=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_68, "./neo-c.h", 123, 928)), "./neo-c.h", 123, 929))->next;
                                            come_call_finalizer3(prev_it_69,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional79;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional79=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 936)), "tuple1$1sTypeph_finalize", 0, 937))->v1!=((void*)0),                                            _if_conditional79) {
                                                come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 938)), "tuple1$1sTypeph_finalize", 0, 939))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional87;
struct list$1sNodeph* __result66__;
void* right_value106;
void* right_value107;
struct list$1sNodeph* __exception_result_var_b66;
struct list$1sNodeph* result_72;
struct list_item$1sNodeph* it_73;
_Bool _while_condtional14;
struct sNode* __exception_result_var_b67;
void* right_value112;
struct list$1sNodeph* __exception_result_var_b68;
struct list$1sNodeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_72, 0, sizeof(struct list$1sNodeph*));
memset(&it_73, 0, sizeof(struct list_item$1sNodeph*));
right_value112 = (void*)0;
                                        if(_if_conditional87=self==((void*)0),                                        _if_conditional87) {
                                            __result66__ = __result_obj__ = ((void*)0);
                                            return __result66__;
                                        }
                                        result_72=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 990),__exception_result_var_b66=((struct list$1sNodeph*)(right_value107=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value106=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 982)), "./neo-c.h", 139, 983)))))), come_pop_stackframe(), __exception_result_var_b66));
                                        come_call_finalizer3(right_value106,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value107,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        it_73=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 991)), "./neo-c.h", 141, 992))->head;
                                        while(_while_condtional14=it_73!=((void*)0),                                        _while_condtional14) {
                                            (come_push_stackframe("./neo-c.h", 143, 1076),__exception_result_var_b68=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_72, "./neo-c.h", 143, 993)), "./neo-c.h", 143, 994)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=(come_push_stackframe("./neo-c.h", 143, 1075),__exception_result_var_b67=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_73, "./neo-c.h", 143, 1039)), "./neo-c.h", 143, 1040))->item), come_pop_stackframe(), __exception_result_var_b67))))), come_pop_stackframe(), __exception_result_var_b68);
                                            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            it_73=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_73, "./neo-c.h", 145, 1077)), "./neo-c.h", 145, 1078))->next;
                                        }
                                        __result71__ = __result_obj__ = result_72;
                                        come_call_finalizer3(result_72,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result71__;
                                        come_call_finalizer3(result_72,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
                                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 984)), "./neo-c.h", 101, 985))->head=((void*)0);
                                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 986)), "./neo-c.h", 102, 987))->tail=((void*)0);
                                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 988)), "./neo-c.h", 103, 989))->len=0;
                                            __result67__ = __result_obj__ = self;
                                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result67__;
                                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional88;
void* right_value108;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj28;
_Bool _if_conditional89;
void* right_value109;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj29;
void* right_value110;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj30;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sNodeph*));
right_value109 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
right_value110 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
                                                if(_if_conditional88=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 995)), "./neo-c.h", 152, 996))->len==0,                                                _if_conditional88) {
                                                    litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value108=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                                    come_call_finalizer3(right_value108,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_74, "./neo-c.h", 155, 997)), "./neo-c.h", 155, 998))->prev=((void*)0);
                                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_74, "./neo-c.h", 156, 999)), "./neo-c.h", 156, 1000))->next=((void*)0);
                                                    __dec_obj28=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_74, "./neo-c.h", 157, 1001)), "./neo-c.h", 157, 1002))->item;
                                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_74, "./neo-c.h", 157, 1001)), "./neo-c.h", 157, 1002))->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 1003)), "./neo-c.h", 159, 1004))->tail=litem_74;
                                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 1005)), "./neo-c.h", 160, 1006))->head=litem_74;
                                                }
                                                else {
                                                    if(_if_conditional89=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 1007)), "./neo-c.h", 162, 1008))->len==1,                                                    _if_conditional89) {
                                                        litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value109=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value109,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_75, "./neo-c.h", 165, 1009)), "./neo-c.h", 165, 1010))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 1011)), "./neo-c.h", 165, 1012))->head;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_75, "./neo-c.h", 166, 1013)), "./neo-c.h", 166, 1014))->next=((void*)0);
                                                        __dec_obj29=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_75, "./neo-c.h", 167, 1015)), "./neo-c.h", 167, 1016))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_75, "./neo-c.h", 167, 1015)), "./neo-c.h", 167, 1016))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 1017)), "./neo-c.h", 169, 1018))->tail=litem_75;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 1019)), "./neo-c.h", 170, 1020))->head, "./neo-c.h", 170, 1021)), "./neo-c.h", 170, 1022))->next=litem_75;
                                                    }
                                                    else {
                                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value110=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value110,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_76, "./neo-c.h", 175, 1023)), "./neo-c.h", 175, 1024))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 1025)), "./neo-c.h", 175, 1026))->tail;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_76, "./neo-c.h", 176, 1027)), "./neo-c.h", 176, 1028))->next=((void*)0);
                                                        __dec_obj30=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_76, "./neo-c.h", 177, 1029)), "./neo-c.h", 177, 1030))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_76, "./neo-c.h", 177, 1029)), "./neo-c.h", 177, 1030))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 1031)), "./neo-c.h", 179, 1032))->tail, "./neo-c.h", 179, 1033)), "./neo-c.h", 179, 1034))->next=litem_76;
                                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 1035)), "./neo-c.h", 180, 1036))->tail=litem_76;
                                                    }
                                                }
                                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 1037)), "./neo-c.h", 183, 1038))->len++;
                                                __result68__ = __result_obj__ = self;
                                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result68__;
                                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional90;
struct sNode* __result69__;
void* right_value111;
struct sNode* result_77;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
memset(&result_77, 0, sizeof(struct sNode*));
                                                if(_if_conditional90=self==(void*)0,                                                _if_conditional90) {
                                                    __result69__ = __result_obj__ = (void*)0;
                                                    return __result69__;
                                                }
                                                result_77=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(_if_conditional91=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1041)), "sNode_clone", 4, 1042))->clone!=((void*)0),                                                _if_conditional91) {
                                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_77, "sNode_clone", 4, 1043)), "sNode_clone", 4, 1044))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1045)), "sNode_clone", 4, 1046))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1045)), "sNode_clone", 4, 1046))->_protocol_obj);
                                                }
                                                if(_if_conditional92=self!=((void*)0),                                                _if_conditional92) {
                                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_77, "sNode_clone", 5, 1047)), "sNode_clone", 5, 1048))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 1049)), "sNode_clone", 5, 1050))->finalize;
                                                }
                                                if(_if_conditional93=self!=((void*)0),                                                _if_conditional93) {
                                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_77, "sNode_clone", 6, 1051)), "sNode_clone", 6, 1052))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 1053)), "sNode_clone", 6, 1054))->clone;
                                                }
                                                if(_if_conditional94=self!=((void*)0),                                                _if_conditional94) {
                                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_77, "sNode_clone", 7, 1055)), "sNode_clone", 7, 1056))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 1057)), "sNode_clone", 7, 1058))->compile;
                                                }
                                                if(_if_conditional95=self!=((void*)0),                                                _if_conditional95) {
                                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_77, "sNode_clone", 8, 1059)), "sNode_clone", 8, 1060))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 1061)), "sNode_clone", 8, 1062))->sline;
                                                }
                                                if(_if_conditional96=self!=((void*)0),                                                _if_conditional96) {
                                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_77, "sNode_clone", 9, 1063)), "sNode_clone", 9, 1064))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 1065)), "sNode_clone", 9, 1066))->sname;
                                                }
                                                if(_if_conditional97=self!=((void*)0),                                                _if_conditional97) {
                                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_77, "sNode_clone", 10, 1067)), "sNode_clone", 10, 1068))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 1069)), "sNode_clone", 10, 1070))->terminated;
                                                }
                                                if(_if_conditional98=self!=((void*)0),                                                _if_conditional98) {
                                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_77, "sNode_clone", 11, 1071)), "sNode_clone", 11, 1072))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 1073)), "sNode_clone", 11, 1074))->kind;
                                                }
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
                                        it_78=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 1080)), "./neo-c.h", 120, 1081))->head;
                                        while(_while_condtional15=it_78!=((void*)0),                                        _while_condtional15) {
                                            prev_it_79=it_78;
                                            it_78=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_78, "./neo-c.h", 123, 1082)), "./neo-c.h", 123, 1083))->next;
                                            come_call_finalizer3(prev_it_79,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional102;
struct list$1charph* __result72__;
void* right_value115;
void* right_value116;
struct list$1charph* __exception_result_var_b71;
struct list$1charph* result_80;
struct list_item$1charph* it_81;
_Bool _while_condtional16;
char* __exception_result_var_b72;
void* right_value120;
struct list$1charph* __exception_result_var_b73;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&result_80, 0, sizeof(struct list$1charph*));
memset(&it_81, 0, sizeof(struct list_item$1charph*));
right_value120 = (void*)0;
                                        if(_if_conditional102=self==((void*)0),                                        _if_conditional102) {
                                            __result72__ = __result_obj__ = ((void*)0);
                                            return __result72__;
                                        }
                                        result_80=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1109),__exception_result_var_b71=((struct list$1charph*)(right_value116=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value115=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 1101)), "./neo-c.h", 139, 1102)))))), come_pop_stackframe(), __exception_result_var_b71));
                                        come_call_finalizer3(right_value115,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value116,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        it_81=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 1110)), "./neo-c.h", 141, 1111))->head;
                                        while(_while_condtional16=it_81!=((void*)0),                                        _while_condtional16) {
                                            (come_push_stackframe("./neo-c.h", 143, 1161),__exception_result_var_b73=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_80, "./neo-c.h", 143, 1112)), "./neo-c.h", 143, 1113)),(char*)come_increment_ref_count(((char*)(right_value120=(come_push_stackframe("./neo-c.h", 143, 1160),__exception_result_var_b72=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_81, "./neo-c.h", 143, 1158)), "./neo-c.h", 143, 1159))->item), come_pop_stackframe(), __exception_result_var_b72))))), come_pop_stackframe(), __exception_result_var_b73);
                                            right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            it_81=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_81, "./neo-c.h", 145, 1162)), "./neo-c.h", 145, 1163))->next;
                                        }
                                        __result75__ = __result_obj__ = result_80;
                                        come_call_finalizer3(result_80,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result75__;
                                        come_call_finalizer3(result_80,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1103)), "./neo-c.h", 101, 1104))->head=((void*)0);
                                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1105)), "./neo-c.h", 102, 1106))->tail=((void*)0);
                                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1107)), "./neo-c.h", 103, 1108))->len=0;
                                            __result73__ = __result_obj__ = self;
                                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result73__;
                                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional103;
void* right_value117;
struct list_item$1charph* litem_82;
char* __dec_obj33;
_Bool _if_conditional104;
void* right_value118;
struct list_item$1charph* litem_83;
char* __dec_obj34;
void* right_value119;
struct list_item$1charph* litem_84;
char* __dec_obj35;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
right_value118 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1charph*));
right_value119 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1charph*));
                                                if(_if_conditional103=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 1114)), "./neo-c.h", 152, 1115))->len==0,                                                _if_conditional103) {
                                                    litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value117=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                                    come_call_finalizer3(right_value117,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_82, "./neo-c.h", 155, 1116)), "./neo-c.h", 155, 1117))->prev=((void*)0);
                                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_82, "./neo-c.h", 156, 1118)), "./neo-c.h", 156, 1119))->next=((void*)0);
                                                    __dec_obj33=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_82, "./neo-c.h", 157, 1120)), "./neo-c.h", 157, 1121))->item;
                                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_82, "./neo-c.h", 157, 1120)), "./neo-c.h", 157, 1121))->item=(char*)come_increment_ref_count(item);
                                                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 1122)), "./neo-c.h", 159, 1123))->tail=litem_82;
                                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 1124)), "./neo-c.h", 160, 1125))->head=litem_82;
                                                }
                                                else {
                                                    if(_if_conditional104=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 1126)), "./neo-c.h", 162, 1127))->len==1,                                                    _if_conditional104) {
                                                        litem_83=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value118=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value118,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_83, "./neo-c.h", 165, 1128)), "./neo-c.h", 165, 1129))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 1130)), "./neo-c.h", 165, 1131))->head;
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_83, "./neo-c.h", 166, 1132)), "./neo-c.h", 166, 1133))->next=((void*)0);
                                                        __dec_obj34=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_83, "./neo-c.h", 167, 1134)), "./neo-c.h", 167, 1135))->item;
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_83, "./neo-c.h", 167, 1134)), "./neo-c.h", 167, 1135))->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 1136)), "./neo-c.h", 169, 1137))->tail=litem_83;
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 1138)), "./neo-c.h", 170, 1139))->head, "./neo-c.h", 170, 1140)), "./neo-c.h", 170, 1141))->next=litem_83;
                                                    }
                                                    else {
                                                        litem_84=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value119=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value119,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_84, "./neo-c.h", 175, 1142)), "./neo-c.h", 175, 1143))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 1144)), "./neo-c.h", 175, 1145))->tail;
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_84, "./neo-c.h", 176, 1146)), "./neo-c.h", 176, 1147))->next=((void*)0);
                                                        __dec_obj35=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_84, "./neo-c.h", 177, 1148)), "./neo-c.h", 177, 1149))->item;
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_84, "./neo-c.h", 177, 1148)), "./neo-c.h", 177, 1149))->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 1150)), "./neo-c.h", 179, 1151))->tail, "./neo-c.h", 179, 1152)), "./neo-c.h", 179, 1153))->next=litem_84;
                                                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 1154)), "./neo-c.h", 180, 1155))->tail=litem_84;
                                                    }
                                                }
                                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 1156)), "./neo-c.h", 183, 1157))->len++;
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
                                        it_85=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1165)), "./neo-c.h", 120, 1166))->head;
                                        while(_while_condtional17=it_85!=((void*)0),                                        _while_condtional17) {
                                            prev_it_86=it_85;
                                            it_85=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_85, "./neo-c.h", 123, 1167)), "./neo-c.h", 123, 1168))->next;
                                            come_call_finalizer3(prev_it_86,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional106;
struct tuple1$1sTypeph* __result76__;
void* right_value122;
struct tuple1$1sTypeph* result_87;
_Bool _if_conditional107;
struct sType* __exception_result_var_b75;
void* right_value123;
struct sType* __dec_obj37;
struct tuple1$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&result_87, 0, sizeof(struct tuple1$1sTypeph*));
right_value123 = (void*)0;
                                        if(_if_conditional106=self==(void*)0,                                        _if_conditional106) {
                                            __result76__ = __result_obj__ = (void*)0;
                                            return __result76__;
                                        }
                                        result_87=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value122=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                        come_call_finalizer3(right_value122,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional107=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1175)), "tuple1$1sTypephp_clone", 4, 1176))->v1!=((void*)0),                                        _if_conditional107) {
                                            __dec_obj37=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_87, "tuple1$1sTypephp_clone", 4, 1177)), "tuple1$1sTypephp_clone", 4, 1178))->v1;
                                            ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_87, "tuple1$1sTypephp_clone", 4, 1177)), "tuple1$1sTypephp_clone", 4, 1178))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 1181),__exception_result_var_b75=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1179)), "tuple1$1sTypephp_clone", 4, 1180))->v1), come_pop_stackframe(), __exception_result_var_b75))));
                                            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value123,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
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
                it_88=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 1381)), "./neo-c.h", 120, 1382))->head;
                while(_while_condtional18=it_88!=((void*)0),                _while_condtional18) {
                    prev_it_89=it_88;
                    it_88=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_88, "./neo-c.h", 123, 1383)), "./neo-c.h", 123, 1384))->next;
                    come_call_finalizer3(prev_it_89,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional161;
struct tuple2$2charphsTypeph* result_94;
void* __exception_result_var_b93;
struct tuple2$2charphsTypeph* __result84__;
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* __result85__;
struct tuple2$2charphsTypeph* result_95;
void* __exception_result_var_b94;
struct tuple2$2charphsTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_94, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_95, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional161=self==((void*)0),        _if_conditional161) {
            (come_push_stackframe("./neo-c.h", 284, 1445),__exception_result_var_b93=memset(&result_94,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b93);
            __result84__ = __result_obj__ = result_94;
            return __result84__;
        }
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 1446)), "./neo-c.h", 287, 1447))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 1448)), "./neo-c.h", 287, 1449))->head;
        if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 289, 1450)), "./neo-c.h", 289, 1451))->it) {
            __result85__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 290, 1452)), "./neo-c.h", 290, 1453))->it, "./neo-c.h", 290, 1454)), "./neo-c.h", 290, 1455))->item;
            return __result85__;
        }
        (come_push_stackframe("./neo-c.h", 294, 1456),__exception_result_var_b94=memset(&result_95,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b94);
        __result86__ = __result_obj__ = result_95;
        return __result86__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
        __result87__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 317, 1460)), "./neo-c.h", 317, 1461))->it==((void*)0);
        return __result87__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional163;
struct tuple2$2charphsTypeph* result_97;
void* __exception_result_var_b97;
struct tuple2$2charphsTypeph* __result88__;
_Bool _if_conditional164;
struct tuple2$2charphsTypeph* __result89__;
struct tuple2$2charphsTypeph* result_98;
void* __exception_result_var_b98;
struct tuple2$2charphsTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_98, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional163=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 299, 1465)), "./neo-c.h", 299, 1466))->it==((void*)0),        _if_conditional163) {
            (come_push_stackframe("./neo-c.h", 301, 1467),__exception_result_var_b97=memset(&result_97,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b97);
            __result88__ = __result_obj__ = result_97;
            return __result88__;
        }
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 1468)), "./neo-c.h", 305, 1469))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 1470)), "./neo-c.h", 305, 1471))->it, "./neo-c.h", 305, 1472)), "./neo-c.h", 305, 1473))->next;
        if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 307, 1474)), "./neo-c.h", 307, 1475))->it) {
            __result89__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 308, 1476)), "./neo-c.h", 308, 1477))->it, "./neo-c.h", 308, 1478)), "./neo-c.h", 308, 1479))->item;
            return __result89__;
        }
        (come_push_stackframe("./neo-c.h", 312, 1480),__exception_result_var_b98=memset(&result_98,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b98);
        __result90__ = __result_obj__ = result_98;
        return __result90__;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional166;
unsigned int __exception_result_var_b120;
unsigned int hash_118;
unsigned int it_119;
_Bool _while_condtional21;
_Bool _if_conditional178;
_Bool __exception_result_var_b121;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct list$1charp* __exception_result_var_b125;
struct list$1charp* __exception_result_var_b126;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
int __exception_result_var_b127;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool same_key_exist_136;
char* __exception_result_var_b130;
char* it2_139;
_Bool __exception_result_var_b131;
char* __exception_result_var_b134;
_Bool __exception_result_var_b135;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct list$1charp* __exception_result_var_b136;
struct map$2charphsClassph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_118, 0, sizeof(unsigned int));
memset(&it_119, 0, sizeof(unsigned int));
memset(&same_key_exist_136, 0, sizeof(_Bool));
memset(&it2_139, 0, sizeof(char*));
            if(_if_conditional166=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1505)), "./neo-c.h", 1371, 1506))->len*10>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1507)), "./neo-c.h", 1371, 1508))->size,            _if_conditional166) {
                (come_push_stackframe("./neo-c.h", 1372,1628),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1372, 1509)), "./neo-c.h", 1372, 1510))),come_pop_stackframe());
            }
            hash_118=(come_push_stackframe("./neo-c.h", 1374, 1631),__exception_result_var_b120=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1629)), "./neo-c.h", 1374, 1630))), come_pop_stackframe(), __exception_result_var_b120)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1374, 1632)), "./neo-c.h", 1374, 1633))->size;
            it_119=hash_118;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional178=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1378, 1634)), "./neo-c.h", 1378, 1635))->item_existance, "./neo-c.h", 1378, 1636))[it_119],                _if_conditional178) {
                    if(_if_conditional179=(come_push_stackframe("./neo-c.h", 1380, 1642),__exception_result_var_b121=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1380, 1637)), "./neo-c.h", 1380, 1638))->keys, "./neo-c.h", 1380, 1639))[it_119], "./neo-c.h", 1380, 1640)), "./neo-c.h", 1380, 1641)),key), come_pop_stackframe(), __exception_result_var_b121),                    _if_conditional179) {
                        if(_if_conditional180=1,                        _if_conditional180) {
                            (come_push_stackframe("./neo-c.h", 1383, 1731),__exception_result_var_b125=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1643)), "./neo-c.h", 1383, 1644))->key_list, "./neo-c.h", 1383, 1645)), "./neo-c.h", 1383, 1646)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1728)), "./neo-c.h", 1383, 1729))->keys, "./neo-c.h", 1383, 1730))[it_119]), come_pop_stackframe(), __exception_result_var_b125);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1732)), "./neo-c.h", 1384, 1733))->keys, "./neo-c.h", 1384, 1734))[it_119] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1732)), "./neo-c.h", 1384, 1733))->keys, "./neo-c.h", 1384, 1734))[it_119], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1385, 1735)), "./neo-c.h", 1385, 1736))->keys, "./neo-c.h", 1385, 1737))[it_119]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            (come_push_stackframe("./neo-c.h", 1388, 1745),__exception_result_var_b126=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1738)), "./neo-c.h", 1388, 1739))->key_list, "./neo-c.h", 1388, 1740)), "./neo-c.h", 1388, 1741)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1742)), "./neo-c.h", 1388, 1743))->keys, "./neo-c.h", 1388, 1744))[it_119]), come_pop_stackframe(), __exception_result_var_b126);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1389, 1746)), "./neo-c.h", 1389, 1747))->keys, "./neo-c.h", 1389, 1748))[it_119]=key;
                        }
                        if(_if_conditional200=1,                        _if_conditional200) {
                            come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1392, 1749)), "./neo-c.h", 1392, 1750))->items, "./neo-c.h", 1392, 1751))[it_119],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1393, 1752)), "./neo-c.h", 1393, 1753))->items, "./neo-c.h", 1393, 1754))[it_119]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1396, 1755)), "./neo-c.h", 1396, 1756))->items, "./neo-c.h", 1396, 1757))[it_119]=item;
                        }
                        break;
                    }
                    it_119++;
                    if(_if_conditional201=it_119>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1403, 1758)), "./neo-c.h", 1403, 1759))->size,                    _if_conditional201) {
                        it_119=0;
                    }
                    else {
                        if(_if_conditional202=it_119==hash_118,                        _if_conditional202) {
                            (come_push_stackframe("./neo-c.h", 1407, 1760),__exception_result_var_b127=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b127);
                            (come_push_stackframe("./neo-c.h", 1408,1761),stackframe(),come_pop_stackframe());
                            (come_push_stackframe("./neo-c.h", 1409,1762),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    ((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1413, 1763)), "./neo-c.h", 1413, 1764))->item_existance, "./neo-c.h", 1413, 1765))[it_119]=(_Bool)1;
                    if(_if_conditional203=1,                    _if_conditional203) {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1415, 1766)), "./neo-c.h", 1415, 1767))->keys, "./neo-c.h", 1415, 1768))[it_119]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1418, 1769)), "./neo-c.h", 1418, 1770))->keys, "./neo-c.h", 1418, 1771))[it_119]=key;
                    }
                    if(_if_conditional204=1,                    _if_conditional204) {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1421, 1772)), "./neo-c.h", 1421, 1773))->items, "./neo-c.h", 1421, 1774))[it_119]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1424, 1775)), "./neo-c.h", 1424, 1776))->items, "./neo-c.h", 1424, 1777))[it_119]=item;
                    }
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1427, 1778)), "./neo-c.h", 1427, 1779))->len++;
                    break;
                }
            }
            same_key_exist_136=(_Bool)0;
            for(            it2_139=(come_push_stackframe("./neo-c.h", 1434, 1796),__exception_result_var_b130=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1780)), "./neo-c.h", 1434, 1781))->key_list, "./neo-c.h", 1434, 1782)), "./neo-c.h", 1434, 1783))), come_pop_stackframe(), __exception_result_var_b130);            !(come_push_stackframe("./neo-c.h", 1434, 1803),__exception_result_var_b131=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1797)), "./neo-c.h", 1434, 1798))->key_list, "./neo-c.h", 1434, 1799)), "./neo-c.h", 1434, 1800))), come_pop_stackframe(), __exception_result_var_b131);            it2_139=(come_push_stackframe("./neo-c.h", 1434, 1824),__exception_result_var_b134=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1804)), "./neo-c.h", 1434, 1805))->key_list, "./neo-c.h", 1434, 1806)), "./neo-c.h", 1434, 1807))), come_pop_stackframe(), __exception_result_var_b134)            ){
                if(_if_conditional209=(come_push_stackframe("./neo-c.h", 1436, 1827),__exception_result_var_b135=string_equals(((char*)come_null_check(((char*)come_null_check(it2_139, "./neo-c.h", 1436, 1825)), "./neo-c.h", 1436, 1826)),key), come_pop_stackframe(), __exception_result_var_b135),                _if_conditional209) {
                    same_key_exist_136=(_Bool)1;
                }
            }
            if(_if_conditional210=!same_key_exist_136,            _if_conditional210) {
                (come_push_stackframe("./neo-c.h", 1442, 1876),__exception_result_var_b136=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1442, 1828)), "./neo-c.h", 1442, 1829))->key_list, "./neo-c.h", 1442, 1830)), "./neo-c.h", 1442, 1831)),key), come_pop_stackframe(), __exception_result_var_b136);
            }
            __result114__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result114__;
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
char* __exception_result_var_b108;
char* it_108;
_Bool __exception_result_var_b109;
char* __exception_result_var_b112;
struct sClass* default_value_111;
void* __exception_result_var_b113;
struct sClass* __exception_result_var_b116;
struct sClass* it2_112;
unsigned int __exception_result_var_b117;
unsigned int hash_115;
int n_116;
_Bool _while_condtional20;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
int __exception_result_var_b118;
struct sClass* default_value_117;
struct sClass* __exception_result_var_b119;
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
memset(&it2_112, 0, sizeof(struct sClass*));
memset(&hash_115, 0, sizeof(unsigned int));
memset(&n_116, 0, sizeof(int));
memset(&default_value_117, 0, sizeof(struct sClass*));
                    size_101=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1318, 1511)), "./neo-c.h", 1318, 1512))->size*10;
                    keys_102=(char**)come_increment_ref_count(((char**)(right_value142=(char**)come_calloc(1, sizeof(char*)*(1*(size_101)), "./neo-c.h", 1319, "char*%"))));
                    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_103=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value143=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_101)), "./neo-c.h", 1320, "sClass*%"))));
                    come_call_finalizer3(right_value143,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_104=(_Bool*)come_increment_ref_count(((_Bool*)(right_value144=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_101)), "./neo-c.h", 1321, "bool"))));
                    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_105=0;
                    for(                    it_108=(come_push_stackframe("./neo-c.h", 1325, 1535),__exception_result_var_b108=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1513)), "./neo-c.h", 1325, 1514))), come_pop_stackframe(), __exception_result_var_b108);                    !(come_push_stackframe("./neo-c.h", 1325, 1544),__exception_result_var_b109=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1536)), "./neo-c.h", 1325, 1537))), come_pop_stackframe(), __exception_result_var_b109);                    it_108=(come_push_stackframe("./neo-c.h", 1325, 1573),__exception_result_var_b112=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1545)), "./neo-c.h", 1325, 1546))), come_pop_stackframe(), __exception_result_var_b112)                    ){
                        (come_push_stackframe("./neo-c.h", 1327, 1574),__exception_result_var_b113=memset(&default_value_111,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b113);
                        it2_112=(come_push_stackframe("./neo-c.h", 1328, 1596),__exception_result_var_b116=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1328, 1575)), "./neo-c.h", 1328, 1576)),it_108,default_value_111), come_pop_stackframe(), __exception_result_var_b116);
                        hash_115=(come_push_stackframe("./neo-c.h", 1329, 1599),__exception_result_var_b117=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_108, "./neo-c.h", 1329, 1597)), "./neo-c.h", 1329, 1598))), come_pop_stackframe(), __exception_result_var_b117)%size_101;
                        n_116=hash_115;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional175=((_Bool*)come_null_check(item_existance_104, "./neo-c.h", 1333, 1600))[n_116],                            _if_conditional175) {
                                n_116++;
                                if(_if_conditional176=n_116>=size_101,                                _if_conditional176) {
                                    n_116=0;
                                }
                                else {
                                    if(_if_conditional177=n_116==hash_115,                                    _if_conditional177) {
                                        (come_push_stackframe("./neo-c.h", 1341, 1601),__exception_result_var_b118=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b118);
                                        (come_push_stackframe("./neo-c.h", 1342,1602),stackframe(),come_pop_stackframe());
                                        (come_push_stackframe("./neo-c.h", 1343,1603),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                ((_Bool*)come_null_check(item_existance_104, "./neo-c.h", 1347, 1604))[n_116]=(_Bool)1;
                                ((char**)come_null_check(keys_102, "./neo-c.h", 1348, 1605))[n_116]=it_108;
                                ((struct sClass**)come_null_check(items_103, "./neo-c.h", 1350, 1606))[n_116]=(come_push_stackframe("./neo-c.h", 1350, 1609),__exception_result_var_b119=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1350, 1607)), "./neo-c.h", 1350, 1608)),it_108,default_value_117), come_pop_stackframe(), __exception_result_var_b119);
                                len_105++;
                                break;
                            }
                        }
                    }
                    (come_push_stackframe("./neo-c.h", 1358,1612),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1358, 1610)), "./neo-c.h", 1358, 1611))->items),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1613)), "./neo-c.h", 1359, 1614))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1613)), "./neo-c.h", 1359, 1614))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (come_push_stackframe("./neo-c.h", 1360,1617),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1360, 1615)), "./neo-c.h", 1360, 1616))->keys),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1362, 1618)), "./neo-c.h", 1362, 1619))->keys=keys_102;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1363, 1620)), "./neo-c.h", 1363, 1621))->items=items_103;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1364, 1622)), "./neo-c.h", 1364, 1623))->item_existance=item_existance_104;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1366, 1624)), "./neo-c.h", 1366, 1625))->size=size_101;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1367, 1626)), "./neo-c.h", 1367, 1627))->len=len_105;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional167;
char* result_106;
void* __exception_result_var_b106;
char* __result91__;
_Bool _if_conditional168;
char* __result92__;
char* result_107;
void* __exception_result_var_b107;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_106, 0, sizeof(char*));
memset(&result_107, 0, sizeof(char*));
                        if(_if_conditional167=self==((void*)0),                        _if_conditional167) {
                            (come_push_stackframe("./neo-c.h", 1282, 1515),__exception_result_var_b106=memset(&result_106,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b106);
                            __result91__ = __result_obj__ = result_106;
                            return __result91__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1516)), "./neo-c.h", 1285, 1517))->key_list, "./neo-c.h", 1285, 1518)), "./neo-c.h", 1285, 1519))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1520)), "./neo-c.h", 1285, 1521))->key_list, "./neo-c.h", 1285, 1522)), "./neo-c.h", 1285, 1523))->head;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1287, 1524)), "./neo-c.h", 1287, 1525))->key_list, "./neo-c.h", 1287, 1526)), "./neo-c.h", 1287, 1527))->it) {
                            __result92__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1288, 1528)), "./neo-c.h", 1288, 1529))->key_list, "./neo-c.h", 1288, 1530)), "./neo-c.h", 1288, 1531))->it, "./neo-c.h", 1288, 1532)), "./neo-c.h", 1288, 1533))->item;
                            return __result92__;
                        }
                        (come_push_stackframe("./neo-c.h", 1292, 1534),__exception_result_var_b107=memset(&result_107,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b107);
                        __result93__ = __result_obj__ = result_107;
                        return __result93__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result94__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1538)), "./neo-c.h", 1314, 1539))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1540)), "./neo-c.h", 1314, 1541))->key_list, "./neo-c.h", 1314, 1542)), "./neo-c.h", 1314, 1543))->it==((void*)0);
                        return __result94__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional169;
char* result_109;
void* __exception_result_var_b110;
char* __result95__;
_Bool _if_conditional170;
char* __result96__;
char* result_110;
void* __exception_result_var_b111;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_109, 0, sizeof(char*));
memset(&result_110, 0, sizeof(char*));
                        if(_if_conditional169=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1297, 1547)), "./neo-c.h", 1297, 1548))->key_list, "./neo-c.h", 1297, 1549)), "./neo-c.h", 1297, 1550))->it==((void*)0),                        _if_conditional169) {
                            (come_push_stackframe("./neo-c.h", 1299, 1551),__exception_result_var_b110=memset(&result_109,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b110);
                            __result95__ = __result_obj__ = result_109;
                            return __result95__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1552)), "./neo-c.h", 1302, 1553))->key_list, "./neo-c.h", 1302, 1554)), "./neo-c.h", 1302, 1555))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1556)), "./neo-c.h", 1302, 1557))->key_list, "./neo-c.h", 1302, 1558)), "./neo-c.h", 1302, 1559))->it, "./neo-c.h", 1302, 1560)), "./neo-c.h", 1302, 1561))->next;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1304, 1562)), "./neo-c.h", 1304, 1563))->key_list, "./neo-c.h", 1304, 1564)), "./neo-c.h", 1304, 1565))->it) {
                            __result96__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1305, 1566)), "./neo-c.h", 1305, 1567))->key_list, "./neo-c.h", 1305, 1568)), "./neo-c.h", 1305, 1569))->it, "./neo-c.h", 1305, 1570)), "./neo-c.h", 1305, 1571))->item;
                            return __result96__;
                        }
                        (come_push_stackframe("./neo-c.h", 1309, 1572),__exception_result_var_b111=memset(&result_110,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b111);
                        __result97__ = __result_obj__ = result_110;
                        return __result97__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b114;
unsigned int hash_113;
unsigned int it_114;
_Bool _while_condtional19;
_Bool _if_conditional171;
_Bool __exception_result_var_b115;
_Bool _if_conditional172;
struct sClass* __result98__;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct sClass* __result99__;
struct sClass* __result100__;
struct sClass* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_113, 0, sizeof(unsigned int));
memset(&it_114, 0, sizeof(unsigned int));
                            hash_113=(come_push_stackframe("./neo-c.h", 1207, 1579),__exception_result_var_b114=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1577)), "./neo-c.h", 1207, 1578))), come_pop_stackframe(), __exception_result_var_b114)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1207, 1580)), "./neo-c.h", 1207, 1581))->size;
                            it_114=hash_113;
                            while(_while_condtional19=(_Bool)1,                            _while_condtional19) {
                                if(_if_conditional171=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1211, 1582)), "./neo-c.h", 1211, 1583))->item_existance, "./neo-c.h", 1211, 1584))[it_114],                                _if_conditional171) {
                                    if(_if_conditional172=(come_push_stackframe("./neo-c.h", 1213, 1590),__exception_result_var_b115=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1213, 1585)), "./neo-c.h", 1213, 1586))->keys, "./neo-c.h", 1213, 1587))[it_114], "./neo-c.h", 1213, 1588)), "./neo-c.h", 1213, 1589)),key), come_pop_stackframe(), __exception_result_var_b115),                                    _if_conditional172) {
                                        __result98__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1215, 1591)), "./neo-c.h", 1215, 1592))->items, "./neo-c.h", 1215, 1593))[it_114];
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result98__;
                                    }
                                    it_114++;
                                    if(_if_conditional173=it_114>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1220, 1594)), "./neo-c.h", 1220, 1595))->size,                                    _if_conditional173) {
                                        it_114=0;
                                    }
                                    else {
                                        if(_if_conditional174=it_114==hash_113,                                        _if_conditional174) {
                                            __result99__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result99__;
                                        }
                                    }
                                }
                                else {
                                    __result100__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result100__;
                                }
                            }
                            __result101__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result101__;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_120;
struct list_item$1charp* it_121;
_Bool _while_condtional22;
_Bool __exception_result_var_b122;
_Bool _if_conditional181;
struct list$1charp* __exception_result_var_b124;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_120, 0, sizeof(int));
memset(&it_121, 0, sizeof(struct list_item$1charp*));
                                it2_120=0;
                                it_121=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 1647)), "./neo-c.h", 442, 1648))->head;
                                while(_while_condtional22=it_121!=((void*)0),                                _while_condtional22) {
                                    if(_if_conditional181=(come_push_stackframe("./neo-c.h", 444, 1653),__exception_result_var_b122=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_121, "./neo-c.h", 444, 1649)), "./neo-c.h", 444, 1650))->item, "./neo-c.h", 444, 1651)), "./neo-c.h", 444, 1652)),item), come_pop_stackframe(), __exception_result_var_b122),                                    _if_conditional181) {
                                        (come_push_stackframe("./neo-c.h", 445, 1725),__exception_result_var_b124=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 1654)), "./neo-c.h", 445, 1655)),it2_120,it2_120+1), come_pop_stackframe(), __exception_result_var_b124);
                                        break;
                                    }
                                    it2_120++;
                                    it_121=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_121, "./neo-c.h", 450, 1726)), "./neo-c.h", 450, 1727))->next;
                                }
                                __result105__ = __result_obj__ = self;
                                return __result105__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
int tmp_122;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
struct list$1charp* __result102__;
_Bool _if_conditional188;
struct list$1charp* __exception_result_var_b123;
_Bool _if_conditional189;
struct list_item$1charp* it_125;
int i_126;
_Bool _while_condtional24;
_Bool _if_conditional190;
struct list_item$1charp* prev_it_127;
_Bool _if_conditional191;
_Bool _if_conditional192;
struct list_item$1charp* it_128;
int i_129;
_Bool _while_condtional25;
_Bool _if_conditional193;
_Bool _if_conditional194;
struct list_item$1charp* prev_it_130;
struct list_item$1charp* it_131;
struct list_item$1charp* head_prev_it_132;
struct list_item$1charp* tail_it_133;
int i_134;
_Bool _while_condtional26;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct list_item$1charp* prev_it_135;
_Bool _if_conditional198;
_Bool _if_conditional199;
struct list$1charp* __result104__;
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
                                            if(_if_conditional182=head<0,                                            _if_conditional182) {
                                                head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 1656)), "./neo-c.h", 458, 1657))->len;
                                            }
                                            if(_if_conditional183=tail<0,                                            _if_conditional183) {
                                                tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 1658)), "./neo-c.h", 461, 1659))->len+1;
                                            }
                                            if(_if_conditional184=head>tail,                                            _if_conditional184) {
                                                tmp_122=tail;
                                                tail=head;
                                                head=tmp_122;
                                            }
                                            if(_if_conditional185=head<0,                                            _if_conditional185) {
                                                head=0;
                                            }
                                            if(_if_conditional186=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 1660)), "./neo-c.h", 474, 1661))->len,                                            _if_conditional186) {
                                                tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 1662)), "./neo-c.h", 475, 1663))->len;
                                            }
                                            if(_if_conditional187=head==tail,                                            _if_conditional187) {
                                                __result102__ = __result_obj__ = self;
                                                return __result102__;
                                            }
                                            if(_if_conditional188=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 1664)), "./neo-c.h", 482, 1665))->len,                                            _if_conditional188) {
                                                (come_push_stackframe("./neo-c.h", 484, 1678),__exception_result_var_b123=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 1666)), "./neo-c.h", 484, 1667))), come_pop_stackframe(), __exception_result_var_b123);
                                            }
                                            else {
                                                if(_if_conditional189=head==0,                                                _if_conditional189) {
                                                    it_125=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 1679)), "./neo-c.h", 487, 1680))->head;
                                                    i_126=0;
                                                    while(_while_condtional24=it_125!=((void*)0),                                                    _while_condtional24) {
                                                        if(_if_conditional190=i_126<tail,                                                        _if_conditional190) {
                                                            prev_it_127=it_125;
                                                            it_125=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_125, "./neo-c.h", 493, 1681)), "./neo-c.h", 493, 1682))->next;
                                                            i_126++;
                                                            come_call_finalizer3(prev_it_127,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 1683)), "./neo-c.h", 498, 1684))->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional191=i_126==tail,                                                            _if_conditional191) {
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 1685)), "./neo-c.h", 501, 1686))->head=it_125;
                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 1687)), "./neo-c.h", 502, 1688))->head, "./neo-c.h", 502, 1689)), "./neo-c.h", 502, 1690))->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_125=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_125, "./neo-c.h", 506, 1691)), "./neo-c.h", 506, 1692))->next;
                                                                i_126++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional192=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 1693)), "./neo-c.h", 511, 1694))->len,                                                    _if_conditional192) {
                                                        it_128=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 1695)), "./neo-c.h", 512, 1696))->head;
                                                        i_129=0;
                                                        while(_while_condtional25=it_128!=((void*)0),                                                        _while_condtional25) {
                                                            if(_if_conditional193=i_129==head,                                                            _if_conditional193) {
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 1697)), "./neo-c.h", 516, 1698))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_128, "./neo-c.h", 516, 1699)), "./neo-c.h", 516, 1700))->prev;
                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 1701)), "./neo-c.h", 517, 1702))->tail, "./neo-c.h", 517, 1703)), "./neo-c.h", 517, 1704))->next=((void*)0);
                                                            }
                                                            if(_if_conditional194=i_129>=head,                                                            _if_conditional194) {
                                                                prev_it_130=it_128;
                                                                it_128=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_128, "./neo-c.h", 523, 1705)), "./neo-c.h", 523, 1706))->next;
                                                                i_129++;
                                                                come_call_finalizer3(prev_it_130,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 1707)), "./neo-c.h", 528, 1708))->len--;
                                                            }
                                                            else {
                                                                it_128=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_128, "./neo-c.h", 531, 1709)), "./neo-c.h", 531, 1710))->next;
                                                                i_129++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_131=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 1711)), "./neo-c.h", 537, 1712))->head;
                                                        head_prev_it_132=((void*)0);
                                                        tail_it_133=((void*)0);
                                                        i_134=0;
                                                        while(_while_condtional26=it_131!=((void*)0),                                                        _while_condtional26) {
                                                            if(_if_conditional195=i_134==head,                                                            _if_conditional195) {
                                                                head_prev_it_132=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_131, "./neo-c.h", 546, 1713)), "./neo-c.h", 546, 1714))->prev;
                                                            }
                                                            if(_if_conditional196=i_134==tail,                                                            _if_conditional196) {
                                                                tail_it_133=it_131;
                                                            }
                                                            if(_if_conditional197=i_134>=head&&i_134<tail,                                                            _if_conditional197) {
                                                                prev_it_135=it_131;
                                                                it_131=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_131, "./neo-c.h", 556, 1715)), "./neo-c.h", 556, 1716))->next;
                                                                i_134++;
                                                                come_call_finalizer3(prev_it_135,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 1717)), "./neo-c.h", 561, 1718))->len--;
                                                            }
                                                            else {
                                                                it_131=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_131, "./neo-c.h", 564, 1719)), "./neo-c.h", 564, 1720))->next;
                                                                i_134++;
                                                            }
                                                        }
                                                        if(_if_conditional198=head_prev_it_132!=((void*)0),                                                        _if_conditional198) {
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_132, "./neo-c.h", 570, 1721)), "./neo-c.h", 570, 1722))->next=tail_it_133;
                                                        }
                                                        if(_if_conditional199=tail_it_133!=((void*)0),                                                        _if_conditional199) {
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_133, "./neo-c.h", 573, 1723)), "./neo-c.h", 573, 1724))->prev=head_prev_it_132;
                                                        }
                                                    }
                                                }
                                            }
                                            __result104__ = __result_obj__ = self;
                                            return __result104__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_123;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_124;
struct list$1charp* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_123, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_124, 0, sizeof(struct list_item$1charp*));
                                                    it_123=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 1668)), "./neo-c.h", 426, 1669))->head;
                                                    while(_while_condtional23=it_123!=((void*)0),                                                    _while_condtional23) {
                                                        prev_it_124=it_123;
                                                        it_123=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_123, "./neo-c.h", 429, 1670)), "./neo-c.h", 429, 1671))->next;
                                                        come_call_finalizer3(prev_it_124,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 1672)), "./neo-c.h", 433, 1673))->head=((void*)0);
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 1674)), "./neo-c.h", 434, 1675))->tail=((void*)0);
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 1676)), "./neo-c.h", 436, 1677))->len=0;
                                                    __result103__ = __result_obj__ = self;
                                                    return __result103__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional205;
char* result_137;
void* __exception_result_var_b128;
char* __result106__;
_Bool _if_conditional206;
char* __result107__;
char* result_138;
void* __exception_result_var_b129;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(char*));
memset(&result_138, 0, sizeof(char*));
                if(_if_conditional205=self==((void*)0),                _if_conditional205) {
                    (come_push_stackframe("./neo-c.h", 284, 1784),__exception_result_var_b128=memset(&result_137,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b128);
                    __result106__ = __result_obj__ = result_137;
                    return __result106__;
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1785)), "./neo-c.h", 287, 1786))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1787)), "./neo-c.h", 287, 1788))->head;
                if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 1789)), "./neo-c.h", 289, 1790))->it) {
                    __result107__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 1791)), "./neo-c.h", 290, 1792))->it, "./neo-c.h", 290, 1793)), "./neo-c.h", 290, 1794))->item;
                    return __result107__;
                }
                (come_push_stackframe("./neo-c.h", 294, 1795),__exception_result_var_b129=memset(&result_138,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b129);
                __result108__ = __result_obj__ = result_138;
                return __result108__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                __result109__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 1801)), "./neo-c.h", 317, 1802))->it==((void*)0);
                return __result109__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional207;
char* result_140;
void* __exception_result_var_b132;
char* __result110__;
_Bool _if_conditional208;
char* __result111__;
char* result_141;
void* __exception_result_var_b133;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(char*));
memset(&result_141, 0, sizeof(char*));
                if(_if_conditional207=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 1808)), "./neo-c.h", 299, 1809))->it==((void*)0),                _if_conditional207) {
                    (come_push_stackframe("./neo-c.h", 301, 1810),__exception_result_var_b132=memset(&result_140,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b132);
                    __result110__ = __result_obj__ = result_140;
                    return __result110__;
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1811)), "./neo-c.h", 305, 1812))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1813)), "./neo-c.h", 305, 1814))->it, "./neo-c.h", 305, 1815)), "./neo-c.h", 305, 1816))->next;
                if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 1817)), "./neo-c.h", 307, 1818))->it) {
                    __result111__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 1819)), "./neo-c.h", 308, 1820))->it, "./neo-c.h", 308, 1821)), "./neo-c.h", 308, 1822))->item;
                    return __result111__;
                }
                (come_push_stackframe("./neo-c.h", 312, 1823),__exception_result_var_b133=memset(&result_141,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b133);
                __result112__ = __result_obj__ = result_141;
                return __result112__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional211;
void* right_value145;
struct list_item$1charp* litem_142;
_Bool _if_conditional212;
void* right_value146;
struct list_item$1charp* litem_143;
void* right_value147;
struct list_item$1charp* litem_144;
struct list$1charp* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
memset(&litem_142, 0, sizeof(struct list_item$1charp*));
right_value146 = (void*)0;
memset(&litem_143, 0, sizeof(struct list_item$1charp*));
right_value147 = (void*)0;
memset(&litem_144, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional211=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 1832)), "./neo-c.h", 222, 1833))->len==0,                    _if_conditional211) {
                        litem_142=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value145=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                        come_call_finalizer3(right_value145,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_142, "./neo-c.h", 225, 1834)), "./neo-c.h", 225, 1835))->prev=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_142, "./neo-c.h", 226, 1836)), "./neo-c.h", 226, 1837))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_142, "./neo-c.h", 227, 1838)), "./neo-c.h", 227, 1839))->item=item;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 1840)), "./neo-c.h", 229, 1841))->tail=litem_142;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 1842)), "./neo-c.h", 230, 1843))->head=litem_142;
                    }
                    else {
                        if(_if_conditional212=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 1844)), "./neo-c.h", 232, 1845))->len==1,                        _if_conditional212) {
                            litem_143=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value146=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                            come_call_finalizer3(right_value146,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_143, "./neo-c.h", 235, 1846)), "./neo-c.h", 235, 1847))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 1848)), "./neo-c.h", 235, 1849))->head;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_143, "./neo-c.h", 236, 1850)), "./neo-c.h", 236, 1851))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_143, "./neo-c.h", 237, 1852)), "./neo-c.h", 237, 1853))->item=item;
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 1854)), "./neo-c.h", 239, 1855))->tail=litem_143;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 1856)), "./neo-c.h", 240, 1857))->head, "./neo-c.h", 240, 1858)), "./neo-c.h", 240, 1859))->next=litem_143;
                        }
                        else {
                            litem_144=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value147=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                            come_call_finalizer3(right_value147,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_144, "./neo-c.h", 245, 1860)), "./neo-c.h", 245, 1861))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 1862)), "./neo-c.h", 245, 1863))->tail;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_144, "./neo-c.h", 246, 1864)), "./neo-c.h", 246, 1865))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_144, "./neo-c.h", 247, 1866)), "./neo-c.h", 247, 1867))->item=item;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 1868)), "./neo-c.h", 249, 1869))->tail, "./neo-c.h", 249, 1870)), "./neo-c.h", 249, 1871))->next=litem_144;
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 1872)), "./neo-c.h", 250, 1873))->tail=litem_144;
                        }
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 1874)), "./neo-c.h", 253, 1875))->len++;
                    __result113__ = __result_obj__ = self;
                    return __result113__;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct tuple3$3sTypephcharphbool* __exception_result_var_b140;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_145;
char* var_name_146;
_Bool err_147;
_Bool _if_conditional215;
int __exception_result_var_b141;
void* right_value151;
char* __exception_result_var_b142;
char* fun_name_148;
void* right_value152;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __exception_result_var_b143;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_149;
struct list$1charph* param_names_150;
struct list$1charph* param_default_parametors_151;
_Bool var_args_152;
void* right_value159;
void* right_value160;
struct sType* __exception_result_var_b145;
struct list$1sTypeph* __exception_result_var_b146;
void* right_value167;
char* __exception_result_var_b148;
struct list$1charph* __exception_result_var_b149;
void* right_value168;
void* right_value169;
struct sType* __exception_result_var_b150;
struct sType* type_169;
struct list$1sTypeph* __exception_result_var_b154;
void* right_value173;
struct list$1sTypeph* __dec_obj60;
struct list$1charph* __exception_result_var_b158;
void* right_value177;
struct list$1charph* __dec_obj61;
void* right_value178;
struct sType* __exception_result_var_b159;
void* right_value179;
void* right_value180;
struct tuple1$1sTypeph* __exception_result_var_b160;
struct tuple1$1sTypeph* __dec_obj63;
void* right_value181;
void* right_value182;
struct tuple2$2sTypephcharph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&fun_name_148, 0, sizeof(char*));
right_value152 = (void*)0;
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
    multiple_assign_var2=(come_push_stackframe("23interface.c", 52, 1880),__exception_result_var_b140=((struct tuple3$3sTypephcharphbool*)(right_value150=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b140);
    result_type_145=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    var_name_146=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_147=multiple_assign_var2->v3;
    come_call_finalizer3(right_value150,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional215=!err_147,    _if_conditional215) {
        (come_push_stackframe("23interface.c", 54, 1893),__exception_result_var_b141=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 54, 1889)), "23interface.c", 54, 1890))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 54, 1891)), "23interface.c", 54, 1892))->sline), come_pop_stackframe(), __exception_result_var_b141);
        (come_push_stackframe("23interface.c", 55,1894),exit(2),come_pop_stackframe());
    }
    fun_name_148=(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 58, 1895),__exception_result_var_b142=((char*)(right_value151=parse_word(info))), come_pop_stackframe(), __exception_result_var_b142));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    multiple_assign_var3=(come_push_stackframe("23interface.c", 60, 1896),__exception_result_var_b143=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value152=parse_params(info,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b143);
    param_types_149=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
    param_names_150=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
    param_default_parametors_151=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
    var_args_152=multiple_assign_var3->v4;
    come_call_finalizer3(right_value152,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("23interface.c", 62, 2024),__exception_result_var_b146=list$1sTypeph_insert(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(param_types_149, "23interface.c", 62, 1909)), "23interface.c", 62, 1910)),0,(struct sType*)come_increment_ref_count((come_push_stackframe("23interface.c", 62, 2023),__exception_result_var_b145=((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 62, "sType"))), "23interface.c", 62, 2022))),"void*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b145))), come_pop_stackframe(), __exception_result_var_b146);
    come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("23interface.c", 63, 2139),__exception_result_var_b149=list$1charph_insert(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(param_names_150, "23interface.c", 63, 2025)), "23interface.c", 63, 2026)),0,(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 63, 2138),__exception_result_var_b148=((char*)(right_value167=__builtin_string("self"))), come_pop_stackframe(), __exception_result_var_b148))), come_pop_stackframe(), __exception_result_var_b149);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type_169=(struct sType*)come_increment_ref_count((come_push_stackframe("23interface.c", 65, 2141),__exception_result_var_b150=((struct sType*)(right_value169=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value168=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 65, "sType"))), "23interface.c", 65, 2140))),"lambda",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b150));
    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj60=((struct sType*)come_null_check(((struct sType*)come_null_check(type_169, "23interface.c", 67, 2142)), "23interface.c", 67, 2143))->mParamTypes;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type_169, "23interface.c", 67, 2142)), "23interface.c", 67, 2143))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value173=(come_push_stackframe("23interface.c", 67, 2157),__exception_result_var_b154=list$1sTypephp_clone(param_types_149), come_pop_stackframe(), __exception_result_var_b154))));
    come_call_finalizer3(__dec_obj60,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value173,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj61=((struct sType*)come_null_check(((struct sType*)come_null_check(type_169, "23interface.c", 68, 2158)), "23interface.c", 68, 2159))->mParamNames;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type_169, "23interface.c", 68, 2158)), "23interface.c", 68, 2159))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value177=(come_push_stackframe("23interface.c", 68, 2173),__exception_result_var_b158=list$1charphp_clone(param_names_150), come_pop_stackframe(), __exception_result_var_b158))));
    come_call_finalizer3(__dec_obj61,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type_169, "23interface.c", 69, 2174)), "23interface.c", 69, 2175))->mVarArgs=var_args_152;
    __dec_obj63=((struct sType*)come_null_check(((struct sType*)come_null_check(type_169, "23interface.c", 70, 2176)), "23interface.c", 70, 2177))->mResultType;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type_169, "23interface.c", 70, 2176)), "23interface.c", 70, 2177))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("23interface.c", 70, 2182),__exception_result_var_b160=((struct tuple1$1sTypeph*)(right_value180=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)(right_value178=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 70, "tuple1$1sTypeph"))), "23interface.c", 70, 2178))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=(come_push_stackframe("23interface.c", 70, 2181),__exception_result_var_b159=sType_clone(result_type_145), come_pop_stackframe(), __exception_result_var_b159))))))), come_pop_stackframe(), __exception_result_var_b160));
    come_call_finalizer3(__dec_obj63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value180,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result128__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value182=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value181=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "23interface.c", 72, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(type_169),(char*)come_increment_ref_count(fun_name_148))));
    come_call_finalizer3(result_type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_146 = come_decrement_ref_count2(var_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_148 = come_decrement_ref_count2(fun_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_149,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_150,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_151,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value182,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result128__;
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
_Bool _if_conditional213;
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional213=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 1881)), "tuple3$3sTypephcharphboolp_finalize", 0, 1882))->v1!=((void*)0),        _if_conditional213) {
            come_call_finalizer3(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 1883)), "tuple3$3sTypephcharphboolp_finalize", 0, 1884))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional214=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 1885)), "tuple3$3sTypephcharphboolp_finalize", 1, 1886))->v2!=((void*)0),        _if_conditional214) {
            ((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 1887)), "tuple3$3sTypephcharphboolp_finalize", 1, 1888))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 1887)), "tuple3$3sTypephcharphboolp_finalize", 1, 1888))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional216=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0, 1897)), "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0, 1898))->v1!=((void*)0),        _if_conditional216) {
            come_call_finalizer3(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0, 1899)), "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0, 1900))->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional217=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1, 1901)), "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1, 1902))->v2!=((void*)0),        _if_conditional217) {
            come_call_finalizer3(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1, 1903)), "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1, 1904))->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional218=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2, 1905)), "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2, 1906))->v3!=((void*)0),        _if_conditional218) {
            come_call_finalizer3(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2, 1907)), "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2, 1908))->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
struct list$1sTypeph* __exception_result_var_b144;
struct list$1sTypeph* __result117__;
_Bool _if_conditional224;
void* right_value156;
struct list_item$1sTypeph* litem_156;
struct sType* __dec_obj51;
_Bool _if_conditional225;
void* right_value157;
struct list_item$1sTypeph* litem_157;
struct sType* __dec_obj52;
struct list_item$1sTypeph* it_158;
int i_159;
_Bool _while_condtional27;
_Bool _if_conditional226;
void* right_value158;
struct list_item$1sTypeph* litem_160;
struct sType* __dec_obj53;
struct list$1sTypeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1sTypeph*));
right_value157 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1sTypeph*));
memset(&it_158, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_159, 0, sizeof(int));
right_value158 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional219=position<0,        _if_conditional219) {
            position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 366, 1911)), "./neo-c.h", 366, 1912))->len+1;
        }
        if(_if_conditional220=position<0,        _if_conditional220) {
            position=0;
        }
        if(_if_conditional221=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 371, 1913)), "./neo-c.h", 371, 1914))->len==0||position>=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 371, 1915)), "./neo-c.h", 371, 1916))->len,        _if_conditional221) {
            (come_push_stackframe("./neo-c.h", 373, 1963),__exception_result_var_b144=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 373, 1917)), "./neo-c.h", 373, 1918)),(struct sType*)come_increment_ref_count(item)), come_pop_stackframe(), __exception_result_var_b144);
            __result117__ = __result_obj__ = self;
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result117__;
        }
        if(_if_conditional224=position==0,        _if_conditional224) {
            litem_156=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value156=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 378, "list_item$1sTypeph"))));
            come_call_finalizer3(right_value156,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_156, "./neo-c.h", 380, 1964)), "./neo-c.h", 380, 1965))->prev=((void*)0);
            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_156, "./neo-c.h", 381, 1966)), "./neo-c.h", 381, 1967))->next=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 381, 1968)), "./neo-c.h", 381, 1969))->head;
            __dec_obj51=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_156, "./neo-c.h", 382, 1970)), "./neo-c.h", 382, 1971))->item;
            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_156, "./neo-c.h", 382, 1970)), "./neo-c.h", 382, 1971))->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 384, 1972)), "./neo-c.h", 384, 1973))->head, "./neo-c.h", 384, 1974)), "./neo-c.h", 384, 1975))->prev=litem_156;
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 385, 1976)), "./neo-c.h", 385, 1977))->head=litem_156;
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 387, 1978)), "./neo-c.h", 387, 1979))->len++;
        }
        else {
            if(_if_conditional225=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 389, 1980)), "./neo-c.h", 389, 1981))->len==1,            _if_conditional225) {
                litem_157=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value157=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 390, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value157,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_157, "./neo-c.h", 392, 1982)), "./neo-c.h", 392, 1983))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 392, 1984)), "./neo-c.h", 392, 1985))->head;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_157, "./neo-c.h", 393, 1986)), "./neo-c.h", 393, 1987))->next=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 393, 1988)), "./neo-c.h", 393, 1989))->tail;
                __dec_obj52=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_157, "./neo-c.h", 394, 1990)), "./neo-c.h", 394, 1991))->item;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_157, "./neo-c.h", 394, 1990)), "./neo-c.h", 394, 1991))->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 396, 1992)), "./neo-c.h", 396, 1993))->tail, "./neo-c.h", 396, 1994)), "./neo-c.h", 396, 1995))->prev=litem_157;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 397, 1996)), "./neo-c.h", 397, 1997))->head, "./neo-c.h", 397, 1998)), "./neo-c.h", 397, 1999))->next=litem_157;
                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 399, 2000)), "./neo-c.h", 399, 2001))->len++;
            }
            else {
                it_158=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 402, 2002)), "./neo-c.h", 402, 2003))->head;
                i_159=0;
                while(_while_condtional27=it_158!=((void*)0),                _while_condtional27) {
                    if(_if_conditional226=position==i_159,                    _if_conditional226) {
                        litem_160=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value158=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 406, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value158,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_160, "./neo-c.h", 408, 2004)), "./neo-c.h", 408, 2005))->prev=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_158, "./neo-c.h", 408, 2006)), "./neo-c.h", 408, 2007))->prev;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_160, "./neo-c.h", 409, 2008)), "./neo-c.h", 409, 2009))->next=it_158;
                        __dec_obj53=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_160, "./neo-c.h", 410, 2010)), "./neo-c.h", 410, 2011))->item;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_160, "./neo-c.h", 410, 2010)), "./neo-c.h", 410, 2011))->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_158, "./neo-c.h", 412, 2012)), "./neo-c.h", 412, 2013))->prev, "./neo-c.h", 412, 2014)), "./neo-c.h", 412, 2015))->next=litem_160;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_158, "./neo-c.h", 413, 2016)), "./neo-c.h", 413, 2017))->prev=litem_160;
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 415, 2018)), "./neo-c.h", 415, 2019))->len++;
                    }
                    it_158=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_158, "./neo-c.h", 418, 2020)), "./neo-c.h", 418, 2021))->next;
                    i_159++;
                }
            }
        }
        __result118__ = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result118__;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional222;
void* right_value153;
struct list_item$1sTypeph* litem_153;
struct sType* __dec_obj48;
_Bool _if_conditional223;
void* right_value154;
struct list_item$1sTypeph* litem_154;
struct sType* __dec_obj49;
void* right_value155;
struct list_item$1sTypeph* litem_155;
struct sType* __dec_obj50;
struct list$1sTypeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
memset(&litem_153, 0, sizeof(struct list_item$1sTypeph*));
right_value154 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1sTypeph*));
right_value155 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional222=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 222, 1919)), "./neo-c.h", 222, 1920))->len==0,                _if_conditional222) {
                    litem_153=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value153=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value153,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_153, "./neo-c.h", 225, 1921)), "./neo-c.h", 225, 1922))->prev=((void*)0);
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_153, "./neo-c.h", 226, 1923)), "./neo-c.h", 226, 1924))->next=((void*)0);
                    __dec_obj48=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_153, "./neo-c.h", 227, 1925)), "./neo-c.h", 227, 1926))->item;
                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_153, "./neo-c.h", 227, 1925)), "./neo-c.h", 227, 1926))->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 229, 1927)), "./neo-c.h", 229, 1928))->tail=litem_153;
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 230, 1929)), "./neo-c.h", 230, 1930))->head=litem_153;
                }
                else {
                    if(_if_conditional223=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 232, 1931)), "./neo-c.h", 232, 1932))->len==1,                    _if_conditional223) {
                        litem_154=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value154=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value154,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_154, "./neo-c.h", 235, 1933)), "./neo-c.h", 235, 1934))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 235, 1935)), "./neo-c.h", 235, 1936))->head;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_154, "./neo-c.h", 236, 1937)), "./neo-c.h", 236, 1938))->next=((void*)0);
                        __dec_obj49=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_154, "./neo-c.h", 237, 1939)), "./neo-c.h", 237, 1940))->item;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_154, "./neo-c.h", 237, 1939)), "./neo-c.h", 237, 1940))->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 239, 1941)), "./neo-c.h", 239, 1942))->tail=litem_154;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 240, 1943)), "./neo-c.h", 240, 1944))->head, "./neo-c.h", 240, 1945)), "./neo-c.h", 240, 1946))->next=litem_154;
                    }
                    else {
                        litem_155=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value155=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value155,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_155, "./neo-c.h", 245, 1947)), "./neo-c.h", 245, 1948))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 245, 1949)), "./neo-c.h", 245, 1950))->tail;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_155, "./neo-c.h", 246, 1951)), "./neo-c.h", 246, 1952))->next=((void*)0);
                        __dec_obj50=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_155, "./neo-c.h", 247, 1953)), "./neo-c.h", 247, 1954))->item;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_155, "./neo-c.h", 247, 1953)), "./neo-c.h", 247, 1954))->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 249, 1955)), "./neo-c.h", 249, 1956))->tail, "./neo-c.h", 249, 1957)), "./neo-c.h", 249, 1958))->next=litem_155;
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 250, 1959)), "./neo-c.h", 250, 1960))->tail=litem_155;
                    }
                }
                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 253, 1961)), "./neo-c.h", 253, 1962))->len++;
                __result116__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result116__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
struct list$1charph* __exception_result_var_b147;
struct list$1charph* __result120__;
_Bool _if_conditional232;
void* right_value164;
struct list_item$1charph* litem_164;
char* __dec_obj57;
_Bool _if_conditional233;
void* right_value165;
struct list_item$1charph* litem_165;
char* __dec_obj58;
struct list_item$1charph* it_166;
int i_167;
_Bool _while_condtional28;
_Bool _if_conditional234;
void* right_value166;
struct list_item$1charph* litem_168;
char* __dec_obj59;
struct list$1charph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1charph*));
right_value165 = (void*)0;
memset(&litem_165, 0, sizeof(struct list_item$1charph*));
memset(&it_166, 0, sizeof(struct list_item$1charph*));
memset(&i_167, 0, sizeof(int));
right_value166 = (void*)0;
memset(&litem_168, 0, sizeof(struct list_item$1charph*));
        if(_if_conditional227=position<0,        _if_conditional227) {
            position+=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 366, 2027)), "./neo-c.h", 366, 2028))->len+1;
        }
        if(_if_conditional228=position<0,        _if_conditional228) {
            position=0;
        }
        if(_if_conditional229=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 371, 2029)), "./neo-c.h", 371, 2030))->len==0||position>=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 371, 2031)), "./neo-c.h", 371, 2032))->len,        _if_conditional229) {
            (come_push_stackframe("./neo-c.h", 373, 2079),__exception_result_var_b147=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 373, 2033)), "./neo-c.h", 373, 2034)),(char*)come_increment_ref_count(item)), come_pop_stackframe(), __exception_result_var_b147);
            __result120__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result120__;
        }
        if(_if_conditional232=position==0,        _if_conditional232) {
            litem_164=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value164=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 378, "list_item$1charph"))));
            come_call_finalizer3(right_value164,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_164, "./neo-c.h", 380, 2080)), "./neo-c.h", 380, 2081))->prev=((void*)0);
            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_164, "./neo-c.h", 381, 2082)), "./neo-c.h", 381, 2083))->next=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 381, 2084)), "./neo-c.h", 381, 2085))->head;
            __dec_obj57=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_164, "./neo-c.h", 382, 2086)), "./neo-c.h", 382, 2087))->item;
            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_164, "./neo-c.h", 382, 2086)), "./neo-c.h", 382, 2087))->item=(char*)come_increment_ref_count(item);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 384, 2088)), "./neo-c.h", 384, 2089))->head, "./neo-c.h", 384, 2090)), "./neo-c.h", 384, 2091))->prev=litem_164;
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 385, 2092)), "./neo-c.h", 385, 2093))->head=litem_164;
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 387, 2094)), "./neo-c.h", 387, 2095))->len++;
        }
        else {
            if(_if_conditional233=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 389, 2096)), "./neo-c.h", 389, 2097))->len==1,            _if_conditional233) {
                litem_165=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value165=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 390, "list_item$1charph"))));
                come_call_finalizer3(right_value165,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_165, "./neo-c.h", 392, 2098)), "./neo-c.h", 392, 2099))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 392, 2100)), "./neo-c.h", 392, 2101))->head;
                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_165, "./neo-c.h", 393, 2102)), "./neo-c.h", 393, 2103))->next=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 393, 2104)), "./neo-c.h", 393, 2105))->tail;
                __dec_obj58=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_165, "./neo-c.h", 394, 2106)), "./neo-c.h", 394, 2107))->item;
                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_165, "./neo-c.h", 394, 2106)), "./neo-c.h", 394, 2107))->item=(char*)come_increment_ref_count(item);
                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 396, 2108)), "./neo-c.h", 396, 2109))->tail, "./neo-c.h", 396, 2110)), "./neo-c.h", 396, 2111))->prev=litem_165;
                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 397, 2112)), "./neo-c.h", 397, 2113))->head, "./neo-c.h", 397, 2114)), "./neo-c.h", 397, 2115))->next=litem_165;
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 399, 2116)), "./neo-c.h", 399, 2117))->len++;
            }
            else {
                it_166=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 402, 2118)), "./neo-c.h", 402, 2119))->head;
                i_167=0;
                while(_while_condtional28=it_166!=((void*)0),                _while_condtional28) {
                    if(_if_conditional234=position==i_167,                    _if_conditional234) {
                        litem_168=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value166=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 406, "list_item$1charph"))));
                        come_call_finalizer3(right_value166,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_168, "./neo-c.h", 408, 2120)), "./neo-c.h", 408, 2121))->prev=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_166, "./neo-c.h", 408, 2122)), "./neo-c.h", 408, 2123))->prev;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_168, "./neo-c.h", 409, 2124)), "./neo-c.h", 409, 2125))->next=it_166;
                        __dec_obj59=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_168, "./neo-c.h", 410, 2126)), "./neo-c.h", 410, 2127))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_168, "./neo-c.h", 410, 2126)), "./neo-c.h", 410, 2127))->item=(char*)come_increment_ref_count(item);
                        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_166, "./neo-c.h", 412, 2128)), "./neo-c.h", 412, 2129))->prev, "./neo-c.h", 412, 2130)), "./neo-c.h", 412, 2131))->next=litem_168;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_166, "./neo-c.h", 413, 2132)), "./neo-c.h", 413, 2133))->prev=litem_168;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 415, 2134)), "./neo-c.h", 415, 2135))->len++;
                    }
                    it_166=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_166, "./neo-c.h", 418, 2136)), "./neo-c.h", 418, 2137))->next;
                    i_167++;
                }
            }
        }
        __result121__ = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result121__;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional230;
void* right_value161;
struct list_item$1charph* litem_161;
char* __dec_obj54;
_Bool _if_conditional231;
void* right_value162;
struct list_item$1charph* litem_162;
char* __dec_obj55;
void* right_value163;
struct list_item$1charph* litem_163;
char* __dec_obj56;
struct list$1charph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1charph*));
right_value162 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charph*));
right_value163 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional230=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 2035)), "./neo-c.h", 222, 2036))->len==0,                _if_conditional230) {
                    litem_161=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph"))));
                    come_call_finalizer3(right_value161,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_161, "./neo-c.h", 225, 2037)), "./neo-c.h", 225, 2038))->prev=((void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_161, "./neo-c.h", 226, 2039)), "./neo-c.h", 226, 2040))->next=((void*)0);
                    __dec_obj54=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_161, "./neo-c.h", 227, 2041)), "./neo-c.h", 227, 2042))->item;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_161, "./neo-c.h", 227, 2041)), "./neo-c.h", 227, 2042))->item=(char*)come_increment_ref_count(item);
                    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 2043)), "./neo-c.h", 229, 2044))->tail=litem_161;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 2045)), "./neo-c.h", 230, 2046))->head=litem_161;
                }
                else {
                    if(_if_conditional231=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 2047)), "./neo-c.h", 232, 2048))->len==1,                    _if_conditional231) {
                        litem_162=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph"))));
                        come_call_finalizer3(right_value162,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_162, "./neo-c.h", 235, 2049)), "./neo-c.h", 235, 2050))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 2051)), "./neo-c.h", 235, 2052))->head;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_162, "./neo-c.h", 236, 2053)), "./neo-c.h", 236, 2054))->next=((void*)0);
                        __dec_obj55=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_162, "./neo-c.h", 237, 2055)), "./neo-c.h", 237, 2056))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_162, "./neo-c.h", 237, 2055)), "./neo-c.h", 237, 2056))->item=(char*)come_increment_ref_count(item);
                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 2057)), "./neo-c.h", 239, 2058))->tail=litem_162;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 2059)), "./neo-c.h", 240, 2060))->head, "./neo-c.h", 240, 2061)), "./neo-c.h", 240, 2062))->next=litem_162;
                    }
                    else {
                        litem_163=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value163=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph"))));
                        come_call_finalizer3(right_value163,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_163, "./neo-c.h", 245, 2063)), "./neo-c.h", 245, 2064))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 2065)), "./neo-c.h", 245, 2066))->tail;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_163, "./neo-c.h", 246, 2067)), "./neo-c.h", 246, 2068))->next=((void*)0);
                        __dec_obj56=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_163, "./neo-c.h", 247, 2069)), "./neo-c.h", 247, 2070))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_163, "./neo-c.h", 247, 2069)), "./neo-c.h", 247, 2070))->item=(char*)come_increment_ref_count(item);
                        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 2071)), "./neo-c.h", 249, 2072))->tail, "./neo-c.h", 249, 2073)), "./neo-c.h", 249, 2074))->next=litem_163;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 2075)), "./neo-c.h", 250, 2076))->tail=litem_163;
                    }
                }
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 2077)), "./neo-c.h", 253, 2078))->len++;
                __result119__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result119__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional235;
struct list$1sTypeph* __result122__;
void* right_value170;
void* right_value171;
struct list$1sTypeph* __exception_result_var_b151;
struct list$1sTypeph* result_170;
struct list_item$1sTypeph* it_171;
_Bool _while_condtional29;
struct sType* __exception_result_var_b152;
void* right_value172;
struct list$1sTypeph* __exception_result_var_b153;
struct list$1sTypeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&result_170, 0, sizeof(struct list$1sTypeph*));
memset(&it_171, 0, sizeof(struct list_item$1sTypeph*));
right_value172 = (void*)0;
        if(_if_conditional235=self==((void*)0),        _if_conditional235) {
            __result122__ = __result_obj__ = ((void*)0);
            return __result122__;
        }
        result_170=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 2146),__exception_result_var_b151=((struct list$1sTypeph*)(right_value171=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value170=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 2144)), "./neo-c.h", 139, 2145)))))), come_pop_stackframe(), __exception_result_var_b151));
        come_call_finalizer3(right_value170,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value171,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        it_171=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 2147)), "./neo-c.h", 141, 2148))->head;
        while(_while_condtional29=it_171!=((void*)0),        _while_condtional29) {
            (come_push_stackframe("./neo-c.h", 143, 2154),__exception_result_var_b153=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_170, "./neo-c.h", 143, 2149)), "./neo-c.h", 143, 2150)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=(come_push_stackframe("./neo-c.h", 143, 2153),__exception_result_var_b152=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_171, "./neo-c.h", 143, 2151)), "./neo-c.h", 143, 2152))->item), come_pop_stackframe(), __exception_result_var_b152))))), come_pop_stackframe(), __exception_result_var_b153);
            come_call_finalizer3(right_value172,sType_finalize, 0, 1, 0, 0, __result_obj__);
            it_171=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_171, "./neo-c.h", 145, 2155)), "./neo-c.h", 145, 2156))->next;
        }
        __result123__ = __result_obj__ = result_170;
        come_call_finalizer3(result_170,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result123__;
        come_call_finalizer3(result_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional236;
struct list$1charph* __result124__;
void* right_value174;
void* right_value175;
struct list$1charph* __exception_result_var_b155;
struct list$1charph* result_172;
struct list_item$1charph* it_173;
_Bool _while_condtional30;
char* __exception_result_var_b156;
void* right_value176;
struct list$1charph* __exception_result_var_b157;
struct list$1charph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
right_value175 = (void*)0;
memset(&result_172, 0, sizeof(struct list$1charph*));
memset(&it_173, 0, sizeof(struct list_item$1charph*));
right_value176 = (void*)0;
        if(_if_conditional236=self==((void*)0),        _if_conditional236) {
            __result124__ = __result_obj__ = ((void*)0);
            return __result124__;
        }
        result_172=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 2162),__exception_result_var_b155=((struct list$1charph*)(right_value175=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value174=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 2160)), "./neo-c.h", 139, 2161)))))), come_pop_stackframe(), __exception_result_var_b155));
        come_call_finalizer3(right_value174,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value175,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_173=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 2163)), "./neo-c.h", 141, 2164))->head;
        while(_while_condtional30=it_173!=((void*)0),        _while_condtional30) {
            (come_push_stackframe("./neo-c.h", 143, 2170),__exception_result_var_b157=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_172, "./neo-c.h", 143, 2165)), "./neo-c.h", 143, 2166)),(char*)come_increment_ref_count(((char*)(right_value176=(come_push_stackframe("./neo-c.h", 143, 2169),__exception_result_var_b156=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_173, "./neo-c.h", 143, 2167)), "./neo-c.h", 143, 2168))->item), come_pop_stackframe(), __exception_result_var_b156))))), come_pop_stackframe(), __exception_result_var_b157);
            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            it_173=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_173, "./neo-c.h", 145, 2171)), "./neo-c.h", 145, 2172))->next;
        }
        __result125__ = __result_obj__ = result_172;
        come_call_finalizer3(result_172,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result125__;
        come_call_finalizer3(result_172,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj62;
struct tuple1$1sTypeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj62=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "./neo-c.h", 1716, 2179)), "./neo-c.h", 1716, 2180))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "./neo-c.h", 1716, 2179)), "./neo-c.h", 1716, 2180))->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        __result126__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result126__;
        come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj64;
char* __dec_obj65;
struct tuple2$2sTypephcharph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj64=((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "./neo-c.h", 1744, 2183)), "./neo-c.h", 1744, 2184))->v1;
        ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "./neo-c.h", 1744, 2183)), "./neo-c.h", 1744, 2184))->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj65=((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "./neo-c.h", 1745, 2185)), "./neo-c.h", 1745, 2186))->v2;
        ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "./neo-c.h", 1745, 2185)), "./neo-c.h", 1745, 2186))->v2=(char*)come_increment_ref_count(v2);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        __result127__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result127__;
        come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional237;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional237=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 2187)), "tuple2$2sTypephcharphp_finalize", 0, 2188))->v1!=((void*)0),            _if_conditional237) {
                come_call_finalizer3(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 2189)), "tuple2$2sTypephcharphp_finalize", 0, 2190))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional238=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2191)), "tuple2$2sTypephcharphp_finalize", 1, 2192))->v2!=((void*)0),            _if_conditional238) {
                ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2193)), "tuple2$2sTypephcharphp_finalize", 1, 2194))->v2 = come_decrement_ref_count2(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2193)), "tuple2$2sTypephcharphp_finalize", 1, 2194))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b161;
_Bool __exception_result_var_b162;
_Bool _if_conditional239;
char* source_head_174;
_Bool output_175;
void* right_value183;
char* __exception_result_var_b163;
char* type_name_176;
struct sClass* klass_177;
struct sClass* __exception_result_var_b164;
_Bool _if_conditional240;
void* right_value184;
void* right_value185;
struct sClass* __exception_result_var_b165;
struct sClass* __dec_obj66;
struct sClass* __exception_result_var_b166;
struct sClass* __exception_result_var_b167;
void* right_value186;
struct sClass* __dec_obj67;
int __exception_result_var_b168;
_Bool _if_conditional242;
int __exception_result_var_b169;
void* right_value187;
void* right_value188;
struct sType* __exception_result_var_b170;
struct sType* voidp_178;
void* right_value192;
char* __exception_result_var_b171;
void* right_value193;
void* right_value194;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b172;
void* right_value195;
void* right_value196;
struct sType* __exception_result_var_b173;
struct sType* finalizer_182;
struct sType* __exception_result_var_b174;
void* right_value197;
struct sType* __list_values1___183[1];
void* right_value198;
void* right_value199;
struct list$1sTypeph* __dec_obj73;
void* right_value200;
char* __exception_result_var_b176;
char* __list_values2___185[1];
void* right_value201;
void* right_value202;
struct list$1charph* __dec_obj74;
void* right_value203;
void* right_value204;
void* right_value205;
struct sType* __exception_result_var_b178;
void* right_value206;
struct tuple1$1sTypeph* __exception_result_var_b179;
struct tuple1$1sTypeph* __dec_obj75;
void* right_value207;
char* __exception_result_var_b180;
void* right_value208;
void* right_value209;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b181;
void* right_value210;
void* right_value211;
struct sType* __exception_result_var_b182;
struct sType* cloner_187;
struct sType* __exception_result_var_b183;
void* right_value212;
struct sType* __list_values3___188[1];
void* right_value213;
void* right_value214;
struct list$1sTypeph* __dec_obj76;
void* right_value215;
char* __exception_result_var_b184;
char* __list_values4___189[1];
void* right_value216;
void* right_value217;
struct list$1charph* __dec_obj77;
void* right_value218;
struct sType* __exception_result_var_b185;
void* right_value219;
void* right_value220;
struct tuple1$1sTypeph* __exception_result_var_b186;
struct tuple1$1sTypeph* __dec_obj78;
void* right_value221;
char* __exception_result_var_b187;
void* right_value222;
void* right_value223;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b188;
_Bool _while_condtional31;
void* right_value224;
struct tuple2$2sTypephcharph* __exception_result_var_b189;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type2_190;
char* name_191;
int __exception_result_var_b190;
void* right_value225;
void* right_value226;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b191;
_Bool _if_conditional245;
char* source_tail_192;
void* right_value227;
void* right_value228;
struct buffer* __exception_result_var_b192;
struct buffer* header_193;
struct buffer* __exception_result_var_b193;
struct buffer* __exception_result_var_b194;
void* right_value229;
char* __exception_result_var_b195;
void* right_value230;
void* right_value231;
char* __exception_result_var_b196;
void* right_value232;
struct sInterfaceNode* __exception_result_var_b197;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* right_value237;
struct sNode* __result137__;
void* right_value238;
struct sNode* __exception_result_var_b201;
struct sNode* __result138__;
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
    if(_if_conditional239=(come_push_stackframe("23interface.c", 77, 2195),__exception_result_var_b161=charp_operator_equals(buf,"interface"), come_pop_stackframe(), __exception_result_var_b161)||(come_push_stackframe("23interface.c", 77, 2196),__exception_result_var_b162=charp_operator_equals(buf,"protocol"), come_pop_stackframe(), __exception_result_var_b162),    _if_conditional239) {
        source_head_174=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 78, 2197)), "23interface.c", 78, 2198))->p;
        output_175=(_Bool)1;
        type_name_176=(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 82, 2199),__exception_result_var_b163=((char*)(right_value183=parse_word(info))), come_pop_stackframe(), __exception_result_var_b163));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional240=(come_push_stackframe("23interface.c", 85, 2204),__exception_result_var_b164=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 85, 2200)), "23interface.c", 85, 2201))->classes, "23interface.c", 85, 2202)), "23interface.c", 85, 2203)),type_name_176,((void*)0)), come_pop_stackframe(), __exception_result_var_b164)==((void*)0),        _if_conditional240) {
            __dec_obj66=klass_177;
            klass_177=(struct sClass*)come_increment_ref_count((come_push_stackframe("23interface.c", 86, 2206),__exception_result_var_b165=((struct sClass*)(right_value185=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value184=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "23interface.c", 86, "sClass"))), "23interface.c", 86, 2205))),type_name_176,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b165));
            come_call_finalizer3(__dec_obj66,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value184,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value185,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj67=klass_177;
            klass_177=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value186=(come_push_stackframe("23interface.c", 89, 2212),__exception_result_var_b167=sClass_clone((come_push_stackframe("23interface.c", 89, 2211),__exception_result_var_b166=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 89, 2207)), "23interface.c", 89, 2208))->classes, "23interface.c", 89, 2209)), "23interface.c", 89, 2210)),type_name_176,((void*)0)), come_pop_stackframe(), __exception_result_var_b166)), come_pop_stackframe(), __exception_result_var_b167))));
            come_call_finalizer3(__dec_obj67,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value186,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional242=(come_push_stackframe("23interface.c", 91, 2219),__exception_result_var_b168=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_177, "23interface.c", 91, 2213)), "23interface.c", 91, 2214))->mFields, "23interface.c", 91, 2215)), "23interface.c", 91, 2216))), come_pop_stackframe(), __exception_result_var_b168)>0,            _if_conditional242) {
                output_175=(_Bool)0;
            }
        }
        (come_push_stackframe("23interface.c", 96, 2220),__exception_result_var_b169=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b169);
        voidp_178=(struct sType*)come_increment_ref_count((come_push_stackframe("23interface.c", 98, 2222),__exception_result_var_b170=((struct sType*)(right_value188=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value187=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 98, "sType"))), "23interface.c", 98, 2221))),"void",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b170));
        come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value188,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(voidp_178, "23interface.c", 99, 2223)), "23interface.c", 99, 2224))->mPointerNum++;
        (come_push_stackframe("23interface.c", 101, 2278),__exception_result_var_b172=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_177, "23interface.c", 101, 2225)), "23interface.c", 101, 2226))->mFields, "23interface.c", 101, 2227)), "23interface.c", 101, 2228)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value194=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value193=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 101, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 101, 2273),__exception_result_var_b171=((char*)(right_value192=__builtin_string("_protocol_obj"))), come_pop_stackframe(), __exception_result_var_b171)),(struct sType*)come_increment_ref_count(voidp_178)))))), come_pop_stackframe(), __exception_result_var_b172);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value193,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value194,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        finalizer_182=(struct sType*)come_increment_ref_count((come_push_stackframe("23interface.c", 103, 2280),__exception_result_var_b173=((struct sType*)(right_value196=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value195=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 103, "sType"))), "23interface.c", 103, 2279))),"lambda",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b173));
        come_call_finalizer3(right_value195,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value196,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values1___183[0]=come_increment_ref_count(((struct sType*)(right_value197=(come_push_stackframe("23interface.c", 105, 2283),__exception_result_var_b174=sType_clone(voidp_178), come_pop_stackframe(), __exception_result_var_b174))));
}        __dec_obj73=((struct sType*)come_null_check(((struct sType*)come_null_check(finalizer_182, "23interface.c", 105, 2281)), "23interface.c", 105, 2282))->mParamTypes;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(finalizer_182, "23interface.c", 105, 2281)), "23interface.c", 105, 2282))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value199=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value198=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 105, "struct list$1sTypeph")))),1,__list_values1___183))));
        come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value198,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value199,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values2___185[0]=come_increment_ref_count((come_push_stackframe("23interface.c", 106, 2296),__exception_result_var_b176=((char*)(right_value200=__builtin_string("self"))), come_pop_stackframe(), __exception_result_var_b176));
}        __dec_obj74=((struct sType*)come_null_check(((struct sType*)come_null_check(finalizer_182, "23interface.c", 106, 2294)), "23interface.c", 106, 2295))->mParamNames;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(finalizer_182, "23interface.c", 106, 2294)), "23interface.c", 106, 2295))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value202=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value201=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 106, "struct list$1charph")))),1,__list_values2___185))));
        come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value201,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value202,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(finalizer_182, "23interface.c", 107, 2307)), "23interface.c", 107, 2308))->mVarArgs=(_Bool)0;
        __dec_obj75=((struct sType*)come_null_check(((struct sType*)come_null_check(finalizer_182, "23interface.c", 108, 2309)), "23interface.c", 108, 2310))->mResultType;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(finalizer_182, "23interface.c", 108, 2309)), "23interface.c", 108, 2310))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("23interface.c", 108, 2314),__exception_result_var_b179=((struct tuple1$1sTypeph*)(right_value206=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)(right_value203=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 108, "tuple1$1sTypeph"))), "23interface.c", 108, 2311))),(struct sType*)come_increment_ref_count((come_push_stackframe("23interface.c", 108, 2313),__exception_result_var_b178=((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 108, "sType"))), "23interface.c", 108, 2312))),"void",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b178))))), come_pop_stackframe(), __exception_result_var_b179));
        come_call_finalizer3(__dec_obj75,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value203,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value206,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("23interface.c", 110, 2320),__exception_result_var_b181=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_177, "23interface.c", 110, 2315)), "23interface.c", 110, 2316))->mFields, "23interface.c", 110, 2317)), "23interface.c", 110, 2318)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value209=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value208=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 110, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 110, 2319),__exception_result_var_b180=((char*)(right_value207=__builtin_string("finalize"))), come_pop_stackframe(), __exception_result_var_b180)),(struct sType*)come_increment_ref_count(finalizer_182)))))), come_pop_stackframe(), __exception_result_var_b181);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value208,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value209,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        cloner_187=(struct sType*)come_increment_ref_count((come_push_stackframe("23interface.c", 112, 2322),__exception_result_var_b182=((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 112, "sType"))), "23interface.c", 112, 2321))),"lambda",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b182));
        come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values3___188[0]=come_increment_ref_count(((struct sType*)(right_value212=(come_push_stackframe("23interface.c", 114, 2325),__exception_result_var_b183=sType_clone(voidp_178), come_pop_stackframe(), __exception_result_var_b183))));
}        __dec_obj76=((struct sType*)come_null_check(((struct sType*)come_null_check(cloner_187, "23interface.c", 114, 2323)), "23interface.c", 114, 2324))->mParamTypes;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(cloner_187, "23interface.c", 114, 2323)), "23interface.c", 114, 2324))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value214=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value213=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 114, "struct list$1sTypeph")))),1,__list_values3___188))));
        come_call_finalizer3(__dec_obj76,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value213,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values4___189[0]=come_increment_ref_count((come_push_stackframe("23interface.c", 115, 2328),__exception_result_var_b184=((char*)(right_value215=__builtin_string("self"))), come_pop_stackframe(), __exception_result_var_b184));
}        __dec_obj77=((struct sType*)come_null_check(((struct sType*)come_null_check(cloner_187, "23interface.c", 115, 2326)), "23interface.c", 115, 2327))->mParamNames;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(cloner_187, "23interface.c", 115, 2326)), "23interface.c", 115, 2327))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value217=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value216=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 115, "struct list$1charph")))),1,__list_values4___189))));
        come_call_finalizer3(__dec_obj77,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value216,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value217,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(cloner_187, "23interface.c", 116, 2329)), "23interface.c", 116, 2330))->mVarArgs=(_Bool)0;
        __dec_obj78=((struct sType*)come_null_check(((struct sType*)come_null_check(cloner_187, "23interface.c", 117, 2331)), "23interface.c", 117, 2332))->mResultType;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(cloner_187, "23interface.c", 117, 2331)), "23interface.c", 117, 2332))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("23interface.c", 117, 2335),__exception_result_var_b186=((struct tuple1$1sTypeph*)(right_value220=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)(right_value218=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 117, "tuple1$1sTypeph"))), "23interface.c", 117, 2333))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=(come_push_stackframe("23interface.c", 117, 2334),__exception_result_var_b185=sType_clone(voidp_178), come_pop_stackframe(), __exception_result_var_b185))))))), come_pop_stackframe(), __exception_result_var_b186));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value218,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value220,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("23interface.c", 119, 2341),__exception_result_var_b188=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_177, "23interface.c", 119, 2336)), "23interface.c", 119, 2337))->mFields, "23interface.c", 119, 2338)), "23interface.c", 119, 2339)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value223=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value222=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 119, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 119, 2340),__exception_result_var_b187=((char*)(right_value221=__builtin_string("clone"))), come_pop_stackframe(), __exception_result_var_b187)),(struct sType*)come_increment_ref_count(cloner_187)))))), come_pop_stackframe(), __exception_result_var_b188);
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value222,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value223,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional31=(_Bool)1,        _while_condtional31) {
            (come_push_stackframe("23interface.c", 122,2342),parse_sharp_v5(info),come_pop_stackframe());
            multiple_assign_var4=(come_push_stackframe("23interface.c", 123, 2343),__exception_result_var_b189=((struct tuple2$2sTypephcharph*)(right_value224=parse_interface_function(info))), come_pop_stackframe(), __exception_result_var_b189);
            type2_190=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_191=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer3(right_value224,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("23interface.c", 124, 2344),__exception_result_var_b190=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b190);
            (come_push_stackframe("23interface.c", 126, 2349),__exception_result_var_b191=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_177, "23interface.c", 126, 2345)), "23interface.c", 126, 2346))->mFields, "23interface.c", 126, 2347)), "23interface.c", 126, 2348)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value226=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value225=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 126, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_191),(struct sType*)come_increment_ref_count(type2_190)))))), come_pop_stackframe(), __exception_result_var_b191);
            come_call_finalizer3(right_value225,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value226,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("23interface.c", 128,2350),parse_sharp_v5(info),come_pop_stackframe());
            if(_if_conditional245=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 130, 2351)), "23interface.c", 130, 2352))->p, "23interface.c", 130, 2353))==125,            _if_conditional245) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 131, 2354)), "23interface.c", 131, 2355))->p++;
                (come_push_stackframe("23interface.c", 132,2356),skip_spaces_and_lf(info),come_pop_stackframe());
                come_call_finalizer3(type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_191 = come_decrement_ref_count2(name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            (come_push_stackframe("23interface.c", 135,2357),parse_sharp_v5(info),come_pop_stackframe());
            come_call_finalizer3(type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_191 = come_decrement_ref_count2(name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        source_tail_192=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 138, 2358)), "23interface.c", 138, 2359))->p;
        header_193=(struct buffer*)come_increment_ref_count((come_push_stackframe("23interface.c", 140, 2361),__exception_result_var_b192=((struct buffer*)(right_value228=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value227=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 140, "buffer"))), "23interface.c", 140, 2360)))))), come_pop_stackframe(), __exception_result_var_b192));
        come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value228,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("23interface.c", 141, 2364),__exception_result_var_b193=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_193, "23interface.c", 141, 2362)), "23interface.c", 141, 2363)),"interface "), come_pop_stackframe(), __exception_result_var_b193);
        (come_push_stackframe("23interface.c", 142, 2367),__exception_result_var_b194=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_193, "23interface.c", 142, 2365)), "23interface.c", 142, 2366)),source_head_174,source_tail_192-source_head_174), come_pop_stackframe(), __exception_result_var_b194);
        (come_push_stackframe("23interface.c", 144,2371),add_come_code_at_come_header(info,"%s\n",(come_push_stackframe("23interface.c", 144, 2370),__exception_result_var_b195=((char*)(right_value229=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_193, "23interface.c", 144, 2368)), "23interface.c", 144, 2369))))), come_pop_stackframe(), __exception_result_var_b195)),come_pop_stackframe());
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23interface.c", 146, "struct sNode");
        _inf_obj_value1=come_increment_ref_count((come_push_stackframe("23interface.c", 146, 2374),__exception_result_var_b197=((struct sInterfaceNode*)(right_value232=sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)(right_value230=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 146, "sInterfaceNode"))), "23interface.c", 146, 2372))),(char*)come_increment_ref_count((come_push_stackframe("23interface.c", 146, 2373),__exception_result_var_b196=((char*)(right_value231=__builtin_string(type_name_176))), come_pop_stackframe(), __exception_result_var_b196)),(struct sClass*)come_increment_ref_count(klass_177),output_175,info))), come_pop_stackframe(), __exception_result_var_b197));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        __result137__ = __result_obj__ = ((struct sNode*)(right_value237=_inf_value1));
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
        return __result137__;
        type_name_176 = come_decrement_ref_count2(type_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(klass_177,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(voidp_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(finalizer_182,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cloner_187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_193,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result138__ = __result_obj__ = (come_push_stackframe("23interface.c", 149, 2416),__exception_result_var_b201=((struct sNode*)(right_value238=top_level_v91(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b201);
    if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result138__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional241;
int __result129__;
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional241=self==((void*)0),                _if_conditional241) {
                    __result129__ = 0;
                    return __result129__;
                }
                __result130__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 360, 2217)), "./neo-c.h", 360, 2218))->len;
                return __result130__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional243;
void* right_value189;
struct list_item$1tuple2$2charphsTypephph* litem_179;
struct tuple2$2charphsTypeph* __dec_obj68;
_Bool _if_conditional244;
void* right_value190;
struct list_item$1tuple2$2charphsTypephph* litem_180;
struct tuple2$2charphsTypeph* __dec_obj69;
void* right_value191;
struct list_item$1tuple2$2charphsTypephph* litem_181;
struct tuple2$2charphsTypeph* __dec_obj70;
struct list$1tuple2$2charphsTypephph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value190 = (void*)0;
memset(&litem_180, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value191 = (void*)0;
memset(&litem_181, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(_if_conditional243=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 222, 2229)), "./neo-c.h", 222, 2230))->len==0,            _if_conditional243) {
                litem_179=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value189=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(right_value189,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_179, "./neo-c.h", 225, 2231)), "./neo-c.h", 225, 2232))->prev=((void*)0);
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_179, "./neo-c.h", 226, 2233)), "./neo-c.h", 226, 2234))->next=((void*)0);
                __dec_obj68=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_179, "./neo-c.h", 227, 2235)), "./neo-c.h", 227, 2236))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_179, "./neo-c.h", 227, 2235)), "./neo-c.h", 227, 2236))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj68,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 229, 2237)), "./neo-c.h", 229, 2238))->tail=litem_179;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 230, 2239)), "./neo-c.h", 230, 2240))->head=litem_179;
            }
            else {
                if(_if_conditional244=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 232, 2241)), "./neo-c.h", 232, 2242))->len==1,                _if_conditional244) {
                    litem_180=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value190=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value190,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_180, "./neo-c.h", 235, 2243)), "./neo-c.h", 235, 2244))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 235, 2245)), "./neo-c.h", 235, 2246))->head;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_180, "./neo-c.h", 236, 2247)), "./neo-c.h", 236, 2248))->next=((void*)0);
                    __dec_obj69=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_180, "./neo-c.h", 237, 2249)), "./neo-c.h", 237, 2250))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_180, "./neo-c.h", 237, 2249)), "./neo-c.h", 237, 2250))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj69,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 239, 2251)), "./neo-c.h", 239, 2252))->tail=litem_180;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 240, 2253)), "./neo-c.h", 240, 2254))->head, "./neo-c.h", 240, 2255)), "./neo-c.h", 240, 2256))->next=litem_180;
                }
                else {
                    litem_181=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value191=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value191,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_181, "./neo-c.h", 245, 2257)), "./neo-c.h", 245, 2258))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 245, 2259)), "./neo-c.h", 245, 2260))->tail;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_181, "./neo-c.h", 246, 2261)), "./neo-c.h", 246, 2262))->next=((void*)0);
                    __dec_obj70=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_181, "./neo-c.h", 247, 2263)), "./neo-c.h", 247, 2264))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_181, "./neo-c.h", 247, 2263)), "./neo-c.h", 247, 2264))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj70,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 249, 2265)), "./neo-c.h", 249, 2266))->tail, "./neo-c.h", 249, 2267)), "./neo-c.h", 249, 2268))->next=litem_181;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 250, 2269)), "./neo-c.h", 250, 2270))->tail=litem_181;
                }
            }
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 253, 2271)), "./neo-c.h", 253, 2272))->len++;
            __result131__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result131__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj71;
struct sType* __dec_obj72;
struct tuple2$2charphsTypeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj71=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 2274)), "./neo-c.h", 1744, 2275))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 2274)), "./neo-c.h", 1744, 2275))->v1=(char*)come_increment_ref_count(v1);
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj72=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 2276)), "./neo-c.h", 1745, 2277))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 2276)), "./neo-c.h", 1745, 2277))->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result132__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result132__;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__;
int i_184;
struct list$1sTypeph* __exception_result_var_b175;
struct list$1sTypeph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_184, 0, sizeof(int));
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 109, 2284)), "./neo-c.h", 109, 2285))->head=((void*)0);
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 110, 2286)), "./neo-c.h", 110, 2287))->tail=((void*)0);
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 111, 2288)), "./neo-c.h", 111, 2289))->len=0;
            for(            i_184=0;            i_184<num_value;            i_184++            ){
                (come_push_stackframe("./neo-c.h", 114, 2293),__exception_result_var_b175=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 114, 2290)), "./neo-c.h", 114, 2291)),((struct sType**)come_null_check(values, "./neo-c.h", 114, 2292))[i_184]), come_pop_stackframe(), __exception_result_var_b175);
            }
            __result133__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result133__;
            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__;
int i_186;
struct list$1charph* __exception_result_var_b177;
struct list$1charph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_186, 0, sizeof(int));
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 109, 2297)), "./neo-c.h", 109, 2298))->head=((void*)0);
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 110, 2299)), "./neo-c.h", 110, 2300))->tail=((void*)0);
            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 111, 2301)), "./neo-c.h", 111, 2302))->len=0;
            for(            i_186=0;            i_186<num_value;            i_186++            ){
                (come_push_stackframe("./neo-c.h", 114, 2306),__exception_result_var_b177=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 114, 2303)), "./neo-c.h", 114, 2304)),((char**)come_null_check(values, "./neo-c.h", 114, 2305))[i_186]), come_pop_stackframe(), __exception_result_var_b177);
            }
            __result134__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result134__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
void* __result_obj__;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional246=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0, 2375)), "sInterfaceNode_finalize", 0, 2376))->sname!=((void*)0),            _if_conditional246) {
                ((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0, 2377)), "sInterfaceNode_finalize", 0, 2378))->sname = come_decrement_ref_count2(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0, 2377)), "sInterfaceNode_finalize", 0, 2378))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional247=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1, 2379)), "sInterfaceNode_finalize", 1, 2380))->name!=((void*)0),            _if_conditional247) {
                ((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1, 2381)), "sInterfaceNode_finalize", 1, 2382))->name = come_decrement_ref_count2(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1, 2381)), "sInterfaceNode_finalize", 1, 2382))->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional248=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2, 2383)), "sInterfaceNode_finalize", 2, 2384))->klass!=((void*)0),            _if_conditional248) {
                come_call_finalizer3(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2, 2385)), "sInterfaceNode_finalize", 2, 2386))->klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
void* __result_obj__;
_Bool _if_conditional249;
struct sInterfaceNode* __result135__;
void* right_value233;
struct sInterfaceNode* result_194;
_Bool _if_conditional250;
_Bool _if_conditional251;
char* __exception_result_var_b198;
void* right_value234;
char* __dec_obj79;
_Bool _if_conditional252;
char* __exception_result_var_b199;
void* right_value235;
char* __dec_obj80;
_Bool _if_conditional253;
struct sClass* __exception_result_var_b200;
void* right_value236;
struct sClass* __dec_obj81;
_Bool _if_conditional254;
struct sInterfaceNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
memset(&result_194, 0, sizeof(struct sInterfaceNode*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
            if(_if_conditional249=self==(void*)0,            _if_conditional249) {
                __result135__ = __result_obj__ = (void*)0;
                return __result135__;
            }
            result_194=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value233=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3, "sInterfaceNode"))));
            come_call_finalizer3(right_value233,sInterfaceNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional250=self!=((void*)0),            _if_conditional250) {
                ((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(result_194, "sInterfaceNode_clone", 4, 2387)), "sInterfaceNode_clone", 4, 2388))->sline=((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 4, 2389)), "sInterfaceNode_clone", 4, 2390))->sline;
            }
            if(_if_conditional251=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 5, 2391)), "sInterfaceNode_clone", 5, 2392))->sname!=((void*)0),            _if_conditional251) {
                __dec_obj79=((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(result_194, "sInterfaceNode_clone", 5, 2393)), "sInterfaceNode_clone", 5, 2394))->sname;
                ((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(result_194, "sInterfaceNode_clone", 5, 2393)), "sInterfaceNode_clone", 5, 2394))->sname=(char*)come_increment_ref_count(((char*)(right_value234=(come_push_stackframe("sInterfaceNode_clone", 5, 2397),__exception_result_var_b198=string_clone(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 5, 2395)), "sInterfaceNode_clone", 5, 2396))->sname), come_pop_stackframe(), __exception_result_var_b198))));
                __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional252=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 6, 2398)), "sInterfaceNode_clone", 6, 2399))->name!=((void*)0),            _if_conditional252) {
                __dec_obj80=((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(result_194, "sInterfaceNode_clone", 6, 2400)), "sInterfaceNode_clone", 6, 2401))->name;
                ((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(result_194, "sInterfaceNode_clone", 6, 2400)), "sInterfaceNode_clone", 6, 2401))->name=(char*)come_increment_ref_count(((char*)(right_value235=(come_push_stackframe("sInterfaceNode_clone", 6, 2404),__exception_result_var_b199=string_clone(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 6, 2402)), "sInterfaceNode_clone", 6, 2403))->name), come_pop_stackframe(), __exception_result_var_b199))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional253=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 7, 2405)), "sInterfaceNode_clone", 7, 2406))->klass!=((void*)0),            _if_conditional253) {
                __dec_obj81=((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(result_194, "sInterfaceNode_clone", 7, 2407)), "sInterfaceNode_clone", 7, 2408))->klass;
                ((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(result_194, "sInterfaceNode_clone", 7, 2407)), "sInterfaceNode_clone", 7, 2408))->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value236=(come_push_stackframe("sInterfaceNode_clone", 7, 2411),__exception_result_var_b200=sClass_clone(((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 7, 2409)), "sInterfaceNode_clone", 7, 2410))->klass), come_pop_stackframe(), __exception_result_var_b200))));
                come_call_finalizer3(__dec_obj81,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value236,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional254=self!=((void*)0),            _if_conditional254) {
                ((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(result_194, "sInterfaceNode_clone", 8, 2412)), "sInterfaceNode_clone", 8, 2413))->mOutput=((struct sInterfaceNode*)come_null_check(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 8, 2414)), "sInterfaceNode_clone", 8, 2415))->mOutput;
            }
            __result136__ = __result_obj__ = result_194;
            come_call_finalizer3(result_194,sInterfaceNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result136__;
            come_call_finalizer3(result_194,sInterfaceNode_finalize, 0, 0, 0, 0, (void*)0);
}

