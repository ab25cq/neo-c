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
struct sUnionNode
{
    int sline;
    char* sname;
    struct sType* mType;
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

struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, _Bool output, struct sInfo* info);

_Bool sUnionNode_terminated(struct sUnionNode* self);

char* sUnionNode_kind(struct sUnionNode* self);

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
struct sNode* parse_union(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info);

static void sUnionNode_finalize(struct sUnionNode* self);
static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info);

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










struct sUnionNode* sUnionNode_initialize(struct sUnionNode* self, struct sType* type, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
struct sType* __exception_result_var_b75;
void* right_value115;
struct sType* __dec_obj35;
void* right_value122;
char* __exception_result_var_b107;
struct sType* __exception_result_var_b108;
void* right_value123;
struct map$2charphsTypeph* __exception_result_var_b109;
struct sUnionNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value115 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
    (come_push_stackframe("15union.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "15union.c", 7, 573)), "15union.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj35=((struct sUnionNode*)come_null_check(self, "15union.c", 9, 580))->mType;
    ((struct sUnionNode*)come_null_check(self, "15union.c", 9, 580))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=(come_push_stackframe("15union.c", 9, 1170),__exception_result_var_b75=sType_clone(type), come_pop_stackframe(), __exception_result_var_b75))));
    come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value115,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("15union.c", 11, 1553),__exception_result_var_b109=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 11, 1171)), "15union.c", 11, 1172))->types, "15union.c", 11, 1173)), "15union.c", 11, 1174)),(char*)come_increment_ref_count((come_push_stackframe("15union.c", 11, 1551),__exception_result_var_b107=((char*)(right_value122=__builtin_string(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "15union.c", 11, 1547)), "15union.c", 11, 1548))->mClass, "15union.c", 11, 1549)), "15union.c", 11, 1550))->mName))), come_pop_stackframe(), __exception_result_var_b107)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=(come_push_stackframe("15union.c", 11, 1552),__exception_result_var_b108=sType_clone(type), come_pop_stackframe(), __exception_result_var_b108))))), come_pop_stackframe(), __exception_result_var_b109);
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value123,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sUnionNode*)come_null_check(self, "15union.c", 13, 1554))->mOutput=output;
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sUnionNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result94__;
    come_call_finalizer3(self,sUnionNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sUnionNode_terminated(struct sUnionNode* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = (_Bool)1;
    return __result95__;
}

char* sUnionNode_kind(struct sUnionNode* self){
void* __result_obj__;
void* right_value124;
char* __exception_result_var_b110;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    __result96__ = __result_obj__ = (come_push_stackframe("15union.c", 23, 1563),__exception_result_var_b110=((char*)(right_value124=__builtin_string("sUnionNode"))), come_pop_stackframe(), __exception_result_var_b110);
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

_Bool sUnionNode_compile(struct sUnionNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_121;
struct sClass* klass_122;
_Bool _if_conditional164;
int __exception_result_var_b111;
_Bool _if_conditional166;
void* right_value125;
void* right_value126;
struct buffer* __exception_result_var_b112;
struct buffer* buf_123;
void* right_value127;
char* __exception_result_var_b113;
struct buffer* __exception_result_var_b114;
struct list$1tuple2$2charphsTypephph* o2_saved_124;
struct tuple2$2charphsTypeph* __exception_result_var_b117;
struct tuple2$2charphsTypeph* it_127;
_Bool __exception_result_var_b118;
struct tuple2$2charphsTypeph* __exception_result_var_b121;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_130;
struct sType* type_131;
void* right_value128;
char* __exception_result_var_b122;
struct buffer* __exception_result_var_b123;
struct buffer* __exception_result_var_b124;
void* right_value129;
char* __exception_result_var_b125;
struct buffer* __exception_result_var_b126;
_Bool __exception_result_var_b127;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value130;
char* __exception_result_var_b128;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_121, 0, sizeof(struct sType*));
memset(&klass_122, 0, sizeof(struct sClass*));
right_value125 = (void*)0;
right_value126 = (void*)0;
memset(&buf_123, 0, sizeof(struct buffer*));
right_value127 = (void*)0;
memset(&o2_saved_124, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_127, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    type_121=((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "15union.c", 28, 1564)), "15union.c", 28, 1565))->mType;
    klass_122=((struct sType*)come_null_check(((struct sType*)come_null_check(type_121, "15union.c", 29, 1566)), "15union.c", 29, 1567))->mClass;
    if(_if_conditional164=!((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_122, "15union.c", 31, 1568)), "15union.c", 31, 1569))->mOutputed,    _if_conditional164) {
        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_122, "15union.c", 32, 1570)), "15union.c", 32, 1571))->mOutputed=(_Bool)1;
        if(_if_conditional166=(come_push_stackframe("15union.c", 34, 1578),__exception_result_var_b111=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_122, "15union.c", 34, 1572)), "15union.c", 34, 1573))->mFields, "15union.c", 34, 1574)), "15union.c", 34, 1575))), come_pop_stackframe(), __exception_result_var_b111)>0,        _if_conditional166) {
            buf_123=(struct buffer*)come_increment_ref_count((come_push_stackframe("15union.c", 35, 1580),__exception_result_var_b112=((struct buffer*)(right_value126=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value125=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "15union.c", 35, "buffer"))), "15union.c", 35, 1579)))))), come_pop_stackframe(), __exception_result_var_b112));
            come_call_finalizer3(right_value125,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value126,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("15union.c", 37, 1588),__exception_result_var_b114=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_123, "15union.c", 37, 1581)), "15union.c", 37, 1582)),(come_push_stackframe("15union.c", 37, 1587),__exception_result_var_b113=((char*)(right_value127=xsprintf("union %s\n{\n",((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type_121, "15union.c", 37, 1583)), "15union.c", 37, 1584))->mClass, "15union.c", 37, 1585)), "15union.c", 37, 1586))->mName))), come_pop_stackframe(), __exception_result_var_b113)), come_pop_stackframe(), __exception_result_var_b114);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_124=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_122, "15union.c", 39, 1589)), "15union.c", 39, 1590))->mFields)),it_127=(come_push_stackframe("15union.c", 39, 1605),__exception_result_var_b117=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_124), "15union.c", 39, 1591)), "15union.c", 39, 1592))), come_pop_stackframe(), __exception_result_var_b117);            !(come_push_stackframe("15union.c", 39, 1610),__exception_result_var_b118=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_124), "15union.c", 39, 1606)), "15union.c", 39, 1607))), come_pop_stackframe(), __exception_result_var_b118);            it_127=(come_push_stackframe("15union.c", 39, 1629),__exception_result_var_b121=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_124), "15union.c", 39, 1611)), "15union.c", 39, 1612))), come_pop_stackframe(), __exception_result_var_b121)            ){
                multiple_assign_var1=it_127;
                name_130=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                type_131=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
                (come_push_stackframe("15union.c", 42, 1633),__exception_result_var_b123=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_123, "15union.c", 42, 1630)), "15union.c", 42, 1631)),(come_push_stackframe("15union.c", 42, 1632),__exception_result_var_b122=((char*)(right_value128=make_define_var(type_131,name_130,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b122)), come_pop_stackframe(), __exception_result_var_b123);
                right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("15union.c", 43, 1636),__exception_result_var_b124=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_123, "15union.c", 43, 1634)), "15union.c", 43, 1635)),";\n"), come_pop_stackframe(), __exception_result_var_b124);
                name_130 = come_decrement_ref_count2(name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_124,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("15union.c", 46, 1656),__exception_result_var_b126=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_123, "15union.c", 46, 1653)), "15union.c", 46, 1654)),(come_push_stackframe("15union.c", 46, 1655),__exception_result_var_b125=((char*)(right_value129=xsprintf("};\n"))), come_pop_stackframe(), __exception_result_var_b125)), come_pop_stackframe(), __exception_result_var_b126);
            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional174=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 48, 1657)), "15union.c", 48, 1658))->output_header_file&&(come_push_stackframe("15union.c", 48, 1663),__exception_result_var_b127=string_operator_not_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_122, "15union.c", 48, 1659)), "15union.c", 48, 1660))->mDeclareSName,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 48, 1661)), "15union.c", 48, 1662))->base_sname), come_pop_stackframe(), __exception_result_var_b127),            _if_conditional174) {
            }
            else {
                if(((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "15union.c", 51, 1664)), "15union.c", 51, 1665))->mOutput) {
                    (come_push_stackframe("15union.c", 52,1669),add_come_code_at_source_head(info,"%s",(come_push_stackframe("15union.c", 52, 1668),__exception_result_var_b128=((char*)(right_value130=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_123, "15union.c", 52, 1666)), "15union.c", 52, 1667))))), come_pop_stackframe(), __exception_result_var_b128)),come_pop_stackframe());
                    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result106__ = (_Bool)1;
    return __result106__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 576)), "sNodeBase_finalize", 0, 577))->sname!=((void*)0),        _if_conditional19) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* __result52__;
