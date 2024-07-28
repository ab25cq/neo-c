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
struct sForNode
{
    int sline;
    char* sname;
    struct sNode* mExpressionNode;
    struct sNode* mExpressionNode2;
    struct sNode* mExpressionNode3;
    struct sBlock* mBlock;
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

struct sForNode* sForNode_initialize(struct sForNode* self, struct sNode* expression_node, struct sNode* expression_node2, struct sNode* expression_node3, struct sBlock* block, struct sInfo* info);

_Bool sForNode_terminated(struct sForNode* self);

char* sForNode_kind(struct sForNode* self);

_Bool sForNode_compile(struct sForNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
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










struct sForNode* sForNode_initialize(struct sForNode* self, struct sNode* expression_node, struct sNode* expression_node2, struct sNode* expression_node3, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
_Bool _if_conditional20;
struct sNode* __exception_result_var_b52;
void* right_value81;
struct sNode* __dec_obj12;
struct sNode* __dec_obj13;
_Bool _if_conditional30;
struct sNode* __exception_result_var_b53;
void* right_value82;
struct sNode* __dec_obj14;
struct sNode* __dec_obj15;
_Bool _if_conditional31;
struct sNode* __exception_result_var_b54;
void* right_value83;
struct sNode* __dec_obj16;
struct sNode* __dec_obj17;
struct sBlock* __exception_result_var_b101;
void* right_value110;
struct sBlock* __dec_obj26;
struct sForNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value110 = (void*)0;
    (come_push_stackframe("11for.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 7, 573)), "11for.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((void*)0);
    if(expression_node) {
        __dec_obj12=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 11, 580)), "11for.c", 11, 581))->mExpressionNode;
        ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 11, 580)), "11for.c", 11, 581))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=(come_push_stackframe("11for.c", 11, 616),__exception_result_var_b52=sNode_clone(expression_node), come_pop_stackframe(), __exception_result_var_b52))));
        if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    }
    else {
        __dec_obj13=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 14, 617)), "11for.c", 14, 618))->mExpressionNode;
        ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 14, 617)), "11for.c", 14, 618))->mExpressionNode=((void*)0);
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0, (void*)0); }
    }
    ((void*)0);
    if(expression_node2) {
        __dec_obj14=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 18, 619)), "11for.c", 18, 620))->mExpressionNode2;
        ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 18, 619)), "11for.c", 18, 620))->mExpressionNode2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value82=(come_push_stackframe("11for.c", 18, 621),__exception_result_var_b53=sNode_clone(expression_node2), come_pop_stackframe(), __exception_result_var_b53))));
        if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value82) { right_value82 = come_decrement_ref_count2(right_value82, ((struct sNode*)right_value82)->finalize, ((struct sNode*)right_value82)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    }
    else {
        __dec_obj15=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 21, 622)), "11for.c", 21, 623))->mExpressionNode2;
        ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 21, 622)), "11for.c", 21, 623))->mExpressionNode2=((void*)0);
        if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
    }
    ((void*)0);
    if(expression_node3) {
        __dec_obj16=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 25, 624)), "11for.c", 25, 625))->mExpressionNode3;
        ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 25, 624)), "11for.c", 25, 625))->mExpressionNode3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value83=(come_push_stackframe("11for.c", 25, 626),__exception_result_var_b54=sNode_clone(expression_node3), come_pop_stackframe(), __exception_result_var_b54))));
        if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value83) { right_value83 = come_decrement_ref_count2(right_value83, ((struct sNode*)right_value83)->finalize, ((struct sNode*)right_value83)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    }
    else {
        __dec_obj17=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 28, 627)), "11for.c", 28, 628))->mExpressionNode3;
        ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 28, 627)), "11for.c", 28, 628))->mExpressionNode3=((void*)0);
        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __dec_obj26=((struct sForNode*)come_null_check(self, "11for.c", 31, 629))->mBlock;
    ((struct sForNode*)come_null_check(self, "11for.c", 31, 629))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value110=(come_push_stackframe("11for.c", 31, 1309),__exception_result_var_b101=sBlock_clone(block), come_pop_stackframe(), __exception_result_var_b101))));
    come_call_finalizer3(__dec_obj26,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value110,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
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
    __result91__ = (_Bool)1;
    return __result91__;
}

