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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
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

void transpile_toplevel(_Bool block, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

char* parse_attribute(struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* create_int_node(int value, struct sInfo* info);

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);

char* skip_block(struct sInfo* info);

_Bool is_type_name(char* buf, struct sInfo* info);

int expected_next_character(char c, struct sInfo* info);

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);

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

void skip_paren(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

_Bool parsecmp(char* str, struct sInfo* info);

char* parse_word(struct sInfo* info);

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);

void skip_spaces_and_lf(struct sInfo* info);

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
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
static void list$1charph_finalize(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
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










void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_47;
_Bool _while_condtional7;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_47, 0, sizeof(int));
    # 5 "05type.c"
    nest_47=0;
    # 26 "05type.c"
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        # 25 "05type.c"
        # 7 "05type.c"
        if(_if_conditional19=*info->p==40,        _if_conditional19) {
            # 8 "05type.c"
            info->p++;
            # 9 "05type.c"
            skip_spaces_and_lf(info);
            # 11 "05type.c"
            nest_47++;
        }
        else {
            # 25 "05type.c"
            # 13 "05type.c"
            if(_if_conditional20=*info->p==41,            _if_conditional20) {
                # 14 "05type.c"
                info->p++;
                # 15 "05type.c"
                skip_spaces_and_lf(info);
                # 17 "05type.c"
                nest_47--;
                # 21 "05type.c"
                # 18 "05type.c"
                if(_if_conditional21=nest_47==0,                _if_conditional21) {
                    # 19 "05type.c"
                    break;
                }
            }
            else {
                # 23 "05type.c"
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional8;
_Bool _while_condtional9;
_Bool _while_condtional10;
_Bool _if_conditional22;
_Bool _while_condtional11;
_Bool _if_conditional23;
_Bool _if_conditional24;
int line_48;
void* right_value79;
void* right_value80;
struct buffer* fname_49;
_Bool _while_condtional12;
_Bool _if_conditional25;
_Bool _while_condtional13;
_Bool _while_condtional14;
void* right_value81;
char* __dec_obj12;
_Bool _if_conditional26;
_Bool _while_condtional15;
_Bool _while_condtional16;
_Bool _while_condtional17;
_Bool _while_condtional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&line_48, 0, sizeof(int));
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&fname_49, 0, sizeof(struct buffer*));
right_value81 = (void*)0;
    # 35 "05type.c"
    while(_while_condtional8=strmemcmp(info->p,"__attribute__"),    _while_condtional8) {
        # 31 "05type.c"
        info->p+=strlen("__attribute__");
        # 32 "05type.c"
        skip_spaces_and_lf(info);
        # 33 "05type.c"
        skip_paren(info);
    }
    # 39 "05type.c"
    while(_while_condtional9=strmemcmp(info->p,"__extension__"),    _while_condtional9) {
        # 36 "05type.c"
        info->p+=strlen("__extension__");
        # 37 "05type.c"
        skip_spaces_and_lf(info);
    }
    # 114 "05type.c"
    while(_while_condtional10=*info->p==35,    _while_condtional10) {
        # 53 "05type.c"
        skip_spaces_and_lf(info);
        # 55 "05type.c"
        info->p++;
        # 56 "05type.c"
        skip_spaces_and_lf(info);
        # 111 "05type.c"
        # 58 "05type.c"
        if(_if_conditional22=strmemcmp(info->p,"pragma"),        _if_conditional22) {
            # 68 "05type.c"
            while(_while_condtional11=*info->p,            _while_condtional11) {
                # 67 "05type.c"
                # 60 "05type.c"
                if(_if_conditional23=*info->p==10,                _if_conditional23) {
                    # 61 "05type.c"
                    skip_spaces_and_lf(info);
                    # 62 "05type.c"
                    break;
                }
                else {
                    # 65 "05type.c"
                    info->p++;
                }
            }
        }
        else {
            # 111 "05type.c"
            # 69 "05type.c"
            if(_if_conditional24=xisdigit(*info->p),            _if_conditional24) {
                # 70 "05type.c"
                line_48=0;
                # 71 "05type.c"
                fname_49=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 71, "buffer"))))))));
                come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                # 77 "05type.c"
                while(_while_condtional12=xisdigit(*info->p),                _while_condtional12) {
                    # 74 "05type.c"
                    line_48=line_48*10+(*info->p-48);
                    # 75 "05type.c"
                    info->p++;
                }
                # 77 "05type.c"
                skip_spaces_and_lf(info);
                # 93 "05type.c"
                # 79 "05type.c"
                if(_if_conditional25=*info->p==34,                _if_conditional25) {
                    # 80 "05type.c"
                    info->p++;
                    # 87 "05type.c"
                    while(_while_condtional13=*info->p!=34,                    _while_condtional13) {
                        # 83 "05type.c"
                        buffer_append_char(fname_49,*info->p);
                        # 84 "05type.c"
                        info->p++;
                    }
                    # 90 "05type.c"
                    while(_while_condtional14=*info->p!=10,                    _while_condtional14) {
                        # 88 "05type.c"
                        info->p++;
                    }
                    # 90 "05type.c"
                    info->p++;
                }
                # 93 "05type.c"
                info->sline=line_48;
                # 94 "05type.c"
                __dec_obj12=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value81=buffer_to_string(fname_49))));
                __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 96 "05type.c"
                skip_spaces_and_lf(info);
                come_call_finalizer3(fname_49,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 111 "05type.c"
                # 98 "05type.c"
                if(_if_conditional26=*info->p==34,                _if_conditional26) {
                    # 99 "05type.c"
                    info->p++;
                    # 105 "05type.c"
                    while(_while_condtional15=*info->p!=34,                    _while_condtional15) {
                        # 102 "05type.c"
                        info->p++;
                    }
                    # 108 "05type.c"
                    while(_while_condtional16=*info->p!=10,                    _while_condtional16) {
                        # 106 "05type.c"
                        info->p++;
                    }
                    # 108 "05type.c"
                    info->p++;
                }
            }
        }
        # 111 "05type.c"
        skip_spaces_and_lf(info);
    }
    # 119 "05type.c"
    while(_while_condtional17=strmemcmp(info->p,"__attribute__"),    _while_condtional17) {
        # 115 "05type.c"
        info->p+=strlen("__attribute__");
        # 116 "05type.c"
        skip_spaces_and_lf(info);
        # 117 "05type.c"
        skip_paren(info);
    }
    # 123 "05type.c"
    while(_while_condtional18=strmemcmp(info->p,"__extension__"),    _while_condtional18) {
        # 120 "05type.c"
        info->p+=strlen("__extension__");
        # 121 "05type.c"
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_50;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_50, 0, sizeof(char));
    # 139 "05type.c"
    c_50=*(info->p+strlen(str));
    # 140 "05type.c"
    __result52__ = strmemcmp(info->p,str)&&(c_50==59||c_50==32||c_50==9||c_50==10||c_50==10);
    return __result52__;
}

char* parse_word(struct sInfo* info){
void* __result_obj__;
void* right_value82;
void* right_value83;
struct buffer* buf_51;
_Bool _while_condtional19;
void* right_value84;
_Bool _if_conditional27;
void* right_value85;
char* __result53__;
void* right_value86;
char* result_52;
_Bool _if_conditional32;
void* right_value87;
char* __result58__;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&buf_51, 0, sizeof(struct buffer*));
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&result_52, 0, sizeof(char*));
right_value87 = (void*)0;
    # 145 "05type.c"
    buf_51=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 145, "buffer"))))))));
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 146 "05type.c"
    parse_sharp_v5(info);
    # 153 "05type.c"
    while(_while_condtional19=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional19) {
        # 150 "05type.c"
        buffer_append_char(buf_51,*info->p);
        # 151 "05type.c"
        info->p++;
    }
    # 153 "05type.c"
    skip_spaces_and_lf(info);
    # 160 "05type.c"
    # 155 "05type.c"
    if(_if_conditional27=string_length(((char*)(right_value84=buffer_to_string(buf_51))))==0,    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional27) {
        # 156 "05type.c"
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        # 157 "05type.c"
        __result53__ = __result_obj__ = ((char*)(right_value85=__builtin_string("")));
        come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result53__;
    }
    # 160 "05type.c"
    result_52=(char*)come_increment_ref_count(((char*)(right_value86=buffer_to_string(buf_51))));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 166 "05type.c"
    # 162 "05type.c"
    if(_if_conditional32=info->module_params&&map$2charphcharphp_operator_load_element(info->module_params,result_52),    _if_conditional32) {
        # 163 "05type.c"
        __result58__ = __result_obj__ = ((char*)(right_value87=__builtin_string(((char*)come_null_check(map$2charphcharphp_operator_load_element(info->module_params,result_52), "05type.c", 163, 0)))));
        come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result58__;
    }
    # 166 "05type.c"
    __result59__ = __result_obj__ = result_52;
    come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result59__;
    come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__;
char* default_value_53;
unsigned int hash_54;
unsigned int it_55;
_Bool _while_condtional20;
_Bool _if_conditional28;
_Bool _if_conditional29;
char* __result54__;
_Bool _if_conditional30;
_Bool _if_conditional31;
char* __result55__;
char* __result56__;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_53, 0, sizeof(char*));
memset(&hash_54, 0, sizeof(unsigned int));
memset(&it_55, 0, sizeof(unsigned int));
        # 1519 "./neo-c.h"
        # 1520 "./neo-c.h"
        memset(&default_value_53,0,sizeof(char*));
        # 1522 "./neo-c.h"
        hash_54=string_get_hash_key(((char*)key))%self->size;
        # 1523 "./neo-c.h"
        it_55=hash_54;
        # 1547 "./neo-c.h"
        while(_while_condtional20=(_Bool)1,        _while_condtional20) {
            # 1545 "./neo-c.h"
            # 1526 "./neo-c.h"
            if(_if_conditional28=self->item_existance[it_55],            _if_conditional28) {
                # 1533 "./neo-c.h"
                # 1528 "./neo-c.h"
                if(_if_conditional29=string_equals(self->keys[it_55],key),                _if_conditional29) {
                    # 1530 "./neo-c.h"
                    __result54__ = __result_obj__ = self->items[it_55];
                    default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result54__;
                }
                # 1533 "./neo-c.h"
                it_55++;
                # 1541 "./neo-c.h"
                # 1535 "./neo-c.h"
                if(_if_conditional30=it_55>=self->size,                _if_conditional30) {
                    # 1536 "./neo-c.h"
                    it_55=0;
                }
                else {
                    # 1541 "./neo-c.h"
                    # 1538 "./neo-c.h"
                    if(_if_conditional31=it_55==hash_54,                    _if_conditional31) {
                        # 1539 "./neo-c.h"
                        __result55__ = __result_obj__ = default_value_53;
                        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result55__;
                    }
                }
            }
            else {
                # 1543 "./neo-c.h"
                __result56__ = __result_obj__ = default_value_53;
                default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result56__;
            }
        }
        # 1547 "./neo-c.h"
        __result57__ = __result_obj__ = default_value_53;
        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result57__;
        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__;
char* p_56;
int sline_57;
char* buf_58;
_Bool _if_conditional33;
void* right_value88;
char* __exception_result_var_b1;
char* __dec_obj13;
void* right_value89;
char* __dec_obj14;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_56, 0, sizeof(char*));
memset(&sline_57, 0, sizeof(int));
memset(&buf_58, 0, sizeof(char*));
right_value88 = (void*)0;
right_value89 = (void*)0;
    # 171 "05type.c"
    p_56=info->p;
    # 172 "05type.c"
    sline_57=info->sline;
    # 174 "05type.c"
    # 182 "05type.c"
    # 175 "05type.c"
    if(_if_conditional33=xisalpha(*info->p)||*info->p==95,    _if_conditional33) {
        # 176 "05type.c"
        __dec_obj13=buf_58;
        buf_58=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 176, 1),__exception_result_var_b1=((char*)(right_value88=parse_word(info))), come_pop_stackframe(), __exception_result_var_b1));
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 179 "05type.c"
        __dec_obj14=buf_58;
        buf_58=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(""))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 182 "05type.c"
    info->p=p_56;
    # 183 "05type.c"
    info->sline=sline_57;
    # 185 "05type.c"
    __result60__ = __result_obj__ = buf_58;
    buf_58 = come_decrement_ref_count2(buf_58, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result60__;
    buf_58 = come_decrement_ref_count2(buf_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void skip_spaces_and_lf(struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional21;
_Bool _if_conditional34;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
    # 202 "05type.c"
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        # 201 "05type.c"
        # 191 "05type.c"
        if(_if_conditional34=*info->p==32||*info->p==9,        _if_conditional34) {
            # 192 "05type.c"
            info->p++;
        }
        else {
            # 201 "05type.c"
            # 194 "05type.c"
            if(_if_conditional35=*info->p==10,            _if_conditional35) {
                # 195 "05type.c"
                info->p++;
                # 196 "05type.c"
                info->sline++;
            }
            else {
                # 199 "05type.c"
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct list$1sTypeph* o2_saved_59;
struct sType* it_62;
_Bool _if_conditional40;
_Bool __result68__;
struct list$1sTypeph* o2_saved_71;
struct sType* it_72;
_Bool _if_conditional58;
_Bool __result69__;
_Bool _if_conditional59;
_Bool __result70__;
_Bool _if_conditional60;
_Bool __result71__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&o2_saved_59, 0, sizeof(struct list$1sTypeph*));
memset(&it_62, 0, sizeof(struct sType*));
memset(&o2_saved_71, 0, sizeof(struct list$1sTypeph*));
memset(&it_72, 0, sizeof(struct sType*));
    # 211 "05type.c"
    for(    o2_saved_59=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_62=list$1sTypeph_begin((o2_saved_59));    !list$1sTypeph_end((o2_saved_59));    it_62=list$1sTypeph_next((o2_saved_59))    ){
        # 210 "05type.c"
        # 207 "05type.c"
        if(_if_conditional40=is_contained_generics_class(it_62,info),        _if_conditional40) {
            # 208 "05type.c"
            __result68__ = (_Bool)1;
            come_call_finalizer3(o2_saved_59,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result68__;
        }
    }
    come_call_finalizer3(o2_saved_59,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 217 "05type.c"
    for(    o2_saved_71=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_72=list$1sTypeph_begin((o2_saved_71));    !list$1sTypeph_end((o2_saved_71));    it_72=list$1sTypeph_next((o2_saved_71))    ){
        # 215 "05type.c"
        # 212 "05type.c"
        if(_if_conditional58=is_contained_generics_class(it_72,info),        _if_conditional58) {
            # 213 "05type.c"
            __result69__ = (_Bool)1;
            come_call_finalizer3(o2_saved_71,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result69__;
        }
    }
    come_call_finalizer3(o2_saved_71,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 220 "05type.c"
    # 217 "05type.c"
    if(type->mClass->mGenerics) {
        # 218 "05type.c"
        __result70__ = (_Bool)1;
        return __result70__;
    }
    # 224 "05type.c"
    # 220 "05type.c"
    if(type->mClass->mMethodGenerics) {
        # 221 "05type.c"
        __result71__ = (_Bool)1;
        return __result71__;
    }
    # 224 "05type.c"
    __result72__ = (_Bool)0;
    return __result72__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional36;
struct sType* result_60;
struct sType* __result61__;
_Bool _if_conditional37;
struct sType* __result62__;
struct sType* result_61;
struct sType* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_60, 0, sizeof(struct sType*));
memset(&result_61, 0, sizeof(struct sType*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional36=self==((void*)0),        _if_conditional36) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_60,0,sizeof(struct sType*));
            # 279 "./neo-c.h"
            __result61__ = __result_obj__ = result_60;
            return __result61__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result62__ = __result_obj__ = self->it->item;
            return __result62__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_61,0,sizeof(struct sType*));
        # 289 "./neo-c.h"
        __result63__ = __result_obj__ = result_61;
        return __result63__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result64__ = self==((void*)0)||self->it==((void*)0);
        return __result64__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional38;
struct sType* result_63;
struct sType* __result65__;
_Bool _if_conditional39;
struct sType* __result66__;
struct sType* result_64;
struct sType* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_63, 0, sizeof(struct sType*));
memset(&result_64, 0, sizeof(struct sType*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional38=self==((void*)0)||self->it==((void*)0),        _if_conditional38) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_63,0,sizeof(struct sType*));
            # 296 "./neo-c.h"
            __result65__ = __result_obj__ = result_63;
            return __result65__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result66__ = __result_obj__ = self->it->item;
            return __result66__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_64,0,sizeof(struct sType*));
        # 307 "./neo-c.h"
        __result67__ = __result_obj__ = result_64;
        return __result67__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_65;
_Bool _while_condtional22;
struct list_item$1sTypeph* prev_it_66;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_65, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_66, 0, sizeof(struct list_item$1sTypeph*));
                # 114 "./neo-c.h"
                it_65=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional22=it_65!=((void*)0),                _while_condtional22) {
                    # 116 "./neo-c.h"
                    prev_it_66=it_65;
                    # 117 "./neo-c.h"
                    it_65=it_65->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_66,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1sTypephp_finalize"
                        # 0 "list_item$1sTypephp_finalize"
                        if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional41) {
                            # 0 "list_item$1sTypephp_finalize"
                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sType_finalize"
                                # 0 "sType_finalize"
                                if(_if_conditional42=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional42) {
                                    # 0 "sType_finalize"
                                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sType_finalize"
                                # 1 "sType_finalize"
                                if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional43) {
                                    # 1 "sType_finalize"
                                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sType_finalize"
                                # 2 "sType_finalize"
                                if(_if_conditional45=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional45) {
                                    # 2 "sType_finalize"
                                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sType_finalize"
                                # 3 "sType_finalize"
                                if(_if_conditional46=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional46) {
                                    # 3 "sType_finalize"
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sType_finalize"
                                # 4 "sType_finalize"
                                if(_if_conditional47=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional47) {
                                    # 4 "sType_finalize"
                                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sType_finalize"
                                # 5 "sType_finalize"
                                if(_if_conditional48=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional48) {
                                    # 5 "sType_finalize"
                                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sType_finalize"
                                # 6 "sType_finalize"
                                if(_if_conditional50=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional50) {
                                    # 6 "sType_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sType_finalize"
                                # 7 "sType_finalize"
                                if(_if_conditional51=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional51) {
                                    # 7 "sType_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sType_finalize"
                                # 8 "sType_finalize"
                                if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional53) {
                                    # 8 "sType_finalize"
                                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sType_finalize"
                                # 9 "sType_finalize"
                                if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional54) {
                                    # 9 "sType_finalize"
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 11 "sType_finalize"
                                # 10 "sType_finalize"
                                if(_if_conditional55=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional55) {
                                    # 10 "sType_finalize"
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 12 "sType_finalize"
                                # 11 "sType_finalize"
                                if(_if_conditional56=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional56) {
                                    # 11 "sType_finalize"
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sType_finalize"
                                # 12 "sType_finalize"
                                if(_if_conditional57=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional57) {
                                    # 12 "sType_finalize"
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "tuple1$1sTypephp_finalize"
                                        # 0 "tuple1$1sTypephp_finalize"
                                        if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional44) {
                                            # 0 "tuple1$1sTypephp_finalize"
                                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_67;
_Bool _while_condtional23;
struct list_item$1sNodeph* prev_it_68;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_67, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_68, 0, sizeof(struct list_item$1sNodeph*));
                                        # 114 "./neo-c.h"
                                        it_67=self->head;
                                        # 120 "./neo-c.h"
                                        while(_while_condtional23=it_67!=((void*)0),                                        _while_condtional23) {
                                            # 116 "./neo-c.h"
                                            prev_it_68=it_67;
                                            # 117 "./neo-c.h"
                                            it_67=it_67->next;
                                            # 118 "./neo-c.h"
                                            come_call_finalizer3(prev_it_68,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1sNodephp_finalize"
                                                # 0 "list_item$1sNodephp_finalize"
                                                if(_if_conditional49=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional49) {
                                                    # 0 "list_item$1sNodephp_finalize"
                                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_69;
_Bool _while_condtional24;
struct list_item$1charph* prev_it_70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_70, 0, sizeof(struct list_item$1charph*));
                                        # 114 "./neo-c.h"
                                        it_69=self->head;
                                        # 120 "./neo-c.h"
                                        while(_while_condtional24=it_69!=((void*)0),                                        _while_condtional24) {
                                            # 116 "./neo-c.h"
                                            prev_it_70=it_69;
                                            # 117 "./neo-c.h"
                                            it_69=it_69->next;
                                            # 118 "./neo-c.h"
                                            come_call_finalizer3(prev_it_70,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "list_item$1charphp_finalize"
                                                # 0 "list_item$1charphp_finalize"
                                                if(_if_conditional52=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional52) {
                                                    # 0 "list_item$1charphp_finalize"
                                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__;
void* right_value90;
void* right_value91;
struct list$1sTypeph* param_types_73;
void* right_value92;
void* right_value93;
struct list$1charph* param_names_74;
void* right_value94;
void* right_value95;
struct list$1charph* param_default_parametors_75;
_Bool var_args_76;
_Bool _if_conditional61;
void* right_value99;
void* right_value132;
struct sType* type__101;
_Bool _if_conditional136;
void* right_value133;
void* right_value134;
int __exception_result_var_b2;
_Bool void_param_102;
char* p_103;
int sline_104;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _while_condtional31;
_Bool _if_conditional142;
void* right_value135;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_105;
char* param_name_106;
_Bool err_107;
_Bool _if_conditional145;
void* right_value136;
void* right_value137;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result92__;
void* right_value138;
struct sType* param_type2_108;
void* right_value142;
void* right_value146;
_Bool _if_conditional150;
char* p_115;
_Bool no_comma_116;
void* right_value147;
struct sNode* node_117;
char* p2_118;
void* right_value148;
_Bool _if_conditional151;
_Bool _if_conditional152;
int __exception_result_var_b3;
_Bool _if_conditional153;
void* right_value149;
void* right_value150;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&param_types_73, 0, sizeof(struct list$1sTypeph*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&param_names_74, 0, sizeof(struct list$1charph*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&param_default_parametors_75, 0, sizeof(struct list$1charph*));
memset(&var_args_76, 0, sizeof(_Bool));
right_value99 = (void*)0;
right_value132 = (void*)0;
memset(&type__101, 0, sizeof(struct sType*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&void_param_102, 0, sizeof(_Bool));
memset(&p_103, 0, sizeof(char*));
memset(&sline_104, 0, sizeof(int));
right_value135 = (void*)0;
memset(&param_type_105, 0, sizeof(struct sType*));
memset(&param_name_106, 0, sizeof(char*));
memset(&err_107, 0, sizeof(_Bool));
memset(&param_type_105, 0, sizeof(struct sType*));
memset(&param_name_106, 0, sizeof(char*));
memset(&err_107, 0, sizeof(_Bool));
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&param_type2_108, 0, sizeof(struct sType*));
right_value142 = (void*)0;
right_value146 = (void*)0;
memset(&p_115, 0, sizeof(char*));
memset(&no_comma_116, 0, sizeof(_Bool));
right_value147 = (void*)0;
memset(&node_117, 0, sizeof(struct sNode*));
memset(&p2_118, 0, sizeof(char*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
    # 229 "05type.c"
    param_types_73=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value91=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 229, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value91,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 230 "05type.c"
    param_names_74=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value92=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 230, "list$1charph"))))))));
    come_call_finalizer3(right_value92,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 231 "05type.c"
    param_default_parametors_75=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 231, "list$1charph"))))))));
    come_call_finalizer3(right_value94,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value95,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 232 "05type.c"
    var_args_76=(_Bool)0;
    # 247 "05type.c"
    # 234 "05type.c"
    if(in_constructor_) {
        # 235 "05type.c"
        list$1charph_add(param_names_74,(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("self")))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 236 "05type.c"
        type__101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(info->impl_type))));
        come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 237 "05type.c"
        type__101->mHeap=(_Bool)1;
        # 238 "05type.c"
        list$1sTypeph_add(param_types_73,(struct sType*)come_increment_ref_count(type__101));
        # 239 "05type.c"
        list$1charph_add(param_default_parametors_75,((void*)0));
        come_call_finalizer3(type__101,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 247 "05type.c"
        # 241 "05type.c"
        if(info->in_class) {
            # 242 "05type.c"
            list$1charph_add(param_names_74,(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("self")))));
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 243 "05type.c"
            list$1sTypeph_add(param_types_73,(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(info->impl_type)))));
            come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 244 "05type.c"
            list$1charph_add(param_default_parametors_75,((void*)0));
        }
    }
    # 247 "05type.c"
    (come_push_stackframe("05type.c", 247, 2),__exception_result_var_b2=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b2);
    # 250 "05type.c"
    void_param_102=(_Bool)0;
    # 268 "05type.c"
    {
        # 252 "05type.c"
        p_103=info->p;
        # 253 "05type.c"
        sline_104=info->sline;
        # 264 "05type.c"
        # 255 "05type.c"
        if(_if_conditional137=strmemcmp(info->p,"void"),        _if_conditional137) {
            # 256 "05type.c"
            info->p+=strlen("void");
            # 257 "05type.c"
            skip_spaces_and_lf(info);
            # 262 "05type.c"
            # 259 "05type.c"
            if(_if_conditional138=*info->p==41,            _if_conditional138) {
                # 260 "05type.c"
                void_param_102=(_Bool)1;
            }
        }
        # 264 "05type.c"
        info->p=p_103;
        # 265 "05type.c"
        info->sline=sline_104;
    }
    # 353 "05type.c"
    # 268 "05type.c"
    if(void_param_102) {
        # 278 "05type.c"
        # 269 "05type.c"
        if(_if_conditional140=strmemcmp(info->p,"void"),        _if_conditional140) {
            # 270 "05type.c"
            info->p+=strlen("void");
            # 271 "05type.c"
            skip_spaces_and_lf(info);
            # 277 "05type.c"
            # 273 "05type.c"
            if(_if_conditional141=*info->p==41,            _if_conditional141) {
                # 274 "05type.c"
                info->p++;
                # 275 "05type.c"
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        # 351 "05type.c"
        while(_while_condtional31=(_Bool)1,        _while_condtional31) {
            # 287 "05type.c"
            # 281 "05type.c"
            if(_if_conditional142=*info->p==41,            _if_conditional142) {
                # 282 "05type.c"
                info->p++;
                # 283 "05type.c"
                skip_spaces_and_lf(info);
                # 284 "05type.c"
                break;
            }
            # 287 "05type.c"
            parse_sharp_v5(info);
            # 289 "05type.c"
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value135=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_105=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_106=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_107=multiple_assign_var1->v3;
            come_call_finalizer3(right_value135,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 296 "05type.c"
            # 291 "05type.c"
            if(_if_conditional145=!err_107,            _if_conditional145) {
                # 292 "05type.c"
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                # 293 "05type.c"
                __result92__ = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value137=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value136=(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 293, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")))),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_106 = come_decrement_ref_count2(param_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_73,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_74,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_75,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value137,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result92__;
            }
            # 296 "05type.c"
            param_type2_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=solve_generics(param_type_105,info->generics_type,info))));
            come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 298 "05type.c"
            param_type2_108->mFunctionParam=(_Bool)1;
            # 300 "05type.c"
            list$1sTypeph_push_back(param_types_73,(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(param_type2_108)))));
            come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 301 "05type.c"
            list$1charph_push_back(param_names_74,(char*)come_increment_ref_count(((char*)(right_value146=string_clone(param_name_106)))));
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 330 "05type.c"
            # 303 "05type.c"
            if(_if_conditional150=*info->p==61,            _if_conditional150) {
                # 304 "05type.c"
                info->p++;
                # 305 "05type.c"
                skip_spaces_and_lf(info);
                # 307 "05type.c"
                parse_sharp_v5(info);
                # 309 "05type.c"
                p_115=info->p;
                # 311 "05type.c"
                no_comma_116=info->no_comma;
                # 312 "05type.c"
                info->no_comma=(_Bool)1;
                # 314 "05type.c"
                node_117=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=expression_v13(info))));
                if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 316 "05type.c"
                info->no_comma=no_comma_116;
                # 318 "05type.c"
                p2_118=info->p;
                # 320 "05type.c"
                char buf_119[p2_118-p_115+1];
                memset(&buf_119, 0, sizeof(char)                *(p2_118-p_115+1)                );
                # 321 "05type.c"
                memcpy(buf_119,p_115,p2_118-p_115);
                # 322 "05type.c"
                buf_119[p2_118-p_115]=0;
                # 324 "05type.c"
                list$1charph_push_back(param_default_parametors_75,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(buf_119)))));
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_117) { node_117 = come_decrement_ref_count2(node_117, ((struct sNode*)node_117)->finalize, ((struct sNode*)node_117)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 327 "05type.c"
                list$1charph_push_back(param_default_parametors_75,((void*)0));
            }
            # 330 "05type.c"
            parse_sharp_v5(info);
            # 350 "05type.c"
            # 332 "05type.c"
            if(_if_conditional151=*info->p==44,            _if_conditional151) {
                # 333 "05type.c"
                info->p++;
                # 334 "05type.c"
                skip_spaces_and_lf(info);
                # 344 "05type.c"
                # 336 "05type.c"
                if(_if_conditional152=strmemcmp(info->p,"..."),                _if_conditional152) {
                    # 337 "05type.c"
                    info->p+=strlen("...");
                    # 338 "05type.c"
                    skip_spaces_and_lf(info);
                    # 339 "05type.c"
                    var_args_76=(_Bool)1;
                    # 341 "05type.c"
                    (come_push_stackframe("05type.c", 341, 3),__exception_result_var_b3=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b3);
                    # 342 "05type.c"
                    come_call_finalizer3(param_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_106 = come_decrement_ref_count2(param_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_108,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                # 350 "05type.c"
                # 345 "05type.c"
                if(_if_conditional153=*info->p==41,                _if_conditional153) {
                    # 346 "05type.c"
                    info->p++;
                    # 347 "05type.c"
                    skip_spaces_and_lf(info);
                    # 348 "05type.c"
                    come_call_finalizer3(param_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_106 = come_decrement_ref_count2(param_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_108,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            come_call_finalizer3(param_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_106 = come_decrement_ref_count2(param_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_108,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 353 "05type.c"
    __result96__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value150=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value149=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 353, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_73),(struct list$1charph*)come_increment_ref_count(param_names_74),(struct list$1charph*)come_increment_ref_count(param_default_parametors_75),var_args_76)));
    come_call_finalizer3(param_types_73,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_74,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_75,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value150,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result96__;
    come_call_finalizer3(param_types_73,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_74,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_75,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
        # 95 "./neo-c.h"
        self->head=((void*)0);
        # 96 "./neo-c.h"
        self->tail=((void*)0);
        # 97 "./neo-c.h"
        self->len=0;
        # 99 "./neo-c.h"
        __result73__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
        # 95 "./neo-c.h"
        self->head=((void*)0);
        # 96 "./neo-c.h"
        self->tail=((void*)0);
        # 97 "./neo-c.h"
        self->len=0;
        # 99 "./neo-c.h"
        __result74__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional62;
void* right_value96;
struct list_item$1charph* litem_77;
char* __dec_obj15;
_Bool _if_conditional63;
void* right_value97;
struct list_item$1charph* litem_78;
char* __dec_obj16;
void* right_value98;
struct list_item$1charph* litem_79;
char* __dec_obj17;
struct list$1charph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&litem_77, 0, sizeof(struct list_item$1charph*));
right_value97 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1charph*));
right_value98 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1charph*));
            # 177 "./neo-c.h"
            # 146 "./neo-c.h"
            if(_if_conditional62=self->len==0,            _if_conditional62) {
                # 147 "./neo-c.h"
                litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value96=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                come_call_finalizer3(right_value96,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 149 "./neo-c.h"
                litem_77->prev=((void*)0);
                # 150 "./neo-c.h"
                litem_77->next=((void*)0);
                # 151 "./neo-c.h"
                __dec_obj15=litem_77->item;
                litem_77->item=(char*)come_increment_ref_count(item);
                __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 153 "./neo-c.h"
                self->tail=litem_77;
                # 154 "./neo-c.h"
                self->head=litem_77;
            }
            else {
                # 177 "./neo-c.h"
                # 156 "./neo-c.h"
                if(_if_conditional63=self->len==1,                _if_conditional63) {
                    # 157 "./neo-c.h"
                    litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value97=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                    come_call_finalizer3(right_value97,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 159 "./neo-c.h"
                    litem_78->prev=self->head;
                    # 160 "./neo-c.h"
                    litem_78->next=((void*)0);
                    # 161 "./neo-c.h"
                    __dec_obj16=litem_78->item;
                    litem_78->item=(char*)come_increment_ref_count(item);
                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 163 "./neo-c.h"
                    self->tail=litem_78;
                    # 164 "./neo-c.h"
                    self->head->next=litem_78;
                }
                else {
                    # 167 "./neo-c.h"
                    litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value98=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                    come_call_finalizer3(right_value98,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 169 "./neo-c.h"
                    litem_79->prev=self->tail;
                    # 170 "./neo-c.h"
                    litem_79->next=((void*)0);
                    # 171 "./neo-c.h"
                    __dec_obj17=litem_79->item;
                    litem_79->item=(char*)come_increment_ref_count(item);
                    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 173 "./neo-c.h"
                    self->tail->next=litem_79;
                    # 174 "./neo-c.h"
                    self->tail=litem_79;
                }
            }
            # 177 "./neo-c.h"
            self->len++;
            # 179 "./neo-c.h"
            __result75__ = __result_obj__ = self;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result75__;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional64;
struct sType* __result76__;
void* right_value100;
struct sType* result_80;
_Bool _if_conditional65;
_Bool _if_conditional66;
void* right_value107;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional70;
void* right_value110;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional74;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional75;
void* right_value112;
char* __dec_obj25;
_Bool _if_conditional76;
void* right_value113;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional77;
void* right_value121;
struct list$1sNodeph* __dec_obj30;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value122;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional92;
void* right_value126;
struct list$1charph* __dec_obj32;
_Bool _if_conditional94;
void* right_value127;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional95;
_Bool _if_conditional96;
void* right_value128;
struct sNode* __dec_obj34;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
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
void* right_value129;
struct sNode* __dec_obj35;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value130;
char* __dec_obj36;
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
void* right_value131;
char* __dec_obj37;
_Bool _if_conditional135;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_80, 0, sizeof(struct sType*));
right_value107 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional64=self==(void*)0,            _if_conditional64) {
                # 2 "sType_clone"
                __result76__ = __result_obj__ = (void*)0;
                return __result76__;
            }
            # 3 "sType_clone"
            result_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value100,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                # 4 "sType_clone"
                result_80->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional66=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional66) {
                # 5 "sType_clone"
                __dec_obj21=result_80->mMultipleTypes;
                result_80->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value107,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional70=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional70) {
                # 6 "sType_clone"
                __dec_obj23=result_80->mNoSolvedGenericsType;
                result_80->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj23,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value110,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional74=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional74) {
                # 7 "sType_clone"
                __dec_obj24=result_80->mOriginalLoadVarType;
                result_80->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj24,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional75=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional75) {
                # 8 "sType_clone"
                __dec_obj25=result_80->mGenericsName;
                result_80->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mGenericsName))));
                __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional76=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional76) {
                # 9 "sType_clone"
                __dec_obj26=result_80->mGenericsTypes;
                result_80->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value113=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value113,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional77=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional77) {
                # 10 "sType_clone"
                __dec_obj30=result_80->mArrayNum;
                result_80->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value121=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj30,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value121,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                # 11 "sType_clone"
                result_80->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional91=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional91) {
                # 12 "sType_clone"
                __dec_obj31=result_80->mParamTypes;
                result_80->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value122=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value122,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional92=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional92) {
                # 13 "sType_clone"
                __dec_obj32=result_80->mParamNames;
                result_80->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value126,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional94=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional94) {
                # 14 "sType_clone"
                __dec_obj33=result_80->mResultType;
                result_80->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj33,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value127,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                # 15 "sType_clone"
                result_80->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional96=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional96) {
                # 16 "sType_clone"
                __dec_obj34=result_80->mAlignas;
                result_80->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(self->mAlignas))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 17 "sType_clone"
                result_80->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 18 "sType_clone"
                result_80->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                # 19 "sType_clone"
                result_80->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 20 "sType_clone"
                result_80->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 21 "sType_clone"
                result_80->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                # 22 "sType_clone"
                result_80->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 23 "sType_clone"
                result_80->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 24 "sType_clone"
                result_80->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 25 "sType_clone"
                result_80->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 26 "sType_clone"
                result_80->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 27 "sType_clone"
                result_80->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 28 "sType_clone"
                result_80->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                # 29 "sType_clone"
                result_80->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 30 "sType_clone"
                result_80->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 31 "sType_clone"
                result_80->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                # 32 "sType_clone"
                result_80->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                # 33 "sType_clone"
                result_80->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                # 34 "sType_clone"
                result_80->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                # 35 "sType_clone"
                result_80->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                # 36 "sType_clone"
                result_80->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                # 37 "sType_clone"
                result_80->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                # 38 "sType_clone"
                result_80->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                # 39 "sType_clone"
                result_80->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                # 40 "sType_clone"
                result_80->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional121=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional121) {
                # 41 "sType_clone"
                __dec_obj35=result_80->mSizeNum;
                result_80->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(self->mSizeNum))));
                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                # 42 "sType_clone"
                result_80->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                # 43 "sType_clone"
                result_80->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional124=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional124) {
                # 44 "sType_clone"
                __dec_obj36=result_80->mOriginalTypeName;
                result_80->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->mOriginalTypeName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional125=self!=((void*)0),            _if_conditional125) {
                # 45 "sType_clone"
                result_80->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                # 46 "sType_clone"
                result_80->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                # 47 "sType_clone"
                result_80->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional128=self!=((void*)0),            _if_conditional128) {
                # 48 "sType_clone"
                result_80->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                # 49 "sType_clone"
                result_80->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                # 50 "sType_clone"
                result_80->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                # 51 "sType_clone"
                result_80->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                # 52 "sType_clone"
                result_80->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional133=self!=((void*)0),            _if_conditional133) {
                # 53 "sType_clone"
                result_80->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional134=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional134) {
                # 54 "sType_clone"
                __dec_obj37=result_80->mAsmName;
                result_80->mAsmName=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->mAsmName))));
                __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional135=self!=((void*)0),            _if_conditional135) {
                # 55 "sType_clone"
                result_80->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result90__ = __result_obj__ = result_80;
            come_call_finalizer3(result_80,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result90__;
            come_call_finalizer3(result_80,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1sTypeph* __result77__;
void* right_value101;
void* right_value102;
struct list$1sTypeph* result_81;
struct list_item$1sTypeph* it_82;
_Bool _while_condtional25;
void* right_value106;
struct list$1sTypeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&result_81, 0, sizeof(struct list$1sTypeph*));
memset(&it_82, 0, sizeof(struct list_item$1sTypeph*));
right_value106 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional67=self==((void*)0),                    _if_conditional67) {
                        # 131 "./neo-c.h"
                        __result77__ = __result_obj__ = ((void*)0);
                        return __result77__;
                    }
                    # 133 "./neo-c.h"
                    result_81=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value102,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_82=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional25=it_82!=((void*)0),                    _while_condtional25) {
                        # 137 "./neo-c.h"
                        list$1sTypeph_add(result_81,(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(it_82->item)))));
                        come_call_finalizer3(right_value106,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "./neo-c.h"
                        it_82=it_82->next;
                    }
                    # 142 "./neo-c.h"
                    __result79__ = __result_obj__ = result_81;
                    come_call_finalizer3(result_81,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                    come_call_finalizer3(result_81,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional68;
void* right_value103;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj18;
_Bool _if_conditional69;
void* right_value104;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj19;
void* right_value105;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj20;
struct list$1sTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*));
right_value105 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1sTypeph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional68=self->len==0,                            _if_conditional68) {
                                # 147 "./neo-c.h"
                                litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value103,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_83->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_83->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj18=litem_83->item;
                                litem_83->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "./neo-c.h"
                                self->tail=litem_83;
                                # 154 "./neo-c.h"
                                self->head=litem_83;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional69=self->len==1,                                _if_conditional69) {
                                    # 157 "./neo-c.h"
                                    litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value104=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value104,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_84->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_84->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj19=litem_84->item;
                                    litem_84->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_84;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_84;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value105=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value105,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_85->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_85->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj20=litem_85->item;
                                    litem_85->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail->next=litem_85;
                                    # 174 "./neo-c.h"
                                    self->tail=litem_85;
                                }
                            }
                            # 177 "./neo-c.h"
                            self->len++;
                            # 179 "./neo-c.h"
                            __result78__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result78__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_86;