void* right_value80;
struct sType* result_47;
_Bool _if_conditional38;
_Bool _if_conditional39;
struct list$1sTypeph* __exception_result_var_b55;
void* right_value87;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __exception_result_var_b57;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional47;
struct tuple1$1sTypeph* __exception_result_var_b58;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
char* __exception_result_var_b59;
void* right_value92;
char* __dec_obj19;
_Bool _if_conditional49;
struct list$1sTypeph* __exception_result_var_b60;
void* right_value93;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional50;
struct list$1sNodeph* __exception_result_var_b64;
void* right_value101;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional63;
_Bool _if_conditional64;
struct list$1sTypeph* __exception_result_var_b65;
void* right_value102;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional65;
struct list$1charph* __exception_result_var_b69;
void* right_value109;
struct list$1charph* __dec_obj29;
_Bool _if_conditional69;
struct tuple1$1sTypeph* __exception_result_var_b70;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct sNode* __exception_result_var_b71;
void* right_value111;
struct sNode* __dec_obj31;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
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
struct sNode* __exception_result_var_b72;
void* right_value112;
struct sNode* __dec_obj32;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
char* __exception_result_var_b73;
void* right_value113;
char* __dec_obj33;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
char* __exception_result_var_b74;
void* right_value114;
char* __dec_obj34;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value87 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
        if(_if_conditional20=self==(void*)0,        _if_conditional20) {
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value80,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional38=self!=((void*)0),        _if_conditional38) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 4, 661)), "sType_clone", 4, 662))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 663)), "sType_clone", 4, 664))->mClass;
        }
        if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 665)), "sType_clone", 5, 666))->mMultipleTypes!=((void*)0),        _if_conditional39) {
            __dec_obj15=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 5, 667)), "sType_clone", 5, 668))->mMultipleTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 5, 667)), "sType_clone", 5, 668))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=(come_push_stackframe("sType_clone", 5, 734),__exception_result_var_b55=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 669)), "sType_clone", 5, 670))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b55))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 739)), "sType_clone", 6, 740))->mNoSolvedGenericsType!=((void*)0),        _if_conditional43) {
            __dec_obj17=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 6, 741)), "sType_clone", 6, 742))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 6, 741)), "sType_clone", 6, 742))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(come_push_stackframe("sType_clone", 6, 756),__exception_result_var_b57=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 743)), "sType_clone", 6, 744))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b57))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 757)), "sType_clone", 7, 758))->mOriginalLoadVarType!=((void*)0),        _if_conditional47) {
            __dec_obj18=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 7, 759)), "sType_clone", 7, 760))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 7, 759)), "sType_clone", 7, 760))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(come_push_stackframe("sType_clone", 7, 763),__exception_result_var_b58=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 761)), "sType_clone", 7, 762))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b58))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 764)), "sType_clone", 8, 765))->mGenericsName!=((void*)0),        _if_conditional48) {
            __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 8, 766)), "sType_clone", 8, 767))->mGenericsName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 8, 766)), "sType_clone", 8, 767))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value92=(come_push_stackframe("sType_clone", 8, 770),__exception_result_var_b59=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 768)), "sType_clone", 8, 769))->mGenericsName), come_pop_stackframe(), __exception_result_var_b59))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 771)), "sType_clone", 9, 772))->mGenericsTypes!=((void*)0),        _if_conditional49) {
            __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 9, 773)), "sType_clone", 9, 774))->mGenericsTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 9, 773)), "sType_clone", 9, 774))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=(come_push_stackframe("sType_clone", 9, 777),__exception_result_var_b60=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 775)), "sType_clone", 9, 776))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b60))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 778)), "sType_clone", 10, 779))->mArrayNum!=((void*)0),        _if_conditional50) {
            __dec_obj24=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 10, 780)), "sType_clone", 10, 781))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 10, 780)), "sType_clone", 10, 781))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value101=(come_push_stackframe("sType_clone", 10, 881),__exception_result_var_b64=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 782)), "sType_clone", 10, 783))->mArrayNum), come_pop_stackframe(), __exception_result_var_b64))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 11, 886)), "sType_clone", 11, 887))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 888)), "sType_clone", 11, 889))->mOmitArrayNum;
        }
        if(_if_conditional64=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 890)), "sType_clone", 12, 891))->mParamTypes!=((void*)0),        _if_conditional64) {
            __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 12, 892)), "sType_clone", 12, 893))->mParamTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 12, 892)), "sType_clone", 12, 893))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=(come_push_stackframe("sType_clone", 12, 896),__exception_result_var_b65=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 894)), "sType_clone", 12, 895))->mParamTypes), come_pop_stackframe(), __exception_result_var_b65))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value102,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 897)), "sType_clone", 13, 898))->mParamNames!=((void*)0),        _if_conditional65) {
            __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 13, 899)), "sType_clone", 13, 900))->mParamNames;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 13, 899)), "sType_clone", 13, 900))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=(come_push_stackframe("sType_clone", 13, 966),__exception_result_var_b69=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 901)), "sType_clone", 13, 902))->mParamNames), come_pop_stackframe(), __exception_result_var_b69))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 971)), "sType_clone", 14, 972))->mResultType!=((void*)0),        _if_conditional69) {
            __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 14, 973)), "sType_clone", 14, 974))->mResultType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 14, 973)), "sType_clone", 14, 974))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=(come_push_stackframe("sType_clone", 14, 977),__exception_result_var_b70=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 975)), "sType_clone", 14, 976))->mResultType), come_pop_stackframe(), __exception_result_var_b70))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value110,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 15, 978)), "sType_clone", 15, 979))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 980)), "sType_clone", 15, 981))->mVarArgs;
        }
        if(_if_conditional71=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 982)), "sType_clone", 16, 983))->mAlignas!=((void*)0),        _if_conditional71) {
            __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 16, 984)), "sType_clone", 16, 985))->mAlignas;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 16, 984)), "sType_clone", 16, 985))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=(come_push_stackframe("sType_clone", 16, 988),__exception_result_var_b71=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 986)), "sType_clone", 16, 987))->mAlignas), come_pop_stackframe(), __exception_result_var_b71))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 17, 989)), "sType_clone", 17, 990))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 991)), "sType_clone", 17, 992))->mUnsigned;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 18, 993)), "sType_clone", 18, 994))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 995)), "sType_clone", 18, 996))->mShort;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 19, 997)), "sType_clone", 19, 998))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 999)), "sType_clone", 19, 1000))->mLong;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 20, 1001)), "sType_clone", 20, 1002))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1003)), "sType_clone", 20, 1004))->mLongLong;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 21, 1005)), "sType_clone", 21, 1006))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1007)), "sType_clone", 21, 1008))->mConstant;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 22, 1009)), "sType_clone", 22, 1010))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1011)), "sType_clone", 22, 1012))->mRegister;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 23, 1013)), "sType_clone", 23, 1014))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1015)), "sType_clone", 23, 1016))->mVolatile;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 24, 1017)), "sType_clone", 24, 1018))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1019)), "sType_clone", 24, 1020))->mStatic;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 25, 1021)), "sType_clone", 25, 1022))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1023)), "sType_clone", 25, 1024))->mUniq;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 26, 1025)), "sType_clone", 26, 1026))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1027)), "sType_clone", 26, 1028))->mRecord;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 27, 1029)), "sType_clone", 27, 1030))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1031)), "sType_clone", 27, 1032))->mExtern;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 28, 1033)), "sType_clone", 28, 1034))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1035)), "sType_clone", 28, 1036))->mRestrict;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 29, 1037)), "sType_clone", 29, 1038))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1039)), "sType_clone", 29, 1040))->mImmutable;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 30, 1041)), "sType_clone", 30, 1042))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1043)), "sType_clone", 30, 1044))->mHeap;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 31, 1045)), "sType_clone", 31, 1046))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1047)), "sType_clone", 31, 1048))->mDummyHeap;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 32, 1049)), "sType_clone", 32, 1050))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1051)), "sType_clone", 32, 1052))->mDelegate;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 33, 1053)), "sType_clone", 33, 1054))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1055)), "sType_clone", 33, 1056))->mShare;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 34, 1057)), "sType_clone", 34, 1058))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1059)), "sType_clone", 34, 1060))->mClone;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 35, 1061)), "sType_clone", 35, 1062))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1063)), "sType_clone", 35, 1064))->mNoHeap;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 36, 1065)), "sType_clone", 36, 1066))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1067)), "sType_clone", 36, 1068))->mNoCallingDestructor;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 37, 1069)), "sType_clone", 37, 1070))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1071)), "sType_clone", 37, 1072))->mRefference;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 38, 1073)), "sType_clone", 38, 1074))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1075)), "sType_clone", 38, 1076))->mException;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 39, 1077)), "sType_clone", 39, 1078))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1079)), "sType_clone", 39, 1080))->mPointerNum;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 40, 1081)), "sType_clone", 40, 1082))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1083)), "sType_clone", 40, 1084))->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 41, 1085)), "sType_clone", 41, 1086))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1087)), "sType_clone", 41, 1088))->mNoArrayPointerNum;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 42, 1089)), "sType_clone", 42, 1090))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1091)), "sType_clone", 42, 1092))->mTypedefOriginalPointerNum;
        }
        if(_if_conditional98=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1093)), "sType_clone", 43, 1094))->mSizeNum!=((void*)0),        _if_conditional98) {
            __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 43, 1095)), "sType_clone", 43, 1096))->mSizeNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 43, 1095)), "sType_clone", 43, 1096))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=(come_push_stackframe("sType_clone", 43, 1099),__exception_result_var_b72=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1097)), "sType_clone", 43, 1098))->mSizeNum), come_pop_stackframe(), __exception_result_var_b72))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 44, 1100)), "sType_clone", 44, 1101))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1102)), "sType_clone", 44, 1103))->mDynamicArrayNum;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 45, 1104)), "sType_clone", 45, 1105))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1106)), "sType_clone", 45, 1107))->mTypeOfExpression;
        }
        if(_if_conditional101=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1108)), "sType_clone", 46, 1109))->mOriginalTypeName!=((void*)0),        _if_conditional101) {
            __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 46, 1110)), "sType_clone", 46, 1111))->mOriginalTypeName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 46, 1110)), "sType_clone", 46, 1111))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value113=(come_push_stackframe("sType_clone", 46, 1114),__exception_result_var_b73=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1112)), "sType_clone", 46, 1113))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b73))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 47, 1115)), "sType_clone", 47, 1116))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1117)), "sType_clone", 47, 1118))->mOriginalPointerNum;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 48, 1119)), "sType_clone", 48, 1120))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1121)), "sType_clone", 48, 1122))->mFunctionParam;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 49, 1123)), "sType_clone", 49, 1124))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1125)), "sType_clone", 49, 1126))->mAllocaValue;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 50, 1127)), "sType_clone", 50, 1128))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1129)), "sType_clone", 50, 1130))->mGenericsStruct;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 51, 1131)), "sType_clone", 51, 1132))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1133)), "sType_clone", 51, 1134))->mSolvedGenericsName;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 52, 1135)), "sType_clone", 52, 1136))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1137)), "sType_clone", 52, 1138))->mComeMemCore;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 53, 1139)), "sType_clone", 53, 1140))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1141)), "sType_clone", 53, 1142))->mInline;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 54, 1143)), "sType_clone", 54, 1144))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1145)), "sType_clone", 54, 1146))->mNullValue;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 55, 1147)), "sType_clone", 55, 1148))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1149)), "sType_clone", 55, 1150))->mGuardValue;
        }
        if(_if_conditional111=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1151)), "sType_clone", 56, 1152))->mAsmName!=((void*)0),        _if_conditional111) {
            __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 56, 1153)), "sType_clone", 56, 1154))->mAsmName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 56, 1153)), "sType_clone", 56, 1154))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value114=(come_push_stackframe("sType_clone", 56, 1157),__exception_result_var_b74=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1155)), "sType_clone", 56, 1156))->mAsmName), come_pop_stackframe(), __exception_result_var_b74))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 57, 1158)), "sType_clone", 57, 1159))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1160)), "sType_clone", 57, 1161))->mArrayPointerType;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 58, 1162)), "sType_clone", 58, 1163))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1164)), "sType_clone", 58, 1165))->mLambdaArray;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 59, 1166)), "sType_clone", 59, 1167))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1168)), "sType_clone", 59, 1169))->mNoNumberArray;
        }
        __result69__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 581)), "sType_finalize", 0, 582))->mMultipleTypes!=((void*)0),            _if_conditional21) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 583)), "sType_finalize", 0, 584))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 593)), "sType_finalize", 1, 594))->mNoSolvedGenericsType!=((void*)0),            _if_conditional23) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 595)), "sType_finalize", 1, 596))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 601)), "sType_finalize", 2, 602))->mOriginalLoadVarType!=((void*)0),            _if_conditional25) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 603)), "sType_finalize", 2, 604))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 605)), "sType_finalize", 3, 606))->mGenericsName!=((void*)0),            _if_conditional26) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 607)), "sType_finalize", 3, 608))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 607)), "sType_finalize", 3, 608))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 609)), "sType_finalize", 4, 610))->mGenericsTypes!=((void*)0),            _if_conditional27) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 611)), "sType_finalize", 4, 612))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 613)), "sType_finalize", 5, 614))->mArrayNum!=((void*)0),            _if_conditional28) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 615)), "sType_finalize", 5, 616))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 625)), "sType_finalize", 6, 626))->mParamTypes!=((void*)0),            _if_conditional30) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 627)), "sType_finalize", 6, 628))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 629)), "sType_finalize", 7, 630))->mParamNames!=((void*)0),            _if_conditional31) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 631)), "sType_finalize", 7, 632))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 641)), "sType_finalize", 8, 642))->mResultType!=((void*)0),            _if_conditional33) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 643)), "sType_finalize", 8, 644))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 645)), "sType_finalize", 9, 646))->mAlignas!=((void*)0),            _if_conditional34) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 647)), "sType_finalize", 9, 648))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 647)), "sType_finalize", 9, 648))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 647)), "sType_finalize", 9, 648))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 647)), "sType_finalize", 9, 648))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 647)), "sType_finalize", 9, 648))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 649)), "sType_finalize", 10, 650))->mSizeNum!=((void*)0),            _if_conditional35) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 651)), "sType_finalize", 10, 652))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 651)), "sType_finalize", 10, 652))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 651)), "sType_finalize", 10, 652))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 651)), "sType_finalize", 10, 652))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 651)), "sType_finalize", 10, 652))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 653)), "sType_finalize", 11, 654))->mOriginalTypeName!=((void*)0),            _if_conditional36) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 655)), "sType_finalize", 11, 656))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 655)), "sType_finalize", 11, 656))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 657)), "sType_finalize", 12, 658))->mAsmName!=((void*)0),            _if_conditional37) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 659)), "sType_finalize", 12, 660))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 659)), "sType_finalize", 12, 660))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                    it_48=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 585)), "./neo-c.h", 120, 586))->head;
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        prev_it_49=it_48;
                        it_48=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_48, "./neo-c.h", 123, 587)), "./neo-c.h", 123, 588))->next;
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional22=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 589)), "list_item$1sTypephp_finalize", 0, 590))->item!=((void*)0),                            _if_conditional22) {
                                come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 591)), "list_item$1sTypephp_finalize", 0, 592))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional24=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 597)), "tuple1$1sTypephp_finalize", 0, 598))->v1!=((void*)0),                    _if_conditional24) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 599)), "tuple1$1sTypephp_finalize", 0, 600))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    it_50=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 617)), "./neo-c.h", 120, 618))->head;
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        prev_it_51=it_50;
                        it_50=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_50, "./neo-c.h", 123, 619)), "./neo-c.h", 123, 620))->next;
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional29=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 621)), "list_item$1sNodephp_finalize", 0, 622))->item!=((void*)0),                            _if_conditional29) {
                                if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 623)), "list_item$1sNodephp_finalize", 0, 624))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 623)), "list_item$1sNodephp_finalize", 0, 624))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 623)), "list_item$1sNodephp_finalize", 0, 624))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 623)), "list_item$1sNodephp_finalize", 0, 624))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 623)), "list_item$1sNodephp_finalize", 0, 624))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                    it_52=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 633)), "./neo-c.h", 120, 634))->head;
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        prev_it_53=it_52;
                        it_52=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_52, "./neo-c.h", 123, 635)), "./neo-c.h", 123, 636))->next;
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional32=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 637)), "list_item$1charphp_finalize", 0, 638))->item!=((void*)0),                            _if_conditional32) {
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 639)), "list_item$1charphp_finalize", 0, 640))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 639)), "list_item$1charphp_finalize", 0, 640))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sTypeph* __result53__;
void* right_value81;
void* right_value82;
struct list$1sTypeph* __exception_result_var_b52;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
struct sType* __exception_result_var_b53;
void* right_value86;
struct list$1sTypeph* __exception_result_var_b54;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_54=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 679),__exception_result_var_b52=((struct list$1sTypeph*)(right_value82=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 671)), "./neo-c.h", 139, 672)))))), come_pop_stackframe(), __exception_result_var_b52));
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_55=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 680)), "./neo-c.h", 141, 681))->head;
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    (come_push_stackframe("./neo-c.h", 143, 731),__exception_result_var_b54=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_54, "./neo-c.h", 143, 682)), "./neo-c.h", 143, 683)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(come_push_stackframe("./neo-c.h", 143, 730),__exception_result_var_b53=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_55, "./neo-c.h", 143, 728)), "./neo-c.h", 143, 729))->item), come_pop_stackframe(), __exception_result_var_b53))))), come_pop_stackframe(), __exception_result_var_b54);
                    come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_55=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_55, "./neo-c.h", 145, 732)), "./neo-c.h", 145, 733))->next;
                }
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 673)), "./neo-c.h", 101, 674))->head=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 675)), "./neo-c.h", 102, 676))->tail=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 677)), "./neo-c.h", 103, 678))->len=0;
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value83;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj12;
_Bool _if_conditional42;
void* right_value84;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj13;
void* right_value85;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional41=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 684)), "./neo-c.h", 152, 685))->len==0,                        _if_conditional41) {
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 155, 686)), "./neo-c.h", 155, 687))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 156, 688)), "./neo-c.h", 156, 689))->next=((void*)0);
                            __dec_obj12=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 157, 690)), "./neo-c.h", 157, 691))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 157, 690)), "./neo-c.h", 157, 691))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 692)), "./neo-c.h", 159, 693))->tail=litem_56;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 694)), "./neo-c.h", 160, 695))->head=litem_56;
                        }
                        else {
                            if(_if_conditional42=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 696)), "./neo-c.h", 162, 697))->len==1,                            _if_conditional42) {
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 165, 698)), "./neo-c.h", 165, 699))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 700)), "./neo-c.h", 165, 701))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 166, 702)), "./neo-c.h", 166, 703))->next=((void*)0);
                                __dec_obj13=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 167, 704)), "./neo-c.h", 167, 705))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 167, 704)), "./neo-c.h", 167, 705))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 706)), "./neo-c.h", 169, 707))->tail=litem_57;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 708)), "./neo-c.h", 170, 709))->head, "./neo-c.h", 170, 710)), "./neo-c.h", 170, 711))->next=litem_57;
                            }
                            else {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 175, 712)), "./neo-c.h", 175, 713))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 714)), "./neo-c.h", 175, 715))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 176, 716)), "./neo-c.h", 176, 717))->next=((void*)0);
                                __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 177, 718)), "./neo-c.h", 177, 719))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 177, 718)), "./neo-c.h", 177, 719))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 720)), "./neo-c.h", 179, 721))->tail, "./neo-c.h", 179, 722)), "./neo-c.h", 179, 723))->next=litem_58;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 724)), "./neo-c.h", 180, 725))->tail=litem_58;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 726)), "./neo-c.h", 183, 727))->len++;
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
                it_59=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 735)), "./neo-c.h", 120, 736))->head;
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    prev_it_60=it_59;
                    it_59=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_59, "./neo-c.h", 123, 737)), "./neo-c.h", 123, 738))->next;
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct tuple1$1sTypeph* __result57__;
void* right_value88;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional46;
struct sType* __exception_result_var_b56;
void* right_value89;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value89 = (void*)0;
                if(_if_conditional44=self==(void*)0,                _if_conditional44) {
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value88=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value88,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional46=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 749)), "tuple1$1sTypephp_clone", 4, 750))->v1!=((void*)0),                _if_conditional46) {
                    __dec_obj16=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_61, "tuple1$1sTypephp_clone", 4, 751)), "tuple1$1sTypephp_clone", 4, 752))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_61, "tuple1$1sTypephp_clone", 4, 751)), "tuple1$1sTypephp_clone", 4, 752))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 755),__exception_result_var_b56=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 753)), "tuple1$1sTypephp_clone", 4, 754))->v1), come_pop_stackframe(), __exception_result_var_b56))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result58__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional45=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 745)), "tuple1$1sTypeph_finalize", 0, 746))->v1!=((void*)0),                    _if_conditional45) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 747)), "tuple1$1sTypeph_finalize", 0, 748))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1sNodeph* __result59__;
void* right_value94;
void* right_value95;
struct list$1sNodeph* __exception_result_var_b61;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
struct sNode* __exception_result_var_b62;
void* right_value100;
struct list$1sNodeph* __exception_result_var_b63;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
                if(_if_conditional51=self==((void*)0),                _if_conditional51) {
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                result_62=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 792),__exception_result_var_b61=((struct list$1sNodeph*)(right_value95=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value94=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 784)), "./neo-c.h", 139, 785)))))), come_pop_stackframe(), __exception_result_var_b61));
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_63=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 793)), "./neo-c.h", 141, 794))->head;
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    (come_push_stackframe("./neo-c.h", 143, 878),__exception_result_var_b63=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_62, "./neo-c.h", 143, 795)), "./neo-c.h", 143, 796)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=(come_push_stackframe("./neo-c.h", 143, 877),__exception_result_var_b62=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_63, "./neo-c.h", 143, 841)), "./neo-c.h", 143, 842))->item), come_pop_stackframe(), __exception_result_var_b62))))), come_pop_stackframe(), __exception_result_var_b63);
                    if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_63=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_63, "./neo-c.h", 145, 879)), "./neo-c.h", 145, 880))->next;
                }
                __result64__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 786)), "./neo-c.h", 101, 787))->head=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 788)), "./neo-c.h", 102, 789))->tail=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 790)), "./neo-c.h", 103, 791))->len=0;
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj21;
_Bool _if_conditional53;
void* right_value97;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj22;
void* right_value98;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional52=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 797)), "./neo-c.h", 152, 798))->len==0,                        _if_conditional52) {
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 155, 799)), "./neo-c.h", 155, 800))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 156, 801)), "./neo-c.h", 156, 802))->next=((void*)0);
                            __dec_obj21=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 157, 803)), "./neo-c.h", 157, 804))->item;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 157, 803)), "./neo-c.h", 157, 804))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 805)), "./neo-c.h", 159, 806))->tail=litem_64;
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 807)), "./neo-c.h", 160, 808))->head=litem_64;
                        }
                        else {
                            if(_if_conditional53=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 809)), "./neo-c.h", 162, 810))->len==1,                            _if_conditional53) {
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 165, 811)), "./neo-c.h", 165, 812))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 813)), "./neo-c.h", 165, 814))->head;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 166, 815)), "./neo-c.h", 166, 816))->next=((void*)0);
                                __dec_obj22=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 167, 817)), "./neo-c.h", 167, 818))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 167, 817)), "./neo-c.h", 167, 818))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 819)), "./neo-c.h", 169, 820))->tail=litem_65;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 821)), "./neo-c.h", 170, 822))->head, "./neo-c.h", 170, 823)), "./neo-c.h", 170, 824))->next=litem_65;
                            }
                            else {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 175, 825)), "./neo-c.h", 175, 826))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 827)), "./neo-c.h", 175, 828))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 176, 829)), "./neo-c.h", 176, 830))->next=((void*)0);
                                __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 177, 831)), "./neo-c.h", 177, 832))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 177, 831)), "./neo-c.h", 177, 832))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 833)), "./neo-c.h", 179, 834))->tail, "./neo-c.h", 179, 835)), "./neo-c.h", 179, 836))->next=litem_66;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 837)), "./neo-c.h", 180, 838))->tail=litem_66;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 839)), "./neo-c.h", 183, 840))->len++;
                        __result61__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result61__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional54;