char* sForNode_kind(struct sForNode* self){
void* __result_obj__;
void* right_value111;
char* __exception_result_var_b102;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
    __result92__ = __result_obj__ = (come_push_stackframe("11for.c", 41, 1330),__exception_result_var_b102=((char*)(right_value111=__builtin_string("sForNode"))), come_pop_stackframe(), __exception_result_var_b102);
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
struct sVarTable* __exception_result_var_b103;
struct sVarTable* for_var_table_121;
struct sNode* expression_node_122;
struct CVALUE* __dec_obj27;
struct CVALUE* conditional_value_123;
_Bool _if_conditional129;
_Bool __exception_result_var_b104;
_Bool _if_conditional130;
_Bool __result93__;
_Bool normal_if_124;
_Bool __exception_result_var_b105;
_Bool _if_conditional131;
_Bool _if_conditional132;
void* right_value114;
struct CVALUE* __exception_result_var_b106;
struct CVALUE* __dec_obj28;
void* right_value115;
struct CVALUE* __exception_result_var_b107;
struct CVALUE* __dec_obj29;
struct sNode* expression_node2_125;
struct CVALUE* __dec_obj30;
struct CVALUE* conditional_value2_126;
_Bool _if_conditional133;
_Bool __exception_result_var_b108;
_Bool _if_conditional134;
_Bool __result94__;
_Bool normal_if_127;
_Bool __exception_result_var_b109;
_Bool _if_conditional135;
_Bool _if_conditional136;
void* right_value116;
struct CVALUE* __exception_result_var_b110;
struct CVALUE* __dec_obj31;
int num_for_conditionalA_stack_129;
void* right_value117;
struct CVALUE* __exception_result_var_b111;
struct CVALUE* __dec_obj32;
struct sNode* expression_node3_130;
struct CVALUE* conditional_value3_131;
_Bool _if_conditional137;
_Bool __exception_result_var_b112;
_Bool _if_conditional138;
_Bool __result95__;
_Bool normal_if_132;
_Bool __exception_result_var_b113;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value118;
struct CVALUE* __exception_result_var_b114;
struct CVALUE* conditional_value3_133;
void* right_value119;
struct CVALUE* __exception_result_var_b115;
struct CVALUE* conditional_value3_134;
int __exception_result_var_b116;
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
    in_loop_118=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 46, 1331)), "11for.c", 46, 1332))->in_loop;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 47, 1333)), "11for.c", 47, 1334))->in_loop=(_Bool)1;
    block_119=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 49, 1335)), "11for.c", 49, 1336))->mBlock;
    lv_table_120=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 51, 1337)), "11for.c", 51, 1338))->lv_table;
    for_var_table_121=(struct sVarTable*)come_increment_ref_count((come_push_stackframe("11for.c", 52, 1340),__exception_result_var_b103=((struct sVarTable*)(right_value113=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)come_null_check(((struct sVarTable*)(right_value112=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "11for.c", 52, "sVarTable"))), "11for.c", 52, 1339))),(_Bool)0,lv_table_120))), come_pop_stackframe(), __exception_result_var_b103));
    come_call_finalizer3(right_value112,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value113,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 53, 1341)), "11for.c", 53, 1342))->lv_table=for_var_table_121;
    (come_push_stackframe("11for.c", 55,1343),add_come_code(info,"for("),come_pop_stackframe());
    expression_node_122=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 58, 1344)), "11for.c", 58, 1345))->mExpressionNode;
    __dec_obj27=conditional_value_123;
    conditional_value_123=((void*)0);
    come_call_finalizer3(__dec_obj27,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node_122) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 62, 1354)), "11for.c", 62, 1355))->without_semicolon=(_Bool)1;
        if(_if_conditional130=!(come_push_stackframe("11for.c", 63, 1356),__exception_result_var_b104=node_compile(expression_node_122,info), come_pop_stackframe(), __exception_result_var_b104),        _if_conditional130) {
            __result93__ = (_Bool)0;
            come_call_finalizer3(for_var_table_121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result93__;
        }
        normal_if_124=(_Bool)1;
        if(_if_conditional131=(come_push_stackframe("11for.c", 68, 1357),__exception_result_var_b105=existance_free_right_value_objects(info), come_pop_stackframe(), __exception_result_var_b105),        _if_conditional131) {
            normal_if_124=(_Bool)0;
        }
        if(normal_if_124) {
            __dec_obj28=conditional_value_123;
            conditional_value_123=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("11for.c", 73, 1358),__exception_result_var_b106=((struct CVALUE*)(right_value114=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b106));
            come_call_finalizer3(__dec_obj28,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value114,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("11for.c", 74,1359),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("11for.c", 75,1362),add_come_code(info,"%s;",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(conditional_value_123, "11for.c", 75, 1360)), "11for.c", 75, 1361))->c_value),come_pop_stackframe());
        }
        else {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 78, 1363)), "11for.c", 78, 1364))->without_semicolon=(_Bool)0;
            (come_push_stackframe("11for.c", 79,1365),add_last_code_to_source_with_comma(info),come_pop_stackframe());
            __dec_obj29=conditional_value_123;
            conditional_value_123=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("11for.c", 81, 1366),__exception_result_var_b107=((struct CVALUE*)(right_value115=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b107));
            come_call_finalizer3(__dec_obj29,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value115,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("11for.c", 82,1367),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("11for.c", 84,1368),free_right_value_objects(info,(_Bool)1),come_pop_stackframe());
            (come_push_stackframe("11for.c", 86,1369),add_come_code(info,"0;"),come_pop_stackframe());
        }
    }
    else {
        (come_push_stackframe("11for.c", 90,1370),add_come_code(info,";"),come_pop_stackframe());
    }
    expression_node2_125=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 94, 1371)), "11for.c", 94, 1372))->mExpressionNode2;
    __dec_obj30=conditional_value2_126;
    conditional_value2_126=((void*)0);
    come_call_finalizer3(__dec_obj30,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_125) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 98, 1373)), "11for.c", 98, 1374))->without_semicolon=(_Bool)1;
        if(_if_conditional134=!(come_push_stackframe("11for.c", 99, 1375),__exception_result_var_b108=node_compile(expression_node2_125,info), come_pop_stackframe(), __exception_result_var_b108),        _if_conditional134) {
            __result94__ = (_Bool)0;
            come_call_finalizer3(for_var_table_121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result94__;
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 102, 1376)), "11for.c", 102, 1377))->without_semicolon=(_Bool)0;
        normal_if_127=(_Bool)1;
        if(_if_conditional135=(come_push_stackframe("11for.c", 105, 1378),__exception_result_var_b109=existance_free_right_value_objects(info), come_pop_stackframe(), __exception_result_var_b109),        _if_conditional135) {
            normal_if_127=(_Bool)0;
        }
        if(normal_if_127) {
            __dec_obj31=conditional_value2_126;
            conditional_value2_126=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("11for.c", 110, 1379),__exception_result_var_b110=((struct CVALUE*)(right_value116=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b110));
            come_call_finalizer3(__dec_obj31,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value116,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("11for.c", 111,1380),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("11for.c", 113,1383),add_come_code(info,"%s;",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(conditional_value2_126, "11for.c", 113, 1381)), "11for.c", 113, 1382))->c_value),come_pop_stackframe());
        }
        else {
            static int num_for_condtionalA_128=0;
            (come_push_stackframe("11for.c", 117,1384),add_come_code_at_function_head(info,"_Bool _for_condtionalA%d;\n",++num_for_condtionalA_128),come_pop_stackframe());
            num_for_conditionalA_stack_129=num_for_condtionalA_128;
            __dec_obj32=conditional_value2_126;
            conditional_value2_126=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("11for.c", 120, 1385),__exception_result_var_b111=((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b111));
            come_call_finalizer3(__dec_obj32,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value117,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("11for.c", 121,1386),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("11for.c", 123,1389),add_come_code(info,"_for_condtionalA%d=%s, ",num_for_condtionalA_128,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(conditional_value2_126, "11for.c", 123, 1387)), "11for.c", 123, 1388))->c_value),come_pop_stackframe());
            (come_push_stackframe("11for.c", 125,1390),add_last_code_to_source_with_comma(info),come_pop_stackframe());
            (come_push_stackframe("11for.c", 127,1391),free_right_value_objects(info,(_Bool)1),come_pop_stackframe());
            (come_push_stackframe("11for.c", 129,1392),add_come_code(info,"_for_condtionalA%d;",num_for_conditionalA_stack_129),come_pop_stackframe());
        }
    }
    else {
        (come_push_stackframe("11for.c", 133,1393),add_come_code(info,";"),come_pop_stackframe());
    }
    expression_node3_130=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "11for.c", 136, 1394)), "11for.c", 136, 1395))->mExpressionNode3;
    if(expression_node3_130) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 140, 1396)), "11for.c", 140, 1397))->without_semicolon=(_Bool)1;
        if(_if_conditional138=!(come_push_stackframe("11for.c", 141, 1398),__exception_result_var_b112=node_compile(expression_node3_130,info), come_pop_stackframe(), __exception_result_var_b112),        _if_conditional138) {
            __result95__ = (_Bool)0;
            come_call_finalizer3(for_var_table_121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(conditional_value3_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result95__;
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 144, 1399)), "11for.c", 144, 1400))->without_semicolon=(_Bool)0;
        normal_if_132=(_Bool)1;
        if(_if_conditional139=(come_push_stackframe("11for.c", 147, 1401),__exception_result_var_b113=existance_free_right_value_objects(info), come_pop_stackframe(), __exception_result_var_b113),        _if_conditional139) {
            normal_if_132=(_Bool)0;
        }
        if(normal_if_132) {
            conditional_value3_133=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("11for.c", 152, 1402),__exception_result_var_b114=((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b114));
            come_call_finalizer3(right_value118,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("11for.c", 153,1403),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("11for.c", 154,1406),add_come_code(info,"%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(conditional_value3_133, "11for.c", 154, 1404)), "11for.c", 154, 1405))->c_value),come_pop_stackframe());
            come_call_finalizer3(conditional_value3_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            (come_push_stackframe("11for.c", 157,1407),add_last_code_to_source_with_comma(info),come_pop_stackframe());
            conditional_value3_134=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("11for.c", 159, 1408),__exception_result_var_b115=((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b115));
            come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("11for.c", 160,1409),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("11for.c", 162,1410),free_right_value_objects(info,(_Bool)1),come_pop_stackframe());
            (come_push_stackframe("11for.c", 164,1411),add_come_code(info,"0"),come_pop_stackframe());
            come_call_finalizer3(conditional_value3_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    (come_push_stackframe("11for.c", 168,1412),add_come_code(info,"){\n"),come_pop_stackframe());
    (come_push_stackframe("11for.c", 170, 1413),__exception_result_var_b116=transpile_block(block_119,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1), come_pop_stackframe(), __exception_result_var_b116);
    (come_push_stackframe("11for.c", 172,1414),add_come_code(info,"}\n"),come_pop_stackframe());
    (come_push_stackframe("11for.c", 174,1415),free_objects(for_var_table_121,((void*)0),info),come_pop_stackframe());
    (come_push_stackframe("11for.c", 176,1416),transpiler_clear_last_code(info),come_pop_stackframe());
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 177, 1417)), "11for.c", 177, 1418))->lv_table=lv_table_120;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 179, 1419)), "11for.c", 179, 1420))->in_loop=in_loop_118;
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

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 576)), "sNodeBase_finalize", 0, 577))->sname!=((void*)0),        _if_conditional19) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional21;
struct sNode* __result52__;
void* right_value80;
struct sNode* result_47;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
struct sNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sNode*));
            if(_if_conditional21=self==(void*)0,            _if_conditional21) {
                __result52__ = __result_obj__ = (void*)0;
                return __result52__;
            }
            result_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
            if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional22=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 582)), "sNode_clone", 4, 583))->clone!=((void*)0),            _if_conditional22) {
                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 4, 584)), "sNode_clone", 4, 585))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 586)), "sNode_clone", 4, 587))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 586)), "sNode_clone", 4, 587))->_protocol_obj);
            }
            if(_if_conditional23=self!=((void*)0),            _if_conditional23) {
                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 5, 588)), "sNode_clone", 5, 589))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 590)), "sNode_clone", 5, 591))->finalize;
            }
            if(_if_conditional24=self!=((void*)0),            _if_conditional24) {
                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 6, 592)), "sNode_clone", 6, 593))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 594)), "sNode_clone", 6, 595))->clone;
            }
            if(_if_conditional25=self!=((void*)0),            _if_conditional25) {
                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 7, 596)), "sNode_clone", 7, 597))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 598)), "sNode_clone", 7, 599))->compile;
            }
            if(_if_conditional26=self!=((void*)0),            _if_conditional26) {
                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 8, 600)), "sNode_clone", 8, 601))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 602)), "sNode_clone", 8, 603))->sline;
            }
            if(_if_conditional27=self!=((void*)0),            _if_conditional27) {
                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 9, 604)), "sNode_clone", 9, 605))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 606)), "sNode_clone", 9, 607))->sname;
            }
            if(_if_conditional28=self!=((void*)0),            _if_conditional28) {
                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 10, 608)), "sNode_clone", 10, 609))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 610)), "sNode_clone", 10, 611))->terminated;
            }
            if(_if_conditional29=self!=((void*)0),            _if_conditional29) {
                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 11, 612)), "sNode_clone", 11, 613))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 614)), "sNode_clone", 11, 615))->kind;
            }
            __result53__ = __result_obj__ = result_47;
            if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result53__;
            if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional32;
struct sBlock* __result54__;
void* right_value84;
struct sBlock* result_48;
_Bool _if_conditional36;
struct list$1sNodeph* __exception_result_var_b58;
void* right_value91;
struct list$1sNodeph* __dec_obj21;
_Bool _if_conditional40;
struct sVarTable* __exception_result_var_b100;
void* right_value109;
struct sVarTable* __dec_obj25;
struct sBlock* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&result_48, 0, sizeof(struct sBlock*));
right_value91 = (void*)0;
right_value109 = (void*)0;
        if(_if_conditional32=self==(void*)0,        _if_conditional32) {
            __result54__ = __result_obj__ = (void*)0;
            return __result54__;
        }
        result_48=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value84=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value84,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional36=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 4, 646)), "sBlock_clone", 4, 647))->mNodes!=((void*)0),        _if_conditional36) {
            __dec_obj21=((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_48, "sBlock_clone", 4, 648)), "sBlock_clone", 4, 649))->mNodes;
            ((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_48, "sBlock_clone", 4, 648)), "sBlock_clone", 4, 649))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value91=(come_push_stackframe("sBlock_clone", 4, 715),__exception_result_var_b58=list$1sNodephp_clone(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 4, 650)), "sBlock_clone", 4, 651))->mNodes), come_pop_stackframe(), __exception_result_var_b58))));
            come_call_finalizer3(__dec_obj21,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional40=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 5, 720)), "sBlock_clone", 5, 721))->mVarTable!=((void*)0),        _if_conditional40) {
            __dec_obj25=((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_48, "sBlock_clone", 5, 722)), "sBlock_clone", 5, 723))->mVarTable;
            ((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_48, "sBlock_clone", 5, 722)), "sBlock_clone", 5, 723))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value109=(come_push_stackframe("sBlock_clone", 5, 1308),__exception_result_var_b100=sVarTable_clone(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 5, 724)), "sBlock_clone", 5, 725))->mVarTable), come_pop_stackframe(), __exception_result_var_b100))));
            come_call_finalizer3(__dec_obj25,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result89__ = __result_obj__ = result_48;
        come_call_finalizer3(result_48,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result89__;
        come_call_finalizer3(result_48,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional33;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional33=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 630)), "sBlock_finalize", 0, 631))->mNodes!=((void*)0),            _if_conditional33) {
                come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 632)), "sBlock_finalize", 0, 633))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional35=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 642)), "sBlock_finalize", 1, 643))->mVarTable!=((void*)0),            _if_conditional35) {
                come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 644)), "sBlock_finalize", 1, 645))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
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
                    it_49=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 634)), "./neo-c.h", 120, 635))->head;
                    while(_while_condtional7=it_49!=((void*)0),                    _while_condtional7) {
                        prev_it_50=it_49;
                        it_49=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_49, "./neo-c.h", 123, 636)), "./neo-c.h", 123, 637))->next;
                        come_call_finalizer3(prev_it_50,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional34=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 638)), "list_item$1sNodephp_finalize", 0, 639))->item!=((void*)0),                            _if_conditional34) {
                                if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 640)), "list_item$1sNodephp_finalize", 0, 641))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 640)), "list_item$1sNodephp_finalize", 0, 641))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 640)), "list_item$1sNodephp_finalize", 0, 641))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 640)), "list_item$1sNodephp_finalize", 0, 641))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 640)), "list_item$1sNodephp_finalize", 0, 641))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional37;