_Bool _while_condtional26;
struct list_item$1sTypeph* prev_it_87;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_86, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_87, 0, sizeof(struct list_item$1sTypeph*));
                    # 114 "./neo-c.h"
                    it_86=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional26=it_86!=((void*)0),                    _while_condtional26) {
                        # 116 "./neo-c.h"
                        prev_it_87=it_86;
                        # 117 "./neo-c.h"
                        it_86=it_86->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_87,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional71;
struct tuple1$1sTypeph* __result80__;
void* right_value108;
struct tuple1$1sTypeph* result_88;
_Bool _if_conditional73;
void* right_value109;
struct sType* __dec_obj22;
struct tuple1$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&result_88, 0, sizeof(struct tuple1$1sTypeph*));
right_value109 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional71=self==(void*)0,                    _if_conditional71) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result80__ = __result_obj__ = (void*)0;
                        return __result80__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_88=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value108,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional73=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional73) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj22=result_88->v1;
                        result_88->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj22,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value109,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result81__ = __result_obj__ = result_88;
                    come_call_finalizer3(result_88,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                    come_call_finalizer3(result_88,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional72=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional72) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional78;
struct list$1sNodeph* __result82__;
void* right_value114;
void* right_value115;
struct list$1sNodeph* result_89;
struct list_item$1sNodeph* it_90;
_Bool _while_condtional27;
void* right_value120;
struct list$1sNodeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
memset(&result_89, 0, sizeof(struct list$1sNodeph*));
memset(&it_90, 0, sizeof(struct list_item$1sNodeph*));
right_value120 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional78=self==((void*)0),                    _if_conditional78) {
                        # 131 "./neo-c.h"
                        __result82__ = __result_obj__ = ((void*)0);
                        return __result82__;
                    }
                    # 133 "./neo-c.h"
                    result_89=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value115=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value114=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value114,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value115,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_90=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional27=it_90!=((void*)0),                    _while_condtional27) {
                        # 137 "./neo-c.h"
                        list$1sNodeph_add(result_89,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=sNode_clone(it_90->item)))));
                        if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 139 "./neo-c.h"
                        it_90=it_90->next;
                    }
                    # 142 "./neo-c.h"
                    __result87__ = __result_obj__ = result_89;
                    come_call_finalizer3(result_89,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result87__;
                    come_call_finalizer3(result_89,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "./neo-c.h"
                        self->head=((void*)0);
                        # 96 "./neo-c.h"
                        self->tail=((void*)0);
                        # 97 "./neo-c.h"
                        self->len=0;
                        # 99 "./neo-c.h"
                        __result83__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result83__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional79;
void* right_value116;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj27;
_Bool _if_conditional80;
void* right_value117;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj28;
void* right_value118;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj29;
struct list$1sNodeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sNodeph*));
right_value117 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1sNodeph*));
right_value118 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1sNodeph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional79=self->len==0,                            _if_conditional79) {
                                # 147 "./neo-c.h"
                                litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value116,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_91->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_91->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj27=litem_91->item;
                                litem_91->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                # 153 "./neo-c.h"
                                self->tail=litem_91;
                                # 154 "./neo-c.h"
                                self->head=litem_91;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional80=self->len==1,                                _if_conditional80) {
                                    # 157 "./neo-c.h"
                                    litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value117=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value117,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_92->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_92->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj28=litem_92->item;
                                    litem_92->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 163 "./neo-c.h"
                                    self->tail=litem_92;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_92;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value118=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value118,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_93->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_93->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj29=litem_93->item;
                                    litem_93->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 173 "./neo-c.h"
                                    self->tail->next=litem_93;
                                    # 174 "./neo-c.h"
                                    self->tail=litem_93;
                                }
                            }
                            # 177 "./neo-c.h"
                            self->len++;
                            # 179 "./neo-c.h"
                            __result84__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result84__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional81;