struct sNode* __result62__;
void* right_value99;
struct sNode* result_67;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        if(_if_conditional54=self==(void*)0,                        _if_conditional54) {
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional55=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 843)), "sNode_clone", 4, 844))->clone!=((void*)0),                        _if_conditional55) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 4, 845)), "sNode_clone", 4, 846))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 847)), "sNode_clone", 4, 848))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 847)), "sNode_clone", 4, 848))->_protocol_obj);
                        }
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 5, 849)), "sNode_clone", 5, 850))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 851)), "sNode_clone", 5, 852))->finalize;
                        }
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 6, 853)), "sNode_clone", 6, 854))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 855)), "sNode_clone", 6, 856))->clone;
                        }
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 7, 857)), "sNode_clone", 7, 858))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 859)), "sNode_clone", 7, 860))->compile;
                        }
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 8, 861)), "sNode_clone", 8, 862))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 863)), "sNode_clone", 8, 864))->sline;
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 9, 865)), "sNode_clone", 9, 866))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 867)), "sNode_clone", 9, 868))->sname;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 10, 869)), "sNode_clone", 10, 870))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 871)), "sNode_clone", 10, 872))->terminated;
                        }
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 11, 873)), "sNode_clone", 11, 874))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 875)), "sNode_clone", 11, 876))->kind;
                        }
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
                it_68=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 882)), "./neo-c.h", 120, 883))->head;
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    prev_it_69=it_68;
                    it_68=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_68, "./neo-c.h", 123, 884)), "./neo-c.h", 123, 885))->next;
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1charph* __result65__;
void* right_value103;
void* right_value104;
struct list$1charph* __exception_result_var_b66;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
char* __exception_result_var_b67;
void* right_value108;
struct list$1charph* __exception_result_var_b68;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
                if(_if_conditional66=self==((void*)0),                _if_conditional66) {
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                result_70=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 911),__exception_result_var_b66=((struct list$1charph*)(right_value104=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value103=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 903)), "./neo-c.h", 139, 904)))))), come_pop_stackframe(), __exception_result_var_b66));
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_71=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 912)), "./neo-c.h", 141, 913))->head;
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    (come_push_stackframe("./neo-c.h", 143, 963),__exception_result_var_b68=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_70, "./neo-c.h", 143, 914)), "./neo-c.h", 143, 915)),(char*)come_increment_ref_count(((char*)(right_value108=(come_push_stackframe("./neo-c.h", 143, 962),__exception_result_var_b67=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_71, "./neo-c.h", 143, 960)), "./neo-c.h", 143, 961))->item), come_pop_stackframe(), __exception_result_var_b67))))), come_pop_stackframe(), __exception_result_var_b68);
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_71=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_71, "./neo-c.h", 145, 964)), "./neo-c.h", 145, 965))->next;
                }
                __result68__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 905)), "./neo-c.h", 101, 906))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 907)), "./neo-c.h", 102, 908))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 909)), "./neo-c.h", 103, 910))->len=0;
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_72;
char* __dec_obj26;
_Bool _if_conditional68;
void* right_value106;
struct list_item$1charph* litem_73;
char* __dec_obj27;
void* right_value107;
struct list_item$1charph* litem_74;
char* __dec_obj28;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional67=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 916)), "./neo-c.h", 152, 917))->len==0,                        _if_conditional67) {
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                            come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 155, 918)), "./neo-c.h", 155, 919))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 156, 920)), "./neo-c.h", 156, 921))->next=((void*)0);
                            __dec_obj26=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 157, 922)), "./neo-c.h", 157, 923))->item;
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 157, 922)), "./neo-c.h", 157, 923))->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 924)), "./neo-c.h", 159, 925))->tail=litem_72;
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 926)), "./neo-c.h", 160, 927))->head=litem_72;
                        }
                        else {
                            if(_if_conditional68=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 928)), "./neo-c.h", 162, 929))->len==1,                            _if_conditional68) {
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 165, 930)), "./neo-c.h", 165, 931))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 932)), "./neo-c.h", 165, 933))->head;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 166, 934)), "./neo-c.h", 166, 935))->next=((void*)0);
                                __dec_obj27=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 167, 936)), "./neo-c.h", 167, 937))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 167, 936)), "./neo-c.h", 167, 937))->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 938)), "./neo-c.h", 169, 939))->tail=litem_73;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 940)), "./neo-c.h", 170, 941))->head, "./neo-c.h", 170, 942)), "./neo-c.h", 170, 943))->next=litem_73;
                            }
                            else {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 175, 944)), "./neo-c.h", 175, 945))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 946)), "./neo-c.h", 175, 947))->tail;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 176, 948)), "./neo-c.h", 176, 949))->next=((void*)0);
                                __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 177, 950)), "./neo-c.h", 177, 951))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 177, 950)), "./neo-c.h", 177, 951))->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 952)), "./neo-c.h", 179, 953))->tail, "./neo-c.h", 179, 954)), "./neo-c.h", 179, 955))->next=litem_74;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 956)), "./neo-c.h", 180, 957))->tail=litem_74;
                            }
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 958)), "./neo-c.h", 183, 959))->len++;
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
                it_75=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 967)), "./neo-c.h", 120, 968))->head;
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    prev_it_76=it_75;
                    it_75=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_75, "./neo-c.h", 123, 969)), "./neo-c.h", 123, 970))->next;
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional115;
unsigned int __exception_result_var_b90;
unsigned int hash_94;
unsigned int it_95;
_Bool _while_condtional18;
_Bool _if_conditional127;
_Bool __exception_result_var_b91;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct list$1charp* __exception_result_var_b95;
struct list$1charp* __exception_result_var_b96;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
int __exception_result_var_b97;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool same_key_exist_112;
char* __exception_result_var_b100;
char* it2_115;
_Bool __exception_result_var_b101;
char* __exception_result_var_b104;
_Bool __exception_result_var_b105;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list$1charp* __exception_result_var_b106;
struct map$2charphsTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_94, 0, sizeof(unsigned int));
memset(&it_95, 0, sizeof(unsigned int));
memset(&same_key_exist_112, 0, sizeof(_Bool));
memset(&it2_115, 0, sizeof(char*));
        if(_if_conditional115=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1371, 1175)), "./neo-c.h", 1371, 1176))->len*10>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1371, 1177)), "./neo-c.h", 1371, 1178))->size,        _if_conditional115) {
            (come_push_stackframe("./neo-c.h", 1372,1298),map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1372, 1179)), "./neo-c.h", 1372, 1180))),come_pop_stackframe());
        }
        hash_94=(come_push_stackframe("./neo-c.h", 1374, 1301),__exception_result_var_b90=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1299)), "./neo-c.h", 1374, 1300))), come_pop_stackframe(), __exception_result_var_b90)%((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1374, 1302)), "./neo-c.h", 1374, 1303))->size;
        it_95=hash_94;
        while(_while_condtional18=(_Bool)1,        _while_condtional18) {
            if(_if_conditional127=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1378, 1304)), "./neo-c.h", 1378, 1305))->item_existance, "./neo-c.h", 1378, 1306))[it_95],            _if_conditional127) {
                if(_if_conditional128=(come_push_stackframe("./neo-c.h", 1380, 1312),__exception_result_var_b91=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1380, 1307)), "./neo-c.h", 1380, 1308))->keys, "./neo-c.h", 1380, 1309))[it_95], "./neo-c.h", 1380, 1310)), "./neo-c.h", 1380, 1311)),key), come_pop_stackframe(), __exception_result_var_b91),                _if_conditional128) {
                    if(_if_conditional129=1,                    _if_conditional129) {
                        (come_push_stackframe("./neo-c.h", 1383, 1401),__exception_result_var_b95=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1383, 1313)), "./neo-c.h", 1383, 1314))->key_list, "./neo-c.h", 1383, 1315)), "./neo-c.h", 1383, 1316)),((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1383, 1398)), "./neo-c.h", 1383, 1399))->keys, "./neo-c.h", 1383, 1400))[it_95]), come_pop_stackframe(), __exception_result_var_b95);
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1384, 1402)), "./neo-c.h", 1384, 1403))->keys, "./neo-c.h", 1384, 1404))[it_95] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1384, 1402)), "./neo-c.h", 1384, 1403))->keys, "./neo-c.h", 1384, 1404))[it_95], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1385, 1405)), "./neo-c.h", 1385, 1406))->keys, "./neo-c.h", 1385, 1407))[it_95]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        (come_push_stackframe("./neo-c.h", 1388, 1415),__exception_result_var_b96=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1388, 1408)), "./neo-c.h", 1388, 1409))->key_list, "./neo-c.h", 1388, 1410)), "./neo-c.h", 1388, 1411)),((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1388, 1412)), "./neo-c.h", 1388, 1413))->keys, "./neo-c.h", 1388, 1414))[it_95]), come_pop_stackframe(), __exception_result_var_b96);
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1389, 1416)), "./neo-c.h", 1389, 1417))->keys, "./neo-c.h", 1389, 1418))[it_95]=key;
                    }
                    if(_if_conditional149=1,                    _if_conditional149) {
                        come_call_finalizer3(((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1392, 1419)), "./neo-c.h", 1392, 1420))->items, "./neo-c.h", 1392, 1421))[it_95],sType_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1393, 1422)), "./neo-c.h", 1393, 1423))->items, "./neo-c.h", 1393, 1424))[it_95]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1396, 1425)), "./neo-c.h", 1396, 1426))->items, "./neo-c.h", 1396, 1427))[it_95]=item;
                    }
                    break;
                }
                it_95++;
                if(_if_conditional150=it_95>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1403, 1428)), "./neo-c.h", 1403, 1429))->size,                _if_conditional150) {
                    it_95=0;
                }
                else {
                    if(_if_conditional151=it_95==hash_94,                    _if_conditional151) {
                        (come_push_stackframe("./neo-c.h", 1407, 1430),__exception_result_var_b97=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b97);
                        (come_push_stackframe("./neo-c.h", 1408,1431),stackframe(),come_pop_stackframe());
                        (come_push_stackframe("./neo-c.h", 1409,1432),exit(2),come_pop_stackframe());
                    }
                }
            }
            else {
                ((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1413, 1433)), "./neo-c.h", 1413, 1434))->item_existance, "./neo-c.h", 1413, 1435))[it_95]=(_Bool)1;
                if(_if_conditional152=1,                _if_conditional152) {
                    ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1415, 1436)), "./neo-c.h", 1415, 1437))->keys, "./neo-c.h", 1415, 1438))[it_95]=(char*)come_increment_ref_count(key);
                }
                else {
                    ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1418, 1439)), "./neo-c.h", 1418, 1440))->keys, "./neo-c.h", 1418, 1441))[it_95]=key;
                }
                if(_if_conditional153=1,                _if_conditional153) {
                    ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1421, 1442)), "./neo-c.h", 1421, 1443))->items, "./neo-c.h", 1421, 1444))[it_95]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1424, 1445)), "./neo-c.h", 1424, 1446))->items, "./neo-c.h", 1424, 1447))[it_95]=item;
                }
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1427, 1448)), "./neo-c.h", 1427, 1449))->len++;
                break;
            }
        }
        same_key_exist_112=(_Bool)0;
        for(        it2_115=(come_push_stackframe("./neo-c.h", 1434, 1466),__exception_result_var_b100=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 1450)), "./neo-c.h", 1434, 1451))->key_list, "./neo-c.h", 1434, 1452)), "./neo-c.h", 1434, 1453))), come_pop_stackframe(), __exception_result_var_b100);        !(come_push_stackframe("./neo-c.h", 1434, 1473),__exception_result_var_b101=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 1467)), "./neo-c.h", 1434, 1468))->key_list, "./neo-c.h", 1434, 1469)), "./neo-c.h", 1434, 1470))), come_pop_stackframe(), __exception_result_var_b101);        it2_115=(come_push_stackframe("./neo-c.h", 1434, 1494),__exception_result_var_b104=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 1474)), "./neo-c.h", 1434, 1475))->key_list, "./neo-c.h", 1434, 1476)), "./neo-c.h", 1434, 1477))), come_pop_stackframe(), __exception_result_var_b104)        ){
            if(_if_conditional158=(come_push_stackframe("./neo-c.h", 1436, 1497),__exception_result_var_b105=string_equals(((char*)come_null_check(((char*)come_null_check(it2_115, "./neo-c.h", 1436, 1495)), "./neo-c.h", 1436, 1496)),key), come_pop_stackframe(), __exception_result_var_b105),            _if_conditional158) {
                same_key_exist_112=(_Bool)1;
            }
        }
        if(_if_conditional159=!same_key_exist_112,        _if_conditional159) {
            (come_push_stackframe("./neo-c.h", 1442, 1546),__exception_result_var_b106=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1442, 1498)), "./neo-c.h", 1442, 1499))->key_list, "./neo-c.h", 1442, 1500)), "./neo-c.h", 1442, 1501)),key), come_pop_stackframe(), __exception_result_var_b106);
        }
        __result93__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result93__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_77;
void* right_value116;
char** keys_78;
void* right_value117;
struct sType** items_79;
void* right_value118;
_Bool* item_existance_80;
int len_81;
char* __exception_result_var_b78;
char* it_84;
_Bool __exception_result_var_b79;
char* __exception_result_var_b82;
struct sType* default_value_87;
void* __exception_result_var_b83;
struct sType* __exception_result_var_b86;
struct sType* it2_88;
unsigned int __exception_result_var_b87;
unsigned int hash_91;
int n_92;
_Bool _while_condtional17;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
int __exception_result_var_b88;
struct sType* default_value_93;
struct sType* __exception_result_var_b89;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_77, 0, sizeof(int));
right_value116 = (void*)0;
memset(&keys_78, 0, sizeof(char**));
right_value117 = (void*)0;
memset(&items_79, 0, sizeof(struct sType**));
right_value118 = (void*)0;
memset(&item_existance_80, 0, sizeof(_Bool*));
memset(&len_81, 0, sizeof(int));
memset(&it_84, 0, sizeof(char*));
memset(&default_value_87, 0, sizeof(struct sType*));
memset(&it2_88, 0, sizeof(struct sType*));
memset(&hash_91, 0, sizeof(unsigned int));
memset(&n_92, 0, sizeof(int));
memset(&default_value_93, 0, sizeof(struct sType*));
                size_77=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1318, 1181)), "./neo-c.h", 1318, 1182))->size*10;
                keys_78=(char**)come_increment_ref_count(((char**)(right_value116=(char**)come_calloc(1, sizeof(char*)*(1*(size_77)), "./neo-c.h", 1319, "char*%"))));
                right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_79=(struct sType**)come_increment_ref_count(((struct sType**)(right_value117=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_77)), "./neo-c.h", 1320, "sType*%"))));
                come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_80=(_Bool*)come_increment_ref_count(((_Bool*)(right_value118=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_77)), "./neo-c.h", 1321, "bool"))));
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_81=0;
                for(                it_84=(come_push_stackframe("./neo-c.h", 1325, 1205),__exception_result_var_b78=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 1183)), "./neo-c.h", 1325, 1184))), come_pop_stackframe(), __exception_result_var_b78);                !(come_push_stackframe("./neo-c.h", 1325, 1214),__exception_result_var_b79=map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 1206)), "./neo-c.h", 1325, 1207))), come_pop_stackframe(), __exception_result_var_b79);                it_84=(come_push_stackframe("./neo-c.h", 1325, 1243),__exception_result_var_b82=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 1215)), "./neo-c.h", 1325, 1216))), come_pop_stackframe(), __exception_result_var_b82)                ){
                    (come_push_stackframe("./neo-c.h", 1327, 1244),__exception_result_var_b83=memset(&default_value_87,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b83);
                    it2_88=(come_push_stackframe("./neo-c.h", 1328, 1266),__exception_result_var_b86=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1328, 1245)), "./neo-c.h", 1328, 1246)),it_84,default_value_87), come_pop_stackframe(), __exception_result_var_b86);
                    hash_91=(come_push_stackframe("./neo-c.h", 1329, 1269),__exception_result_var_b87=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_84, "./neo-c.h", 1329, 1267)), "./neo-c.h", 1329, 1268))), come_pop_stackframe(), __exception_result_var_b87)%size_77;
                    n_92=hash_91;
                    while(_while_condtional17=(_Bool)1,                    _while_condtional17) {
                        if(_if_conditional124=((_Bool*)come_null_check(item_existance_80, "./neo-c.h", 1333, 1270))[n_92],                        _if_conditional124) {
                            n_92++;
                            if(_if_conditional125=n_92>=size_77,                            _if_conditional125) {
                                n_92=0;
                            }
                            else {
                                if(_if_conditional126=n_92==hash_91,                                _if_conditional126) {
                                    (come_push_stackframe("./neo-c.h", 1341, 1271),__exception_result_var_b88=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b88);
                                    (come_push_stackframe("./neo-c.h", 1342,1272),stackframe(),come_pop_stackframe());
                                    (come_push_stackframe("./neo-c.h", 1343,1273),exit(2),come_pop_stackframe());
                                }
                            }
                        }
                        else {
                            ((_Bool*)come_null_check(item_existance_80, "./neo-c.h", 1347, 1274))[n_92]=(_Bool)1;
                            ((char**)come_null_check(keys_78, "./neo-c.h", 1348, 1275))[n_92]=it_84;
                            ((struct sType**)come_null_check(items_79, "./neo-c.h", 1350, 1276))[n_92]=(come_push_stackframe("./neo-c.h", 1350, 1279),__exception_result_var_b89=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1350, 1277)), "./neo-c.h", 1350, 1278)),it_84,default_value_93), come_pop_stackframe(), __exception_result_var_b89);
                            len_81++;
                            break;
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1358,1282),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1358, 1280)), "./neo-c.h", 1358, 1281))->items),come_pop_stackframe());
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1359, 1283)), "./neo-c.h", 1359, 1284))->item_existance = come_decrement_ref_count2(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1359, 1283)), "./neo-c.h", 1359, 1284))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (come_push_stackframe("./neo-c.h", 1360,1287),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1360, 1285)), "./neo-c.h", 1360, 1286))->keys),come_pop_stackframe());
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1362, 1288)), "./neo-c.h", 1362, 1289))->keys=keys_78;
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1363, 1290)), "./neo-c.h", 1363, 1291))->items=items_79;
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1364, 1292)), "./neo-c.h", 1364, 1293))->item_existance=item_existance_80;
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1366, 1294)), "./neo-c.h", 1366, 1295))->size=size_77;
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1367, 1296)), "./neo-c.h", 1367, 1297))->len=len_81;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional116;
char* result_82;
void* __exception_result_var_b76;
char* __result70__;
_Bool _if_conditional117;
char* __result71__;
char* result_83;
void* __exception_result_var_b77;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_82, 0, sizeof(char*));
memset(&result_83, 0, sizeof(char*));
                    if(_if_conditional116=self==((void*)0),                    _if_conditional116) {
                        (come_push_stackframe("./neo-c.h", 1282, 1185),__exception_result_var_b76=memset(&result_82,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b76);
                        __result70__ = __result_obj__ = result_82;
                        return __result70__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1285, 1186)), "./neo-c.h", 1285, 1187))->key_list, "./neo-c.h", 1285, 1188)), "./neo-c.h", 1285, 1189))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1285, 1190)), "./neo-c.h", 1285, 1191))->key_list, "./neo-c.h", 1285, 1192)), "./neo-c.h", 1285, 1193))->head;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1287, 1194)), "./neo-c.h", 1287, 1195))->key_list, "./neo-c.h", 1287, 1196)), "./neo-c.h", 1287, 1197))->it) {
                        __result71__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1288, 1198)), "./neo-c.h", 1288, 1199))->key_list, "./neo-c.h", 1288, 1200)), "./neo-c.h", 1288, 1201))->it, "./neo-c.h", 1288, 1202)), "./neo-c.h", 1288, 1203))->item;
                        return __result71__;
                    }
                    (come_push_stackframe("./neo-c.h", 1292, 1204),__exception_result_var_b77=memset(&result_83,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b77);
                    __result72__ = __result_obj__ = result_83;
                    return __result72__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result73__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1314, 1208)), "./neo-c.h", 1314, 1209))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1314, 1210)), "./neo-c.h", 1314, 1211))->key_list, "./neo-c.h", 1314, 1212)), "./neo-c.h", 1314, 1213))->it==((void*)0);
                    return __result73__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional118;