struct list$1sNodeph* __result55__;
void* right_value85;
void* right_value86;
struct list$1sNodeph* __exception_result_var_b55;
struct list$1sNodeph* result_51;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional8;
struct sNode* __exception_result_var_b56;
void* right_value90;
struct list$1sNodeph* __exception_result_var_b57;
struct list$1sNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
right_value86 = (void*)0;
memset(&result_51, 0, sizeof(struct list$1sNodeph*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
right_value90 = (void*)0;
                if(_if_conditional37=self==((void*)0),                _if_conditional37) {
                    __result55__ = __result_obj__ = ((void*)0);
                    return __result55__;
                }
                result_51=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 660),__exception_result_var_b55=((struct list$1sNodeph*)(right_value86=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value85=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 652)), "./neo-c.h", 139, 653)))))), come_pop_stackframe(), __exception_result_var_b55));
                come_call_finalizer3(right_value85,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value86,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_52=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 661)), "./neo-c.h", 141, 662))->head;
                while(_while_condtional8=it_52!=((void*)0),                _while_condtional8) {
                    (come_push_stackframe("./neo-c.h", 143, 712),__exception_result_var_b57=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_51, "./neo-c.h", 143, 663)), "./neo-c.h", 143, 664)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value90=(come_push_stackframe("./neo-c.h", 143, 711),__exception_result_var_b56=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_52, "./neo-c.h", 143, 709)), "./neo-c.h", 143, 710))->item), come_pop_stackframe(), __exception_result_var_b56))))), come_pop_stackframe(), __exception_result_var_b57);
                    if(right_value90) { right_value90 = come_decrement_ref_count2(right_value90, ((struct sNode*)right_value90)->finalize, ((struct sNode*)right_value90)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_52=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_52, "./neo-c.h", 145, 713)), "./neo-c.h", 145, 714))->next;
                }
                __result58__ = __result_obj__ = result_51;
                come_call_finalizer3(result_51,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_51,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 654)), "./neo-c.h", 101, 655))->head=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 656)), "./neo-c.h", 102, 657))->tail=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 658)), "./neo-c.h", 103, 659))->len=0;
                    __result56__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional38;
void* right_value87;
struct list_item$1sNodeph* litem_53;
struct sNode* __dec_obj18;
_Bool _if_conditional39;
void* right_value88;
struct list_item$1sNodeph* litem_54;
struct sNode* __dec_obj19;
void* right_value89;
struct list_item$1sNodeph* litem_55;
struct sNode* __dec_obj20;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1sNodeph*));
right_value88 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1sNodeph*));
right_value89 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional38=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 665)), "./neo-c.h", 152, 666))->len==0,                        _if_conditional38) {
                            litem_53=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value87=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value87,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_53, "./neo-c.h", 155, 667)), "./neo-c.h", 155, 668))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_53, "./neo-c.h", 156, 669)), "./neo-c.h", 156, 670))->next=((void*)0);
                            __dec_obj18=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_53, "./neo-c.h", 157, 671)), "./neo-c.h", 157, 672))->item;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_53, "./neo-c.h", 157, 671)), "./neo-c.h", 157, 672))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count2(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0, (void*)0); }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 673)), "./neo-c.h", 159, 674))->tail=litem_53;
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 675)), "./neo-c.h", 160, 676))->head=litem_53;
                        }
                        else {
                            if(_if_conditional39=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 677)), "./neo-c.h", 162, 678))->len==1,                            _if_conditional39) {
                                litem_54=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value88=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value88,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_54, "./neo-c.h", 165, 679)), "./neo-c.h", 165, 680))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 681)), "./neo-c.h", 165, 682))->head;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_54, "./neo-c.h", 166, 683)), "./neo-c.h", 166, 684))->next=((void*)0);
                                __dec_obj19=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_54, "./neo-c.h", 167, 685)), "./neo-c.h", 167, 686))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_54, "./neo-c.h", 167, 685)), "./neo-c.h", 167, 686))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 687)), "./neo-c.h", 169, 688))->tail=litem_54;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 689)), "./neo-c.h", 170, 690))->head, "./neo-c.h", 170, 691)), "./neo-c.h", 170, 692))->next=litem_54;
                            }
                            else {
                                litem_55=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value89=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value89,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_55, "./neo-c.h", 175, 693)), "./neo-c.h", 175, 694))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 695)), "./neo-c.h", 175, 696))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_55, "./neo-c.h", 176, 697)), "./neo-c.h", 176, 698))->next=((void*)0);
                                __dec_obj20=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_55, "./neo-c.h", 177, 699)), "./neo-c.h", 177, 700))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_55, "./neo-c.h", 177, 699)), "./neo-c.h", 177, 700))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 701)), "./neo-c.h", 179, 702))->tail, "./neo-c.h", 179, 703)), "./neo-c.h", 179, 704))->next=litem_55;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 705)), "./neo-c.h", 180, 706))->tail=litem_55;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 707)), "./neo-c.h", 183, 708))->len++;
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
                it_56=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 716)), "./neo-c.h", 120, 717))->head;
                while(_while_condtional9=it_56!=((void*)0),                _while_condtional9) {
                    prev_it_57=it_56;
                    it_56=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_56, "./neo-c.h", 123, 718)), "./neo-c.h", 123, 719))->next;
                    come_call_finalizer3(prev_it_57,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional41;
struct sVarTable* __result59__;
void* right_value92;
struct sVarTable* result_58;
_Bool _if_conditional42;
struct map$2charphsVarph* __exception_result_var_b99;
void* right_value108;
struct map$2charphsVarph* __dec_obj24;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct sVarTable* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&result_58, 0, sizeof(struct sVarTable*));
right_value108 = (void*)0;
                if(_if_conditional41=self==(void*)0,                _if_conditional41) {
                    __result59__ = __result_obj__ = (void*)0;
                    return __result59__;
                }
                result_58=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value92=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value92,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional42=self!=((void*)0)&&((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4, 726)), "sVarTable_clone", 4, 727))->mVars!=((void*)0),                _if_conditional42) {
                    __dec_obj24=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_58, "sVarTable_clone", 4, 728)), "sVarTable_clone", 4, 729))->mVars;
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_58, "sVarTable_clone", 4, 728)), "sVarTable_clone", 4, 729))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value108=(come_push_stackframe("sVarTable_clone", 4, 1269),__exception_result_var_b99=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4, 730)), "sVarTable_clone", 4, 731))->mVars), come_pop_stackframe(), __exception_result_var_b99))));
                    come_call_finalizer3(__dec_obj24,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value108,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_58, "sVarTable_clone", 5, 1296)), "sVarTable_clone", 5, 1297))->mGlobal=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5, 1298)), "sVarTable_clone", 5, 1299))->mGlobal;
                }
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_58, "sVarTable_clone", 6, 1300)), "sVarTable_clone", 6, 1301))->mParent=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6, 1302)), "sVarTable_clone", 6, 1303))->mParent;
                }
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_58, "sVarTable_clone", 7, 1304)), "sVarTable_clone", 7, 1305))->mID=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7, 1306)), "sVarTable_clone", 7, 1307))->mID;
                }
                __result88__ = __result_obj__ = result_58;
                come_call_finalizer3(result_58,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result88__;
                come_call_finalizer3(result_58,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct map$2charphsVarph* __result60__;
void* right_value93;
void* right_value99;
struct map$2charphsVarph* __exception_result_var_b60;
struct map$2charphsVarph* result_68;
void* right_value100;
void* right_value101;
struct list$1charp* __exception_result_var_b61;
struct list$1charp* __dec_obj23;
char* __exception_result_var_b64;
char* it_71;
_Bool __exception_result_var_b65;
char* __exception_result_var_b68;
struct sVar* default_value_74;
void* __exception_result_var_b69;
struct sVar* __exception_result_var_b72;
struct sVar* it2_77;
struct map$2charphsVarph* __exception_result_var_b98;
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
                        if(_if_conditional43=self==((void*)0),                        _if_conditional43) {
                            __result60__ = __result_obj__ = ((void*)0);
                            return __result60__;
                        }
                        result_68=(struct map$2charphsVarph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1162, 876),__exception_result_var_b60=((struct map$2charphsVarph*)(right_value99=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)(right_value93=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1162, "map$2charphsVarph"))), "./neo-c.h", 1162, 732)))))), come_pop_stackframe(), __exception_result_var_b60));
                        come_call_finalizer3(right_value93,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value99,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj23=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_68, "./neo-c.h", 1164, 877)), "./neo-c.h", 1164, 878))->key_list;
                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_68, "./neo-c.h", 1164, 877)), "./neo-c.h", 1164, 878))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1164, 880),__exception_result_var_b61=((struct list$1charp*)(right_value101=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value100=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1164, "list$1charp"))), "./neo-c.h", 1164, 879)))))), come_pop_stackframe(), __exception_result_var_b61));
                        come_call_finalizer3(__dec_obj23,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value101,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        for(                        it_71=(come_push_stackframe("./neo-c.h", 1166, 903),__exception_result_var_b64=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 881)), "./neo-c.h", 1166, 882))), come_pop_stackframe(), __exception_result_var_b64);                        !(come_push_stackframe("./neo-c.h", 1166, 912),__exception_result_var_b65=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 904)), "./neo-c.h", 1166, 905))), come_pop_stackframe(), __exception_result_var_b65);                        it_71=(come_push_stackframe("./neo-c.h", 1166, 941),__exception_result_var_b68=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 913)), "./neo-c.h", 1166, 914))), come_pop_stackframe(), __exception_result_var_b68)                        ){
                            (come_push_stackframe("./neo-c.h", 1168, 942),__exception_result_var_b69=memset(&default_value_74,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b69);
                            it2_77=(come_push_stackframe("./neo-c.h", 1170, 964),__exception_result_var_b72=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1170, 943)), "./neo-c.h", 1170, 944)),it_71,default_value_74), come_pop_stackframe(), __exception_result_var_b72);
                            (come_push_stackframe("./neo-c.h", 1172, 1268),__exception_result_var_b98=map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_68, "./neo-c.h", 1172, 965)), "./neo-c.h", 1172, 966)),it_71,it2_77), come_pop_stackframe(), __exception_result_var_b98);
                        }
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
struct list$1charp* __exception_result_var_b59;
struct list$1charp* __dec_obj22;
struct map$2charphsVarph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&i_63, 0, sizeof(int));
right_value97 = (void*)0;
right_value98 = (void*)0;
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1068, 733)), "./neo-c.h", 1068, 734))->keys=(char**)come_increment_ref_count(((char**)(right_value94=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
                            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1069, 735)), "./neo-c.h", 1069, 736))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value95=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1069, "sVar*%"))));
                            come_call_finalizer3(right_value95,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1070, 825)), "./neo-c.h", 1070, 826))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value96=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
                            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_63=0;                            i_63<128;                            i_63++                            ){
                                ((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1074, 827)), "./neo-c.h", 1074, 828))->item_existance, "./neo-c.h", 1074, 829))[i_63]=(_Bool)0;
                            }
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1077, 830)), "./neo-c.h", 1077, 831))->size=128;
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1078, 832)), "./neo-c.h", 1078, 833))->len=0;
                            __dec_obj22=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1080, 834)), "./neo-c.h", 1080, 835))->key_list;
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1080, 834)), "./neo-c.h", 1080, 835))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 847),__exception_result_var_b59=((struct list$1charp*)(right_value98=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value97=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 836)))))), come_pop_stackframe(), __exception_result_var_b59));
                            come_call_finalizer3(__dec_obj22,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value97,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1082, 848)), "./neo-c.h", 1082, 849))->it=0;
                            __result62__ = __result_obj__ = self;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result62__;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional44=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 737)), "sVar_finalize", 0, 738))->mName!=((void*)0),                                _if_conditional44) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 739)), "sVar_finalize", 0, 740))->mName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 739)), "sVar_finalize", 0, 740))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional45=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 741)), "sVar_finalize", 1, 742))->mCValueName!=((void*)0),                                _if_conditional45) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 743)), "sVar_finalize", 1, 744))->mCValueName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 743)), "sVar_finalize", 1, 744))->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional46=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 745)), "sVar_finalize", 2, 746))->mType!=((void*)0),                                _if_conditional46) {
                                    come_call_finalizer3(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 747)), "sVar_finalize", 2, 748))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional63=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 821)), "sVar_finalize", 3, 822))->mFunName!=((void*)0),                                _if_conditional63) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 823)), "sVar_finalize", 3, 824))->mFunName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 823)), "sVar_finalize", 3, 824))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional47;