struct sNode* __result85__;
void* right_value119;
struct sNode* result_94;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
struct sNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&result_94, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional81=self==(void*)0,                            _if_conditional81) {
                                # 2 "sNode_clone"
                                __result85__ = __result_obj__ = (void*)0;
                                return __result85__;
                            }
                            # 3 "sNode_clone"
                            result_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional82=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional82) {
                                # 4 "sNode_clone"
                                result_94->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional83=self!=((void*)0),                            _if_conditional83) {
                                # 5 "sNode_clone"
                                result_94->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional84=self!=((void*)0),                            _if_conditional84) {
                                # 6 "sNode_clone"
                                result_94->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional85=self!=((void*)0),                            _if_conditional85) {
                                # 7 "sNode_clone"
                                result_94->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional86=self!=((void*)0),                            _if_conditional86) {
                                # 8 "sNode_clone"
                                result_94->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional87=self!=((void*)0),                            _if_conditional87) {
                                # 9 "sNode_clone"
                                result_94->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional88=self!=((void*)0),                            _if_conditional88) {
                                # 10 "sNode_clone"
                                result_94->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional89=self!=((void*)0),                            _if_conditional89) {
                                # 11 "sNode_clone"
                                result_94->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result86__ = __result_obj__ = result_94;
                            if(result_94) { result_94 = come_decrement_ref_count2(result_94, ((struct sNode*)result_94)->finalize, ((struct sNode*)result_94)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result86__;
                            if(result_94) { result_94 = come_decrement_ref_count2(result_94, ((struct sNode*)result_94)->finalize, ((struct sNode*)result_94)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_95;
_Bool _while_condtional28;
struct list_item$1sNodeph* prev_it_96;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_95, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_96, 0, sizeof(struct list_item$1sNodeph*));
                    # 114 "./neo-c.h"
                    it_95=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional28=it_95!=((void*)0),                    _while_condtional28) {
                        # 116 "./neo-c.h"
                        prev_it_96=it_95;
                        # 117 "./neo-c.h"
                        it_95=it_95->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_96,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional93;
struct list$1charph* __result88__;
void* right_value123;
void* right_value124;
struct list$1charph* result_97;
struct list_item$1charph* it_98;
_Bool _while_condtional29;
void* right_value125;
struct list$1charph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&result_97, 0, sizeof(struct list$1charph*));
memset(&it_98, 0, sizeof(struct list_item$1charph*));
right_value125 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional93=self==((void*)0),                    _if_conditional93) {
                        # 131 "./neo-c.h"
                        __result88__ = __result_obj__ = ((void*)0);
                        return __result88__;
                    }
                    # 133 "./neo-c.h"
                    result_97=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value123,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value124,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_98=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional29=it_98!=((void*)0),                    _while_condtional29) {
                        # 137 "./neo-c.h"
                        list$1charph_add(result_97,(char*)come_increment_ref_count(((char*)(right_value125=string_clone(it_98->item)))));
                        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 139 "./neo-c.h"
                        it_98=it_98->next;
                    }
                    # 142 "./neo-c.h"
                    __result89__ = __result_obj__ = result_97;
                    come_call_finalizer3(result_97,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result89__;
                    come_call_finalizer3(result_97,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_99;
_Bool _while_condtional30;
struct list_item$1charph* prev_it_100;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_99, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_100, 0, sizeof(struct list_item$1charph*));
                    # 114 "./neo-c.h"
                    it_99=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional30=it_99!=((void*)0),                    _while_condtional30) {
                        # 116 "./neo-c.h"
                        prev_it_100=it_99;
                        # 117 "./neo-c.h"
                        it_99=it_99->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_100,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                # 0 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional143=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional143) {
                    # 0 "tuple3$3sTypephcharphboolp_finalize"
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "tuple3$3sTypephcharphboolp_finalize"
                # 1 "tuple3$3sTypephcharphboolp_finalize"
                if(_if_conditional144=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional144) {
                    # 1 "tuple3$3sTypephcharphboolp_finalize"
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1805 "./neo-c.h"
                    self->v1=v1;
                    # 1806 "./neo-c.h"
                    self->v2=v2;
                    # 1807 "./neo-c.h"
                    self->v3=v3;
                    # 1808 "./neo-c.h"
                    self->v4=v4;
                    # 1810 "./neo-c.h"
                    __result91__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result91__;
                    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional146;
void* right_value139;
struct list_item$1sTypeph* litem_109;
struct sType* __dec_obj38;
_Bool _if_conditional147;
void* right_value140;
struct list_item$1sTypeph* litem_110;
struct sType* __dec_obj39;
void* right_value141;
struct list_item$1sTypeph* litem_111;
struct sType* __dec_obj40;
struct list$1sTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1sTypeph*));
right_value140 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1sTypeph*));
right_value141 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1sTypeph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional146=self->len==0,                _if_conditional146) {
                    # 217 "./neo-c.h"
                    litem_109=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value139,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_109->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_109->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj38=litem_109->item;
                    litem_109->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_109;
                    # 224 "./neo-c.h"
                    self->head=litem_109;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional147=self->len==1,                    _if_conditional147) {
                        # 227 "./neo-c.h"
                        litem_110=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value140=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value140,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_110->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_110->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj39=litem_110->item;
                        litem_110->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_110;
                        # 234 "./neo-c.h"
                        self->head->next=litem_110;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_111=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value141=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value141,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_111->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_111->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj40=litem_111->item;
                        litem_111->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_111;
                        # 244 "./neo-c.h"
                        self->tail=litem_111;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result93__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result93__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional148;
void* right_value143;
struct list_item$1charph* litem_112;
char* __dec_obj41;
_Bool _if_conditional149;
void* right_value144;
struct list_item$1charph* litem_113;
char* __dec_obj42;
void* right_value145;
struct list_item$1charph* litem_114;
char* __dec_obj43;
struct list$1charph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
right_value144 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
right_value145 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1charph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional148=self->len==0,                _if_conditional148) {
                    # 217 "./neo-c.h"
                    litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value143,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_112->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_112->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj41=litem_112->item;
                    litem_112->item=(char*)come_increment_ref_count(item);
                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_112;
                    # 224 "./neo-c.h"
                    self->head=litem_112;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional149=self->len==1,                    _if_conditional149) {
                        # 227 "./neo-c.h"
                        litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value144,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_113->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_113->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj42=litem_113->item;
                        litem_113->item=(char*)come_increment_ref_count(item);
                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_113;
                        # 234 "./neo-c.h"
                        self->head->next=litem_113;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_114=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value145,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_114->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_114->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj43=litem_114->item;
                        litem_114->item=(char*)come_increment_ref_count(item);
                        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_114;
                        # 244 "./neo-c.h"
                        self->tail=litem_114;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result94__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result94__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1805 "./neo-c.h"
        __dec_obj44=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        # 1806 "./neo-c.h"
        __dec_obj45=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        # 1807 "./neo-c.h"
        __dec_obj46=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        # 1808 "./neo-c.h"
        self->v4=v4;
        # 1810 "./neo-c.h"
        __result95__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional154=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional154) {
                # 0 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional155=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional155) {
                # 1 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
            if(_if_conditional156=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional156) {
                # 2 "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize"
                come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __result_obj__;
void* right_value151;
struct sType* right_type2_120;
_Bool _if_conditional158;
void* right_value152;
struct sType* left_type2_121;
_Bool found_match_type_122;
struct list$1sTypeph* o2_saved_123;
struct sType* it_124;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value153;
char* tmp_125;
void* right_value154;
char* __dec_obj47;
void* right_value155;
void* right_value156;
struct sType* __dec_obj48;
_Bool __result101__;
struct sType* left_no_solved_generics_type_129;
struct sType* right_no_solved_generics_type_130;
struct sClass* left_class_131;
struct sClass* right_class_132;
_Bool parent_class_133;
_Bool _if_conditional163;
_Bool _while_condtional33;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool __result106__;
int i_139;
_Bool _if_conditional184;
void* right_value157;
char* __dec_obj49;
void* right_value158;
struct sType* __dec_obj50;
void* right_value159;
struct sType* __dec_obj51;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool __result107__;
_Bool _if_conditional192;
_Bool __result108__;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool __result109__;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool __result110__;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool __result111__;
void* right_value160;
void* right_value161;
struct buffer* buf2_140;
void* right_value162;
void* right_value163;
void* right_value164;
void* right_value165;
void* right_value166;
void* right_value167;
char* __dec_obj52;
void* right_value168;
struct sType* __dec_obj53;
void* right_value169;
struct sType* __dec_obj54;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool __result112__;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool __result113__;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool __result114__;
void* right_value170;
char* method_name_141;
_Bool _if_conditional234;
struct sType* obj_type_144;
_Bool _if_conditional235;
struct sType* obj_type2_145;
void* right_value171;
void* right_value172;
char* __dec_obj55;
_Bool _if_conditional236;
_Bool __result119__;
void* right_value173;
void* right_value174;
struct buffer* buf2_146;
void* right_value175;
void* right_value176;
struct sType* type_147;
void* right_value177;
void* right_value178;
char* __dec_obj56;
void* right_value179;
struct sType* __dec_obj57;
void* right_value180;
struct sType* __dec_obj58;
_Bool _if_conditional237;
void* right_value181;
char* method_name_148;
_Bool _if_conditional238;
struct sType* obj_type_149;
_Bool _if_conditional239;
struct sType* obj_type2_150;
void* right_value182;
void* right_value183;
char* __dec_obj59;
_Bool _if_conditional240;
_Bool __result120__;
void* right_value184;
void* right_value185;
struct buffer* buf2_151;
void* right_value186;
void* right_value187;
struct sType* type_152;
void* right_value188;
char* __dec_obj60;
void* right_value189;
struct sType* __dec_obj61;
void* right_value190;
struct sType* __dec_obj62;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool __result121__;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool __result122__;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool __result123__;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool __result124__;
_Bool _if_conditional260;
void* right_value191;
char* tmp_153;
void* right_value192;
char* __dec_obj63;
void* right_value193;
struct sType* __dec_obj64;
void* right_value194;
struct sType* __dec_obj65;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool __result125__;
_Bool _if_conditional267;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool __result128__;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool __result129__;
_Bool _if_conditional278;
_Bool _if_conditional279;
int i_154;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&right_type2_120, 0, sizeof(struct sType*));
right_value152 = (void*)0;
memset(&left_type2_121, 0, sizeof(struct sType*));
memset(&found_match_type_122, 0, sizeof(_Bool));
memset(&o2_saved_123, 0, sizeof(struct list$1sTypeph*));
memset(&it_124, 0, sizeof(struct sType*));
right_value153 = (void*)0;
memset(&tmp_125, 0, sizeof(char*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&left_no_solved_generics_type_129, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_130, 0, sizeof(struct sType*));
memset(&left_class_131, 0, sizeof(struct sClass*));
memset(&right_class_132, 0, sizeof(struct sClass*));
memset(&parent_class_133, 0, sizeof(_Bool));
memset(&i_139, 0, sizeof(int));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&buf2_140, 0, sizeof(struct buffer*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&method_name_141, 0, sizeof(char*));
memset(&obj_type_144, 0, sizeof(struct sType*));
memset(&obj_type2_145, 0, sizeof(struct sType*));
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&buf2_146, 0, sizeof(struct buffer*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&type_147, 0, sizeof(struct sType*));
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&method_name_148, 0, sizeof(char*));
memset(&obj_type_149, 0, sizeof(struct sType*));
memset(&obj_type2_150, 0, sizeof(struct sType*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&buf2_151, 0, sizeof(struct buffer*));
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&type_152, 0, sizeof(struct sType*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&tmp_153, 0, sizeof(char*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&i_154, 0, sizeof(int));
    # 358 "05type.c"
    right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(right_type))));
    come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 385 "05type.c"
    # 360 "05type.c"
    if(_if_conditional158=list$1sTypeph_length(left_type->mMultipleTypes)>0,    _if_conditional158) {
        # 361 "05type.c"
        left_type2_121=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(left_type))));
        come_call_finalizer3(right_value152,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 362 "05type.c"
        found_match_type_122=(_Bool)0;
        # 369 "05type.c"
        for(        o2_saved_123=(struct list$1sTypeph*)come_increment_ref_count((left_type->mMultipleTypes)),it_124=list$1sTypeph_begin((o2_saved_123));        !list$1sTypeph_end((o2_saved_123));        it_124=list$1sTypeph_next((o2_saved_123))        ){
            # 367 "05type.c"
            # 364 "05type.c"
            if(_if_conditional159=check_assign_type(msg,it_124,right_type,come_value,check_no_pointer,(_Bool)0,info),            _if_conditional159) {
                # 365 "05type.c"
                found_match_type_122=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_123,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        # 376 "05type.c"
        # 369 "05type.c"
        if(_if_conditional160=!found_match_type_122,        _if_conditional160) {
            # 370 "05type.c"
            err_msg(info,"type errorX");
            # 371 "05type.c"
            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
            # 372 "05type.c"
            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
            # 373 "05type.c"
            exit(2);
        }
        # 376 "05type.c"
        tmp_125=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("(void*)%s",come_value->c_value))));
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 377 "05type.c"
        __dec_obj47=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value154=string_clone(tmp_125))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 378 "05type.c"
        __dec_obj48=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 378, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 379 "05type.c"
        come_value->type->mHeap=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mMultipleTypes,0), "05type.c", 379, 4))->mHeap;
        # 380 "05type.c"
        come_value->var=((void*)0);
        # 382 "05type.c"
        __result101__ = (_Bool)1;
        come_call_finalizer3(left_type2_121,sType_finalize, 0, 0, 0, 0, (void*)0);
        tmp_125 = come_decrement_ref_count2(tmp_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result101__;
        come_call_finalizer3(left_type2_121,sType_finalize, 0, 0, 0, 0, (void*)0);
        tmp_125 = come_decrement_ref_count2(tmp_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 385 "05type.c"
    left_no_solved_generics_type_129=left_type->mNoSolvedGenericsType->v1;
    # 386 "05type.c"
    right_no_solved_generics_type_130=right_type2_120->mNoSolvedGenericsType->v1;
    # 388 "05type.c"
    left_class_131=left_type->mClass;
    # 389 "05type.c"
    right_class_132=right_type2_120->mClass;
    # 391 "05type.c"
    parent_class_133=(_Bool)0;
    # 406 "05type.c"
    # 392 "05type.c"
    if(_if_conditional163=string_operator_not_equals(left_class_131->mName,right_class_132->mName),    _if_conditional163) {
        # 404 "05type.c"
        while(_while_condtional33=left_class_131&&right_class_132,        _while_condtional33) {
            # 397 "05type.c"
            # 394 "05type.c"
            if(_if_conditional164=string_operator_equals(left_class_131->mName,right_class_132->mName),            _if_conditional164) {
                # 395 "05type.c"
                parent_class_133=(_Bool)1;
            }
            # 403 "05type.c"
            # 397 "05type.c"
            if(right_class_132->mParentClassName) {
                # 398 "05type.c"
                right_class_132=map$2charphsClassphp_operator_load_element(info->classes,right_class_132->mParentClassName);
            }
            else {
                # 401 "05type.c"
                right_class_132=((void*)0);
            }
        }
    }
    # 763 "05type.c"
    # 406 "05type.c"
    if(_if_conditional177=left_no_solved_generics_type_129&&right_no_solved_generics_type_130,    _if_conditional177) {
        # 439 "05type.c"
        # 407 "05type.c"
        if(_if_conditional178=string_operator_equals(left_type->mClass->mName,right_type2_120->mClass->mName)&&left_type->mPointerNum==right_type2_120->mPointerNum,        _if_conditional178) {
        }
        else {
            # 439 "05type.c"
            # 409 "05type.c"
            if(_if_conditional179=string_operator_equals(left_type->mClass->mName,right_type2_120->mClass->mName)&&(left_type->mPointerNum!=right_type2_120->mPointerNum||left_type->mHeap!=right_type2_120->mHeap),            _if_conditional179) {
                # 410 "05type.c"
                err_msg(info,"poinetr num err");
                # 411 "05type.c"
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes),left_no_solved_generics_type_129->mClass->mName,left_type->mClass->mName);
                # 412 "05type.c"
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_130->mGenericsTypes),right_no_solved_generics_type_130->mClass->mName,right_type2_120->mClass->mName);
                # 413 "05type.c"
                exit(2);
            }
            else {
                # 439 "05type.c"
                # 415 "05type.c"
                if(_if_conditional180=list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes)>0,                _if_conditional180) {
                    # 438 "05type.c"
                    # 416 "05type.c"
                    if(_if_conditional181=(string_operator_equals(left_no_solved_generics_type_129->mClass->mName,"void")&&left_no_solved_generics_type_129->mPointerNum>0&&right_no_solved_generics_type_130->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_130->mClass->mName,"void")&&right_no_solved_generics_type_130->mPointerNum>0&&left_no_solved_generics_type_129->mPointerNum>0),                    _if_conditional181) {
                    }
                    else {
                        # 432 "05type.c"
                        # 420 "05type.c"
                        if(_if_conditional182=list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_130->mGenericsTypes),                        _if_conditional182) {
                            # 429 "05type.c"
                            # 422 "05type.c"
                            if(print_err_msg) {
                                # 423 "05type.c"
                                err_msg(info,"generics type parametor number error");
                                # 424 "05type.c"
                                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes),left_no_solved_generics_type_129->mClass->mName,left_type->mClass->mName);
                                # 425 "05type.c"
                                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_130->mGenericsTypes),right_no_solved_generics_type_130->mClass->mName,right_type2_120->mClass->mName);
                                # 426 "05type.c"
                                exit(2);
                            }
                            # 429 "05type.c"
                            __result106__ = (_Bool)0;
                            come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result106__;
                        }
                        # 436 "05type.c"
                        for(                        i_139=0;                        i_139<list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes);                        i_139++                        ){
                            # 433 "05type.c"
                            check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_129->mGenericsTypes,i_139), "05type.c", 433, 5)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_130->mGenericsTypes,i_139), "05type.c", 433, 6)),come_value,(_Bool)0,(_Bool)1,info);
                        }
                        # 436 "05type.c"
                        check_assign_type(msg,left_no_solved_generics_type_129,right_no_solved_generics_type_130,come_value,(_Bool)0,(_Bool)1,info);
                    }
                }
            }
        }
    }
    else {
        # 763 "05type.c"
        # 440 "05type.c"
        if(_if_conditional184=parent_class_133&&left_type->mPointerNum==1&&right_type->mPointerNum==1,        _if_conditional184) {
            # 441 "05type.c"
            __dec_obj49=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value))));
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 442 "05type.c"
            __dec_obj50=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(left_type))));
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 443 "05type.c"
            come_value->var=((void*)0);
            # 445 "05type.c"
            __dec_obj51=right_type2_120;
            right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(left_type))));
            come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            # 763 "05type.c"
            # 447 "05type.c"
            if(check_no_pointer) {
                # 495 "05type.c"
                # 448 "05type.c"
                if(_if_conditional186=left_type->mPointerNum>0,                _if_conditional186) {
                    # 474 "05type.c"
                    # 449 "05type.c"
                    if(_if_conditional187=right_type2_120->mPointerNum>0,                    _if_conditional187) {
                        # 463 "05type.c"
                        # 450 "05type.c"
                        if(_if_conditional188=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_120->mClass->mName,"void"),                        _if_conditional188) {
                        }
                        else {
                            # 463 "05type.c"
                            # 452 "05type.c"
                            if(_if_conditional189=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                            _if_conditional189) {
                            }
                            else {
                                # 463 "05type.c"
                                # 454 "05type.c"
                                if(_if_conditional190=string_operator_not_equals(left_type->mClass->mName,right_type2_120->mClass->mName),                                _if_conditional190) {
                                    # 461 "05type.c"
                                    # 455 "05type.c"
                                    if(print_err_msg) {
                                        # 456 "05type.c"
                                        err_msg(info,"type error1");
                                        # 457 "05type.c"
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        # 458 "05type.c"
                                        printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                        # 459 "05type.c"
                                        exit(2);
                                    }
                                    # 461 "05type.c"
                                    __result107__ = (_Bool)0;
                                    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result107__;
                                }
                            }
                        }
                    }
                    else {
                        # 472 "05type.c"
                        # 465 "05type.c"
                        if(print_err_msg) {
                            # 466 "05type.c"
                            err_msg(info,"type error2");
                            # 467 "05type.c"
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            # 468 "05type.c"
                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                            # 469 "05type.c"
                            exit(2);
                        }
                        # 472 "05type.c"
                        __result108__ = (_Bool)0;
                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result108__;
                    }
                }
                else {
                    # 495 "05type.c"
                    # 475 "05type.c"
                    if(_if_conditional193=left_type->mPointerNum==0&&right_type2_120->mPointerNum>0,                    _if_conditional193) {
                        # 482 "05type.c"
                        # 476 "05type.c"
                        if(print_err_msg) {
                            # 477 "05type.c"
                            err_msg(info,"type error3");
                            # 478 "05type.c"
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            # 479 "05type.c"
                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                            # 480 "05type.c"
                            exit(2);
                        }
                        # 482 "05type.c"
                        __result109__ = (_Bool)0;
                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result109__;
                    }
                    else {
                        # 495 "05type.c"
                        # 484 "05type.c"
                        if(_if_conditional195=left_type->mPointerNum>0&&right_type2_120->mPointerNum==0&&string_operator_equals(right_type2_120->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                        _if_conditional195) {
                        }
                        else {
                            # 495 "05type.c"
                            # 486 "05type.c"
                            if(_if_conditional196=string_operator_not_equals(left_type->mClass->mName,right_type2_120->mClass->mName),                            _if_conditional196) {
                                # 493 "05type.c"
                                # 487 "05type.c"
                                if(print_err_msg) {
                                    # 488 "05type.c"
                                    err_msg(info,"type error4");
                                    # 489 "05type.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 490 "05type.c"
                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                    # 491 "05type.c"
                                    exit(2);
                                }
                                # 493 "05type.c"
                                __result110__ = (_Bool)0;
                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result110__;
                            }
                        }
                    }
                }
            }
            else {
                # 763 "05type.c"
                # 496 "05type.c"
                if(_if_conditional198=!left_type->mNullValue&&right_type2_120->mNullValue,                _if_conditional198) {
                    # 521 "05type.c"
                    # 497 "05type.c"
                    if(_if_conditional199=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                    _if_conditional199) {
                    }
                    else {
                        # 521 "05type.c"
                        # 499 "05type.c"
                        if(_if_conditional200=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                        _if_conditional200) {
                        }
                        else {
                            # 521 "05type.c"
                            # 501 "05type.c"
                            if(_if_conditional201=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum==0,                            _if_conditional201) {
                                # 508 "05type.c"
                                # 502 "05type.c"
                                if(print_err_msg) {
                                    # 503 "05type.c"
                                    err_msg(info,"type error6");
                                    # 504 "05type.c"
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    # 505 "05type.c"
                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                    # 506 "05type.c"
                                    exit(2);
                                }
                                # 508 "05type.c"
                                __result111__ = (_Bool)0;
                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result111__;
                            }
                            else {
                                # 511 "05type.c"
                                buf2_140=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 511, "buffer"))))))));
                                come_call_finalizer3(right_value160,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value161,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                # 513 "05type.c"
                                buffer_append_str(buf2_140,((char*)(right_value166=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value162=string_to_string(come_value->c_value))),((char*)(right_value163=string_to_string(info->sname))),((char*)(right_value164=int_to_string(info->sline))),((char*)(right_value165=int_to_string(gComeDebugStackFrameID++)))))));
                                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 515 "05type.c"
                                __dec_obj52=come_value->c_value;
                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value167=buffer_to_string(buf2_140))));
                                __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 516 "05type.c"
                                __dec_obj53=come_value->type;
                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(left_type))));
                                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                # 517 "05type.c"
                                come_value->var=((void*)0);
                                # 519 "05type.c"
                                __dec_obj54=right_type2_120;
                                right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(left_type))));
                                come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(buf2_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
                else {
                    # 763 "05type.c"
                    # 522 "05type.c"
                    if(_if_conditional203=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,                    _if_conditional203) {
                        # 595 "05type.c"
                        # 523 "05type.c"
                        if(_if_conditional204=string_operator_equals(right_type2_120->mClass->mName,"integer")&&right_type2_120->mPointerNum==1,                        _if_conditional204) {
                        }
                        else {
                            # 595 "05type.c"
                            # 525 "05type.c"
                            if(_if_conditional205=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                            _if_conditional205) {
                            }
                            else {
                                # 595 "05type.c"
                                # 527 "05type.c"
                                if(_if_conditional206=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                _if_conditional206) {
                                }
                                else {
                                    # 595 "05type.c"
                                    # 529 "05type.c"
                                    if(_if_conditional207=string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                    _if_conditional207) {
                                        # 536 "05type.c"
                                        # 530 "05type.c"
                                        if(print_err_msg) {
                                            # 531 "05type.c"
                                            err_msg(info,"type error6");
                                            # 532 "05type.c"
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            # 533 "05type.c"
                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                            # 534 "05type.c"
                                            exit(2);
                                        }
                                        # 536 "05type.c"
                                        __result112__ = (_Bool)0;
                                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result112__;
                                    }
                                    else {
                                        # 595 "05type.c"
                                        # 538 "05type.c"
                                        if(_if_conditional209=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum>0,                                        _if_conditional209) {
                                        }
                                        else {
                                            # 595 "05type.c"
                                            # 540 "05type.c"
                                            if(_if_conditional210=string_operator_equals(right_type2_120->mClass->mName,"void"),                                            _if_conditional210) {
                                                # 547 "05type.c"
                                                # 541 "05type.c"
                                                if(print_err_msg) {
                                                    # 542 "05type.c"
                                                    err_msg(info,"type error6");
                                                    # 543 "05type.c"
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    # 544 "05type.c"
                                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                    # 545 "05type.c"
                                                    exit(2);
                                                }
                                                # 547 "05type.c"
                                                __result113__ = (_Bool)0;
                                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result113__;
                                            }
                                            else {
                                                # 595 "05type.c"
                                                # 549 "05type.c"
                                                if(_if_conditional212=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                                _if_conditional212) {
                                                }
                                                else {
                                                    # 595 "05type.c"
                                                    # 551 "05type.c"
                                                    if(_if_conditional213=right_type2_120->mPointerNum>0,                                                    _if_conditional213) {
                                                        # 558 "05type.c"
                                                        # 552 "05type.c"
                                                        if(print_err_msg) {
                                                            # 553 "05type.c"
                                                            err_msg(info,"type error10");
                                                            # 554 "05type.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 555 "05type.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                            # 556 "05type.c"
                                                            exit(2);
                                                        }
                                                        # 558 "05type.c"
                                                        __result114__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result114__;
                                                    }
                                                    else {
                                                        # 561 "05type.c"
                                                        method_name_141=(char*)come_increment_ref_count(((char*)(right_value170=create_method_name(right_type2_120,(_Bool)0,"to_integer",info,(_Bool)1))));
                                                        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 578 "05type.c"
                                                        # 563 "05type.c"
                                                        if(_if_conditional234=map$2charphsFunph_at(info->funcs,method_name_141,((void*)0))==((void*)0),                                                        _if_conditional234) {
                                                            # 564 "05type.c"
                                                            obj_type_144=right_type2_120->mNoSolvedGenericsType->v1;
                                                            # 576 "05type.c"
                                                            # 565 "05type.c"
                                                            if(_if_conditional235=obj_type_144&&list$1sTypeph_length(obj_type_144->mGenericsTypes)>0,                                                            _if_conditional235) {
                                                                # 566 "05type.c"
                                                                obj_type2_145=right_type2_120;
                                                                # 567 "05type.c"
                                                                __dec_obj55=method_name_141;
                                                                method_name_141=(char*)come_increment_ref_count(((char*)(right_value172=make_generics_function(obj_type2_145,(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                # 574 "05type.c"
                                                                # 570 "05type.c"
                                                                if(print_err_msg) {
                                                                    # 571 "05type.c"
                                                                    err_msg(info,"require to_string implementation(%s)",right_type2_120->mClass->mName);
                                                                    # 572 "05type.c"
                                                                    exit(2);
                                                                }
                                                                # 574 "05type.c"
                                                                __result119__ = (_Bool)0;
                                                                method_name_141 = come_decrement_ref_count2(method_name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result119__;
                                                            }
                                                        }
                                                        # 578 "05type.c"
                                                        buf2_146=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 578, "buffer"))))))));
                                                        come_call_finalizer3(right_value173,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value174,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 580 "05type.c"
                                                        buffer_append_str(buf2_146,method_name_141);
                                                        # 581 "05type.c"
                                                        buffer_append_str(buf2_146,"(");
                                                        # 582 "05type.c"
                                                        buffer_append_str(buf2_146,come_value->c_value);
                                                        # 583 "05type.c"
                                                        buffer_append_str(buf2_146,")");
                                                        # 585 "05type.c"
                                                        type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 585, "sType")))),"integer",(_Bool)0,info))));
                                                        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 586 "05type.c"
                                                        type_147->mHeap=(_Bool)1;
                                                        # 587 "05type.c"
                                                        type_147->mPointerNum=1;
                                                        # 589 "05type.c"
                                                        __dec_obj56=come_value->c_value;
                                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value178=append_object_to_right_values(((char*)(right_value177=buffer_to_string(buf2_146))),(struct sType*)come_increment_ref_count(type_147),info))));
                                                        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 590 "05type.c"
                                                        __dec_obj57=come_value->type;
                                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(type_147))));
                                                        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 591 "05type.c"
                                                        come_value->var=((void*)0);
                                                        # 593 "05type.c"
                                                        __dec_obj58=right_type2_120;
                                                        right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(type_147))));
                                                        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value180,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        method_name_141 = come_decrement_ref_count2(method_name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(buf2_146,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                        # 763 "05type.c"
                        # 596 "05type.c"
                        if(_if_conditional237=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),                        _if_conditional237) {
                            # 597 "05type.c"
                            method_name_148=(char*)come_increment_ref_count(((char*)(right_value181=create_method_name(right_type2_120,(_Bool)0,"to_int",info,(_Bool)1))));
                            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 614 "05type.c"
                            # 599 "05type.c"
                            if(_if_conditional238=map$2charphsFunph_at(info->funcs,method_name_148,((void*)0))==((void*)0),                            _if_conditional238) {
                                # 600 "05type.c"
                                obj_type_149=right_type2_120->mNoSolvedGenericsType->v1;
                                # 612 "05type.c"
                                # 601 "05type.c"
                                if(_if_conditional239=obj_type_149&&list$1sTypeph_length(obj_type_149->mGenericsTypes)>0,                                _if_conditional239) {
                                    # 602 "05type.c"
                                    obj_type2_150=right_type2_120;
                                    # 603 "05type.c"
                                    __dec_obj59=method_name_148;
                                    method_name_148=(char*)come_increment_ref_count(((char*)(right_value183=make_generics_function(obj_type2_150,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string("to_int")))),info,(_Bool)1))));
                                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 610 "05type.c"
                                    # 606 "05type.c"
                                    if(print_err_msg) {
                                        # 607 "05type.c"
                                        err_msg(info,"require to_string implementation(%s)",right_type2_120->mClass->mName);
                                        # 608 "05type.c"
                                        exit(1);
                                    }
                                    # 610 "05type.c"
                                    __result120__ = (_Bool)0;
                                    method_name_148 = come_decrement_ref_count2(method_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result120__;
                                }
                            }
                            # 614 "05type.c"
                            buf2_151=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value185=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value184=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 614, "buffer"))))))));
                            come_call_finalizer3(right_value184,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value185,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 616 "05type.c"
                            buffer_append_str(buf2_151,method_name_148);
                            # 617 "05type.c"
                            buffer_append_str(buf2_151,"(");
                            # 618 "05type.c"
                            buffer_append_str(buf2_151,come_value->c_value);
                            # 619 "05type.c"
                            buffer_append_str(buf2_151,")");
                            # 621 "05type.c"
                            type_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value186=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 621, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(right_value186,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 623 "05type.c"
                            __dec_obj60=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value188=buffer_to_string(buf2_151))));
                            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 624 "05type.c"
                            __dec_obj61=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(type_152))));
                            come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 625 "05type.c"
                            come_value->var=((void*)0);
                            # 627 "05type.c"
                            __dec_obj62=right_type2_120;
                            right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(type_152))));
                            come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            method_name_148 = come_decrement_ref_count2(method_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(buf2_151,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 763 "05type.c"
                            # 629 "05type.c"
                            if(_if_conditional241=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                            _if_conditional241) {
                                # 666 "05type.c"
                                # 630 "05type.c"
                                if(_if_conditional242=string_operator_equals(right_type2_120->mClass->mName,"char")&&right_type2_120->mPointerNum==1,                                _if_conditional242) {
                                }
                                else {
                                    # 666 "05type.c"
                                    # 632 "05type.c"
                                    if(_if_conditional243=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                                    _if_conditional243) {
                                    }
                                    else {
                                        # 666 "05type.c"
                                        # 634 "05type.c"
                                        if(_if_conditional244=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                        _if_conditional244) {
                                        }
                                        else {
                                            # 666 "05type.c"
                                            # 636 "05type.c"
                                            if(_if_conditional245=string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                            _if_conditional245) {
                                                # 644 "05type.c"
                                                # 637 "05type.c"
                                                if(print_err_msg) {
                                                    # 638 "05type.c"
                                                    err_msg(info,"type error6");
                                                    # 639 "05type.c"
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    # 640 "05type.c"
                                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                    # 641 "05type.c"
                                                    exit(2);
                                                }
                                                # 644 "05type.c"
                                                __result121__ = (_Bool)0;
                                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result121__;
                                            }
                                            else {
                                                # 666 "05type.c"
                                                # 646 "05type.c"
                                                if(_if_conditional247=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum>0,                                                _if_conditional247) {
                                                }
                                                else {
                                                    # 666 "05type.c"
                                                    # 648 "05type.c"
                                                    if(_if_conditional248=string_operator_equals(right_type2_120->mClass->mName,"void"),                                                    _if_conditional248) {
                                                        # 655 "05type.c"
                                                        # 649 "05type.c"
                                                        if(print_err_msg) {
                                                            # 650 "05type.c"
                                                            err_msg(info,"type error6");
                                                            # 651 "05type.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 652 "05type.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                            # 653 "05type.c"
                                                            exit(2);
                                                        }
                                                        # 655 "05type.c"
                                                        __result122__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result122__;
                                                    }
                                                    else {
                                                        # 666 "05type.c"
                                                        # 657 "05type.c"
                                                        if(_if_conditional250=string_operator_not_equals(left_type->mClass->mName,right_type2_120->mClass->mName),                                                        _if_conditional250) {
                                                            # 664 "05type.c"
                                                            # 658 "05type.c"
                                                            if(print_err_msg) {
                                                                # 659 "05type.c"
                                                                err_msg(info,"type error5");
                                                                # 660 "05type.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 661 "05type.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                                # 662 "05type.c"
                                                                exit(2);
                                                            }
                                                            # 664 "05type.c"
                                                            __result123__ = (_Bool)0;
                                                            come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result123__;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else {
                                # 763 "05type.c"
                                # 667 "05type.c"
                                if(_if_conditional252=string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1,                                _if_conditional252) {
                                    # 695 "05type.c"
                                    # 668 "05type.c"
                                    if(_if_conditional253=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum==1,                                    _if_conditional253) {
                                    }
                                    else {
                                        # 695 "05type.c"
                                        # 670 "05type.c"
                                        if(_if_conditional254=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                                        _if_conditional254) {
                                        }
                                        else {
                                            # 695 "05type.c"
                                            # 672 "05type.c"
                                            if(_if_conditional255=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                            _if_conditional255) {
                                            }
                                            else {
                                                # 695 "05type.c"
                                                # 674 "05type.c"
                                                if(_if_conditional256=string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                                _if_conditional256) {
                                                }
                                                else {
                                                    # 695 "05type.c"
                                                    # 676 "05type.c"
                                                    if(_if_conditional257=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum>0,                                                    _if_conditional257) {
                                                    }
                                                    else {
                                                        # 695 "05type.c"
                                                        # 678 "05type.c"
                                                        if(_if_conditional258=string_operator_equals(right_type2_120->mClass->mName,"void"),                                                        _if_conditional258) {
                                                            # 685 "05type.c"
                                                            # 679 "05type.c"
                                                            if(print_err_msg) {
                                                                # 680 "05type.c"
                                                                err_msg(info,"type error6");
                                                                # 681 "05type.c"
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                # 682 "05type.c"
                                                                printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                                # 683 "05type.c"
                                                                exit(2);
                                                            }
                                                            # 685 "05type.c"
                                                            __result124__ = (_Bool)0;
                                                            come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result124__;
                                                        }
                                                        else {
                                                            # 695 "05type.c"
                                                            # 687 "05type.c"
                                                            if(_if_conditional260=right_type2_120->mPointerNum==0,                                                            _if_conditional260) {
                                                                # 688 "05type.c"
                                                                tmp_153=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("(void*)%s",come_value->c_value))));
                                                                right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 689 "05type.c"
                                                                __dec_obj63=come_value->c_value;
                                                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value192=string_clone(tmp_153))));
                                                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                # 690 "05type.c"
                                                                __dec_obj64=come_value->type;
                                                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(left_type))));
                                                                come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 691 "05type.c"
                                                                come_value->var=((void*)0);
                                                                # 693 "05type.c"
                                                                __dec_obj65=right_type2_120;
                                                                right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(left_type))));
                                                                come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value194,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                tmp_153 = come_decrement_ref_count2(tmp_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    # 763 "05type.c"
                                    # 696 "05type.c"
                                    if(_if_conditional261=left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct),                                    _if_conditional261) {
                                        # 750 "05type.c"
                                        # 697 "05type.c"
                                        if(_if_conditional262=right_type2_120->mPointerNum>0||(right_type2_120->mPointerNum==0&&right_type2_120->mClass->mStruct),                                        _if_conditional262) {
                                            # 721 "05type.c"
                                            # 698 "05type.c"
                                            if(_if_conditional263=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_120->mClass->mName,"void"),                                            _if_conditional263) {
                                            }
                                            else {
                                                # 721 "05type.c"
                                                # 700 "05type.c"
                                                if(_if_conditional264=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                                _if_conditional264) {
                                                }
                                                else {
                                                    # 721 "05type.c"
                                                    # 702 "05type.c"
                                                    if(_if_conditional265=string_operator_not_equals(left_type->mClass->mName,right_type2_120->mClass->mName),                                                    _if_conditional265) {
                                                        # 709 "05type.c"
                                                        # 703 "05type.c"
                                                        if(print_err_msg) {
                                                            # 704 "05type.c"
                                                            err_msg(info,"type error5");
                                                            # 705 "05type.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 706 "05type.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                            # 707 "05type.c"
                                                            exit(2);
                                                        }
                                                        # 709 "05type.c"
                                                        __result125__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result125__;
                                                    }
                                                    else {
                                                        # 721 "05type.c"
                                                        # 711 "05type.c"
                                                        if(_if_conditional267=left_type->mPointerNum!=right_type2_120->mPointerNum,                                                        _if_conditional267) {
                                                            # 712 "05type.c"
                                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                            # 713 "05type.c"
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            # 714 "05type.c"
                                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                        }
                                                        else {
                                                            # 721 "05type.c"
                                                            # 716 "05type.c"
                                                            if(_if_conditional269=list$1sNodeph_length(right_type2_120->mArrayNum)>0,                                                            _if_conditional269) {
                                                                # 717 "05type.c"
                                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                # 718 "05type.c"
                                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                                # 719 "05type.c"
                                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum,list$1sNodeph_length(right_type2_120->mArrayNum));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else {
                                            # 750 "05type.c"
                                            # 722 "05type.c"
                                            if(_if_conditional270=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_120->mClass->mName,"void"),                                            _if_conditional270) {
                                            }
                                            else {
                                                # 750 "05type.c"
                                                # 724 "05type.c"
                                                if(_if_conditional271=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                                _if_conditional271) {
                                                }
                                                else {
                                                    # 750 "05type.c"
                                                    # 726 "05type.c"
                                                    if(_if_conditional272=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                                                    _if_conditional272) {
                                                    }
                                                    else {
                                                        # 750 "05type.c"
                                                        # 728 "05type.c"
                                                        if(_if_conditional273=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                                        _if_conditional273) {
                                                        }
                                                        else {
                                                            # 750 "05type.c"
                                                            # 730 "05type.c"
                                                            if(_if_conditional274=left_type->mPointerNum>0&&right_type2_120->mPointerNum==0&&string_operator_equals(right_type2_120->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                                            _if_conditional274) {
                                                                # 738 "05type.c"
                                                                # 731 "05type.c"
                                                                if(print_err_msg) {
                                                                    # 732 "05type.c"
                                                                    err_msg(info,"type error10");
                                                                    # 733 "05type.c"
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    # 734 "05type.c"
                                                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                                    # 735 "05type.c"
                                                                    exit(2);
                                                                }
                                                                # 738 "05type.c"
                                                                __result128__ = (_Bool)0;
                                                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result128__;
                                                            }
                                                            else {
                                                                # 750 "05type.c"
                                                                # 740 "05type.c"
                                                                if(_if_conditional276=!(string_operator_equals(right_type2_120->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_120->mPointerNum==0,                                                                _if_conditional276) {
                                                                    # 747 "05type.c"
                                                                    # 741 "05type.c"
                                                                    if(print_err_msg) {
                                                                        # 742 "05type.c"
                                                                        err_msg(info,"type error6");
                                                                        # 743 "05type.c"
                                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                        # 744 "05type.c"
                                                                        printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                                        # 745 "05type.c"
                                                                        exit(2);
                                                                    }
                                                                    # 747 "05type.c"
                                                                    __result129__ = (_Bool)0;
                                                                    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result129__;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        # 761 "05type.c"
                                        # 750 "05type.c"
                                        if(_if_conditional278=list$1sTypeph_length(left_type->mGenericsTypes)>0,                                        _if_conditional278) {
                                            # 757 "05type.c"
                                            # 751 "05type.c"
                                            if(_if_conditional279=list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_120->mGenericsTypes),                                            _if_conditional279) {
                                                # 752 "05type.c"
                                                err_msg(info,"generics type number error");
                                                # 753 "05type.c"
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                # 754 "05type.c"
                                                printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                # 755 "05type.c"
                                                exit(2);
                                            }
                                            # 760 "05type.c"
                                            for(                                            i_154=0;                                            i_154<list$1sTypeph_length(left_type->mGenericsTypes);                                            i_154++                                            ){
                                                # 758 "05type.c"
                                                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_154), "05type.c", 758, 7)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_120->mGenericsTypes,i_154), "05type.c", 758, 8)),come_value,(_Bool)0,(_Bool)1,info);
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
    # 763 "05type.c"
    __result130__ = (_Bool)1;
    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result130__;
    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional157;
int __result97__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional157=self==((void*)0),        _if_conditional157) {
            # 352 "./neo-c.h"
            __result97__ = 0;
            return __result97__;
        }
        # 354 "./neo-c.h"
        __result98__ = self->len;
        return __result98__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional161;
struct list_item$1sTypeph* it_126;
int i_127;
_Bool _while_condtional32;
_Bool _if_conditional162;
struct sType* __result99__;
struct sType* default_value_128;
struct sType* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_126, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_127, 0, sizeof(int));
memset(&default_value_128, 0, sizeof(struct sType*));
            # 673 "./neo-c.h"
            # 669 "./neo-c.h"
            if(_if_conditional161=position<0,            _if_conditional161) {
                # 670 "./neo-c.h"
                position+=self->len;
            }
            # 673 "./neo-c.h"
            it_126=self->head;
            # 674 "./neo-c.h"
            i_127=0;
            # 681 "./neo-c.h"
            while(_while_condtional32=it_126!=((void*)0),            _while_condtional32) {
                # 679 "./neo-c.h"
                # 676 "./neo-c.h"
                if(_if_conditional162=position==i_127,                _if_conditional162) {
                    # 677 "./neo-c.h"
                    __result99__ = __result_obj__ = it_126->item;
                    return __result99__;
                }
                # 679 "./neo-c.h"
                it_126=it_126->next;
                # 680 "./neo-c.h"
                i_127++;
            }
            # 683 "./neo-c.h"
            # 684 "./neo-c.h"
            memset(&default_value_128,0,sizeof(struct sType*));
            # 685 "./neo-c.h"
            __result100__ = __result_obj__ = default_value_128;
            come_call_finalizer3(default_value_128,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result100__;
            come_call_finalizer3(default_value_128,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_134;
unsigned int hash_135;
unsigned int it_136;
_Bool _while_condtional34;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct sClass* __result102__;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct sClass* __result103__;
struct sClass* __result104__;
struct sClass* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_134, 0, sizeof(struct sClass*));
memset(&hash_135, 0, sizeof(unsigned int));
memset(&it_136, 0, sizeof(unsigned int));
                    # 1519 "./neo-c.h"
                    # 1520 "./neo-c.h"
                    memset(&default_value_134,0,sizeof(struct sClass*));
                    # 1522 "./neo-c.h"
                    hash_135=string_get_hash_key(((char*)key))%self->size;
                    # 1523 "./neo-c.h"
                    it_136=hash_135;
                    # 1547 "./neo-c.h"
                    while(_while_condtional34=(_Bool)1,                    _while_condtional34) {
                        # 1545 "./neo-c.h"
                        # 1526 "./neo-c.h"
                        if(_if_conditional166=self->item_existance[it_136],                        _if_conditional166) {
                            # 1533 "./neo-c.h"
                            # 1528 "./neo-c.h"
                            if(_if_conditional167=string_equals(self->keys[it_136],key),                            _if_conditional167) {
                                # 1530 "./neo-c.h"
                                __result102__ = __result_obj__ = self->items[it_136];
                                come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                return __result102__;
                            }
                            # 1533 "./neo-c.h"
                            it_136++;
                            # 1541 "./neo-c.h"
                            # 1535 "./neo-c.h"
                            if(_if_conditional175=it_136>=self->size,                            _if_conditional175) {
                                # 1536 "./neo-c.h"
                                it_136=0;
                            }
                            else {
                                # 1541 "./neo-c.h"
                                # 1538 "./neo-c.h"
                                if(_if_conditional176=it_136==hash_135,                                _if_conditional176) {
                                    # 1539 "./neo-c.h"
                                    __result103__ = __result_obj__ = default_value_134;
                                    come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result103__;
                                }
                            }
                        }
                        else {
                            # 1543 "./neo-c.h"
                            __result104__ = __result_obj__ = default_value_134;
                            come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result104__;
                        }
                    }
                    # 1547 "./neo-c.h"
                    __result105__ = __result_obj__ = default_value_134;
                    come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                    come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional173;
_Bool _if_conditional174;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sClass_finalize"
                                    # 0 "sClass_finalize"
                                    if(_if_conditional168=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional168) {
                                        # 0 "sClass_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sClass_finalize"
                                    # 1 "sClass_finalize"
                                    if(_if_conditional169=self!=((void*)0)&&self->mFields!=((void*)0),                                    _if_conditional169) {
                                        # 1 "sClass_finalize"
                                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sClass_finalize"
                                    # 2 "sClass_finalize"
                                    if(_if_conditional173=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                    _if_conditional173) {
                                        # 2 "sClass_finalize"
                                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sClass_finalize"
                                    # 3 "sClass_finalize"
                                    if(_if_conditional174=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                    _if_conditional174) {
                                        # 3 "sClass_finalize"
                                        self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_137;
_Bool _while_condtional35;
struct list_item$1tuple2$2charphsTypephph* prev_it_138;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_137, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_138, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                            # 114 "./neo-c.h"
                                            it_137=self->head;
                                            # 120 "./neo-c.h"
                                            while(_while_condtional35=it_137!=((void*)0),                                            _while_condtional35) {
                                                # 116 "./neo-c.h"
                                                prev_it_138=it_137;
                                                # 117 "./neo-c.h"
                                                it_137=it_137->next;
                                                # 118 "./neo-c.h"
                                                come_call_finalizer3(prev_it_138,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                    if(_if_conditional170=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional170) {
                                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional171;
_Bool _if_conditional172;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1 "tuple2$2charphsTypephp_finalize"
                                                            # 0 "tuple2$2charphsTypephp_finalize"
                                                            if(_if_conditional171=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional171) {
                                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            # 2 "tuple2$2charphsTypephp_finalize"
                                                            # 1 "tuple2$2charphsTypephp_finalize"
                                                            if(_if_conditional172=self!=((void*)0)&&self->v2!=((void*)0),                                                            _if_conditional172) {
                                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_142;
unsigned int it_143;
_Bool _while_condtional36;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sFun* __result115__;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct sFun* __result116__;
struct sFun* __result117__;
struct sFun* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_142, 0, sizeof(unsigned int));
memset(&it_143, 0, sizeof(unsigned int));
                                                            # 1201 "./neo-c.h"
                                                            hash_142=string_get_hash_key(((char*)key))%self->size;
                                                            # 1202 "./neo-c.h"
                                                            it_143=hash_142;
                                                            # 1226 "./neo-c.h"
                                                            while(_while_condtional36=(_Bool)1,                                                            _while_condtional36) {
                                                                # 1224 "./neo-c.h"
                                                                # 1205 "./neo-c.h"
                                                                if(_if_conditional215=self->item_existance[it_143],                                                                _if_conditional215) {
                                                                    # 1212 "./neo-c.h"
                                                                    # 1207 "./neo-c.h"
                                                                    if(_if_conditional216=string_equals(self->keys[it_143],key),                                                                    _if_conditional216) {
                                                                        # 1209 "./neo-c.h"
                                                                        __result115__ = __result_obj__ = self->items[it_143];
                                                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result115__;
                                                                    }
                                                                    # 1212 "./neo-c.h"
                                                                    it_143++;
                                                                    # 1220 "./neo-c.h"
                                                                    # 1214 "./neo-c.h"
                                                                    if(_if_conditional232=it_143>=self->size,                                                                    _if_conditional232) {
                                                                        # 1215 "./neo-c.h"
                                                                        it_143=0;
                                                                    }
                                                                    else {
                                                                        # 1220 "./neo-c.h"
                                                                        # 1217 "./neo-c.h"
                                                                        if(_if_conditional233=it_143==hash_142,                                                                        _if_conditional233) {
                                                                            # 1218 "./neo-c.h"
                                                                            __result116__ = __result_obj__ = default_value;
                                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result116__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1222 "./neo-c.h"
                                                                    __result117__ = __result_obj__ = default_value;
                                                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result117__;
                                                                }
                                                            }
                                                            # 1226 "./neo-c.h"
                                                            __result118__ = __result_obj__ = default_value;
                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result118__;
                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            # 1 "sFun_finalize"
                                                                            # 0 "sFun_finalize"
                                                                            if(_if_conditional217=self!=((void*)0)&&self->mName!=((void*)0),                                                                            _if_conditional217) {
                                                                                # 0 "sFun_finalize"
                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 2 "sFun_finalize"
                                                                            # 1 "sFun_finalize"
                                                                            if(_if_conditional218=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                            _if_conditional218) {
                                                                                # 1 "sFun_finalize"
                                                                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 3 "sFun_finalize"
                                                                            # 2 "sFun_finalize"
                                                                            if(_if_conditional219=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                            _if_conditional219) {
                                                                                # 2 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 4 "sFun_finalize"
                                                                            # 3 "sFun_finalize"
                                                                            if(_if_conditional220=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                            _if_conditional220) {
                                                                                # 3 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 5 "sFun_finalize"
                                                                            # 4 "sFun_finalize"
                                                                            if(_if_conditional221=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                            _if_conditional221) {
                                                                                # 4 "sFun_finalize"
                                                                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 6 "sFun_finalize"
                                                                            # 5 "sFun_finalize"
                                                                            if(_if_conditional222=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                            _if_conditional222) {
                                                                                # 5 "sFun_finalize"
                                                                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 7 "sFun_finalize"
                                                                            # 6 "sFun_finalize"
                                                                            if(_if_conditional223=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                            _if_conditional223) {
                                                                                # 6 "sFun_finalize"
                                                                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 8 "sFun_finalize"
                                                                            # 7 "sFun_finalize"
                                                                            if(_if_conditional226=self!=((void*)0)&&self->mSource!=((void*)0),                                                                            _if_conditional226) {
                                                                                # 7 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 9 "sFun_finalize"
                                                                            # 8 "sFun_finalize"
                                                                            if(_if_conditional227=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                            _if_conditional227) {
                                                                                # 8 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 10 "sFun_finalize"
                                                                            # 9 "sFun_finalize"
                                                                            if(_if_conditional228=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                            _if_conditional228) {
                                                                                # 9 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 11 "sFun_finalize"
                                                                            # 10 "sFun_finalize"
                                                                            if(_if_conditional229=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                            _if_conditional229) {
                                                                                # 10 "sFun_finalize"
                                                                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 12 "sFun_finalize"
                                                                            # 11 "sFun_finalize"
                                                                            if(_if_conditional230=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                            _if_conditional230) {
                                                                                # 11 "sFun_finalize"
                                                                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 13 "sFun_finalize"
                                                                            # 12 "sFun_finalize"
                                                                            if(_if_conditional231=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                            _if_conditional231) {
                                                                                # 12 "sFun_finalize"
                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional224;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    # 1 "sBlock_finalize"
                                                                                    # 0 "sBlock_finalize"
                                                                                    if(_if_conditional224=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                                    _if_conditional224) {
                                                                                        # 0 "sBlock_finalize"
                                                                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    # 2 "sBlock_finalize"
                                                                                    # 1 "sBlock_finalize"
                                                                                    if(_if_conditional225=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                                    _if_conditional225) {
                                                                                        # 1 "sBlock_finalize"
                                                                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional268;
int __result126__;
int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                # 354 "./neo-c.h"
                                                                # 351 "./neo-c.h"
                                                                if(_if_conditional268=self==((void*)0),                                                                _if_conditional268) {
                                                                    # 352 "./neo-c.h"
                                                                    __result126__ = 0;
                                                                    return __result126__;
                                                                }
                                                                # 354 "./neo-c.h"
                                                                __result127__ = self->len;
                                                                return __result127__;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
void* right_value195;
struct sType* right_type2_155;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value196;
char* method_name_156;
_Bool _if_conditional289;
struct sType* obj_type_157;
_Bool _if_conditional290;
struct sType* obj_type2_158;
void* right_value197;
void* right_value198;
char* __dec_obj66;
void* right_value199;
void* right_value200;
struct buffer* buf2_159;
void* right_value201;
void* right_value202;
struct sType* type_160;
void* right_value203;
void* right_value204;
char* __dec_obj67;
void* right_value205;
struct sType* __dec_obj68;
void* right_value206;
struct sType* __dec_obj69;
_Bool _if_conditional291;
void* right_value207;
char* method_name_161;
_Bool _if_conditional292;
struct sType* obj_type_162;
_Bool _if_conditional293;
struct sType* obj_type2_163;
void* right_value208;
void* right_value209;
char* __dec_obj70;
void* right_value210;
void* right_value211;
struct buffer* buf2_164;
void* right_value212;
void* right_value213;
struct sType* type_165;
void* right_value214;
char* __dec_obj71;
void* right_value215;
struct sType* __dec_obj72;
void* right_value216;
struct sType* __dec_obj73;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&right_type2_155, 0, sizeof(struct sType*));
right_value196 = (void*)0;
memset(&method_name_156, 0, sizeof(char*));
memset(&obj_type_157, 0, sizeof(struct sType*));
memset(&obj_type2_158, 0, sizeof(struct sType*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&buf2_159, 0, sizeof(struct buffer*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&type_160, 0, sizeof(struct sType*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&method_name_161, 0, sizeof(char*));
memset(&obj_type_162, 0, sizeof(struct sType*));
memset(&obj_type2_163, 0, sizeof(struct sType*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&buf2_164, 0, sizeof(struct buffer*));
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&type_165, 0, sizeof(struct sType*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
    # 768 "05type.c"
    right_type2_155=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(right_type))));
    come_call_finalizer3(right_value195,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 849 "05type.c"
    # 769 "05type.c"
    if(_if_conditional280=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,    _if_conditional280) {
        # 818 "05type.c"
        # 770 "05type.c"
        if(_if_conditional281=string_operator_equals(right_type2_155->mClass->mName,"integer")&&right_type2_155->mPointerNum==1,        _if_conditional281) {
        }
        else {
            # 818 "05type.c"
            # 772 "05type.c"
            if(_if_conditional282=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_155->mClass->mName,"__builtin_va_list"),            _if_conditional282) {
            }
            else {
                # 818 "05type.c"
                # 774 "05type.c"
                if(_if_conditional283=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_155->mClass->mName,"va_list"),                _if_conditional283) {
                }
                else {
                    # 818 "05type.c"
                    # 776 "05type.c"
                    if(_if_conditional284=string_operator_equals(right_type2_155->mClass->mName,"lambda"),                    _if_conditional284) {
                    }
                    else {
                        # 818 "05type.c"
                        # 778 "05type.c"
                        if(_if_conditional285=string_operator_equals(right_type2_155->mClass->mName,"void")&&right_type2_155->mPointerNum>0,                        _if_conditional285) {
                        }
                        else {
                            # 818 "05type.c"
                            # 780 "05type.c"
                            if(_if_conditional286=string_operator_equals(right_type2_155->mClass->mName,"void"),                            _if_conditional286) {
                            }
                            else {
                                # 818 "05type.c"
                                # 782 "05type.c"
                                if(_if_conditional287=left_type->mPointerNum>0&&right_type2_155->mPointerNum==0&&string_operator_equals(right_type2_155->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                _if_conditional287) {
                                }
                                else {
                                    # 818 "05type.c"
                                    # 784 "05type.c"
                                    if(_if_conditional288=right_type->mPointerNum>0,                                    _if_conditional288) {
                                    }
                                    else {
                                        # 787 "05type.c"
                                        method_name_156=(char*)come_increment_ref_count(((char*)(right_value196=create_method_name(right_type2_155,(_Bool)0,"to_integer",info,(_Bool)1))));
                                        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 801 "05type.c"
                                        # 789 "05type.c"
                                        if(_if_conditional289=map$2charphsFunph_at(info->funcs,method_name_156,((void*)0))==((void*)0),                                        _if_conditional289) {
                                            # 790 "05type.c"
                                            obj_type_157=right_type2_155->mNoSolvedGenericsType->v1;
                                            # 799 "05type.c"
                                            # 791 "05type.c"
                                            if(_if_conditional290=obj_type_157&&list$1sTypeph_length(obj_type_157->mGenericsTypes)>0,                                            _if_conditional290) {
                                                # 792 "05type.c"
                                                obj_type2_158=right_type2_155;
                                                # 793 "05type.c"
                                                __dec_obj66=method_name_156;
                                                method_name_156=(char*)come_increment_ref_count(((char*)(right_value198=make_generics_function(obj_type2_158,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 796 "05type.c"
                                                err_msg(info,"require to_string implementation(%s)",right_type2_155->mClass->mName);
                                                # 797 "05type.c"
                                                exit(1);
                                            }
                                        }
                                        # 801 "05type.c"
                                        buf2_159=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value199=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 801, "buffer"))))))));
                                        come_call_finalizer3(right_value199,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value200,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 803 "05type.c"
                                        buffer_append_str(buf2_159,method_name_156);
                                        # 804 "05type.c"
                                        buffer_append_str(buf2_159,"(");
                                        # 805 "05type.c"
                                        buffer_append_str(buf2_159,come_value->c_value);
                                        # 806 "05type.c"
                                        buffer_append_str(buf2_159,")");
                                        # 808 "05type.c"
                                        type_160=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 808, "sType")))),"integer",(_Bool)0,info))));
                                        come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 809 "05type.c"
                                        type_160->mHeap=(_Bool)1;
                                        # 810 "05type.c"
                                        type_160->mPointerNum=1;
                                        # 812 "05type.c"
                                        __dec_obj67=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value204=append_object_to_right_values(((char*)(right_value203=buffer_to_string(buf2_159))),(struct sType*)come_increment_ref_count(type_160),info))));
                                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 813 "05type.c"
                                        __dec_obj68=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(type_160))));
                                        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 814 "05type.c"
                                        come_value->var=((void*)0);
                                        # 816 "05type.c"
                                        __dec_obj69=right_type2_155;
                                        right_type2_155=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(type_160))));
                                        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        method_name_156 = come_decrement_ref_count2(method_name_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(buf2_159,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        # 849 "05type.c"
        # 819 "05type.c"
        if(_if_conditional291=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),        _if_conditional291) {
            # 820 "05type.c"
            method_name_161=(char*)come_increment_ref_count(((char*)(right_value207=create_method_name(right_type2_155,(_Bool)0,"to_int",info,(_Bool)1))));
            right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 834 "05type.c"
            # 822 "05type.c"
            if(_if_conditional292=map$2charphsFunph_at(info->funcs,method_name_161,((void*)0))==((void*)0),            _if_conditional292) {
                # 823 "05type.c"
                obj_type_162=right_type2_155->mNoSolvedGenericsType->v1;
                # 832 "05type.c"
                # 824 "05type.c"
                if(_if_conditional293=obj_type_162&&list$1sTypeph_length(obj_type_162->mGenericsTypes)>0,                _if_conditional293) {
                    # 825 "05type.c"
                    obj_type2_163=right_type2_155;
                    # 826 "05type.c"
                    __dec_obj70=method_name_161;
                    method_name_161=(char*)come_increment_ref_count(((char*)(right_value209=make_generics_function(obj_type2_163,(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("to_int")))),info,(_Bool)1))));
                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 829 "05type.c"
                    err_msg(info,"require to_string implementation(%s)",right_type2_155->mClass->mName);
                    # 830 "05type.c"
                    exit(1);
                }
            }
            # 834 "05type.c"
            buf2_164=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value211=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value210=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 834, "buffer"))))))));
            come_call_finalizer3(right_value210,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value211,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 836 "05type.c"
            buffer_append_str(buf2_164,method_name_161);
            # 837 "05type.c"
            buffer_append_str(buf2_164,"(");
            # 838 "05type.c"
            buffer_append_str(buf2_164,come_value->c_value);
            # 839 "05type.c"
            buffer_append_str(buf2_164,")");
            # 841 "05type.c"
            type_165=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value212=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 841, "sType")))),"int",(_Bool)0,info))));
            come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 843 "05type.c"
            __dec_obj71=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value214=buffer_to_string(buf2_164))));
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 844 "05type.c"
            __dec_obj72=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(type_165))));
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 845 "05type.c"
            come_value->var=((void*)0);
            # 847 "05type.c"
            __dec_obj73=right_type2_155;
            right_type2_155=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(type_165))));
            come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
            method_name_161 = come_decrement_ref_count2(method_name_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_164,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_165,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value217;
struct sType* result_type_166;
_Bool _if_conditional294;
char* var_name_167;
char* p_168;
int sline_169;
_Bool _if_conditional295;
void* right_value218;
char* __exception_result_var_b4;
char* word_170;
_Bool _if_conditional296;
_Bool between_brace_171;
char* p_172;
int sline_173;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value219;
char* __exception_result_var_b5;
char* word_174;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _while_condtional37;
char* p_175;
int sline_176;
_Bool _if_conditional302;
void* right_value220;
char* __exception_result_var_b6;
char* word_177;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value221;
char* __exception_result_var_b7;
char* __dec_obj74;
static int num_anonymous_var_name_178=0;
void* right_value222;
char* __dec_obj75;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool no_comma_179;
void* right_value223;
struct sNode* node_180;
struct sNode* __dec_obj76;
_Bool _while_condtional38;
char* p_181;
int sline_182;
_Bool _if_conditional308;
void* right_value224;
char* __exception_result_var_b8;
char* word_183;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value225;
struct sNode* node_184;
int __exception_result_var_b9;
void* right_value229;
void* right_value230;
struct tuple2$2sTypephcharph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
memset(&result_type_166, 0, sizeof(struct sType*));
memset(&var_name_167, 0, sizeof(char*));
memset(&p_168, 0, sizeof(char*));
memset(&sline_169, 0, sizeof(int));
right_value218 = (void*)0;
memset(&word_170, 0, sizeof(char*));
memset(&between_brace_171, 0, sizeof(_Bool));
memset(&p_172, 0, sizeof(char*));
memset(&sline_173, 0, sizeof(int));
right_value219 = (void*)0;
memset(&word_174, 0, sizeof(char*));
memset(&p_175, 0, sizeof(char*));
memset(&sline_176, 0, sizeof(int));
right_value220 = (void*)0;
memset(&word_177, 0, sizeof(char*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&no_comma_179, 0, sizeof(_Bool));
right_value223 = (void*)0;
memset(&node_180, 0, sizeof(struct sNode*));
memset(&p_181, 0, sizeof(char*));
memset(&sline_182, 0, sizeof(int));
right_value224 = (void*)0;
memset(&word_183, 0, sizeof(char*));
right_value225 = (void*)0;
memset(&node_184, 0, sizeof(struct sNode*));
right_value229 = (void*)0;
right_value230 = (void*)0;
    # 853 "05type.c"
    result_type_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(base_type_name))));
    come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 857 "05type.c"
    # 854 "05type.c"
    if(_if_conditional294=!first,    _if_conditional294) {
        # 855 "05type.c"
        result_type_166->mPointerNum=0;
    }
    # 857 "05type.c"
    var_name_167=((void*)0);
    # 879 "05type.c"
    {
        # 860 "05type.c"
        p_168=info->p;
        # 861 "05type.c"
        sline_169=info->sline;
        # 877 "05type.c"
        # 863 "05type.c"
        if(_if_conditional295=xisalpha(*info->p)||*info->p==95,        _if_conditional295) {
            # 864 "05type.c"
            word_170=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 864, 9),__exception_result_var_b4=((char*)(right_value218=parse_word(info))), come_pop_stackframe(), __exception_result_var_b4));
            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 872 "05type.c"
            # 866 "05type.c"
            if(_if_conditional296=string_operator_equals(word_170,"const")||string_operator_equals(word_170,"__restrict")||string_operator_equals(word_170,"restrict")||string_operator_equals(word_170,"__user")||string_operator_equals(word_170,"volatile")||string_operator_equals(word_170,"_Nonnull")||string_operator_equals(word_170,"_Nullable")||string_operator_equals(word_170,"_Null_unspecified")||string_operator_equals(word_170,"__user")||string_operator_equals(word_170,"_Addr"),            _if_conditional296) {
            }
            else {
                # 869 "05type.c"
                info->p=p_168;
                # 870 "05type.c"
                info->sline=sline_169;
            }
            word_170 = come_decrement_ref_count2(word_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 874 "05type.c"
            info->p=p_168;
            # 875 "05type.c"
            info->sline=sline_169;
        }
    }
    # 879 "05type.c"
    between_brace_171=(_Bool)0;
    # 908 "05type.c"
    {
        # 881 "05type.c"
        p_172=info->p;
        # 882 "05type.c"
        sline_173=info->sline;
        # 904 "05type.c"
        # 884 "05type.c"
        if(_if_conditional297=*info->p==40,        _if_conditional297) {
            # 885 "05type.c"
            info->p++;
            # 886 "05type.c"
            skip_spaces_and_lf(info);
            # 902 "05type.c"
            # 888 "05type.c"
            if(_if_conditional298=xisalpha(*info->p)||*info->p==95,            _if_conditional298) {
                # 889 "05type.c"
                word_174=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 889, 10),__exception_result_var_b5=((char*)(right_value219=parse_word(info))), come_pop_stackframe(), __exception_result_var_b5));
                right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 901 "05type.c"
                # 891 "05type.c"
                if(_if_conditional299=is_type_name(word_174,info),                _if_conditional299) {
                }
                else {
                    # 901 "05type.c"
                    # 893 "05type.c"
                    if(_if_conditional300=*info->p==41,                    _if_conditional300) {
                        # 894 "05type.c"
                        info->p++;
                        # 895 "05type.c"
                        skip_spaces_and_lf(info);
                        # 900 "05type.c"
                        # 897 "05type.c"
                        if(_if_conditional301=*info->p!=40,                        _if_conditional301) {
                            # 898 "05type.c"
                            between_brace_171=(_Bool)1;
                        }
                    }
                }
                word_174 = come_decrement_ref_count2(word_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 904 "05type.c"
        info->p=p_172;
        # 905 "05type.c"
        info->sline=sline_173;
    }
    # 908 "05type.c"
    parse_sharp_v5(info);
    # 935 "05type.c"
    while(_while_condtional37=*info->p==42,    _while_condtional37) {
        # 910 "05type.c"
        info->p++;
        # 911 "05type.c"
        skip_spaces_and_lf(info);
        # 933 "05type.c"
        {
            # 914 "05type.c"
            p_175=info->p;
            # 915 "05type.c"
            sline_176=info->sline;
            # 931 "05type.c"
            # 917 "05type.c"
            if(_if_conditional302=xisalpha(*info->p)||*info->p==95,            _if_conditional302) {
                # 918 "05type.c"
                word_177=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 918, 11),__exception_result_var_b6=((char*)(right_value220=parse_word(info))), come_pop_stackframe(), __exception_result_var_b6));
                right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 926 "05type.c"
                # 920 "05type.c"
                if(_if_conditional303=string_operator_equals(word_177,"const")||string_operator_equals(word_177,"__restrict")||string_operator_equals(word_177,"restrict")||string_operator_equals(word_177,"__user")||string_operator_equals(word_177,"volatile")||string_operator_equals(word_177,"_Nonnull")||string_operator_equals(word_177,"_Nullable")||string_operator_equals(word_177,"_Null_unspecified")||string_operator_equals(word_177,"__user")||string_operator_equals(word_177,"_Addr"),                _if_conditional303) {
                }
                else {
                    # 923 "05type.c"
                    info->p=p_175;
                    # 924 "05type.c"
                    info->sline=sline_176;
                }
                word_177 = come_decrement_ref_count2(word_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 928 "05type.c"
                info->p=p_175;
                # 929 "05type.c"
                info->sline=sline_176;
            }
        }
        # 933 "05type.c"
        result_type_166->mPointerNum++;
    }
    # 935 "05type.c"
    parse_sharp_v5(info);
    # 942 "05type.c"
    # 937 "05type.c"
    if(_if_conditional304=between_brace_171&&*info->p==40,    _if_conditional304) {
        # 938 "05type.c"
        info->p++;
        # 939 "05type.c"
        skip_spaces_and_lf(info);
    }
    # 951 "05type.c"
    # 942 "05type.c"
    if(_if_conditional305=xisalnum(*info->p)||*info->p==95,    _if_conditional305) {
        # 943 "05type.c"
        __dec_obj74=var_name_167;
        var_name_167=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 943, 12),__exception_result_var_b7=((char*)(right_value221=parse_word(info))), come_pop_stackframe(), __exception_result_var_b7));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 946 "05type.c"
        # 947 "05type.c"
        num_anonymous_var_name_178++;
        # 948 "05type.c"
        __dec_obj75=var_name_167;
        var_name_167=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_178))));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 956 "05type.c"
    # 951 "05type.c"
    if(_if_conditional306=between_brace_171&&*info->p==41,    _if_conditional306) {
        # 952 "05type.c"
        info->p++;
        # 953 "05type.c"
        skip_spaces_and_lf(info);
    }
    # 968 "05type.c"
    # 956 "05type.c"
    if(_if_conditional307=*info->p==58,    _if_conditional307) {
        # 957 "05type.c"
        info->p++;
        # 958 "05type.c"
        skip_spaces_and_lf(info);
        # 960 "05type.c"
        no_comma_179=info->no_comma;
        # 961 "05type.c"
        info->no_comma=(_Bool)1;
        # 962 "05type.c"
        node_180=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=expression_v13(info))));
        if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 963 "05type.c"
        info->no_comma=no_comma_179;
        # 965 "05type.c"
        __dec_obj76=result_type_166->mSizeNum;
        result_type_166->mSizeNum=(struct sNode*)come_increment_ref_count(node_180);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_180) { node_180 = come_decrement_ref_count2(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 1009 "05type.c"
    while(_while_condtional38=*info->p==91,    _while_condtional38) {
        # 969 "05type.c"
        info->p++;
        # 970 "05type.c"
        skip_spaces_and_lf(info);
        # 971 "05type.c"
        parse_sharp_v5(info);
        # 993 "05type.c"
        {
            # 974 "05type.c"
            p_181=info->p;
            # 975 "05type.c"
            sline_182=info->sline;
            # 991 "05type.c"
            # 977 "05type.c"
            if(_if_conditional308=xisalpha(*info->p)||*info->p==95,            _if_conditional308) {
                # 978 "05type.c"
                word_183=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 978, 13),__exception_result_var_b8=((char*)(right_value224=parse_word(info))), come_pop_stackframe(), __exception_result_var_b8));
                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 986 "05type.c"
                # 980 "05type.c"
                if(_if_conditional309=string_operator_equals(word_183,"const")||string_operator_equals(word_183,"__restrict")||string_operator_equals(word_183,"restrict")||string_operator_equals(word_183,"__user")||string_operator_equals(word_183,"volatile")||string_operator_equals(word_183,"_Nonnull")||string_operator_equals(word_183,"_Nullable")||string_operator_equals(word_183,"_Null_unspecified")||string_operator_equals(word_183,"__user")||string_operator_equals(word_183,"_Addr"),                _if_conditional309) {
                }
                else {
                    # 983 "05type.c"
                    info->p=p_181;
                    # 984 "05type.c"
                    info->sline=sline_182;
                }
                word_183 = come_decrement_ref_count2(word_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 988 "05type.c"
                info->p=p_181;
                # 989 "05type.c"
                info->sline=sline_182;
            }
        }
        # 1000 "05type.c"
        # 993 "05type.c"
        if(_if_conditional310=*info->p==93,        _if_conditional310) {
            # 994 "05type.c"
            info->p++;
            # 995 "05type.c"
            skip_spaces_and_lf(info);
            # 997 "05type.c"
            result_type_166->mPointerNum++;
            # 998 "05type.c"
            break;
        }
        # 1000 "05type.c"
        parse_sharp_v5(info);
        # 1002 "05type.c"
        node_184=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=expression_v13(info))));
        if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1003 "05type.c"
        list$1sNodeph_push_back(result_type_166->mArrayNum,(struct sNode*)come_increment_ref_count(node_184));
        # 1004 "05type.c"
        parse_sharp_v5(info);
        # 1006 "05type.c"
        (come_push_stackframe("05type.c", 1006, 14),__exception_result_var_b9=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b9);
        if(node_184) { node_184 = come_decrement_ref_count2(node_184, ((struct sNode*)node_184)->finalize, ((struct sNode*)node_184)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 1009 "05type.c"
    __result133__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value230=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value229=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1009, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_166),(char*)come_increment_ref_count(var_name_167))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_167 = come_decrement_ref_count2(var_name_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value230,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result133__;
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_167 = come_decrement_ref_count2(var_name_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional311;
void* right_value226;
struct list_item$1sNodeph* litem_185;
struct sNode* __dec_obj77;
_Bool _if_conditional312;
void* right_value227;
struct list_item$1sNodeph* litem_186;
struct sNode* __dec_obj78;
void* right_value228;
struct list_item$1sNodeph* litem_187;
struct sNode* __dec_obj79;
struct list$1sNodeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
memset(&litem_185, 0, sizeof(struct list_item$1sNodeph*));
right_value227 = (void*)0;
memset(&litem_186, 0, sizeof(struct list_item$1sNodeph*));
right_value228 = (void*)0;
memset(&litem_187, 0, sizeof(struct list_item$1sNodeph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional311=self->len==0,            _if_conditional311) {
                # 217 "./neo-c.h"
                litem_185=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value226=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 217, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value226,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_185->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_185->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj77=litem_185->item;
                litem_185->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
                # 223 "./neo-c.h"
                self->tail=litem_185;
                # 224 "./neo-c.h"
                self->head=litem_185;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional312=self->len==1,                _if_conditional312) {
                    # 227 "./neo-c.h"
                    litem_186=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value227=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value227,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_186->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_186->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj78=litem_186->item;
                    litem_186->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
                    # 233 "./neo-c.h"
                    self->tail=litem_186;
                    # 234 "./neo-c.h"
                    self->head->next=litem_186;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_187=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value228=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value228,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_187->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_187->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj79=litem_187->item;
                    litem_187->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
                    # 243 "./neo-c.h"
                    self->tail->next=litem_187;
                    # 244 "./neo-c.h"
                    self->tail=litem_187;
                }
            }
            # 247 "./neo-c.h"
            self->len++;
            # 249 "./neo-c.h"
            __result131__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result131__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj80;
char* __dec_obj81;
struct tuple2$2sTypephcharph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1738 "./neo-c.h"
        __dec_obj80=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1739 "./neo-c.h"
        __dec_obj81=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1741 "./neo-c.h"
        __result132__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result132__;
        come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional313;
_Bool _if_conditional314;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "tuple2$2sTypephcharphp_finalize"
            # 0 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional313=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional313) {
                # 0 "tuple2$2sTypephcharphp_finalize"
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "tuple2$2sTypephcharphp_finalize"
            # 1 "tuple2$2sTypephcharphp_finalize"
            if(_if_conditional314=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional314) {
                # 1 "tuple2$2sTypephcharphp_finalize"
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_188;
int sline_189;
_Bool _if_conditional315;
void* right_value231;
char* __exception_result_var_b10;
char* word_190;
_Bool _if_conditional316;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_188, 0, sizeof(char*));
memset(&sline_189, 0, sizeof(int));
right_value231 = (void*)0;
memset(&word_190, 0, sizeof(char*));
    # 1014 "05type.c"
    p_188=info->p;
    # 1015 "05type.c"
    sline_189=info->sline;
    # 1031 "05type.c"
    # 1017 "05type.c"
    if(_if_conditional315=xisalpha(*info->p)||*info->p==95,    _if_conditional315) {
        # 1018 "05type.c"
        word_190=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1018, 15),__exception_result_var_b10=((char*)(right_value231=parse_word(info))), come_pop_stackframe(), __exception_result_var_b10));
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1026 "05type.c"
        # 1020 "05type.c"
        if(_if_conditional316=string_operator_equals(word_190,"const")||string_operator_equals(word_190,"__restrict")||string_operator_equals(word_190,"restrict")||string_operator_equals(word_190,"__user")||string_operator_equals(word_190,"volatile")||string_operator_equals(word_190,"_Nonnull")||string_operator_equals(word_190,"_Nullable")||string_operator_equals(word_190,"_Null_unspecified")||string_operator_equals(word_190,"__user")||string_operator_equals(word_190,"_Addr"),        _if_conditional316) {
        }
        else {
            # 1023 "05type.c"
            info->p=p_188;
            # 1024 "05type.c"
            info->sline=sline_189;
        }
        word_190 = come_decrement_ref_count2(word_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 1028 "05type.c"
        info->p=p_188;
        # 1029 "05type.c"
        info->sline=sline_189;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__;
_Bool no_output_err_191;
void* right_value232;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_192;
char* name_193;
_Bool err_194;
void* right_value233;
void* right_value234;
struct tuple3$3sTypephcharphbool* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&no_output_err_191, 0, sizeof(_Bool));
right_value232 = (void*)0;
memset(&type_192, 0, sizeof(struct sType*));
memset(&name_193, 0, sizeof(char*));
memset(&err_194, 0, sizeof(_Bool));
memset(&type_192, 0, sizeof(struct sType*));
memset(&name_193, 0, sizeof(char*));
memset(&err_194, 0, sizeof(_Bool));
right_value233 = (void*)0;
right_value234 = (void*)0;
    # 1035 "05type.c"
    no_output_err_191=info->no_output_err;
    # 1036 "05type.c"
    info->no_output_err=(_Bool)1;
    # 1037 "05type.c"
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value232=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_192=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_193=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_194=multiple_assign_var2->v3;
    come_call_finalizer3(right_value232,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1038 "05type.c"
    info->no_output_err=(_Bool)0;
    # 1039 "05type.c"
    info->no_output_err=no_output_err_191;
    # 1041 "05type.c"
    __result135__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value234=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value233=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1041, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_192),(char*)come_increment_ref_count(name_193),err_194)));
    come_call_finalizer3(type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_193 = come_decrement_ref_count2(name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value234,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result135__;
    come_call_finalizer3(type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_193 = come_decrement_ref_count2(name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj82;
char* __dec_obj83;
struct tuple3$3sTypephcharphbool* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1771 "./neo-c.h"
        __dec_obj82=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 1772 "./neo-c.h"
        __dec_obj83=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1773 "./neo-c.h"
        self->v3=v3;
        # 1775 "./neo-c.h"
        __result134__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        return __result134__;
        come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
        come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
        v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__;
char* head_195;
int head_sline_196;
void* right_value235;
char* __exception_result_var_b11;
char* type_name_197;
_Bool _while_condtional39;
void* right_value236;
char* __exception_result_var_b12;
char* __dec_obj84;
_Bool record__198;
_Bool constant_199;
_Bool static__200;
_Bool volatile__201;
_Bool register__202;
_Bool unsigned__203;
_Bool long__204;
_Bool long_long_205;
_Bool short__206;
_Bool restrict__207;
_Bool struct__208;
_Bool union__209;
_Bool enum__210;
_Bool no_heap_211;
_Bool extern__212;
_Bool inline__213;
_Bool come_mem_core__214;
struct sNode* alignas__215;
_Bool anonymous_type_216;
_Bool anonymous_name_217;
_Bool _while_condtional40;
_Bool _if_conditional317;
_Bool _if_conditional318;
char* p_218;
int sline_219;
void* right_value237;
_Bool _if_conditional319;
void* right_value238;
char* __dec_obj85;
void* right_value239;
char* __dec_obj86;
_Bool _if_conditional320;
void* right_value240;
char* __exception_result_var_b13;
char* __dec_obj87;
_Bool _if_conditional321;
char* p_220;
int sline_221;
_Bool _while_condtional41;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value241;
void* right_value242;
struct tuple3$3sTypephcharphbool* __result136__;
_Bool _if_conditional325;
char* p_222;
int sline_223;
void* right_value243;
_Bool _if_conditional326;
void* right_value244;
void* right_value245;
struct tuple3$3sTypephcharphbool* __result137__;
_Bool _if_conditional327;
_Bool _if_conditional328;
char* p_224;
int sline_225;
void* right_value246;
_Bool _if_conditional329;
void* right_value247;
char* __dec_obj88;
void* right_value248;
char* __dec_obj89;
void* right_value249;
char* __exception_result_var_b14;
char* __dec_obj90;
_Bool _if_conditional330;
char* p_226;
int sline_227;
void* right_value250;
_Bool _if_conditional331;
void* right_value251;
void* right_value252;
struct tuple3$3sTypephcharphbool* __result138__;
_Bool _if_conditional332;
_Bool _if_conditional333;
char* p_228;
int sline_229;
void* right_value253;
_Bool _if_conditional334;
void* right_value254;
void* right_value255;
struct tuple3$3sTypephcharphbool* __result139__;
void* right_value256;
char* __dec_obj91;
void* right_value257;
char* __exception_result_var_b15;
char* __dec_obj92;
_Bool _if_conditional335;
char* p_230;
int sline_231;
void* right_value258;
_Bool _if_conditional336;
void* right_value259;
void* right_value260;
struct tuple3$3sTypephcharphbool* __result140__;
_Bool _if_conditional337;
int __exception_result_var_b16;
void* right_value261;
struct sNode* exp_232;
struct sNode* __dec_obj93;
int __exception_result_var_b17;
void* right_value262;
char* __exception_result_var_b18;
char* __dec_obj94;
_Bool _if_conditional338;
void* right_value263;
char* __exception_result_var_b19;
char* __dec_obj95;
_Bool _if_conditional339;
void* right_value264;
char* __exception_result_var_b20;
char* __dec_obj96;
_Bool _if_conditional340;
void* right_value265;
char* __exception_result_var_b21;
char* __dec_obj97;
_Bool _if_conditional341;
void* right_value266;
char* __exception_result_var_b22;
char* __dec_obj98;
_Bool _if_conditional342;
void* right_value267;
char* __exception_result_var_b23;
char* __dec_obj99;
_Bool _if_conditional343;
void* right_value268;
char* __exception_result_var_b24;
char* __dec_obj100;
_Bool _if_conditional344;
void* right_value269;
char* __exception_result_var_b25;
char* __dec_obj101;
_Bool _if_conditional345;
void* right_value270;
char* __exception_result_var_b26;
char* __dec_obj102;
_Bool _if_conditional346;
char* p_233;
int sline_234;
_Bool _if_conditional347;
void* right_value271;
char* __dec_obj103;
void* right_value272;
char* __exception_result_var_b27;
char* __dec_obj104;
_Bool _if_conditional348;
void* right_value273;
char* __exception_result_var_b28;
char* __dec_obj105;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value274;
char* __exception_result_var_b29;
char* __dec_obj106;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value275;
char* __dec_obj107;
_Bool _if_conditional354;
_Bool _if_conditional355;
void* right_value276;
char* __dec_obj108;
_Bool _if_conditional356;
_Bool _if_conditional357;
char* p_235;
int sline_236;
void* right_value277;
char* __exception_result_var_b30;
char* __dec_obj109;
_Bool _if_conditional358;
_Bool _if_conditional359;
char* p_237;
int sline_238;
void* right_value278;
char* __exception_result_var_b31;
char* __dec_obj110;
_Bool _if_conditional360;
void* right_value279;
char* __dec_obj111;
void* right_value280;
char* __dec_obj112;
_Bool _if_conditional361;
_Bool _if_conditional362;
char* p_239;
int sline_240;
void* right_value281;
char* __exception_result_var_b32;
char* __dec_obj113;
_Bool _if_conditional363;
void* right_value282;
char* __dec_obj114;
void* right_value283;
char* __dec_obj115;
_Bool _if_conditional364;
void* right_value284;
char* __dec_obj116;
void* right_value285;
char* __dec_obj117;
_Bool _if_conditional365;
void* right_value286;
char* __exception_result_var_b33;
char* __dec_obj118;
_Bool _if_conditional366;
void* right_value287;
char* __exception_result_var_b34;
char* __dec_obj119;
_Bool _if_conditional367;
void* right_value288;
char* __exception_result_var_b35;
char* __dec_obj120;
_Bool _if_conditional368;
void* right_value289;
char* __exception_result_var_b36;
char* __dec_obj121;
_Bool _if_conditional369;
void* right_value290;
char* __exception_result_var_b37;
char* __dec_obj122;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
char* p_241;
int sline_242;
void* right_value291;
char* __exception_result_var_b38;
char* __dec_obj123;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
void* right_value292;
char* __dec_obj124;
int pointer_num_243;
_Bool _while_condtional42;
_Bool heap_244;
_Bool _if_conditional376;
_Bool lambda_flag_245;
char* pX_246;
int slineX_247;
_Bool _if_conditional377;
void* right_value293;
char* __exception_result_var_b39;
_Bool _if_conditional378;
struct sType* type_248;
char* var_name_249;
_Bool function_pointer_flag_250;
char* p_251;
int sline_252;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
void* right_value294;
char* __exception_result_var_b40;
char* word_253;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool var_name_between_brace_254;
char* p_255;
int sline_256;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value295;
char* __exception_result_var_b41;
char* word_257;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
static int anonymous_num_258=0;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value296;
char* __dec_obj125;
void* right_value297;
struct sNode* node_259;
_Bool _if_conditional392;
void* right_value298;
void* right_value299;
struct tuple3$3sTypephcharphbool* __result141__;
int pointer_num_260;
_Bool _while_condtional43;
void* right_value300;
void* right_value301;
struct sType* __dec_obj126;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value302;
char* __dec_obj127;
void* right_value303;
struct sNode* node_261;
_Bool _if_conditional395;
_Bool _if_conditional396;
void* right_value304;
void* right_value305;
struct tuple3$3sTypephcharphbool* __result142__;
void* right_value306;
void* right_value307;
struct sType* __dec_obj128;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value308;
char* __dec_obj129;
void* right_value309;
struct sNode* node_262;
_Bool _if_conditional399;
void* right_value310;
void* right_value311;
struct tuple3$3sTypephcharphbool* __result143__;
int pointer_num_263;
_Bool _while_condtional44;
void* right_value312;
void* right_value313;
struct sType* __dec_obj130;
void* right_value314;
void* right_value315;
struct tuple3$3sTypephcharphbool* __result144__;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value316;
char* __dec_obj131;
_Bool _if_conditional403;
static int num_anonymous_var_name_264=0;
void* right_value317;
char* __dec_obj132;
_Bool _if_conditional404;
void* right_value318;
char* __exception_result_var_b42;
char* __dec_obj133;
static int num_anonymous_var_name_265=0;
void* right_value319;
char* __dec_obj134;
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool no_comma_266;
void* right_value320;
struct sNode* node_267;
struct sNode* __dec_obj135;
_Bool _if_conditional407;
struct sType* result_type_268;
_Bool _if_conditional412;
void* right_value321;
struct sType* __dec_obj136;
_Bool _if_conditional418;
int i_277;
_Bool _if_conditional422;
void* right_value322;
void* right_value323;
void* right_value324;
struct sType* __dec_obj137;
_Bool _if_conditional423;
int i_281;
_Bool _if_conditional424;
void* right_value325;
void* right_value326;
void* right_value327;
struct sType* __dec_obj138;
void* right_value328;
void* right_value329;
struct sType* __dec_obj139;
struct sNode* __dec_obj140;
void* right_value330;
char* __exception_result_var_b43;
char* __dec_obj141;
void* right_value331;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_282;
struct list$1charph* param_names_283;
struct list$1charph* param_default_parametors_284;
_Bool var_args_285;
void* right_value332;
void* right_value333;
struct sType* __dec_obj142;
void* right_value334;
void* right_value335;
struct tuple1$1sTypeph* __dec_obj144;
struct list$1sTypeph* __dec_obj145;
struct list$1charph* __dec_obj146;
_Bool _if_conditional425;
_Bool _if_conditional426;
struct sType* result_type_286;
_Bool _if_conditional427;
void* right_value336;
struct sType* __dec_obj147;
_Bool _if_conditional428;
int i_287;
_Bool _if_conditional429;
void* right_value337;
void* right_value338;
void* right_value339;
struct sType* __dec_obj148;
_Bool _if_conditional430;
int i_288;
_Bool _if_conditional431;
void* right_value340;
void* right_value341;
void* right_value342;
struct sType* __dec_obj149;
void* right_value343;
void* right_value344;
struct sType* __dec_obj150;
struct sNode* __dec_obj151;
_Bool _if_conditional432;
void* right_value345;
char* __exception_result_var_b44;
char* __dec_obj152;
_Bool _if_conditional433;
void* right_value346;
void* right_value347;
struct tuple3$3sTypephcharphbool* __result163__;
static int num_anonymous_var_name_289=0;
void* right_value348;
char* __dec_obj153;
int __exception_result_var_b45;
void* right_value349;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var4;
struct list$1sTypeph* param_types_290;
struct list$1charph* param_names_291;
struct list$1charph* param_default_parametors_292;
_Bool var_args_293;
void* right_value350;
void* right_value351;
struct sType* __dec_obj154;
void* right_value352;
void* right_value353;
struct tuple1$1sTypeph* __dec_obj155;
struct list$1sTypeph* __dec_obj156;
struct list$1charph* __dec_obj157;
_Bool _if_conditional434;
void* right_value354;
struct sNode* exp_294;
int __exception_result_var_b46;
_Bool _if_conditional435;
void* right_value355;
void* right_value356;
struct tuple3$3sTypephcharphbool* __result165__;
void* right_value357;
struct CVALUE* come_value_295;
void* right_value358;
struct sType* __dec_obj159;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value359;
char* __dec_obj160;
_Bool _if_conditional442;
static int num_anonymous_var_name_296=0;
void* right_value360;
char* __dec_obj161;
_Bool _if_conditional443;
void* right_value361;
char* __exception_result_var_b47;
char* __dec_obj162;
static int num_anonymous_var_name_297=0;
void* right_value362;
char* __dec_obj163;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool no_comma_298;
void* right_value363;
struct sNode* node_299;
struct sNode* __dec_obj164;
_Bool _if_conditional446;
void* right_value364;
struct sType* __dec_obj165;
void* right_value365;
char* __dec_obj166;
struct sNode* __dec_obj167;
_Bool _if_conditional447;
int i_300;
_Bool _if_conditional448;
void* right_value366;
void* right_value367;
void* right_value368;
struct sType* __dec_obj168;
struct sNode* __dec_obj169;
_Bool _if_conditional449;
int i_301;
_Bool _if_conditional450;
void* right_value369;
void* right_value370;
void* right_value371;
struct sType* __dec_obj170;
struct sNode* __dec_obj171;
_Bool _if_conditional451;
_Bool _if_conditional452;
void* right_value372;
void* right_value373;
struct tuple3$3sTypephcharphbool* __result166__;
void* right_value374;
void* right_value375;
struct sType* __dec_obj172;
_Bool _while_condtional47;
void* right_value376;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* generics_type_302;
char* var_name_303;
_Bool err_304;
_Bool _if_conditional453;
void* right_value377;
void* right_value378;
struct tuple3$3sTypephcharphbool* __result167__;
_Bool _if_conditional454;
_Bool _if_conditional455;
void* right_value379;
void* right_value380;
struct tuple3$3sTypephcharphbool* __result168__;
_Bool _if_conditional456;
void* right_value381;
struct sType* __dec_obj173;
_Bool _if_conditional457;
void* right_value382;
char* new_name_305;
struct sNode* __dec_obj174;
_Bool _if_conditional458;
struct sClass* klass_306;
_Bool _if_conditional459;
void* right_value389;
void* right_value390;
void* right_value391;
void* right_value392;
struct sType* __dec_obj175;
struct sNode* __dec_obj176;
_Bool _while_condtional56;
_Bool _if_conditional507;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
_Bool _if_conditional512;
_Bool _if_conditional513;
_Bool _if_conditional514;
_Bool _while_condtional57;
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
_Bool _if_conditional518;
void* right_value393;
void* right_value394;
struct list$1sTypeph* types_351;
void* right_value395;
_Bool _while_condtional58;
void* right_value396;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type2_352;
char* name_353;
_Bool err_354;
_Bool _if_conditional519;
void* right_value397;
void* right_value398;
struct tuple3$3sTypephcharphbool* __result193__;
void* right_value399;
int num_tuples_355;
void* right_value400;
void* right_value401;
void* right_value402;
struct sType* __dec_obj177;
struct list$1sTypeph* o2_saved_356;
struct sType* it_357;
void* right_value403;
_Bool _if_conditional520;
void* right_value404;
struct sType* __dec_obj178;
_Bool _if_conditional521;
void* right_value405;
char* new_name_358;
_Bool _if_conditional522;
_Bool _if_conditional523;
_Bool _if_conditional524;
void* right_value406;
char* __dec_obj179;
_Bool _if_conditional525;
static int num_anonymous_var_name_359=0;
void* right_value407;
char* __dec_obj180;
_Bool _if_conditional526;
void* right_value408;
char* __exception_result_var_b48;
char* __dec_obj181;
static int num_anonymous_var_name_360=0;
void* right_value409;
char* __dec_obj182;
_Bool _if_conditional527;
_Bool _if_conditional528;
_Bool no_comma_361;
void* right_value410;
struct sNode* node_362;
struct sNode* __dec_obj183;
_Bool _while_condtional59;
_Bool _if_conditional529;
void* right_value411;
struct sNode* node_363;
int __exception_result_var_b49;
void* right_value412;
char* asm_name_364;
char* __dec_obj184;
void* right_value413;
void* right_value414;
struct tuple3$3sTypephcharphbool* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_195, 0, sizeof(char*));
memset(&head_sline_196, 0, sizeof(int));
right_value235 = (void*)0;
memset(&type_name_197, 0, sizeof(char*));
right_value236 = (void*)0;
memset(&record__198, 0, sizeof(_Bool));
memset(&constant_199, 0, sizeof(_Bool));
memset(&static__200, 0, sizeof(_Bool));
memset(&volatile__201, 0, sizeof(_Bool));
memset(&register__202, 0, sizeof(_Bool));
memset(&unsigned__203, 0, sizeof(_Bool));
memset(&long__204, 0, sizeof(_Bool));
memset(&long_long_205, 0, sizeof(_Bool));
memset(&short__206, 0, sizeof(_Bool));
memset(&restrict__207, 0, sizeof(_Bool));
memset(&struct__208, 0, sizeof(_Bool));
memset(&union__209, 0, sizeof(_Bool));
memset(&enum__210, 0, sizeof(_Bool));
memset(&no_heap_211, 0, sizeof(_Bool));
memset(&extern__212, 0, sizeof(_Bool));
memset(&inline__213, 0, sizeof(_Bool));
memset(&come_mem_core__214, 0, sizeof(_Bool));
memset(&alignas__215, 0, sizeof(struct sNode*));
memset(&anonymous_type_216, 0, sizeof(_Bool));
memset(&anonymous_name_217, 0, sizeof(_Bool));
memset(&p_218, 0, sizeof(char*));
memset(&sline_219, 0, sizeof(int));
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&p_220, 0, sizeof(char*));
memset(&sline_221, 0, sizeof(int));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&p_222, 0, sizeof(char*));
memset(&sline_223, 0, sizeof(int));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&p_224, 0, sizeof(char*));
memset(&sline_225, 0, sizeof(int));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&p_226, 0, sizeof(char*));
memset(&sline_227, 0, sizeof(int));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&p_228, 0, sizeof(char*));
memset(&sline_229, 0, sizeof(int));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&p_230, 0, sizeof(char*));
memset(&sline_231, 0, sizeof(int));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&exp_232, 0, sizeof(struct sNode*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&p_233, 0, sizeof(char*));
memset(&sline_234, 0, sizeof(int));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&p_235, 0, sizeof(char*));
memset(&sline_236, 0, sizeof(int));
right_value277 = (void*)0;
memset(&p_237, 0, sizeof(char*));
memset(&sline_238, 0, sizeof(int));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&p_239, 0, sizeof(char*));
memset(&sline_240, 0, sizeof(int));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&p_241, 0, sizeof(char*));
memset(&sline_242, 0, sizeof(int));
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&pointer_num_243, 0, sizeof(int));
memset(&heap_244, 0, sizeof(_Bool));
memset(&lambda_flag_245, 0, sizeof(_Bool));
memset(&pX_246, 0, sizeof(char*));
memset(&slineX_247, 0, sizeof(int));
right_value293 = (void*)0;
memset(&type_248, 0, sizeof(struct sType*));
memset(&var_name_249, 0, sizeof(char*));
memset(&function_pointer_flag_250, 0, sizeof(_Bool));
memset(&p_251, 0, sizeof(char*));
memset(&sline_252, 0, sizeof(int));
right_value294 = (void*)0;
memset(&word_253, 0, sizeof(char*));
memset(&var_name_between_brace_254, 0, sizeof(_Bool));
memset(&p_255, 0, sizeof(char*));
memset(&sline_256, 0, sizeof(int));
right_value295 = (void*)0;
memset(&word_257, 0, sizeof(char*));
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&node_259, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&pointer_num_260, 0, sizeof(int));
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
memset(&node_261, 0, sizeof(struct sNode*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&node_262, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&pointer_num_263, 0, sizeof(int));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&no_comma_266, 0, sizeof(_Bool));
right_value320 = (void*)0;
memset(&node_267, 0, sizeof(struct sNode*));
memset(&result_type_268, 0, sizeof(struct sType*));
right_value321 = (void*)0;
memset(&i_277, 0, sizeof(int));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&i_281, 0, sizeof(int));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&param_types_282, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_283, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_284, 0, sizeof(struct list$1charph*));
memset(&var_args_285, 0, sizeof(_Bool));
memset(&param_types_282, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_283, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_284, 0, sizeof(struct list$1charph*));
memset(&var_args_285, 0, sizeof(_Bool));
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&result_type_286, 0, sizeof(struct sType*));
right_value336 = (void*)0;
memset(&i_287, 0, sizeof(int));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&i_288, 0, sizeof(int));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&param_types_290, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_291, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_292, 0, sizeof(struct list$1charph*));
memset(&var_args_293, 0, sizeof(_Bool));
memset(&param_types_290, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_291, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_292, 0, sizeof(struct list$1charph*));
memset(&var_args_293, 0, sizeof(_Bool));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&exp_294, 0, sizeof(struct sNode*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&come_value_295, 0, sizeof(struct CVALUE*));
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&no_comma_298, 0, sizeof(_Bool));
right_value363 = (void*)0;
memset(&node_299, 0, sizeof(struct sNode*));
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&i_300, 0, sizeof(int));
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&i_301, 0, sizeof(int));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&generics_type_302, 0, sizeof(struct sType*));
memset(&var_name_303, 0, sizeof(char*));
memset(&err_304, 0, sizeof(_Bool));
memset(&generics_type_302, 0, sizeof(struct sType*));
memset(&var_name_303, 0, sizeof(char*));
memset(&err_304, 0, sizeof(_Bool));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
memset(&new_name_305, 0, sizeof(char*));
memset(&klass_306, 0, sizeof(struct sClass*));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&types_351, 0, sizeof(struct list$1sTypeph*));
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&type2_352, 0, sizeof(struct sType*));
memset(&name_353, 0, sizeof(char*));
memset(&err_354, 0, sizeof(_Bool));
memset(&type2_352, 0, sizeof(struct sType*));
memset(&name_353, 0, sizeof(char*));
memset(&err_354, 0, sizeof(_Bool));
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&num_tuples_355, 0, sizeof(int));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&o2_saved_356, 0, sizeof(struct list$1sTypeph*));
memset(&it_357, 0, sizeof(struct sType*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&new_name_358, 0, sizeof(char*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&no_comma_361, 0, sizeof(_Bool));
right_value410 = (void*)0;
memset(&node_362, 0, sizeof(struct sNode*));
right_value411 = (void*)0;
memset(&node_363, 0, sizeof(struct sNode*));
right_value412 = (void*)0;
memset(&asm_name_364, 0, sizeof(char*));
right_value413 = (void*)0;
right_value414 = (void*)0;
    # 1046 "05type.c"
    head_195=info->p;
    # 1047 "05type.c"
    head_sline_196=info->sline;
    # 1048 "05type.c"
    info->define_struct=(_Bool)0;
    # 1050 "05type.c"
    type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1050, 16),__exception_result_var_b11=((char*)(right_value235=parse_word(info))), come_pop_stackframe(), __exception_result_var_b11));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1055 "05type.c"
    while(_while_condtional39=string_operator_equals(type_name_197,"__extension__"),    _while_condtional39) {
        # 1052 "05type.c"
        __dec_obj84=type_name_197;
        type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1052, 17),__exception_result_var_b12=((char*)(right_value236=parse_word(info))), come_pop_stackframe(), __exception_result_var_b12));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1055 "05type.c"
    record__198=(_Bool)0;
    # 1056 "05type.c"
    constant_199=(_Bool)0;
    # 1057 "05type.c"
    static__200=(_Bool)0;
    # 1058 "05type.c"
    volatile__201=(_Bool)0;
    # 1059 "05type.c"
    register__202=(_Bool)0;
    # 1060 "05type.c"
    unsigned__203=(_Bool)0;
    # 1061 "05type.c"
    long__204=(_Bool)0;
    # 1062 "05type.c"
    long_long_205=(_Bool)0;
    # 1063 "05type.c"
    short__206=(_Bool)0;
    # 1064 "05type.c"
    restrict__207=(_Bool)0;
    # 1065 "05type.c"
    struct__208=(_Bool)0;
    # 1066 "05type.c"
    union__209=(_Bool)0;
    # 1067 "05type.c"
    enum__210=(_Bool)0;
    # 1068 "05type.c"
    no_heap_211=(_Bool)0;
    # 1069 "05type.c"
    extern__212=(_Bool)0;
    # 1070 "05type.c"
    inline__213=(_Bool)0;
    # 1071 "05type.c"
    come_mem_core__214=(_Bool)0;
    # 1073 "05type.c"
    alignas__215=((void*)0);
    # 1075 "05type.c"
    anonymous_type_216=(_Bool)0;
    # 1076 "05type.c"
    anonymous_name_217=(_Bool)0;
    # 1517 "05type.c"
    while(_while_condtional40=(_Bool)1,    _while_condtional40) {
        # 1515 "05type.c"
        # 1079 "05type.c"
        if(_if_conditional317=string_operator_equals(type_name_197,"struct"),        _if_conditional317) {
            # 1080 "05type.c"
            struct__208=(_Bool)1;
            # 1105 "05type.c"
            # 1082 "05type.c"
            if(_if_conditional318=*info->p==123,            _if_conditional318) {
                # 1083 "05type.c"
                p_218=info->p;
                # 1084 "05type.c"
                sline_219=info->sline;
                # 1086 "05type.c"
                ((char*)(right_value237=skip_block(info)));
                right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1103 "05type.c"
                # 1088 "05type.c"
                if(_if_conditional319=*info->p==59,                _if_conditional319) {
                    # 1089 "05type.c"
                    anonymous_name_217=(_Bool)1;
                    # 1090 "05type.c"
                    anonymous_type_216=(_Bool)1;
                    # 1091 "05type.c"
                    __dec_obj85=type_name_197;
                    type_name_197=(char*)come_increment_ref_count(((char*)(right_value238=__builtin_string(""))));
                    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1092 "05type.c"
                    info->p=p_218;
                    # 1093 "05type.c"
                    info->sline=sline_219;
                    # 1094 "05type.c"
                    break;
                }
                else {
                    # 1097 "05type.c"
                    anonymous_type_216=(_Bool)1;
                    # 1098 "05type.c"
                    __dec_obj86=type_name_197;
                    type_name_197=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(""))));
                    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1099 "05type.c"
                    info->p=p_218;
                    # 1100 "05type.c"
                    info->sline=sline_219;
                    # 1101 "05type.c"
                    break;
                }
            }
            # 1105 "05type.c"
            parse_sharp_v5(info);
            # 1162 "05type.c"
            # 1107 "05type.c"
            if(_if_conditional320=*info->p!=62,            _if_conditional320) {
                # 1108 "05type.c"
                __dec_obj87=type_name_197;
                type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1108, 18),__exception_result_var_b13=((char*)(right_value240=parse_word(info))), come_pop_stackframe(), __exception_result_var_b13));
                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1110 "05type.c"
                parse_sharp_v5(info);
                # 1142 "05type.c"
                # 1112 "05type.c"
                if(_if_conditional321=*info->p==60,                _if_conditional321) {
                    # 1113 "05type.c"
                    p_220=info->p;
                    # 1114 "05type.c"
                    sline_221=info->sline;
                    # 1116 "05type.c"
                    info->p++;
                    # 1117 "05type.c"
                    skip_spaces_and_lf(info);
                    # 1140 "05type.c"
                    while(_while_condtional41=(_Bool)1,                    _while_condtional41) {
                        # 1139 "05type.c"
                        # 1120 "05type.c"
                        if(_if_conditional322=*info->p==62,                        _if_conditional322) {
                            # 1121 "05type.c"
                            info->p++;
                            # 1122 "05type.c"
                            skip_spaces_and_lf(info);
                            # 1130 "05type.c"
                            # 1124 "05type.c"
                            if(_if_conditional323=*info->p==123,                            _if_conditional323) {
                            }
                            else {
                                # 1127 "05type.c"
                                info->p=p_220;
                                # 1128 "05type.c"
                                info->sline=sline_221;
                            }
                            # 1130 "05type.c"
                            break;
                        }
                        else {
                            # 1139 "05type.c"
                            # 1132 "05type.c"
                            if(_if_conditional324=*info->p==0,                            _if_conditional324) {
                                # 1133 "05type.c"
                                err_msg(info,"invalid struct definition");
                                # 1134 "05type.c"
                                __result136__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value242=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value241=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1134, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value241,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value242,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                return __result136__;
                            }
                            else {
                                # 1137 "05type.c"
                                info->p++;
                            }
                        }
                    }
                }
                # 1161 "05type.c"
                # 1142 "05type.c"
                if(_if_conditional325=*info->p==123,                _if_conditional325) {
                    # 1143 "05type.c"
                    p_222=info->p;
                    # 1144 "05type.c"
                    sline_223=info->sline;
                    # 1146 "05type.c"
                    ((char*)(right_value243=skip_block(info)));
                    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1160 "05type.c"
                    # 1148 "05type.c"
                    if(_if_conditional326=*info->p==59,                    _if_conditional326) {
                        # 1149 "05type.c"
                        info->p=head_195;
                        # 1150 "05type.c"
                        info->sline=head_sline_196;
                        # 1151 "05type.c"
                        info->define_struct=(_Bool)1;
                        # 1152 "05type.c"
                        __result137__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value245=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value244=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1152, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value244,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value245,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result137__;
                    }
                    else {
                        # 1155 "05type.c"
                        anonymous_type_216=(_Bool)1;
                        # 1156 "05type.c"
                        info->p=p_222;
                        # 1157 "05type.c"
                        info->sline=sline_223;
                        # 1158 "05type.c"
                        break;
                    }
                }
            }
        }
        else {
            # 1515 "05type.c"
            # 1163 "05type.c"
            if(_if_conditional327=string_operator_equals(type_name_197,"union"),            _if_conditional327) {
                # 1164 "05type.c"
                union__209=(_Bool)1;
                # 1192 "05type.c"
                # 1166 "05type.c"
                if(_if_conditional328=*info->p==123,                _if_conditional328) {
                    # 1167 "05type.c"
                    p_224=info->p;
                    # 1168 "05type.c"
                    sline_225=info->sline;
                    # 1170 "05type.c"
                    ((char*)(right_value246=skip_block(info)));
                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1190 "05type.c"
                    # 1172 "05type.c"
                    if(_if_conditional329=*info->p==59,                    _if_conditional329) {
                        # 1173 "05type.c"
                        info->p=head_195;
                        # 1174 "05type.c"
                        info->sline=head_sline_196;
                        # 1176 "05type.c"
                        info->define_struct=(_Bool)0;
                        # 1177 "05type.c"
                        anonymous_type_216=(_Bool)1;
                        # 1178 "05type.c"
                        __dec_obj88=type_name_197;
                        type_name_197=(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(""))));
                        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1179 "05type.c"
                        info->p=p_224;
                        # 1180 "05type.c"
                        info->sline=sline_225;
                        # 1181 "05type.c"
                        break;
                    }
                    else {
                        # 1184 "05type.c"
                        anonymous_type_216=(_Bool)1;
                        # 1185 "05type.c"
                        __dec_obj89=type_name_197;
                        type_name_197=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(""))));
                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1186 "05type.c"
                        info->p=p_224;
                        # 1187 "05type.c"
                        info->sline=sline_225;
                        # 1188 "05type.c"
                        break;
                    }
                }
                # 1192 "05type.c"
                parse_sharp_v5(info);
                # 1194 "05type.c"
                __dec_obj90=type_name_197;
                type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1194, 19),__exception_result_var_b14=((char*)(right_value249=parse_word(info))), come_pop_stackframe(), __exception_result_var_b14));
                __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1196 "05type.c"
                parse_sharp_v5(info);
                # 1217 "05type.c"
                # 1198 "05type.c"
                if(_if_conditional330=*info->p==123,                _if_conditional330) {
                    # 1199 "05type.c"
                    p_226=info->p;
                    # 1200 "05type.c"
                    sline_227=info->sline;
                    # 1202 "05type.c"
                    ((char*)(right_value250=skip_block(info)));
                    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1216 "05type.c"
                    # 1204 "05type.c"
                    if(_if_conditional331=*info->p==59,                    _if_conditional331) {
                        # 1205 "05type.c"
                        info->p=head_195;
                        # 1206 "05type.c"
                        info->sline=head_sline_196;
                        # 1207 "05type.c"
                        info->define_struct=(_Bool)1;
                        # 1208 "05type.c"
                        __result138__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value252=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value251=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1208, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value251,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value252,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result138__;
                    }
                    else {
                        # 1211 "05type.c"
                        anonymous_type_216=(_Bool)1;
                        # 1212 "05type.c"
                        info->p=p_226;
                        # 1213 "05type.c"
                        info->sline=sline_227;
                        # 1214 "05type.c"
                        break;
                    }
                }
            }
            else {
                # 1515 "05type.c"
                # 1218 "05type.c"
                if(_if_conditional332=string_operator_equals(type_name_197,"enum"),                _if_conditional332) {
                    # 1219 "05type.c"
                    enum__210=(_Bool)1;
                    # 1221 "05type.c"
                    parse_sharp_v5(info);
                    # 1244 "05type.c"
                    # 1223 "05type.c"
                    if(_if_conditional333=*info->p==123,                    _if_conditional333) {
                        # 1224 "05type.c"
                        p_228=info->p;
                        # 1225 "05type.c"
                        sline_229=info->sline;
                        # 1227 "05type.c"
                        ((char*)(right_value253=skip_block(info)));
                        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1242 "05type.c"
                        # 1229 "05type.c"
                        if(_if_conditional334=*info->p==59,                        _if_conditional334) {
                            # 1230 "05type.c"
                            info->p=head_195;
                            # 1231 "05type.c"
                            info->sline=head_sline_196;
                            # 1232 "05type.c"
                            info->define_struct=(_Bool)1;
                            # 1233 "05type.c"
                            __result139__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value255=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value254=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1233, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value254,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value255,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            return __result139__;
                        }
                        else {
                            # 1236 "05type.c"
                            anonymous_type_216=(_Bool)1;
                            # 1237 "05type.c"
                            __dec_obj91=type_name_197;
                            type_name_197=(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(""))));
                            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1238 "05type.c"
                            info->p=p_228;
                            # 1239 "05type.c"
                            info->sline=sline_229;
                            # 1240 "05type.c"
                            break;
                        }
                    }
                    # 1244 "05type.c"
                    parse_sharp_v5(info);
                    # 1246 "05type.c"
                    __dec_obj92=type_name_197;
                    type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1246, 20),__exception_result_var_b15=((char*)(right_value257=parse_word(info))), come_pop_stackframe(), __exception_result_var_b15));
                    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1248 "05type.c"
                    parse_sharp_v5(info);
                    # 1269 "05type.c"
                    # 1250 "05type.c"
                    if(_if_conditional335=*info->p==123,                    _if_conditional335) {
                        # 1251 "05type.c"
                        p_230=info->p;
                        # 1252 "05type.c"
                        sline_231=info->sline;
                        # 1254 "05type.c"
                        ((char*)(right_value258=skip_block(info)));
                        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1268 "05type.c"
                        # 1256 "05type.c"
                        if(_if_conditional336=*info->p==59,                        _if_conditional336) {
                            # 1257 "05type.c"
                            info->p=head_195;
                            # 1258 "05type.c"
                            info->sline=head_sline_196;
                            # 1259 "05type.c"
                            info->define_struct=(_Bool)1;
                            # 1260 "05type.c"
                            __result140__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value260=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value259=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1260, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value259,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value260,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            return __result140__;
                        }
                        else {
                            # 1263 "05type.c"
                            anonymous_type_216=(_Bool)1;
                            # 1264 "05type.c"
                            info->p=p_230;
                            # 1265 "05type.c"
                            info->sline=sline_231;
                            # 1266 "05type.c"
                            break;
                        }
                    }
                }
                else {
                    # 1515 "05type.c"
                    # 1270 "05type.c"
                    if(_if_conditional337=string_operator_equals(type_name_197,"_Alignas"),                    _if_conditional337) {
                        # 1271 "05type.c"
                        (come_push_stackframe("05type.c", 1271, 21),__exception_result_var_b16=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b16);
                        # 1273 "05type.c"
                        exp_232=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=expression_v13(info))));
                        if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 1275 "05type.c"
                        __dec_obj93=alignas__215;
                        alignas__215=(struct sNode*)come_increment_ref_count(exp_232);
                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1277 "05type.c"
                        (come_push_stackframe("05type.c", 1277, 22),__exception_result_var_b17=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b17);
                        # 1279 "05type.c"
                        __dec_obj94=type_name_197;
                        type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1279, 23),__exception_result_var_b18=((char*)(right_value262=parse_word(info))), come_pop_stackframe(), __exception_result_var_b18));
                        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_232) { exp_232 = come_decrement_ref_count2(exp_232, ((struct sNode*)exp_232)->finalize, ((struct sNode*)exp_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 1515 "05type.c"
                        # 1281 "05type.c"
                        if(_if_conditional338=string_operator_equals(type_name_197,"const"),                        _if_conditional338) {
                            # 1282 "05type.c"
                            constant_199=(_Bool)1;
                            # 1284 "05type.c"
                            __dec_obj95=type_name_197;
                            type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1284, 24),__exception_result_var_b19=((char*)(right_value263=parse_word(info))), come_pop_stackframe(), __exception_result_var_b19));
                            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1515 "05type.c"
                            # 1286 "05type.c"
                            if(_if_conditional339=string_operator_equals(type_name_197,"static"),                            _if_conditional339) {
                                # 1287 "05type.c"
                                static__200=(_Bool)1;
                                # 1289 "05type.c"
                                __dec_obj96=type_name_197;
                                type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1289, 25),__exception_result_var_b20=((char*)(right_value264=parse_word(info))), come_pop_stackframe(), __exception_result_var_b20));
                                __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1515 "05type.c"
                                # 1291 "05type.c"
                                if(_if_conditional340=string_operator_equals(type_name_197,"record"),                                _if_conditional340) {
                                    # 1292 "05type.c"
                                    record__198=(_Bool)1;
                                    # 1294 "05type.c"
                                    __dec_obj97=type_name_197;
                                    type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1294, 26),__exception_result_var_b21=((char*)(right_value265=parse_word(info))), come_pop_stackframe(), __exception_result_var_b21));
                                    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1515 "05type.c"
                                    # 1296 "05type.c"
                                    if(_if_conditional341=string_operator_equals(type_name_197,"come_mem_core"),                                    _if_conditional341) {
                                        # 1297 "05type.c"
                                        come_mem_core__214=(_Bool)1;
                                        # 1299 "05type.c"
                                        __dec_obj98=type_name_197;
                                        type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1299, 27),__exception_result_var_b22=((char*)(right_value266=parse_word(info))), come_pop_stackframe(), __exception_result_var_b22));
                                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 1515 "05type.c"
                                        # 1301 "05type.c"
                                        if(_if_conditional342=string_operator_equals(type_name_197,"extern"),                                        _if_conditional342) {
                                            # 1302 "05type.c"
                                            extern__212=(_Bool)1;
                                            # 1304 "05type.c"
                                            __dec_obj99=type_name_197;
                                            type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1304, 28),__exception_result_var_b23=((char*)(right_value267=parse_word(info))), come_pop_stackframe(), __exception_result_var_b23));
                                            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            # 1515 "05type.c"
                                            # 1306 "05type.c"
                                            if(_if_conditional343=string_operator_equals(type_name_197,"_Noreturn"),                                            _if_conditional343) {
                                                # 1307 "05type.c"
                                                __dec_obj100=type_name_197;
                                                type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1307, 29),__exception_result_var_b24=((char*)(right_value268=parse_word(info))), come_pop_stackframe(), __exception_result_var_b24));
                                                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                # 1515 "05type.c"
                                                # 1309 "05type.c"
                                                if(_if_conditional344=string_operator_equals(type_name_197,"inline")||string_operator_equals(type_name_197,"__inline")||string_operator_equals(type_name_197,"__inline__")||string_operator_equals(type_name_197,"__always_inline"),                                                _if_conditional344) {
                                                    # 1310 "05type.c"
                                                    inline__213=(_Bool)1;
                                                    # 1312 "05type.c"
                                                    __dec_obj101=type_name_197;
                                                    type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1312, 30),__exception_result_var_b25=((char*)(right_value269=parse_word(info))), come_pop_stackframe(), __exception_result_var_b25));
                                                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    # 1515 "05type.c"
                                                    # 1314 "05type.c"
                                                    if(_if_conditional345=string_operator_equals(type_name_197,"volatile"),                                                    _if_conditional345) {
                                                        # 1315 "05type.c"
                                                        volatile__201=(_Bool)1;
                                                        # 1317 "05type.c"
                                                        __dec_obj102=type_name_197;
                                                        type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1317, 31),__exception_result_var_b26=((char*)(right_value270=parse_word(info))), come_pop_stackframe(), __exception_result_var_b26));
                                                        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    else {
                                                        # 1515 "05type.c"
                                                        # 1319 "05type.c"
                                                        if(_if_conditional346=string_operator_equals(type_name_197,"long"),                                                        _if_conditional346) {
                                                            # 1386 "05type.c"
                                                            {
                                                                # 1322 "05type.c"
                                                                p_233=info->p;
                                                                # 1323 "05type.c"
                                                                sline_234=info->sline;
                                                                # 1385 "05type.c"
                                                                # 1325 "05type.c"
                                                                if(_if_conditional347=!xisalpha(*info->p),                                                                _if_conditional347) {
                                                                    # 1326 "05type.c"
                                                                    info->p=p_233;
                                                                    # 1327 "05type.c"
                                                                    info->sline=sline_234;
                                                                    # 1329 "05type.c"
                                                                    __dec_obj103=type_name_197;
                                                                    type_name_197=(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string("long"))));
                                                                    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1330 "05type.c"
                                                                    break;
                                                                }
                                                                else {
                                                                    # 1333 "05type.c"
                                                                    __dec_obj104=type_name_197;
                                                                    type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1333, 32),__exception_result_var_b27=((char*)(right_value272=parse_word(info))), come_pop_stackframe(), __exception_result_var_b27));
                                                                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1384 "05type.c"
                                                                    # 1335 "05type.c"
                                                                    if(_if_conditional348=string_operator_equals(type_name_197,"unsigned"),                                                                    _if_conditional348) {
                                                                        # 1336 "05type.c"
                                                                        __dec_obj105=type_name_197;
                                                                        type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1336, 33),__exception_result_var_b28=((char*)(right_value273=parse_word(info))), come_pop_stackframe(), __exception_result_var_b28));
                                                                        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        # 1342 "05type.c"
                                                                        # 1338 "05type.c"
                                                                        if(_if_conditional349=string_operator_equals(type_name_197,"int"),                                                                        _if_conditional349) {
                                                                            # 1339 "05type.c"
                                                                            long__204=(_Bool)1;
                                                                            # 1340 "05type.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1384 "05type.c"
                                                                        # 1343 "05type.c"
                                                                        if(_if_conditional350=string_operator_equals(type_name_197,"long"),                                                                        _if_conditional350) {
                                                                            # 1344 "05type.c"
                                                                            p_233=info->p;
                                                                            # 1345 "05type.c"
                                                                            sline_234=info->sline;
                                                                            # 1355 "05type.c"
                                                                            # 1346 "05type.c"
                                                                            if(_if_conditional351=xisalpha(*info->p),                                                                            _if_conditional351) {
                                                                                # 1347 "05type.c"
                                                                                long_long_205=(_Bool)1;
                                                                                # 1348 "05type.c"
                                                                                __dec_obj106=type_name_197;
                                                                                type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1348, 34),__exception_result_var_b29=((char*)(right_value274=parse_word(info))), come_pop_stackframe(), __exception_result_var_b29));
                                                                                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1351 "05type.c"
                                                                                long__204=(_Bool)1;
                                                                                # 1352 "05type.c"
                                                                                break;
                                                                            }
                                                                            # 1366 "05type.c"
                                                                            # 1355 "05type.c"
                                                                            if(_if_conditional352=string_operator_equals(type_name_197,"int"),                                                                            _if_conditional352) {
                                                                                # 1356 "05type.c"
                                                                                long_long_205=(_Bool)1;
                                                                                # 1357 "05type.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1366 "05type.c"
                                                                                # 1359 "05type.c"
                                                                                if(_if_conditional353=!is_type_name(type_name_197,info),                                                                                _if_conditional353) {
                                                                                    # 1360 "05type.c"
                                                                                    __dec_obj107=type_name_197;
                                                                                    type_name_197=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string("long"))));
                                                                                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1361 "05type.c"
                                                                                    long_long_205=(_Bool)1;
                                                                                    # 1362 "05type.c"
                                                                                    info->p=p_233;
                                                                                    # 1363 "05type.c"
                                                                                    info->sline=sline_234;
                                                                                    # 1364 "05type.c"
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1384 "05type.c"
                                                                            # 1367 "05type.c"
                                                                            if(_if_conditional354=is_type_name(type_name_197,info),                                                                            _if_conditional354) {
                                                                                # 1375 "05type.c"
                                                                                # 1368 "05type.c"
                                                                                if(long__204) {
                                                                                    # 1369 "05type.c"
                                                                                    long_long_205=(_Bool)1;
                                                                                    # 1370 "05type.c"
                                                                                    long__204=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    # 1373 "05type.c"
                                                                                    long__204=(_Bool)1;
                                                                                }
                                                                                # 1375 "05type.c"
                                                                                break;
                                                                            }
                                                                            else {
                                                                                # 1378 "05type.c"
                                                                                info->p=p_233;
                                                                                # 1379 "05type.c"
                                                                                info->sline=sline_234;
                                                                                # 1381 "05type.c"
                                                                                __dec_obj108=type_name_197;
                                                                                type_name_197=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string("long"))));
                                                                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1382 "05type.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            # 1515 "05type.c"
                                                            # 1387 "05type.c"
                                                            if(_if_conditional356=string_operator_equals(type_name_197,"unsigned"),                                                            _if_conditional356) {
                                                                # 1388 "05type.c"
                                                                unsigned__203=(_Bool)1;
                                                                # 1455 "05type.c"
                                                                # 1390 "05type.c"
                                                                if(_if_conditional357=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional357) {
                                                                    # 1391 "05type.c"
                                                                    p_235=info->p;
                                                                    # 1392 "05type.c"
                                                                    sline_236=info->sline;
                                                                    # 1394 "05type.c"
                                                                    __dec_obj109=type_name_197;
                                                                    type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1394, 35),__exception_result_var_b30=((char*)(right_value277=parse_word(info))), come_pop_stackframe(), __exception_result_var_b30));
                                                                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1450 "05type.c"
                                                                    # 1396 "05type.c"
                                                                    if(_if_conditional358=string_operator_equals(type_name_197,"short"),                                                                    _if_conditional358) {
                                                                        # 1419 "05type.c"
                                                                        # 1397 "05type.c"
                                                                        if(_if_conditional359=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional359) {
                                                                            # 1398 "05type.c"
                                                                            p_237=info->p;
                                                                            # 1399 "05type.c"
                                                                            sline_238=info->sline;
                                                                            # 1401 "05type.c"
                                                                            __dec_obj110=type_name_197;
                                                                            type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1401, 36),__exception_result_var_b31=((char*)(right_value278=parse_word(info))), come_pop_stackframe(), __exception_result_var_b31));
                                                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1413 "05type.c"
                                                                            # 1403 "05type.c"
                                                                            if(_if_conditional360=is_type_name(type_name_197,info),                                                                            _if_conditional360) {
                                                                                # 1404 "05type.c"
                                                                                short__206=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                # 1407 "05type.c"
                                                                                short__206=(_Bool)1;
                                                                                # 1408 "05type.c"
                                                                                __dec_obj111=type_name_197;
                                                                                type_name_197=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("int"))));
                                                                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1410 "05type.c"
                                                                                info->p=p_237;
                                                                                # 1411 "05type.c"
                                                                                info->sline=sline_238;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1415 "05type.c"
                                                                            short__206=(_Bool)1;
                                                                            # 1416 "05type.c"
                                                                            __dec_obj112=type_name_197;
                                                                            type_name_197=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string("int"))));
                                                                            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            # 1417 "05type.c"
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1450 "05type.c"
                                                                        # 1420 "05type.c"
                                                                        if(_if_conditional361=string_operator_equals(type_name_197,"long"),                                                                        _if_conditional361) {
                                                                            # 1443 "05type.c"
                                                                            # 1421 "05type.c"
                                                                            if(_if_conditional362=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional362) {
                                                                                # 1422 "05type.c"
                                                                                p_239=info->p;
                                                                                # 1423 "05type.c"
                                                                                sline_240=info->sline;
                                                                                # 1425 "05type.c"
                                                                                __dec_obj113=type_name_197;
                                                                                type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1425, 37),__exception_result_var_b32=((char*)(right_value281=parse_word(info))), come_pop_stackframe(), __exception_result_var_b32));
                                                                                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1437 "05type.c"
                                                                                # 1427 "05type.c"
                                                                                if(_if_conditional363=is_type_name(type_name_197,info),                                                                                _if_conditional363) {
                                                                                    # 1428 "05type.c"
                                                                                    long__204=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    # 1431 "05type.c"
                                                                                    long__204=(_Bool)1;
                                                                                    # 1432 "05type.c"
                                                                                    __dec_obj114=type_name_197;
                                                                                    type_name_197=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string("int"))));
                                                                                    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    # 1434 "05type.c"
                                                                                    info->p=p_239;
                                                                                    # 1435 "05type.c"
                                                                                    info->sline=sline_240;
                                                                                }
                                                                            }
                                                                            else {
                                                                                # 1439 "05type.c"
                                                                                long__204=(_Bool)1;
                                                                                # 1440 "05type.c"
                                                                                __dec_obj115=type_name_197;
                                                                                type_name_197=(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string("int"))));
                                                                                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1441 "05type.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 1450 "05type.c"
                                                                            # 1444 "05type.c"
                                                                            if(_if_conditional364=!is_type_name(type_name_197,info),                                                                            _if_conditional364) {
                                                                                # 1445 "05type.c"
                                                                                __dec_obj116=type_name_197;
                                                                                type_name_197=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string("int"))));
                                                                                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                # 1446 "05type.c"
                                                                                info->p=p_235;
                                                                                # 1447 "05type.c"
                                                                                info->sline=sline_236;
                                                                                # 1448 "05type.c"
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1452 "05type.c"
                                                                    __dec_obj117=type_name_197;
                                                                    type_name_197=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("int"))));
                                                                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    # 1453 "05type.c"
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                # 1515 "05type.c"
                                                                # 1456 "05type.c"
                                                                if(_if_conditional365=string_operator_equals(type_name_197,"signed")||string_operator_equals(type_name_197,"__signed__"),                                                                _if_conditional365) {
                                                                    # 1457 "05type.c"
                                                                    unsigned__203=(_Bool)0;
                                                                    # 1459 "05type.c"
                                                                    __dec_obj118=type_name_197;
                                                                    type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1459, 38),__exception_result_var_b33=((char*)(right_value286=parse_word(info))), come_pop_stackframe(), __exception_result_var_b33));
                                                                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    # 1515 "05type.c"
                                                                    # 1461 "05type.c"
                                                                    if(_if_conditional366=string_operator_equals(type_name_197,"register"),                                                                    _if_conditional366) {
                                                                        # 1462 "05type.c"
                                                                        register__202=(_Bool)1;
                                                                        # 1464 "05type.c"
                                                                        __dec_obj119=type_name_197;
                                                                        type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1464, 39),__exception_result_var_b34=((char*)(right_value287=parse_word(info))), come_pop_stackframe(), __exception_result_var_b34));
                                                                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        # 1515 "05type.c"
                                                                        # 1466 "05type.c"
                                                                        if(_if_conditional367=string_operator_equals(type_name_197,"restrict"),                                                                        _if_conditional367) {
                                                                            # 1467 "05type.c"
                                                                            restrict__207=(_Bool)1;
                                                                            # 1469 "05type.c"
                                                                            __dec_obj120=type_name_197;
                                                                            type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1469, 40),__exception_result_var_b35=((char*)(right_value288=parse_word(info))), come_pop_stackframe(), __exception_result_var_b35));
                                                                            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            # 1515 "05type.c"
                                                                            # 1471 "05type.c"
                                                                            if(_if_conditional368=string_operator_equals(type_name_197,"_Addr"),                                                                            _if_conditional368) {
                                                                                # 1472 "05type.c"
                                                                                __dec_obj121=type_name_197;
                                                                                type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1472, 41),__exception_result_var_b36=((char*)(right_value289=parse_word(info))), come_pop_stackframe(), __exception_result_var_b36));
                                                                                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                # 1515 "05type.c"
                                                                                # 1474 "05type.c"
                                                                                if(_if_conditional369=string_operator_equals(type_name_197,"__restrict"),                                                                                _if_conditional369) {
                                                                                    # 1475 "05type.c"
                                                                                    restrict__207=(_Bool)1;
                                                                                    # 1477 "05type.c"
                                                                                    __dec_obj122=type_name_197;
                                                                                    type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1477, 42),__exception_result_var_b37=((char*)(right_value290=parse_word(info))), come_pop_stackframe(), __exception_result_var_b37));
                                                                                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    # 1515 "05type.c"
                                                                                    # 1479 "05type.c"
                                                                                    if(_if_conditional370=string_operator_equals(type_name_197,"short"),                                                                                    _if_conditional370) {
                                                                                        # 1480 "05type.c"
                                                                                        short__206=(_Bool)1;
                                                                                        # 1511 "05type.c"
                                                                                        # 1482 "05type.c"
                                                                                        if(_if_conditional371=*info->p==58,                                                                                        _if_conditional371) {
                                                                                            # 1483 "05type.c"
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            # 1511 "05type.c"
                                                                                            # 1485 "05type.c"
                                                                                            if(_if_conditional372=xisalnum(*info->p),                                                                                            _if_conditional372) {
                                                                                                # 1486 "05type.c"
                                                                                                p_241=info->p;
                                                                                                # 1487 "05type.c"
                                                                                                sline_242=info->sline;
                                                                                                # 1488 "05type.c"
                                                                                                __dec_obj123=type_name_197;
                                                                                                type_name_197=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1488, 43),__exception_result_var_b38=((char*)(right_value291=parse_word(info))), come_pop_stackframe(), __exception_result_var_b38));
                                                                                                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                # 1507 "05type.c"
                                                                                                # 1490 "05type.c"
                                                                                                if(_if_conditional373=string_operator_equals(type_name_197,"int"),                                                                                                _if_conditional373) {
                                                                                                    # 1491 "05type.c"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 1507 "05type.c"
                                                                                                    # 1493 "05type.c"
                                                                                                    if(_if_conditional374=string_operator_equals(type_name_197,"short"),                                                                                                    _if_conditional374) {
                                                                                                        # 1494 "05type.c"
                                                                                                        short__206=(_Bool)0;
                                                                                                        # 1495 "05type.c"
                                                                                                        break;
                                                                                                    }
                                                                                                    else {
                                                                                                        # 1507 "05type.c"
                                                                                                        # 1497 "05type.c"
                                                                                                        if(_if_conditional375=is_type_name(type_name_197,info),                                                                                                        _if_conditional375) {
                                                                                                            # 1498 "05type.c"
                                                                                                            info->p=p_241;
                                                                                                            # 1499 "05type.c"
                                                                                                            info->sline=sline_242;
                                                                                                        }
                                                                                                        else {
                                                                                                            # 1502 "05type.c"
                                                                                                            __dec_obj124=type_name_197;
                                                                                                            type_name_197=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string("short"))));
                                                                                                            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            # 1503 "05type.c"
                                                                                                            info->p=p_241;
                                                                                                            # 1504 "05type.c"
                                                                                                            info->sline=sline_242;
                                                                                                            # 1505 "05type.c"
                                                                                                            break;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else {
                                                                                                # 1509 "05type.c"
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 1513 "05type.c"
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
    # 1517 "05type.c"
    skip_pointer_attribute(info);
    # 1519 "05type.c"
    pointer_num_243=0;
    # 1529 "05type.c"
    while(_while_condtional42=*info->p==42,    _while_condtional42) {
        # 1521 "05type.c"
        info->p++;
        # 1522 "05type.c"
        skip_spaces_and_lf(info);
        # 1524 "05type.c"
        skip_pointer_attribute(info);
        # 1526 "05type.c"
        pointer_num_243++;
    }
    # 1529 "05type.c"
    heap_244=(_Bool)0;
    # 1537 "05type.c"
    # 1530 "05type.c"
    if(_if_conditional376=*info->p==37,    _if_conditional376) {
        # 1531 "05type.c"
        info->p++;
        # 1532 "05type.c"
        skip_spaces_and_lf(info);
        # 1534 "05type.c"
        heap_244=(_Bool)1;
    }
    # 1537 "05type.c"
    lambda_flag_245=(_Bool)0;
    # 1554 "05type.c"
    {
        # 1539 "05type.c"
        pX_246=info->p;
        # 1540 "05type.c"
        slineX_247=info->sline;
        # 1550 "05type.c"
        # 1542 "05type.c"
        if(_if_conditional377=xisalpha(*info->p)||*info->p==95,        _if_conditional377) {
            # 1543 "05type.c"
            (void)(come_push_stackframe("05type.c", 1543, 44),__exception_result_var_b39=((char*)(right_value293=parse_word(info))), come_pop_stackframe(), __exception_result_var_b39);
            right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1548 "05type.c"
            # 1545 "05type.c"
            if(_if_conditional378=*info->p==40&&info->in_typedef,            _if_conditional378) {
                # 1546 "05type.c"
                lambda_flag_245=(_Bool)1;
            }
        }
        # 1550 "05type.c"
        info->p=pX_246;
        # 1551 "05type.c"
        info->sline=slineX_247;
    }
    # 1554 "05type.c"
    # 1555 "05type.c"
    # 1557 "05type.c"
    function_pointer_flag_250=(_Bool)0;
    # 1589 "05type.c"
    {
        # 1559 "05type.c"
        p_251=info->p;
        # 1560 "05type.c"
        sline_252=info->sline;
        # 1585 "05type.c"
        # 1562 "05type.c"
        if(_if_conditional379=*info->p==40,        _if_conditional379) {
            # 1563 "05type.c"
            info->p++;
            # 1564 "05type.c"
            skip_spaces_and_lf(info);
            # 1566 "05type.c"
            skip_pointer_attribute(info);
            # 1583 "05type.c"
            # 1568 "05type.c"
            if(_if_conditional380=*info->p==42||*info->p==94,            _if_conditional380) {
                # 1569 "05type.c"
                function_pointer_flag_250=(_Bool)1;
            }
            else {
                # 1583 "05type.c"
                # 1571 "05type.c"
                if(_if_conditional381=xisalpha(*info->p)||*info->p==95,                _if_conditional381) {
                    # 1572 "05type.c"
                    word_253=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1572, 45),__exception_result_var_b40=((char*)(right_value294=parse_word(info))), come_pop_stackframe(), __exception_result_var_b40));
                    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1582 "05type.c"
                    # 1574 "05type.c"
                    if(_if_conditional382=*info->p==41,                    _if_conditional382) {
                        # 1575 "05type.c"
                        info->p++;
                        # 1576 "05type.c"
                        skip_spaces_and_lf(info);
                        # 1581 "05type.c"
                        # 1578 "05type.c"
                        if(_if_conditional383=*info->p==40,                        _if_conditional383) {
                            # 1579 "05type.c"
                            function_pointer_flag_250=(_Bool)1;
                        }
                    }
                    word_253 = come_decrement_ref_count2(word_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        # 1585 "05type.c"
        info->p=p_251;
        # 1586 "05type.c"
        info->sline=sline_252;
    }
    # 1589 "05type.c"
    var_name_between_brace_254=(_Bool)0;
    # 1620 "05type.c"
    {
        # 1591 "05type.c"
        p_255=info->p;
        # 1592 "05type.c"
        sline_256=info->sline;
        # 1616 "05type.c"
        # 1594 "05type.c"
        if(_if_conditional384=*info->p==40,        _if_conditional384) {
            # 1595 "05type.c"
            info->p++;
            # 1596 "05type.c"
            skip_spaces_and_lf(info);
            # 1598 "05type.c"
            skip_pointer_attribute(info);
            # 1614 "05type.c"
            # 1600 "05type.c"
            if(_if_conditional385=xisalpha(*info->p)||*info->p==95,            _if_conditional385) {
                # 1601 "05type.c"
                word_257=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1601, 46),__exception_result_var_b41=((char*)(right_value295=parse_word(info))), come_pop_stackframe(), __exception_result_var_b41));
                right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1613 "05type.c"
                # 1603 "05type.c"
                if(_if_conditional386=is_type_name(word_257,info),                _if_conditional386) {
                }
                else {
                    # 1613 "05type.c"
                    # 1605 "05type.c"
                    if(_if_conditional387=*info->p==41,                    _if_conditional387) {
                        # 1606 "05type.c"
                        info->p++;
                        # 1607 "05type.c"
                        skip_spaces_and_lf(info);
                        # 1612 "05type.c"
                        # 1609 "05type.c"
                        if(_if_conditional388=*info->p!=40,                        _if_conditional388) {
                            # 1610 "05type.c"
                            var_name_between_brace_254=(_Bool)1;
                        }
                    }
                }
                word_257 = come_decrement_ref_count2(word_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 1616 "05type.c"
        info->p=p_255;
        # 1617 "05type.c"
        info->sline=sline_256;
    }
    # 2302 "05type.c"
    # 1620 "05type.c"
    if(_if_conditional389=anonymous_type_216&&*info->p==123,    _if_conditional389) {
        # 1621 "05type.c"
        # 1691 "05type.c"
        # 1622 "05type.c"
        if(struct__208) {
            # 1627 "05type.c"
            # 1623 "05type.c"
            if(_if_conditional391=string_operator_equals(type_name_197,""),            _if_conditional391) {
                # 1624 "05type.c"
                __dec_obj125=type_name_197;
                type_name_197=(char*)come_increment_ref_count(((char*)(right_value296=xsprintf("anonymous_typeX%d",++anonymous_num_258))));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 1627 "05type.c"
            node_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=parse_struct((char*)come_increment_ref_count(type_name_197),info))));
            if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1634 "05type.c"
            # 1629 "05type.c"
            if(_if_conditional392=!node_compile(node_259,info),            _if_conditional392) {
                # 1630 "05type.c"
                err_msg(info,"parse_struct is failed");
                # 1631 "05type.c"
                __result141__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value299=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value298=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1631, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value298,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value299,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result141__;
            }
            # 1634 "05type.c"
            pointer_num_260=0;
            # 1641 "05type.c"
            while(_while_condtional43=*info->p==42,            _while_condtional43) {
                # 1637 "05type.c"
                info->p++;
                # 1637 "05type.c"
                skip_spaces_and_lf(info);
                # 1638 "05type.c"
                pointer_num_260++;
            }
            # 1641 "05type.c"
            __dec_obj126=type_248;
            type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value300=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1641, "sType")))),type_name_197,(_Bool)0,info))));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value300,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value301,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1643 "05type.c"
            type_248->mPointerNum=pointer_num_260;
            if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1691 "05type.c"
            # 1645 "05type.c"
            if(enum__210) {
                # 1650 "05type.c"
                # 1646 "05type.c"
                if(_if_conditional394=string_operator_equals(type_name_197,""),                _if_conditional394) {
                    # 1647 "05type.c"
                    __dec_obj127=type_name_197;
                    type_name_197=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("anonymous_typeY%d",++anonymous_num_258))));
                    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1650 "05type.c"
                node_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=parse_enum((char*)come_increment_ref_count(type_name_197),info))));
                if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1659 "05type.c"
                # 1652 "05type.c"
                if(_if_conditional395=!info->no_output_err,                _if_conditional395) {
                    # 1657 "05type.c"
                    # 1653 "05type.c"
                    if(_if_conditional396=!node_compile(node_261,info),                    _if_conditional396) {
                        # 1654 "05type.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1655 "05type.c"
                        __result142__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value305=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value304=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1655, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_261) { node_261 = come_decrement_ref_count2(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value304,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value305,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result142__;
                    }
                }
                # 1659 "05type.c"
                __dec_obj128=type_248;
                type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value306=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1659, "sType")))),type_name_197,(_Bool)0,info))));
                come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(node_261) { node_261 = come_decrement_ref_count2(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 1691 "05type.c"
                # 1661 "05type.c"
                if(union__209) {
                    # 1666 "05type.c"
                    # 1662 "05type.c"
                    if(_if_conditional398=string_operator_equals(type_name_197,""),                    _if_conditional398) {
                        # 1663 "05type.c"
                        __dec_obj129=type_name_197;
                        type_name_197=(char*)come_increment_ref_count(((char*)(right_value308=xsprintf("anonymous_typeZ%d",++anonymous_num_258))));
                        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 1666 "05type.c"
                    node_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=parse_union((char*)come_increment_ref_count(type_name_197),info))));
                    if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1675 "05type.c"
                    # 1669 "05type.c"
                    if(_if_conditional399=!node_compile(node_262,info),                    _if_conditional399) {
                        # 1670 "05type.c"
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        # 1671 "05type.c"
                        __result143__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value311=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value310=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1671, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_262) { node_262 = come_decrement_ref_count2(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value310,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value311,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result143__;
                    }
                    # 1675 "05type.c"
                    pointer_num_263=0;
                    # 1682 "05type.c"
                    while(_while_condtional44=*info->p==42,                    _while_condtional44) {
                        # 1678 "05type.c"
                        info->p++;
                        # 1678 "05type.c"
                        skip_spaces_and_lf(info);
                        # 1679 "05type.c"
                        pointer_num_263++;
                    }
                    # 1682 "05type.c"
                    __dec_obj130=type_248;
                    type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value312=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1682, "sType")))),type_name_197,(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value312,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1684 "05type.c"
                    type_248->mPointerNum=pointer_num_263;
                    if(node_262) { node_262 = come_decrement_ref_count2(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1687 "05type.c"
                    err_msg(info,"unexpected { character");
                    # 1688 "05type.c"
                    __result144__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value315=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value314=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1688, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value314,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value315,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    return __result144__;
                }
            }
        }
        # 1732 "05type.c"
        # 1691 "05type.c"
        if(parse_variable_name) {
            # 1692 "05type.c"
            parse_sharp_v5(info);
            # 1698 "05type.c"
            # 1693 "05type.c"
            if(_if_conditional401=var_name_between_brace_254&&*info->p==40,            _if_conditional401) {
                # 1694 "05type.c"
                info->p++;
                # 1695 "05type.c"
                skip_spaces_and_lf(info);
            }
            # 1715 "05type.c"
            # 1698 "05type.c"
            if(_if_conditional402=*info->p==58,            _if_conditional402) {
                # 1699 "05type.c"
                __dec_obj131=var_name_249;
                var_name_249=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(""))));
                __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 1715 "05type.c"
                # 1701 "05type.c"
                if(anonymous_name_217) {
                    # 1702 "05type.c"
                    # 1703 "05type.c"
                    num_anonymous_var_name_264++;
                    # 1704 "05type.c"
                    __dec_obj132=var_name_249;
                    var_name_249=(char*)come_increment_ref_count(((char*)(right_value317=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_264))));
                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 1715 "05type.c"
                    # 1706 "05type.c"
                    if(_if_conditional404=xisalnum(*info->p)||*info->p==95,                    _if_conditional404) {
                        # 1707 "05type.c"
                        __dec_obj133=var_name_249;
                        var_name_249=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1707, 47),__exception_result_var_b42=((char*)(right_value318=parse_word(info))), come_pop_stackframe(), __exception_result_var_b42));
                        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 1710 "05type.c"
                        # 1711 "05type.c"
                        num_anonymous_var_name_265++;
                        # 1712 "05type.c"
                        __dec_obj134=var_name_249;
                        var_name_249=(char*)come_increment_ref_count(((char*)(right_value319=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_265))));
                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1720 "05type.c"
            # 1715 "05type.c"
            if(_if_conditional405=var_name_between_brace_254&&*info->p==41,            _if_conditional405) {
                # 1716 "05type.c"
                info->p++;
                # 1717 "05type.c"
                skip_spaces_and_lf(info);
            }
            # 1731 "05type.c"
            # 1720 "05type.c"
            if(_if_conditional406=*info->p==58,            _if_conditional406) {
                # 1721 "05type.c"
                info->p++;
                # 1722 "05type.c"
                skip_spaces_and_lf(info);
                # 1724 "05type.c"
                no_comma_266=info->no_comma;
                # 1725 "05type.c"
                info->no_comma=(_Bool)1;
                # 1726 "05type.c"
                node_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=expression_v13(info))));
                if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1727 "05type.c"
                info->no_comma=no_comma_266;
                # 1729 "05type.c"
                __dec_obj135=type_248->mSizeNum;
                type_248->mSizeNum=(struct sNode*)come_increment_ref_count(node_267);
                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_267) { node_267 = come_decrement_ref_count2(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        # 2302 "05type.c"
        # 1733 "05type.c"
        if(lambda_flag_245) {
            # 1734 "05type.c"
            # 1757 "05type.c"
            # 1735 "05type.c"
            if(_if_conditional412=map$2charphsTypephp_operator_load_element(info->types,type_name_197),            _if_conditional412) {
                # 1736 "05type.c"
                __dec_obj136=result_type_268;
                result_type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_197)))));
                come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value321,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1737 "05type.c"
                result_type_268->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_268->mClass->mName), "05type.c", 1737, 48));
            }
            else {
                # 1757 "05type.c"
                # 1739 "05type.c"
                if(_if_conditional418=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_197)),                _if_conditional418) {
                    # 1745 "05type.c"
                    for(                    i_277=0;                    i_277<list$1charph_length(info->generics_type_names);                    i_277++                    ){
                        # 1744 "05type.c"
                        # 1741 "05type.c"
                        if(_if_conditional422=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_277), "05type.c", 1741, 49)),type_name_197),                        _if_conditional422) {
                            # 1742 "05type.c"
                            __dec_obj137=result_type_268;
                            result_type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value322=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1742, "sType")))),((char*)(right_value323=xsprintf("generics_type%d",i_277))),(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    # 1757 "05type.c"
                    # 1746 "05type.c"
                    if(_if_conditional423=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_197)),                    _if_conditional423) {
                        # 1752 "05type.c"
                        for(                        i_281=0;                        i_281<list$1charph_length(info->method_generics_type_names);                        i_281++                        ){
                            # 1751 "05type.c"
                            # 1748 "05type.c"
                            if(_if_conditional424=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_281), "05type.c", 1748, 50)),type_name_197),                            _if_conditional424) {
                                # 1749 "05type.c"
                                __dec_obj138=result_type_268;
                                result_type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value325=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1749, "sType")))),((char*)(right_value326=xsprintf("mgenerics_type%d",i_281))),(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1754 "05type.c"
                        __dec_obj139=result_type_268;
                        result_type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value328=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1754, "sType")))),type_name_197,(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value329,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            # 1757 "05type.c"
            result_type_268->mConstant=result_type_268->mConstant||constant_199;
            # 1758 "05type.c"
            __dec_obj140=result_type_268->mAlignas;
            result_type_268->mAlignas=(struct sNode*)come_increment_ref_count(alignas__215);
            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
            # 1759 "05type.c"
            result_type_268->mComeMemCore=result_type_268->mComeMemCore||come_mem_core__214;
            # 1760 "05type.c"
            result_type_268->mRegister=register__202;
            # 1761 "05type.c"
            result_type_268->mUnsigned=result_type_268->mUnsigned||unsigned__203;
            # 1762 "05type.c"
            result_type_268->mVolatile=volatile__201;
            # 1763 "05type.c"
            result_type_268->mRecord=result_type_268->mStatic||static__200;
            # 1764 "05type.c"
            result_type_268->mStatic=result_type_268->mRecord||record__198;
            # 1765 "05type.c"
            result_type_268->mExtern=result_type_268->mExtern||extern__212;
            # 1766 "05type.c"
            result_type_268->mInline=result_type_268->mInline||inline__213;
            # 1767 "05type.c"
            result_type_268->mRestrict=result_type_268->mRestrict||restrict__207;
            # 1768 "05type.c"
            result_type_268->mLongLong=result_type_268->mLongLong||long_long_205;
            # 1769 "05type.c"
            result_type_268->mLong=result_type_268->mLong||long__204;
            # 1770 "05type.c"
            result_type_268->mShort=result_type_268->mShort||short__206;
            # 1771 "05type.c"
            result_type_268->mPointerNum=pointer_num_243;
            # 1772 "05type.c"
            result_type_268->mHeap=result_type_268->mHeap||heap_244;
            # 1774 "05type.c"
            __dec_obj141=var_name_249;
            var_name_249=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1774, 51),__exception_result_var_b43=((char*)(right_value330=parse_word(info))), come_pop_stackframe(), __exception_result_var_b43));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1776 "05type.c"
            multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value331=parse_params(info,(_Bool)0)));
            param_types_282=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
            param_names_283=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
            param_default_parametors_284=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
            var_args_285=multiple_assign_var3->v4;
            come_call_finalizer3(right_value331,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1778 "05type.c"
            __dec_obj142=type_248;
            type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value332=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1778, "sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value332,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value333,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1780 "05type.c"
            __dec_obj144=type_248->mResultType;
            type_248->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value335=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value334=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1780, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_268)))));
            come_call_finalizer3(__dec_obj144,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value334,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value335,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1781 "05type.c"
            __dec_obj145=type_248->mParamTypes;
            type_248->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_282);
            come_call_finalizer3(__dec_obj145,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            # 1782 "05type.c"
            __dec_obj146=type_248->mParamNames;
            type_248->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_283);
            come_call_finalizer3(__dec_obj146,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            # 1783 "05type.c"
            type_248->mVarArgs=var_args_285;
            # 1784 "05type.c"
            type_248->mExtern=extern__212;
            come_call_finalizer3(result_type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_282,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_283,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_284,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 2302 "05type.c"
            # 1786 "05type.c"
            if(function_pointer_flag_250) {
                # 1787 "05type.c"
                info->p++;
                # 1788 "05type.c"
                skip_spaces_and_lf(info);
                # 1790 "05type.c"
                skip_pointer_attribute(info);
                # 1797 "05type.c"
                # 1792 "05type.c"
                if(_if_conditional426=*info->p==42||*info->p==94,                _if_conditional426) {
                    # 1793 "05type.c"
                    info->p++;
                    # 1794 "05type.c"
                    skip_spaces_and_lf(info);
                }
                # 1797 "05type.c"
                skip_pointer_attribute(info);
                # 1799 "05type.c"
                # 1823 "05type.c"
                # 1800 "05type.c"
                if(_if_conditional427=map$2charphsTypephp_operator_load_element(info->types,type_name_197),                _if_conditional427) {
                    # 1801 "05type.c"
                    __dec_obj147=result_type_286;
                    result_type_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_197)))));
                    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1802 "05type.c"
                    result_type_286->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_286->mClass->mName), "05type.c", 1802, 52));
                }
                else {
                    # 1823 "05type.c"
                    # 1805 "05type.c"
                    if(_if_conditional428=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_197)),                    _if_conditional428) {
                        # 1811 "05type.c"
                        for(                        i_287=0;                        i_287<list$1charph_length(info->generics_type_names);                        i_287++                        ){
                            # 1810 "05type.c"
                            # 1807 "05type.c"
                            if(_if_conditional429=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_287), "05type.c", 1807, 53)),type_name_197),                            _if_conditional429) {
                                # 1808 "05type.c"
                                __dec_obj148=result_type_286;
                                result_type_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value337=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1808, "sType")))),((char*)(right_value338=xsprintf("generics_type%d",i_287))),(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value337,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        # 1823 "05type.c"
                        # 1812 "05type.c"
                        if(_if_conditional430=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_197)),                        _if_conditional430) {
                            # 1818 "05type.c"
                            for(                            i_288=0;                            i_288<list$1charph_length(info->method_generics_type_names);                            i_288++                            ){
                                # 1817 "05type.c"
                                # 1814 "05type.c"
                                if(_if_conditional431=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_288), "05type.c", 1814, 54)),type_name_197),                                _if_conditional431) {
                                    # 1815 "05type.c"
                                    __dec_obj149=result_type_286;
                                    result_type_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1815, "sType")))),((char*)(right_value341=xsprintf("mgenerics_type%d",i_288))),(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            # 1820 "05type.c"
                            __dec_obj150=result_type_286;
                            result_type_286=(struct sType*)come_increment_ref_count(((struct sType*)(right_value344=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value343=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1820, "sType")))),type_name_197,(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value344,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                # 1823 "05type.c"
                result_type_286->mConstant=result_type_286->mConstant||constant_199;
                # 1824 "05type.c"
                __dec_obj151=result_type_286->mAlignas;
                result_type_286->mAlignas=(struct sNode*)come_increment_ref_count(alignas__215);
                if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                # 1825 "05type.c"
                result_type_286->mComeMemCore=result_type_286->mComeMemCore||come_mem_core__214;
                # 1826 "05type.c"
                result_type_286->mRegister=register__202;
                # 1827 "05type.c"
                result_type_286->mUnsigned=result_type_286->mUnsigned||unsigned__203;
                # 1828 "05type.c"
                result_type_286->mVolatile=volatile__201;
                # 1829 "05type.c"
                result_type_286->mStatic=result_type_286->mStatic||static__200;
                # 1830 "05type.c"
                result_type_286->mRecord=result_type_286->mRecord||record__198;
                # 1831 "05type.c"
                result_type_286->mExtern=result_type_286->mExtern||extern__212;
                # 1832 "05type.c"
                result_type_286->mInline=result_type_286->mInline||inline__213;
                # 1833 "05type.c"
                result_type_286->mRestrict=result_type_286->mRestrict||restrict__207;
                # 1834 "05type.c"
                result_type_286->mLongLong=result_type_286->mLongLong||long_long_205;
                # 1835 "05type.c"
                result_type_286->mLong=result_type_286->mLong||long__204;
                # 1836 "05type.c"
                result_type_286->mShort=result_type_286->mShort||short__206;
                # 1837 "05type.c"
                result_type_286->mPointerNum+=pointer_num_243;
                # 1838 "05type.c"
                result_type_286->mHeap=result_type_286->mHeap||heap_244;
                # 1851 "05type.c"
                # 1840 "05type.c"
                if(_if_conditional432=xisalnum(*info->p)||*info->p==95,                _if_conditional432) {
                    # 1841 "05type.c"
                    __dec_obj152=var_name_249;
                    var_name_249=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1841, 55),__exception_result_var_b44=((char*)(right_value345=parse_word(info))), come_pop_stackframe(), __exception_result_var_b44));
                    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 1845 "05type.c"
                    # 1842 "05type.c"
                    if(_if_conditional433=*info->p==40,                    _if_conditional433) {
                        # 1843 "05type.c"
                        __result163__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value347=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value346=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1843, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_286),(char*)come_increment_ref_count(var_name_249),(_Bool)0)));
                        come_call_finalizer3(result_type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value346,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value347,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result163__;
                    }
                }
                else {
                    # 1847 "05type.c"
                    # 1848 "05type.c"
                    num_anonymous_var_name_289++;
                    # 1849 "05type.c"
                    __dec_obj153=var_name_249;
                    var_name_249=(char*)come_increment_ref_count(((char*)(right_value348=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_289))));
                    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1851 "05type.c"
                (come_push_stackframe("05type.c", 1851, 56),__exception_result_var_b45=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b45);
                # 1853 "05type.c"
                multiple_assign_var4=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value349=parse_params(info,(_Bool)0)));
                param_types_290=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var4->v1);
                param_names_291=(struct list$1charph*)come_increment_ref_count(multiple_assign_var4->v2);
                param_default_parametors_292=(struct list$1charph*)come_increment_ref_count(multiple_assign_var4->v3);
                var_args_293=multiple_assign_var4->v4;
                come_call_finalizer3(right_value349,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1855 "05type.c"
                __dec_obj154=type_248;
                type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value350=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1855, "sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value351,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1857 "05type.c"
                __dec_obj155=type_248->mResultType;
                type_248->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value353=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value352=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1857, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_286)))));
                come_call_finalizer3(__dec_obj155,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value352,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value353,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1858 "05type.c"
                __dec_obj156=type_248->mParamTypes;
                type_248->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_290);
                come_call_finalizer3(__dec_obj156,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                # 1859 "05type.c"
                __dec_obj157=type_248->mParamNames;
                type_248->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_291);
                come_call_finalizer3(__dec_obj157,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                # 1860 "05type.c"
                type_248->mVarArgs=var_args_293;
                # 1861 "05type.c"
                type_248->mExtern=extern__212;
                come_call_finalizer3(result_type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_290,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_291,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_292,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 2302 "05type.c"
                # 1863 "05type.c"
                if(_if_conditional434=string_operator_equals(type_name_197,"__typeof__")&&*info->p==40,                _if_conditional434) {
                    # 1864 "05type.c"
                    info->p++;
                    # 1865 "05type.c"
                    skip_spaces_and_lf(info);
                    # 1867 "05type.c"
                    exp_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=expression_v13(info))));
                    if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1869 "05type.c"
                    (come_push_stackframe("05type.c", 1869, 57),__exception_result_var_b46=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b46);
                    # 1876 "05type.c"
                    # 1871 "05type.c"
                    if(_if_conditional435=!node_compile(exp_294,info),                    _if_conditional435) {
                        # 1872 "05type.c"
                        err_msg(info,"invalid __typeof__ expression");
                        # 1873 "05type.c"
                        __result165__ = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(right_value356=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count(((struct tuple3$3sTypepcharphbool*)(right_value355=(struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 1873, "struct tuple3$3sTypepcharphbool")))),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_294) { exp_294 = come_decrement_ref_count2(exp_294, ((struct sNode*)exp_294)->finalize, ((struct sNode*)exp_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value356,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result165__;
                    }
                    # 1876 "05type.c"
                    come_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value357=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value357,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1877 "05type.c"
                    dec_stack_ptr(1,info);
                    # 1879 "05type.c"
                    __dec_obj159=type_248;
                    type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_clone(come_value_295->type))));
                    come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value358,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1923 "05type.c"
                    # 1881 "05type.c"
                    if(parse_variable_name) {
                        # 1882 "05type.c"
                        parse_sharp_v5(info);
                        # 1889 "05type.c"
                        # 1884 "05type.c"
                        if(_if_conditional440=var_name_between_brace_254&&*info->p==40,                        _if_conditional440) {
                            # 1885 "05type.c"
                            info->p++;
                            # 1886 "05type.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1906 "05type.c"
                        # 1889 "05type.c"
                        if(_if_conditional441=*info->p==58,                        _if_conditional441) {
                            # 1890 "05type.c"
                            __dec_obj160=var_name_249;
                            var_name_249=(char*)come_increment_ref_count(((char*)(right_value359=__builtin_string(""))));
                            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 1906 "05type.c"
                            # 1892 "05type.c"
                            if(anonymous_name_217) {
                                # 1893 "05type.c"
                                # 1894 "05type.c"
                                num_anonymous_var_name_296++;
                                # 1895 "05type.c"
                                __dec_obj161=var_name_249;
                                var_name_249=(char*)come_increment_ref_count(((char*)(right_value360=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_296))));
                                __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 1906 "05type.c"
                                # 1897 "05type.c"
                                if(_if_conditional443=xisalnum(*info->p)||*info->p==95,                                _if_conditional443) {
                                    # 1898 "05type.c"
                                    __dec_obj162=var_name_249;
                                    var_name_249=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1898, 58),__exception_result_var_b47=((char*)(right_value361=parse_word(info))), come_pop_stackframe(), __exception_result_var_b47));
                                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 1901 "05type.c"
                                    # 1902 "05type.c"
                                    num_anonymous_var_name_297++;
                                    # 1903 "05type.c"
                                    __dec_obj163=var_name_249;
                                    var_name_249=(char*)come_increment_ref_count(((char*)(right_value362=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_297))));
                                    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 1911 "05type.c"
                        # 1906 "05type.c"
                        if(_if_conditional444=var_name_between_brace_254&&*info->p==41,                        _if_conditional444) {
                            # 1907 "05type.c"
                            info->p++;
                            # 1908 "05type.c"
                            skip_spaces_and_lf(info);
                        }
                        # 1922 "05type.c"
                        # 1911 "05type.c"
                        if(_if_conditional445=*info->p==58,                        _if_conditional445) {
                            # 1912 "05type.c"
                            info->p++;
                            # 1913 "05type.c"
                            skip_spaces_and_lf(info);
                            # 1915 "05type.c"
                            no_comma_298=info->no_comma;
                            # 1916 "05type.c"
                            info->no_comma=(_Bool)1;
                            # 1917 "05type.c"
                            node_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=expression_v13(info))));
                            if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1918 "05type.c"
                            info->no_comma=no_comma_298;
                            # 1920 "05type.c"
                            __dec_obj164=type_248->mSizeNum;
                            type_248->mSizeNum=(struct sNode*)come_increment_ref_count(node_299);
                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_294) { exp_294 = come_decrement_ref_count2(exp_294, ((struct sNode*)exp_294)->finalize, ((struct sNode*)exp_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 2090 "05type.c"
                    # 1925 "05type.c"
                    if(_if_conditional446=map$2charphsTypephp_operator_load_element(info->types,type_name_197),                    _if_conditional446) {
                        # 1926 "05type.c"
                        __dec_obj165=type_248;
                        type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_197)))));
                        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value364,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1927 "05type.c"
                        type_248->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_248->mClass->mName), "05type.c", 1927, 59));
                        # 1928 "05type.c"
                        __dec_obj166=type_248->mOriginalTypeName;
                        type_248->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value365=__builtin_string(type_name_197))));
                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 1929 "05type.c"
                        type_248->mOriginalTypeNamePointerNum=pointer_num_243;
                        # 1931 "05type.c"
                        type_248->mConstant=type_248->mConstant||constant_199;
                        # 1932 "05type.c"
                        __dec_obj167=type_248->mAlignas;
                        type_248->mAlignas=(struct sNode*)come_increment_ref_count(alignas__215);
                        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                        # 1933 "05type.c"
                        type_248->mComeMemCore=type_248->mComeMemCore||come_mem_core__214;
                        # 1934 "05type.c"
                        type_248->mRegister=register__202;
                        # 1935 "05type.c"
                        type_248->mUnsigned=type_248->mUnsigned||unsigned__203;
                        # 1936 "05type.c"
                        type_248->mVolatile=volatile__201;
                        # 1937 "05type.c"
                        type_248->mStatic=type_248->mStatic||static__200;
                        # 1938 "05type.c"
                        type_248->mRecord=type_248->mRecord||record__198;
                        # 1939 "05type.c"
                        type_248->mExtern=type_248->mExtern||extern__212;
                        # 1940 "05type.c"
                        type_248->mInline=type_248->mInline||inline__213;
                        # 1941 "05type.c"
                        type_248->mRestrict=type_248->mRestrict||restrict__207;
                        # 1942 "05type.c"
                        type_248->mLongLong=type_248->mLongLong||long_long_205;
                        # 1943 "05type.c"
                        type_248->mLong=type_248->mLong||long__204;
                        # 1944 "05type.c"
                        type_248->mShort=type_248->mShort||short__206;
                        # 1945 "05type.c"
                        type_248->mPointerNum+=pointer_num_243;
                        # 1946 "05type.c"
                        type_248->mHeap=type_248->mHeap||heap_244;
                    }
                    else {
                        # 2090 "05type.c"
                        # 1948 "05type.c"
                        if(_if_conditional447=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_197)),                        _if_conditional447) {
                            # 1955 "05type.c"
                            for(                            i_300=0;                            i_300<list$1charph_length(info->generics_type_names);                            i_300++                            ){
                                # 1953 "05type.c"
                                # 1950 "05type.c"
                                if(_if_conditional448=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_300), "05type.c", 1950, 60)),type_name_197),                                _if_conditional448) {
                                    # 1951 "05type.c"
                                    __dec_obj168=type_248;
                                    type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value368=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value366=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1951, "sType")))),((char*)(right_value367=xsprintf("generics_type%d",i_300))),(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value366,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value368,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            # 1955 "05type.c"
                            type_248->mConstant=type_248->mConstant||constant_199;
                            # 1956 "05type.c"
                            __dec_obj169=type_248->mAlignas;
                            type_248->mAlignas=(struct sNode*)come_increment_ref_count(alignas__215);
                            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                            # 1957 "05type.c"
                            type_248->mComeMemCore=type_248->mComeMemCore||come_mem_core__214;
                            # 1958 "05type.c"
                            type_248->mRegister=register__202;
                            # 1959 "05type.c"
                            type_248->mUnsigned=type_248->mUnsigned||unsigned__203;
                            # 1960 "05type.c"
                            type_248->mVolatile=volatile__201;
                            # 1961 "05type.c"
                            type_248->mStatic=type_248->mStatic||static__200;
                            # 1962 "05type.c"
                            type_248->mRecord=type_248->mRecord||record__198;
                            # 1963 "05type.c"
                            type_248->mExtern=type_248->mExtern||extern__212;
                            # 1964 "05type.c"
                            type_248->mInline=type_248->mInline||inline__213;
                            # 1965 "05type.c"
                            type_248->mRestrict=type_248->mRestrict||restrict__207;
                            # 1966 "05type.c"
                            type_248->mLongLong=type_248->mLongLong||long_long_205;
                            # 1967 "05type.c"
                            type_248->mLong=type_248->mLong||long__204;
                            # 1968 "05type.c"
                            type_248->mShort=type_248->mShort||short__206;
                            # 1969 "05type.c"
                            type_248->mPointerNum+=pointer_num_243;
                            # 1970 "05type.c"
                            type_248->mHeap=type_248->mHeap||heap_244;
                        }
                        else {
                            # 2090 "05type.c"
                            # 1972 "05type.c"
                            if(_if_conditional449=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_197)),                            _if_conditional449) {
                                # 1979 "05type.c"
                                for(                                i_301=0;                                i_301<list$1charph_length(info->method_generics_type_names);                                i_301++                                ){
                                    # 1977 "05type.c"
                                    # 1974 "05type.c"
                                    if(_if_conditional450=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_301), "05type.c", 1974, 61)),type_name_197),                                    _if_conditional450) {
                                        # 1975 "05type.c"
                                        __dec_obj170=type_248;
                                        type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value369=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1975, "sType")))),((char*)(right_value370=xsprintf("mgenerics_type%d",i_301))),(_Bool)0,info))));
                                        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value369,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value371,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                # 1979 "05type.c"
                                type_248->mConstant=type_248->mConstant||constant_199;
                                # 1980 "05type.c"
                                __dec_obj171=type_248->mAlignas;
                                type_248->mAlignas=(struct sNode*)come_increment_ref_count(alignas__215);
                                if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                                # 1981 "05type.c"
                                type_248->mComeMemCore=type_248->mComeMemCore||come_mem_core__214;
                                # 1982 "05type.c"
                                type_248->mRegister=register__202;
                                # 1983 "05type.c"
                                type_248->mUnsigned=type_248->mUnsigned||unsigned__203;
                                # 1984 "05type.c"
                                type_248->mVolatile=volatile__201;
                                # 1985 "05type.c"
                                type_248->mStatic=type_248->mStatic||static__200;
                                # 1986 "05type.c"
                                type_248->mRecord=type_248->mRecord||record__198;
                                # 1987 "05type.c"
                                type_248->mExtern=type_248->mExtern||extern__212;
                                # 1988 "05type.c"
                                type_248->mInline=type_248->mInline||inline__213;
                                # 1989 "05type.c"
                                type_248->mRestrict=type_248->mRestrict||restrict__207;
                                # 1990 "05type.c"
                                type_248->mLongLong=type_248->mLongLong||long_long_205;
                                # 1991 "05type.c"
                                type_248->mLong=type_248->mLong||long__204;
                                # 1992 "05type.c"
                                type_248->mShort=type_248->mShort||short__206;
                                # 1993 "05type.c"
                                type_248->mPointerNum+=pointer_num_243;
                                # 1994 "05type.c"
                                type_248->mHeap=type_248->mHeap||heap_244;
                            }
                            else {
                                # 2090 "05type.c"
                                # 1996 "05type.c"
                                if(_if_conditional451=*info->p==60,                                _if_conditional451) {
                                    # 1997 "05type.c"
                                    info->p++;
                                    # 1998 "05type.c"
                                    skip_spaces_and_lf(info);
                                    # 2005 "05type.c"
                                    # 2000 "05type.c"
                                    if(_if_conditional452=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_197)==((void*)0),                                    _if_conditional452) {
                                        # 2002 "05type.c"
                                        __result166__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value373=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value372=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2002, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value372,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value373,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        return __result166__;
                                    }
                                    # 2005 "05type.c"
                                    __dec_obj172=type_248;
                                    type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value375=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value374=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2005, "sType")))),type_name_197,(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value374,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value375,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 2032 "05type.c"
                                    while(_while_condtional47=(_Bool)1,                                    _while_condtional47) {
                                        # 2010 "05type.c"
                                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value376=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_302=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                        var_name_303=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                        err_304=multiple_assign_var5->v3;
                                        come_call_finalizer3(right_value376,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 2014 "05type.c"
                                        # 2010 "05type.c"
                                        if(_if_conditional453=!err_304,                                        _if_conditional453) {
                                            # 2011 "05type.c"
                                            __result167__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value378=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value377=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2011, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer3(generics_type_302,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_303 = come_decrement_ref_count2(var_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value377,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value378,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            return __result167__;
                                        }
                                        # 2014 "05type.c"
                                        list$1sTypeph_push_back(type_248->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_302));
                                        # 2030 "05type.c"
                                        # 2016 "05type.c"
                                        if(_if_conditional454=*info->p==44,                                        _if_conditional454) {
                                            # 2017 "05type.c"
                                            info->p++;
                                            # 2018 "05type.c"
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            # 2030 "05type.c"
                                            # 2020 "05type.c"
                                            if(_if_conditional455=*info->p==62,                                            _if_conditional455) {
                                                # 2021 "05type.c"
                                                info->p++;
                                                # 2022 "05type.c"
                                                skip_spaces_and_lf(info);
                                                # 2024 "05type.c"
                                                come_call_finalizer3(generics_type_302,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_303 = come_decrement_ref_count2(var_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                # 2027 "05type.c"
                                                err_msg(info,"invalid generics type\n");
                                                # 2028 "05type.c"
                                                __result168__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value380=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value379=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2028, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer3(generics_type_302,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_303 = come_decrement_ref_count2(var_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value379,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value380,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                return __result168__;
                                            }
                                        }
                                        come_call_finalizer3(generics_type_302,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_303 = come_decrement_ref_count2(var_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2044 "05type.c"
                                    # 2032 "05type.c"
                                    if(_if_conditional456=is_contained_generics_class(type_248,info),                                    _if_conditional456) {
                                        # 2033 "05type.c"
                                        __dec_obj173=type_248;
                                        type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value381=solve_generics(type_248,info->generics_type,info))));
                                        come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value381,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        # 2042 "05type.c"
                                        # 2036 "05type.c"
                                        if(_if_conditional457=!output_generics_struct(type_248,type_248,info),                                        _if_conditional457) {
                                            # 2038 "05type.c"
                                            new_name_305=(char*)come_increment_ref_count(((char*)(right_value382=create_generics_name(type_248,info))));
                                            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 2039 "05type.c"
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_305);
                                            # 2040 "05type.c"
                                            exit(7);
                                            new_name_305 = come_decrement_ref_count2(new_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 2044 "05type.c"
                                    type_248->mConstant=type_248->mConstant||constant_199;
                                    # 2045 "05type.c"
                                    __dec_obj174=type_248->mAlignas;
                                    type_248->mAlignas=(struct sNode*)come_increment_ref_count(alignas__215);
                                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 2046 "05type.c"
                                    type_248->mComeMemCore=type_248->mComeMemCore||come_mem_core__214;
                                    # 2047 "05type.c"
                                    type_248->mRegister=register__202;
                                    # 2048 "05type.c"
                                    type_248->mUnsigned=type_248->mUnsigned||unsigned__203;
                                    # 2049 "05type.c"
                                    type_248->mVolatile=volatile__201;
                                    # 2050 "05type.c"
                                    type_248->mStatic=type_248->mStatic||static__200;
                                    # 2051 "05type.c"
                                    type_248->mRecord=type_248->mRecord||record__198;
                                    # 2052 "05type.c"
                                    type_248->mExtern=type_248->mExtern||extern__212;
                                    # 2053 "05type.c"
                                    type_248->mInline=type_248->mInline||inline__213;
                                    # 2054 "05type.c"
                                    type_248->mRestrict=type_248->mRestrict||restrict__207;
                                    # 2055 "05type.c"
                                    type_248->mLongLong=type_248->mLongLong||long_long_205;
                                    # 2056 "05type.c"
                                    type_248->mLong=type_248->mLong||long__204;
                                    # 2057 "05type.c"
                                    type_248->mShort=type_248->mShort||short__206;
                                    # 2058 "05type.c"
                                    type_248->mPointerNum+=pointer_num_243;
                                    # 2059 "05type.c"
                                    type_248->mHeap=type_248->mHeap||heap_244;
                                }
                                else {
                                    # 2070 "05type.c"
                                    # 2062 "05type.c"
                                    if(struct__208) {
                                        # 2063 "05type.c"
                                        klass_306=map$2charphsClassphp_operator_load_element(info->classes,type_name_197);
                                        # 2068 "05type.c"
                                        # 2065 "05type.c"
                                        if(_if_conditional459=klass_306==((void*)0)&&*info->p!=60,                                        _if_conditional459) {
                                            # 2066 "05type.c"
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_197),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value390=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value389=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2066, "sClass")))),type_name_197,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer3(right_value389,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value390,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    # 2070 "05type.c"
                                    __dec_obj175=type_248;
                                    type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value392=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value391=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2070, "sType")))),type_name_197,(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value391,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value392,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 2072 "05type.c"
                                    type_248->mConstant=type_248->mConstant||constant_199;
                                    # 2073 "05type.c"
                                    __dec_obj176=type_248->mAlignas;
                                    type_248->mAlignas=(struct sNode*)come_increment_ref_count(alignas__215);
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 2074 "05type.c"
                                    type_248->mComeMemCore=type_248->mComeMemCore||come_mem_core__214;
                                    # 2075 "05type.c"
                                    type_248->mRegister=register__202;
                                    # 2076 "05type.c"
                                    type_248->mUnsigned=type_248->mUnsigned||unsigned__203;
                                    # 2077 "05type.c"
                                    type_248->mVolatile=volatile__201;
                                    # 2078 "05type.c"
                                    type_248->mStatic=type_248->mStatic||static__200;
                                    # 2079 "05type.c"
                                    type_248->mRecord=type_248->mRecord||record__198;
                                    # 2080 "05type.c"
                                    type_248->mExtern=type_248->mExtern||extern__212;
                                    # 2081 "05type.c"
                                    type_248->mInline=type_248->mInline||inline__213;
                                    # 2082 "05type.c"
                                    type_248->mRestrict=type_248->mRestrict||restrict__207;
                                    # 2083 "05type.c"
                                    type_248->mLongLong=type_248->mLongLong||long_long_205;
                                    # 2084 "05type.c"
                                    type_248->mLong=type_248->mLong||long__204;
                                    # 2085 "05type.c"
                                    type_248->mShort=type_248->mShort||short__206;
                                    # 2086 "05type.c"
                                    type_248->mPointerNum+=pointer_num_243;
                                    # 2087 "05type.c"
                                    type_248->mHeap=type_248->mHeap||heap_244;
                                }
                            }
                        }
                    }
                    # 2090 "05type.c"
                    skip_pointer_attribute(info);
                    # 2104 "05type.c"
                    while(_while_condtional56=*info->p==42,                    _while_condtional56) {
                        # 2093 "05type.c"
                        info->p++;
                        # 2094 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2096 "05type.c"
                        skip_pointer_attribute(info);
                        # 2098 "05type.c"
                        type_248->mPointerNum++;
                        # 2102 "05type.c"
                        # 2099 "05type.c"
                        if(type_248->mNoSolvedGenericsType->v1) {
                            # 2100 "05type.c"
                            type_248->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2114 "05type.c"
                    # 2104 "05type.c"
                    if(_if_conditional508=*info->p==37,                    _if_conditional508) {
                        # 2105 "05type.c"
                        info->p++;
                        # 2106 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2108 "05type.c"
                        type_248->mHeap=(_Bool)1;
                        # 2112 "05type.c"
                        # 2109 "05type.c"
                        if(type_248->mNoSolvedGenericsType->v1) {
                            # 2110 "05type.c"
                            type_248->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2125 "05type.c"
                    # 2114 "05type.c"
                    if(_if_conditional510=*info->p==38,                    _if_conditional510) {
                        # 2115 "05type.c"
                        info->p++;
                        # 2116 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2118 "05type.c"
                        type_248->mNoHeap=(_Bool)1;
                        # 2123 "05type.c"
                        # 2120 "05type.c"
                        if(type_248->mNoSolvedGenericsType->v1) {
                            # 2121 "05type.c"
                            type_248->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    # 2138 "05type.c"
                    # 2125 "05type.c"
                    if(_if_conditional512=*info->p==63,                    _if_conditional512) {
                        # 2126 "05type.c"
                        info->p++;
                        # 2136 "05type.c"
                        # 2128 "05type.c"
                        if(_if_conditional513=*info->p==63,                        _if_conditional513) {
                            # 2129 "05type.c"
                            info->p++;
                            # 2130 "05type.c"
                            type_248->mGuardValue=(_Bool)1;
                        }
                        else {
                            # 2133 "05type.c"
                            type_248->mNullValue=(_Bool)1;
                        }
                        # 2136 "05type.c"
                        skip_spaces_and_lf(info);
                    }
                    # 2145 "05type.c"
                    # 2138 "05type.c"
                    if(_if_conditional514=*info->p==96,                    _if_conditional514) {
                        # 2139 "05type.c"
                        info->p++;
                        # 2140 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2142 "05type.c"
                        type_248->mNoCallingDestructor=(_Bool)1;
                    }
                    # 2145 "05type.c"
                    skip_pointer_attribute(info);
                    # 2160 "05type.c"
                    while(_while_condtional57=*info->p==42,                    _while_condtional57) {
                        # 2148 "05type.c"
                        info->p++;
                        # 2149 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2151 "05type.c"
                        skip_pointer_attribute(info);
                        # 2153 "05type.c"
                        type_248->mPointerNum++;
                        # 2158 "05type.c"
                        # 2155 "05type.c"
                        if(type_248->mNoSolvedGenericsType->v1) {
                            # 2156 "05type.c"
                            type_248->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    # 2170 "05type.c"
                    # 2160 "05type.c"
                    if(_if_conditional516=*info->p==37,                    _if_conditional516) {
                        # 2161 "05type.c"
                        info->p++;
                        # 2162 "05type.c"
                        skip_spaces_and_lf(info);
                        # 2164 "05type.c"
                        type_248->mHeap=(_Bool)1;
                        # 2168 "05type.c"
                        # 2165 "05type.c"
                        if(type_248->mNoSolvedGenericsType->v1) {
                            # 2166 "05type.c"
                            type_248->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    # 2210 "05type.c"
                    # 2170 "05type.c"
                    if(_if_conditional518=parse_multiple_type&&*info->p==44,                    _if_conditional518) {
                        # 2171 "05type.c"
                        types_351=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value394=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value393=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2171, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value393,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value394,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2173 "05type.c"
                        list$1sTypeph_push_back(types_351,(struct sType*)come_increment_ref_count(((struct sType*)(right_value395=sType_clone(type_248)))));
                        come_call_finalizer3(right_value395,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2188 "05type.c"
                        while(_while_condtional58=*info->p==44,                        _while_condtional58) {
                            # 2176 "05type.c"
                            info->p++;
                            # 2177 "05type.c"
                            skip_spaces_and_lf(info);
                            # 2179 "05type.c"
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value396=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_352=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_353=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_354=multiple_assign_var6->v3;
                            come_call_finalizer3(right_value396,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 2185 "05type.c"
                            # 2181 "05type.c"
                            if(_if_conditional519=!err_354,                            _if_conditional519) {
                                # 2182 "05type.c"
                                __result193__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value398=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value397=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2182, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer3(type2_352,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(types_351,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value397,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value398,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                return __result193__;
                            }
                            # 2185 "05type.c"
                            list$1sTypeph_push_back(types_351,(struct sType*)come_increment_ref_count(((struct sType*)(right_value399=sType_clone(type2_352)))));
                            come_call_finalizer3(right_value399,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_352,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_353 = come_decrement_ref_count2(name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2188 "05type.c"
                        num_tuples_355=list$1sTypeph_length(types_351);
                        # 2190 "05type.c"
                        __dec_obj177=type_248;
                        type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value402=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value400=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2190, "sType")))),((char*)(right_value401=xsprintf("tuple%d",num_tuples_355))),(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value400,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value402,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 2191 "05type.c"
                        type_248->mPointerNum++;
                        # 2192 "05type.c"
                        type_248->mHeap=(_Bool)1;
                        # 2198 "05type.c"
                        for(                        o2_saved_356=(struct list$1sTypeph*)come_increment_ref_count((types_351)),it_357=list$1sTypeph_begin((o2_saved_356));                        !list$1sTypeph_end((o2_saved_356));                        it_357=list$1sTypeph_next((o2_saved_356))                        ){
                            # 2195 "05type.c"
                            list$1sTypeph_push_back(type_248->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value403=sType_clone(it_357)))));
                            come_call_finalizer3(right_value403,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer3(o2_saved_356,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 2209 "05type.c"
                        # 2198 "05type.c"
                        if(_if_conditional520=is_contained_generics_class(type_248,info),                        _if_conditional520) {
                            # 2199 "05type.c"
                            __dec_obj178=type_248;
                            type_248=(struct sType*)come_increment_ref_count(((struct sType*)(right_value404=solve_generics(type_248,info->generics_type,info))));
                            come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value404,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2208 "05type.c"
                            # 2202 "05type.c"
                            if(_if_conditional521=!output_generics_struct(type_248,type_248,info),                            _if_conditional521) {
                                # 2204 "05type.c"
                                new_name_358=(char*)come_increment_ref_count(((char*)(right_value405=create_generics_name(type_248,info))));
                                right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 2205 "05type.c"
                                printf("output generics is failed(%s)\n",new_name_358);
                                # 2206 "05type.c"
                                exit(9);
                                new_name_358 = come_decrement_ref_count2(new_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer3(types_351,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    # 2301 "05type.c"
                    # 2259 "05type.c"
                    if(parse_variable_name) {
                        # 2260 "05type.c"
                        parse_sharp_v5(info);
                        # 2267 "05type.c"
                        # 2262 "05type.c"
                        if(_if_conditional523=var_name_between_brace_254&&*info->p==40,                        _if_conditional523) {
                            # 2263 "05type.c"
                            info->p++;
                            # 2264 "05type.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2284 "05type.c"
                        # 2267 "05type.c"
                        if(_if_conditional524=*info->p==58,                        _if_conditional524) {
                            # 2268 "05type.c"
                            __dec_obj179=var_name_249;
                            var_name_249=(char*)come_increment_ref_count(((char*)(right_value406=__builtin_string(""))));
                            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            # 2284 "05type.c"
                            # 2270 "05type.c"
                            if(anonymous_name_217) {
                                # 2271 "05type.c"
                                # 2272 "05type.c"
                                num_anonymous_var_name_359++;
                                # 2273 "05type.c"
                                __dec_obj180=var_name_249;
                                var_name_249=(char*)come_increment_ref_count(((char*)(right_value407=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_359))));
                                __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                # 2284 "05type.c"
                                # 2275 "05type.c"
                                if(_if_conditional526=xisalnum(*info->p)||*info->p==95,                                _if_conditional526) {
                                    # 2276 "05type.c"
                                    __dec_obj181=var_name_249;
                                    var_name_249=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 2276, 62),__exception_result_var_b48=((char*)(right_value408=parse_word(info))), come_pop_stackframe(), __exception_result_var_b48));
                                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    # 2279 "05type.c"
                                    # 2280 "05type.c"
                                    num_anonymous_var_name_360++;
                                    # 2281 "05type.c"
                                    __dec_obj182=var_name_249;
                                    var_name_249=(char*)come_increment_ref_count(((char*)(right_value409=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_360))));
                                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        # 2289 "05type.c"
                        # 2284 "05type.c"
                        if(_if_conditional527=var_name_between_brace_254&&*info->p==41,                        _if_conditional527) {
                            # 2285 "05type.c"
                            info->p++;
                            # 2286 "05type.c"
                            skip_spaces_and_lf(info);
                        }
                        # 2300 "05type.c"
                        # 2289 "05type.c"
                        if(_if_conditional528=*info->p==58,                        _if_conditional528) {
                            # 2290 "05type.c"
                            info->p++;
                            # 2291 "05type.c"
                            skip_spaces_and_lf(info);
                            # 2293 "05type.c"
                            no_comma_361=info->no_comma;
                            # 2294 "05type.c"
                            info->no_comma=(_Bool)1;
                            # 2295 "05type.c"
                            node_362=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=expression_v13(info))));
                            if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2296 "05type.c"
                            info->no_comma=no_comma_361;
                            # 2298 "05type.c"
                            __dec_obj183=type_248->mSizeNum;
                            type_248->mSizeNum=(struct sNode*)come_increment_ref_count(node_362);
                            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    # 2302 "05type.c"
    parse_sharp_v5(info);
    # 2327 "05type.c"
    while(_while_condtional59=*info->p==91,    _while_condtional59) {
        # 2305 "05type.c"
        info->p++;
        # 2306 "05type.c"
        skip_spaces_and_lf(info);
        # 2307 "05type.c"
        parse_sharp_v5(info);
        # 2309 "05type.c"
        skip_pointer_attribute(info);
        # 2319 "05type.c"
        # 2311 "05type.c"
        if(_if_conditional529=*info->p==93,        _if_conditional529) {
            # 2312 "05type.c"
            info->p++;
            # 2313 "05type.c"
            skip_spaces_and_lf(info);
            # 2315 "05type.c"
            type_248->mArrayPointerType=(_Bool)1;
            # 2316 "05type.c"
            type_248->mPointerNum++;
            # 2317 "05type.c"
            break;
        }
        # 2319 "05type.c"
        parse_sharp_v5(info);
        # 2321 "05type.c"
        node_363=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=expression_v13(info))));
        if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 2322 "05type.c"
        list$1sNodeph_push_back(type_248->mArrayNum,(struct sNode*)come_increment_ref_count(node_363));
        # 2323 "05type.c"
        parse_sharp_v5(info);
        # 2325 "05type.c"
        (come_push_stackframe("05type.c", 2325, 63),__exception_result_var_b49=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b49);
        if(node_363) { node_363 = come_decrement_ref_count2(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 2327 "05type.c"
    asm_name_364=(char*)come_increment_ref_count(((char*)(right_value412=parse_attribute(info))));
    right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2329 "05type.c"
    __dec_obj184=type_248->mAsmName;
    type_248->mAsmName=(char*)come_increment_ref_count(asm_name_364);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 2331 "05type.c"
    parse_sharp_v5(info);
    # 2333 "05type.c"
    __result194__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value414=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value413=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2333, "tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_248),(char*)come_increment_ref_count(var_name_249),(_Bool)1)));
    type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_364 = come_decrement_ref_count2(asm_name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value413,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value414,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result194__;
    type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__215) { alignas__215 = come_decrement_ref_count2(alignas__215, ((struct sNode*)alignas__215)->finalize, ((struct sNode*)alignas__215)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_249 = come_decrement_ref_count2(var_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_364 = come_decrement_ref_count2(asm_name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_269;
unsigned int hash_270;
unsigned int it_271;
_Bool _while_condtional45;
_Bool _if_conditional408;
_Bool _if_conditional409;
struct sType* __result145__;
_Bool _if_conditional410;
_Bool _if_conditional411;
struct sType* __result146__;
struct sType* __result147__;
struct sType* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_269, 0, sizeof(struct sType*));
memset(&hash_270, 0, sizeof(unsigned int));
memset(&it_271, 0, sizeof(unsigned int));
                # 1519 "./neo-c.h"
                # 1520 "./neo-c.h"
                memset(&default_value_269,0,sizeof(struct sType*));
                # 1522 "./neo-c.h"
                hash_270=string_get_hash_key(((char*)key))%self->size;
                # 1523 "./neo-c.h"
                it_271=hash_270;
                # 1547 "./neo-c.h"
                while(_while_condtional45=(_Bool)1,                _while_condtional45) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional408=self->item_existance[it_271],                    _if_conditional408) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional409=string_equals(self->keys[it_271],key),                        _if_conditional409) {
                            # 1530 "./neo-c.h"
                            __result145__ = __result_obj__ = self->items[it_271];
                            come_call_finalizer3(default_value_269,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result145__;
                        }
                        # 1533 "./neo-c.h"
                        it_271++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional410=it_271>=self->size,                        _if_conditional410) {
                            # 1536 "./neo-c.h"
                            it_271=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional411=it_271==hash_270,                            _if_conditional411) {
                                # 1539 "./neo-c.h"
                                __result146__ = __result_obj__ = default_value_269;
                                come_call_finalizer3(default_value_269,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result146__;
                            }
                        }
                    }
                    else {
                        # 1543 "./neo-c.h"
                        __result147__ = __result_obj__ = default_value_269;
                        come_call_finalizer3(default_value_269,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result147__;
                    }
                }
                # 1547 "./neo-c.h"
                __result148__ = __result_obj__ = default_value_269;
                come_call_finalizer3(default_value_269,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result148__;
                come_call_finalizer3(default_value_269,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_274;
_Bool _if_conditional417;
_Bool __result156__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_274, 0, sizeof(char*));
                    # 733 "./neo-c.h"
                    for(                    it_274=list$1charph_begin(self);                    !list$1charph_end(self);                    it_274=list$1charph_next(self)                    ){
                        # 731 "./neo-c.h"
                        # 728 "./neo-c.h"
                        if(_if_conditional417=string_operator_equals(it_274,item),                        _if_conditional417) {
                            # 729 "./neo-c.h"
                            __result156__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result156__;
                        }
                    }
                    # 733 "./neo-c.h"
                    __result157__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result157__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional413;
char* result_272;
char* __result149__;
_Bool _if_conditional414;
char* __result150__;
char* result_273;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_272, 0, sizeof(char*));
memset(&result_273, 0, sizeof(char*));
                        # 281 "./neo-c.h"
                        # 276 "./neo-c.h"
                        if(_if_conditional413=self==((void*)0),                        _if_conditional413) {
                            # 277 "./neo-c.h"
                            # 278 "./neo-c.h"
                            memset(&result_272,0,sizeof(char*));
                            # 279 "./neo-c.h"
                            __result149__ = __result_obj__ = result_272;
                            return __result149__;
                        }
                        # 281 "./neo-c.h"
                        self->it=self->head;
                        # 287 "./neo-c.h"
                        # 283 "./neo-c.h"
                        if(self->it) {
                            # 284 "./neo-c.h"
                            __result150__ = __result_obj__ = self->it->item;
                            return __result150__;
                        }
                        # 287 "./neo-c.h"
                        # 288 "./neo-c.h"
                        memset(&result_273,0,sizeof(char*));
                        # 289 "./neo-c.h"
                        __result151__ = __result_obj__ = result_273;
                        return __result151__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "./neo-c.h"
                        __result152__ = self==((void*)0)||self->it==((void*)0);
                        return __result152__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional415;
char* result_275;
char* __result153__;
_Bool _if_conditional416;
char* __result154__;
char* result_276;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_275, 0, sizeof(char*));
memset(&result_276, 0, sizeof(char*));
                        # 299 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(_if_conditional415=self==((void*)0)||self->it==((void*)0),                        _if_conditional415) {
                            # 294 "./neo-c.h"
                            # 295 "./neo-c.h"
                            memset(&result_275,0,sizeof(char*));
                            # 296 "./neo-c.h"
                            __result153__ = __result_obj__ = result_275;
                            return __result153__;
                        }
                        # 299 "./neo-c.h"
                        self->it=self->it->next;
                        # 305 "./neo-c.h"
                        # 301 "./neo-c.h"
                        if(self->it) {
                            # 302 "./neo-c.h"
                            __result154__ = __result_obj__ = self->it->item;
                            return __result154__;
                        }
                        # 305 "./neo-c.h"
                        # 306 "./neo-c.h"
                        memset(&result_276,0,sizeof(char*));
                        # 307 "./neo-c.h"
                        __result155__ = __result_obj__ = result_276;
                        return __result155__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional419;
int __result158__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 354 "./neo-c.h"
                        # 351 "./neo-c.h"
                        if(_if_conditional419=self==((void*)0),                        _if_conditional419) {
                            # 352 "./neo-c.h"
                            __result158__ = 0;
                            return __result158__;
                        }
                        # 354 "./neo-c.h"
                        __result159__ = self->len;
                        return __result159__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional420;
struct list_item$1charph* it_278;
int i_279;
_Bool _while_condtional46;
_Bool _if_conditional421;
char* __result160__;
char* default_value_280;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_278, 0, sizeof(struct list_item$1charph*));
memset(&i_279, 0, sizeof(int));
memset(&default_value_280, 0, sizeof(char*));
                            # 673 "./neo-c.h"
                            # 669 "./neo-c.h"
                            if(_if_conditional420=position<0,                            _if_conditional420) {
                                # 670 "./neo-c.h"
                                position+=self->len;
                            }
                            # 673 "./neo-c.h"
                            it_278=self->head;
                            # 674 "./neo-c.h"
                            i_279=0;
                            # 681 "./neo-c.h"
                            while(_while_condtional46=it_278!=((void*)0),                            _while_condtional46) {
                                # 679 "./neo-c.h"
                                # 676 "./neo-c.h"
                                if(_if_conditional421=position==i_279,                                _if_conditional421) {
                                    # 677 "./neo-c.h"
                                    __result160__ = __result_obj__ = it_278->item;
                                    return __result160__;
                                }
                                # 679 "./neo-c.h"
                                it_278=it_278->next;
                                # 680 "./neo-c.h"
                                i_279++;
                            }
                            # 683 "./neo-c.h"
                            # 684 "./neo-c.h"
                            memset(&default_value_280,0,sizeof(char*));
                            # 685 "./neo-c.h"
                            __result161__ = __result_obj__ = default_value_280;
                            default_value_280 = come_decrement_ref_count2(default_value_280, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result161__;
                            default_value_280 = come_decrement_ref_count2(default_value_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj143;
struct tuple1$1sTypeph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1710 "./neo-c.h"
                __dec_obj143=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 1712 "./neo-c.h"
                __result162__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result162__;
                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
char* __dec_obj158;
struct tuple3$3sTypepcharphbool* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1771 "./neo-c.h"
                            self->v1=v1;
                            # 1772 "./neo-c.h"
                            __dec_obj158=self->v2;
                            self->v2=(char*)come_increment_ref_count(v2);
                            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 1773 "./neo-c.h"
                            self->v3=v3;
                            # 1775 "./neo-c.h"
                            __result164__ = __result_obj__ = self;
                            come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result164__;
                            come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
void* __result_obj__;
_Bool _if_conditional436;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "tuple3$3sTypepcharphboolp_finalize"
                                # 0 "tuple3$3sTypepcharphboolp_finalize"
                                if(_if_conditional436=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional436) {
                                    # 0 "tuple3$3sTypepcharphboolp_finalize"
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional437;
_Bool _if_conditional438;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "CVALUE_finalize"
                        # 0 "CVALUE_finalize"
                        if(_if_conditional437=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional437) {
                            # 0 "CVALUE_finalize"
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "CVALUE_finalize"
                        # 1 "CVALUE_finalize"
                        if(_if_conditional438=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional438) {
                            # 1 "CVALUE_finalize"
                            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional460;
unsigned int hash_324;
unsigned int it_325;
_Bool _while_condtional50;
_Bool _if_conditional472;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
_Bool same_key_exist_342;
char* it2_345;
_Bool _if_conditional503;
_Bool _if_conditional504;
struct map$2charphsClassph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_324, 0, sizeof(unsigned int));
memset(&it_325, 0, sizeof(unsigned int));
memset(&same_key_exist_342, 0, sizeof(_Bool));
memset(&it2_345, 0, sizeof(char*));
                                                # 1368 "./neo-c.h"
                                                # 1365 "./neo-c.h"
                                                if(_if_conditional460=self->len*10>=self->size,                                                _if_conditional460) {
                                                    # 1366 "./neo-c.h"
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                # 1368 "./neo-c.h"
                                                hash_324=string_get_hash_key(key)%self->size;
                                                # 1369 "./neo-c.h"
                                                it_325=hash_324;
                                                # 1427 "./neo-c.h"
                                                while(_while_condtional50=(_Bool)1,                                                _while_condtional50) {
                                                    # 1425 "./neo-c.h"
                                                    # 1372 "./neo-c.h"
                                                    if(_if_conditional472=self->item_existance[it_325],                                                    _if_conditional472) {
                                                        # 1395 "./neo-c.h"
                                                        # 1374 "./neo-c.h"
                                                        if(_if_conditional473=string_equals(self->keys[it_325],key),                                                        _if_conditional473) {
                                                            # 1385 "./neo-c.h"
                                                            # 1376 "./neo-c.h"
                                                            if(_if_conditional474=1,                                                            _if_conditional474) {
                                                                # 1377 "./neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_325]);
                                                                # 1378 "./neo-c.h"
                                                                self->keys[it_325] = come_decrement_ref_count2(self->keys[it_325], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                # 1379 "./neo-c.h"
                                                                self->keys[it_325]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                # 1382 "./neo-c.h"
                                                                list$1charp_remove(self->key_list,self->keys[it_325]);
                                                                # 1383 "./neo-c.h"
                                                                self->keys[it_325]=key;
                                                            }
                                                            # 1392 "./neo-c.h"
                                                            # 1385 "./neo-c.h"
                                                            if(_if_conditional494=1,                                                            _if_conditional494) {
                                                                # 1386 "./neo-c.h"
                                                                come_call_finalizer3(self->items[it_325],sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                # 1387 "./neo-c.h"
                                                                self->items[it_325]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                # 1390 "./neo-c.h"
                                                                self->items[it_325]=item;
                                                            }
                                                            # 1392 "./neo-c.h"
                                                            break;
                                                        }
                                                        # 1395 "./neo-c.h"
                                                        it_325++;
                                                        # 1405 "./neo-c.h"
                                                        # 1397 "./neo-c.h"
                                                        if(_if_conditional495=it_325>=self->size,                                                        _if_conditional495) {
                                                            # 1398 "./neo-c.h"
                                                            it_325=0;
                                                        }
                                                        else {
                                                            # 1405 "./neo-c.h"
                                                            # 1400 "./neo-c.h"
                                                            if(_if_conditional496=it_325==hash_324,                                                            _if_conditional496) {
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
                                                        self->item_existance[it_325]=(_Bool)1;
                                                        # 1414 "./neo-c.h"
                                                        # 1408 "./neo-c.h"
                                                        if(_if_conditional497=1,                                                        _if_conditional497) {
                                                            # 1409 "./neo-c.h"
                                                            self->keys[it_325]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            # 1412 "./neo-c.h"
                                                            self->keys[it_325]=key;
                                                        }
                                                        # 1421 "./neo-c.h"
                                                        # 1414 "./neo-c.h"
                                                        if(_if_conditional498=1,                                                        _if_conditional498) {
                                                            # 1415 "./neo-c.h"
                                                            self->items[it_325]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            # 1418 "./neo-c.h"
                                                            self->items[it_325]=item;
                                                        }
                                                        # 1421 "./neo-c.h"
                                                        self->len++;
                                                        # 1423 "./neo-c.h"
                                                        break;
                                                    }
                                                }
                                                # 1427 "./neo-c.h"
                                                same_key_exist_342=(_Bool)0;
                                                # 1435 "./neo-c.h"
                                                for(                                                it2_345=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_345=list$1charp_next(self->key_list)                                                ){
                                                    # 1433 "./neo-c.h"
                                                    # 1430 "./neo-c.h"
                                                    if(_if_conditional503=string_equals(it2_345,key),                                                    _if_conditional503) {
                                                        # 1431 "./neo-c.h"
                                                        same_key_exist_342=(_Bool)1;
                                                    }
                                                }
                                                # 1439 "./neo-c.h"
                                                # 1435 "./neo-c.h"
                                                if(_if_conditional504=!same_key_exist_342,                                                _if_conditional504) {
                                                    # 1436 "./neo-c.h"
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                # 1439 "./neo-c.h"
                                                __result192__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result192__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_307;
void* right_value383;
char** keys_308;
void* right_value384;
struct sClass** items_309;
void* right_value385;
_Bool* item_existance_310;
int len_311;
char* it_314;
struct sClass* default_value_317;
struct sClass* it2_320;
unsigned int hash_321;
int n_322;
_Bool _while_condtional49;
_Bool _if_conditional469;
_Bool _if_conditional470;
_Bool _if_conditional471;
struct sClass* default_value_323;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_307, 0, sizeof(int));
right_value383 = (void*)0;
memset(&keys_308, 0, sizeof(char**));
right_value384 = (void*)0;
memset(&items_309, 0, sizeof(struct sClass**));
right_value385 = (void*)0;
memset(&item_existance_310, 0, sizeof(_Bool*));
memset(&len_311, 0, sizeof(int));
memset(&it_314, 0, sizeof(char*));
memset(&default_value_317, 0, sizeof(struct sClass*));
memset(&it2_320, 0, sizeof(struct sClass*));
memset(&hash_321, 0, sizeof(unsigned int));
memset(&n_322, 0, sizeof(int));
memset(&default_value_323, 0, sizeof(struct sClass*));
                                                        # 1312 "./neo-c.h"
                                                        size_307=self->size*10;
                                                        # 1313 "./neo-c.h"
                                                        keys_308=(char**)come_increment_ref_count(((char**)(right_value383=(char**)come_calloc(1, sizeof(char*)*(1*(size_307)), "./neo-c.h", 1313, "char*%"))));
                                                        right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1314 "./neo-c.h"
                                                        items_309=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value384=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_307)), "./neo-c.h", 1314, "sClass*%"))));
                                                        come_call_finalizer3(right_value384,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 1315 "./neo-c.h"
                                                        item_existance_310=(_Bool*)come_increment_ref_count(((_Bool*)(right_value385=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_307)), "./neo-c.h", 1315, "bool"))));
                                                        right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1317 "./neo-c.h"
                                                        len_311=0;
                                                        # 1352 "./neo-c.h"
                                                        for(                                                        it_314=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_314=map$2charphsClassph_next(self)                                                        ){
                                                            # 1320 "./neo-c.h"
                                                            # 1321 "./neo-c.h"
                                                            memset(&default_value_317,0,sizeof(struct sClass*));
                                                            # 1322 "./neo-c.h"
                                                            it2_320=map$2charphsClassph_at(self,it_314,default_value_317);
                                                            # 1323 "./neo-c.h"
                                                            hash_321=string_get_hash_key(it_314)%size_307;
                                                            # 1324 "./neo-c.h"
                                                            n_322=hash_321;
                                                            # 1350 "./neo-c.h"
                                                            while(_while_condtional49=(_Bool)1,                                                            _while_condtional49) {
                                                                # 1349 "./neo-c.h"
                                                                # 1327 "./neo-c.h"
                                                                if(_if_conditional469=item_existance_310[n_322],                                                                _if_conditional469) {
                                                                    # 1329 "./neo-c.h"
                                                                    n_322++;
                                                                    # 1339 "./neo-c.h"
                                                                    # 1331 "./neo-c.h"
                                                                    if(_if_conditional470=n_322>=size_307,                                                                    _if_conditional470) {
                                                                        # 1332 "./neo-c.h"
                                                                        n_322=0;
                                                                    }
                                                                    else {
                                                                        # 1339 "./neo-c.h"
                                                                        # 1334 "./neo-c.h"
                                                                        if(_if_conditional471=n_322==hash_321,                                                                        _if_conditional471) {
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
                                                                    item_existance_310[n_322]=(_Bool)1;
                                                                    # 1342 "./neo-c.h"
                                                                    keys_308[n_322]=it_314;
                                                                    # 1343 "./neo-c.h"
                                                                    # 1344 "./neo-c.h"
                                                                    items_309[n_322]=map$2charphsClassph_at(self,it_314,default_value_323);
                                                                    # 1346 "./neo-c.h"
                                                                    len_311++;
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
                                                        self->keys=keys_308;
                                                        # 1357 "./neo-c.h"
                                                        self->items=items_309;
                                                        # 1358 "./neo-c.h"
                                                        self->item_existance=item_existance_310;
                                                        # 1360 "./neo-c.h"
                                                        self->size=size_307;
                                                        # 1361 "./neo-c.h"
                                                        self->len=len_311;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional461;
char* result_312;
char* __result169__;
_Bool _if_conditional462;
char* __result170__;
char* result_313;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_312, 0, sizeof(char*));
memset(&result_313, 0, sizeof(char*));
                                                            # 1279 "./neo-c.h"
                                                            # 1274 "./neo-c.h"
                                                            if(_if_conditional461=self==((void*)0),                                                            _if_conditional461) {
                                                                # 1275 "./neo-c.h"
                                                                # 1276 "./neo-c.h"
                                                                memset(&result_312,0,sizeof(char*));
                                                                # 1277 "./neo-c.h"
                                                                __result169__ = __result_obj__ = result_312;
                                                                return __result169__;
                                                            }
                                                            # 1279 "./neo-c.h"
                                                            self->key_list->it=self->key_list->head;
                                                            # 1285 "./neo-c.h"
                                                            # 1281 "./neo-c.h"
                                                            if(self->key_list->it) {
                                                                # 1282 "./neo-c.h"
                                                                __result170__ = __result_obj__ = self->key_list->it->item;
                                                                return __result170__;
                                                            }
                                                            # 1285 "./neo-c.h"
                                                            # 1286 "./neo-c.h"
                                                            memset(&result_313,0,sizeof(char*));
                                                            # 1287 "./neo-c.h"
                                                            __result171__ = __result_obj__ = result_313;
                                                            return __result171__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            # 1308 "./neo-c.h"
                                                            __result172__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result172__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional463;
char* result_315;
char* __result173__;
_Bool _if_conditional464;
char* __result174__;
char* result_316;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_315, 0, sizeof(char*));
memset(&result_316, 0, sizeof(char*));
                                                            # 1296 "./neo-c.h"
                                                            # 1291 "./neo-c.h"
                                                            if(_if_conditional463=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional463) {
                                                                # 1292 "./neo-c.h"
                                                                # 1293 "./neo-c.h"
                                                                memset(&result_315,0,sizeof(char*));
                                                                # 1294 "./neo-c.h"
                                                                __result173__ = __result_obj__ = result_315;
                                                                return __result173__;
                                                            }
                                                            # 1296 "./neo-c.h"
                                                            self->key_list->it=self->key_list->it->next;
                                                            # 1302 "./neo-c.h"
                                                            # 1298 "./neo-c.h"
                                                            if(self->key_list->it) {
                                                                # 1299 "./neo-c.h"
                                                                __result174__ = __result_obj__ = self->key_list->it->item;
                                                                return __result174__;
                                                            }
                                                            # 1302 "./neo-c.h"
                                                            # 1303 "./neo-c.h"
                                                            memset(&result_316,0,sizeof(char*));
                                                            # 1304 "./neo-c.h"
                                                            __result175__ = __result_obj__ = result_316;
                                                            return __result175__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_318;
unsigned int it_319;
_Bool _while_condtional48;
_Bool _if_conditional465;
_Bool _if_conditional466;
struct sClass* __result176__;
_Bool _if_conditional467;
_Bool _if_conditional468;
struct sClass* __result177__;
struct sClass* __result178__;
struct sClass* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_318, 0, sizeof(unsigned int));
memset(&it_319, 0, sizeof(unsigned int));
                                                                # 1201 "./neo-c.h"
                                                                hash_318=string_get_hash_key(((char*)key))%self->size;
                                                                # 1202 "./neo-c.h"
                                                                it_319=hash_318;
                                                                # 1226 "./neo-c.h"
                                                                while(_while_condtional48=(_Bool)1,                                                                _while_condtional48) {
                                                                    # 1224 "./neo-c.h"
                                                                    # 1205 "./neo-c.h"
                                                                    if(_if_conditional465=self->item_existance[it_319],                                                                    _if_conditional465) {
                                                                        # 1212 "./neo-c.h"
                                                                        # 1207 "./neo-c.h"
                                                                        if(_if_conditional466=string_equals(self->keys[it_319],key),                                                                        _if_conditional466) {
                                                                            # 1209 "./neo-c.h"
                                                                            __result176__ = __result_obj__ = self->items[it_319];
                                                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result176__;
                                                                        }
                                                                        # 1212 "./neo-c.h"
                                                                        it_319++;
                                                                        # 1220 "./neo-c.h"
                                                                        # 1214 "./neo-c.h"
                                                                        if(_if_conditional467=it_319>=self->size,                                                                        _if_conditional467) {
                                                                            # 1215 "./neo-c.h"
                                                                            it_319=0;
                                                                        }
                                                                        else {
                                                                            # 1220 "./neo-c.h"
                                                                            # 1217 "./neo-c.h"
                                                                            if(_if_conditional468=it_319==hash_318,                                                                            _if_conditional468) {
                                                                                # 1218 "./neo-c.h"
                                                                                __result177__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result177__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 1222 "./neo-c.h"
                                                                        __result178__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result178__;
                                                                    }
                                                                }
                                                                # 1226 "./neo-c.h"
                                                                __result179__ = __result_obj__ = default_value;
                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result179__;
                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_326;
struct list_item$1charp* it_327;
_Bool _while_condtional51;
_Bool _if_conditional475;
struct list$1charp* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_326, 0, sizeof(int));
memset(&it_327, 0, sizeof(struct list_item$1charp*));
                                                                    # 435 "./neo-c.h"
                                                                    it2_326=0;
                                                                    # 436 "./neo-c.h"
                                                                    it_327=self->head;
                                                                    # 447 "./neo-c.h"
                                                                    while(_while_condtional51=it_327!=((void*)0),                                                                    _while_condtional51) {
                                                                        # 442 "./neo-c.h"
                                                                        # 438 "./neo-c.h"
                                                                        if(_if_conditional475=string_equals(it_327->item,item),                                                                        _if_conditional475) {
                                                                            # 439 "./neo-c.h"
                                                                            list$1charp_delete(self,it2_326,it2_326+1);
                                                                            # 440 "./neo-c.h"
                                                                            break;
                                                                        }
                                                                        # 442 "./neo-c.h"
                                                                        it2_326++;
                                                                        # 444 "./neo-c.h"
                                                                        it_327=it_327->next;
                                                                    }
                                                                    # 447 "./neo-c.h"
                                                                    __result183__ = __result_obj__ = self;
                                                                    return __result183__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional476;
_Bool _if_conditional477;
_Bool _if_conditional478;
int tmp_328;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool _if_conditional481;
struct list$1charp* __result180__;
_Bool _if_conditional482;
_Bool _if_conditional483;
struct list_item$1charp* it_331;
int i_332;
_Bool _while_condtional53;
_Bool _if_conditional484;
struct list_item$1charp* prev_it_333;
_Bool _if_conditional485;
_Bool _if_conditional486;
struct list_item$1charp* it_334;
int i_335;
_Bool _while_condtional54;
_Bool _if_conditional487;
_Bool _if_conditional488;
struct list_item$1charp* prev_it_336;
struct list_item$1charp* it_337;
struct list_item$1charp* head_prev_it_338;
struct list_item$1charp* tail_it_339;
int i_340;
_Bool _while_condtional55;
_Bool _if_conditional489;
_Bool _if_conditional490;
_Bool _if_conditional491;
struct list_item$1charp* prev_it_341;
_Bool _if_conditional492;
_Bool _if_conditional493;
struct list$1charp* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_328, 0, sizeof(int));
memset(&it_331, 0, sizeof(struct list_item$1charp*));
memset(&i_332, 0, sizeof(int));
memset(&prev_it_333, 0, sizeof(struct list_item$1charp*));
memset(&it_334, 0, sizeof(struct list_item$1charp*));
memset(&i_335, 0, sizeof(int));
memset(&prev_it_336, 0, sizeof(struct list_item$1charp*));
memset(&it_337, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_338, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_339, 0, sizeof(struct list_item$1charp*));
memset(&i_340, 0, sizeof(int));
memset(&prev_it_341, 0, sizeof(struct list_item$1charp*));
                                                                                # 454 "./neo-c.h"
                                                                                # 451 "./neo-c.h"
                                                                                if(_if_conditional476=head<0,                                                                                _if_conditional476) {
                                                                                    # 452 "./neo-c.h"
                                                                                    head+=self->len;
                                                                                }
                                                                                # 458 "./neo-c.h"
                                                                                # 454 "./neo-c.h"
                                                                                if(_if_conditional477=tail<0,                                                                                _if_conditional477) {
                                                                                    # 455 "./neo-c.h"
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                # 464 "./neo-c.h"
                                                                                # 458 "./neo-c.h"
                                                                                if(_if_conditional478=head>tail,                                                                                _if_conditional478) {
                                                                                    # 459 "./neo-c.h"
                                                                                    tmp_328=tail;
                                                                                    # 460 "./neo-c.h"
                                                                                    tail=head;
                                                                                    # 461 "./neo-c.h"
                                                                                    head=tmp_328;
                                                                                }
                                                                                # 468 "./neo-c.h"
                                                                                # 464 "./neo-c.h"
                                                                                if(_if_conditional479=head<0,                                                                                _if_conditional479) {
                                                                                    # 465 "./neo-c.h"
                                                                                    head=0;
                                                                                }
                                                                                # 472 "./neo-c.h"
                                                                                # 468 "./neo-c.h"
                                                                                if(_if_conditional480=tail>self->len,                                                                                _if_conditional480) {
                                                                                    # 469 "./neo-c.h"
                                                                                    tail=self->len;
                                                                                }
                                                                                # 476 "./neo-c.h"
                                                                                # 472 "./neo-c.h"
                                                                                if(_if_conditional481=head==tail,                                                                                _if_conditional481) {
                                                                                    # 473 "./neo-c.h"
                                                                                    __result180__ = __result_obj__ = self;
                                                                                    return __result180__;
                                                                                }
                                                                                # 571 "./neo-c.h"
                                                                                # 476 "./neo-c.h"
                                                                                if(_if_conditional482=head==0&&tail==self->len,                                                                                _if_conditional482) {
                                                                                    # 478 "./neo-c.h"
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    # 571 "./neo-c.h"
                                                                                    # 480 "./neo-c.h"
                                                                                    if(_if_conditional483=head==0,                                                                                    _if_conditional483) {
                                                                                        # 481 "./neo-c.h"
                                                                                        it_331=self->head;
                                                                                        # 482 "./neo-c.h"
                                                                                        i_332=0;
                                                                                        # 504 "./neo-c.h"
                                                                                        while(_while_condtional53=it_331!=((void*)0),                                                                                        _while_condtional53) {
                                                                                            # 503 "./neo-c.h"
                                                                                            # 484 "./neo-c.h"
                                                                                            if(_if_conditional484=i_332<tail,                                                                                            _if_conditional484) {
                                                                                                # 485 "./neo-c.h"
                                                                                                prev_it_333=it_331;
                                                                                                # 487 "./neo-c.h"
                                                                                                it_331=it_331->next;
                                                                                                # 488 "./neo-c.h"
                                                                                                i_332++;
                                                                                                # 490 "./neo-c.h"
                                                                                                come_call_finalizer3(prev_it_333,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                # 492 "./neo-c.h"
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                # 503 "./neo-c.h"
                                                                                                # 494 "./neo-c.h"
                                                                                                if(_if_conditional485=i_332==tail,                                                                                                _if_conditional485) {
                                                                                                    # 495 "./neo-c.h"
                                                                                                    self->head=it_331;
                                                                                                    # 496 "./neo-c.h"
                                                                                                    self->head->prev=((void*)0);
                                                                                                    # 497 "./neo-c.h"
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    # 500 "./neo-c.h"
                                                                                                    it_331=it_331->next;
                                                                                                    # 501 "./neo-c.h"
                                                                                                    i_332++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        # 571 "./neo-c.h"
                                                                                        # 505 "./neo-c.h"
                                                                                        if(_if_conditional486=tail==self->len,                                                                                        _if_conditional486) {
                                                                                            # 506 "./neo-c.h"
                                                                                            it_334=self->head;
                                                                                            # 507 "./neo-c.h"
                                                                                            i_335=0;
                                                                                            # 529 "./neo-c.h"
                                                                                            while(_while_condtional54=it_334!=((void*)0),                                                                                            _while_condtional54) {
                                                                                                # 514 "./neo-c.h"
                                                                                                # 509 "./neo-c.h"
                                                                                                if(_if_conditional487=i_335==head,                                                                                                _if_conditional487) {
                                                                                                    # 510 "./neo-c.h"
                                                                                                    self->tail=it_334->prev;
                                                                                                    # 511 "./neo-c.h"
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                # 528 "./neo-c.h"
                                                                                                # 514 "./neo-c.h"
                                                                                                if(_if_conditional488=i_335>=head,                                                                                                _if_conditional488) {
                                                                                                    # 515 "./neo-c.h"
                                                                                                    prev_it_336=it_334;
                                                                                                    # 517 "./neo-c.h"
                                                                                                    it_334=it_334->next;
                                                                                                    # 518 "./neo-c.h"
                                                                                                    i_335++;
                                                                                                    # 520 "./neo-c.h"
                                                                                                    come_call_finalizer3(prev_it_336,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    # 522 "./neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 525 "./neo-c.h"
                                                                                                    it_334=it_334->next;
                                                                                                    # 526 "./neo-c.h"
                                                                                                    i_335++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            # 531 "./neo-c.h"
                                                                                            it_337=self->head;
                                                                                            # 533 "./neo-c.h"
                                                                                            head_prev_it_338=((void*)0);
                                                                                            # 534 "./neo-c.h"
                                                                                            tail_it_339=((void*)0);
                                                                                            # 537 "./neo-c.h"
                                                                                            i_340=0;
                                                                                            # 563 "./neo-c.h"
                                                                                            while(_while_condtional55=it_337!=((void*)0),                                                                                            _while_condtional55) {
                                                                                                # 542 "./neo-c.h"
                                                                                                # 539 "./neo-c.h"
                                                                                                if(_if_conditional489=i_340==head,                                                                                                _if_conditional489) {
                                                                                                    # 540 "./neo-c.h"
                                                                                                    head_prev_it_338=it_337->prev;
                                                                                                }
                                                                                                # 546 "./neo-c.h"
                                                                                                # 542 "./neo-c.h"
                                                                                                if(_if_conditional490=i_340==tail,                                                                                                _if_conditional490) {
                                                                                                    # 543 "./neo-c.h"
                                                                                                    tail_it_339=it_337;
                                                                                                }
                                                                                                # 561 "./neo-c.h"
                                                                                                # 546 "./neo-c.h"
                                                                                                if(_if_conditional491=i_340>=head&&i_340<tail,                                                                                                _if_conditional491) {
                                                                                                    # 548 "./neo-c.h"
                                                                                                    prev_it_341=it_337;
                                                                                                    # 550 "./neo-c.h"
                                                                                                    it_337=it_337->next;
                                                                                                    # 551 "./neo-c.h"
                                                                                                    i_340++;
                                                                                                    # 553 "./neo-c.h"
                                                                                                    come_call_finalizer3(prev_it_341,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    # 555 "./neo-c.h"
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    # 558 "./neo-c.h"
                                                                                                    it_337=it_337->next;
                                                                                                    # 559 "./neo-c.h"
                                                                                                    i_340++;
                                                                                                }
                                                                                            }
                                                                                            # 566 "./neo-c.h"
                                                                                            # 563 "./neo-c.h"
                                                                                            if(_if_conditional492=head_prev_it_338!=((void*)0),                                                                                            _if_conditional492) {
                                                                                                # 564 "./neo-c.h"
                                                                                                head_prev_it_338->next=tail_it_339;
                                                                                            }
                                                                                            # 569 "./neo-c.h"
                                                                                            # 566 "./neo-c.h"
                                                                                            if(_if_conditional493=tail_it_339!=((void*)0),                                                                                            _if_conditional493) {
                                                                                                # 567 "./neo-c.h"
                                                                                                tail_it_339->prev=head_prev_it_338;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                # 571 "./neo-c.h"
                                                                                __result182__ = __result_obj__ = self;
                                                                                return __result182__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_329;
_Bool _while_condtional52;
struct list_item$1charp* prev_it_330;
struct list$1charp* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_329, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_330, 0, sizeof(struct list_item$1charp*));
                                                                                        # 420 "./neo-c.h"
                                                                                        it_329=self->head;
                                                                                        # 427 "./neo-c.h"
                                                                                        while(_while_condtional52=it_329!=((void*)0),                                                                                        _while_condtional52) {
                                                                                            # 422 "./neo-c.h"
                                                                                            prev_it_330=it_329;
                                                                                            # 423 "./neo-c.h"
                                                                                            it_329=it_329->next;
                                                                                            # 424 "./neo-c.h"
                                                                                            come_call_finalizer3(prev_it_330,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        # 427 "./neo-c.h"
                                                                                        self->head=((void*)0);
                                                                                        # 428 "./neo-c.h"
                                                                                        self->tail=((void*)0);
                                                                                        # 430 "./neo-c.h"
                                                                                        self->len=0;
                                                                                        # 432 "./neo-c.h"
                                                                                        __result181__ = __result_obj__ = self;
                                                                                        return __result181__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional499;
char* result_343;
char* __result184__;
_Bool _if_conditional500;
char* __result185__;
char* result_344;
char* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_343, 0, sizeof(char*));
memset(&result_344, 0, sizeof(char*));
                                                    # 281 "./neo-c.h"
                                                    # 276 "./neo-c.h"
                                                    if(_if_conditional499=self==((void*)0),                                                    _if_conditional499) {
                                                        # 277 "./neo-c.h"
                                                        # 278 "./neo-c.h"
                                                        memset(&result_343,0,sizeof(char*));
                                                        # 279 "./neo-c.h"
                                                        __result184__ = __result_obj__ = result_343;
                                                        return __result184__;
                                                    }
                                                    # 281 "./neo-c.h"
                                                    self->it=self->head;
                                                    # 287 "./neo-c.h"
                                                    # 283 "./neo-c.h"
                                                    if(self->it) {
                                                        # 284 "./neo-c.h"
                                                        __result185__ = __result_obj__ = self->it->item;
                                                        return __result185__;
                                                    }
                                                    # 287 "./neo-c.h"
                                                    # 288 "./neo-c.h"
                                                    memset(&result_344,0,sizeof(char*));
                                                    # 289 "./neo-c.h"
                                                    __result186__ = __result_obj__ = result_344;
                                                    return __result186__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 311 "./neo-c.h"
                                                    __result187__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result187__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional501;
char* result_346;
char* __result188__;
_Bool _if_conditional502;
char* __result189__;
char* result_347;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_346, 0, sizeof(char*));
memset(&result_347, 0, sizeof(char*));
                                                    # 299 "./neo-c.h"
                                                    # 293 "./neo-c.h"
                                                    if(_if_conditional501=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional501) {
                                                        # 294 "./neo-c.h"
                                                        # 295 "./neo-c.h"
                                                        memset(&result_346,0,sizeof(char*));
                                                        # 296 "./neo-c.h"
                                                        __result188__ = __result_obj__ = result_346;
                                                        return __result188__;
                                                    }
                                                    # 299 "./neo-c.h"
                                                    self->it=self->it->next;
                                                    # 305 "./neo-c.h"
                                                    # 301 "./neo-c.h"
                                                    if(self->it) {
                                                        # 302 "./neo-c.h"
                                                        __result189__ = __result_obj__ = self->it->item;
                                                        return __result189__;
                                                    }
                                                    # 305 "./neo-c.h"
                                                    # 306 "./neo-c.h"
                                                    memset(&result_347,0,sizeof(char*));
                                                    # 307 "./neo-c.h"
                                                    __result190__ = __result_obj__ = result_347;
                                                    return __result190__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional505;
void* right_value386;
struct list_item$1charp* litem_348;
_Bool _if_conditional506;
void* right_value387;
struct list_item$1charp* litem_349;
void* right_value388;
struct list_item$1charp* litem_350;
struct list$1charp* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value386 = (void*)0;
memset(&litem_348, 0, sizeof(struct list_item$1charp*));
right_value387 = (void*)0;
memset(&litem_349, 0, sizeof(struct list_item$1charp*));
right_value388 = (void*)0;
memset(&litem_350, 0, sizeof(struct list_item$1charp*));
                                                        # 247 "./neo-c.h"
                                                        # 216 "./neo-c.h"
                                                        if(_if_conditional505=self->len==0,                                                        _if_conditional505) {
                                                            # 217 "./neo-c.h"
                                                            litem_348=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value386=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                                                            come_call_finalizer3(right_value386,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            # 219 "./neo-c.h"
                                                            litem_348->prev=((void*)0);
                                                            # 220 "./neo-c.h"
                                                            litem_348->next=((void*)0);
                                                            # 221 "./neo-c.h"
                                                            litem_348->item=item;
                                                            # 223 "./neo-c.h"
                                                            self->tail=litem_348;
                                                            # 224 "./neo-c.h"
                                                            self->head=litem_348;
                                                        }
                                                        else {
                                                            # 247 "./neo-c.h"
                                                            # 226 "./neo-c.h"
                                                            if(_if_conditional506=self->len==1,                                                            _if_conditional506) {
                                                                # 227 "./neo-c.h"
                                                                litem_349=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value387=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                                                                come_call_finalizer3(right_value387,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 229 "./neo-c.h"
                                                                litem_349->prev=self->head;
                                                                # 230 "./neo-c.h"
                                                                litem_349->next=((void*)0);
                                                                # 231 "./neo-c.h"
                                                                litem_349->item=item;
                                                                # 233 "./neo-c.h"
                                                                self->tail=litem_349;
                                                                # 234 "./neo-c.h"
                                                                self->head->next=litem_349;
                                                            }
                                                            else {
                                                                # 237 "./neo-c.h"
                                                                litem_350=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value388=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                                                                come_call_finalizer3(right_value388,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                # 239 "./neo-c.h"
                                                                litem_350->prev=self->tail;
                                                                # 240 "./neo-c.h"
                                                                litem_350->next=((void*)0);
                                                                # 241 "./neo-c.h"
                                                                litem_350->item=item;
                                                                # 243 "./neo-c.h"
                                                                self->tail->next=litem_350;
                                                                # 244 "./neo-c.h"
                                                                self->tail=litem_350;
                                                            }
                                                        }
                                                        # 247 "./neo-c.h"
                                                        self->len++;
                                                        # 249 "./neo-c.h"
                                                        __result191__ = __result_obj__ = self;
                                                        return __result191__;
}