char* result_85;
void* __exception_result_var_b80;
char* __result74__;
_Bool _if_conditional119;
char* __result75__;
char* result_86;
void* __exception_result_var_b81;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_85, 0, sizeof(char*));
memset(&result_86, 0, sizeof(char*));
                    if(_if_conditional118=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1297, 1217)), "./neo-c.h", 1297, 1218))->key_list, "./neo-c.h", 1297, 1219)), "./neo-c.h", 1297, 1220))->it==((void*)0),                    _if_conditional118) {
                        (come_push_stackframe("./neo-c.h", 1299, 1221),__exception_result_var_b80=memset(&result_85,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b80);
                        __result74__ = __result_obj__ = result_85;
                        return __result74__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1302, 1222)), "./neo-c.h", 1302, 1223))->key_list, "./neo-c.h", 1302, 1224)), "./neo-c.h", 1302, 1225))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1302, 1226)), "./neo-c.h", 1302, 1227))->key_list, "./neo-c.h", 1302, 1228)), "./neo-c.h", 1302, 1229))->it, "./neo-c.h", 1302, 1230)), "./neo-c.h", 1302, 1231))->next;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1304, 1232)), "./neo-c.h", 1304, 1233))->key_list, "./neo-c.h", 1304, 1234)), "./neo-c.h", 1304, 1235))->it) {
                        __result75__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1305, 1236)), "./neo-c.h", 1305, 1237))->key_list, "./neo-c.h", 1305, 1238)), "./neo-c.h", 1305, 1239))->it, "./neo-c.h", 1305, 1240)), "./neo-c.h", 1305, 1241))->item;
                        return __result75__;
                    }
                    (come_push_stackframe("./neo-c.h", 1309, 1242),__exception_result_var_b81=memset(&result_86,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b81);
                    __result76__ = __result_obj__ = result_86;
                    return __result76__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b84;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional16;
_Bool _if_conditional120;
_Bool __exception_result_var_b85;
_Bool _if_conditional121;
struct sType* __result77__;
_Bool _if_conditional122;
_Bool _if_conditional123;
struct sType* __result78__;
struct sType* __result79__;
struct sType* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
                        hash_89=(come_push_stackframe("./neo-c.h", 1207, 1249),__exception_result_var_b84=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1247)), "./neo-c.h", 1207, 1248))), come_pop_stackframe(), __exception_result_var_b84)%((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1207, 1250)), "./neo-c.h", 1207, 1251))->size;
                        it_90=hash_89;
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            if(_if_conditional120=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1211, 1252)), "./neo-c.h", 1211, 1253))->item_existance, "./neo-c.h", 1211, 1254))[it_90],                            _if_conditional120) {
                                if(_if_conditional121=(come_push_stackframe("./neo-c.h", 1213, 1260),__exception_result_var_b85=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1213, 1255)), "./neo-c.h", 1213, 1256))->keys, "./neo-c.h", 1213, 1257))[it_90], "./neo-c.h", 1213, 1258)), "./neo-c.h", 1213, 1259)),key), come_pop_stackframe(), __exception_result_var_b85),                                _if_conditional121) {
                                    __result77__ = __result_obj__ = ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1215, 1261)), "./neo-c.h", 1215, 1262))->items, "./neo-c.h", 1215, 1263))[it_90];
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result77__;
                                }
                                it_90++;
                                if(_if_conditional122=it_90>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1220, 1264)), "./neo-c.h", 1220, 1265))->size,                                _if_conditional122) {
                                    it_90=0;
                                }
                                else {
                                    if(_if_conditional123=it_90==hash_89,                                    _if_conditional123) {
                                        __result78__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result78__;
                                    }
                                }
                            }
                            else {
                                __result79__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result79__;
                            }
                        }
                        __result80__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result80__;
                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_96;
struct list_item$1charp* it_97;
_Bool _while_condtional19;
_Bool __exception_result_var_b92;
_Bool _if_conditional130;
struct list$1charp* __exception_result_var_b94;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_96, 0, sizeof(int));
memset(&it_97, 0, sizeof(struct list_item$1charp*));
                            it2_96=0;
                            it_97=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 1317)), "./neo-c.h", 442, 1318))->head;
                            while(_while_condtional19=it_97!=((void*)0),                            _while_condtional19) {
                                if(_if_conditional130=(come_push_stackframe("./neo-c.h", 444, 1323),__exception_result_var_b92=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_97, "./neo-c.h", 444, 1319)), "./neo-c.h", 444, 1320))->item, "./neo-c.h", 444, 1321)), "./neo-c.h", 444, 1322)),item), come_pop_stackframe(), __exception_result_var_b92),                                _if_conditional130) {
                                    (come_push_stackframe("./neo-c.h", 445, 1395),__exception_result_var_b94=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 1324)), "./neo-c.h", 445, 1325)),it2_96,it2_96+1), come_pop_stackframe(), __exception_result_var_b94);
                                    break;
                                }
                                it2_96++;
                                it_97=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_97, "./neo-c.h", 450, 1396)), "./neo-c.h", 450, 1397))->next;
                            }
                            __result84__ = __result_obj__ = self;
                            return __result84__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
int tmp_98;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
struct list$1charp* __result81__;
_Bool _if_conditional137;
struct list$1charp* __exception_result_var_b93;
_Bool _if_conditional138;
struct list_item$1charp* it_101;
int i_102;
_Bool _while_condtional21;
_Bool _if_conditional139;
struct list_item$1charp* prev_it_103;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct list_item$1charp* it_104;
int i_105;
_Bool _while_condtional22;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct list_item$1charp* prev_it_106;
struct list_item$1charp* it_107;
struct list_item$1charp* head_prev_it_108;
struct list_item$1charp* tail_it_109;
int i_110;
_Bool _while_condtional23;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct list_item$1charp* prev_it_111;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list$1charp* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_98, 0, sizeof(int));
memset(&it_101, 0, sizeof(struct list_item$1charp*));
memset(&i_102, 0, sizeof(int));
memset(&prev_it_103, 0, sizeof(struct list_item$1charp*));
memset(&it_104, 0, sizeof(struct list_item$1charp*));
memset(&i_105, 0, sizeof(int));
memset(&prev_it_106, 0, sizeof(struct list_item$1charp*));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_108, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_109, 0, sizeof(struct list_item$1charp*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional131=head<0,                                        _if_conditional131) {
                                            head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 1326)), "./neo-c.h", 458, 1327))->len;
                                        }
                                        if(_if_conditional132=tail<0,                                        _if_conditional132) {
                                            tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 1328)), "./neo-c.h", 461, 1329))->len+1;
                                        }
                                        if(_if_conditional133=head>tail,                                        _if_conditional133) {
                                            tmp_98=tail;
                                            tail=head;
                                            head=tmp_98;
                                        }
                                        if(_if_conditional134=head<0,                                        _if_conditional134) {
                                            head=0;
                                        }
                                        if(_if_conditional135=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 1330)), "./neo-c.h", 474, 1331))->len,                                        _if_conditional135) {
                                            tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 1332)), "./neo-c.h", 475, 1333))->len;
                                        }
                                        if(_if_conditional136=head==tail,                                        _if_conditional136) {
                                            __result81__ = __result_obj__ = self;
                                            return __result81__;
                                        }
                                        if(_if_conditional137=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 1334)), "./neo-c.h", 482, 1335))->len,                                        _if_conditional137) {
                                            (come_push_stackframe("./neo-c.h", 484, 1348),__exception_result_var_b93=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 1336)), "./neo-c.h", 484, 1337))), come_pop_stackframe(), __exception_result_var_b93);
                                        }
                                        else {
                                            if(_if_conditional138=head==0,                                            _if_conditional138) {
                                                it_101=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 1349)), "./neo-c.h", 487, 1350))->head;
                                                i_102=0;
                                                while(_while_condtional21=it_101!=((void*)0),                                                _while_condtional21) {
                                                    if(_if_conditional139=i_102<tail,                                                    _if_conditional139) {
                                                        prev_it_103=it_101;
                                                        it_101=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_101, "./neo-c.h", 493, 1351)), "./neo-c.h", 493, 1352))->next;
                                                        i_102++;
                                                        come_call_finalizer3(prev_it_103,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 1353)), "./neo-c.h", 498, 1354))->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional140=i_102==tail,                                                        _if_conditional140) {
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 1355)), "./neo-c.h", 501, 1356))->head=it_101;
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 1357)), "./neo-c.h", 502, 1358))->head, "./neo-c.h", 502, 1359)), "./neo-c.h", 502, 1360))->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_101=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_101, "./neo-c.h", 506, 1361)), "./neo-c.h", 506, 1362))->next;
                                                            i_102++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional141=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 1363)), "./neo-c.h", 511, 1364))->len,                                                _if_conditional141) {
                                                    it_104=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 1365)), "./neo-c.h", 512, 1366))->head;
                                                    i_105=0;
                                                    while(_while_condtional22=it_104!=((void*)0),                                                    _while_condtional22) {
                                                        if(_if_conditional142=i_105==head,                                                        _if_conditional142) {
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 1367)), "./neo-c.h", 516, 1368))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_104, "./neo-c.h", 516, 1369)), "./neo-c.h", 516, 1370))->prev;
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 1371)), "./neo-c.h", 517, 1372))->tail, "./neo-c.h", 517, 1373)), "./neo-c.h", 517, 1374))->next=((void*)0);
                                                        }
                                                        if(_if_conditional143=i_105>=head,                                                        _if_conditional143) {
                                                            prev_it_106=it_104;
                                                            it_104=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_104, "./neo-c.h", 523, 1375)), "./neo-c.h", 523, 1376))->next;
                                                            i_105++;
                                                            come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 1377)), "./neo-c.h", 528, 1378))->len--;
                                                        }
                                                        else {
                                                            it_104=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_104, "./neo-c.h", 531, 1379)), "./neo-c.h", 531, 1380))->next;
                                                            i_105++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_107=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 1381)), "./neo-c.h", 537, 1382))->head;
                                                    head_prev_it_108=((void*)0);
                                                    tail_it_109=((void*)0);
                                                    i_110=0;
                                                    while(_while_condtional23=it_107!=((void*)0),                                                    _while_condtional23) {
                                                        if(_if_conditional144=i_110==head,                                                        _if_conditional144) {
                                                            head_prev_it_108=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_107, "./neo-c.h", 546, 1383)), "./neo-c.h", 546, 1384))->prev;
                                                        }
                                                        if(_if_conditional145=i_110==tail,                                                        _if_conditional145) {
                                                            tail_it_109=it_107;
                                                        }
                                                        if(_if_conditional146=i_110>=head&&i_110<tail,                                                        _if_conditional146) {
                                                            prev_it_111=it_107;
                                                            it_107=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_107, "./neo-c.h", 556, 1385)), "./neo-c.h", 556, 1386))->next;
                                                            i_110++;
                                                            come_call_finalizer3(prev_it_111,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 1387)), "./neo-c.h", 561, 1388))->len--;
                                                        }
                                                        else {
                                                            it_107=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_107, "./neo-c.h", 564, 1389)), "./neo-c.h", 564, 1390))->next;
                                                            i_110++;
                                                        }
                                                    }
                                                    if(_if_conditional147=head_prev_it_108!=((void*)0),                                                    _if_conditional147) {
                                                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_108, "./neo-c.h", 570, 1391)), "./neo-c.h", 570, 1392))->next=tail_it_109;
                                                    }
                                                    if(_if_conditional148=tail_it_109!=((void*)0),                                                    _if_conditional148) {
                                                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_109, "./neo-c.h", 573, 1393)), "./neo-c.h", 573, 1394))->prev=head_prev_it_108;
                                                    }
                                                }
                                            }
                                        }
                                        __result83__ = __result_obj__ = self;
                                        return __result83__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_99;
_Bool _while_condtional20;
struct list_item$1charp* prev_it_100;
struct list$1charp* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_99, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_100, 0, sizeof(struct list_item$1charp*));
                                                it_99=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 1338)), "./neo-c.h", 426, 1339))->head;
                                                while(_while_condtional20=it_99!=((void*)0),                                                _while_condtional20) {
                                                    prev_it_100=it_99;
                                                    it_99=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_99, "./neo-c.h", 429, 1340)), "./neo-c.h", 429, 1341))->next;
                                                    come_call_finalizer3(prev_it_100,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 1342)), "./neo-c.h", 433, 1343))->head=((void*)0);
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 1344)), "./neo-c.h", 434, 1345))->tail=((void*)0);
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 1346)), "./neo-c.h", 436, 1347))->len=0;
                                                __result82__ = __result_obj__ = self;
                                                return __result82__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional154;
char* result_113;
void* __exception_result_var_b98;
char* __result85__;
_Bool _if_conditional155;
char* __result86__;
char* result_114;
void* __exception_result_var_b99;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_113, 0, sizeof(char*));
memset(&result_114, 0, sizeof(char*));
            if(_if_conditional154=self==((void*)0),            _if_conditional154) {
                (come_push_stackframe("./neo-c.h", 284, 1454),__exception_result_var_b98=memset(&result_113,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b98);
                __result85__ = __result_obj__ = result_113;
                return __result85__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1455)), "./neo-c.h", 287, 1456))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1457)), "./neo-c.h", 287, 1458))->head;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 1459)), "./neo-c.h", 289, 1460))->it) {
                __result86__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 1461)), "./neo-c.h", 290, 1462))->it, "./neo-c.h", 290, 1463)), "./neo-c.h", 290, 1464))->item;
                return __result86__;
            }
            (come_push_stackframe("./neo-c.h", 294, 1465),__exception_result_var_b99=memset(&result_114,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b99);
            __result87__ = __result_obj__ = result_114;
            return __result87__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
            __result88__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 1471)), "./neo-c.h", 317, 1472))->it==((void*)0);
            return __result88__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional156;