_Bool _if_conditional49;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 749)), "sType_finalize", 0, 750))->mMultipleTypes!=((void*)0),                                        _if_conditional47) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 751)), "sType_finalize", 0, 752))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 761)), "sType_finalize", 1, 762))->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional49) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 763)), "sType_finalize", 1, 764))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional51=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 769)), "sType_finalize", 2, 770))->mOriginalLoadVarType!=((void*)0),                                        _if_conditional51) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 771)), "sType_finalize", 2, 772))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 773)), "sType_finalize", 3, 774))->mGenericsName!=((void*)0),                                        _if_conditional52) {
                                            ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 775)), "sType_finalize", 3, 776))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 775)), "sType_finalize", 3, 776))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 777)), "sType_finalize", 4, 778))->mGenericsTypes!=((void*)0),                                        _if_conditional53) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 779)), "sType_finalize", 4, 780))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 781)), "sType_finalize", 5, 782))->mArrayNum!=((void*)0),                                        _if_conditional54) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 783)), "sType_finalize", 5, 784))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 785)), "sType_finalize", 6, 786))->mParamTypes!=((void*)0),                                        _if_conditional55) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 787)), "sType_finalize", 6, 788))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional56=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 789)), "sType_finalize", 7, 790))->mParamNames!=((void*)0),                                        _if_conditional56) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 791)), "sType_finalize", 7, 792))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional58=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 801)), "sType_finalize", 8, 802))->mResultType!=((void*)0),                                        _if_conditional58) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 803)), "sType_finalize", 8, 804))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional59=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 805)), "sType_finalize", 9, 806))->mAlignas!=((void*)0),                                        _if_conditional59) {
                                            if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 807)), "sType_finalize", 9, 808))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 807)), "sType_finalize", 9, 808))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 807)), "sType_finalize", 9, 808))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 807)), "sType_finalize", 9, 808))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 807)), "sType_finalize", 9, 808))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional60=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 809)), "sType_finalize", 10, 810))->mSizeNum!=((void*)0),                                        _if_conditional60) {
                                            if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 811)), "sType_finalize", 10, 812))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 811)), "sType_finalize", 10, 812))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 811)), "sType_finalize", 10, 812))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 811)), "sType_finalize", 10, 812))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 811)), "sType_finalize", 10, 812))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional61=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 813)), "sType_finalize", 11, 814))->mOriginalTypeName!=((void*)0),                                        _if_conditional61) {
                                            ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 815)), "sType_finalize", 11, 816))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 815)), "sType_finalize", 11, 816))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional62=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 817)), "sType_finalize", 12, 818))->mAsmName!=((void*)0),                                        _if_conditional62) {
                                            ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 819)), "sType_finalize", 12, 820))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 819)), "sType_finalize", 12, 820))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                                                it_59=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 753)), "./neo-c.h", 120, 754))->head;
                                                while(_while_condtional10=it_59!=((void*)0),                                                _while_condtional10) {
                                                    prev_it_60=it_59;
                                                    it_59=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_59, "./neo-c.h", 123, 755)), "./neo-c.h", 123, 756))->next;
                                                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional48=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 757)), "list_item$1sTypephp_finalize", 0, 758))->item!=((void*)0),                                                        _if_conditional48) {
                                                            come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 759)), "list_item$1sTypephp_finalize", 0, 760))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional50=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 765)), "tuple1$1sTypephp_finalize", 0, 766))->v1!=((void*)0),                                                _if_conditional50) {
                                                    come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 767)), "tuple1$1sTypephp_finalize", 0, 768))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                                                it_61=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 793)), "./neo-c.h", 120, 794))->head;
                                                while(_while_condtional11=it_61!=((void*)0),                                                _while_condtional11) {
                                                    prev_it_62=it_61;
                                                    it_61=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_61, "./neo-c.h", 123, 795)), "./neo-c.h", 123, 796))->next;
                                                    come_call_finalizer3(prev_it_62,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional57;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional57=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 797)), "list_item$1charphp_finalize", 0, 798))->item!=((void*)0),                                                        _if_conditional57) {
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 799)), "list_item$1charphp_finalize", 0, 800))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 799)), "list_item$1charphp_finalize", 0, 800))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 101, 837)), "./neo-c.h", 101, 838))->head=((void*)0);
                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 102, 839)), "./neo-c.h", 102, 840))->tail=((void*)0);
                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 103, 841)), "./neo-c.h", 103, 842))->len=0;
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
                                    it_64=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 120, 843)), "./neo-c.h", 120, 844))->head;
                                    while(_while_condtional12=it_64!=((void*)0),                                    _while_condtional12) {
                                        prev_it_65=it_64;
                                        it_64=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_64, "./neo-c.h", 123, 845)), "./neo-c.h", 123, 846))->next;
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
_Bool _if_conditional64;
_Bool _if_conditional65;
int i_67;
_Bool _if_conditional66;
_Bool _if_conditional67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_66, 0, sizeof(int));
memset(&i_67, 0, sizeof(int));
                                for(                                i_66=0;                                i_66<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1111, 850)), "./neo-c.h", 1111, 851))->size;                                i_66++                                ){
                                    if(_if_conditional64=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1112, 852)), "./neo-c.h", 1112, 853))->item_existance, "./neo-c.h", 1112, 854))[i_66],                                    _if_conditional64) {
                                        if(_if_conditional65=1,                                        _if_conditional65) {
                                            come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1114, 855)), "./neo-c.h", 1114, 856))->items, "./neo-c.h", 1114, 857))[i_66],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                (come_push_stackframe("./neo-c.h", 1118,860),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1118, 858)), "./neo-c.h", 1118, 859))->items),come_pop_stackframe());
                                for(                                i_67=0;                                i_67<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1120, 861)), "./neo-c.h", 1120, 862))->size;                                i_67++                                ){
                                    if(_if_conditional66=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1121, 863)), "./neo-c.h", 1121, 864))->item_existance, "./neo-c.h", 1121, 865))[i_67],                                    _if_conditional66) {
                                        if(_if_conditional67=1,                                        _if_conditional67) {
                                            ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 866)), "./neo-c.h", 1123, 867))->keys, "./neo-c.h", 1123, 868))[i_67] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 866)), "./neo-c.h", 1123, 867))->keys, "./neo-c.h", 1123, 868))[i_67], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                (come_push_stackframe("./neo-c.h", 1127,871),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1127, 869)), "./neo-c.h", 1127, 870))->keys),come_pop_stackframe());
                                come_call_finalizer3(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1129, 872)), "./neo-c.h", 1129, 873))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 874)), "./neo-c.h", 1131, 875))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 874)), "./neo-c.h", 1131, 875))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional68;
char* result_69;
void* __exception_result_var_b62;
char* __result63__;
_Bool _if_conditional69;
char* __result64__;
char* result_70;
void* __exception_result_var_b63;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                            if(_if_conditional68=self==((void*)0),                            _if_conditional68) {
                                (come_push_stackframe("./neo-c.h", 1282, 883),__exception_result_var_b62=memset(&result_69,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b62);
                                __result63__ = __result_obj__ = result_69;
                                return __result63__;
                            }
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 884)), "./neo-c.h", 1285, 885))->key_list, "./neo-c.h", 1285, 886)), "./neo-c.h", 1285, 887))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 888)), "./neo-c.h", 1285, 889))->key_list, "./neo-c.h", 1285, 890)), "./neo-c.h", 1285, 891))->head;
                            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1287, 892)), "./neo-c.h", 1287, 893))->key_list, "./neo-c.h", 1287, 894)), "./neo-c.h", 1287, 895))->it) {
                                __result64__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1288, 896)), "./neo-c.h", 1288, 897))->key_list, "./neo-c.h", 1288, 898)), "./neo-c.h", 1288, 899))->it, "./neo-c.h", 1288, 900)), "./neo-c.h", 1288, 901))->item;
                                return __result64__;
                            }
                            (come_push_stackframe("./neo-c.h", 1292, 902),__exception_result_var_b63=memset(&result_70,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b63);
                            __result65__ = __result_obj__ = result_70;
                            return __result65__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result66__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 906)), "./neo-c.h", 1314, 907))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 908)), "./neo-c.h", 1314, 909))->key_list, "./neo-c.h", 1314, 910)), "./neo-c.h", 1314, 911))->it==((void*)0);
                            return __result66__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional70;
