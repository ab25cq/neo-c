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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1948, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1958, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1968, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1978, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1988, "smart_pointer$1long"))));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2214, "list$1double")))),len,self)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
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
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
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
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
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
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
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
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
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
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
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










void skip_paren(struct sInfo* info){
void* __result_obj__;
int nest_47;
_Bool _while_condtional7;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&nest_47, 0, sizeof(int));
    nest_47=0;
    while(_while_condtional7=(_Bool)1,    _while_condtional7) {
        if(_if_conditional19=*info->p==40,        _if_conditional19) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_47++;
        }
        else {
            if(_if_conditional20=*info->p==41,            _if_conditional20) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_47--;
                if(_if_conditional21=nest_47==0,                _if_conditional21) {
                    break;
                }
            }
            else {
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
    while(_while_condtional8=strmemcmp(info->p,"__attribute__"),    _while_condtional8) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional9=strmemcmp(info->p,"__extension__"),    _while_condtional9) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(_while_condtional10=*info->p==35,    _while_condtional10) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(_if_conditional22=strmemcmp(info->p,"pragma"),        _if_conditional22) {
            while(_while_condtional11=*info->p,            _while_condtional11) {
                if(_if_conditional23=*info->p==10,                _if_conditional23) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(_if_conditional24=xisdigit(*info->p),            _if_conditional24) {
                line_48=0;
                fname_49=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 58, "buffer"))))))));
                come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional12=xisdigit(*info->p),                _while_condtional12) {
                    line_48=line_48*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(_if_conditional25=*info->p==34,                _if_conditional25) {
                    info->p++;
                    while(_while_condtional13=*info->p!=34,                    _while_condtional13) {
                        buffer_append_char(fname_49,*info->p);
                        info->p++;
                    }
                    while(_while_condtional14=*info->p!=10,                    _while_condtional14) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_48;
                __dec_obj12=info->sname;
                info->sname=(char*)come_increment_ref_count(((char*)(right_value81=buffer_to_string(fname_49))));
                __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                skip_spaces_and_lf(info);
                come_call_finalizer3(fname_49,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional26=*info->p==34,                _if_conditional26) {
                    info->p++;
                    while(_while_condtional15=*info->p!=34,                    _while_condtional15) {
                        info->p++;
                    }
                    while(_while_condtional16=*info->p!=10,                    _while_condtional16) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(_while_condtional17=strmemcmp(info->p,"__attribute__"),    _while_condtional17) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(_while_condtional18=strmemcmp(info->p,"__extension__"),    _while_condtional18) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
void* __result_obj__;
char c_50;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&c_50, 0, sizeof(char));
    c_50=*(info->p+strlen(str));
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
    buf_51=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 120, "buffer"))))))));
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    parse_sharp_v5(info);
    while(_while_condtional19=(*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36),    _while_condtional19) {
        buffer_append_char(buf_51,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(_if_conditional27=string_length(((char*)(right_value84=buffer_to_string(buf_51))))==0,    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
    _if_conditional27) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result53__ = __result_obj__ = ((char*)(right_value85=__builtin_string("")));
        come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result53__;
    }
    result_52=(char*)come_increment_ref_count(((char*)(right_value86=buffer_to_string(buf_51))));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional32=info->module_params&&map$2charphcharphp_operator_load_element(info->module_params,result_52),    _if_conditional32) {
        __result58__ = __result_obj__ = ((char*)(right_value87=__builtin_string(((char*)come_null_check(map$2charphcharphp_operator_load_element(info->module_params,result_52), "05type.c", 138, 0)))));
        come_call_finalizer3(buf_51,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_52 = come_decrement_ref_count2(result_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result58__;
    }
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
        memset(&default_value_53,0,sizeof(char*));
        hash_54=string_get_hash_key(((char*)key))%self->size;
        it_55=hash_54;
        while(_while_condtional20=(_Bool)1,        _while_condtional20) {
            if(_if_conditional28=self->item_existance[it_55],            _if_conditional28) {
                if(_if_conditional29=string_equals(self->keys[it_55],key),                _if_conditional29) {
                    __result54__ = __result_obj__ = self->items[it_55];
                    default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result54__;
                }
                it_55++;
                if(_if_conditional30=it_55>=self->size,                _if_conditional30) {
                    it_55=0;
                }
                else {
                    if(_if_conditional31=it_55==hash_54,                    _if_conditional31) {
                        __result55__ = __result_obj__ = default_value_53;
                        default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result55__;
                    }
                }
            }
            else {
                __result56__ = __result_obj__ = default_value_53;
                default_value_53 = come_decrement_ref_count2(default_value_53, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result56__;
            }
        }
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
    p_56=info->p;
    sline_57=info->sline;
    if(_if_conditional33=xisalpha(*info->p)||*info->p==95,    _if_conditional33) {
        __dec_obj13=buf_58;
        buf_58=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 151, 1),__exception_result_var_b1=((char*)(right_value88=parse_word(info))), come_pop_stackframe(), __exception_result_var_b1));
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj14=buf_58;
        buf_58=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(""))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    info->p=p_56;
    info->sline=sline_57;
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
    while(_while_condtional21=(_Bool)1,    _while_condtional21) {
        if(_if_conditional34=*info->p==32||*info->p==9,        _if_conditional34) {
            info->p++;
        }
        else {
            if(_if_conditional35=*info->p==10,            _if_conditional35) {
                info->p++;
                info->sline++;
            }
            else {
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
    for(    o2_saved_59=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_62=list$1sTypeph_begin((o2_saved_59));    !list$1sTypeph_end((o2_saved_59));    it_62=list$1sTypeph_next((o2_saved_59))    ){
        if(_if_conditional40=is_contained_generics_class(it_62,info),        _if_conditional40) {
            __result68__ = (_Bool)1;
            come_call_finalizer3(o2_saved_59,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result68__;
        }
    }
    come_call_finalizer3(o2_saved_59,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_71=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_72=list$1sTypeph_begin((o2_saved_71));    !list$1sTypeph_end((o2_saved_71));    it_72=list$1sTypeph_next((o2_saved_71))    ){
        if(_if_conditional58=is_contained_generics_class(it_72,info),        _if_conditional58) {
            __result69__ = (_Bool)1;
            come_call_finalizer3(o2_saved_71,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result69__;
        }
    }
    come_call_finalizer3(o2_saved_71,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(type->mClass->mGenerics) {
        __result70__ = (_Bool)1;
        return __result70__;
    }
    if(type->mClass->mMethodGenerics) {
        __result71__ = (_Bool)1;
        return __result71__;
    }
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
        if(_if_conditional36=self==((void*)0),        _if_conditional36) {
            memset(&result_60,0,sizeof(struct sType*));
            __result61__ = __result_obj__ = result_60;
            return __result61__;
        }
        self->it=self->head;
        if(self->it) {
            __result62__ = __result_obj__ = self->it->item;
            return __result62__;
        }
        memset(&result_61,0,sizeof(struct sType*));
        __result63__ = __result_obj__ = result_61;
        return __result63__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
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
        if(_if_conditional38=self==((void*)0)||self->it==((void*)0),        _if_conditional38) {
            memset(&result_63,0,sizeof(struct sType*));
            __result65__ = __result_obj__ = result_63;
            return __result65__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result66__ = __result_obj__ = self->it->item;
            return __result66__;
        }
        memset(&result_64,0,sizeof(struct sType*));
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
                it_65=self->head;
                while(_while_condtional22=it_65!=((void*)0),                _while_condtional22) {
                    prev_it_66=it_65;
                    it_65=it_65->next;
                    come_call_finalizer3(prev_it_66,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional41) {
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
                                if(_if_conditional42=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                _if_conditional42) {
                                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional43=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                _if_conditional43) {
                                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional45=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                _if_conditional45) {
                                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional46=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                _if_conditional46) {
                                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional47=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                _if_conditional47) {
                                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional48=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                _if_conditional48) {
                                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional50=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional50) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional51=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional51) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional53) {
                                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),                                _if_conditional54) {
                                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional55=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                _if_conditional55) {
                                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional56=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                _if_conditional56) {
                                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional57=self!=((void*)0)&&self->mAsmName!=((void*)0),                                _if_conditional57) {
                                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional44) {
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
                                        it_67=self->head;
                                        while(_while_condtional23=it_67!=((void*)0),                                        _while_condtional23) {
                                            prev_it_68=it_67;
                                            it_67=it_67->next;
                                            come_call_finalizer3(prev_it_68,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional49=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional49) {
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
                                        it_69=self->head;
                                        while(_while_condtional24=it_69!=((void*)0),                                        _while_condtional24) {
                                            prev_it_70=it_69;
                                            it_69=it_69->next;
                                            come_call_finalizer3(prev_it_70,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional52=self!=((void*)0)&&self->item!=((void*)0),                                                _if_conditional52) {
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
    param_types_73=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value91=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 204, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value91,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    param_names_74=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value93=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value92=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 205, "list$1charph"))))))));
    come_call_finalizer3(right_value92,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value93,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    param_default_parametors_75=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 206, "list$1charph"))))))));
    come_call_finalizer3(right_value94,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value95,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    var_args_76=(_Bool)0;
    if(in_constructor_) {
        list$1charph_add(param_names_74,(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("self")))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type__101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(info->impl_type))));
        come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type__101->mHeap=(_Bool)1;
        list$1sTypeph_add(param_types_73,(struct sType*)come_increment_ref_count(type__101));
        list$1charph_add(param_default_parametors_75,((void*)0));
        come_call_finalizer3(type__101,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->in_class) {
            list$1charph_add(param_names_74,(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("self")))));
            right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1sTypeph_add(param_types_73,(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(info->impl_type)))));
            come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_add(param_default_parametors_75,((void*)0));
        }
    }
    (come_push_stackframe("05type.c", 222, 2),__exception_result_var_b2=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b2);
    void_param_102=(_Bool)0;
    {
        p_103=info->p;
        sline_104=info->sline;
        if(_if_conditional137=strmemcmp(info->p,"void"),        _if_conditional137) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional138=*info->p==41,            _if_conditional138) {
                void_param_102=(_Bool)1;
            }
        }
        info->p=p_103;
        info->sline=sline_104;
    }
    if(void_param_102) {
        if(_if_conditional140=strmemcmp(info->p,"void"),        _if_conditional140) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(_if_conditional141=*info->p==41,            _if_conditional141) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while(_while_condtional31=(_Bool)1,        _while_condtional31) {
            if(_if_conditional142=*info->p==41,            _if_conditional142) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(right_value135=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_105=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_106=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_107=multiple_assign_var1->v3;
            come_call_finalizer3(right_value135,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional145=!err_107,            _if_conditional145) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result92__ = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value137=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(right_value136=(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 268, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")))),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_106 = come_decrement_ref_count2(param_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_73,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_74,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_75,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value137,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result92__;
            }
            param_type2_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=solve_generics(param_type_105,info->generics_type,info))));
            come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_type2_108->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_73,(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(param_type2_108)))));
            come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(param_names_74,(char*)come_increment_ref_count(((char*)(right_value146=string_clone(param_name_106)))));
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional150=*info->p==61,            _if_conditional150) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_115=info->p;
                no_comma_116=info->no_comma;
                info->no_comma=(_Bool)1;
                node_117=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=expression_v13(info))));
                if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_116;
                p2_118=info->p;
                char buf_119[p2_118-p_115+1];
                memset(&buf_119, 0, sizeof(char)                *(p2_118-p_115+1)                );
                memcpy(buf_119,p_115,p2_118-p_115);
                buf_119[p2_118-p_115]=0;
                list$1charph_push_back(param_default_parametors_75,(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(buf_119)))));
                right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(node_117) { node_117 = come_decrement_ref_count2(node_117, ((struct sNode*)node_117)->finalize, ((struct sNode*)node_117)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_75,((void*)0));
            }
            parse_sharp_v5(info);
            if(_if_conditional151=*info->p==44,            _if_conditional151) {
                info->p++;
                skip_spaces_and_lf(info);
                if(_if_conditional152=strmemcmp(info->p,"..."),                _if_conditional152) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_76=(_Bool)1;
                    (come_push_stackframe("05type.c", 316, 3),__exception_result_var_b3=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b3);
                    come_call_finalizer3(param_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_106 = come_decrement_ref_count2(param_name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_108,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                if(_if_conditional153=*info->p==41,                _if_conditional153) {
                    info->p++;
                    skip_spaces_and_lf(info);
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
    __result96__ = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value150=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value149=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 328, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")))),(struct list$1sTypeph*)come_increment_ref_count(param_types_73),(struct list$1charph*)come_increment_ref_count(param_names_74),(struct list$1charph*)come_increment_ref_count(param_default_parametors_75),var_args_76)));
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
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result73__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result73__;
        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
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
            if(_if_conditional62=self->len==0,            _if_conditional62) {
                litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value96=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                come_call_finalizer3(right_value96,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_77->prev=((void*)0);
                litem_77->next=((void*)0);
                __dec_obj15=litem_77->item;
                litem_77->item=(char*)come_increment_ref_count(item);
                __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                self->tail=litem_77;
                self->head=litem_77;
            }
            else {
                if(_if_conditional63=self->len==1,                _if_conditional63) {
                    litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value97=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                    come_call_finalizer3(right_value97,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_78->prev=self->head;
                    litem_78->next=((void*)0);
                    __dec_obj16=litem_78->item;
                    litem_78->item=(char*)come_increment_ref_count(item);
                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_78;
                    self->head->next=litem_78;
                }
                else {
                    litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value98=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                    come_call_finalizer3(right_value98,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_79->prev=self->tail;
                    litem_79->next=((void*)0);
                    __dec_obj17=litem_79->item;
                    litem_79->item=(char*)come_increment_ref_count(item);
                    __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail->next=litem_79;
                    self->tail=litem_79;
                }
            }
            self->len++;
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
            if(_if_conditional64=self==(void*)0,            _if_conditional64) {
                __result76__ = __result_obj__ = (void*)0;
                return __result76__;
            }
            result_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value100,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional65=self!=((void*)0),            _if_conditional65) {
                result_80->mClass=self->mClass;
            }
            if(_if_conditional66=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional66) {
                __dec_obj21=result_80->mMultipleTypes;
                result_80->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value107,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional70=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional70) {
                __dec_obj23=result_80->mNoSolvedGenericsType;
                result_80->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value110=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj23,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value110,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional74=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional74) {
                __dec_obj24=result_80->mOriginalLoadVarType;
                result_80->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj24,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional75=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional75) {
                __dec_obj25=result_80->mGenericsName;
                result_80->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mGenericsName))));
                __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional76=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional76) {
                __dec_obj26=result_80->mGenericsTypes;
                result_80->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value113=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value113,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional77=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional77) {
                __dec_obj30=result_80->mArrayNum;
                result_80->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value121=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj30,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value121,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_80->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional91=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional91) {
                __dec_obj31=result_80->mParamTypes;
                result_80->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value122=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value122,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional92=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional92) {
                __dec_obj32=result_80->mParamNames;
                result_80->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value126,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional94=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional94) {
                __dec_obj33=result_80->mResultType;
                result_80->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj33,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value127,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_80->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional96=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional96) {
                __dec_obj34=result_80->mAlignas;
                result_80->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(self->mAlignas))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_80->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_80->mShort=self->mShort;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                result_80->mLong=self->mLong;
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_80->mLongLong=self->mLongLong;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_80->mConstant=self->mConstant;
            }
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                result_80->mRegister=self->mRegister;
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_80->mVolatile=self->mVolatile;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_80->mStatic=self->mStatic;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_80->mRecord=self->mRecord;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_80->mExtern=self->mExtern;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_80->mRestrict=self->mRestrict;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_80->mImmutable=self->mImmutable;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_80->mHeap=self->mHeap;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_80->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_80->mDelegate=self->mDelegate;
            }
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                result_80->mShare=self->mShare;
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_80->mClone=self->mClone;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_80->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                result_80->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                result_80->mRefference=self->mRefference;
            }
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                result_80->mException=self->mException;
            }
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                result_80->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                result_80->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                result_80->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional121=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional121) {
                __dec_obj35=result_80->mSizeNum;
                result_80->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(self->mSizeNum))));
                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                result_80->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                result_80->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional124=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional124) {
                __dec_obj36=result_80->mOriginalTypeName;
                result_80->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(self->mOriginalTypeName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional125=self!=((void*)0),            _if_conditional125) {
                result_80->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                result_80->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                result_80->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional128=self!=((void*)0),            _if_conditional128) {
                result_80->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                result_80->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                result_80->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                result_80->mInline=self->mInline;
            }
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                result_80->mNullValue=self->mNullValue;
            }
            if(_if_conditional133=self!=((void*)0),            _if_conditional133) {
                result_80->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional134=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional134) {
                __dec_obj37=result_80->mAsmName;
                result_80->mAsmName=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->mAsmName))));
                __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional135=self!=((void*)0),            _if_conditional135) {
                result_80->mArrayPointerType=self->mArrayPointerType;
            }
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
                    if(_if_conditional67=self==((void*)0),                    _if_conditional67) {
                        __result77__ = __result_obj__ = ((void*)0);
                        return __result77__;
                    }
                    result_81=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value102=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value102,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_82=self->head;
                    while(_while_condtional25=it_82!=((void*)0),                    _while_condtional25) {
                        list$1sTypeph_add(result_81,(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_clone(it_82->item)))));
                        come_call_finalizer3(right_value106,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_82=it_82->next;
                    }
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
                            if(_if_conditional68=self->len==0,                            _if_conditional68) {
                                litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value103,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_83->prev=((void*)0);
                                litem_83->next=((void*)0);
                                __dec_obj18=litem_83->item;
                                litem_83->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_83;
                                self->head=litem_83;
                            }
                            else {
                                if(_if_conditional69=self->len==1,                                _if_conditional69) {
                                    litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value104=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value104,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_84->prev=self->head;
                                    litem_84->next=((void*)0);
                                    __dec_obj19=litem_84->item;
                                    litem_84->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_84;
                                    self->head->next=litem_84;
                                }
                                else {
                                    litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value105=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value105,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_85->prev=self->tail;
                                    litem_85->next=((void*)0);
                                    __dec_obj20=litem_85->item;
                                    litem_85->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_85;
                                    self->tail=litem_85;
                                }
                            }
                            self->len++;
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
                    it_86=self->head;
                    while(_while_condtional26=it_86!=((void*)0),                    _while_condtional26) {
                        prev_it_87=it_86;
                        it_86=it_86->next;
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
                    if(_if_conditional71=self==(void*)0,                    _if_conditional71) {
                        __result80__ = __result_obj__ = (void*)0;
                        return __result80__;
                    }
                    result_88=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value108,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional73=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional73) {
                        __dec_obj22=result_88->v1;
                        result_88->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj22,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value109,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result81__ = __result_obj__ = result_88;
                    come_call_finalizer3(result_88,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                    come_call_finalizer3(result_88,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional72;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional72=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional72) {
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
                    if(_if_conditional78=self==((void*)0),                    _if_conditional78) {
                        __result82__ = __result_obj__ = ((void*)0);
                        return __result82__;
                    }
                    result_89=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value115=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value114=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value114,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value115,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_90=self->head;
                    while(_while_condtional27=it_90!=((void*)0),                    _while_condtional27) {
                        list$1sNodeph_add(result_89,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value120=sNode_clone(it_90->item)))));
                        if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_90=it_90->next;
                    }
                    __result87__ = __result_obj__ = result_89;
                    come_call_finalizer3(result_89,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result87__;
                    come_call_finalizer3(result_89,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
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
                            if(_if_conditional79=self->len==0,                            _if_conditional79) {
                                litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value116,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_91->prev=((void*)0);
                                litem_91->next=((void*)0);
                                __dec_obj27=litem_91->item;
                                litem_91->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_91;
                                self->head=litem_91;
                            }
                            else {
                                if(_if_conditional80=self->len==1,                                _if_conditional80) {
                                    litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value117=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value117,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_92->prev=self->head;
                                    litem_92->next=((void*)0);
                                    __dec_obj28=litem_92->item;
                                    litem_92->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_92;
                                    self->head->next=litem_92;
                                }
                                else {
                                    litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value118=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value118,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_93->prev=self->tail;
                                    litem_93->next=((void*)0);
                                    __dec_obj29=litem_93->item;
                                    litem_93->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_93;
                                    self->tail=litem_93;
                                }
                            }
                            self->len++;
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
                            if(_if_conditional81=self==(void*)0,                            _if_conditional81) {
                                __result85__ = __result_obj__ = (void*)0;
                                return __result85__;
                            }
                            result_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value119) { right_value119 = come_decrement_ref_count2(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional82=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional82) {
                                result_94->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional83=self!=((void*)0),                            _if_conditional83) {
                                result_94->finalize=self->finalize;
                            }
                            if(_if_conditional84=self!=((void*)0),                            _if_conditional84) {
                                result_94->clone=self->clone;
                            }
                            if(_if_conditional85=self!=((void*)0),                            _if_conditional85) {
                                result_94->compile=self->compile;
                            }
                            if(_if_conditional86=self!=((void*)0),                            _if_conditional86) {
                                result_94->sline=self->sline;
                            }
                            if(_if_conditional87=self!=((void*)0),                            _if_conditional87) {
                                result_94->sname=self->sname;
                            }
                            if(_if_conditional88=self!=((void*)0),                            _if_conditional88) {
                                result_94->terminated=self->terminated;
                            }
                            if(_if_conditional89=self!=((void*)0),                            _if_conditional89) {
                                result_94->kind=self->kind;
                            }
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
                    it_95=self->head;
                    while(_while_condtional28=it_95!=((void*)0),                    _while_condtional28) {
                        prev_it_96=it_95;
                        it_95=it_95->next;
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
                    if(_if_conditional93=self==((void*)0),                    _if_conditional93) {
                        __result88__ = __result_obj__ = ((void*)0);
                        return __result88__;
                    }
                    result_97=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value124=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value123=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value123,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value124,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_98=self->head;
                    while(_while_condtional29=it_98!=((void*)0),                    _while_condtional29) {
                        list$1charph_add(result_97,(char*)come_increment_ref_count(((char*)(right_value125=string_clone(it_98->item)))));
                        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_98=it_98->next;
                    }
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
                    it_99=self->head;
                    while(_while_condtional30=it_99!=((void*)0),                    _while_condtional30) {
                        prev_it_100=it_99;
                        it_99=it_99->next;
                        come_call_finalizer3(prev_it_100,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional143=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional143) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional144=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional144) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->v1=v1;
                    self->v2=v2;
                    self->v3=v3;
                    self->v4=v4;
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
                if(_if_conditional146=self->len==0,                _if_conditional146) {
                    litem_109=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value139,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_109->prev=((void*)0);
                    litem_109->next=((void*)0);
                    __dec_obj38=litem_109->item;
                    litem_109->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_109;
                    self->head=litem_109;
                }
                else {
                    if(_if_conditional147=self->len==1,                    _if_conditional147) {
                        litem_110=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value140=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value140,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_110->prev=self->head;
                        litem_110->next=((void*)0);
                        __dec_obj39=litem_110->item;
                        litem_110->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_110;
                        self->head->next=litem_110;
                    }
                    else {
                        litem_111=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value141=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value141,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_111->prev=self->tail;
                        litem_111->next=((void*)0);
                        __dec_obj40=litem_111->item;
                        litem_111->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_111;
                        self->tail=litem_111;
                    }
                }
                self->len++;
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
                if(_if_conditional148=self->len==0,                _if_conditional148) {
                    litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 217, "list_item$1charph"))));
                    come_call_finalizer3(right_value143,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_112->prev=((void*)0);
                    litem_112->next=((void*)0);
                    __dec_obj41=litem_112->item;
                    litem_112->item=(char*)come_increment_ref_count(item);
                    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_112;
                    self->head=litem_112;
                }
                else {
                    if(_if_conditional149=self->len==1,                    _if_conditional149) {
                        litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 227, "list_item$1charph"))));
                        come_call_finalizer3(right_value144,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_113->prev=self->head;
                        litem_113->next=((void*)0);
                        __dec_obj42=litem_113->item;
                        litem_113->item=(char*)come_increment_ref_count(item);
                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_113;
                        self->head->next=litem_113;
                    }
                    else {
                        litem_114=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 237, "list_item$1charph"))));
                        come_call_finalizer3(right_value145,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_114->prev=self->tail;
                        litem_114->next=((void*)0);
                        __dec_obj43=litem_114->item;
                        litem_114->item=(char*)come_increment_ref_count(item);
                        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_114;
                        self->tail=litem_114;
                    }
                }
                self->len++;
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
        __dec_obj44=self->v1;
        self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj45=self->v2;
        self->v2=(struct list$1charph*)come_increment_ref_count(v2);
        come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj46=self->v3;
        self->v3=(struct list$1charph*)come_increment_ref_count(v3);
        come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        self->v4=v4;
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
            if(_if_conditional154=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional154) {
                come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional155=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional155) {
                come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional156=self!=((void*)0)&&self->v3!=((void*)0),            _if_conditional156) {
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
_Bool _if_conditional184;
_Bool __result106__;
int i_139;
_Bool _if_conditional185;
void* right_value157;
char* __dec_obj49;
void* right_value158;
struct sType* __dec_obj50;
void* right_value159;
struct sType* __dec_obj51;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool __result107__;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool __result108__;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool __result109__;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool __result110__;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
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
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool __result112__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool __result113__;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool __result114__;
void* right_value170;
char* method_name_141;
_Bool _if_conditional236;
struct sType* obj_type_144;
_Bool _if_conditional237;
struct sType* obj_type2_145;
void* right_value171;
void* right_value172;
char* __dec_obj55;
_Bool _if_conditional238;
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
_Bool _if_conditional239;
void* right_value181;
char* method_name_148;
_Bool _if_conditional240;
struct sType* obj_type_149;
_Bool _if_conditional241;
struct sType* obj_type2_150;
void* right_value182;
void* right_value183;
char* __dec_obj59;
_Bool _if_conditional242;
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
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool __result121__;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool __result122__;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool __result123__;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool __result124__;
_Bool _if_conditional262;
void* right_value191;
char* tmp_153;
void* right_value192;
char* __dec_obj63;
void* right_value193;
struct sType* __dec_obj64;
void* right_value194;
struct sType* __dec_obj65;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool __result125__;
_Bool _if_conditional269;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool __result128__;
_Bool _if_conditional278;
void* right_value195;
char* tmp_154;
void* right_value196;
char* __dec_obj66;
void* right_value197;
struct sType* __dec_obj67;
_Bool __result129__;
_Bool _if_conditional279;
_Bool _if_conditional280;
int i_155;
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
right_value195 = (void*)0;
memset(&tmp_154, 0, sizeof(char*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&i_155, 0, sizeof(int));
    right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(right_type))));
    come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional158=list$1sTypeph_length(left_type->mMultipleTypes)>0,    _if_conditional158) {
        left_type2_121=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(left_type))));
        come_call_finalizer3(right_value152,sType_finalize, 0, 1, 0, 0, __result_obj__);
        found_match_type_122=(_Bool)0;
        for(        o2_saved_123=(struct list$1sTypeph*)come_increment_ref_count((left_type->mMultipleTypes)),it_124=list$1sTypeph_begin((o2_saved_123));        !list$1sTypeph_end((o2_saved_123));        it_124=list$1sTypeph_next((o2_saved_123))        ){
            if(_if_conditional159=check_assign_type(msg,it_124,right_type,come_value,check_no_pointer,(_Bool)0,info),            _if_conditional159) {
                found_match_type_122=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_123,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(_if_conditional160=!found_match_type_122,        _if_conditional160) {
            err_msg(info,"type errorX");
            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
            exit(2);
        }
        tmp_125=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("(void*)%s",come_value->c_value))));
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj47=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value154=string_clone(tmp_125))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj48=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 353, "sType")))),"void*",(_Bool)0,info))));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value->type->mHeap=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mMultipleTypes,0), "05type.c", 354, 4))->mHeap;
        come_value->var=((void*)0);
        __result101__ = (_Bool)1;
        come_call_finalizer3(left_type2_121,sType_finalize, 0, 0, 0, 0, (void*)0);
        tmp_125 = come_decrement_ref_count2(tmp_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result101__;
        come_call_finalizer3(left_type2_121,sType_finalize, 0, 0, 0, 0, (void*)0);
        tmp_125 = come_decrement_ref_count2(tmp_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    left_no_solved_generics_type_129=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_130=right_type2_120->mNoSolvedGenericsType->v1;
    left_class_131=left_type->mClass;
    right_class_132=right_type2_120->mClass;
    parent_class_133=(_Bool)0;
    if(_if_conditional163=string_operator_not_equals(left_class_131->mName,right_class_132->mName),    _if_conditional163) {
        while(_while_condtional33=left_class_131&&right_class_132,        _while_condtional33) {
            if(_if_conditional164=string_operator_equals(left_class_131->mName,right_class_132->mName),            _if_conditional164) {
                parent_class_133=(_Bool)1;
            }
            if(right_class_132->mParentClassName) {
                right_class_132=map$2charphsClassphp_operator_load_element(info->classes,right_class_132->mParentClassName);
            }
            else {
                right_class_132=((void*)0);
            }
        }
    }
    if(_if_conditional177=left_no_solved_generics_type_129&&right_no_solved_generics_type_130,    _if_conditional177) {
        if(_if_conditional178=right_type->mPointerNum==0&&left_type->mPointerNum>0,        _if_conditional178) {
        }
        else {
            if(_if_conditional179=string_operator_equals(left_type->mClass->mName,right_type2_120->mClass->mName)&&left_type->mPointerNum==right_type2_120->mPointerNum,            _if_conditional179) {
            }
            else {
                if(_if_conditional180=string_operator_equals(left_type->mClass->mName,right_type2_120->mClass->mName)&&(left_type->mPointerNum!=right_type2_120->mPointerNum||left_type->mHeap!=right_type2_120->mHeap),                _if_conditional180) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes),left_no_solved_generics_type_129->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_130->mGenericsTypes),right_no_solved_generics_type_130->mClass->mName,right_type2_120->mClass->mName);
                    exit(2);
                }
                else {
                    if(_if_conditional181=list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes)>0,                    _if_conditional181) {
                        if(_if_conditional182=(string_operator_equals(left_no_solved_generics_type_129->mClass->mName,"void")&&left_no_solved_generics_type_129->mPointerNum>0&&right_no_solved_generics_type_130->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_130->mClass->mName,"void")&&right_no_solved_generics_type_130->mPointerNum>0&&left_no_solved_generics_type_129->mPointerNum>0),                        _if_conditional182) {
                        }
                        else {
                            if(_if_conditional183=list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_130->mGenericsTypes),                            _if_conditional183) {
                                if(print_err_msg) {
                                    err_msg(info,"generics type parametor number error");
                                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes),left_no_solved_generics_type_129->mClass->mName,left_type->mClass->mName);
                                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_130->mGenericsTypes),right_no_solved_generics_type_130->mClass->mName,right_type2_120->mClass->mName);
                                    exit(2);
                                }
                                __result106__ = (_Bool)0;
                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result106__;
                            }
                            for(                            i_139=0;                            i_139<list$1sTypeph_length(left_no_solved_generics_type_129->mGenericsTypes);                            i_139++                            ){
                                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_129->mGenericsTypes,i_139), "05type.c", 410, 5)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_130->mGenericsTypes,i_139), "05type.c", 410, 6)),come_value,(_Bool)0,(_Bool)1,info);
                            }
                            check_assign_type(msg,left_no_solved_generics_type_129,right_no_solved_generics_type_130,come_value,(_Bool)0,(_Bool)1,info);
                        }
                    }
                }
            }
        }
    }
    else {
        if(_if_conditional185=parent_class_133&&left_type->mPointerNum==1&&right_type->mPointerNum==1,        _if_conditional185) {
            __dec_obj49=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value))));
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj50=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(left_type))));
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value->var=((void*)0);
            __dec_obj51=right_type2_120;
            right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(left_type))));
            come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            if(check_no_pointer) {
                if(_if_conditional187=left_type->mPointerNum>0,                _if_conditional187) {
                    if(_if_conditional188=right_type2_120->mPointerNum>0,                    _if_conditional188) {
                        if(_if_conditional189=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_120->mClass->mName,"void"),                        _if_conditional189) {
                        }
                        else {
                            if(_if_conditional190=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                            _if_conditional190) {
                            }
                            else {
                                if(_if_conditional191=string_operator_not_equals(left_type->mClass->mName,right_type2_120->mClass->mName),                                _if_conditional191) {
                                    if(print_err_msg) {
                                        err_msg(info,"type error1");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                        exit(2);
                                    }
                                    __result107__ = (_Bool)0;
                                    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result107__;
                                }
                            }
                        }
                    }
                    else {
                        if(_if_conditional193=right_type->mPointerNum==0,                        _if_conditional193) {
                        }
                        else {
                            if(print_err_msg) {
                                err_msg(info,"type error2");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                exit(2);
                            }
                            __result108__ = (_Bool)0;
                            come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result108__;
                        }
                    }
                }
                else {
                    if(_if_conditional195=left_type->mPointerNum==0&&right_type2_120->mPointerNum>0,                    _if_conditional195) {
                        if(print_err_msg) {
                            err_msg(info,"type error3");
                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                            exit(2);
                        }
                        __result109__ = (_Bool)0;
                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result109__;
                    }
                    else {
                        if(_if_conditional197=left_type->mPointerNum>0&&right_type2_120->mPointerNum==0&&string_operator_equals(right_type2_120->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                        _if_conditional197) {
                        }
                        else {
                            if(_if_conditional198=string_operator_not_equals(left_type->mClass->mName,right_type2_120->mClass->mName),                            _if_conditional198) {
                                if(print_err_msg) {
                                    err_msg(info,"type error4");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                    exit(2);
                                }
                                __result110__ = (_Bool)0;
                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result110__;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional200=!left_type->mNullValue&&right_type2_120->mNullValue,                _if_conditional200) {
                    if(_if_conditional201=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                    _if_conditional201) {
                    }
                    else {
                        if(_if_conditional202=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                        _if_conditional202) {
                        }
                        else {
                            if(_if_conditional203=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum==0,                            _if_conditional203) {
                                if(print_err_msg) {
                                    err_msg(info,"type error6");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                    exit(2);
                                }
                                __result111__ = (_Bool)0;
                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result111__;
                            }
                            else {
                                buf2_140=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value161=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 490, "buffer"))))))));
                                come_call_finalizer3(right_value160,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value161,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                buffer_append_str(buf2_140,((char*)(right_value166=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(right_value162=string_to_string(come_value->c_value))),((char*)(right_value163=string_to_string(info->sname))),((char*)(right_value164=int_to_string(info->sline))),((char*)(right_value165=int_to_string(gComeDebugStackFrameID++)))))));
                                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj52=come_value->c_value;
                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value167=buffer_to_string(buf2_140))));
                                __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj53=come_value->type;
                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(left_type))));
                                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_value->var=((void*)0);
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
                    if(_if_conditional205=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,                    _if_conditional205) {
                        if(_if_conditional206=string_operator_equals(right_type2_120->mClass->mName,"integer")&&right_type2_120->mPointerNum==1,                        _if_conditional206) {
                        }
                        else {
                            if(_if_conditional207=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                            _if_conditional207) {
                            }
                            else {
                                if(_if_conditional208=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                _if_conditional208) {
                                }
                                else {
                                    if(_if_conditional209=string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                    _if_conditional209) {
                                        if(print_err_msg) {
                                            err_msg(info,"type error7");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                            exit(2);
                                        }
                                        __result112__ = (_Bool)0;
                                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result112__;
                                    }
                                    else {
                                        if(_if_conditional211=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum>0,                                        _if_conditional211) {
                                        }
                                        else {
                                            if(_if_conditional212=string_operator_equals(right_type2_120->mClass->mName,"void"),                                            _if_conditional212) {
                                                if(print_err_msg) {
                                                    err_msg(info,"type error8");
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                    exit(2);
                                                }
                                                __result113__ = (_Bool)0;
                                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result113__;
                                            }
                                            else {
                                                if(_if_conditional214=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                                _if_conditional214) {
                                                }
                                                else {
                                                    if(_if_conditional215=right_type2_120->mPointerNum>0,                                                    _if_conditional215) {
                                                        if(print_err_msg) {
                                                            err_msg(info,"type error9");
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                            exit(2);
                                                        }
                                                        __result114__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result114__;
                                                    }
                                                    else {
                                                        method_name_141=(char*)come_increment_ref_count(((char*)(right_value170=create_method_name(right_type2_120,(_Bool)0,"to_integer",info,(_Bool)1))));
                                                        right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional236=map$2charphsFunph_at(info->funcs,method_name_141,((void*)0))==((void*)0),                                                        _if_conditional236) {
                                                            obj_type_144=right_type2_120->mNoSolvedGenericsType->v1;
                                                            if(_if_conditional237=obj_type_144&&list$1sTypeph_length(obj_type_144->mGenericsTypes)>0,                                                            _if_conditional237) {
                                                                obj_type2_145=right_type2_120;
                                                                __dec_obj55=method_name_141;
                                                                method_name_141=(char*)come_increment_ref_count(((char*)(right_value172=make_generics_function(obj_type2_145,(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                if(print_err_msg) {
                                                                    err_msg(info,"require to_string implementation(%s)",right_type2_120->mClass->mName);
                                                                    exit(2);
                                                                }
                                                                __result119__ = (_Bool)0;
                                                                method_name_141 = come_decrement_ref_count2(method_name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result119__;
                                                            }
                                                        }
                                                        buf2_146=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value174=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value173=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 557, "buffer"))))))));
                                                        come_call_finalizer3(right_value173,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value174,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(buf2_146,method_name_141);
                                                        buffer_append_str(buf2_146,"(");
                                                        buffer_append_str(buf2_146,come_value->c_value);
                                                        buffer_append_str(buf2_146,")");
                                                        type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 564, "sType")))),"integer",(_Bool)0,info))));
                                                        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        type_147->mHeap=(_Bool)1;
                                                        type_147->mPointerNum=1;
                                                        __dec_obj56=come_value->c_value;
                                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value178=append_object_to_right_values(((char*)(right_value177=buffer_to_string(buf2_146))),(struct sType*)come_increment_ref_count(type_147),info))));
                                                        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        __dec_obj57=come_value->type;
                                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(type_147))));
                                                        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_value->var=((void*)0);
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
                        if(_if_conditional239=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),                        _if_conditional239) {
                            method_name_148=(char*)come_increment_ref_count(((char*)(right_value181=create_method_name(right_type2_120,(_Bool)0,"to_int",info,(_Bool)1))));
                            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional240=map$2charphsFunph_at(info->funcs,method_name_148,((void*)0))==((void*)0),                            _if_conditional240) {
                                obj_type_149=right_type2_120->mNoSolvedGenericsType->v1;
                                if(_if_conditional241=obj_type_149&&list$1sTypeph_length(obj_type_149->mGenericsTypes)>0,                                _if_conditional241) {
                                    obj_type2_150=right_type2_120;
                                    __dec_obj59=method_name_148;
                                    method_name_148=(char*)come_increment_ref_count(((char*)(right_value183=make_generics_function(obj_type2_150,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string("to_int")))),info,(_Bool)1))));
                                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    if(print_err_msg) {
                                        err_msg(info,"require to_string implementation(%s)",right_type2_120->mClass->mName);
                                        exit(1);
                                    }
                                    __result120__ = (_Bool)0;
                                    method_name_148 = come_decrement_ref_count2(method_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result120__;
                                }
                            }
                            buf2_151=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value185=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value184=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 593, "buffer"))))))));
                            come_call_finalizer3(right_value184,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value185,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append_str(buf2_151,method_name_148);
                            buffer_append_str(buf2_151,"(");
                            buffer_append_str(buf2_151,come_value->c_value);
                            buffer_append_str(buf2_151,")");
                            type_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value186=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 600, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(right_value186,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj60=come_value->c_value;
                            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value188=buffer_to_string(buf2_151))));
                            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj61=come_value->type;
                            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(type_152))));
                            come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_value->var=((void*)0);
                            __dec_obj62=right_type2_120;
                            right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(type_152))));
                            come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            method_name_148 = come_decrement_ref_count2(method_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(buf2_151,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional243=string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1,                            _if_conditional243) {
                                if(_if_conditional244=string_operator_equals(right_type2_120->mClass->mName,"char")&&right_type2_120->mPointerNum==1,                                _if_conditional244) {
                                }
                                else {
                                    if(_if_conditional245=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                                    _if_conditional245) {
                                    }
                                    else {
                                        if(_if_conditional246=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                        _if_conditional246) {
                                        }
                                        else {
                                            if(_if_conditional247=string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                            _if_conditional247) {
                                                if(print_err_msg) {
                                                    err_msg(info,"type error10");
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                    exit(2);
                                                }
                                                __result121__ = (_Bool)0;
                                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result121__;
                                            }
                                            else {
                                                if(_if_conditional249=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum>0,                                                _if_conditional249) {
                                                }
                                                else {
                                                    if(_if_conditional250=string_operator_equals(right_type2_120->mClass->mName,"void"),                                                    _if_conditional250) {
                                                        if(print_err_msg) {
                                                            err_msg(info,"type error11");
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                            exit(2);
                                                        }
                                                        __result122__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result122__;
                                                    }
                                                    else {
                                                        if(_if_conditional252=string_operator_not_equals(left_type->mClass->mName,right_type2_120->mClass->mName),                                                        _if_conditional252) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error12");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                                exit(2);
                                                            }
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
                                if(_if_conditional254=string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1,                                _if_conditional254) {
                                    if(_if_conditional255=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum==1,                                    _if_conditional255) {
                                    }
                                    else {
                                        if(_if_conditional256=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                                        _if_conditional256) {
                                        }
                                        else {
                                            if(_if_conditional257=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                            _if_conditional257) {
                                            }
                                            else {
                                                if(_if_conditional258=string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                                _if_conditional258) {
                                                }
                                                else {
                                                    if(_if_conditional259=string_operator_equals(right_type2_120->mClass->mName,"void")&&right_type2_120->mPointerNum>0,                                                    _if_conditional259) {
                                                    }
                                                    else {
                                                        if(_if_conditional260=string_operator_equals(right_type2_120->mClass->mName,"void"),                                                        _if_conditional260) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error13");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                                exit(2);
                                                            }
                                                            __result124__ = (_Bool)0;
                                                            come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result124__;
                                                        }
                                                        else {
                                                            if(_if_conditional262=right_type2_120->mPointerNum==0,                                                            _if_conditional262) {
                                                                tmp_153=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("(void*)%s",come_value->c_value))));
                                                                right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                __dec_obj63=come_value->c_value;
                                                                come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value192=string_clone(tmp_153))));
                                                                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                __dec_obj64=come_value->type;
                                                                come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(left_type))));
                                                                come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_value->var=((void*)0);
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
                                    if(_if_conditional263=left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct),                                    _if_conditional263) {
                                        if(_if_conditional264=right_type2_120->mPointerNum>0||(right_type2_120->mPointerNum==0&&right_type2_120->mClass->mStruct),                                        _if_conditional264) {
                                            if(_if_conditional265=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_120->mClass->mName,"void"),                                            _if_conditional265) {
                                            }
                                            else {
                                                if(_if_conditional266=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                                _if_conditional266) {
                                                }
                                                else {
                                                    if(_if_conditional267=string_operator_not_equals(left_type->mClass->mName,right_type2_120->mClass->mName),                                                    _if_conditional267) {
                                                        if(print_err_msg) {
                                                            err_msg(info,"type error14");
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                            exit(2);
                                                        }
                                                        __result125__ = (_Bool)0;
                                                        come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        return __result125__;
                                                    }
                                                    else {
                                                        if(_if_conditional269=left_type->mPointerNum!=right_type2_120->mPointerNum,                                                        _if_conditional269) {
                                                            printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                            printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                        }
                                                        else {
                                                            if(_if_conditional271=list$1sNodeph_length(right_type2_120->mArrayNum)>0,                                                            _if_conditional271) {
                                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum,list$1sNodeph_length(right_type2_120->mArrayNum));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else {
                                            if(_if_conditional272=string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_120->mClass->mName,"void"),                                            _if_conditional272) {
                                            }
                                            else {
                                                if(_if_conditional273=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_120->mClass->mName,"va_list"),                                                _if_conditional273) {
                                                }
                                                else {
                                                    if(_if_conditional274=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_120->mClass->mName,"__builtin_va_list"),                                                    _if_conditional274) {
                                                    }
                                                    else {
                                                        if(_if_conditional275=string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_120->mClass->mName,"lambda"),                                                        _if_conditional275) {
                                                        }
                                                        else {
                                                            if(_if_conditional276=left_type->mPointerNum>0&&right_type2_120->mPointerNum==0&&string_operator_equals(right_type2_120->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                                            _if_conditional276) {
                                                                if(print_err_msg) {
                                                                    err_msg(info,"type error15");
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                                    exit(2);
                                                                }
                                                                __result128__ = (_Bool)0;
                                                                come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result128__;
                                                            }
                                                            else {
                                                                if(_if_conditional278=!(string_operator_equals(right_type2_120->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_120->mPointerNum==0,                                                                _if_conditional278) {
                                                                    tmp_154=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("(void*)%s",come_value->c_value))));
                                                                    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    __dec_obj66=come_value->c_value;
                                                                    come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value196=string_clone(tmp_154))));
                                                                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    __dec_obj67=come_value->type;
                                                                    come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(left_type))));
                                                                    come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    __result129__ = (_Bool)1;
                                                                    tmp_154 = come_decrement_ref_count2(tmp_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result129__;
                                                                    tmp_154 = come_decrement_ref_count2(tmp_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if(_if_conditional279=list$1sTypeph_length(left_type->mGenericsTypes)>0,                                        _if_conditional279) {
                                            if(_if_conditional280=list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_120->mGenericsTypes),                                            _if_conditional280) {
                                                err_msg(info,"generics type number error");
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                printf("right type is %s pointer num %d\n",right_type2_120->mClass->mName,right_type2_120->mPointerNum);
                                                exit(2);
                                            }
                                            for(                                            i_155=0;                                            i_155<list$1sTypeph_length(left_type->mGenericsTypes);                                            i_155++                                            ){
                                                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_155), "05type.c", 768, 7)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_120->mGenericsTypes,i_155), "05type.c", 768, 8)),come_value,(_Bool)0,(_Bool)1,info);
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
        if(_if_conditional157=self==((void*)0),        _if_conditional157) {
            __result97__ = 0;
            return __result97__;
        }
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
            if(_if_conditional161=position<0,            _if_conditional161) {
                position+=self->len;
            }
            it_126=self->head;
            i_127=0;
            while(_while_condtional32=it_126!=((void*)0),            _while_condtional32) {
                if(_if_conditional162=position==i_127,                _if_conditional162) {
                    __result99__ = __result_obj__ = it_126->item;
                    return __result99__;
                }
                it_126=it_126->next;
                i_127++;
            }
            memset(&default_value_128,0,sizeof(struct sType*));
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
                    memset(&default_value_134,0,sizeof(struct sClass*));
                    hash_135=string_get_hash_key(((char*)key))%self->size;
                    it_136=hash_135;
                    while(_while_condtional34=(_Bool)1,                    _while_condtional34) {
                        if(_if_conditional166=self->item_existance[it_136],                        _if_conditional166) {
                            if(_if_conditional167=string_equals(self->keys[it_136],key),                            _if_conditional167) {
                                __result102__ = __result_obj__ = self->items[it_136];
                                come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                return __result102__;
                            }
                            it_136++;
                            if(_if_conditional175=it_136>=self->size,                            _if_conditional175) {
                                it_136=0;
                            }
                            else {
                                if(_if_conditional176=it_136==hash_135,                                _if_conditional176) {
                                    __result103__ = __result_obj__ = default_value_134;
                                    come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result103__;
                                }
                            }
                        }
                        else {
                            __result104__ = __result_obj__ = default_value_134;
                            come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result104__;
                        }
                    }
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
                                    if(_if_conditional168=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional168) {
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional169=self!=((void*)0)&&self->mFields!=((void*)0),                                    _if_conditional169) {
                                        come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional173=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                    _if_conditional173) {
                                        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional174=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                    _if_conditional174) {
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
                                            it_137=self->head;
                                            while(_while_condtional35=it_137!=((void*)0),                                            _while_condtional35) {
                                                prev_it_138=it_137;
                                                it_137=it_137->next;
                                                come_call_finalizer3(prev_it_138,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional170=self!=((void*)0)&&self->item!=((void*)0),                                                    _if_conditional170) {
                                                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional171;
_Bool _if_conditional172;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional171=self!=((void*)0)&&self->v1!=((void*)0),                                                            _if_conditional171) {
                                                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional172=self!=((void*)0)&&self->v2!=((void*)0),                                                            _if_conditional172) {
                                                                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_142;
unsigned int it_143;
_Bool _while_condtional36;
_Bool _if_conditional217;
_Bool _if_conditional218;
struct sFun* __result115__;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct sFun* __result116__;
struct sFun* __result117__;
struct sFun* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_142, 0, sizeof(unsigned int));
memset(&it_143, 0, sizeof(unsigned int));
                                                            hash_142=string_get_hash_key(((char*)key))%self->size;
                                                            it_143=hash_142;
                                                            while(_while_condtional36=(_Bool)1,                                                            _while_condtional36) {
                                                                if(_if_conditional217=self->item_existance[it_143],                                                                _if_conditional217) {
                                                                    if(_if_conditional218=string_equals(self->keys[it_143],key),                                                                    _if_conditional218) {
                                                                        __result115__ = __result_obj__ = self->items[it_143];
                                                                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result115__;
                                                                    }
                                                                    it_143++;
                                                                    if(_if_conditional234=it_143>=self->size,                                                                    _if_conditional234) {
                                                                        it_143=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional235=it_143==hash_142,                                                                        _if_conditional235) {
                                                                            __result116__ = __result_obj__ = default_value;
                                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result116__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __result117__ = __result_obj__ = default_value;
                                                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result117__;
                                                                }
                                                            }
                                                            __result118__ = __result_obj__ = default_value;
                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result118__;
                                                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional219=self!=((void*)0)&&self->mName!=((void*)0),                                                                            _if_conditional219) {
                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional220=self!=((void*)0)&&self->mResultType!=((void*)0),                                                                            _if_conditional220) {
                                                                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional221=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                                            _if_conditional221) {
                                                                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional222=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                                            _if_conditional222) {
                                                                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional223=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                                            _if_conditional223) {
                                                                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional224=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                                            _if_conditional224) {
                                                                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional225=self!=((void*)0)&&self->mBlock!=((void*)0),                                                                            _if_conditional225) {
                                                                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional228=self!=((void*)0)&&self->mSource!=((void*)0),                                                                            _if_conditional228) {
                                                                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional229=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                                            _if_conditional229) {
                                                                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional230=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                                            _if_conditional230) {
                                                                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional231=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                                            _if_conditional231) {
                                                                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional232=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                                            _if_conditional232) {
                                                                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional233=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                            _if_conditional233) {
                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional226;
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional226=self!=((void*)0)&&self->mNodes!=((void*)0),                                                                                    _if_conditional226) {
                                                                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    if(_if_conditional227=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                                                    _if_conditional227) {
                                                                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional270;
int __result126__;
int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional270=self==((void*)0),                                                                _if_conditional270) {
                                                                    __result126__ = 0;
                                                                    return __result126__;
                                                                }
                                                                __result127__ = self->len;
                                                                return __result127__;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__;
void* right_value198;
struct sType* right_type2_156;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value199;
char* method_name_157;
_Bool _if_conditional290;
struct sType* obj_type_158;
_Bool _if_conditional291;
struct sType* obj_type2_159;
void* right_value200;
void* right_value201;
char* __dec_obj68;
void* right_value202;
void* right_value203;
struct buffer* buf2_160;
void* right_value204;
void* right_value205;
struct sType* type_161;
void* right_value206;
void* right_value207;
char* __dec_obj69;
void* right_value208;
struct sType* __dec_obj70;
void* right_value209;
struct sType* __dec_obj71;
_Bool _if_conditional292;
void* right_value210;
char* method_name_162;
_Bool _if_conditional293;
struct sType* obj_type_163;
_Bool _if_conditional294;
struct sType* obj_type2_164;
void* right_value211;
void* right_value212;
char* __dec_obj72;
void* right_value213;
void* right_value214;
struct buffer* buf2_165;
void* right_value215;
void* right_value216;
struct sType* type_166;
void* right_value217;
char* __dec_obj73;
void* right_value218;
struct sType* __dec_obj74;
void* right_value219;
struct sType* __dec_obj75;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
memset(&right_type2_156, 0, sizeof(struct sType*));
right_value199 = (void*)0;
memset(&method_name_157, 0, sizeof(char*));
memset(&obj_type_158, 0, sizeof(struct sType*));
memset(&obj_type2_159, 0, sizeof(struct sType*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&buf2_160, 0, sizeof(struct buffer*));
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&type_161, 0, sizeof(struct sType*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&method_name_162, 0, sizeof(char*));
memset(&obj_type_163, 0, sizeof(struct sType*));
memset(&obj_type2_164, 0, sizeof(struct sType*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
memset(&buf2_165, 0, sizeof(struct buffer*));
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&type_166, 0, sizeof(struct sType*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
    right_type2_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(right_type))));
    come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional281=string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1,    _if_conditional281) {
        if(_if_conditional282=string_operator_equals(right_type2_156->mClass->mName,"integer")&&right_type2_156->mPointerNum==1,        _if_conditional282) {
        }
        else {
            if(_if_conditional283=string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_156->mClass->mName,"__builtin_va_list"),            _if_conditional283) {
            }
            else {
                if(_if_conditional284=string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_156->mClass->mName,"va_list"),                _if_conditional284) {
                }
                else {
                    if(_if_conditional285=string_operator_equals(right_type2_156->mClass->mName,"lambda"),                    _if_conditional285) {
                    }
                    else {
                        if(_if_conditional286=string_operator_equals(right_type2_156->mClass->mName,"void")&&right_type2_156->mPointerNum>0,                        _if_conditional286) {
                        }
                        else {
                            if(_if_conditional287=string_operator_equals(right_type2_156->mClass->mName,"void"),                            _if_conditional287) {
                            }
                            else {
                                if(_if_conditional288=left_type->mPointerNum>0&&right_type2_156->mPointerNum==0&&string_operator_equals(right_type2_156->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"),                                _if_conditional288) {
                                }
                                else {
                                    if(_if_conditional289=right_type->mPointerNum>0,                                    _if_conditional289) {
                                    }
                                    else {
                                        method_name_157=(char*)come_increment_ref_count(((char*)(right_value199=create_method_name(right_type2_156,(_Bool)0,"to_integer",info,(_Bool)1))));
                                        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional290=map$2charphsFunph_at(info->funcs,method_name_157,((void*)0))==((void*)0),                                        _if_conditional290) {
                                            obj_type_158=right_type2_156->mNoSolvedGenericsType->v1;
                                            if(_if_conditional291=obj_type_158&&list$1sTypeph_length(obj_type_158->mGenericsTypes)>0,                                            _if_conditional291) {
                                                obj_type2_159=right_type2_156;
                                                __dec_obj68=method_name_157;
                                                method_name_157=(char*)come_increment_ref_count(((char*)(right_value201=make_generics_function(obj_type2_159,(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string("to_integer")))),info,(_Bool)1))));
                                                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                err_msg(info,"require to_string implementation(%s)",right_type2_156->mClass->mName);
                                                exit(1);
                                            }
                                        }
                                        buf2_160=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value203=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value202=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 811, "buffer"))))))));
                                        come_call_finalizer3(right_value202,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value203,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                        buffer_append_str(buf2_160,method_name_157);
                                        buffer_append_str(buf2_160,"(");
                                        buffer_append_str(buf2_160,come_value->c_value);
                                        buffer_append_str(buf2_160,")");
                                        type_161=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 818, "sType")))),"integer",(_Bool)0,info))));
                                        come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        type_161->mHeap=(_Bool)1;
                                        type_161->mPointerNum=1;
                                        __dec_obj69=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value207=append_object_to_right_values(((char*)(right_value206=buffer_to_string(buf2_160))),(struct sType*)come_increment_ref_count(type_161),info))));
                                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj70=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(type_161))));
                                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value208,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_value->var=((void*)0);
                                        __dec_obj71=right_type2_156;
                                        right_type2_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(type_161))));
                                        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        method_name_157 = come_decrement_ref_count2(method_name_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(buf2_160,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(type_161,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        if(_if_conditional292=string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1),        _if_conditional292) {
            method_name_162=(char*)come_increment_ref_count(((char*)(right_value210=create_method_name(right_type2_156,(_Bool)0,"to_int",info,(_Bool)1))));
            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional293=map$2charphsFunph_at(info->funcs,method_name_162,((void*)0))==((void*)0),            _if_conditional293) {
                obj_type_163=right_type2_156->mNoSolvedGenericsType->v1;
                if(_if_conditional294=obj_type_163&&list$1sTypeph_length(obj_type_163->mGenericsTypes)>0,                _if_conditional294) {
                    obj_type2_164=right_type2_156;
                    __dec_obj72=method_name_162;
                    method_name_162=(char*)come_increment_ref_count(((char*)(right_value212=make_generics_function(obj_type2_164,(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string("to_int")))),info,(_Bool)1))));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",right_type2_156->mClass->mName);
                    exit(1);
                }
            }
            buf2_165=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value214=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value213=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 844, "buffer"))))))));
            come_call_finalizer3(right_value213,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value214,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf2_165,method_name_162);
            buffer_append_str(buf2_165,"(");
            buffer_append_str(buf2_165,come_value->c_value);
            buffer_append_str(buf2_165,")");
            type_166=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value215=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 851, "sType")))),"int",(_Bool)0,info))));
            come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj73=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value217=buffer_to_string(buf2_165))));
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj74=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(type_166))));
            come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value218,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value->var=((void*)0);
            __dec_obj75=right_type2_156;
            right_type2_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(type_166))));
            come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value219,sType_finalize, 0, 1, 0, 0, __result_obj__);
            method_name_162 = come_decrement_ref_count2(method_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_165,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(right_type2_156,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
void* right_value220;
struct sType* result_type_167;
_Bool _if_conditional295;
char* var_name_168;
char* p_169;
int sline_170;
_Bool _if_conditional296;
void* right_value221;
char* __exception_result_var_b4;
char* word_171;
_Bool _if_conditional297;
_Bool between_brace_172;
char* p_173;
int sline_174;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value222;
char* __exception_result_var_b5;
char* word_175;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _while_condtional37;
char* p_176;
int sline_177;
_Bool _if_conditional303;
void* right_value223;
char* __exception_result_var_b6;
char* word_178;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value224;
char* __exception_result_var_b7;
char* __dec_obj76;
static int num_anonymous_var_name_179=0;
void* right_value225;
char* __dec_obj77;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool no_comma_180;
void* right_value226;
struct sNode* node_181;
struct sNode* __dec_obj78;
_Bool _while_condtional38;
char* p_182;
int sline_183;
_Bool _if_conditional309;
void* right_value227;
char* __exception_result_var_b8;
char* word_184;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value228;
struct sNode* node_185;
int __exception_result_var_b9;
void* right_value232;
void* right_value233;
struct tuple2$2sTypephcharph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&result_type_167, 0, sizeof(struct sType*));
memset(&var_name_168, 0, sizeof(char*));
memset(&p_169, 0, sizeof(char*));
memset(&sline_170, 0, sizeof(int));
right_value221 = (void*)0;
memset(&word_171, 0, sizeof(char*));
memset(&between_brace_172, 0, sizeof(_Bool));
memset(&p_173, 0, sizeof(char*));
memset(&sline_174, 0, sizeof(int));
right_value222 = (void*)0;
memset(&word_175, 0, sizeof(char*));
memset(&p_176, 0, sizeof(char*));
memset(&sline_177, 0, sizeof(int));
right_value223 = (void*)0;
memset(&word_178, 0, sizeof(char*));
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&no_comma_180, 0, sizeof(_Bool));
right_value226 = (void*)0;
memset(&node_181, 0, sizeof(struct sNode*));
memset(&p_182, 0, sizeof(char*));
memset(&sline_183, 0, sizeof(int));
right_value227 = (void*)0;
memset(&word_184, 0, sizeof(char*));
right_value228 = (void*)0;
memset(&node_185, 0, sizeof(struct sNode*));
right_value232 = (void*)0;
right_value233 = (void*)0;
    result_type_167=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(base_type_name))));
    come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional295=!first,    _if_conditional295) {
        result_type_167->mPointerNum=0;
    }
    var_name_168=((void*)0);
    {
        p_169=info->p;
        sline_170=info->sline;
        if(_if_conditional296=xisalpha(*info->p)||*info->p==95,        _if_conditional296) {
            word_171=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 874, 9),__exception_result_var_b4=((char*)(right_value221=parse_word(info))), come_pop_stackframe(), __exception_result_var_b4));
            right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional297=string_operator_equals(word_171,"const")||string_operator_equals(word_171,"__restrict")||string_operator_equals(word_171,"restrict")||string_operator_equals(word_171,"__user")||string_operator_equals(word_171,"volatile")||string_operator_equals(word_171,"_Nonnull")||string_operator_equals(word_171,"_Nullable")||string_operator_equals(word_171,"_Null_unspecified")||string_operator_equals(word_171,"__user")||string_operator_equals(word_171,"_Addr"),            _if_conditional297) {
            }
            else {
                info->p=p_169;
                info->sline=sline_170;
            }
            word_171 = come_decrement_ref_count2(word_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_169;
            info->sline=sline_170;
        }
    }
    between_brace_172=(_Bool)0;
    {
        p_173=info->p;
        sline_174=info->sline;
        if(_if_conditional298=*info->p==40,        _if_conditional298) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional299=xisalpha(*info->p)||*info->p==95,            _if_conditional299) {
                word_175=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 899, 10),__exception_result_var_b5=((char*)(right_value222=parse_word(info))), come_pop_stackframe(), __exception_result_var_b5));
                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional300=is_type_name(word_175,info),                _if_conditional300) {
                }
                else {
                    if(_if_conditional301=*info->p==41,                    _if_conditional301) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional302=*info->p!=40,                        _if_conditional302) {
                            between_brace_172=(_Bool)1;
                        }
                    }
                }
                word_175 = come_decrement_ref_count2(word_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_173;
        info->sline=sline_174;
    }
    parse_sharp_v5(info);
    while(_while_condtional37=*info->p==42,    _while_condtional37) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_176=info->p;
            sline_177=info->sline;
            if(_if_conditional303=xisalpha(*info->p)||*info->p==95,            _if_conditional303) {
                word_178=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 928, 11),__exception_result_var_b6=((char*)(right_value223=parse_word(info))), come_pop_stackframe(), __exception_result_var_b6));
                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional304=string_operator_equals(word_178,"const")||string_operator_equals(word_178,"__restrict")||string_operator_equals(word_178,"restrict")||string_operator_equals(word_178,"__user")||string_operator_equals(word_178,"volatile")||string_operator_equals(word_178,"_Nonnull")||string_operator_equals(word_178,"_Nullable")||string_operator_equals(word_178,"_Null_unspecified")||string_operator_equals(word_178,"__user")||string_operator_equals(word_178,"_Addr"),                _if_conditional304) {
                }
                else {
                    info->p=p_176;
                    info->sline=sline_177;
                }
                word_178 = come_decrement_ref_count2(word_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_176;
                info->sline=sline_177;
            }
        }
        result_type_167->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(_if_conditional305=between_brace_172&&*info->p==40,    _if_conditional305) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional306=xisalnum(*info->p)||*info->p==95,    _if_conditional306) {
        __dec_obj76=var_name_168;
        var_name_168=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 953, 12),__exception_result_var_b7=((char*)(right_value224=parse_word(info))), come_pop_stackframe(), __exception_result_var_b7));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        num_anonymous_var_name_179++;
        __dec_obj77=var_name_168;
        var_name_168=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_179))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional307=between_brace_172&&*info->p==41,    _if_conditional307) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(_if_conditional308=*info->p==58,    _if_conditional308) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_180=info->no_comma;
        info->no_comma=(_Bool)1;
        node_181=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=expression_v13(info))));
        if(right_value226) { right_value226 = come_decrement_ref_count2(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_180;
        __dec_obj78=result_type_167->mSizeNum;
        result_type_167->mSizeNum=(struct sNode*)come_increment_ref_count(node_181);
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_181) { node_181 = come_decrement_ref_count2(node_181, ((struct sNode*)node_181)->finalize, ((struct sNode*)node_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(_while_condtional38=*info->p==91,    _while_condtional38) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_182=info->p;
            sline_183=info->sline;
            if(_if_conditional309=xisalpha(*info->p)||*info->p==95,            _if_conditional309) {
                word_184=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 988, 13),__exception_result_var_b8=((char*)(right_value227=parse_word(info))), come_pop_stackframe(), __exception_result_var_b8));
                right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional310=string_operator_equals(word_184,"const")||string_operator_equals(word_184,"__restrict")||string_operator_equals(word_184,"restrict")||string_operator_equals(word_184,"__user")||string_operator_equals(word_184,"volatile")||string_operator_equals(word_184,"_Nonnull")||string_operator_equals(word_184,"_Nullable")||string_operator_equals(word_184,"_Null_unspecified")||string_operator_equals(word_184,"__user")||string_operator_equals(word_184,"_Addr"),                _if_conditional310) {
                }
                else {
                    info->p=p_182;
                    info->sline=sline_183;
                }
                word_184 = come_decrement_ref_count2(word_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_182;
                info->sline=sline_183;
            }
        }
        if(_if_conditional311=*info->p==93,        _if_conditional311) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_167->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_185=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=expression_v13(info))));
        if(right_value228) { right_value228 = come_decrement_ref_count2(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(result_type_167->mArrayNum,(struct sNode*)come_increment_ref_count(node_185));
        parse_sharp_v5(info);
        (come_push_stackframe("05type.c", 1016, 14),__exception_result_var_b9=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b9);
        if(node_185) { node_185 = come_decrement_ref_count2(node_185, ((struct sNode*)node_185)->finalize, ((struct sNode*)node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result133__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value233=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value232=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1019, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_167),(char*)come_increment_ref_count(var_name_168))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type_167,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_168 = come_decrement_ref_count2(var_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value233,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result133__;
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type_167,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_168 = come_decrement_ref_count2(var_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional312;
void* right_value229;
struct list_item$1sNodeph* litem_186;
struct sNode* __dec_obj79;
_Bool _if_conditional313;
void* right_value230;
struct list_item$1sNodeph* litem_187;
struct sNode* __dec_obj80;
void* right_value231;
struct list_item$1sNodeph* litem_188;
struct sNode* __dec_obj81;
struct list$1sNodeph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
memset(&litem_186, 0, sizeof(struct list_item$1sNodeph*));
right_value230 = (void*)0;
memset(&litem_187, 0, sizeof(struct list_item$1sNodeph*));
right_value231 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional312=self->len==0,            _if_conditional312) {
                litem_186=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value229=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 217, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value229,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_186->prev=((void*)0);
                litem_186->next=((void*)0);
                __dec_obj79=litem_186->item;
                litem_186->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_186;
                self->head=litem_186;
            }
            else {
                if(_if_conditional313=self->len==1,                _if_conditional313) {
                    litem_187=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value230=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value230,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_187->prev=self->head;
                    litem_187->next=((void*)0);
                    __dec_obj80=litem_187->item;
                    litem_187->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_187;
                    self->head->next=litem_187;
                }
                else {
                    litem_188=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value231=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value231,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_188->prev=self->tail;
                    litem_188->next=((void*)0);
                    __dec_obj81=litem_188->item;
                    litem_188->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail->next=litem_188;
                    self->tail=litem_188;
                }
            }
            self->len++;
            __result131__ = __result_obj__ = self;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result131__;
            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj82;
char* __dec_obj83;
struct tuple2$2sTypephcharph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj82=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj83=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
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
_Bool _if_conditional314;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional314=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional314) {
                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional315=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional315) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
char* p_189;
int sline_190;
_Bool _if_conditional316;
void* right_value234;
char* __exception_result_var_b10;
char* word_191;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_189, 0, sizeof(char*));
memset(&sline_190, 0, sizeof(int));
right_value234 = (void*)0;
memset(&word_191, 0, sizeof(char*));
    p_189=info->p;
    sline_190=info->sline;
    if(_if_conditional316=xisalpha(*info->p)||*info->p==95,    _if_conditional316) {
        word_191=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1028, 15),__exception_result_var_b10=((char*)(right_value234=parse_word(info))), come_pop_stackframe(), __exception_result_var_b10));
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional317=string_operator_equals(word_191,"const")||string_operator_equals(word_191,"__restrict")||string_operator_equals(word_191,"restrict")||string_operator_equals(word_191,"__user")||string_operator_equals(word_191,"volatile")||string_operator_equals(word_191,"_Nonnull")||string_operator_equals(word_191,"_Nullable")||string_operator_equals(word_191,"_Null_unspecified")||string_operator_equals(word_191,"__user")||string_operator_equals(word_191,"_Addr"),        _if_conditional317) {
        }
        else {
            info->p=p_189;
            info->sline=sline_190;
        }
        word_191 = come_decrement_ref_count2(word_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_189;
        info->sline=sline_190;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__;
_Bool no_output_err_192;
void* right_value235;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_193;
char* name_194;
_Bool err_195;
void* right_value236;
void* right_value237;
struct tuple3$3sTypephcharphbool* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&no_output_err_192, 0, sizeof(_Bool));
right_value235 = (void*)0;
memset(&type_193, 0, sizeof(struct sType*));
memset(&name_194, 0, sizeof(char*));
memset(&err_195, 0, sizeof(_Bool));
memset(&type_193, 0, sizeof(struct sType*));
memset(&name_194, 0, sizeof(char*));
memset(&err_195, 0, sizeof(_Bool));
right_value236 = (void*)0;
right_value237 = (void*)0;
    no_output_err_192=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value235=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_193=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_194=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_195=multiple_assign_var2->v3;
    come_call_finalizer3(right_value235,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_192;
    __result135__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value237=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value236=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1051, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_193),(char*)come_increment_ref_count(name_194),err_195)));
    come_call_finalizer3(type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_194 = come_decrement_ref_count2(name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value237,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result135__;
    come_call_finalizer3(type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_194 = come_decrement_ref_count2(name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
struct sType* __dec_obj84;
char* __dec_obj85;
struct tuple3$3sTypephcharphbool* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj84=self->v1;
        self->v1=(struct sType*)come_increment_ref_count(v1);
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj85=self->v2;
        self->v2=(char*)come_increment_ref_count(v2);
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->v3=v3;
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
char* head_196;
int head_sline_197;
void* right_value238;
char* __exception_result_var_b11;
char* type_name_198;
_Bool _while_condtional39;
void* right_value239;
char* __exception_result_var_b12;
char* __dec_obj86;
_Bool record__199;
_Bool constant_200;
_Bool static__201;
_Bool volatile__202;
_Bool register__203;
_Bool unsigned__204;
_Bool long__205;
_Bool long_long_206;
_Bool short__207;
_Bool restrict__208;
_Bool struct__209;
_Bool union__210;
_Bool enum__211;
_Bool no_heap_212;
_Bool extern__213;
_Bool inline__214;
_Bool come_mem_core__215;
struct sNode* alignas__216;
_Bool anonymous_type_217;
_Bool anonymous_name_218;
_Bool _while_condtional40;
_Bool _if_conditional318;
_Bool _if_conditional319;
char* p_219;
int sline_220;
void* right_value240;
_Bool _if_conditional320;
void* right_value241;
char* __dec_obj87;
void* right_value242;
char* __dec_obj88;
_Bool _if_conditional321;
void* right_value243;
char* __exception_result_var_b13;
char* __dec_obj89;
_Bool _if_conditional322;
char* p_221;
int sline_222;
_Bool _while_condtional41;
_Bool _if_conditional323;
_Bool _if_conditional324;
_Bool _if_conditional325;
void* right_value244;
void* right_value245;
struct tuple3$3sTypephcharphbool* __result136__;
_Bool _if_conditional326;
char* p_223;
int sline_224;
void* right_value246;
_Bool _if_conditional327;
void* right_value247;
void* right_value248;
struct tuple3$3sTypephcharphbool* __result137__;
_Bool _if_conditional328;
_Bool _if_conditional329;
char* p_225;
int sline_226;
void* right_value249;
_Bool _if_conditional330;
void* right_value250;
char* __dec_obj90;
void* right_value251;
char* __dec_obj91;
void* right_value252;
char* __exception_result_var_b14;
char* __dec_obj92;
_Bool _if_conditional331;
char* p_227;
int sline_228;
void* right_value253;
_Bool _if_conditional332;
void* right_value254;
void* right_value255;
struct tuple3$3sTypephcharphbool* __result138__;
_Bool _if_conditional333;
_Bool _if_conditional334;
char* p_229;
int sline_230;
void* right_value256;
_Bool _if_conditional335;
void* right_value257;
void* right_value258;
struct tuple3$3sTypephcharphbool* __result139__;
void* right_value259;
char* __dec_obj93;
void* right_value260;
char* __exception_result_var_b15;
char* __dec_obj94;
_Bool _if_conditional336;
char* p_231;
int sline_232;
void* right_value261;
_Bool _if_conditional337;
void* right_value262;
void* right_value263;
struct tuple3$3sTypephcharphbool* __result140__;
_Bool _if_conditional338;
int __exception_result_var_b16;
void* right_value264;
struct sNode* exp_233;
struct sNode* __dec_obj95;
int __exception_result_var_b17;
void* right_value265;
char* __exception_result_var_b18;
char* __dec_obj96;
_Bool _if_conditional339;
void* right_value266;
char* __exception_result_var_b19;
char* __dec_obj97;
_Bool _if_conditional340;
void* right_value267;
char* __exception_result_var_b20;
char* __dec_obj98;
_Bool _if_conditional341;
void* right_value268;
char* __exception_result_var_b21;
char* __dec_obj99;
_Bool _if_conditional342;
void* right_value269;
char* __exception_result_var_b22;
char* __dec_obj100;
_Bool _if_conditional343;
void* right_value270;
char* __exception_result_var_b23;
char* __dec_obj101;
_Bool _if_conditional344;
void* right_value271;
char* __exception_result_var_b24;
char* __dec_obj102;
_Bool _if_conditional345;
void* right_value272;
char* __exception_result_var_b25;
char* __dec_obj103;
_Bool _if_conditional346;
void* right_value273;
char* __exception_result_var_b26;
char* __dec_obj104;
_Bool _if_conditional347;
char* p_234;
int sline_235;
_Bool _if_conditional348;
void* right_value274;
char* __dec_obj105;
void* right_value275;
char* __exception_result_var_b27;
char* __dec_obj106;
_Bool _if_conditional349;
void* right_value276;
char* __exception_result_var_b28;
char* __dec_obj107;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value277;
char* __exception_result_var_b29;
char* __dec_obj108;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value278;
char* __dec_obj109;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value279;
char* __dec_obj110;
_Bool _if_conditional357;
_Bool _if_conditional358;
char* p_236;
int sline_237;
void* right_value280;
char* __exception_result_var_b30;
char* __dec_obj111;
_Bool _if_conditional359;
_Bool _if_conditional360;
char* p_238;
int sline_239;
void* right_value281;
char* __exception_result_var_b31;
char* __dec_obj112;
_Bool _if_conditional361;
void* right_value282;
char* __dec_obj113;
void* right_value283;
char* __dec_obj114;
_Bool _if_conditional362;
_Bool _if_conditional363;
char* p_240;
int sline_241;
void* right_value284;
char* __exception_result_var_b32;
char* __dec_obj115;
_Bool _if_conditional364;
void* right_value285;
char* __dec_obj116;
void* right_value286;
char* __dec_obj117;
_Bool _if_conditional365;
void* right_value287;
char* __dec_obj118;
void* right_value288;
char* __dec_obj119;
_Bool _if_conditional366;
void* right_value289;
char* __exception_result_var_b33;
char* __dec_obj120;
_Bool _if_conditional367;
void* right_value290;
char* __exception_result_var_b34;
char* __dec_obj121;
_Bool _if_conditional368;
void* right_value291;
char* __exception_result_var_b35;
char* __dec_obj122;
_Bool _if_conditional369;
void* right_value292;
char* __exception_result_var_b36;
char* __dec_obj123;
_Bool _if_conditional370;
void* right_value293;
char* __exception_result_var_b37;
char* __dec_obj124;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
char* p_242;
int sline_243;
void* right_value294;
char* __exception_result_var_b38;
char* __dec_obj125;
_Bool _if_conditional374;
_Bool _if_conditional375;
_Bool _if_conditional376;
void* right_value295;
char* __dec_obj126;
int pointer_num_244;
_Bool _while_condtional42;
_Bool heap_245;
_Bool _if_conditional377;
_Bool lambda_flag_246;
char* pX_247;
int slineX_248;
_Bool _if_conditional378;
void* right_value296;
char* __exception_result_var_b39;
_Bool _if_conditional379;
struct sType* type_249;
char* var_name_250;
_Bool function_pointer_flag_251;
char* p_252;
int sline_253;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value297;
char* __exception_result_var_b40;
char* word_254;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool var_name_between_brace_255;
char* p_256;
int sline_257;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value298;
char* __exception_result_var_b41;
char* word_258;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
static int anonymous_num_259=0;
_Bool _if_conditional391;
_Bool _if_conditional392;
void* right_value299;
char* __dec_obj127;
void* right_value300;
struct sNode* node_260;
_Bool _if_conditional393;
void* right_value301;
void* right_value302;
struct tuple3$3sTypephcharphbool* __result141__;
int pointer_num_261;
_Bool _while_condtional43;
void* right_value303;
void* right_value304;
struct sType* __dec_obj128;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value305;
char* __dec_obj129;
void* right_value306;
struct sNode* node_262;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value307;
void* right_value308;
struct tuple3$3sTypephcharphbool* __result142__;
void* right_value309;
void* right_value310;
struct sType* __dec_obj130;
_Bool _if_conditional398;
_Bool _if_conditional399;
void* right_value311;
char* __dec_obj131;
void* right_value312;
struct sNode* node_263;
_Bool _if_conditional400;
void* right_value313;
void* right_value314;
struct tuple3$3sTypephcharphbool* __result143__;
int pointer_num_264;
_Bool _while_condtional44;
void* right_value315;
void* right_value316;
struct sType* __dec_obj132;
void* right_value317;
void* right_value318;
struct tuple3$3sTypephcharphbool* __result144__;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value319;
char* __dec_obj133;
_Bool _if_conditional404;
static int num_anonymous_var_name_265=0;
void* right_value320;
char* __dec_obj134;
_Bool _if_conditional405;
void* right_value321;
char* __exception_result_var_b42;
char* __dec_obj135;
static int num_anonymous_var_name_266=0;
void* right_value322;
char* __dec_obj136;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool no_comma_267;
void* right_value323;
struct sNode* node_268;
struct sNode* __dec_obj137;
_Bool _if_conditional408;
struct sType* result_type_269;
_Bool _if_conditional413;
void* right_value324;
struct sType* __dec_obj138;
_Bool _if_conditional419;
int i_278;
_Bool _if_conditional423;
void* right_value325;
void* right_value326;
void* right_value327;
struct sType* __dec_obj139;
_Bool _if_conditional424;
int i_282;
_Bool _if_conditional425;
void* right_value328;
void* right_value329;
void* right_value330;
struct sType* __dec_obj140;
void* right_value331;
void* right_value332;
struct sType* __dec_obj141;
struct sNode* __dec_obj142;
void* right_value333;
char* __exception_result_var_b43;
char* __dec_obj143;
void* right_value334;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var3;
struct list$1sTypeph* param_types_283;
struct list$1charph* param_names_284;
struct list$1charph* param_default_parametors_285;
_Bool var_args_286;
void* right_value335;
void* right_value336;
struct sType* __dec_obj144;
void* right_value337;
void* right_value338;
struct tuple1$1sTypeph* __dec_obj146;
struct list$1sTypeph* __dec_obj147;
struct list$1charph* __dec_obj148;
_Bool _if_conditional426;
_Bool _if_conditional427;
struct sType* result_type_287;
_Bool _if_conditional428;
void* right_value339;
struct sType* __dec_obj149;
_Bool _if_conditional429;
int i_288;
_Bool _if_conditional430;
void* right_value340;
void* right_value341;
void* right_value342;
struct sType* __dec_obj150;
_Bool _if_conditional431;
int i_289;
_Bool _if_conditional432;
void* right_value343;
void* right_value344;
void* right_value345;
struct sType* __dec_obj151;
void* right_value346;
void* right_value347;
struct sType* __dec_obj152;
struct sNode* __dec_obj153;
_Bool _if_conditional433;
void* right_value348;
char* __exception_result_var_b44;
char* __dec_obj154;
_Bool _if_conditional434;
void* right_value349;
void* right_value350;
struct tuple3$3sTypephcharphbool* __result163__;
static int num_anonymous_var_name_290=0;
void* right_value351;
char* __dec_obj155;
int __exception_result_var_b45;
void* right_value352;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var4;
struct list$1sTypeph* param_types_291;
struct list$1charph* param_names_292;
struct list$1charph* param_default_parametors_293;
_Bool var_args_294;
void* right_value353;
void* right_value354;
struct sType* __dec_obj156;
void* right_value355;
void* right_value356;
struct tuple1$1sTypeph* __dec_obj157;
struct list$1sTypeph* __dec_obj158;
struct list$1charph* __dec_obj159;
_Bool _if_conditional435;
void* right_value357;
struct sNode* exp_295;
int __exception_result_var_b46;
_Bool _if_conditional436;
void* right_value358;
void* right_value359;
struct tuple3$3sTypephcharphbool* __result165__;
void* right_value360;
struct CVALUE* __exception_result_var_b47;
struct CVALUE* come_value_296;
void* right_value361;
struct sType* __dec_obj161;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
void* right_value362;
char* __dec_obj162;
_Bool _if_conditional443;
static int num_anonymous_var_name_297=0;
void* right_value363;
char* __dec_obj163;
_Bool _if_conditional444;
void* right_value364;
char* __exception_result_var_b48;
char* __dec_obj164;
static int num_anonymous_var_name_298=0;
void* right_value365;
char* __dec_obj165;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool no_comma_299;
void* right_value366;
struct sNode* node_300;
struct sNode* __dec_obj166;
_Bool _if_conditional447;
void* right_value367;
struct sType* __dec_obj167;
void* right_value368;
char* __dec_obj168;
struct sNode* __dec_obj169;
_Bool _if_conditional448;
int i_301;
_Bool _if_conditional449;
void* right_value369;
void* right_value370;
void* right_value371;
struct sType* __dec_obj170;
struct sNode* __dec_obj171;
_Bool _if_conditional450;
int i_302;
_Bool _if_conditional451;
void* right_value372;
void* right_value373;
void* right_value374;
struct sType* __dec_obj172;
struct sNode* __dec_obj173;
_Bool _if_conditional452;
_Bool _if_conditional453;
void* right_value375;
void* right_value376;
struct tuple3$3sTypephcharphbool* __result166__;
void* right_value377;
void* right_value378;
struct sType* __dec_obj174;
_Bool _while_condtional47;
void* right_value379;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* generics_type_303;
char* var_name_304;
_Bool err_305;
_Bool _if_conditional454;
void* right_value380;
void* right_value381;
struct tuple3$3sTypephcharphbool* __result167__;
_Bool _if_conditional455;
_Bool _if_conditional456;
void* right_value382;
void* right_value383;
struct tuple3$3sTypephcharphbool* __result168__;
_Bool _if_conditional457;
void* right_value384;
struct sType* __dec_obj175;
_Bool _if_conditional458;
void* right_value385;
char* new_name_306;
struct sNode* __dec_obj176;
_Bool _if_conditional459;
struct sClass* klass_307;
_Bool _if_conditional460;
void* right_value392;
void* right_value393;
void* right_value394;
void* right_value395;
struct sType* __dec_obj177;
struct sNode* __dec_obj178;
_Bool _while_condtional56;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
_Bool _if_conditional512;
_Bool _if_conditional513;
_Bool _if_conditional514;
_Bool _if_conditional515;
_Bool _while_condtional57;
_Bool _if_conditional516;
_Bool _if_conditional517;
_Bool _if_conditional518;
_Bool _if_conditional519;
void* right_value396;
void* right_value397;
struct list$1sTypeph* types_352;
void* right_value398;
_Bool _while_condtional58;
void* right_value399;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type2_353;
char* name_354;
_Bool err_355;
_Bool _if_conditional520;
void* right_value400;
void* right_value401;
struct tuple3$3sTypephcharphbool* __result193__;
void* right_value402;
int num_tuples_356;
void* right_value403;
void* right_value404;
void* right_value405;
struct sType* __dec_obj179;
struct list$1sTypeph* o2_saved_357;
struct sType* it_358;
void* right_value406;
_Bool _if_conditional521;
void* right_value407;
struct sType* __dec_obj180;
_Bool _if_conditional522;
void* right_value408;
char* new_name_359;
_Bool _if_conditional523;
_Bool _if_conditional524;
_Bool _if_conditional525;
void* right_value409;
char* __dec_obj181;
_Bool _if_conditional526;
static int num_anonymous_var_name_360=0;
void* right_value410;
char* __dec_obj182;
_Bool _if_conditional527;
void* right_value411;
char* __exception_result_var_b49;
char* __dec_obj183;
static int num_anonymous_var_name_361=0;
void* right_value412;
char* __dec_obj184;
_Bool _if_conditional528;
_Bool _if_conditional529;
_Bool no_comma_362;
void* right_value413;
struct sNode* node_363;
struct sNode* __dec_obj185;
_Bool _while_condtional59;
_Bool _if_conditional530;
void* right_value414;
struct sNode* node_364;
int __exception_result_var_b50;
void* right_value415;
char* asm_name_365;
char* __dec_obj186;
void* right_value416;
void* right_value417;
struct tuple3$3sTypephcharphbool* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&head_196, 0, sizeof(char*));
memset(&head_sline_197, 0, sizeof(int));
right_value238 = (void*)0;
memset(&type_name_198, 0, sizeof(char*));
right_value239 = (void*)0;
memset(&record__199, 0, sizeof(_Bool));
memset(&constant_200, 0, sizeof(_Bool));
memset(&static__201, 0, sizeof(_Bool));
memset(&volatile__202, 0, sizeof(_Bool));
memset(&register__203, 0, sizeof(_Bool));
memset(&unsigned__204, 0, sizeof(_Bool));
memset(&long__205, 0, sizeof(_Bool));
memset(&long_long_206, 0, sizeof(_Bool));
memset(&short__207, 0, sizeof(_Bool));
memset(&restrict__208, 0, sizeof(_Bool));
memset(&struct__209, 0, sizeof(_Bool));
memset(&union__210, 0, sizeof(_Bool));
memset(&enum__211, 0, sizeof(_Bool));
memset(&no_heap_212, 0, sizeof(_Bool));
memset(&extern__213, 0, sizeof(_Bool));
memset(&inline__214, 0, sizeof(_Bool));
memset(&come_mem_core__215, 0, sizeof(_Bool));
memset(&alignas__216, 0, sizeof(struct sNode*));
memset(&anonymous_type_217, 0, sizeof(_Bool));
memset(&anonymous_name_218, 0, sizeof(_Bool));
memset(&p_219, 0, sizeof(char*));
memset(&sline_220, 0, sizeof(int));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&p_221, 0, sizeof(char*));
memset(&sline_222, 0, sizeof(int));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&p_223, 0, sizeof(char*));
memset(&sline_224, 0, sizeof(int));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&p_225, 0, sizeof(char*));
memset(&sline_226, 0, sizeof(int));
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&p_227, 0, sizeof(char*));
memset(&sline_228, 0, sizeof(int));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&p_229, 0, sizeof(char*));
memset(&sline_230, 0, sizeof(int));
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&p_231, 0, sizeof(char*));
memset(&sline_232, 0, sizeof(int));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&exp_233, 0, sizeof(struct sNode*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&p_234, 0, sizeof(char*));
memset(&sline_235, 0, sizeof(int));
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&p_236, 0, sizeof(char*));
memset(&sline_237, 0, sizeof(int));
right_value280 = (void*)0;
memset(&p_238, 0, sizeof(char*));
memset(&sline_239, 0, sizeof(int));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&p_240, 0, sizeof(char*));
memset(&sline_241, 0, sizeof(int));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&p_242, 0, sizeof(char*));
memset(&sline_243, 0, sizeof(int));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&pointer_num_244, 0, sizeof(int));
memset(&heap_245, 0, sizeof(_Bool));
memset(&lambda_flag_246, 0, sizeof(_Bool));
memset(&pX_247, 0, sizeof(char*));
memset(&slineX_248, 0, sizeof(int));
right_value296 = (void*)0;
memset(&type_249, 0, sizeof(struct sType*));
memset(&var_name_250, 0, sizeof(char*));
memset(&function_pointer_flag_251, 0, sizeof(_Bool));
memset(&p_252, 0, sizeof(char*));
memset(&sline_253, 0, sizeof(int));
right_value297 = (void*)0;
memset(&word_254, 0, sizeof(char*));
memset(&var_name_between_brace_255, 0, sizeof(_Bool));
memset(&p_256, 0, sizeof(char*));
memset(&sline_257, 0, sizeof(int));
right_value298 = (void*)0;
memset(&word_258, 0, sizeof(char*));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&node_260, 0, sizeof(struct sNode*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&pointer_num_261, 0, sizeof(int));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&node_262, 0, sizeof(struct sNode*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&node_263, 0, sizeof(struct sNode*));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&pointer_num_264, 0, sizeof(int));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&no_comma_267, 0, sizeof(_Bool));
right_value323 = (void*)0;
memset(&node_268, 0, sizeof(struct sNode*));
memset(&result_type_269, 0, sizeof(struct sType*));
right_value324 = (void*)0;
memset(&i_278, 0, sizeof(int));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&i_282, 0, sizeof(int));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&param_types_283, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_284, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_285, 0, sizeof(struct list$1charph*));
memset(&var_args_286, 0, sizeof(_Bool));
memset(&param_types_283, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_284, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_285, 0, sizeof(struct list$1charph*));
memset(&var_args_286, 0, sizeof(_Bool));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&result_type_287, 0, sizeof(struct sType*));
right_value339 = (void*)0;
memset(&i_288, 0, sizeof(int));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
memset(&i_289, 0, sizeof(int));
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&param_types_291, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_292, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_293, 0, sizeof(struct list$1charph*));
memset(&var_args_294, 0, sizeof(_Bool));
memset(&param_types_291, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_292, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_293, 0, sizeof(struct list$1charph*));
memset(&var_args_294, 0, sizeof(_Bool));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&exp_295, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&come_value_296, 0, sizeof(struct CVALUE*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&no_comma_299, 0, sizeof(_Bool));
right_value366 = (void*)0;
memset(&node_300, 0, sizeof(struct sNode*));
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&i_301, 0, sizeof(int));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&i_302, 0, sizeof(int));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&generics_type_303, 0, sizeof(struct sType*));
memset(&var_name_304, 0, sizeof(char*));
memset(&err_305, 0, sizeof(_Bool));
memset(&generics_type_303, 0, sizeof(struct sType*));
memset(&var_name_304, 0, sizeof(char*));
memset(&err_305, 0, sizeof(_Bool));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&new_name_306, 0, sizeof(char*));
memset(&klass_307, 0, sizeof(struct sClass*));
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&types_352, 0, sizeof(struct list$1sTypeph*));
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&type2_353, 0, sizeof(struct sType*));
memset(&name_354, 0, sizeof(char*));
memset(&err_355, 0, sizeof(_Bool));
memset(&type2_353, 0, sizeof(struct sType*));
memset(&name_354, 0, sizeof(char*));
memset(&err_355, 0, sizeof(_Bool));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
memset(&num_tuples_356, 0, sizeof(int));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&o2_saved_357, 0, sizeof(struct list$1sTypeph*));
memset(&it_358, 0, sizeof(struct sType*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&new_name_359, 0, sizeof(char*));
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&no_comma_362, 0, sizeof(_Bool));
right_value413 = (void*)0;
memset(&node_363, 0, sizeof(struct sNode*));
right_value414 = (void*)0;
memset(&node_364, 0, sizeof(struct sNode*));
right_value415 = (void*)0;
memset(&asm_name_365, 0, sizeof(char*));
right_value416 = (void*)0;
right_value417 = (void*)0;
    head_196=info->p;
    head_sline_197=info->sline;
    info->define_struct=(_Bool)0;
    type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1060, 16),__exception_result_var_b11=((char*)(right_value238=parse_word(info))), come_pop_stackframe(), __exception_result_var_b11));
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    while(_while_condtional39=string_operator_equals(type_name_198,"__extension__"),    _while_condtional39) {
        __dec_obj86=type_name_198;
        type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1062, 17),__exception_result_var_b12=((char*)(right_value239=parse_word(info))), come_pop_stackframe(), __exception_result_var_b12));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    record__199=(_Bool)0;
    constant_200=(_Bool)0;
    static__201=(_Bool)0;
    volatile__202=(_Bool)0;
    register__203=(_Bool)0;
    unsigned__204=(_Bool)0;
    long__205=(_Bool)0;
    long_long_206=(_Bool)0;
    short__207=(_Bool)0;
    restrict__208=(_Bool)0;
    struct__209=(_Bool)0;
    union__210=(_Bool)0;
    enum__211=(_Bool)0;
    no_heap_212=(_Bool)0;
    extern__213=(_Bool)0;
    inline__214=(_Bool)0;
    come_mem_core__215=(_Bool)0;
    alignas__216=((void*)0);
    anonymous_type_217=(_Bool)0;
    anonymous_name_218=(_Bool)0;
    while(_while_condtional40=(_Bool)1,    _while_condtional40) {
        if(_if_conditional318=string_operator_equals(type_name_198,"struct"),        _if_conditional318) {
            struct__209=(_Bool)1;
            if(_if_conditional319=*info->p==123,            _if_conditional319) {
                p_219=info->p;
                sline_220=info->sline;
                ((char*)(right_value240=skip_block(info)));
                right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional320=*info->p==59,                _if_conditional320) {
                    anonymous_name_218=(_Bool)1;
                    anonymous_type_217=(_Bool)1;
                    __dec_obj87=type_name_198;
                    type_name_198=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(""))));
                    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_219;
                    info->sline=sline_220;
                    break;
                }
                else {
                    anonymous_type_217=(_Bool)1;
                    __dec_obj88=type_name_198;
                    type_name_198=(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string(""))));
                    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    info->p=p_219;
                    info->sline=sline_220;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(_if_conditional321=*info->p!=62,            _if_conditional321) {
                __dec_obj89=type_name_198;
                type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1118, 18),__exception_result_var_b13=((char*)(right_value243=parse_word(info))), come_pop_stackframe(), __exception_result_var_b13));
                __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional322=*info->p==60,                _if_conditional322) {
                    p_221=info->p;
                    sline_222=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(_while_condtional41=(_Bool)1,                    _while_condtional41) {
                        if(_if_conditional323=*info->p==62,                        _if_conditional323) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(_if_conditional324=*info->p==123,                            _if_conditional324) {
                            }
                            else {
                                info->p=p_221;
                                info->sline=sline_222;
                            }
                            break;
                        }
                        else {
                            if(_if_conditional325=*info->p==0,                            _if_conditional325) {
                                err_msg(info,"invalid struct definition");
                                __result136__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value245=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value244=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1144, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value245,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                return __result136__;
                            }
                            else {
                                info->p++;
                            }
                        }
                    }
                }
                if(_if_conditional326=*info->p==123,                _if_conditional326) {
                    p_223=info->p;
                    sline_224=info->sline;
                    ((char*)(right_value246=skip_block(info)));
                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional327=*info->p==59,                    _if_conditional327) {
                        info->p=head_196;
                        info->sline=head_sline_197;
                        info->define_struct=(_Bool)1;
                        __result137__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value248=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value247=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1162, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value248,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result137__;
                    }
                    else {
                        anonymous_type_217=(_Bool)1;
                        info->p=p_223;
                        info->sline=sline_224;
                        break;
                    }
                }
            }
        }
        else {
            if(_if_conditional328=string_operator_equals(type_name_198,"union"),            _if_conditional328) {
                union__210=(_Bool)1;
                if(_if_conditional329=*info->p==123,                _if_conditional329) {
                    p_225=info->p;
                    sline_226=info->sline;
                    ((char*)(right_value249=skip_block(info)));
                    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional330=*info->p==59,                    _if_conditional330) {
                        info->p=head_196;
                        info->sline=head_sline_197;
                        info->define_struct=(_Bool)0;
                        anonymous_type_217=(_Bool)1;
                        __dec_obj90=type_name_198;
                        type_name_198=(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string(""))));
                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_225;
                        info->sline=sline_226;
                        break;
                    }
                    else {
                        anonymous_type_217=(_Bool)1;
                        __dec_obj91=type_name_198;
                        type_name_198=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(""))));
                        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        info->p=p_225;
                        info->sline=sline_226;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj92=type_name_198;
                type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1204, 19),__exception_result_var_b14=((char*)(right_value252=parse_word(info))), come_pop_stackframe(), __exception_result_var_b14));
                __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional331=*info->p==123,                _if_conditional331) {
                    p_227=info->p;
                    sline_228=info->sline;
                    ((char*)(right_value253=skip_block(info)));
                    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional332=*info->p==59,                    _if_conditional332) {
                        info->p=head_196;
                        info->sline=head_sline_197;
                        info->define_struct=(_Bool)1;
                        __result138__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value255=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value254=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1218, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value255,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result138__;
                    }
                    else {
                        anonymous_type_217=(_Bool)1;
                        info->p=p_227;
                        info->sline=sline_228;
                        break;
                    }
                }
            }
            else {
                if(_if_conditional333=string_operator_equals(type_name_198,"enum"),                _if_conditional333) {
                    enum__211=(_Bool)1;
                    parse_sharp_v5(info);
                    if(_if_conditional334=*info->p==123,                    _if_conditional334) {
                        p_229=info->p;
                        sline_230=info->sline;
                        ((char*)(right_value256=skip_block(info)));
                        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional335=*info->p==59,                        _if_conditional335) {
                            info->p=head_196;
                            info->sline=head_sline_197;
                            info->define_struct=(_Bool)1;
                            __result139__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value258=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value257=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1243, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value258,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            return __result139__;
                        }
                        else {
                            anonymous_type_217=(_Bool)1;
                            __dec_obj93=type_name_198;
                            type_name_198=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(""))));
                            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            info->p=p_229;
                            info->sline=sline_230;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj94=type_name_198;
                    type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1256, 20),__exception_result_var_b15=((char*)(right_value260=parse_word(info))), come_pop_stackframe(), __exception_result_var_b15));
                    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parse_sharp_v5(info);
                    if(_if_conditional336=*info->p==123,                    _if_conditional336) {
                        p_231=info->p;
                        sline_232=info->sline;
                        ((char*)(right_value261=skip_block(info)));
                        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional337=*info->p==59,                        _if_conditional337) {
                            info->p=head_196;
                            info->sline=head_sline_197;
                            info->define_struct=(_Bool)1;
                            __result140__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value263=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value262=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1270, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value263,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            return __result140__;
                        }
                        else {
                            anonymous_type_217=(_Bool)1;
                            info->p=p_231;
                            info->sline=sline_232;
                            break;
                        }
                    }
                }
                else {
                    if(_if_conditional338=string_operator_equals(type_name_198,"_Alignas"),                    _if_conditional338) {
                        (come_push_stackframe("05type.c", 1281, 21),__exception_result_var_b16=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b16);
                        exp_233=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=expression_v13(info))));
                        if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj95=alignas__216;
                        alignas__216=(struct sNode*)come_increment_ref_count(exp_233);
                        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
                        (come_push_stackframe("05type.c", 1287, 22),__exception_result_var_b17=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b17);
                        __dec_obj96=type_name_198;
                        type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1289, 23),__exception_result_var_b18=((char*)(right_value265=parse_word(info))), come_pop_stackframe(), __exception_result_var_b18));
                        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(exp_233) { exp_233 = come_decrement_ref_count2(exp_233, ((struct sNode*)exp_233)->finalize, ((struct sNode*)exp_233)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional339=string_operator_equals(type_name_198,"const"),                        _if_conditional339) {
                            constant_200=(_Bool)1;
                            __dec_obj97=type_name_198;
                            type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1294, 24),__exception_result_var_b19=((char*)(right_value266=parse_word(info))), come_pop_stackframe(), __exception_result_var_b19));
                            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional340=string_operator_equals(type_name_198,"static"),                            _if_conditional340) {
                                static__201=(_Bool)1;
                                __dec_obj98=type_name_198;
                                type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1299, 25),__exception_result_var_b20=((char*)(right_value267=parse_word(info))), come_pop_stackframe(), __exception_result_var_b20));
                                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional341=string_operator_equals(type_name_198,"record"),                                _if_conditional341) {
                                    record__199=(_Bool)1;
                                    __dec_obj99=type_name_198;
                                    type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1304, 26),__exception_result_var_b21=((char*)(right_value268=parse_word(info))), come_pop_stackframe(), __exception_result_var_b21));
                                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    if(_if_conditional342=string_operator_equals(type_name_198,"come_mem_core"),                                    _if_conditional342) {
                                        come_mem_core__215=(_Bool)1;
                                        __dec_obj100=type_name_198;
                                        type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1309, 27),__exception_result_var_b22=((char*)(right_value269=parse_word(info))), come_pop_stackframe(), __exception_result_var_b22));
                                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(_if_conditional343=string_operator_equals(type_name_198,"extern"),                                        _if_conditional343) {
                                            extern__213=(_Bool)1;
                                            __dec_obj101=type_name_198;
                                            type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1314, 28),__exception_result_var_b23=((char*)(right_value270=parse_word(info))), come_pop_stackframe(), __exception_result_var_b23));
                                            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        else {
                                            if(_if_conditional344=string_operator_equals(type_name_198,"_Noreturn"),                                            _if_conditional344) {
                                                __dec_obj102=type_name_198;
                                                type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1317, 29),__exception_result_var_b24=((char*)(right_value271=parse_word(info))), come_pop_stackframe(), __exception_result_var_b24));
                                                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            else {
                                                if(_if_conditional345=string_operator_equals(type_name_198,"inline")||string_operator_equals(type_name_198,"__inline")||string_operator_equals(type_name_198,"__inline__")||string_operator_equals(type_name_198,"__always_inline"),                                                _if_conditional345) {
                                                    inline__214=(_Bool)1;
                                                    __dec_obj103=type_name_198;
                                                    type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1322, 30),__exception_result_var_b25=((char*)(right_value272=parse_word(info))), come_pop_stackframe(), __exception_result_var_b25));
                                                    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                else {
                                                    if(_if_conditional346=string_operator_equals(type_name_198,"volatile"),                                                    _if_conditional346) {
                                                        volatile__202=(_Bool)1;
                                                        __dec_obj104=type_name_198;
                                                        type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1327, 31),__exception_result_var_b26=((char*)(right_value273=parse_word(info))), come_pop_stackframe(), __exception_result_var_b26));
                                                        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    else {
                                                        if(_if_conditional347=string_operator_equals(type_name_198,"long"),                                                        _if_conditional347) {
                                                            {
                                                                p_234=info->p;
                                                                sline_235=info->sline;
                                                                if(_if_conditional348=!xisalpha(*info->p),                                                                _if_conditional348) {
                                                                    info->p=p_234;
                                                                    info->sline=sline_235;
                                                                    __dec_obj105=type_name_198;
                                                                    type_name_198=(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string("long"))));
                                                                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    break;
                                                                }
                                                                else {
                                                                    __dec_obj106=type_name_198;
                                                                    type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1343, 32),__exception_result_var_b27=((char*)(right_value275=parse_word(info))), come_pop_stackframe(), __exception_result_var_b27));
                                                                    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional349=string_operator_equals(type_name_198,"unsigned"),                                                                    _if_conditional349) {
                                                                        __dec_obj107=type_name_198;
                                                                        type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1346, 33),__exception_result_var_b28=((char*)(right_value276=parse_word(info))), come_pop_stackframe(), __exception_result_var_b28));
                                                                        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional350=string_operator_equals(type_name_198,"int"),                                                                        _if_conditional350) {
                                                                            long__205=(_Bool)1;
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional351=string_operator_equals(type_name_198,"long"),                                                                        _if_conditional351) {
                                                                            p_234=info->p;
                                                                            sline_235=info->sline;
                                                                            if(_if_conditional352=xisalpha(*info->p),                                                                            _if_conditional352) {
                                                                                long_long_206=(_Bool)1;
                                                                                __dec_obj108=type_name_198;
                                                                                type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1358, 34),__exception_result_var_b29=((char*)(right_value277=parse_word(info))), come_pop_stackframe(), __exception_result_var_b29));
                                                                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                long__205=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            if(_if_conditional353=string_operator_equals(type_name_198,"int"),                                                                            _if_conditional353) {
                                                                                long_long_206=(_Bool)1;
                                                                                break;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional354=!is_type_name(type_name_198,info),                                                                                _if_conditional354) {
                                                                                    __dec_obj109=type_name_198;
                                                                                    type_name_198=(char*)come_increment_ref_count(((char*)(right_value278=__builtin_string("long"))));
                                                                                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    long_long_206=(_Bool)1;
                                                                                    info->p=p_234;
                                                                                    info->sline=sline_235;
                                                                                    break;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional355=is_type_name(type_name_198,info),                                                                            _if_conditional355) {
                                                                                if(long__205) {
                                                                                    long_long_206=(_Bool)1;
                                                                                    long__205=(_Bool)0;
                                                                                }
                                                                                else {
                                                                                    long__205=(_Bool)1;
                                                                                }
                                                                                break;
                                                                            }
                                                                            else {
                                                                                info->p=p_234;
                                                                                info->sline=sline_235;
                                                                                __dec_obj110=type_name_198;
                                                                                type_name_198=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string("long"))));
                                                                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional357=string_operator_equals(type_name_198,"unsigned"),                                                            _if_conditional357) {
                                                                unsigned__204=(_Bool)1;
                                                                if(_if_conditional358=xisalpha(*info->p)||*info->p==95,                                                                _if_conditional358) {
                                                                    p_236=info->p;
                                                                    sline_237=info->sline;
                                                                    __dec_obj111=type_name_198;
                                                                    type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1404, 35),__exception_result_var_b30=((char*)(right_value280=parse_word(info))), come_pop_stackframe(), __exception_result_var_b30));
                                                                    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    if(_if_conditional359=string_operator_equals(type_name_198,"short"),                                                                    _if_conditional359) {
                                                                        if(_if_conditional360=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional360) {
                                                                            p_238=info->p;
                                                                            sline_239=info->sline;
                                                                            __dec_obj112=type_name_198;
                                                                            type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1411, 36),__exception_result_var_b31=((char*)(right_value281=parse_word(info))), come_pop_stackframe(), __exception_result_var_b31));
                                                                            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional361=is_type_name(type_name_198,info),                                                                            _if_conditional361) {
                                                                                short__207=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                short__207=(_Bool)1;
                                                                                __dec_obj113=type_name_198;
                                                                                type_name_198=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string("int"))));
                                                                                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                info->p=p_238;
                                                                                info->sline=sline_239;
                                                                            }
                                                                        }
                                                                        else {
                                                                            short__207=(_Bool)1;
                                                                            __dec_obj114=type_name_198;
                                                                            type_name_198=(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string("int"))));
                                                                            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            break;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional362=string_operator_equals(type_name_198,"long"),                                                                        _if_conditional362) {
                                                                            if(_if_conditional363=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional363) {
                                                                                p_240=info->p;
                                                                                sline_241=info->sline;
                                                                                __dec_obj115=type_name_198;
                                                                                type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1435, 37),__exception_result_var_b32=((char*)(right_value284=parse_word(info))), come_pop_stackframe(), __exception_result_var_b32));
                                                                                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional364=is_type_name(type_name_198,info),                                                                                _if_conditional364) {
                                                                                    long__205=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    long__205=(_Bool)1;
                                                                                    __dec_obj116=type_name_198;
                                                                                    type_name_198=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("int"))));
                                                                                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    info->p=p_240;
                                                                                    info->sline=sline_241;
                                                                                }
                                                                            }
                                                                            else {
                                                                                long__205=(_Bool)1;
                                                                                __dec_obj117=type_name_198;
                                                                                type_name_198=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string("int"))));
                                                                                __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional365=!is_type_name(type_name_198,info),                                                                            _if_conditional365) {
                                                                                __dec_obj118=type_name_198;
                                                                                type_name_198=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string("int"))));
                                                                                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                info->p=p_236;
                                                                                info->sline=sline_237;
                                                                                break;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __dec_obj119=type_name_198;
                                                                    type_name_198=(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string("int"))));
                                                                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    break;
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional366=string_operator_equals(type_name_198,"signed")||string_operator_equals(type_name_198,"__signed__"),                                                                _if_conditional366) {
                                                                    unsigned__204=(_Bool)0;
                                                                    __dec_obj120=type_name_198;
                                                                    type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1469, 38),__exception_result_var_b33=((char*)(right_value289=parse_word(info))), come_pop_stackframe(), __exception_result_var_b33));
                                                                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                else {
                                                                    if(_if_conditional367=string_operator_equals(type_name_198,"register"),                                                                    _if_conditional367) {
                                                                        register__203=(_Bool)1;
                                                                        __dec_obj121=type_name_198;
                                                                        type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1474, 39),__exception_result_var_b34=((char*)(right_value290=parse_word(info))), come_pop_stackframe(), __exception_result_var_b34));
                                                                        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                    }
                                                                    else {
                                                                        if(_if_conditional368=string_operator_equals(type_name_198,"restrict"),                                                                        _if_conditional368) {
                                                                            restrict__208=(_Bool)1;
                                                                            __dec_obj122=type_name_198;
                                                                            type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1479, 40),__exception_result_var_b35=((char*)(right_value291=parse_word(info))), come_pop_stackframe(), __exception_result_var_b35));
                                                                            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                        }
                                                                        else {
                                                                            if(_if_conditional369=string_operator_equals(type_name_198,"_Addr"),                                                                            _if_conditional369) {
                                                                                __dec_obj123=type_name_198;
                                                                                type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1482, 41),__exception_result_var_b36=((char*)(right_value292=parse_word(info))), come_pop_stackframe(), __exception_result_var_b36));
                                                                                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            else {
                                                                                if(_if_conditional370=string_operator_equals(type_name_198,"__restrict"),                                                                                _if_conditional370) {
                                                                                    restrict__208=(_Bool)1;
                                                                                    __dec_obj124=type_name_198;
                                                                                    type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1487, 42),__exception_result_var_b37=((char*)(right_value293=parse_word(info))), come_pop_stackframe(), __exception_result_var_b37));
                                                                                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional371=string_operator_equals(type_name_198,"short"),                                                                                    _if_conditional371) {
                                                                                        short__207=(_Bool)1;
                                                                                        if(_if_conditional372=*info->p==58,                                                                                        _if_conditional372) {
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional373=xisalnum(*info->p),                                                                                            _if_conditional373) {
                                                                                                p_242=info->p;
                                                                                                sline_243=info->sline;
                                                                                                __dec_obj125=type_name_198;
                                                                                                type_name_198=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1498, 43),__exception_result_var_b38=((char*)(right_value294=parse_word(info))), come_pop_stackframe(), __exception_result_var_b38));
                                                                                                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional374=string_operator_equals(type_name_198,"int"),                                                                                                _if_conditional374) {
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional375=string_operator_equals(type_name_198,"short"),                                                                                                    _if_conditional375) {
                                                                                                        short__207=(_Bool)0;
                                                                                                        break;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(_if_conditional376=is_type_name(type_name_198,info),                                                                                                        _if_conditional376) {
                                                                                                            info->p=p_242;
                                                                                                            info->sline=sline_243;
                                                                                                        }
                                                                                                        else {
                                                                                                            __dec_obj126=type_name_198;
                                                                                                            type_name_198=(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string("short"))));
                                                                                                            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                            info->p=p_242;
                                                                                                            info->sline=sline_243;
                                                                                                            break;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else {
                                                                                                break;
                                                                                            }
                                                                                        }
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
    skip_pointer_attribute(info);
    pointer_num_244=0;
    while(_while_condtional42=*info->p==42,    _while_condtional42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_244++;
    }
    heap_245=(_Bool)0;
    if(_if_conditional377=*info->p==37,    _if_conditional377) {
        info->p++;
        skip_spaces_and_lf(info);
        heap_245=(_Bool)1;
    }
    lambda_flag_246=(_Bool)0;
    {
        pX_247=info->p;
        slineX_248=info->sline;
        if(_if_conditional378=xisalpha(*info->p)||*info->p==95,        _if_conditional378) {
            (void)(come_push_stackframe("05type.c", 1553, 44),__exception_result_var_b39=((char*)(right_value296=parse_word(info))), come_pop_stackframe(), __exception_result_var_b39);
            right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional379=*info->p==40&&info->in_typedef,            _if_conditional379) {
                lambda_flag_246=(_Bool)1;
            }
        }
        info->p=pX_247;
        info->sline=slineX_248;
    }
    function_pointer_flag_251=(_Bool)0;
    {
        p_252=info->p;
        sline_253=info->sline;
        if(_if_conditional380=*info->p==40,        _if_conditional380) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional381=*info->p==42||*info->p==94,            _if_conditional381) {
                function_pointer_flag_251=(_Bool)1;
            }
            else {
                if(_if_conditional382=xisalpha(*info->p)||*info->p==95,                _if_conditional382) {
                    word_254=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1582, 45),__exception_result_var_b40=((char*)(right_value297=parse_word(info))), come_pop_stackframe(), __exception_result_var_b40));
                    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional383=*info->p==41,                    _if_conditional383) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional384=*info->p==40,                        _if_conditional384) {
                            function_pointer_flag_251=(_Bool)1;
                        }
                    }
                    word_254 = come_decrement_ref_count2(word_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        info->p=p_252;
        info->sline=sline_253;
    }
    var_name_between_brace_255=(_Bool)0;
    {
        p_256=info->p;
        sline_257=info->sline;
        if(_if_conditional385=*info->p==40,        _if_conditional385) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(_if_conditional386=xisalpha(*info->p)||*info->p==95,            _if_conditional386) {
                word_258=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1611, 46),__exception_result_var_b41=((char*)(right_value298=parse_word(info))), come_pop_stackframe(), __exception_result_var_b41));
                right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional387=is_type_name(word_258,info),                _if_conditional387) {
                }
                else {
                    if(_if_conditional388=*info->p==41,                    _if_conditional388) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(_if_conditional389=*info->p!=40,                        _if_conditional389) {
                            var_name_between_brace_255=(_Bool)1;
                        }
                    }
                }
                word_258 = come_decrement_ref_count2(word_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_256;
        info->sline=sline_257;
    }
    if(_if_conditional390=anonymous_type_217&&*info->p==123,    _if_conditional390) {
        if(struct__209) {
            if(_if_conditional392=string_operator_equals(type_name_198,""),            _if_conditional392) {
                __dec_obj127=type_name_198;
                type_name_198=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("anonymous_typeX%d",++anonymous_num_259))));
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=parse_struct((char*)come_increment_ref_count(type_name_198),info))));
            if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional393=!node_compile(node_260,info),            _if_conditional393) {
                err_msg(info,"parse_struct is failed");
                __result141__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value302=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value301=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1641, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_260) { node_260 = come_decrement_ref_count2(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value302,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result141__;
            }
            pointer_num_261=0;
            while(_while_condtional43=*info->p==42,            _while_condtional43) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_261++;
            }
            __dec_obj128=type_249;
            type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value303=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1651, "sType")))),type_name_198,(_Bool)0,info))));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value304,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_249->mPointerNum=pointer_num_261;
            if(node_260) { node_260 = come_decrement_ref_count2(node_260, ((struct sNode*)node_260)->finalize, ((struct sNode*)node_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(enum__211) {
                if(_if_conditional395=string_operator_equals(type_name_198,""),                _if_conditional395) {
                    __dec_obj129=type_name_198;
                    type_name_198=(char*)come_increment_ref_count(((char*)(right_value305=xsprintf("anonymous_typeY%d",++anonymous_num_259))));
                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                node_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=parse_enum((char*)come_increment_ref_count(type_name_198),info))));
                if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(_if_conditional396=!info->no_output_err,                _if_conditional396) {
                    if(_if_conditional397=!node_compile(node_262,info),                    _if_conditional397) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result142__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value308=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value307=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1665, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_262) { node_262 = come_decrement_ref_count2(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value308,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result142__;
                    }
                }
                __dec_obj130=type_249;
                type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1669, "sType")))),type_name_198,(_Bool)0,info))));
                come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(node_262) { node_262 = come_decrement_ref_count2(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(union__210) {
                    if(_if_conditional399=string_operator_equals(type_name_198,""),                    _if_conditional399) {
                        __dec_obj131=type_name_198;
                        type_name_198=(char*)come_increment_ref_count(((char*)(right_value311=xsprintf("anonymous_typeZ%d",++anonymous_num_259))));
                        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    node_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=parse_union((char*)come_increment_ref_count(type_name_198),info))));
                    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional400=!node_compile(node_263,info),                    _if_conditional400) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result143__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value314=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value313=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1681, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value314,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result143__;
                    }
                    pointer_num_264=0;
                    while(_while_condtional44=*info->p==42,                    _while_condtional44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_264++;
                    }
                    __dec_obj132=type_249;
                    type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1692, "sType")))),type_name_198,(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value315,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value316,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    type_249->mPointerNum=pointer_num_264;
                    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result144__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value318=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value317=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1698, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value318,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    return __result144__;
                }
            }
        }
        if(parse_variable_name) {
            parse_sharp_v5(info);
            if(_if_conditional402=var_name_between_brace_255&&*info->p==40,            _if_conditional402) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional403=*info->p==58,            _if_conditional403) {
                __dec_obj133=var_name_250;
                var_name_250=(char*)come_increment_ref_count(((char*)(right_value319=__builtin_string(""))));
                __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(anonymous_name_218) {
                    num_anonymous_var_name_265++;
                    __dec_obj134=var_name_250;
                    var_name_250=(char*)come_increment_ref_count(((char*)(right_value320=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_265))));
                    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional405=xisalnum(*info->p)||*info->p==95,                    _if_conditional405) {
                        __dec_obj135=var_name_250;
                        var_name_250=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1717, 47),__exception_result_var_b42=((char*)(right_value321=parse_word(info))), come_pop_stackframe(), __exception_result_var_b42));
                        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        num_anonymous_var_name_266++;
                        __dec_obj136=var_name_250;
                        var_name_250=(char*)come_increment_ref_count(((char*)(right_value322=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_266))));
                        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            if(_if_conditional406=var_name_between_brace_255&&*info->p==41,            _if_conditional406) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(_if_conditional407=*info->p==58,            _if_conditional407) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_267=info->no_comma;
                info->no_comma=(_Bool)1;
                node_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=expression_v13(info))));
                if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_267;
                __dec_obj137=type_249->mSizeNum;
                type_249->mSizeNum=(struct sNode*)come_increment_ref_count(node_268);
                if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_268) { node_268 = come_decrement_ref_count2(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        if(lambda_flag_246) {
            if(_if_conditional413=map$2charphsTypephp_operator_load_element(info->types,type_name_198),            _if_conditional413) {
                __dec_obj138=result_type_269;
                result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_198)))));
                come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, __result_obj__);
                result_type_269->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_269->mClass->mName), "05type.c", 1747, 48));
            }
            else {
                if(_if_conditional419=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_198)),                _if_conditional419) {
                    for(                    i_278=0;                    i_278<list$1charph_length(info->generics_type_names);                    i_278++                    ){
                        if(_if_conditional423=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_278), "05type.c", 1751, 49)),type_name_198),                        _if_conditional423) {
                            __dec_obj139=result_type_269;
                            result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value325=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1752, "sType")))),((char*)(right_value326=xsprintf("generics_type%d",i_278))),(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    if(_if_conditional424=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_198)),                    _if_conditional424) {
                        for(                        i_282=0;                        i_282<list$1charph_length(info->method_generics_type_names);                        i_282++                        ){
                            if(_if_conditional425=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_282), "05type.c", 1758, 50)),type_name_198),                            _if_conditional425) {
                                __dec_obj140=result_type_269;
                                result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value328=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1759, "sType")))),((char*)(right_value329=xsprintf("mgenerics_type%d",i_282))),(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        __dec_obj141=result_type_269;
                        result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value331=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1764, "sType")))),type_name_198,(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value331,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value332,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                }
            }
            result_type_269->mConstant=result_type_269->mConstant||constant_200;
            __dec_obj142=result_type_269->mAlignas;
            result_type_269->mAlignas=(struct sNode*)come_increment_ref_count(alignas__216);
            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
            result_type_269->mComeMemCore=result_type_269->mComeMemCore||come_mem_core__215;
            result_type_269->mRegister=register__203;
            result_type_269->mUnsigned=result_type_269->mUnsigned||unsigned__204;
            result_type_269->mVolatile=volatile__202;
            result_type_269->mRecord=result_type_269->mStatic||static__201;
            result_type_269->mStatic=result_type_269->mRecord||record__199;
            result_type_269->mExtern=result_type_269->mExtern||extern__213;
            result_type_269->mInline=result_type_269->mInline||inline__214;
            result_type_269->mRestrict=result_type_269->mRestrict||restrict__208;
            result_type_269->mLongLong=result_type_269->mLongLong||long_long_206;
            result_type_269->mLong=result_type_269->mLong||long__205;
            result_type_269->mShort=result_type_269->mShort||short__207;
            result_type_269->mPointerNum=pointer_num_244;
            result_type_269->mHeap=result_type_269->mHeap||heap_245;
            __dec_obj143=var_name_250;
            var_name_250=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1784, 51),__exception_result_var_b43=((char*)(right_value333=parse_word(info))), come_pop_stackframe(), __exception_result_var_b43));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            multiple_assign_var3=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value334=parse_params(info,(_Bool)0)));
            param_types_283=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var3->v1);
            param_names_284=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v2);
            param_default_parametors_285=(struct list$1charph*)come_increment_ref_count(multiple_assign_var3->v3);
            var_args_286=multiple_assign_var3->v4;
            come_call_finalizer3(right_value334,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj144=type_249;
            type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value335=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1788, "sType")))),"lambda",(_Bool)0,info))));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value335,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj146=type_249->mResultType;
            type_249->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value338=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value337=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1790, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_269)))));
            come_call_finalizer3(__dec_obj146,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value337,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value338,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj147=type_249->mParamTypes;
            type_249->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_283);
            come_call_finalizer3(__dec_obj147,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj148=type_249->mParamNames;
            type_249->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_284);
            come_call_finalizer3(__dec_obj148,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            type_249->mVarArgs=var_args_286;
            type_249->mExtern=extern__213;
            come_call_finalizer3(result_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_283,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_284,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_285,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(function_pointer_flag_251) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                if(_if_conditional427=*info->p==42||*info->p==94,                _if_conditional427) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                skip_pointer_attribute(info);
                if(_if_conditional428=map$2charphsTypephp_operator_load_element(info->types,type_name_198),                _if_conditional428) {
                    __dec_obj149=result_type_287;
                    result_type_287=(struct sType*)come_increment_ref_count(((struct sType*)(right_value339=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_198)))));
                    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value339,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    result_type_287->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_287->mClass->mName), "05type.c", 1812, 52));
                }
                else {
                    if(_if_conditional429=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_198)),                    _if_conditional429) {
                        for(                        i_288=0;                        i_288<list$1charph_length(info->generics_type_names);                        i_288++                        ){
                            if(_if_conditional430=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_288), "05type.c", 1817, 53)),type_name_198),                            _if_conditional430) {
                                __dec_obj150=result_type_287;
                                result_type_287=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1818, "sType")))),((char*)(right_value341=xsprintf("generics_type%d",i_288))),(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        if(_if_conditional431=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_198)),                        _if_conditional431) {
                            for(                            i_289=0;                            i_289<list$1charph_length(info->method_generics_type_names);                            i_289++                            ){
                                if(_if_conditional432=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_289), "05type.c", 1824, 54)),type_name_198),                                _if_conditional432) {
                                    __dec_obj151=result_type_287;
                                    result_type_287=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value343=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1825, "sType")))),((char*)(right_value344=xsprintf("mgenerics_type%d",i_289))),(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value345,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            __dec_obj152=result_type_287;
                            result_type_287=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value346=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1830, "sType")))),type_name_198,(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value346,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value347,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                result_type_287->mConstant=result_type_287->mConstant||constant_200;
                __dec_obj153=result_type_287->mAlignas;
                result_type_287->mAlignas=(struct sNode*)come_increment_ref_count(alignas__216);
                if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                result_type_287->mComeMemCore=result_type_287->mComeMemCore||come_mem_core__215;
                result_type_287->mRegister=register__203;
                result_type_287->mUnsigned=result_type_287->mUnsigned||unsigned__204;
                result_type_287->mVolatile=volatile__202;
                result_type_287->mStatic=result_type_287->mStatic||static__201;
                result_type_287->mRecord=result_type_287->mRecord||record__199;
                result_type_287->mExtern=result_type_287->mExtern||extern__213;
                result_type_287->mInline=result_type_287->mInline||inline__214;
                result_type_287->mRestrict=result_type_287->mRestrict||restrict__208;
                result_type_287->mLongLong=result_type_287->mLongLong||long_long_206;
                result_type_287->mLong=result_type_287->mLong||long__205;
                result_type_287->mShort=result_type_287->mShort||short__207;
                result_type_287->mPointerNum+=pointer_num_244;
                result_type_287->mHeap=result_type_287->mHeap||heap_245;
                if(_if_conditional433=xisalnum(*info->p)||*info->p==95,                _if_conditional433) {
                    __dec_obj154=var_name_250;
                    var_name_250=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1851, 55),__exception_result_var_b44=((char*)(right_value348=parse_word(info))), come_pop_stackframe(), __exception_result_var_b44));
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional434=*info->p==40,                    _if_conditional434) {
                        __result163__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value350=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value349=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1853, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(result_type_287),(char*)come_increment_ref_count(var_name_250),(_Bool)0)));
                        come_call_finalizer3(result_type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value350,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result163__;
                    }
                }
                else {
                    num_anonymous_var_name_290++;
                    __dec_obj155=var_name_250;
                    var_name_250=(char*)come_increment_ref_count(((char*)(right_value351=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_290))));
                    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                (come_push_stackframe("05type.c", 1861, 56),__exception_result_var_b45=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b45);
                multiple_assign_var4=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value352=parse_params(info,(_Bool)0)));
                param_types_291=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var4->v1);
                param_names_292=(struct list$1charph*)come_increment_ref_count(multiple_assign_var4->v2);
                param_default_parametors_293=(struct list$1charph*)come_increment_ref_count(multiple_assign_var4->v3);
                var_args_294=multiple_assign_var4->v4;
                come_call_finalizer3(right_value352,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj156=type_249;
                type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value354=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value353=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1865, "sType")))),"lambda",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value353,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value354,sType_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj157=type_249->mResultType;
                type_249->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value356=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value355=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1867, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_287)))));
                come_call_finalizer3(__dec_obj157,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value355,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value356,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj158=type_249->mParamTypes;
                type_249->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_291);
                come_call_finalizer3(__dec_obj158,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj159=type_249->mParamNames;
                type_249->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_292);
                come_call_finalizer3(__dec_obj159,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                type_249->mVarArgs=var_args_294;
                type_249->mExtern=extern__213;
                come_call_finalizer3(result_type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_291,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_292,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_293,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional435=string_operator_equals(type_name_198,"__typeof__")&&*info->p==40,                _if_conditional435) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=expression_v13(info))));
                    if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    (come_push_stackframe("05type.c", 1879, 57),__exception_result_var_b46=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b46);
                    if(_if_conditional436=!node_compile(exp_295,info),                    _if_conditional436) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result165__ = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(right_value359=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count(((struct tuple3$3sTypepcharphbool*)(right_value358=(struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 1883, "struct tuple3$3sTypepcharphbool")))),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value359,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        return __result165__;
                    }
                    come_value_296=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05type.c", 1886, 58),__exception_result_var_b47=((struct CVALUE*)(right_value360=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b47));
                    come_call_finalizer3(right_value360,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    __dec_obj161=type_249;
                    type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value361=sType_clone(come_value_296->type))));
                    come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value361,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(_if_conditional441=var_name_between_brace_255&&*info->p==40,                        _if_conditional441) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional442=*info->p==58,                        _if_conditional442) {
                            __dec_obj162=var_name_250;
                            var_name_250=(char*)come_increment_ref_count(((char*)(right_value362=__builtin_string(""))));
                            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_218) {
                                num_anonymous_var_name_297++;
                                __dec_obj163=var_name_250;
                                var_name_250=(char*)come_increment_ref_count(((char*)(right_value363=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_297))));
                                __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional444=xisalnum(*info->p)||*info->p==95,                                _if_conditional444) {
                                    __dec_obj164=var_name_250;
                                    var_name_250=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 1908, 59),__exception_result_var_b48=((char*)(right_value364=parse_word(info))), come_pop_stackframe(), __exception_result_var_b48));
                                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_298++;
                                    __dec_obj165=var_name_250;
                                    var_name_250=(char*)come_increment_ref_count(((char*)(right_value365=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_298))));
                                    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(_if_conditional445=var_name_between_brace_255&&*info->p==41,                        _if_conditional445) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional446=*info->p==58,                        _if_conditional446) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_299=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=expression_v13(info))));
                            if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_299;
                            __dec_obj166=type_249->mSizeNum;
                            type_249->mSizeNum=(struct sNode*)come_increment_ref_count(node_300);
                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_296,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional447=map$2charphsTypephp_operator_load_element(info->types,type_name_198),                    _if_conditional447) {
                        __dec_obj167=type_249;
                        type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value367=sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_198)))));
                        come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value367,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        type_249->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_249->mClass->mName), "05type.c", 1937, 60));
                        __dec_obj168=type_249->mOriginalTypeName;
                        type_249->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value368=__builtin_string(type_name_198))));
                        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        type_249->mOriginalTypeNamePointerNum=pointer_num_244;
                        type_249->mConstant=type_249->mConstant||constant_200;
                        __dec_obj169=type_249->mAlignas;
                        type_249->mAlignas=(struct sNode*)come_increment_ref_count(alignas__216);
                        if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                        type_249->mComeMemCore=type_249->mComeMemCore||come_mem_core__215;
                        type_249->mRegister=register__203;
                        type_249->mUnsigned=type_249->mUnsigned||unsigned__204;
                        type_249->mVolatile=volatile__202;
                        type_249->mStatic=type_249->mStatic||static__201;
                        type_249->mRecord=type_249->mRecord||record__199;
                        type_249->mExtern=type_249->mExtern||extern__213;
                        type_249->mInline=type_249->mInline||inline__214;
                        type_249->mRestrict=type_249->mRestrict||restrict__208;
                        type_249->mLongLong=type_249->mLongLong||long_long_206;
                        type_249->mLong=type_249->mLong||long__205;
                        type_249->mShort=type_249->mShort||short__207;
                        type_249->mPointerNum+=pointer_num_244;
                        type_249->mHeap=type_249->mHeap||heap_245;
                    }
                    else {
                        if(_if_conditional448=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(type_name_198)),                        _if_conditional448) {
                            for(                            i_301=0;                            i_301<list$1charph_length(info->generics_type_names);                            i_301++                            ){
                                if(_if_conditional449=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_301), "05type.c", 1960, 61)),type_name_198),                                _if_conditional449) {
                                    __dec_obj170=type_249;
                                    type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value369=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1961, "sType")))),((char*)(right_value370=xsprintf("generics_type%d",i_301))),(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value369,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value371,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                            type_249->mConstant=type_249->mConstant||constant_200;
                            __dec_obj171=type_249->mAlignas;
                            type_249->mAlignas=(struct sNode*)come_increment_ref_count(alignas__216);
                            if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                            type_249->mComeMemCore=type_249->mComeMemCore||come_mem_core__215;
                            type_249->mRegister=register__203;
                            type_249->mUnsigned=type_249->mUnsigned||unsigned__204;
                            type_249->mVolatile=volatile__202;
                            type_249->mStatic=type_249->mStatic||static__201;
                            type_249->mRecord=type_249->mRecord||record__199;
                            type_249->mExtern=type_249->mExtern||extern__213;
                            type_249->mInline=type_249->mInline||inline__214;
                            type_249->mRestrict=type_249->mRestrict||restrict__208;
                            type_249->mLongLong=type_249->mLongLong||long_long_206;
                            type_249->mLong=type_249->mLong||long__205;
                            type_249->mShort=type_249->mShort||short__207;
                            type_249->mPointerNum+=pointer_num_244;
                            type_249->mHeap=type_249->mHeap||heap_245;
                        }
                        else {
                            if(_if_conditional450=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(type_name_198)),                            _if_conditional450) {
                                for(                                i_302=0;                                i_302<list$1charph_length(info->method_generics_type_names);                                i_302++                                ){
                                    if(_if_conditional451=string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_302), "05type.c", 1984, 62)),type_name_198),                                    _if_conditional451) {
                                        __dec_obj172=type_249;
                                        type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value374=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value372=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1985, "sType")))),((char*)(right_value373=xsprintf("mgenerics_type%d",i_302))),(_Bool)0,info))));
                                        come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value372,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value374,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                type_249->mConstant=type_249->mConstant||constant_200;
                                __dec_obj173=type_249->mAlignas;
                                type_249->mAlignas=(struct sNode*)come_increment_ref_count(alignas__216);
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                                type_249->mComeMemCore=type_249->mComeMemCore||come_mem_core__215;
                                type_249->mRegister=register__203;
                                type_249->mUnsigned=type_249->mUnsigned||unsigned__204;
                                type_249->mVolatile=volatile__202;
                                type_249->mStatic=type_249->mStatic||static__201;
                                type_249->mRecord=type_249->mRecord||record__199;
                                type_249->mExtern=type_249->mExtern||extern__213;
                                type_249->mInline=type_249->mInline||inline__214;
                                type_249->mRestrict=type_249->mRestrict||restrict__208;
                                type_249->mLongLong=type_249->mLongLong||long_long_206;
                                type_249->mLong=type_249->mLong||long__205;
                                type_249->mShort=type_249->mShort||short__207;
                                type_249->mPointerNum+=pointer_num_244;
                                type_249->mHeap=type_249->mHeap||heap_245;
                            }
                            else {
                                if(_if_conditional452=*info->p==60,                                _if_conditional452) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional453=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_198)==((void*)0),                                    _if_conditional453) {
                                        __result166__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value376=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value375=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2012, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value376,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        return __result166__;
                                    }
                                    __dec_obj174=type_249;
                                    type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value378=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value377=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2015, "sType")))),type_name_198,(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value377,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value378,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    while(_while_condtional47=(_Bool)1,                                    _while_condtional47) {
                                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value379=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_303=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                        var_name_304=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                        err_305=multiple_assign_var5->v3;
                                        come_call_finalizer3(right_value379,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional454=!err_305,                                        _if_conditional454) {
                                            __result167__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value381=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value380=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2021, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            come_call_finalizer3(generics_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_304 = come_decrement_ref_count2(var_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value381,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            return __result167__;
                                        }
                                        list$1sTypeph_push_back(type_249->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_303));
                                        if(_if_conditional455=*info->p==44,                                        _if_conditional455) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            if(_if_conditional456=*info->p==62,                                            _if_conditional456) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                come_call_finalizer3(generics_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_304 = come_decrement_ref_count2(var_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid generics type\n");
                                                __result168__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value383=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value382=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2038, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                come_call_finalizer3(generics_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_304 = come_decrement_ref_count2(var_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value383,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                return __result168__;
                                            }
                                        }
                                        come_call_finalizer3(generics_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_304 = come_decrement_ref_count2(var_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional457=is_contained_generics_class(type_249,info),                                    _if_conditional457) {
                                        __dec_obj175=type_249;
                                        type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value384=solve_generics(type_249,info->generics_type,info))));
                                        come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value384,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        if(_if_conditional458=!output_generics_struct(type_249,type_249,info),                                        _if_conditional458) {
                                            new_name_306=(char*)come_increment_ref_count(((char*)(right_value385=create_generics_name(type_249,info))));
                                            right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_306);
                                            exit(7);
                                            new_name_306 = come_decrement_ref_count2(new_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    type_249->mConstant=type_249->mConstant||constant_200;
                                    __dec_obj176=type_249->mAlignas;
                                    type_249->mAlignas=(struct sNode*)come_increment_ref_count(alignas__216);
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_249->mComeMemCore=type_249->mComeMemCore||come_mem_core__215;
                                    type_249->mRegister=register__203;
                                    type_249->mUnsigned=type_249->mUnsigned||unsigned__204;
                                    type_249->mVolatile=volatile__202;
                                    type_249->mStatic=type_249->mStatic||static__201;
                                    type_249->mRecord=type_249->mRecord||record__199;
                                    type_249->mExtern=type_249->mExtern||extern__213;
                                    type_249->mInline=type_249->mInline||inline__214;
                                    type_249->mRestrict=type_249->mRestrict||restrict__208;
                                    type_249->mLongLong=type_249->mLongLong||long_long_206;
                                    type_249->mLong=type_249->mLong||long__205;
                                    type_249->mShort=type_249->mShort||short__207;
                                    type_249->mPointerNum+=pointer_num_244;
                                    type_249->mHeap=type_249->mHeap||heap_245;
                                }
                                else {
                                    if(struct__209) {
                                        klass_307=map$2charphsClassphp_operator_load_element(info->classes,type_name_198);
                                        if(_if_conditional460=klass_307==((void*)0)&&*info->p!=60,                                        _if_conditional460) {
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_198),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value393=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value392=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2076, "sClass")))),type_name_198,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                            come_call_finalizer3(right_value392,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value393,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                    }
                                    __dec_obj177=type_249;
                                    type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value395=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value394=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2080, "sType")))),type_name_198,(_Bool)0,info))));
                                    come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value394,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value395,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    type_249->mConstant=type_249->mConstant||constant_200;
                                    __dec_obj178=type_249->mAlignas;
                                    type_249->mAlignas=(struct sNode*)come_increment_ref_count(alignas__216);
                                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_249->mComeMemCore=type_249->mComeMemCore||come_mem_core__215;
                                    type_249->mRegister=register__203;
                                    type_249->mUnsigned=type_249->mUnsigned||unsigned__204;
                                    type_249->mVolatile=volatile__202;
                                    type_249->mStatic=type_249->mStatic||static__201;
                                    type_249->mRecord=type_249->mRecord||record__199;
                                    type_249->mExtern=type_249->mExtern||extern__213;
                                    type_249->mInline=type_249->mInline||inline__214;
                                    type_249->mRestrict=type_249->mRestrict||restrict__208;
                                    type_249->mLongLong=type_249->mLongLong||long_long_206;
                                    type_249->mLong=type_249->mLong||long__205;
                                    type_249->mShort=type_249->mShort||short__207;
                                    type_249->mPointerNum+=pointer_num_244;
                                    type_249->mHeap=type_249->mHeap||heap_245;
                                }
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional56=*info->p==42,                    _while_condtional56) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_249->mPointerNum++;
                        if(type_249->mNoSolvedGenericsType->v1) {
                            type_249->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional509=*info->p==37,                    _if_conditional509) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_249->mHeap=(_Bool)1;
                        if(type_249->mNoSolvedGenericsType->v1) {
                            type_249->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional511=*info->p==38,                    _if_conditional511) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_249->mNoHeap=(_Bool)1;
                        if(type_249->mNoSolvedGenericsType->v1) {
                            type_249->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(_if_conditional513=*info->p==63,                    _if_conditional513) {
                        info->p++;
                        if(_if_conditional514=*info->p==63,                        _if_conditional514) {
                            info->p++;
                            type_249->mGuardValue=(_Bool)1;
                        }
                        else {
                            type_249->mNullValue=(_Bool)1;
                        }
                        skip_spaces_and_lf(info);
                    }
                    if(_if_conditional515=*info->p==96,                    _if_conditional515) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_249->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(_while_condtional57=*info->p==42,                    _while_condtional57) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_249->mPointerNum++;
                        if(type_249->mNoSolvedGenericsType->v1) {
                            type_249->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(_if_conditional517=*info->p==37,                    _if_conditional517) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_249->mHeap=(_Bool)1;
                        if(type_249->mNoSolvedGenericsType->v1) {
                            type_249->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(_if_conditional519=parse_multiple_type&&*info->p==44,                    _if_conditional519) {
                        types_352=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value397=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value396=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2181, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value396,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value397,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1sTypeph_push_back(types_352,(struct sType*)come_increment_ref_count(((struct sType*)(right_value398=sType_clone(type_249)))));
                        come_call_finalizer3(right_value398,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional58=*info->p==44,                        _while_condtional58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value399=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_353=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                            name_354=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            err_355=multiple_assign_var6->v3;
                            come_call_finalizer3(right_value399,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional520=!err_355,                            _if_conditional520) {
                                __result193__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value401=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value400=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2192, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                come_call_finalizer3(type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_354 = come_decrement_ref_count2(name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(types_352,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                                var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value401,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                return __result193__;
                            }
                            list$1sTypeph_push_back(types_352,(struct sType*)come_increment_ref_count(((struct sType*)(right_value402=sType_clone(type2_353)))));
                            come_call_finalizer3(right_value402,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_354 = come_decrement_ref_count2(name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        num_tuples_356=list$1sTypeph_length(types_352);
                        __dec_obj179=type_249;
                        type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value405=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value403=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2200, "sType")))),((char*)(right_value404=xsprintf("tuple%d",num_tuples_356))),(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value403,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value405,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        type_249->mPointerNum++;
                        type_249->mHeap=(_Bool)1;
                        for(                        o2_saved_357=(struct list$1sTypeph*)come_increment_ref_count((types_352)),it_358=list$1sTypeph_begin((o2_saved_357));                        !list$1sTypeph_end((o2_saved_357));                        it_358=list$1sTypeph_next((o2_saved_357))                        ){
                            list$1sTypeph_push_back(type_249->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value406=sType_clone(it_358)))));
                            come_call_finalizer3(right_value406,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer3(o2_saved_357,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        if(_if_conditional521=is_contained_generics_class(type_249,info),                        _if_conditional521) {
                            __dec_obj180=type_249;
                            type_249=(struct sType*)come_increment_ref_count(((struct sType*)(right_value407=solve_generics(type_249,info->generics_type,info))));
                            come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value407,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(_if_conditional522=!output_generics_struct(type_249,type_249,info),                            _if_conditional522) {
                                new_name_359=(char*)come_increment_ref_count(((char*)(right_value408=create_generics_name(type_249,info))));
                                right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                printf("output generics is failed(%s)\n",new_name_359);
                                exit(9);
                                new_name_359 = come_decrement_ref_count2(new_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        come_call_finalizer3(types_352,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(_if_conditional524=var_name_between_brace_255&&*info->p==40,                        _if_conditional524) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional525=*info->p==58,                        _if_conditional525) {
                            __dec_obj181=var_name_250;
                            var_name_250=(char*)come_increment_ref_count(((char*)(right_value409=__builtin_string(""))));
                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value409 = come_decrement_ref_count2(right_value409, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            if(anonymous_name_218) {
                                num_anonymous_var_name_360++;
                                __dec_obj182=var_name_250;
                                var_name_250=(char*)come_increment_ref_count(((char*)(right_value410=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_360))));
                                __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            else {
                                if(_if_conditional527=xisalnum(*info->p)||*info->p==95,                                _if_conditional527) {
                                    __dec_obj183=var_name_250;
                                    var_name_250=(char*)come_increment_ref_count((come_push_stackframe("05type.c", 2237, 63),__exception_result_var_b49=((char*)(right_value411=parse_word(info))), come_pop_stackframe(), __exception_result_var_b49));
                                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    num_anonymous_var_name_361++;
                                    __dec_obj184=var_name_250;
                                    var_name_250=(char*)come_increment_ref_count(((char*)(right_value412=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_361))));
                                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        if(_if_conditional528=var_name_between_brace_255&&*info->p==41,                        _if_conditional528) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(_if_conditional529=*info->p==58,                        _if_conditional529) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_362=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_363=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=expression_v13(info))));
                            if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_362;
                            __dec_obj185=type_249->mSizeNum;
                            type_249->mSizeNum=(struct sNode*)come_increment_ref_count(node_363);
                            if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_363) { node_363 = come_decrement_ref_count2(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(_while_condtional59=*info->p==91,    _while_condtional59) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(_if_conditional530=*info->p==93,        _if_conditional530) {
            info->p++;
            skip_spaces_and_lf(info);
            type_249->mArrayPointerType=(_Bool)1;
            type_249->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_364=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=expression_v13(info))));
        if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1sNodeph_push_back(type_249->mArrayNum,(struct sNode*)come_increment_ref_count(node_364));
        parse_sharp_v5(info);
        (come_push_stackframe("05type.c", 2286, 64),__exception_result_var_b50=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b50);
        if(node_364) { node_364 = come_decrement_ref_count2(node_364, ((struct sNode*)node_364)->finalize, ((struct sNode*)node_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_365=(char*)come_increment_ref_count(((char*)(right_value415=parse_attribute(info))));
    right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj186=type_249->mAsmName;
    type_249->mAsmName=(char*)come_increment_ref_count(asm_name_365);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    __result194__ = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(right_value417=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value416=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2294, "struct tuple3$3sTypephcharphbool")))),(struct sType*)come_increment_ref_count(type_249),(char*)come_increment_ref_count(var_name_250),(_Bool)1)));
    type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_365 = come_decrement_ref_count2(asm_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value417,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result194__;
    type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__216) { alignas__216 = come_decrement_ref_count2(alignas__216, ((struct sNode*)alignas__216)->finalize, ((struct sNode*)alignas__216)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_250 = come_decrement_ref_count2(var_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_365 = come_decrement_ref_count2(asm_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_270;
unsigned int hash_271;
unsigned int it_272;
_Bool _while_condtional45;
_Bool _if_conditional409;
_Bool _if_conditional410;
struct sType* __result145__;
_Bool _if_conditional411;
_Bool _if_conditional412;
struct sType* __result146__;
struct sType* __result147__;
struct sType* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_270, 0, sizeof(struct sType*));
memset(&hash_271, 0, sizeof(unsigned int));
memset(&it_272, 0, sizeof(unsigned int));
                memset(&default_value_270,0,sizeof(struct sType*));
                hash_271=string_get_hash_key(((char*)key))%self->size;
                it_272=hash_271;
                while(_while_condtional45=(_Bool)1,                _while_condtional45) {
                    if(_if_conditional409=self->item_existance[it_272],                    _if_conditional409) {
                        if(_if_conditional410=string_equals(self->keys[it_272],key),                        _if_conditional410) {
                            __result145__ = __result_obj__ = self->items[it_272];
                            come_call_finalizer3(default_value_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result145__;
                        }
                        it_272++;
                        if(_if_conditional411=it_272>=self->size,                        _if_conditional411) {
                            it_272=0;
                        }
                        else {
                            if(_if_conditional412=it_272==hash_271,                            _if_conditional412) {
                                __result146__ = __result_obj__ = default_value_270;
                                come_call_finalizer3(default_value_270,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result146__;
                            }
                        }
                    }
                    else {
                        __result147__ = __result_obj__ = default_value_270;
                        come_call_finalizer3(default_value_270,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result147__;
                    }
                }
                __result148__ = __result_obj__ = default_value_270;
                come_call_finalizer3(default_value_270,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result148__;
                come_call_finalizer3(default_value_270,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
char* it_275;
_Bool _if_conditional418;
_Bool __result156__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_275, 0, sizeof(char*));
                    for(                    it_275=list$1charph_begin(self);                    !list$1charph_end(self);                    it_275=list$1charph_next(self)                    ){
                        if(_if_conditional418=string_operator_equals(it_275,item),                        _if_conditional418) {
                            __result156__ = (_Bool)1;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result156__;
                        }
                    }
                    __result157__ = (_Bool)0;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result157__;
                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional414;
char* result_273;
char* __result149__;
_Bool _if_conditional415;
char* __result150__;
char* result_274;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_273, 0, sizeof(char*));
memset(&result_274, 0, sizeof(char*));
                        if(_if_conditional414=self==((void*)0),                        _if_conditional414) {
                            memset(&result_273,0,sizeof(char*));
                            __result149__ = __result_obj__ = result_273;
                            return __result149__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result150__ = __result_obj__ = self->it->item;
                            return __result150__;
                        }
                        memset(&result_274,0,sizeof(char*));
                        __result151__ = __result_obj__ = result_274;
                        return __result151__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result152__ = self==((void*)0)||self->it==((void*)0);
                        return __result152__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional416;
char* result_276;
char* __result153__;
_Bool _if_conditional417;
char* __result154__;
char* result_277;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_276, 0, sizeof(char*));
memset(&result_277, 0, sizeof(char*));
                        if(_if_conditional416=self==((void*)0)||self->it==((void*)0),                        _if_conditional416) {
                            memset(&result_276,0,sizeof(char*));
                            __result153__ = __result_obj__ = result_276;
                            return __result153__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result154__ = __result_obj__ = self->it->item;
                            return __result154__;
                        }
                        memset(&result_277,0,sizeof(char*));
                        __result155__ = __result_obj__ = result_277;
                        return __result155__;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional420;
int __result158__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional420=self==((void*)0),                        _if_conditional420) {
                            __result158__ = 0;
                            return __result158__;
                        }
                        __result159__ = self->len;
                        return __result159__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional421;
struct list_item$1charph* it_279;
int i_280;
_Bool _while_condtional46;
_Bool _if_conditional422;
char* __result160__;
char* default_value_281;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_279, 0, sizeof(struct list_item$1charph*));
memset(&i_280, 0, sizeof(int));
memset(&default_value_281, 0, sizeof(char*));
                            if(_if_conditional421=position<0,                            _if_conditional421) {
                                position+=self->len;
                            }
                            it_279=self->head;
                            i_280=0;
                            while(_while_condtional46=it_279!=((void*)0),                            _while_condtional46) {
                                if(_if_conditional422=position==i_280,                                _if_conditional422) {
                                    __result160__ = __result_obj__ = it_279->item;
                                    return __result160__;
                                }
                                it_279=it_279->next;
                                i_280++;
                            }
                            memset(&default_value_281,0,sizeof(char*));
                            __result161__ = __result_obj__ = default_value_281;
                            default_value_281 = come_decrement_ref_count2(default_value_281, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result161__;
                            default_value_281 = come_decrement_ref_count2(default_value_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj145;
struct tuple1$1sTypeph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj145=self->v1;
                self->v1=(struct sType*)come_increment_ref_count(v1);
                come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
                __result162__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result162__;
                come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
char* __dec_obj160;
struct tuple3$3sTypepcharphbool* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->v1=v1;
                            __dec_obj160=self->v2;
                            self->v2=(char*)come_increment_ref_count(v2);
                            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->v3=v3;
                            __result164__ = __result_obj__ = self;
                            come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result164__;
                            come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
                            v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
void* __result_obj__;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional437=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional437) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional438;
_Bool _if_conditional439;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional438=self!=((void*)0)&&self->c_value!=((void*)0),                        _if_conditional438) {
                            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional439=self!=((void*)0)&&self->type!=((void*)0),                        _if_conditional439) {
                            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional461;
unsigned int hash_325;
unsigned int it_326;
_Bool _while_condtional50;
_Bool _if_conditional473;
_Bool _if_conditional474;
_Bool _if_conditional475;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
_Bool _if_conditional499;
_Bool same_key_exist_343;
char* it2_346;
_Bool _if_conditional504;
_Bool _if_conditional505;
struct map$2charphsClassph* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_325, 0, sizeof(unsigned int));
memset(&it_326, 0, sizeof(unsigned int));
memset(&same_key_exist_343, 0, sizeof(_Bool));
memset(&it2_346, 0, sizeof(char*));
                                                if(_if_conditional461=self->len*10>=self->size,                                                _if_conditional461) {
                                                    map$2charphsClassph_rehash(self);
                                                }
                                                hash_325=string_get_hash_key(key)%self->size;
                                                it_326=hash_325;
                                                while(_while_condtional50=(_Bool)1,                                                _while_condtional50) {
                                                    if(_if_conditional473=self->item_existance[it_326],                                                    _if_conditional473) {
                                                        if(_if_conditional474=string_equals(self->keys[it_326],key),                                                        _if_conditional474) {
                                                            if(_if_conditional475=1,                                                            _if_conditional475) {
                                                                list$1charp_remove(self->key_list,self->keys[it_326]);
                                                                self->keys[it_326] = come_decrement_ref_count2(self->keys[it_326], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                self->keys[it_326]=(char*)come_increment_ref_count(key);
                                                            }
                                                            else {
                                                                list$1charp_remove(self->key_list,self->keys[it_326]);
                                                                self->keys[it_326]=key;
                                                            }
                                                            if(_if_conditional495=1,                                                            _if_conditional495) {
                                                                come_call_finalizer3(self->items[it_326],sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->items[it_326]=(struct sClass*)come_increment_ref_count(item);
                                                            }
                                                            else {
                                                                self->items[it_326]=item;
                                                            }
                                                            break;
                                                        }
                                                        it_326++;
                                                        if(_if_conditional496=it_326>=self->size,                                                        _if_conditional496) {
                                                            it_326=0;
                                                        }
                                                        else {
                                                            if(_if_conditional497=it_326==hash_325,                                                            _if_conditional497) {
                                                                printf("unexpected error in map.insert\n");
                                                                stackframe();
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        self->item_existance[it_326]=(_Bool)1;
                                                        if(_if_conditional498=1,                                                        _if_conditional498) {
                                                            self->keys[it_326]=(char*)come_increment_ref_count(key);
                                                        }
                                                        else {
                                                            self->keys[it_326]=key;
                                                        }
                                                        if(_if_conditional499=1,                                                        _if_conditional499) {
                                                            self->items[it_326]=(struct sClass*)come_increment_ref_count(item);
                                                        }
                                                        else {
                                                            self->items[it_326]=item;
                                                        }
                                                        self->len++;
                                                        break;
                                                    }
                                                }
                                                same_key_exist_343=(_Bool)0;
                                                for(                                                it2_346=list$1charp_begin(self->key_list);                                                !list$1charp_end(self->key_list);                                                it2_346=list$1charp_next(self->key_list)                                                ){
                                                    if(_if_conditional504=string_equals(it2_346,key),                                                    _if_conditional504) {
                                                        same_key_exist_343=(_Bool)1;
                                                    }
                                                }
                                                if(_if_conditional505=!same_key_exist_343,                                                _if_conditional505) {
                                                    list$1charp_push_back(self->key_list,key);
                                                }
                                                __result192__ = __result_obj__ = self;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result192__;
                                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_308;
void* right_value386;
char** keys_309;
void* right_value387;
struct sClass** items_310;
void* right_value388;
_Bool* item_existance_311;
int len_312;
char* it_315;
struct sClass* default_value_318;
struct sClass* it2_321;
unsigned int hash_322;
int n_323;
_Bool _while_condtional49;
_Bool _if_conditional470;
_Bool _if_conditional471;
_Bool _if_conditional472;
struct sClass* default_value_324;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_308, 0, sizeof(int));
right_value386 = (void*)0;
memset(&keys_309, 0, sizeof(char**));
right_value387 = (void*)0;
memset(&items_310, 0, sizeof(struct sClass**));
right_value388 = (void*)0;
memset(&item_existance_311, 0, sizeof(_Bool*));
memset(&len_312, 0, sizeof(int));
memset(&it_315, 0, sizeof(char*));
memset(&default_value_318, 0, sizeof(struct sClass*));
memset(&it2_321, 0, sizeof(struct sClass*));
memset(&hash_322, 0, sizeof(unsigned int));
memset(&n_323, 0, sizeof(int));
memset(&default_value_324, 0, sizeof(struct sClass*));
                                                        size_308=self->size*10;
                                                        keys_309=(char**)come_increment_ref_count(((char**)(right_value386=(char**)come_calloc(1, sizeof(char*)*(1*(size_308)), "./neo-c.h", 1313, "char*%"))));
                                                        right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        items_310=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value387=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_308)), "./neo-c.h", 1314, "sClass*%"))));
                                                        come_call_finalizer3(right_value387,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                                                        item_existance_311=(_Bool*)come_increment_ref_count(((_Bool*)(right_value388=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_308)), "./neo-c.h", 1315, "bool"))));
                                                        right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        len_312=0;
                                                        for(                                                        it_315=map$2charphsClassph_begin(self);                                                        !map$2charphsClassph_end(self);                                                        it_315=map$2charphsClassph_next(self)                                                        ){
                                                            memset(&default_value_318,0,sizeof(struct sClass*));
                                                            it2_321=map$2charphsClassph_at(self,it_315,default_value_318);
                                                            hash_322=string_get_hash_key(it_315)%size_308;
                                                            n_323=hash_322;
                                                            while(_while_condtional49=(_Bool)1,                                                            _while_condtional49) {
                                                                if(_if_conditional470=item_existance_311[n_323],                                                                _if_conditional470) {
                                                                    n_323++;
                                                                    if(_if_conditional471=n_323>=size_308,                                                                    _if_conditional471) {
                                                                        n_323=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional472=n_323==hash_322,                                                                        _if_conditional472) {
                                                                            printf("unexpected error in map.rehash(1)\n");
                                                                            stackframe();
                                                                            exit(2);
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    item_existance_311[n_323]=(_Bool)1;
                                                                    keys_309[n_323]=it_315;
                                                                    items_310[n_323]=map$2charphsClassph_at(self,it_315,default_value_324);
                                                                    len_312++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        come_free((char*)self->items);
                                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        come_free((char*)self->keys);
                                                        self->keys=keys_309;
                                                        self->items=items_310;
                                                        self->item_existance=item_existance_311;
                                                        self->size=size_308;
                                                        self->len=len_312;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional462;
char* result_313;
char* __result169__;
_Bool _if_conditional463;
char* __result170__;
char* result_314;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_313, 0, sizeof(char*));
memset(&result_314, 0, sizeof(char*));
                                                            if(_if_conditional462=self==((void*)0),                                                            _if_conditional462) {
                                                                memset(&result_313,0,sizeof(char*));
                                                                __result169__ = __result_obj__ = result_313;
                                                                return __result169__;
                                                            }
                                                            self->key_list->it=self->key_list->head;
                                                            if(self->key_list->it) {
                                                                __result170__ = __result_obj__ = self->key_list->it->item;
                                                                return __result170__;
                                                            }
                                                            memset(&result_314,0,sizeof(char*));
                                                            __result171__ = __result_obj__ = result_314;
                                                            return __result171__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
                                                            __result172__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                            return __result172__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional464;
char* result_316;
char* __result173__;
_Bool _if_conditional465;
char* __result174__;
char* result_317;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_316, 0, sizeof(char*));
memset(&result_317, 0, sizeof(char*));
                                                            if(_if_conditional464=self==((void*)0)||self->key_list->it==((void*)0),                                                            _if_conditional464) {
                                                                memset(&result_316,0,sizeof(char*));
                                                                __result173__ = __result_obj__ = result_316;
                                                                return __result173__;
                                                            }
                                                            self->key_list->it=self->key_list->it->next;
                                                            if(self->key_list->it) {
                                                                __result174__ = __result_obj__ = self->key_list->it->item;
                                                                return __result174__;
                                                            }
                                                            memset(&result_317,0,sizeof(char*));
                                                            __result175__ = __result_obj__ = result_317;
                                                            return __result175__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_319;
unsigned int it_320;
_Bool _while_condtional48;
_Bool _if_conditional466;
_Bool _if_conditional467;
struct sClass* __result176__;
_Bool _if_conditional468;
_Bool _if_conditional469;
struct sClass* __result177__;
struct sClass* __result178__;
struct sClass* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_319, 0, sizeof(unsigned int));
memset(&it_320, 0, sizeof(unsigned int));
                                                                hash_319=string_get_hash_key(((char*)key))%self->size;
                                                                it_320=hash_319;
                                                                while(_while_condtional48=(_Bool)1,                                                                _while_condtional48) {
                                                                    if(_if_conditional466=self->item_existance[it_320],                                                                    _if_conditional466) {
                                                                        if(_if_conditional467=string_equals(self->keys[it_320],key),                                                                        _if_conditional467) {
                                                                            __result176__ = __result_obj__ = self->items[it_320];
                                                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result176__;
                                                                        }
                                                                        it_320++;
                                                                        if(_if_conditional468=it_320>=self->size,                                                                        _if_conditional468) {
                                                                            it_320=0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional469=it_320==hash_319,                                                                            _if_conditional469) {
                                                                                __result177__ = __result_obj__ = default_value;
                                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result177__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        __result178__ = __result_obj__ = default_value;
                                                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result178__;
                                                                    }
                                                                }
                                                                __result179__ = __result_obj__ = default_value;
                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result179__;
                                                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_327;
struct list_item$1charp* it_328;
_Bool _while_condtional51;
_Bool _if_conditional476;
struct list$1charp* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_327, 0, sizeof(int));
memset(&it_328, 0, sizeof(struct list_item$1charp*));
                                                                    it2_327=0;
                                                                    it_328=self->head;
                                                                    while(_while_condtional51=it_328!=((void*)0),                                                                    _while_condtional51) {
                                                                        if(_if_conditional476=string_equals(it_328->item,item),                                                                        _if_conditional476) {
                                                                            list$1charp_delete(self,it2_327,it2_327+1);
                                                                            break;
                                                                        }
                                                                        it2_327++;
                                                                        it_328=it_328->next;
                                                                    }
                                                                    __result183__ = __result_obj__ = self;
                                                                    return __result183__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional477;
_Bool _if_conditional478;
_Bool _if_conditional479;
int tmp_329;
_Bool _if_conditional480;
_Bool _if_conditional481;
_Bool _if_conditional482;
struct list$1charp* __result180__;
_Bool _if_conditional483;
_Bool _if_conditional484;
struct list_item$1charp* it_332;
int i_333;
_Bool _while_condtional53;
_Bool _if_conditional485;
struct list_item$1charp* prev_it_334;
_Bool _if_conditional486;
_Bool _if_conditional487;
struct list_item$1charp* it_335;
int i_336;
_Bool _while_condtional54;
_Bool _if_conditional488;
_Bool _if_conditional489;
struct list_item$1charp* prev_it_337;
struct list_item$1charp* it_338;
struct list_item$1charp* head_prev_it_339;
struct list_item$1charp* tail_it_340;
int i_341;
_Bool _while_condtional55;
_Bool _if_conditional490;
_Bool _if_conditional491;
_Bool _if_conditional492;
struct list_item$1charp* prev_it_342;
_Bool _if_conditional493;
_Bool _if_conditional494;
struct list$1charp* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_329, 0, sizeof(int));
memset(&it_332, 0, sizeof(struct list_item$1charp*));
memset(&i_333, 0, sizeof(int));
memset(&prev_it_334, 0, sizeof(struct list_item$1charp*));
memset(&it_335, 0, sizeof(struct list_item$1charp*));
memset(&i_336, 0, sizeof(int));
memset(&prev_it_337, 0, sizeof(struct list_item$1charp*));
memset(&it_338, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_339, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_340, 0, sizeof(struct list_item$1charp*));
memset(&i_341, 0, sizeof(int));
memset(&prev_it_342, 0, sizeof(struct list_item$1charp*));
                                                                                if(_if_conditional477=head<0,                                                                                _if_conditional477) {
                                                                                    head+=self->len;
                                                                                }
                                                                                if(_if_conditional478=tail<0,                                                                                _if_conditional478) {
                                                                                    tail+=self->len+1;
                                                                                }
                                                                                if(_if_conditional479=head>tail,                                                                                _if_conditional479) {
                                                                                    tmp_329=tail;
                                                                                    tail=head;
                                                                                    head=tmp_329;
                                                                                }
                                                                                if(_if_conditional480=head<0,                                                                                _if_conditional480) {
                                                                                    head=0;
                                                                                }
                                                                                if(_if_conditional481=tail>self->len,                                                                                _if_conditional481) {
                                                                                    tail=self->len;
                                                                                }
                                                                                if(_if_conditional482=head==tail,                                                                                _if_conditional482) {
                                                                                    __result180__ = __result_obj__ = self;
                                                                                    return __result180__;
                                                                                }
                                                                                if(_if_conditional483=head==0&&tail==self->len,                                                                                _if_conditional483) {
                                                                                    list$1charp_reset(self);
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional484=head==0,                                                                                    _if_conditional484) {
                                                                                        it_332=self->head;
                                                                                        i_333=0;
                                                                                        while(_while_condtional53=it_332!=((void*)0),                                                                                        _while_condtional53) {
                                                                                            if(_if_conditional485=i_333<tail,                                                                                            _if_conditional485) {
                                                                                                prev_it_334=it_332;
                                                                                                it_332=it_332->next;
                                                                                                i_333++;
                                                                                                come_call_finalizer3(prev_it_334,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                self->len--;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional486=i_333==tail,                                                                                                _if_conditional486) {
                                                                                                    self->head=it_332;
                                                                                                    self->head->prev=((void*)0);
                                                                                                    break;
                                                                                                }
                                                                                                else {
                                                                                                    it_332=it_332->next;
                                                                                                    i_333++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional487=tail==self->len,                                                                                        _if_conditional487) {
                                                                                            it_335=self->head;
                                                                                            i_336=0;
                                                                                            while(_while_condtional54=it_335!=((void*)0),                                                                                            _while_condtional54) {
                                                                                                if(_if_conditional488=i_336==head,                                                                                                _if_conditional488) {
                                                                                                    self->tail=it_335->prev;
                                                                                                    self->tail->next=((void*)0);
                                                                                                }
                                                                                                if(_if_conditional489=i_336>=head,                                                                                                _if_conditional489) {
                                                                                                    prev_it_337=it_335;
                                                                                                    it_335=it_335->next;
                                                                                                    i_336++;
                                                                                                    come_call_finalizer3(prev_it_337,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    it_335=it_335->next;
                                                                                                    i_336++;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            it_338=self->head;
                                                                                            head_prev_it_339=((void*)0);
                                                                                            tail_it_340=((void*)0);
                                                                                            i_341=0;
                                                                                            while(_while_condtional55=it_338!=((void*)0),                                                                                            _while_condtional55) {
                                                                                                if(_if_conditional490=i_341==head,                                                                                                _if_conditional490) {
                                                                                                    head_prev_it_339=it_338->prev;
                                                                                                }
                                                                                                if(_if_conditional491=i_341==tail,                                                                                                _if_conditional491) {
                                                                                                    tail_it_340=it_338;
                                                                                                }
                                                                                                if(_if_conditional492=i_341>=head&&i_341<tail,                                                                                                _if_conditional492) {
                                                                                                    prev_it_342=it_338;
                                                                                                    it_338=it_338->next;
                                                                                                    i_341++;
                                                                                                    come_call_finalizer3(prev_it_342,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    self->len--;
                                                                                                }
                                                                                                else {
                                                                                                    it_338=it_338->next;
                                                                                                    i_341++;
                                                                                                }
                                                                                            }
                                                                                            if(_if_conditional493=head_prev_it_339!=((void*)0),                                                                                            _if_conditional493) {
                                                                                                head_prev_it_339->next=tail_it_340;
                                                                                            }
                                                                                            if(_if_conditional494=tail_it_340!=((void*)0),                                                                                            _if_conditional494) {
                                                                                                tail_it_340->prev=head_prev_it_339;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                                __result182__ = __result_obj__ = self;
                                                                                return __result182__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_330;
_Bool _while_condtional52;
struct list_item$1charp* prev_it_331;
struct list$1charp* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_330, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_331, 0, sizeof(struct list_item$1charp*));
                                                                                        it_330=self->head;
                                                                                        while(_while_condtional52=it_330!=((void*)0),                                                                                        _while_condtional52) {
                                                                                            prev_it_331=it_330;
                                                                                            it_330=it_330->next;
                                                                                            come_call_finalizer3(prev_it_331,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        self->head=((void*)0);
                                                                                        self->tail=((void*)0);
                                                                                        self->len=0;
                                                                                        __result181__ = __result_obj__ = self;
                                                                                        return __result181__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional500;
char* result_344;
char* __result184__;
_Bool _if_conditional501;
char* __result185__;
char* result_345;
char* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_344, 0, sizeof(char*));
memset(&result_345, 0, sizeof(char*));
                                                    if(_if_conditional500=self==((void*)0),                                                    _if_conditional500) {
                                                        memset(&result_344,0,sizeof(char*));
                                                        __result184__ = __result_obj__ = result_344;
                                                        return __result184__;
                                                    }
                                                    self->it=self->head;
                                                    if(self->it) {
                                                        __result185__ = __result_obj__ = self->it->item;
                                                        return __result185__;
                                                    }
                                                    memset(&result_345,0,sizeof(char*));
                                                    __result186__ = __result_obj__ = result_345;
                                                    return __result186__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    __result187__ = self==((void*)0)||self->it==((void*)0);
                                                    return __result187__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional502;
char* result_347;
char* __result188__;
_Bool _if_conditional503;
char* __result189__;
char* result_348;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_347, 0, sizeof(char*));
memset(&result_348, 0, sizeof(char*));
                                                    if(_if_conditional502=self==((void*)0)||self->it==((void*)0),                                                    _if_conditional502) {
                                                        memset(&result_347,0,sizeof(char*));
                                                        __result188__ = __result_obj__ = result_347;
                                                        return __result188__;
                                                    }
                                                    self->it=self->it->next;
                                                    if(self->it) {
                                                        __result189__ = __result_obj__ = self->it->item;
                                                        return __result189__;
                                                    }
                                                    memset(&result_348,0,sizeof(char*));
                                                    __result190__ = __result_obj__ = result_348;
                                                    return __result190__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional506;
void* right_value389;
struct list_item$1charp* litem_349;
_Bool _if_conditional507;
void* right_value390;
struct list_item$1charp* litem_350;
void* right_value391;
struct list_item$1charp* litem_351;
struct list$1charp* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&litem_349, 0, sizeof(struct list_item$1charp*));
right_value390 = (void*)0;
memset(&litem_350, 0, sizeof(struct list_item$1charp*));
right_value391 = (void*)0;
memset(&litem_351, 0, sizeof(struct list_item$1charp*));
                                                        if(_if_conditional506=self->len==0,                                                        _if_conditional506) {
                                                            litem_349=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value389=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                                                            come_call_finalizer3(right_value389,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_349->prev=((void*)0);
                                                            litem_349->next=((void*)0);
                                                            litem_349->item=item;
                                                            self->tail=litem_349;
                                                            self->head=litem_349;
                                                        }
                                                        else {
                                                            if(_if_conditional507=self->len==1,                                                            _if_conditional507) {
                                                                litem_350=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value390=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                                                                come_call_finalizer3(right_value390,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                litem_350->prev=self->head;
                                                                litem_350->next=((void*)0);
                                                                litem_350->item=item;
                                                                self->tail=litem_350;
                                                                self->head->next=litem_350;
                                                            }
                                                            else {
                                                                litem_351=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value391=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                                                                come_call_finalizer3(right_value391,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                litem_351->prev=self->tail;
                                                                litem_351->next=((void*)0);
                                                                litem_351->item=item;
                                                                self->tail->next=litem_351;
                                                                self->tail=litem_351;
                                                            }
                                                        }
                                                        self->len++;
                                                        __result191__ = __result_obj__ = self;
                                                        return __result191__;
}