char* result_116;
void* __exception_result_var_b102;
char* __result89__;
_Bool _if_conditional157;
char* __result90__;
char* result_117;
void* __exception_result_var_b103;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_116, 0, sizeof(char*));
memset(&result_117, 0, sizeof(char*));
            if(_if_conditional156=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 1478)), "./neo-c.h", 299, 1479))->it==((void*)0),            _if_conditional156) {
                (come_push_stackframe("./neo-c.h", 301, 1480),__exception_result_var_b102=memset(&result_116,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b102);
                __result89__ = __result_obj__ = result_116;
                return __result89__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1481)), "./neo-c.h", 305, 1482))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1483)), "./neo-c.h", 305, 1484))->it, "./neo-c.h", 305, 1485)), "./neo-c.h", 305, 1486))->next;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 1487)), "./neo-c.h", 307, 1488))->it) {
                __result90__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 1489)), "./neo-c.h", 308, 1490))->it, "./neo-c.h", 308, 1491)), "./neo-c.h", 308, 1492))->item;
                return __result90__;
            }
            (come_push_stackframe("./neo-c.h", 312, 1493),__exception_result_var_b103=memset(&result_117,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b103);
            __result91__ = __result_obj__ = result_117;
            return __result91__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional160;
void* right_value119;
struct list_item$1charp* litem_118;
_Bool _if_conditional161;
void* right_value120;
struct list_item$1charp* litem_119;
void* right_value121;
struct list_item$1charp* litem_120;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&litem_118, 0, sizeof(struct list_item$1charp*));
right_value120 = (void*)0;
memset(&litem_119, 0, sizeof(struct list_item$1charp*));
right_value121 = (void*)0;
memset(&litem_120, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional160=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 1502)), "./neo-c.h", 222, 1503))->len==0,                _if_conditional160) {
                    litem_118=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value119=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                    come_call_finalizer3(right_value119,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_118, "./neo-c.h", 225, 1504)), "./neo-c.h", 225, 1505))->prev=((void*)0);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_118, "./neo-c.h", 226, 1506)), "./neo-c.h", 226, 1507))->next=((void*)0);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_118, "./neo-c.h", 227, 1508)), "./neo-c.h", 227, 1509))->item=item;
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 1510)), "./neo-c.h", 229, 1511))->tail=litem_118;
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 1512)), "./neo-c.h", 230, 1513))->head=litem_118;
                }
                else {
                    if(_if_conditional161=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 1514)), "./neo-c.h", 232, 1515))->len==1,                    _if_conditional161) {
                        litem_119=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value120=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                        come_call_finalizer3(right_value120,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_119, "./neo-c.h", 235, 1516)), "./neo-c.h", 235, 1517))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 1518)), "./neo-c.h", 235, 1519))->head;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_119, "./neo-c.h", 236, 1520)), "./neo-c.h", 236, 1521))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_119, "./neo-c.h", 237, 1522)), "./neo-c.h", 237, 1523))->item=item;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 1524)), "./neo-c.h", 239, 1525))->tail=litem_119;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 1526)), "./neo-c.h", 240, 1527))->head, "./neo-c.h", 240, 1528)), "./neo-c.h", 240, 1529))->next=litem_119;
                    }
                    else {
                        litem_120=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value121=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                        come_call_finalizer3(right_value121,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_120, "./neo-c.h", 245, 1530)), "./neo-c.h", 245, 1531))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 1532)), "./neo-c.h", 245, 1533))->tail;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_120, "./neo-c.h", 246, 1534)), "./neo-c.h", 246, 1535))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_120, "./neo-c.h", 247, 1536)), "./neo-c.h", 247, 1537))->item=item;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 1538)), "./neo-c.h", 249, 1539))->tail, "./neo-c.h", 249, 1540)), "./neo-c.h", 249, 1541))->next=litem_120;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 1542)), "./neo-c.h", 250, 1543))->tail=litem_120;
                    }
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 1544)), "./neo-c.h", 253, 1545))->len++;
                __result92__ = __result_obj__ = self;
                return __result92__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional165;
int __result97__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional165=self==((void*)0),            _if_conditional165) {
                __result97__ = 0;
                return __result97__;
            }
            __result98__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 360, 1576)), "./neo-c.h", 360, 1577))->len;
            return __result98__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional167;
struct tuple2$2charphsTypeph* result_125;
void* __exception_result_var_b115;
struct tuple2$2charphsTypeph* __result99__;
_Bool _if_conditional168;
struct tuple2$2charphsTypeph* __result100__;
struct tuple2$2charphsTypeph* result_126;
void* __exception_result_var_b116;
struct tuple2$2charphsTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsTypeph*));
                if(_if_conditional167=self==((void*)0),                _if_conditional167) {
                    (come_push_stackframe("./neo-c.h", 284, 1593),__exception_result_var_b115=memset(&result_125,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b115);
                    __result99__ = __result_obj__ = result_125;
                    return __result99__;
                }
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 1594)), "./neo-c.h", 287, 1595))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 1596)), "./neo-c.h", 287, 1597))->head;
                if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 289, 1598)), "./neo-c.h", 289, 1599))->it) {
                    __result100__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 290, 1600)), "./neo-c.h", 290, 1601))->it, "./neo-c.h", 290, 1602)), "./neo-c.h", 290, 1603))->item;
                    return __result100__;
                }
                (come_push_stackframe("./neo-c.h", 294, 1604),__exception_result_var_b116=memset(&result_126,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b116);
                __result101__ = __result_obj__ = result_126;
                return __result101__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                __result102__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 317, 1608)), "./neo-c.h", 317, 1609))->it==((void*)0);
                return __result102__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional169;
struct tuple2$2charphsTypeph* result_128;
void* __exception_result_var_b119;
struct tuple2$2charphsTypeph* __result103__;
_Bool _if_conditional170;
struct tuple2$2charphsTypeph* __result104__;
struct tuple2$2charphsTypeph* result_129;
void* __exception_result_var_b120;
struct tuple2$2charphsTypeph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_129, 0, sizeof(struct tuple2$2charphsTypeph*));
                if(_if_conditional169=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 299, 1613)), "./neo-c.h", 299, 1614))->it==((void*)0),                _if_conditional169) {
                    (come_push_stackframe("./neo-c.h", 301, 1615),__exception_result_var_b119=memset(&result_128,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b119);
                    __result103__ = __result_obj__ = result_128;
                    return __result103__;
                }
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 1616)), "./neo-c.h", 305, 1617))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 1618)), "./neo-c.h", 305, 1619))->it, "./neo-c.h", 305, 1620)), "./neo-c.h", 305, 1621))->next;
                if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 307, 1622)), "./neo-c.h", 307, 1623))->it) {
                    __result104__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 308, 1624)), "./neo-c.h", 308, 1625))->it, "./neo-c.h", 308, 1626)), "./neo-c.h", 308, 1627))->item;
                    return __result104__;
                }
                (come_push_stackframe("./neo-c.h", 312, 1628),__exception_result_var_b120=memset(&result_129,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b120);
                __result105__ = __result_obj__ = result_129;
                return __result105__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_132;
_Bool _while_condtional24;
struct list_item$1tuple2$2charphsTypephph* prev_it_133;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_133, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_132=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 1637)), "./neo-c.h", 120, 1638))->head;
                while(_while_condtional24=it_132!=((void*)0),                _while_condtional24) {
                    prev_it_133=it_132;
                    it_132=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_132, "./neo-c.h", 123, 1639)), "./neo-c.h", 123, 1640))->next;
                    come_call_finalizer3(prev_it_133,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional171=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1641)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1642))->item!=((void*)0),                        _if_conditional171) {
                            come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1643)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1644))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

struct sNode* parse_union(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_134;
_Bool output_135;
struct sClass* __exception_result_var_b131;
_Bool _if_conditional184;
void* right_value131;
void* right_value132;
char* __exception_result_var_b132;
void* right_value133;
struct sClass* __exception_result_var_b133;
struct sClass* __dec_obj36;
void* right_value137;
char* __exception_result_var_b156;
struct sClass* __exception_result_var_b166;
void* right_value152;
struct map$2charphsClassph* __exception_result_var_b167;
struct sClass* __exception_result_var_b168;
struct sClass* __exception_result_var_b169;
void* right_value153;
struct sClass* __dec_obj46;
int __exception_result_var_b170;
_Bool _if_conditional235;
void* right_value154;
void* right_value155;
struct sType* __exception_result_var_b171;
struct sType* type_166;
int __exception_result_var_b172;
_Bool _while_condtional30;
void* right_value156;
struct tuple3$3sTypephcharphbool* __exception_result_var_b173;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type2_167;
char* name_168;
_Bool err_169;
_Bool _if_conditional238;
int __exception_result_var_b174;
int __exception_result_var_b175;
_Bool _if_conditional239;
void* right_value160;
void* right_value161;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b176;
_Bool _if_conditional242;
void* right_value162;
void* right_value163;
struct sUnionNode* __exception_result_var_b177;
struct sNode* _inf_value1;
struct sUnionNode* _inf_obj_value1;
void* right_value167;
struct sNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_134, 0, sizeof(struct sClass*));
memset(&output_135, 0, sizeof(_Bool));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value137 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&type_166, 0, sizeof(struct sType*));
right_value156 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value167 = (void*)0;
    if(_if_conditional184=(come_push_stackframe("15union.c", 66, 1709),__exception_result_var_b131=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 66, 1670)), "15union.c", 66, 1671))->classes, "15union.c", 66, 1672)), "15union.c", 66, 1673)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b131)==((void*)0),    _if_conditional184) {
        __dec_obj36=klass_134;
        klass_134=(struct sClass*)come_increment_ref_count((come_push_stackframe("15union.c", 67, 1712),__exception_result_var_b133=((struct sClass*)(right_value133=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value131=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 67, "sClass"))), "15union.c", 67, 1710))),(come_push_stackframe("15union.c", 67, 1711),__exception_result_var_b132=((char*)(right_value132=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b132),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b133));
        come_call_finalizer3(__dec_obj36,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value131,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value133,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("15union.c", 68, 2110),__exception_result_var_b167=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 68, 1713)), "15union.c", 68, 1714))->classes, "15union.c", 68, 1715)), "15union.c", 68, 1716)),(char*)come_increment_ref_count((come_push_stackframe("15union.c", 68, 1915),__exception_result_var_b156=((char*)(right_value137=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b156)),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value152=(come_push_stackframe("15union.c", 68, 2109),__exception_result_var_b166=sClass_clone(klass_134), come_pop_stackframe(), __exception_result_var_b166))))), come_pop_stackframe(), __exception_result_var_b167);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value152,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj46=klass_134;
        klass_134=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value153=(come_push_stackframe("15union.c", 71, 2116),__exception_result_var_b169=sClass_clone((come_push_stackframe("15union.c", 71, 2115),__exception_result_var_b168=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 71, 2111)), "15union.c", 71, 2112))->classes, "15union.c", 71, 2113)), "15union.c", 71, 2114)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b168)), come_pop_stackframe(), __exception_result_var_b169))));
        come_call_finalizer3(__dec_obj46,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value153,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional235=(come_push_stackframe("15union.c", 74, 2121),__exception_result_var_b170=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_134, "15union.c", 74, 2117)), "15union.c", 74, 2118))->mFields, "15union.c", 74, 2119)), "15union.c", 74, 2120))), come_pop_stackframe(), __exception_result_var_b170)==0,    _if_conditional235) {
        output_135=(_Bool)1;
    }
    type_166=(struct sType*)come_increment_ref_count((come_push_stackframe("15union.c", 78, 2123),__exception_result_var_b171=((struct sType*)(right_value155=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value154=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "15union.c", 78, "sType"))), "15union.c", 78, 2122))),type_name,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b171));
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("15union.c", 80, 2124),__exception_result_var_b172=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b172);
    while(_while_condtional30=(_Bool)1,    _while_condtional30) {
        multiple_assign_var2=(come_push_stackframe("15union.c", 85, 2125),__exception_result_var_b173=((struct tuple3$3sTypephcharphbool*)(right_value156=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b173);
        type2_167=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        name_168=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_169=multiple_assign_var2->v3;
        come_call_finalizer3(right_value156,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional238=!err_169,        _if_conditional238) {
            (come_push_stackframe("15union.c", 88, 2138),__exception_result_var_b174=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 88, 2134)), "15union.c", 88, 2135))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 88, 2136)), "15union.c", 88, 2137))->sline), come_pop_stackframe(), __exception_result_var_b174);
            (come_push_stackframe("15union.c", 89,2139),exit(2),come_pop_stackframe());
        }
        (come_push_stackframe("15union.c", 91, 2140),__exception_result_var_b175=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b175);
        if(output_135) {
            (come_push_stackframe("15union.c", 94, 2195),__exception_result_var_b176=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type_166, "15union.c", 94, 2141)), "15union.c", 94, 2142))->mClass, "15union.c", 94, 2143)), "15union.c", 94, 2144))->mFields, "15union.c", 94, 2145)), "15union.c", 94, 2146)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value161=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value160=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "15union.c", 94, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_168),(struct sType*)come_increment_ref_count(type2_167)))))), come_pop_stackframe(), __exception_result_var_b176);
            come_call_finalizer3(right_value160,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value161,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional242=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 97, 2196)), "15union.c", 97, 2197))->p, "15union.c", 97, 2198))==125,        _if_conditional242) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 98, 2199)), "15union.c", 98, 2200))->p++;
            (come_push_stackframe("15union.c", 99,2201),skip_spaces_and_lf(info),come_pop_stackframe());
            come_call_finalizer3(type2_167,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_168 = come_decrement_ref_count2(name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        come_call_finalizer3(type2_167,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_168 = come_decrement_ref_count2(name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "15union.c", 104, "struct sNode");
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("15union.c", 104, 2203),__exception_result_var_b177=((struct sUnionNode*)(right_value163=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)come_null_check(((struct sUnionNode*)(right_value162=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "15union.c", 104, "sUnionNode"))), "15union.c", 104, 2202))),(struct sType*)come_increment_ref_count(type_166),output_135,info))), come_pop_stackframe(), __exception_result_var_b177));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sUnionNode_finalize;
    _inf_value1->clone=(void*)sUnionNode_clone;
    _inf_value1->compile=(void*)sUnionNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sUnionNode_terminated;
    _inf_value1->kind=(void*)sUnionNode_kind;
    __result131__ = __result_obj__ = ((struct sNode*)(right_value167=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value162,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value163,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result131__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b129;
unsigned int hash_136;
unsigned int it_137;
_Bool _while_condtional25;
_Bool _if_conditional176;
_Bool __exception_result_var_b130;
_Bool _if_conditional177;
struct sClass* __result107__;
_Bool _if_conditional182;
_Bool _if_conditional183;
struct sClass* __result108__;
struct sClass* __result109__;
struct sClass* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_136, 0, sizeof(unsigned int));
memset(&it_137, 0, sizeof(unsigned int));
        hash_136=(come_push_stackframe("./neo-c.h", 1207, 1676),__exception_result_var_b129=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1674)), "./neo-c.h", 1207, 1675))), come_pop_stackframe(), __exception_result_var_b129)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1207, 1677)), "./neo-c.h", 1207, 1678))->size;
        it_137=hash_136;
        while(_while_condtional25=(_Bool)1,        _while_condtional25) {
            if(_if_conditional176=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1211, 1679)), "./neo-c.h", 1211, 1680))->item_existance, "./neo-c.h", 1211, 1681))[it_137],            _if_conditional176) {
                if(_if_conditional177=(come_push_stackframe("./neo-c.h", 1213, 1687),__exception_result_var_b130=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1213, 1682)), "./neo-c.h", 1213, 1683))->keys, "./neo-c.h", 1213, 1684))[it_137], "./neo-c.h", 1213, 1685)), "./neo-c.h", 1213, 1686)),key), come_pop_stackframe(), __exception_result_var_b130),                _if_conditional177) {
                    __result107__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1215, 1688)), "./neo-c.h", 1215, 1689))->items, "./neo-c.h", 1215, 1690))[it_137];
                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result107__;
                }
                it_137++;
                if(_if_conditional182=it_137>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1220, 1707)), "./neo-c.h", 1220, 1708))->size,                _if_conditional182) {
                    it_137=0;
                }
                else {
                    if(_if_conditional183=it_137==hash_136,                    _if_conditional183) {
                        __result108__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result108__;
                    }
                }
            }
            else {
                __result109__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result109__;
            }
        }
        __result110__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result110__;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional178=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1691)), "sClass_finalize", 0, 1692))->mName!=((void*)0),                        _if_conditional178) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1693)), "sClass_finalize", 0, 1694))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1693)), "sClass_finalize", 0, 1694))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional179=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1695)), "sClass_finalize", 1, 1696))->mFields!=((void*)0),                        _if_conditional179) {
                            come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1697)), "sClass_finalize", 1, 1698))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional180=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1699)), "sClass_finalize", 2, 1700))->mDeclareSName!=((void*)0),                        _if_conditional180) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1701)), "sClass_finalize", 2, 1702))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1701)), "sClass_finalize", 2, 1702))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional181=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1703)), "sClass_finalize", 3, 1704))->mParentClassName!=((void*)0),                        _if_conditional181) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1705)), "sClass_finalize", 3, 1706))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1705)), "sClass_finalize", 3, 1706))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional185;