char* result_72;
void* __exception_result_var_b66;
char* __result67__;
_Bool _if_conditional71;
char* __result68__;
char* result_73;
void* __exception_result_var_b67;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                            if(_if_conditional70=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1297, 915)), "./neo-c.h", 1297, 916))->key_list, "./neo-c.h", 1297, 917)), "./neo-c.h", 1297, 918))->it==((void*)0),                            _if_conditional70) {
                                (come_push_stackframe("./neo-c.h", 1299, 919),__exception_result_var_b66=memset(&result_72,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b66);
                                __result67__ = __result_obj__ = result_72;
                                return __result67__;
                            }
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 920)), "./neo-c.h", 1302, 921))->key_list, "./neo-c.h", 1302, 922)), "./neo-c.h", 1302, 923))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 924)), "./neo-c.h", 1302, 925))->key_list, "./neo-c.h", 1302, 926)), "./neo-c.h", 1302, 927))->it, "./neo-c.h", 1302, 928)), "./neo-c.h", 1302, 929))->next;
                            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1304, 930)), "./neo-c.h", 1304, 931))->key_list, "./neo-c.h", 1304, 932)), "./neo-c.h", 1304, 933))->it) {
                                __result68__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1305, 934)), "./neo-c.h", 1305, 935))->key_list, "./neo-c.h", 1305, 936)), "./neo-c.h", 1305, 937))->it, "./neo-c.h", 1305, 938)), "./neo-c.h", 1305, 939))->item;
                                return __result68__;
                            }
                            (come_push_stackframe("./neo-c.h", 1309, 940),__exception_result_var_b67=memset(&result_73,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b67);
                            __result69__ = __result_obj__ = result_73;
                            return __result69__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b70;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional13;
_Bool _if_conditional72;
_Bool __exception_result_var_b71;
_Bool _if_conditional73;
struct sVar* __result70__;
_Bool _if_conditional74;
_Bool _if_conditional75;
struct sVar* __result71__;
struct sVar* __result72__;
struct sVar* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
                                hash_75=(come_push_stackframe("./neo-c.h", 1207, 947),__exception_result_var_b70=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 945)), "./neo-c.h", 1207, 946))), come_pop_stackframe(), __exception_result_var_b70)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1207, 948)), "./neo-c.h", 1207, 949))->size;
                                it_76=hash_75;
                                while(_while_condtional13=(_Bool)1,                                _while_condtional13) {
                                    if(_if_conditional72=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1211, 950)), "./neo-c.h", 1211, 951))->item_existance, "./neo-c.h", 1211, 952))[it_76],                                    _if_conditional72) {
                                        if(_if_conditional73=(come_push_stackframe("./neo-c.h", 1213, 958),__exception_result_var_b71=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1213, 953)), "./neo-c.h", 1213, 954))->keys, "./neo-c.h", 1213, 955))[it_76], "./neo-c.h", 1213, 956)), "./neo-c.h", 1213, 957)),key), come_pop_stackframe(), __exception_result_var_b71),                                        _if_conditional73) {
                                            __result70__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1215, 959)), "./neo-c.h", 1215, 960))->items, "./neo-c.h", 1215, 961))[it_76];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result70__;
                                        }
                                        it_76++;
                                        if(_if_conditional74=it_76>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1220, 962)), "./neo-c.h", 1220, 963))->size,                                        _if_conditional74) {
                                            it_76=0;
                                        }
                                        else {
                                            if(_if_conditional75=it_76==hash_75,                                            _if_conditional75) {
                                                __result71__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result71__;
                                            }
                                        }
                                    }
                                    else {
                                        __result72__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result72__;
                                    }
                                }
                                __result73__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result73__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional76;
unsigned int __exception_result_var_b81;
unsigned int hash_89;
int it_90;
_Bool _while_condtional15;
_Bool _if_conditional80;
_Bool __exception_result_var_b82;
_Bool _if_conditional81;
_Bool _if_conditional82;
struct list$1charp* __exception_result_var_b86;
struct list$1charp* __exception_result_var_b87;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
int __exception_result_var_b88;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool same_key_exist_107;
char* __exception_result_var_b91;
char* it2_110;
_Bool __exception_result_var_b92;
char* __exception_result_var_b95;
_Bool __exception_result_var_b96;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct list$1charp* __exception_result_var_b97;
struct map$2charphsVarph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(int));
memset(&same_key_exist_107, 0, sizeof(_Bool));
memset(&it2_110, 0, sizeof(char*));
                                if(_if_conditional76=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1448, 967)), "./neo-c.h", 1448, 968))->len*2>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1448, 969)), "./neo-c.h", 1448, 970))->size,                                _if_conditional76) {
                                    (come_push_stackframe("./neo-c.h", 1449,1019),map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1449, 971)), "./neo-c.h", 1449, 972))),come_pop_stackframe());
                                }
                                hash_89=(come_push_stackframe("./neo-c.h", 1451, 1022),__exception_result_var_b81=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1451, 1020)), "./neo-c.h", 1451, 1021))), come_pop_stackframe(), __exception_result_var_b81)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1451, 1023)), "./neo-c.h", 1451, 1024))->size;
                                it_90=hash_89;
                                while(_while_condtional15=(_Bool)1,                                _while_condtional15) {
                                    if(_if_conditional80=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1455, 1025)), "./neo-c.h", 1455, 1026))->item_existance, "./neo-c.h", 1455, 1027))[it_90],                                    _if_conditional80) {
                                        if(_if_conditional81=(come_push_stackframe("./neo-c.h", 1457, 1033),__exception_result_var_b82=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1457, 1028)), "./neo-c.h", 1457, 1029))->keys, "./neo-c.h", 1457, 1030))[it_90], "./neo-c.h", 1457, 1031)), "./neo-c.h", 1457, 1032)),key), come_pop_stackframe(), __exception_result_var_b82),                                        _if_conditional81) {
                                            if(_if_conditional82=1,                                            _if_conditional82) {
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1460, 1034)), "./neo-c.h", 1460, 1035))->keys, "./neo-c.h", 1460, 1036))[it_90] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1460, 1034)), "./neo-c.h", 1460, 1035))->keys, "./neo-c.h", 1460, 1036))[it_90], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                (come_push_stackframe("./neo-c.h", 1461, 1125),__exception_result_var_b86=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1461, 1037)), "./neo-c.h", 1461, 1038))->key_list, "./neo-c.h", 1461, 1039)), "./neo-c.h", 1461, 1040)),((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1461, 1122)), "./neo-c.h", 1461, 1123))->keys, "./neo-c.h", 1461, 1124))[it_90]), come_pop_stackframe(), __exception_result_var_b86);
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1462, 1126)), "./neo-c.h", 1462, 1127))->keys, "./neo-c.h", 1462, 1128))[it_90]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                (come_push_stackframe("./neo-c.h", 1465, 1136),__exception_result_var_b87=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1465, 1129)), "./neo-c.h", 1465, 1130))->key_list, "./neo-c.h", 1465, 1131)), "./neo-c.h", 1465, 1132)),((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1465, 1133)), "./neo-c.h", 1465, 1134))->keys, "./neo-c.h", 1465, 1135))[it_90]), come_pop_stackframe(), __exception_result_var_b87);
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1466, 1137)), "./neo-c.h", 1466, 1138))->keys, "./neo-c.h", 1466, 1139))[it_90]=key;
                                            }
                                            if(_if_conditional102=1,                                            _if_conditional102) {
                                                come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1469, 1140)), "./neo-c.h", 1469, 1141))->items, "./neo-c.h", 1469, 1142))[it_90],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1470, 1143)), "./neo-c.h", 1470, 1144))->items, "./neo-c.h", 1470, 1145))[it_90]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1473, 1146)), "./neo-c.h", 1473, 1147))->items, "./neo-c.h", 1473, 1148))[it_90]=item;
                                            }
                                            break;
                                        }
                                        it_90++;
                                        if(_if_conditional103=it_90>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1480, 1149)), "./neo-c.h", 1480, 1150))->size,                                        _if_conditional103) {
                                            it_90=0;
                                        }
                                        else {
                                            if(_if_conditional104=it_90==hash_89,                                            _if_conditional104) {
                                                (come_push_stackframe("./neo-c.h", 1484, 1151),__exception_result_var_b88=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b88);
                                                (come_push_stackframe("./neo-c.h", 1485,1152),stackframe(),come_pop_stackframe());
                                                (come_push_stackframe("./neo-c.h", 1486,1153),exit(2),come_pop_stackframe());
                                            }
                                        }
                                    }
                                    else {
                                        ((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1490, 1154)), "./neo-c.h", 1490, 1155))->item_existance, "./neo-c.h", 1490, 1156))[it_90]=(_Bool)1;
                                        if(_if_conditional105=1,                                        _if_conditional105) {
                                            ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1492, 1157)), "./neo-c.h", 1492, 1158))->keys, "./neo-c.h", 1492, 1159))[it_90]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1495, 1160)), "./neo-c.h", 1495, 1161))->keys, "./neo-c.h", 1495, 1162))[it_90]=key;
                                        }
                                        if(_if_conditional106=1,                                        _if_conditional106) {
                                            ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1498, 1163)), "./neo-c.h", 1498, 1164))->items, "./neo-c.h", 1498, 1165))[it_90]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1501, 1166)), "./neo-c.h", 1501, 1167))->items, "./neo-c.h", 1501, 1168))[it_90]=item;
                                        }
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1504, 1169)), "./neo-c.h", 1504, 1170))->len++;
                                        break;
                                    }
                                }
                                same_key_exist_107=(_Bool)0;
                                for(                                it2_110=(come_push_stackframe("./neo-c.h", 1511, 1187),__exception_result_var_b91=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 1171)), "./neo-c.h", 1511, 1172))->key_list, "./neo-c.h", 1511, 1173)), "./neo-c.h", 1511, 1174))), come_pop_stackframe(), __exception_result_var_b91);                                !(come_push_stackframe("./neo-c.h", 1511, 1194),__exception_result_var_b92=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 1188)), "./neo-c.h", 1511, 1189))->key_list, "./neo-c.h", 1511, 1190)), "./neo-c.h", 1511, 1191))), come_pop_stackframe(), __exception_result_var_b92);                                it2_110=(come_push_stackframe("./neo-c.h", 1511, 1215),__exception_result_var_b95=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 1195)), "./neo-c.h", 1511, 1196))->key_list, "./neo-c.h", 1511, 1197)), "./neo-c.h", 1511, 1198))), come_pop_stackframe(), __exception_result_var_b95)                                ){
                                    if(_if_conditional111=(come_push_stackframe("./neo-c.h", 1513, 1218),__exception_result_var_b96=string_equals(((char*)come_null_check(((char*)come_null_check(it2_110, "./neo-c.h", 1513, 1216)), "./neo-c.h", 1513, 1217)),key), come_pop_stackframe(), __exception_result_var_b96),                                    _if_conditional111) {
                                        same_key_exist_107=(_Bool)1;
                                    }
                                }
                                if(_if_conditional112=!same_key_exist_107,                                _if_conditional112) {
                                    (come_push_stackframe("./neo-c.h", 1519, 1267),__exception_result_var_b97=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1519, 1219)), "./neo-c.h", 1519, 1220))->key_list, "./neo-c.h", 1519, 1221)), "./neo-c.h", 1519, 1222)),key), come_pop_stackframe(), __exception_result_var_b97);
                                }
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
char* __exception_result_var_b73;
char* it_83;
_Bool __exception_result_var_b74;
char* __exception_result_var_b75;
struct sVar* default_value_84;
void* __exception_result_var_b76;
struct sVar* __exception_result_var_b77;
struct sVar* it2_85;
unsigned int __exception_result_var_b78;
unsigned int hash_86;
int n_87;
_Bool _while_condtional14;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
int __exception_result_var_b79;
struct sVar* default_value_88;
struct sVar* __exception_result_var_b80;
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
                                        size_78=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1318, 973)), "./neo-c.h", 1318, 974))->size*10;
                                        keys_79=(char**)come_increment_ref_count(((char**)(right_value102=(char**)come_calloc(1, sizeof(char*)*(1*(size_78)), "./neo-c.h", 1319, "char*%"))));
                                        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_80=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value103=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_78)), "./neo-c.h", 1320, "sVar*%"))));
                                        come_call_finalizer3(right_value103,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        item_existance_81=(_Bool*)come_increment_ref_count(((_Bool*)(right_value104=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_78)), "./neo-c.h", 1321, "bool"))));
                                        right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_82=0;
                                        for(                                        it_83=(come_push_stackframe("./neo-c.h", 1325, 977),__exception_result_var_b73=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 975)), "./neo-c.h", 1325, 976))), come_pop_stackframe(), __exception_result_var_b73);                                        !(come_push_stackframe("./neo-c.h", 1325, 980),__exception_result_var_b74=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 978)), "./neo-c.h", 1325, 979))), come_pop_stackframe(), __exception_result_var_b74);                                        it_83=(come_push_stackframe("./neo-c.h", 1325, 983),__exception_result_var_b75=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 981)), "./neo-c.h", 1325, 982))), come_pop_stackframe(), __exception_result_var_b75)                                        ){
                                            (come_push_stackframe("./neo-c.h", 1327, 984),__exception_result_var_b76=memset(&default_value_84,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b76);
                                            it2_85=(come_push_stackframe("./neo-c.h", 1328, 987),__exception_result_var_b77=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1328, 985)), "./neo-c.h", 1328, 986)),it_83,default_value_84), come_pop_stackframe(), __exception_result_var_b77);
                                            hash_86=(come_push_stackframe("./neo-c.h", 1329, 990),__exception_result_var_b78=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_83, "./neo-c.h", 1329, 988)), "./neo-c.h", 1329, 989))), come_pop_stackframe(), __exception_result_var_b78)%size_78;
                                            n_87=hash_86;
                                            while(_while_condtional14=(_Bool)1,                                            _while_condtional14) {
                                                if(_if_conditional77=((_Bool*)come_null_check(item_existance_81, "./neo-c.h", 1333, 991))[n_87],                                                _if_conditional77) {
                                                    n_87++;
                                                    if(_if_conditional78=n_87>=size_78,                                                    _if_conditional78) {
                                                        n_87=0;
                                                    }
                                                    else {
                                                        if(_if_conditional79=n_87==hash_86,                                                        _if_conditional79) {
                                                            (come_push_stackframe("./neo-c.h", 1341, 992),__exception_result_var_b79=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b79);
                                                            (come_push_stackframe("./neo-c.h", 1342,993),stackframe(),come_pop_stackframe());
                                                            (come_push_stackframe("./neo-c.h", 1343,994),exit(2),come_pop_stackframe());
                                                        }
                                                    }
                                                }
                                                else {
                                                    ((_Bool*)come_null_check(item_existance_81, "./neo-c.h", 1347, 995))[n_87]=(_Bool)1;
                                                    ((char**)come_null_check(keys_79, "./neo-c.h", 1348, 996))[n_87]=it_83;
                                                    ((struct sVar**)come_null_check(items_80, "./neo-c.h", 1350, 997))[n_87]=(come_push_stackframe("./neo-c.h", 1350, 1000),__exception_result_var_b80=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1350, 998)), "./neo-c.h", 1350, 999)),it_83,default_value_88), come_pop_stackframe(), __exception_result_var_b80);
                                                    len_82++;
                                                    break;
                                                }
                                            }
                                        }
                                        (come_push_stackframe("./neo-c.h", 1358,1003),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1358, 1001)), "./neo-c.h", 1358, 1002))->items),come_pop_stackframe());
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1359, 1004)), "./neo-c.h", 1359, 1005))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1359, 1004)), "./neo-c.h", 1359, 1005))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        (come_push_stackframe("./neo-c.h", 1360,1008),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1360, 1006)), "./neo-c.h", 1360, 1007))->keys),come_pop_stackframe());
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1362, 1009)), "./neo-c.h", 1362, 1010))->keys=keys_79;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1363, 1011)), "./neo-c.h", 1363, 1012))->items=items_80;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1364, 1013)), "./neo-c.h", 1364, 1014))->item_existance=item_existance_81;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1366, 1015)), "./neo-c.h", 1366, 1016))->size=size_78;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1367, 1017)), "./neo-c.h", 1367, 1018))->len=len_82;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_91;
struct list_item$1charp* it_92;
_Bool _while_condtional16;
_Bool __exception_result_var_b83;
_Bool _if_conditional83;
struct list$1charp* __exception_result_var_b85;
struct list$1charp* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_91, 0, sizeof(int));
memset(&it_92, 0, sizeof(struct list_item$1charp*));
                                                    it2_91=0;
                                                    it_92=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 1041)), "./neo-c.h", 442, 1042))->head;
                                                    while(_while_condtional16=it_92!=((void*)0),                                                    _while_condtional16) {
                                                        if(_if_conditional83=(come_push_stackframe("./neo-c.h", 444, 1047),__exception_result_var_b83=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_92, "./neo-c.h", 444, 1043)), "./neo-c.h", 444, 1044))->item, "./neo-c.h", 444, 1045)), "./neo-c.h", 444, 1046)),item), come_pop_stackframe(), __exception_result_var_b83),                                                        _if_conditional83) {
                                                            (come_push_stackframe("./neo-c.h", 445, 1119),__exception_result_var_b85=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 1048)), "./neo-c.h", 445, 1049)),it2_91,it2_91+1), come_pop_stackframe(), __exception_result_var_b85);
                                                            break;
                                                        }
                                                        it2_91++;
                                                        it_92=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_92, "./neo-c.h", 450, 1120)), "./neo-c.h", 450, 1121))->next;
                                                    }
                                                    __result77__ = __result_obj__ = self;
                                                    return __result77__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
int tmp_93;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
struct list$1charp* __result74__;
_Bool _if_conditional90;
struct list$1charp* __exception_result_var_b84;
_Bool _if_conditional91;
struct list_item$1charp* it_96;
int i_97;
_Bool _while_condtional18;
_Bool _if_conditional92;
struct list_item$1charp* prev_it_98;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct list_item$1charp* it_99;
int i_100;
_Bool _while_condtional19;
_Bool _if_conditional95;
_Bool _if_conditional96;
struct list_item$1charp* prev_it_101;
struct list_item$1charp* it_102;
struct list_item$1charp* head_prev_it_103;
struct list_item$1charp* tail_it_104;
int i_105;
_Bool _while_condtional20;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
struct list_item$1charp* prev_it_106;
_Bool _if_conditional100;
_Bool _if_conditional101;
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
                                                                if(_if_conditional84=head<0,                                                                _if_conditional84) {
                                                                    head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 1050)), "./neo-c.h", 458, 1051))->len;
                                                                }
                                                                if(_if_conditional85=tail<0,                                                                _if_conditional85) {
                                                                    tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 1052)), "./neo-c.h", 461, 1053))->len+1;
                                                                }
                                                                if(_if_conditional86=head>tail,                                                                _if_conditional86) {
                                                                    tmp_93=tail;
                                                                    tail=head;
                                                                    head=tmp_93;
                                                                }
                                                                if(_if_conditional87=head<0,                                                                _if_conditional87) {
                                                                    head=0;
                                                                }
                                                                if(_if_conditional88=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 1054)), "./neo-c.h", 474, 1055))->len,                                                                _if_conditional88) {
                                                                    tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 1056)), "./neo-c.h", 475, 1057))->len;
                                                                }
                                                                if(_if_conditional89=head==tail,                                                                _if_conditional89) {
                                                                    __result74__ = __result_obj__ = self;
                                                                    return __result74__;
                                                                }
                                                                if(_if_conditional90=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 1058)), "./neo-c.h", 482, 1059))->len,                                                                _if_conditional90) {
                                                                    (come_push_stackframe("./neo-c.h", 484, 1072),__exception_result_var_b84=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 1060)), "./neo-c.h", 484, 1061))), come_pop_stackframe(), __exception_result_var_b84);
                                                                }
                                                                else {
                                                                    if(_if_conditional91=head==0,                                                                    _if_conditional91) {
                                                                        it_96=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 1073)), "./neo-c.h", 487, 1074))->head;
                                                                        i_97=0;
                                                                        while(_while_condtional18=it_96!=((void*)0),                                                                        _while_condtional18) {
                                                                            if(_if_conditional92=i_97<tail,                                                                            _if_conditional92) {
                                                                                prev_it_98=it_96;
                                                                                it_96=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_96, "./neo-c.h", 493, 1075)), "./neo-c.h", 493, 1076))->next;
                                                                                i_97++;
                                                                                come_call_finalizer3(prev_it_98,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 1077)), "./neo-c.h", 498, 1078))->len--;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional93=i_97==tail,                                                                                _if_conditional93) {
                                                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 1079)), "./neo-c.h", 501, 1080))->head=it_96;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 1081)), "./neo-c.h", 502, 1082))->head, "./neo-c.h", 502, 1083)), "./neo-c.h", 502, 1084))->prev=((void*)0);
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    it_96=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_96, "./neo-c.h", 506, 1085)), "./neo-c.h", 506, 1086))->next;
                                                                                    i_97++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional94=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 1087)), "./neo-c.h", 511, 1088))->len,                                                                        _if_conditional94) {
                                                                            it_99=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 1089)), "./neo-c.h", 512, 1090))->head;
                                                                            i_100=0;
                                                                            while(_while_condtional19=it_99!=((void*)0),                                                                            _while_condtional19) {
                                                                                if(_if_conditional95=i_100==head,                                                                                _if_conditional95) {
                                                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 1091)), "./neo-c.h", 516, 1092))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_99, "./neo-c.h", 516, 1093)), "./neo-c.h", 516, 1094))->prev;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 1095)), "./neo-c.h", 517, 1096))->tail, "./neo-c.h", 517, 1097)), "./neo-c.h", 517, 1098))->next=((void*)0);
                                                                                }
                                                                                if(_if_conditional96=i_100>=head,                                                                                _if_conditional96) {
                                                                                    prev_it_101=it_99;
                                                                                    it_99=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_99, "./neo-c.h", 523, 1099)), "./neo-c.h", 523, 1100))->next;
                                                                                    i_100++;
                                                                                    come_call_finalizer3(prev_it_101,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 1101)), "./neo-c.h", 528, 1102))->len--;
                                                                                }
                                                                                else {
                                                                                    it_99=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_99, "./neo-c.h", 531, 1103)), "./neo-c.h", 531, 1104))->next;
                                                                                    i_100++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            it_102=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 1105)), "./neo-c.h", 537, 1106))->head;
                                                                            head_prev_it_103=((void*)0);
                                                                            tail_it_104=((void*)0);
                                                                            i_105=0;
                                                                            while(_while_condtional20=it_102!=((void*)0),                                                                            _while_condtional20) {
                                                                                if(_if_conditional97=i_105==head,                                                                                _if_conditional97) {
                                                                                    head_prev_it_103=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_102, "./neo-c.h", 546, 1107)), "./neo-c.h", 546, 1108))->prev;
                                                                                }
                                                                                if(_if_conditional98=i_105==tail,                                                                                _if_conditional98) {
                                                                                    tail_it_104=it_102;
                                                                                }
                                                                                if(_if_conditional99=i_105>=head&&i_105<tail,                                                                                _if_conditional99) {
                                                                                    prev_it_106=it_102;
                                                                                    it_102=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_102, "./neo-c.h", 556, 1109)), "./neo-c.h", 556, 1110))->next;
                                                                                    i_105++;
                                                                                    come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 1111)), "./neo-c.h", 561, 1112))->len--;
                                                                                }
                                                                                else {
                                                                                    it_102=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_102, "./neo-c.h", 564, 1113)), "./neo-c.h", 564, 1114))->next;
                                                                                    i_105++;
                                                                                }
                                                                            }
                                                                            if(_if_conditional100=head_prev_it_103!=((void*)0),                                                                            _if_conditional100) {
                                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_103, "./neo-c.h", 570, 1115)), "./neo-c.h", 570, 1116))->next=tail_it_104;
                                                                            }
                                                                            if(_if_conditional101=tail_it_104!=((void*)0),                                                                            _if_conditional101) {
                                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_104, "./neo-c.h", 573, 1117)), "./neo-c.h", 573, 1118))->prev=head_prev_it_103;
                                                                            }
                                                                        }
                                                                    }
                                                                }
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
                                                                        it_94=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 1062)), "./neo-c.h", 426, 1063))->head;
                                                                        while(_while_condtional17=it_94!=((void*)0),                                                                        _while_condtional17) {
                                                                            prev_it_95=it_94;
                                                                            it_94=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_94, "./neo-c.h", 429, 1064)), "./neo-c.h", 429, 1065))->next;
                                                                            come_call_finalizer3(prev_it_95,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 1066)), "./neo-c.h", 433, 1067))->head=((void*)0);
                                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 1068)), "./neo-c.h", 434, 1069))->tail=((void*)0);
                                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 1070)), "./neo-c.h", 436, 1071))->len=0;
                                                                        __result75__ = __result_obj__ = self;
                                                                        return __result75__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional107;