unsigned int __exception_result_var_b146;
unsigned int hash_153;
unsigned int it_154;
_Bool _while_condtional27;
_Bool _if_conditional193;
_Bool __exception_result_var_b147;
_Bool _if_conditional194;
_Bool _if_conditional195;
struct list$1charp* __exception_result_var_b148;
struct list$1charp* __exception_result_var_b149;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
int __exception_result_var_b150;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool same_key_exist_155;
char* __exception_result_var_b151;
char* it2_156;
_Bool __exception_result_var_b152;
char* __exception_result_var_b153;
_Bool __exception_result_var_b154;
_Bool _if_conditional201;
_Bool _if_conditional202;
struct list$1charp* __exception_result_var_b155;
struct map$2charphsClassph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_153, 0, sizeof(unsigned int));
memset(&it_154, 0, sizeof(unsigned int));
memset(&same_key_exist_155, 0, sizeof(_Bool));
memset(&it2_156, 0, sizeof(char*));
            if(_if_conditional185=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1717)), "./neo-c.h", 1371, 1718))->len*10>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1719)), "./neo-c.h", 1371, 1720))->size,            _if_conditional185) {
                (come_push_stackframe("./neo-c.h", 1372,1821),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1372, 1721)), "./neo-c.h", 1372, 1722))),come_pop_stackframe());
            }
            hash_153=(come_push_stackframe("./neo-c.h", 1374, 1824),__exception_result_var_b146=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1822)), "./neo-c.h", 1374, 1823))), come_pop_stackframe(), __exception_result_var_b146)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1374, 1825)), "./neo-c.h", 1374, 1826))->size;
            it_154=hash_153;
            while(_while_condtional27=(_Bool)1,            _while_condtional27) {
                if(_if_conditional193=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1378, 1827)), "./neo-c.h", 1378, 1828))->item_existance, "./neo-c.h", 1378, 1829))[it_154],                _if_conditional193) {
                    if(_if_conditional194=(come_push_stackframe("./neo-c.h", 1380, 1835),__exception_result_var_b147=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1380, 1830)), "./neo-c.h", 1380, 1831))->keys, "./neo-c.h", 1380, 1832))[it_154], "./neo-c.h", 1380, 1833)), "./neo-c.h", 1380, 1834)),key), come_pop_stackframe(), __exception_result_var_b147),                    _if_conditional194) {
                        if(_if_conditional195=1,                        _if_conditional195) {
                            (come_push_stackframe("./neo-c.h", 1383, 1843),__exception_result_var_b148=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1836)), "./neo-c.h", 1383, 1837))->key_list, "./neo-c.h", 1383, 1838)), "./neo-c.h", 1383, 1839)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1840)), "./neo-c.h", 1383, 1841))->keys, "./neo-c.h", 1383, 1842))[it_154]), come_pop_stackframe(), __exception_result_var_b148);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1844)), "./neo-c.h", 1384, 1845))->keys, "./neo-c.h", 1384, 1846))[it_154] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1844)), "./neo-c.h", 1384, 1845))->keys, "./neo-c.h", 1384, 1846))[it_154], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1385, 1847)), "./neo-c.h", 1385, 1848))->keys, "./neo-c.h", 1385, 1849))[it_154]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            (come_push_stackframe("./neo-c.h", 1388, 1857),__exception_result_var_b149=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1850)), "./neo-c.h", 1388, 1851))->key_list, "./neo-c.h", 1388, 1852)), "./neo-c.h", 1388, 1853)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1854)), "./neo-c.h", 1388, 1855))->keys, "./neo-c.h", 1388, 1856))[it_154]), come_pop_stackframe(), __exception_result_var_b149);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1389, 1858)), "./neo-c.h", 1389, 1859))->keys, "./neo-c.h", 1389, 1860))[it_154]=key;
                        }
                        if(_if_conditional196=1,                        _if_conditional196) {
                            come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1392, 1861)), "./neo-c.h", 1392, 1862))->items, "./neo-c.h", 1392, 1863))[it_154],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1393, 1864)), "./neo-c.h", 1393, 1865))->items, "./neo-c.h", 1393, 1866))[it_154]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1396, 1867)), "./neo-c.h", 1396, 1868))->items, "./neo-c.h", 1396, 1869))[it_154]=item;
                        }
                        break;
                    }
                    it_154++;
                    if(_if_conditional197=it_154>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1403, 1870)), "./neo-c.h", 1403, 1871))->size,                    _if_conditional197) {
                        it_154=0;
                    }
                    else {
                        if(_if_conditional198=it_154==hash_153,                        _if_conditional198) {
                            (come_push_stackframe("./neo-c.h", 1407, 1872),__exception_result_var_b150=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b150);
                            (come_push_stackframe("./neo-c.h", 1408,1873),stackframe(),come_pop_stackframe());
                            (come_push_stackframe("./neo-c.h", 1409,1874),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    ((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1413, 1875)), "./neo-c.h", 1413, 1876))->item_existance, "./neo-c.h", 1413, 1877))[it_154]=(_Bool)1;
                    if(_if_conditional199=1,                    _if_conditional199) {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1415, 1878)), "./neo-c.h", 1415, 1879))->keys, "./neo-c.h", 1415, 1880))[it_154]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1418, 1881)), "./neo-c.h", 1418, 1882))->keys, "./neo-c.h", 1418, 1883))[it_154]=key;
                    }
                    if(_if_conditional200=1,                    _if_conditional200) {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1421, 1884)), "./neo-c.h", 1421, 1885))->items, "./neo-c.h", 1421, 1886))[it_154]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1424, 1887)), "./neo-c.h", 1424, 1888))->items, "./neo-c.h", 1424, 1889))[it_154]=item;
                    }
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1427, 1890)), "./neo-c.h", 1427, 1891))->len++;
                    break;
                }
            }
            same_key_exist_155=(_Bool)0;
            for(            it2_156=(come_push_stackframe("./neo-c.h", 1434, 1896),__exception_result_var_b151=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1892)), "./neo-c.h", 1434, 1893))->key_list, "./neo-c.h", 1434, 1894)), "./neo-c.h", 1434, 1895))), come_pop_stackframe(), __exception_result_var_b151);            !(come_push_stackframe("./neo-c.h", 1434, 1901),__exception_result_var_b152=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1897)), "./neo-c.h", 1434, 1898))->key_list, "./neo-c.h", 1434, 1899)), "./neo-c.h", 1434, 1900))), come_pop_stackframe(), __exception_result_var_b152);            it2_156=(come_push_stackframe("./neo-c.h", 1434, 1906),__exception_result_var_b153=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1902)), "./neo-c.h", 1434, 1903))->key_list, "./neo-c.h", 1434, 1904)), "./neo-c.h", 1434, 1905))), come_pop_stackframe(), __exception_result_var_b153)            ){
                if(_if_conditional201=(come_push_stackframe("./neo-c.h", 1436, 1909),__exception_result_var_b154=string_equals(((char*)come_null_check(((char*)come_null_check(it2_156, "./neo-c.h", 1436, 1907)), "./neo-c.h", 1436, 1908)),key), come_pop_stackframe(), __exception_result_var_b154),                _if_conditional201) {
                    same_key_exist_155=(_Bool)1;
                }
            }
            if(_if_conditional202=!same_key_exist_155,            _if_conditional202) {
                (come_push_stackframe("./neo-c.h", 1442, 1914),__exception_result_var_b155=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1442, 1910)), "./neo-c.h", 1442, 1911))->key_list, "./neo-c.h", 1442, 1912)), "./neo-c.h", 1442, 1913)),key), come_pop_stackframe(), __exception_result_var_b155);
            }
            __result118__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result118__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_138;
void* right_value134;
char** keys_139;
void* right_value135;
struct sClass** items_140;
void* right_value136;
_Bool* item_existance_141;
int len_142;
char* __exception_result_var_b136;
char* it_145;
_Bool __exception_result_var_b137;
char* __exception_result_var_b140;
struct sClass* default_value_148;
void* __exception_result_var_b141;
struct sClass* __exception_result_var_b142;
struct sClass* it2_149;
unsigned int __exception_result_var_b143;
unsigned int hash_150;
int n_151;
_Bool _while_condtional26;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
int __exception_result_var_b144;
struct sClass* default_value_152;
struct sClass* __exception_result_var_b145;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_138, 0, sizeof(int));
right_value134 = (void*)0;
memset(&keys_139, 0, sizeof(char**));
right_value135 = (void*)0;
memset(&items_140, 0, sizeof(struct sClass**));
right_value136 = (void*)0;
memset(&item_existance_141, 0, sizeof(_Bool*));
memset(&len_142, 0, sizeof(int));
memset(&it_145, 0, sizeof(char*));
memset(&default_value_148, 0, sizeof(struct sClass*));
memset(&it2_149, 0, sizeof(struct sClass*));
memset(&hash_150, 0, sizeof(unsigned int));
memset(&n_151, 0, sizeof(int));
memset(&default_value_152, 0, sizeof(struct sClass*));
                    size_138=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1318, 1723)), "./neo-c.h", 1318, 1724))->size*10;
                    keys_139=(char**)come_increment_ref_count(((char**)(right_value134=(char**)come_calloc(1, sizeof(char*)*(1*(size_138)), "./neo-c.h", 1319, "char*%"))));
                    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_140=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value135=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_138)), "./neo-c.h", 1320, "sClass*%"))));
                    come_call_finalizer3(right_value135,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_141=(_Bool*)come_increment_ref_count(((_Bool*)(right_value136=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_138)), "./neo-c.h", 1321, "bool"))));
                    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_142=0;
                    for(                    it_145=(come_push_stackframe("./neo-c.h", 1325, 1747),__exception_result_var_b136=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1725)), "./neo-c.h", 1325, 1726))), come_pop_stackframe(), __exception_result_var_b136);                    !(come_push_stackframe("./neo-c.h", 1325, 1756),__exception_result_var_b137=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1748)), "./neo-c.h", 1325, 1749))), come_pop_stackframe(), __exception_result_var_b137);                    it_145=(come_push_stackframe("./neo-c.h", 1325, 1785),__exception_result_var_b140=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1757)), "./neo-c.h", 1325, 1758))), come_pop_stackframe(), __exception_result_var_b140)                    ){
                        (come_push_stackframe("./neo-c.h", 1327, 1786),__exception_result_var_b141=memset(&default_value_148,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b141);
                        it2_149=(come_push_stackframe("./neo-c.h", 1328, 1789),__exception_result_var_b142=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1328, 1787)), "./neo-c.h", 1328, 1788)),it_145,default_value_148), come_pop_stackframe(), __exception_result_var_b142);
                        hash_150=(come_push_stackframe("./neo-c.h", 1329, 1792),__exception_result_var_b143=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_145, "./neo-c.h", 1329, 1790)), "./neo-c.h", 1329, 1791))), come_pop_stackframe(), __exception_result_var_b143)%size_138;
                        n_151=hash_150;
                        while(_while_condtional26=(_Bool)1,                        _while_condtional26) {
                            if(_if_conditional190=((_Bool*)come_null_check(item_existance_141, "./neo-c.h", 1333, 1793))[n_151],                            _if_conditional190) {
                                n_151++;
                                if(_if_conditional191=n_151>=size_138,                                _if_conditional191) {
                                    n_151=0;
                                }
                                else {
                                    if(_if_conditional192=n_151==hash_150,                                    _if_conditional192) {
                                        (come_push_stackframe("./neo-c.h", 1341, 1794),__exception_result_var_b144=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b144);
                                        (come_push_stackframe("./neo-c.h", 1342,1795),stackframe(),come_pop_stackframe());
                                        (come_push_stackframe("./neo-c.h", 1343,1796),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                ((_Bool*)come_null_check(item_existance_141, "./neo-c.h", 1347, 1797))[n_151]=(_Bool)1;
                                ((char**)come_null_check(keys_139, "./neo-c.h", 1348, 1798))[n_151]=it_145;
                                ((struct sClass**)come_null_check(items_140, "./neo-c.h", 1350, 1799))[n_151]=(come_push_stackframe("./neo-c.h", 1350, 1802),__exception_result_var_b145=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1350, 1800)), "./neo-c.h", 1350, 1801)),it_145,default_value_152), come_pop_stackframe(), __exception_result_var_b145);
                                len_142++;
                                break;
                            }
                        }
                    }
                    (come_push_stackframe("./neo-c.h", 1358,1805),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1358, 1803)), "./neo-c.h", 1358, 1804))->items),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1806)), "./neo-c.h", 1359, 1807))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1806)), "./neo-c.h", 1359, 1807))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (come_push_stackframe("./neo-c.h", 1360,1810),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1360, 1808)), "./neo-c.h", 1360, 1809))->keys),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1362, 1811)), "./neo-c.h", 1362, 1812))->keys=keys_139;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1363, 1813)), "./neo-c.h", 1363, 1814))->items=items_140;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1364, 1815)), "./neo-c.h", 1364, 1816))->item_existance=item_existance_141;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1366, 1817)), "./neo-c.h", 1366, 1818))->size=size_138;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1367, 1819)), "./neo-c.h", 1367, 1820))->len=len_142;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional186;
char* result_143;
void* __exception_result_var_b134;
char* __result111__;
_Bool _if_conditional187;
char* __result112__;
char* result_144;
void* __exception_result_var_b135;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_143, 0, sizeof(char*));
memset(&result_144, 0, sizeof(char*));
                        if(_if_conditional186=self==((void*)0),                        _if_conditional186) {
                            (come_push_stackframe("./neo-c.h", 1282, 1727),__exception_result_var_b134=memset(&result_143,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b134);
                            __result111__ = __result_obj__ = result_143;
                            return __result111__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1728)), "./neo-c.h", 1285, 1729))->key_list, "./neo-c.h", 1285, 1730)), "./neo-c.h", 1285, 1731))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1732)), "./neo-c.h", 1285, 1733))->key_list, "./neo-c.h", 1285, 1734)), "./neo-c.h", 1285, 1735))->head;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1287, 1736)), "./neo-c.h", 1287, 1737))->key_list, "./neo-c.h", 1287, 1738)), "./neo-c.h", 1287, 1739))->it) {
                            __result112__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1288, 1740)), "./neo-c.h", 1288, 1741))->key_list, "./neo-c.h", 1288, 1742)), "./neo-c.h", 1288, 1743))->it, "./neo-c.h", 1288, 1744)), "./neo-c.h", 1288, 1745))->item;
                            return __result112__;
                        }
                        (come_push_stackframe("./neo-c.h", 1292, 1746),__exception_result_var_b135=memset(&result_144,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b135);
                        __result113__ = __result_obj__ = result_144;
                        return __result113__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result114__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1750)), "./neo-c.h", 1314, 1751))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1752)), "./neo-c.h", 1314, 1753))->key_list, "./neo-c.h", 1314, 1754)), "./neo-c.h", 1314, 1755))->it==((void*)0);
                        return __result114__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional188;