char* result_108;
void* __exception_result_var_b89;
char* __result78__;
_Bool _if_conditional108;
char* __result79__;
char* result_109;
void* __exception_result_var_b90;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_108, 0, sizeof(char*));
memset(&result_109, 0, sizeof(char*));
                                    if(_if_conditional107=self==((void*)0),                                    _if_conditional107) {
                                        (come_push_stackframe("./neo-c.h", 284, 1175),__exception_result_var_b89=memset(&result_108,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b89);
                                        __result78__ = __result_obj__ = result_108;
                                        return __result78__;
                                    }
                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1176)), "./neo-c.h", 287, 1177))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1178)), "./neo-c.h", 287, 1179))->head;
                                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 1180)), "./neo-c.h", 289, 1181))->it) {
                                        __result79__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 1182)), "./neo-c.h", 290, 1183))->it, "./neo-c.h", 290, 1184)), "./neo-c.h", 290, 1185))->item;
                                        return __result79__;
                                    }
                                    (come_push_stackframe("./neo-c.h", 294, 1186),__exception_result_var_b90=memset(&result_109,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b90);
                                    __result80__ = __result_obj__ = result_109;
                                    return __result80__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result81__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 1192)), "./neo-c.h", 317, 1193))->it==((void*)0);
                                    return __result81__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional109;
char* result_111;
void* __exception_result_var_b93;
char* __result82__;
_Bool _if_conditional110;
char* __result83__;
char* result_112;
void* __exception_result_var_b94;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_111, 0, sizeof(char*));
memset(&result_112, 0, sizeof(char*));
                                    if(_if_conditional109=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 1199)), "./neo-c.h", 299, 1200))->it==((void*)0),                                    _if_conditional109) {
                                        (come_push_stackframe("./neo-c.h", 301, 1201),__exception_result_var_b93=memset(&result_111,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b93);
                                        __result82__ = __result_obj__ = result_111;
                                        return __result82__;
                                    }
                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1202)), "./neo-c.h", 305, 1203))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1204)), "./neo-c.h", 305, 1205))->it, "./neo-c.h", 305, 1206)), "./neo-c.h", 305, 1207))->next;
                                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 1208)), "./neo-c.h", 307, 1209))->it) {
                                        __result83__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 1210)), "./neo-c.h", 308, 1211))->it, "./neo-c.h", 308, 1212)), "./neo-c.h", 308, 1213))->item;
                                        return __result83__;
                                    }
                                    (come_push_stackframe("./neo-c.h", 312, 1214),__exception_result_var_b94=memset(&result_112,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b94);
                                    __result84__ = __result_obj__ = result_112;
                                    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional113;
void* right_value105;
struct list_item$1charp* litem_113;
_Bool _if_conditional114;
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
                                        if(_if_conditional113=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 1223)), "./neo-c.h", 222, 1224))->len==0,                                        _if_conditional113) {
                                            litem_113=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value105=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                                            come_call_finalizer3(right_value105,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_113, "./neo-c.h", 225, 1225)), "./neo-c.h", 225, 1226))->prev=((void*)0);
                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_113, "./neo-c.h", 226, 1227)), "./neo-c.h", 226, 1228))->next=((void*)0);
                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_113, "./neo-c.h", 227, 1229)), "./neo-c.h", 227, 1230))->item=item;
                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 1231)), "./neo-c.h", 229, 1232))->tail=litem_113;
                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 1233)), "./neo-c.h", 230, 1234))->head=litem_113;
                                        }
                                        else {
                                            if(_if_conditional114=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 1235)), "./neo-c.h", 232, 1236))->len==1,                                            _if_conditional114) {
                                                litem_114=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value106=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                                                come_call_finalizer3(right_value106,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_114, "./neo-c.h", 235, 1237)), "./neo-c.h", 235, 1238))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 1239)), "./neo-c.h", 235, 1240))->head;
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_114, "./neo-c.h", 236, 1241)), "./neo-c.h", 236, 1242))->next=((void*)0);
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_114, "./neo-c.h", 237, 1243)), "./neo-c.h", 237, 1244))->item=item;
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 1245)), "./neo-c.h", 239, 1246))->tail=litem_114;
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 1247)), "./neo-c.h", 240, 1248))->head, "./neo-c.h", 240, 1249)), "./neo-c.h", 240, 1250))->next=litem_114;
                                            }
                                            else {
                                                litem_115=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value107=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                                                come_call_finalizer3(right_value107,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_115, "./neo-c.h", 245, 1251)), "./neo-c.h", 245, 1252))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 1253)), "./neo-c.h", 245, 1254))->tail;
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_115, "./neo-c.h", 246, 1255)), "./neo-c.h", 246, 1256))->next=((void*)0);
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_115, "./neo-c.h", 247, 1257)), "./neo-c.h", 247, 1258))->item=item;
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 1259)), "./neo-c.h", 249, 1260))->tail, "./neo-c.h", 249, 1261)), "./neo-c.h", 249, 1262))->next=litem_115;
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 1263)), "./neo-c.h", 250, 1264))->tail=litem_115;
                                            }
                                        }
                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 1265)), "./neo-c.h", 253, 1266))->len++;
                                        __result85__ = __result_obj__ = self;
                                        return __result85__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_116;
_Bool _if_conditional115;
_Bool _if_conditional116;
int i_117;
_Bool _if_conditional117;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_116, 0, sizeof(int));
memset(&i_117, 0, sizeof(int));
                        for(                        i_116=0;                        i_116<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1111, 1270)), "./neo-c.h", 1111, 1271))->size;                        i_116++                        ){
                            if(_if_conditional115=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1112, 1272)), "./neo-c.h", 1112, 1273))->item_existance, "./neo-c.h", 1112, 1274))[i_116],                            _if_conditional115) {
                                if(_if_conditional116=1,                                _if_conditional116) {
                                    come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1114, 1275)), "./neo-c.h", 1114, 1276))->items, "./neo-c.h", 1114, 1277))[i_116],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        (come_push_stackframe("./neo-c.h", 1118,1280),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1118, 1278)), "./neo-c.h", 1118, 1279))->items),come_pop_stackframe());
                        for(                        i_117=0;                        i_117<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1120, 1281)), "./neo-c.h", 1120, 1282))->size;                        i_117++                        ){
                            if(_if_conditional117=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1121, 1283)), "./neo-c.h", 1121, 1284))->item_existance, "./neo-c.h", 1121, 1285))[i_117],                            _if_conditional117) {
                                if(_if_conditional118=1,                                _if_conditional118) {
                                    ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 1286)), "./neo-c.h", 1123, 1287))->keys, "./neo-c.h", 1123, 1288))[i_117] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 1286)), "./neo-c.h", 1123, 1287))->keys, "./neo-c.h", 1123, 1288))[i_117], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        (come_push_stackframe("./neo-c.h", 1127,1291),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1127, 1289)), "./neo-c.h", 1127, 1290))->keys),come_pop_stackframe());
                        come_call_finalizer3(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1129, 1292)), "./neo-c.h", 1129, 1293))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 1294)), "./neo-c.h", 1131, 1295))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 1294)), "./neo-c.h", 1131, 1295))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional127;
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional127=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1346)), "CVALUE_finalize", 0, 1347))->c_value!=((void*)0),        _if_conditional127) {
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1348)), "CVALUE_finalize", 0, 1349))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1348)), "CVALUE_finalize", 0, 1349))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional128=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1350)), "CVALUE_finalize", 1, 1351))->type!=((void*)0),        _if_conditional128) {
            come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1352)), "CVALUE_finalize", 1, 1353))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b117;