char* result_146;
void* __exception_result_var_b138;
char* __result115__;
_Bool _if_conditional189;
char* __result116__;
char* result_147;
void* __exception_result_var_b139;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(char*));
memset(&result_147, 0, sizeof(char*));
                        if(_if_conditional188=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1297, 1759)), "./neo-c.h", 1297, 1760))->key_list, "./neo-c.h", 1297, 1761)), "./neo-c.h", 1297, 1762))->it==((void*)0),                        _if_conditional188) {
                            (come_push_stackframe("./neo-c.h", 1299, 1763),__exception_result_var_b138=memset(&result_146,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b138);
                            __result115__ = __result_obj__ = result_146;
                            return __result115__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1764)), "./neo-c.h", 1302, 1765))->key_list, "./neo-c.h", 1302, 1766)), "./neo-c.h", 1302, 1767))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1768)), "./neo-c.h", 1302, 1769))->key_list, "./neo-c.h", 1302, 1770)), "./neo-c.h", 1302, 1771))->it, "./neo-c.h", 1302, 1772)), "./neo-c.h", 1302, 1773))->next;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1304, 1774)), "./neo-c.h", 1304, 1775))->key_list, "./neo-c.h", 1304, 1776)), "./neo-c.h", 1304, 1777))->it) {
                            __result116__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1305, 1778)), "./neo-c.h", 1305, 1779))->key_list, "./neo-c.h", 1305, 1780)), "./neo-c.h", 1305, 1781))->it, "./neo-c.h", 1305, 1782)), "./neo-c.h", 1305, 1783))->item;
                            return __result116__;
                        }
                        (come_push_stackframe("./neo-c.h", 1309, 1784),__exception_result_var_b139=memset(&result_147,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b139);
                        __result117__ = __result_obj__ = result_147;
                        return __result117__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional203;
struct sClass* __result119__;
void* right_value138;
struct sClass* result_157;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
char* __exception_result_var_b157;
void* right_value139;
char* __dec_obj37;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b163;
void* right_value149;
struct list$1tuple2$2charphsTypephph* __dec_obj43;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
char* __exception_result_var_b164;
void* right_value150;
char* __dec_obj44;
_Bool _if_conditional233;
_Bool _if_conditional234;
char* __exception_result_var_b165;
void* right_value151;
char* __dec_obj45;
struct sClass* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&result_157, 0, sizeof(struct sClass*));
right_value139 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
            if(_if_conditional203=self==(void*)0,            _if_conditional203) {
                __result119__ = __result_obj__ = (void*)0;
                return __result119__;
            }
            result_157=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value138=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value138,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional204=self!=((void*)0),            _if_conditional204) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 4, 1916)), "sClass_clone", 4, 1917))->mStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 4, 1918)), "sClass_clone", 4, 1919))->mStruct;
            }
            if(_if_conditional205=self!=((void*)0),            _if_conditional205) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 5, 1920)), "sClass_clone", 5, 1921))->mFloat=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 5, 1922)), "sClass_clone", 5, 1923))->mFloat;
            }
            if(_if_conditional206=self!=((void*)0),            _if_conditional206) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 6, 1924)), "sClass_clone", 6, 1925))->mUnion=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 6, 1926)), "sClass_clone", 6, 1927))->mUnion;
            }
            if(_if_conditional207=self!=((void*)0),            _if_conditional207) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 7, 1928)), "sClass_clone", 7, 1929))->mGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 7, 1930)), "sClass_clone", 7, 1931))->mGenerics;
            }
            if(_if_conditional208=self!=((void*)0),            _if_conditional208) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 8, 1932)), "sClass_clone", 8, 1933))->mMethodGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 8, 1934)), "sClass_clone", 8, 1935))->mMethodGenerics;
            }
            if(_if_conditional209=self!=((void*)0),            _if_conditional209) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 9, 1936)), "sClass_clone", 9, 1937))->mEnum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 9, 1938)), "sClass_clone", 9, 1939))->mEnum;
            }
            if(_if_conditional210=self!=((void*)0),            _if_conditional210) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 10, 1940)), "sClass_clone", 10, 1941))->mProtocol=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 10, 1942)), "sClass_clone", 10, 1943))->mProtocol;
            }
            if(_if_conditional211=self!=((void*)0),            _if_conditional211) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 11, 1944)), "sClass_clone", 11, 1945))->mNumber=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 11, 1946)), "sClass_clone", 11, 1947))->mNumber;
            }
            if(_if_conditional212=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 1948)), "sClass_clone", 12, 1949))->mName!=((void*)0),            _if_conditional212) {
                __dec_obj37=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 12, 1950)), "sClass_clone", 12, 1951))->mName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 12, 1950)), "sClass_clone", 12, 1951))->mName=(char*)come_increment_ref_count(((char*)(right_value139=(come_push_stackframe("sClass_clone", 12, 1954),__exception_result_var_b157=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 1952)), "sClass_clone", 12, 1953))->mName), come_pop_stackframe(), __exception_result_var_b157))));
                __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional213=self!=((void*)0),            _if_conditional213) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 13, 1955)), "sClass_clone", 13, 1956))->mGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 13, 1957)), "sClass_clone", 13, 1958))->mGenericsNum;
            }
            if(_if_conditional214=self!=((void*)0),            _if_conditional214) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 14, 1959)), "sClass_clone", 14, 1960))->mMethodGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 14, 1961)), "sClass_clone", 14, 1962))->mMethodGenericsNum;
            }
            if(_if_conditional215=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 1963)), "sClass_clone", 15, 1964))->mFields!=((void*)0),            _if_conditional215) {
                __dec_obj43=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 15, 1965)), "sClass_clone", 15, 1966))->mFields;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 15, 1965)), "sClass_clone", 15, 1966))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value149=(come_push_stackframe("sClass_clone", 15, 2078),__exception_result_var_b163=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 1967)), "sClass_clone", 15, 1968))->mFields), come_pop_stackframe(), __exception_result_var_b163))));
                come_call_finalizer3(__dec_obj43,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value149,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional230=self!=((void*)0),            _if_conditional230) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 16, 2083)), "sClass_clone", 16, 2084))->mOutputed=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 16, 2085)), "sClass_clone", 16, 2086))->mOutputed;
            }
            if(_if_conditional231=self!=((void*)0),            _if_conditional231) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 17, 2087)), "sClass_clone", 17, 2088))->mOutputed2=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 17, 2089)), "sClass_clone", 17, 2090))->mOutputed2;
            }
            if(_if_conditional232=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 2091)), "sClass_clone", 18, 2092))->mDeclareSName!=((void*)0),            _if_conditional232) {
                __dec_obj44=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 18, 2093)), "sClass_clone", 18, 2094))->mDeclareSName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 18, 2093)), "sClass_clone", 18, 2094))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value150=(come_push_stackframe("sClass_clone", 18, 2097),__exception_result_var_b164=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 2095)), "sClass_clone", 18, 2096))->mDeclareSName), come_pop_stackframe(), __exception_result_var_b164))));
                __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional233=self!=((void*)0),            _if_conditional233) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 19, 2098)), "sClass_clone", 19, 2099))->mNobodyStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 19, 2100)), "sClass_clone", 19, 2101))->mNobodyStruct;
            }
            if(_if_conditional234=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 2102)), "sClass_clone", 20, 2103))->mParentClassName!=((void*)0),            _if_conditional234) {
                __dec_obj45=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 20, 2104)), "sClass_clone", 20, 2105))->mParentClassName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_157, "sClass_clone", 20, 2104)), "sClass_clone", 20, 2105))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value151=(come_push_stackframe("sClass_clone", 20, 2108),__exception_result_var_b165=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 2106)), "sClass_clone", 20, 2107))->mParentClassName), come_pop_stackframe(), __exception_result_var_b165))));
                __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result126__ = __result_obj__ = result_157;
            come_call_finalizer3(result_157,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
            come_call_finalizer3(result_157,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional216;
struct list$1tuple2$2charphsTypephph* __result120__;
void* right_value140;
void* right_value141;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b158;
struct list$1tuple2$2charphsTypephph* result_158;
struct list_item$1tuple2$2charphsTypephph* it_159;
_Bool _while_condtional28;
struct tuple2$2charphsTypeph* __exception_result_var_b161;
void* right_value148;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b162;
struct list$1tuple2$2charphsTypephph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&result_158, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_159, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value148 = (void*)0;
                    if(_if_conditional216=self==((void*)0),                    _if_conditional216) {
                        __result120__ = __result_obj__ = ((void*)0);
                        return __result120__;
                    }
                    result_158=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1977),__exception_result_var_b158=((struct list$1tuple2$2charphsTypephph*)(right_value141=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value140=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsTypephph"))), "./neo-c.h", 139, 1969)), "./neo-c.h", 139, 1970)))))), come_pop_stackframe(), __exception_result_var_b158));
                    come_call_finalizer3(right_value140,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value141,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_159=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 141, 1978)), "./neo-c.h", 141, 1979))->head;
                    while(_while_condtional28=it_159!=((void*)0),                    _while_condtional28) {
                        (come_push_stackframe("./neo-c.h", 143, 2075),__exception_result_var_b162=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_158, "./neo-c.h", 143, 1980)), "./neo-c.h", 143, 1981)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value148=(come_push_stackframe("./neo-c.h", 143, 2074),__exception_result_var_b161=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_159, "./neo-c.h", 143, 2050)), "./neo-c.h", 143, 2051))->item), come_pop_stackframe(), __exception_result_var_b161))))), come_pop_stackframe(), __exception_result_var_b162);
                        come_call_finalizer3(right_value148,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_159=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_159, "./neo-c.h", 145, 2076)), "./neo-c.h", 145, 2077))->next;
                    }
                    __result125__ = __result_obj__ = result_158;
                    come_call_finalizer3(result_158,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result125__;
                    come_call_finalizer3(result_158,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 101, 1971)), "./neo-c.h", 101, 1972))->head=((void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 102, 1973)), "./neo-c.h", 102, 1974))->tail=((void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 103, 1975)), "./neo-c.h", 103, 1976))->len=0;
                        __result121__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result121__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional217;
void* right_value142;
struct list_item$1tuple2$2charphsTypephph* litem_160;
struct tuple2$2charphsTypeph* __dec_obj38;
_Bool _if_conditional220;
void* right_value143;
struct list_item$1tuple2$2charphsTypephph* litem_161;
struct tuple2$2charphsTypeph* __dec_obj39;
void* right_value144;
struct list_item$1tuple2$2charphsTypephph* litem_162;
struct tuple2$2charphsTypeph* __dec_obj40;
struct list$1tuple2$2charphsTypephph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value143 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value144 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional217=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 152, 1982)), "./neo-c.h", 152, 1983))->len==0,                            _if_conditional217) {
                                litem_160=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value142=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value142,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_160, "./neo-c.h", 155, 1984)), "./neo-c.h", 155, 1985))->prev=((void*)0);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_160, "./neo-c.h", 156, 1986)), "./neo-c.h", 156, 1987))->next=((void*)0);
                                __dec_obj38=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_160, "./neo-c.h", 157, 1988)), "./neo-c.h", 157, 1989))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_160, "./neo-c.h", 157, 1988)), "./neo-c.h", 157, 1989))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj38,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 159, 1998)), "./neo-c.h", 159, 1999))->tail=litem_160;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 160, 2000)), "./neo-c.h", 160, 2001))->head=litem_160;
                            }
                            else {
                                if(_if_conditional220=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 162, 2002)), "./neo-c.h", 162, 2003))->len==1,                                _if_conditional220) {
                                    litem_161=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value143=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value143,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_161, "./neo-c.h", 165, 2004)), "./neo-c.h", 165, 2005))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 165, 2006)), "./neo-c.h", 165, 2007))->head;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_161, "./neo-c.h", 166, 2008)), "./neo-c.h", 166, 2009))->next=((void*)0);
                                    __dec_obj39=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_161, "./neo-c.h", 167, 2010)), "./neo-c.h", 167, 2011))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_161, "./neo-c.h", 167, 2010)), "./neo-c.h", 167, 2011))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj39,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 169, 2020)), "./neo-c.h", 169, 2021))->tail=litem_161;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 170, 2022)), "./neo-c.h", 170, 2023))->head, "./neo-c.h", 170, 2024)), "./neo-c.h", 170, 2025))->next=litem_161;
                                }
                                else {
                                    litem_162=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value144=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value144,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_162, "./neo-c.h", 175, 2026)), "./neo-c.h", 175, 2027))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 175, 2028)), "./neo-c.h", 175, 2029))->tail;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_162, "./neo-c.h", 176, 2030)), "./neo-c.h", 176, 2031))->next=((void*)0);
                                    __dec_obj40=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_162, "./neo-c.h", 177, 2032)), "./neo-c.h", 177, 2033))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_162, "./neo-c.h", 177, 2032)), "./neo-c.h", 177, 2033))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj40,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 179, 2042)), "./neo-c.h", 179, 2043))->tail, "./neo-c.h", 179, 2044)), "./neo-c.h", 179, 2045))->next=litem_162;
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 180, 2046)), "./neo-c.h", 180, 2047))->tail=litem_162;
                                }
                            }
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 183, 2048)), "./neo-c.h", 183, 2049))->len++;
                            __result122__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result122__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional223=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2034)), "tuple2$2charphsTypephp_finalize", 0, 2035))->v1!=((void*)0),                                        _if_conditional223) {
                                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2036)), "tuple2$2charphsTypephp_finalize", 0, 2037))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2036)), "tuple2$2charphsTypephp_finalize", 0, 2037))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional224=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 2038)), "tuple2$2charphsTypephp_finalize", 1, 2039))->v2!=((void*)0),                                        _if_conditional224) {
                                            come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 2040)), "tuple2$2charphsTypephp_finalize", 1, 2041))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional225;
struct tuple2$2charphsTypeph* __result123__;
void* right_value145;
struct tuple2$2charphsTypeph* result_163;
_Bool _if_conditional228;
char* __exception_result_var_b159;
void* right_value146;
char* __dec_obj41;
_Bool _if_conditional229;
struct sType* __exception_result_var_b160;
void* right_value147;
struct sType* __dec_obj42;
struct tuple2$2charphsTypeph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
memset(&result_163, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value146 = (void*)0;
right_value147 = (void*)0;
                            if(_if_conditional225=self==(void*)0,                            _if_conditional225) {
                                __result123__ = __result_obj__ = (void*)0;
                                return __result123__;
                            }
                            result_163=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value145=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value145,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional228=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 2060)), "tuple2$2charphsTypephp_clone", 4, 2061))->v1!=((void*)0),                            _if_conditional228) {
                                __dec_obj41=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_163, "tuple2$2charphsTypephp_clone", 4, 2062)), "tuple2$2charphsTypephp_clone", 4, 2063))->v1;
                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_163, "tuple2$2charphsTypephp_clone", 4, 2062)), "tuple2$2charphsTypephp_clone", 4, 2063))->v1=(char*)come_increment_ref_count(((char*)(right_value146=(come_push_stackframe("tuple2$2charphsTypephp_clone", 4, 2066),__exception_result_var_b159=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 2064)), "tuple2$2charphsTypephp_clone", 4, 2065))->v1), come_pop_stackframe(), __exception_result_var_b159))));
                                __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional229=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 2067)), "tuple2$2charphsTypephp_clone", 5, 2068))->v2!=((void*)0),                            _if_conditional229) {
                                __dec_obj42=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_163, "tuple2$2charphsTypephp_clone", 5, 2069)), "tuple2$2charphsTypephp_clone", 5, 2070))->v2;
                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_163, "tuple2$2charphsTypephp_clone", 5, 2069)), "tuple2$2charphsTypephp_clone", 5, 2070))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(come_push_stackframe("tuple2$2charphsTypephp_clone", 5, 2073),__exception_result_var_b160=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 2071)), "tuple2$2charphsTypephp_clone", 5, 2072))->v2), come_pop_stackframe(), __exception_result_var_b160))));
                                come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            __result124__ = __result_obj__ = result_163;
                            come_call_finalizer3(result_163,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result124__;
                            come_call_finalizer3(result_163,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional226;
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional226=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2052)), "tuple2$2charphsTypeph_finalize", 0, 2053))->v1!=((void*)0),                                _if_conditional226) {
                                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2054)), "tuple2$2charphsTypeph_finalize", 0, 2055))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2054)), "tuple2$2charphsTypeph_finalize", 0, 2055))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional227=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 2056)), "tuple2$2charphsTypeph_finalize", 1, 2057))->v2!=((void*)0),                                _if_conditional227) {
                                    come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 2058)), "tuple2$2charphsTypeph_finalize", 1, 2059))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_164;
_Bool _while_condtional29;
struct list_item$1tuple2$2charphsTypephph* prev_it_165;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_164, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_165, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_164=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 2079)), "./neo-c.h", 120, 2080))->head;
                    while(_while_condtional29=it_164!=((void*)0),                    _while_condtional29) {
                        prev_it_165=it_164;
                        it_164=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_164, "./neo-c.h", 123, 2081)), "./neo-c.h", 123, 2082))->next;
                        come_call_finalizer3(prev_it_165,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional236;
_Bool _if_conditional237;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional236=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 2126)), "tuple3$3sTypephcharphboolp_finalize", 0, 2127))->v1!=((void*)0),            _if_conditional236) {
                come_call_finalizer3(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 2128)), "tuple3$3sTypephcharphboolp_finalize", 0, 2129))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional237=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2130)), "tuple3$3sTypephcharphboolp_finalize", 1, 2131))->v2!=((void*)0),            _if_conditional237) {
                ((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2132)), "tuple3$3sTypephcharphboolp_finalize", 1, 2133))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2132)), "tuple3$3sTypephcharphboolp_finalize", 1, 2133))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional240;
void* right_value157;
struct list_item$1tuple2$2charphsTypephph* litem_170;
struct tuple2$2charphsTypeph* __dec_obj47;
_Bool _if_conditional241;
void* right_value158;
struct list_item$1tuple2$2charphsTypephph* litem_171;
struct tuple2$2charphsTypeph* __dec_obj48;
void* right_value159;
struct list_item$1tuple2$2charphsTypephph* litem_172;
struct tuple2$2charphsTypeph* __dec_obj49;
struct list$1tuple2$2charphsTypephph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
memset(&litem_170, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value158 = (void*)0;
memset(&litem_171, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value159 = (void*)0;
memset(&litem_172, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(_if_conditional240=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 222, 2147)), "./neo-c.h", 222, 2148))->len==0,                _if_conditional240) {
                    litem_170=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value157=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value157,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_170, "./neo-c.h", 225, 2149)), "./neo-c.h", 225, 2150))->prev=((void*)0);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_170, "./neo-c.h", 226, 2151)), "./neo-c.h", 226, 2152))->next=((void*)0);
                    __dec_obj47=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_170, "./neo-c.h", 227, 2153)), "./neo-c.h", 227, 2154))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_170, "./neo-c.h", 227, 2153)), "./neo-c.h", 227, 2154))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj47,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 229, 2155)), "./neo-c.h", 229, 2156))->tail=litem_170;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 230, 2157)), "./neo-c.h", 230, 2158))->head=litem_170;
                }
                else {
                    if(_if_conditional241=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 232, 2159)), "./neo-c.h", 232, 2160))->len==1,                    _if_conditional241) {
                        litem_171=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value158=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value158,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_171, "./neo-c.h", 235, 2161)), "./neo-c.h", 235, 2162))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 235, 2163)), "./neo-c.h", 235, 2164))->head;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_171, "./neo-c.h", 236, 2165)), "./neo-c.h", 236, 2166))->next=((void*)0);
                        __dec_obj48=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_171, "./neo-c.h", 237, 2167)), "./neo-c.h", 237, 2168))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_171, "./neo-c.h", 237, 2167)), "./neo-c.h", 237, 2168))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj48,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 239, 2169)), "./neo-c.h", 239, 2170))->tail=litem_171;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 240, 2171)), "./neo-c.h", 240, 2172))->head, "./neo-c.h", 240, 2173)), "./neo-c.h", 240, 2174))->next=litem_171;
                    }
                    else {
                        litem_172=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value159=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value159,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_172, "./neo-c.h", 245, 2175)), "./neo-c.h", 245, 2176))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 245, 2177)), "./neo-c.h", 245, 2178))->tail;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_172, "./neo-c.h", 246, 2179)), "./neo-c.h", 246, 2180))->next=((void*)0);
                        __dec_obj49=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_172, "./neo-c.h", 247, 2181)), "./neo-c.h", 247, 2182))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_172, "./neo-c.h", 247, 2181)), "./neo-c.h", 247, 2182))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj49,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 249, 2183)), "./neo-c.h", 249, 2184))->tail, "./neo-c.h", 249, 2185)), "./neo-c.h", 249, 2186))->next=litem_172;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 250, 2187)), "./neo-c.h", 250, 2188))->tail=litem_172;
                    }
                }
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 253, 2189)), "./neo-c.h", 253, 2190))->len++;
                __result127__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result127__;
                come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj50;
struct sType* __dec_obj51;
struct tuple2$2charphsTypeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj50=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 2191)), "./neo-c.h", 1744, 2192))->v1;
                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 2191)), "./neo-c.h", 1744, 2192))->v1=(char*)come_increment_ref_count(v1);
                __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj51=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 2193)), "./neo-c.h", 1745, 2194))->v2;
                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 2193)), "./neo-c.h", 1745, 2194))->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                __result128__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result128__;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b180;
_Bool _if_conditional250;
char* source_head_174;
void* right_value168;
char* __exception_result_var_b181;
char* type_name_175;
struct sClass* __exception_result_var_b182;
_Bool _if_conditional251;
void* right_value169;
void* right_value170;
char* __exception_result_var_b183;
void* right_value171;
struct sClass* __exception_result_var_b184;
struct map$2charphsClassph* __exception_result_var_b185;
_Bool output_176;
struct sClass* __exception_result_var_b186;
int __exception_result_var_b187;
_Bool _if_conditional252;
void* right_value172;
void* right_value173;
struct sType* __exception_result_var_b188;
struct sType* type_177;
int __exception_result_var_b189;
_Bool _while_condtional31;
void* right_value174;
struct tuple3$3sTypephcharphbool* __exception_result_var_b190;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type2_178;
char* name_179;
_Bool err_180;
_Bool _if_conditional253;
int __exception_result_var_b191;
int __exception_result_var_b192;
_Bool _if_conditional254;
void* right_value175;
void* right_value176;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b193;
_Bool _if_conditional255;
char* source_tail_181;
void* right_value177;
void* right_value178;
struct buffer* __exception_result_var_b194;
struct buffer* header_182;
struct buffer* __exception_result_var_b195;
struct buffer* __exception_result_var_b196;
void* right_value179;
char* __exception_result_var_b197;
void* right_value180;
void* right_value181;
struct sUnionNode* __exception_result_var_b198;
struct sNode* _inf_value2;
struct sUnionNode* _inf_obj_value2;
void* right_value185;
struct sNode* __result134__;
void* right_value186;
struct sNode* __exception_result_var_b201;
struct sNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_174, 0, sizeof(char*));
right_value168 = (void*)0;
memset(&type_name_175, 0, sizeof(char*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&output_176, 0, sizeof(_Bool));
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&type_177, 0, sizeof(struct sType*));
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&source_tail_181, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&header_182, 0, sizeof(struct buffer*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
    if(_if_conditional250=(come_push_stackframe("15union.c", 109, 2234),__exception_result_var_b180=charp_operator_equals(buf,"union"), come_pop_stackframe(), __exception_result_var_b180),    _if_conditional250) {
        source_head_174=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 110, 2235)), "15union.c", 110, 2236))->p;
        type_name_175=(char*)come_increment_ref_count((come_push_stackframe("15union.c", 112, 2237),__exception_result_var_b181=((char*)(right_value168=parse_word(info))), come_pop_stackframe(), __exception_result_var_b181));
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional251=(come_push_stackframe("15union.c", 114, 2242),__exception_result_var_b182=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 114, 2238)), "15union.c", 114, 2239))->classes, "15union.c", 114, 2240)), "15union.c", 114, 2241)),type_name_175,((void*)0)), come_pop_stackframe(), __exception_result_var_b182)==((void*)0),        _if_conditional251) {
            (come_push_stackframe("15union.c", 115, 2250),__exception_result_var_b185=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 115, 2243)), "15union.c", 115, 2244))->classes, "15union.c", 115, 2245)), "15union.c", 115, 2246)),(char*)come_increment_ref_count(type_name_175),(struct sClass*)come_increment_ref_count((come_push_stackframe("15union.c", 115, 2249),__exception_result_var_b184=((struct sClass*)(right_value171=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value169=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "15union.c", 115, "sClass"))), "15union.c", 115, 2247))),(come_push_stackframe("15union.c", 115, 2248),__exception_result_var_b183=((char*)(right_value170=__builtin_string(type_name_175))), come_pop_stackframe(), __exception_result_var_b183),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b184))), come_pop_stackframe(), __exception_result_var_b185);
            come_call_finalizer3(right_value169,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value171,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        output_176=(_Bool)0;
        if(_if_conditional252=(come_push_stackframe("15union.c", 119, 2260),__exception_result_var_b187=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check((come_push_stackframe("15union.c", 119, 2255),__exception_result_var_b186=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 119, 2251)), "15union.c", 119, 2252))->classes, "15union.c", 119, 2253)), "15union.c", 119, 2254)),type_name_175,((void*)0)), come_pop_stackframe(), __exception_result_var_b186), "15union.c", 119, 2256)), "15union.c", 119, 2257))->mFields, "15union.c", 119, 2258)), "15union.c", 119, 2259))), come_pop_stackframe(), __exception_result_var_b187)==0,        _if_conditional252) {
            output_176=(_Bool)1;
        }
        type_177=(struct sType*)come_increment_ref_count((come_push_stackframe("15union.c", 123, 2262),__exception_result_var_b188=((struct sType*)(right_value173=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value172=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "15union.c", 123, "sType"))), "15union.c", 123, 2261))),type_name_175,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b188));
        come_call_finalizer3(right_value172,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("15union.c", 125, 2263),__exception_result_var_b189=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b189);
        while(_while_condtional31=(_Bool)1,        _while_condtional31) {
            multiple_assign_var3=(come_push_stackframe("15union.c", 130, 2264),__exception_result_var_b190=((struct tuple3$3sTypephcharphbool*)(right_value174=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b190);
            type2_178=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_179=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_180=multiple_assign_var3->v3;
            come_call_finalizer3(right_value174,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional253=!err_180,            _if_conditional253) {
                (come_push_stackframe("15union.c", 132, 2269),__exception_result_var_b191=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 132, 2265)), "15union.c", 132, 2266))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 132, 2267)), "15union.c", 132, 2268))->sline), come_pop_stackframe(), __exception_result_var_b191);
                (come_push_stackframe("15union.c", 133,2270),exit(2),come_pop_stackframe());
            }
            (come_push_stackframe("15union.c", 135, 2271),__exception_result_var_b192=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b192);
            if(output_176) {
                (come_push_stackframe("15union.c", 138, 2278),__exception_result_var_b193=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type_177, "15union.c", 138, 2272)), "15union.c", 138, 2273))->mClass, "15union.c", 138, 2274)), "15union.c", 138, 2275))->mFields, "15union.c", 138, 2276)), "15union.c", 138, 2277)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value176=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value175=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "15union.c", 138, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_179),(struct sType*)come_increment_ref_count(type2_178)))))), come_pop_stackframe(), __exception_result_var_b193);
                come_call_finalizer3(right_value175,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value176,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional255=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 141, 2279)), "15union.c", 141, 2280))->p, "15union.c", 141, 2281))==125,            _if_conditional255) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 142, 2282)), "15union.c", 142, 2283))->p++;
                (come_push_stackframe("15union.c", 143,2284),skip_spaces_and_lf(info),come_pop_stackframe());
                come_call_finalizer3(type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_179 = come_decrement_ref_count2(name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_179 = come_decrement_ref_count2(name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        source_tail_181=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 148, 2285)), "15union.c", 148, 2286))->p;
        header_182=(struct buffer*)come_increment_ref_count((come_push_stackframe("15union.c", 150, 2288),__exception_result_var_b194=((struct buffer*)(right_value178=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value177=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "15union.c", 150, "buffer"))), "15union.c", 150, 2287)))))), come_pop_stackframe(), __exception_result_var_b194));
        come_call_finalizer3(right_value177,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value178,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("15union.c", 151, 2291),__exception_result_var_b195=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_182, "15union.c", 151, 2289)), "15union.c", 151, 2290)),"union "), come_pop_stackframe(), __exception_result_var_b195);
        (come_push_stackframe("15union.c", 152, 2294),__exception_result_var_b196=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_182, "15union.c", 152, 2292)), "15union.c", 152, 2293)),source_head_174,source_tail_181-source_head_174), come_pop_stackframe(), __exception_result_var_b196);
        (come_push_stackframe("15union.c", 154,2298),add_come_code_at_come_header(info,"%s;\n",(come_push_stackframe("15union.c", 154, 2297),__exception_result_var_b197=((char*)(right_value179=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_182, "15union.c", 154, 2295)), "15union.c", 154, 2296))))), come_pop_stackframe(), __exception_result_var_b197)),come_pop_stackframe());
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "15union.c", 156, "struct sNode");
        _inf_obj_value2=come_increment_ref_count((come_push_stackframe("15union.c", 156, 2300),__exception_result_var_b198=((struct sUnionNode*)(right_value181=sUnionNode_initialize((struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)come_null_check(((struct sUnionNode*)(right_value180=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "15union.c", 156, "sUnionNode"))), "15union.c", 156, 2299))),(struct sType*)come_increment_ref_count(type_177),output_176,info))), come_pop_stackframe(), __exception_result_var_b198));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sUnionNode_finalize;
        _inf_value2->clone=(void*)sUnionNode_clone;
        _inf_value2->compile=(void*)sUnionNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sUnionNode_terminated;
        _inf_value2->kind=(void*)sUnionNode_kind;
        __result134__ = __result_obj__ = ((struct sNode*)(right_value185=_inf_value2));
        type_name_175 = come_decrement_ref_count2(type_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_182,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value180,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value181,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result134__;
        type_name_175 = come_decrement_ref_count2(type_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result135__ = __result_obj__ = (come_push_stackframe("15union.c", 159, 2331),__exception_result_var_b201=((struct sNode*)(right_value186=top_level_v96(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b201);
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result135__;
}

static void sUnionNode_finalize(struct sUnionNode* self){
void* __result_obj__;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional256=self!=((void*)0)&&((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 0, 2301)), "sUnionNode_finalize", 0, 2302))->sname!=((void*)0),            _if_conditional256) {
                ((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 0, 2303)), "sUnionNode_finalize", 0, 2304))->sname = come_decrement_ref_count2(((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 0, 2303)), "sUnionNode_finalize", 0, 2304))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional257=self!=((void*)0)&&((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 1, 2305)), "sUnionNode_finalize", 1, 2306))->mType!=((void*)0),            _if_conditional257) {
                come_call_finalizer3(((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_finalize", 1, 2307)), "sUnionNode_finalize", 1, 2308))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sUnionNode* sUnionNode_clone(struct sUnionNode* self){
void* __result_obj__;
_Bool _if_conditional258;
struct sUnionNode* __result132__;
void* right_value182;
struct sUnionNode* result_183;
_Bool _if_conditional259;
_Bool _if_conditional260;
char* __exception_result_var_b199;
void* right_value183;
char* __dec_obj54;
_Bool _if_conditional261;
struct sType* __exception_result_var_b200;
void* right_value184;
struct sType* __dec_obj55;
_Bool _if_conditional262;
struct sUnionNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
memset(&result_183, 0, sizeof(struct sUnionNode*));
right_value183 = (void*)0;
right_value184 = (void*)0;
            if(_if_conditional258=self==(void*)0,            _if_conditional258) {
                __result132__ = __result_obj__ = (void*)0;
                return __result132__;
            }
            result_183=(struct sUnionNode*)come_increment_ref_count(((struct sUnionNode*)(right_value182=(struct sUnionNode*)come_calloc(1, sizeof(struct sUnionNode)*(1), "sUnionNode_clone", 3, "sUnionNode"))));
            come_call_finalizer3(right_value182,sUnionNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional259=self!=((void*)0),            _if_conditional259) {
                ((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(result_183, "sUnionNode_clone", 4, 2309)), "sUnionNode_clone", 4, 2310))->sline=((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 4, 2311)), "sUnionNode_clone", 4, 2312))->sline;
            }
            if(_if_conditional260=self!=((void*)0)&&((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 5, 2313)), "sUnionNode_clone", 5, 2314))->sname!=((void*)0),            _if_conditional260) {
                __dec_obj54=((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(result_183, "sUnionNode_clone", 5, 2315)), "sUnionNode_clone", 5, 2316))->sname;
                ((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(result_183, "sUnionNode_clone", 5, 2315)), "sUnionNode_clone", 5, 2316))->sname=(char*)come_increment_ref_count(((char*)(right_value183=(come_push_stackframe("sUnionNode_clone", 5, 2319),__exception_result_var_b199=string_clone(((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 5, 2317)), "sUnionNode_clone", 5, 2318))->sname), come_pop_stackframe(), __exception_result_var_b199))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional261=self!=((void*)0)&&((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 6, 2320)), "sUnionNode_clone", 6, 2321))->mType!=((void*)0),            _if_conditional261) {
                __dec_obj55=((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(result_183, "sUnionNode_clone", 6, 2322)), "sUnionNode_clone", 6, 2323))->mType;
                ((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(result_183, "sUnionNode_clone", 6, 2322)), "sUnionNode_clone", 6, 2323))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(come_push_stackframe("sUnionNode_clone", 6, 2326),__exception_result_var_b200=sType_clone(((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 6, 2324)), "sUnionNode_clone", 6, 2325))->mType), come_pop_stackframe(), __exception_result_var_b200))));
                come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional262=self!=((void*)0),            _if_conditional262) {
                ((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(result_183, "sUnionNode_clone", 7, 2327)), "sUnionNode_clone", 7, 2328))->mOutput=((struct sUnionNode*)come_null_check(((struct sUnionNode*)come_null_check(self, "sUnionNode_clone", 7, 2329)), "sUnionNode_clone", 7, 2330))->mOutput;
            }
            __result133__ = __result_obj__ = result_183;
            come_call_finalizer3(result_183,sUnionNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result133__;
            come_call_finalizer3(result_183,sUnionNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_union_184;
char* p_185;
int sline_186;
_Bool __exception_result_var_b202;
_Bool _if_conditional263;
char* type_name_187;
_Bool __exception_result_var_b203;
_Bool _if_conditional264;
void* right_value187;
char* __exception_result_var_b204;
char* __dec_obj56;
_Bool _if_conditional265;
void* right_value188;
char* __exception_result_var_b205;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value189;
char* __exception_result_var_b206;
char* type_name_188;
void* right_value190;
struct sNode* __exception_result_var_b207;
struct sNode* __result136__;
void* right_value191;
struct sNode* __exception_result_var_b208;
struct sNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_union_184, 0, sizeof(_Bool));
memset(&p_185, 0, sizeof(char*));
memset(&sline_186, 0, sizeof(int));
memset(&type_name_187, 0, sizeof(char*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&type_name_188, 0, sizeof(char*));
right_value190 = (void*)0;
right_value191 = (void*)0;
    define_union_184=(_Bool)0;
    {
        p_185=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 167, 2332)), "15union.c", 167, 2333))->p;
        sline_186=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 168, 2334)), "15union.c", 168, 2335))->sline;
        if(_if_conditional263=(come_push_stackframe("15union.c", 170, 2336),__exception_result_var_b202=charp_operator_equals(buf,"union"), come_pop_stackframe(), __exception_result_var_b202),        _if_conditional263) {
            if(_if_conditional264=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 172, 2337)), "15union.c", 172, 2338))->p, "15union.c", 172, 2339))==95||(come_push_stackframe("15union.c", 172, 2343),__exception_result_var_b203=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 172, 2340)), "15union.c", 172, 2341))->p, "15union.c", 172, 2342))), come_pop_stackframe(), __exception_result_var_b203),            _if_conditional264) {
                __dec_obj56=type_name_187;
                type_name_187=(char*)come_increment_ref_count((come_push_stackframe("15union.c", 173, 2344),__exception_result_var_b204=((char*)(right_value187=parse_word(info))), come_pop_stackframe(), __exception_result_var_b204));
                __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional265=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 175, 2345)), "15union.c", 175, 2346))->p, "15union.c", 175, 2347))==123,                _if_conditional265) {
                    (come_push_stackframe("15union.c", 176, 2348),__exception_result_var_b205=((char*)(right_value188=skip_block(info))), come_pop_stackframe(), __exception_result_var_b205);
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional266=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 178, 2349)), "15union.c", 178, 2350))->p, "15union.c", 178, 2351))==59,                    _if_conditional266) {
                        define_union_184=(_Bool)1;
                    }
                }
            }
            type_name_187 = come_decrement_ref_count2(type_name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 185, 2352)), "15union.c", 185, 2353))->p=p_185;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "15union.c", 186, 2354)), "15union.c", 186, 2355))->sline=sline_186;
    }
    if(define_union_184) {
        type_name_188=(char*)come_increment_ref_count((come_push_stackframe("15union.c", 190, 2356),__exception_result_var_b206=((char*)(right_value189=parse_word(info))), come_pop_stackframe(), __exception_result_var_b206));
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result136__ = __result_obj__ = (come_push_stackframe("15union.c", 192, 2357),__exception_result_var_b207=((struct sNode*)(right_value190=parse_union((char*)come_increment_ref_count(type_name_188),info))), come_pop_stackframe(), __exception_result_var_b207);
        type_name_188 = come_decrement_ref_count2(type_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value190) { right_value190 = come_decrement_ref_count2(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result136__;
        type_name_188 = come_decrement_ref_count2(type_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result137__ = __result_obj__ = (come_push_stackframe("15union.c", 195, 2358),__exception_result_var_b208=((struct sNode*)(right_value191=string_node_v14(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b208);
    if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result137__;
}