_Bool _if_conditional141;
int __exception_result_var_b118;
struct sNode* expression_node_135;
_Bool _if_conditional142;
struct sNode* __dec_obj33;
void* right_value120;
struct sNode* __exception_result_var_b119;
struct sNode* __dec_obj34;
int __exception_result_var_b120;
struct sNode* expression_node2_136;
_Bool _if_conditional143;
struct sNode* __dec_obj35;
void* right_value121;
struct sNode* __exception_result_var_b121;
struct sNode* __dec_obj36;
int __exception_result_var_b122;
struct sNode* expression_node3_137;
_Bool _if_conditional144;
struct sNode* __dec_obj37;
void* right_value122;
struct sNode* __exception_result_var_b123;
struct sNode* __dec_obj38;
int __exception_result_var_b124;
void* right_value123;
struct sBlock* __exception_result_var_b125;
struct sBlock* block_138;
void* right_value124;
void* right_value125;
struct sForNode* __exception_result_var_b126;
struct sNode* _inf_value1;
struct sForNode* _inf_obj_value1;
void* right_value132;
struct sNode* __result99__;
void* right_value133;
struct sNode* __exception_result_var_b132;
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
    if(_if_conditional141=(come_push_stackframe("11for.c", 187, 1421),__exception_result_var_b117=charp_operator_equals(buf,"for"), come_pop_stackframe(), __exception_result_var_b117),    _if_conditional141) {
        (come_push_stackframe("11for.c", 188, 1422),__exception_result_var_b118=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b118);
        (come_push_stackframe("11for.c", 191,1423),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional142=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 193, 1424)), "11for.c", 193, 1425))->p, "11for.c", 193, 1426))==59,        _if_conditional142) {
            __dec_obj33=expression_node_135;
            expression_node_135=((void*)0);
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            __dec_obj34=expression_node_135;
            expression_node_135=(struct sNode*)come_increment_ref_count((come_push_stackframe("11for.c", 197, 1427),__exception_result_var_b119=((struct sNode*)(right_value120=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b119));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        (come_push_stackframe("11for.c", 199,1428),parse_sharp_v5(info),come_pop_stackframe());
        (come_push_stackframe("11for.c", 200, 1429),__exception_result_var_b120=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b120);
        (come_push_stackframe("11for.c", 201,1430),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional143=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 203, 1431)), "11for.c", 203, 1432))->p, "11for.c", 203, 1433))==59,        _if_conditional143) {
            __dec_obj35=expression_node2_136;
            expression_node2_136=((void*)0);
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            __dec_obj36=expression_node2_136;
            expression_node2_136=(struct sNode*)come_increment_ref_count((come_push_stackframe("11for.c", 207, 1434),__exception_result_var_b121=((struct sNode*)(right_value121=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b121));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value121) { right_value121 = come_decrement_ref_count2(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        (come_push_stackframe("11for.c", 209,1435),parse_sharp_v5(info),come_pop_stackframe());
        (come_push_stackframe("11for.c", 210, 1436),__exception_result_var_b122=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b122);
        (come_push_stackframe("11for.c", 211,1437),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional144=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "11for.c", 213, 1438)), "11for.c", 213, 1439))->p, "11for.c", 213, 1440))==41,        _if_conditional144) {
            __dec_obj37=expression_node3_137;
            expression_node3_137=((void*)0);
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            __dec_obj38=expression_node3_137;
            expression_node3_137=(struct sNode*)come_increment_ref_count((come_push_stackframe("11for.c", 217, 1441),__exception_result_var_b123=((struct sNode*)(right_value122=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b123));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        (come_push_stackframe("11for.c", 219,1442),parse_sharp_v5(info),come_pop_stackframe());
        (come_push_stackframe("11for.c", 220, 1443),__exception_result_var_b124=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b124);
        (come_push_stackframe("11for.c", 221,1444),parse_sharp_v5(info),come_pop_stackframe());
        block_138=(struct sBlock*)come_increment_ref_count((come_push_stackframe("11for.c", 223, 1445),__exception_result_var_b125=((struct sBlock*)(right_value123=parse_block(info,(_Bool)0,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b125));
        come_call_finalizer3(right_value123,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "11for.c", 225, "struct sNode");
        _inf_obj_value1=come_increment_ref_count((come_push_stackframe("11for.c", 225, 1447),__exception_result_var_b126=((struct sForNode*)(right_value125=sForNode_initialize((struct sForNode*)come_increment_ref_count(((struct sForNode*)come_null_check(((struct sForNode*)(right_value124=(struct sForNode*)come_calloc(1, sizeof(struct sForNode)*(1), "11for.c", 225, "sForNode"))), "11for.c", 225, 1446))),(struct sNode*)come_increment_ref_count(expression_node_135),(struct sNode*)come_increment_ref_count(expression_node2_136),(struct sNode*)come_increment_ref_count(expression_node3_137),block_138,info))), come_pop_stackframe(), __exception_result_var_b126));
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
    __result100__ = __result_obj__ = (come_push_stackframe("11for.c", 228, 1507),__exception_result_var_b132=((struct sNode*)(right_value133=string_node_v10(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b132);
    if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result100__;
}

static void sForNode_finalize(struct sForNode* self){
void* __result_obj__;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional145=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 0, 1448)), "sForNode_finalize", 0, 1449))->sname!=((void*)0),            _if_conditional145) {
                ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 0, 1450)), "sForNode_finalize", 0, 1451))->sname = come_decrement_ref_count2(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 0, 1450)), "sForNode_finalize", 0, 1451))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional146=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 1, 1452)), "sForNode_finalize", 1, 1453))->mExpressionNode!=((void*)0),            _if_conditional146) {
                if(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 1, 1454)), "sForNode_finalize", 1, 1455))->mExpressionNode) { ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 1, 1454)), "sForNode_finalize", 1, 1455))->mExpressionNode = come_decrement_ref_count2(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 1, 1454)), "sForNode_finalize", 1, 1455))->mExpressionNode, ((struct sNode*)((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 1, 1454)), "sForNode_finalize", 1, 1455))->mExpressionNode)->finalize, ((struct sNode*)((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 1, 1454)), "sForNode_finalize", 1, 1455))->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional147=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 2, 1456)), "sForNode_finalize", 2, 1457))->mExpressionNode2!=((void*)0),            _if_conditional147) {
                if(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 2, 1458)), "sForNode_finalize", 2, 1459))->mExpressionNode2) { ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 2, 1458)), "sForNode_finalize", 2, 1459))->mExpressionNode2 = come_decrement_ref_count2(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 2, 1458)), "sForNode_finalize", 2, 1459))->mExpressionNode2, ((struct sNode*)((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 2, 1458)), "sForNode_finalize", 2, 1459))->mExpressionNode2)->finalize, ((struct sNode*)((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 2, 1458)), "sForNode_finalize", 2, 1459))->mExpressionNode2)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional148=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 3, 1460)), "sForNode_finalize", 3, 1461))->mExpressionNode3!=((void*)0),            _if_conditional148) {
                if(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 3, 1462)), "sForNode_finalize", 3, 1463))->mExpressionNode3) { ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 3, 1462)), "sForNode_finalize", 3, 1463))->mExpressionNode3 = come_decrement_ref_count2(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 3, 1462)), "sForNode_finalize", 3, 1463))->mExpressionNode3, ((struct sNode*)((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 3, 1462)), "sForNode_finalize", 3, 1463))->mExpressionNode3)->finalize, ((struct sNode*)((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 3, 1462)), "sForNode_finalize", 3, 1463))->mExpressionNode3)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional149=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 4, 1464)), "sForNode_finalize", 4, 1465))->mBlock!=((void*)0),            _if_conditional149) {
                come_call_finalizer3(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_finalize", 4, 1466)), "sForNode_finalize", 4, 1467))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sForNode* sForNode_clone(struct sForNode* self){
void* __result_obj__;
_Bool _if_conditional150;
struct sForNode* __result97__;
void* right_value126;
struct sForNode* result_139;
_Bool _if_conditional151;
_Bool _if_conditional152;
char* __exception_result_var_b127;
void* right_value127;
char* __dec_obj39;
_Bool _if_conditional153;
struct sNode* __exception_result_var_b128;
void* right_value128;
struct sNode* __dec_obj40;
_Bool _if_conditional154;
struct sNode* __exception_result_var_b129;
void* right_value129;
struct sNode* __dec_obj41;
_Bool _if_conditional155;
struct sNode* __exception_result_var_b130;
void* right_value130;
struct sNode* __dec_obj42;
_Bool _if_conditional156;
struct sBlock* __exception_result_var_b131;
void* right_value131;
struct sBlock* __dec_obj43;
struct sForNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&result_139, 0, sizeof(struct sForNode*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
            if(_if_conditional150=self==(void*)0,            _if_conditional150) {
                __result97__ = __result_obj__ = (void*)0;
                return __result97__;
            }
            result_139=(struct sForNode*)come_increment_ref_count(((struct sForNode*)(right_value126=(struct sForNode*)come_calloc(1, sizeof(struct sForNode)*(1), "sForNode_clone", 3, "sForNode"))));
            come_call_finalizer3(right_value126,sForNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional151=self!=((void*)0),            _if_conditional151) {
                ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 4, 1468)), "sForNode_clone", 4, 1469))->sline=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 4, 1470)), "sForNode_clone", 4, 1471))->sline;
            }
            if(_if_conditional152=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 5, 1472)), "sForNode_clone", 5, 1473))->sname!=((void*)0),            _if_conditional152) {
                __dec_obj39=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 5, 1474)), "sForNode_clone", 5, 1475))->sname;
                ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 5, 1474)), "sForNode_clone", 5, 1475))->sname=(char*)come_increment_ref_count(((char*)(right_value127=(come_push_stackframe("sForNode_clone", 5, 1478),__exception_result_var_b127=string_clone(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 5, 1476)), "sForNode_clone", 5, 1477))->sname), come_pop_stackframe(), __exception_result_var_b127))));
                __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional153=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 6, 1479)), "sForNode_clone", 6, 1480))->mExpressionNode!=((void*)0),            _if_conditional153) {
                __dec_obj40=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 6, 1481)), "sForNode_clone", 6, 1482))->mExpressionNode;
                ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 6, 1481)), "sForNode_clone", 6, 1482))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=(come_push_stackframe("sForNode_clone", 6, 1485),__exception_result_var_b128=sNode_clone(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 6, 1483)), "sForNode_clone", 6, 1484))->mExpressionNode), come_pop_stackframe(), __exception_result_var_b128))));
                if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value128) { right_value128 = come_decrement_ref_count2(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional154=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 7, 1486)), "sForNode_clone", 7, 1487))->mExpressionNode2!=((void*)0),            _if_conditional154) {
                __dec_obj41=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 7, 1488)), "sForNode_clone", 7, 1489))->mExpressionNode2;
                ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 7, 1488)), "sForNode_clone", 7, 1489))->mExpressionNode2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=(come_push_stackframe("sForNode_clone", 7, 1492),__exception_result_var_b129=sNode_clone(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 7, 1490)), "sForNode_clone", 7, 1491))->mExpressionNode2), come_pop_stackframe(), __exception_result_var_b129))));
                if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional155=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 8, 1493)), "sForNode_clone", 8, 1494))->mExpressionNode3!=((void*)0),            _if_conditional155) {
                __dec_obj42=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 8, 1495)), "sForNode_clone", 8, 1496))->mExpressionNode3;
                ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 8, 1495)), "sForNode_clone", 8, 1496))->mExpressionNode3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=(come_push_stackframe("sForNode_clone", 8, 1499),__exception_result_var_b130=sNode_clone(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 8, 1497)), "sForNode_clone", 8, 1498))->mExpressionNode3), come_pop_stackframe(), __exception_result_var_b130))));
                if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional156=self!=((void*)0)&&((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 9, 1500)), "sForNode_clone", 9, 1501))->mBlock!=((void*)0),            _if_conditional156) {
                __dec_obj43=((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 9, 1502)), "sForNode_clone", 9, 1503))->mBlock;
                ((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(result_139, "sForNode_clone", 9, 1502)), "sForNode_clone", 9, 1503))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value131=(come_push_stackframe("sForNode_clone", 9, 1506),__exception_result_var_b131=sBlock_clone(((struct sForNode*)come_null_check(((struct sForNode*)come_null_check(self, "sForNode_clone", 9, 1504)), "sForNode_clone", 9, 1505))->mBlock), come_pop_stackframe(), __exception_result_var_b131))));
                come_call_finalizer3(__dec_obj43,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value131,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result98__ = __result_obj__ = result_139;
            come_call_finalizer3(result_139,sForNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result98__;
            come_call_finalizer3(result_139,sForNode_finalize, 0, 0, 0, 0, (void*)0);
}

