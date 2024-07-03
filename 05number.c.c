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
struct sIntNode
{
    int sline;
    char* sname;
    int value;
};
struct sUIntNode
{
    int sline;
    char* sname;
    unsigned int value;
};
struct sLongNode
{
    int sline;
    char* sname;
    long value;
};
struct sULongNode
{
    int sline;
    char* sname;
    unsigned long int value;
};
struct sFloatNode
{
    int sline;
    char* sname;
    float value;
};
struct sDoubleNode
{
    int sline;
    char* sname;
    double value;
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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);

char* sIntNode_kind(struct sIntNode* self);

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);

_Bool sIntNode_terminated(struct sIntNode* self);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);

_Bool sUIntNode_terminated(struct sUIntNode* self);

char* sUIntNode_kind(struct sUIntNode* self);

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info);

char* sLongNode_kind(struct sLongNode* self);

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);

_Bool sLongNode_terminated(struct sLongNode* self);

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info);

char* sULongNode_kind(struct sULongNode* self);

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);

_Bool sULongNode_terminated(struct sULongNode* self);

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info);

char* sFloatNode_kind(struct sFloatNode* self);

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);

_Bool sFloatNode_terminated(struct sFloatNode* self);

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info);

char* sDoubleNode_kind(struct sDoubleNode* self);

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);

_Bool sDoubleNode_terminated(struct sDoubleNode* self);

struct sNode* create_int_node(int value, struct sInfo* info);

struct sNode* get_number(_Bool minus, struct sInfo* info);

static void sFloatNode_finalize(struct sFloatNode* self);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static void sDoubleNode_finalize(struct sDoubleNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);

struct sNode* get_oct_number(struct sInfo* info);

static void sUIntNode_finalize(struct sUIntNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static void sULongNode_finalize(struct sULongNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static void sLongNode_finalize(struct sLongNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
static void sIntNode_finalize(struct sIntNode* self);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
struct sNode* expression_node_v99(struct sInfo* info);

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










struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sIntNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 9 "05number.c"
    self->value=value;
    # 11 "05number.c"
    self->sline=info->sline;
    # 12 "05number.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 15 "05number.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sIntNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sIntNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sIntNode_kind(struct sIntNode* self){
void* __result_obj__;
void* right_value80;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 17 "05number.c"
    __result53__ = __result_obj__ = ((char*)(right_value80=__builtin_string("sIntNode")));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value81;
struct CVALUE* come_value_47;
void* right_value82;
char* __dec_obj13;
void* right_value83;
void* right_value84;
struct sType* __dec_obj14;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&come_value_47, 0, sizeof(struct CVALUE*));
right_value82 = (void*)0;
right_value83 = (void*)0;
right_value84 = (void*)0;
    # 22 "05number.c"
    come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 22, "CVALUE"))));
    come_call_finalizer3(right_value81,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 24 "05number.c"
    __dec_obj13=come_value_47->c_value;
    come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value82=xsprintf("%d",self->value))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 25 "05number.c"
    __dec_obj14=come_value_47->type;
    come_value_47->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 25, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value83,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 26 "05number.c"
    come_value_47->var=((void*)0);
    # 28 "05number.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
    # 30 "05number.c"
    add_come_last_code(info,"%s;\n",come_value_47->c_value);
    # 32 "05number.c"
    __result55__ = (_Bool)1;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result55__;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sIntNode_terminated(struct sIntNode* self){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    # 37 "05number.c"
    __result56__ = (_Bool)0;
    return __result56__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional20=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional20) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional21=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional21) {
            # 1 "CVALUE_finalize"
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sType_finalize"
                # 0 "sType_finalize"
                if(_if_conditional22=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional22) {
                    # 0 "sType_finalize"
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional24) {
                    # 1 "sType_finalize"
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional26=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional26) {
                    # 2 "sType_finalize"
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sType_finalize"
                # 3 "sType_finalize"
                if(_if_conditional27=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional27) {
                    # 3 "sType_finalize"
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sType_finalize"
                # 4 "sType_finalize"
                if(_if_conditional28=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional28) {
                    # 4 "sType_finalize"
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional29=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional29) {
                    # 5 "sType_finalize"
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional31=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional31) {
                    # 6 "sType_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional32=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional32) {
                    # 7 "sType_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional34=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional34) {
                    # 8 "sType_finalize"
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sType_finalize"
                # 9 "sType_finalize"
                if(_if_conditional35=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional35) {
                    # 9 "sType_finalize"
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 11 "sType_finalize"
                # 10 "sType_finalize"
                if(_if_conditional36=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional36) {
                    # 10 "sType_finalize"
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 12 "sType_finalize"
                # 11 "sType_finalize"
                if(_if_conditional37=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional37) {
                    # 11 "sType_finalize"
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sType_finalize"
                # 12 "sType_finalize"
                if(_if_conditional38=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional38) {
                    # 12 "sType_finalize"
                    self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                        # 114 "./neo-c.h"
                        it_48=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
                            # 116 "./neo-c.h"
                            prev_it_49=it_48;
                            # 117 "./neo-c.h"
                            it_48=it_48->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sTypephp_finalize"
                                # 0 "list_item$1sTypephp_finalize"
                                if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional23) {
                                    # 0 "list_item$1sTypephp_finalize"
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypephp_finalize"
                        # 0 "tuple1$1sTypephp_finalize"
                        if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional25) {
                            # 0 "tuple1$1sTypephp_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                        # 114 "./neo-c.h"
                        it_50=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
                            # 116 "./neo-c.h"
                            prev_it_51=it_50;
                            # 117 "./neo-c.h"
                            it_50=it_50->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sNodephp_finalize"
                                # 0 "list_item$1sNodephp_finalize"
                                if(_if_conditional30=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional30) {
                                    # 0 "list_item$1sNodephp_finalize"
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                        # 114 "./neo-c.h"
                        it_52=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
                            # 116 "./neo-c.h"
                            prev_it_53=it_52;
                            # 117 "./neo-c.h"
                            it_52=it_52->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional33) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional39;
void* right_value85;
struct list_item$1CVALUEph* litem_54;
struct CVALUE* __dec_obj15;
_Bool _if_conditional41;
void* right_value86;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj16;
void* right_value87;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj17;
struct list$1CVALUEph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1CVALUEph*));
right_value86 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value87 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional39=self->len==0,        _if_conditional39) {
            # 217 "./neo-c.h"
            litem_54=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value85=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value85,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_54->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_54->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj15=litem_54->item;
            litem_54->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj15,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_54;
            # 224 "./neo-c.h"
            self->head=litem_54;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional41=self->len==1,            _if_conditional41) {
                # 227 "./neo-c.h"
                litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value86=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value86,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_55->prev=self->head;
                # 230 "./neo-c.h"
                litem_55->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj16=litem_55->item;
                litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj16,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_55;
                # 234 "./neo-c.h"
                self->head->next=litem_55;
            }
            else {
                # 237 "./neo-c.h"
                litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value87=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value87,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_56->prev=self->tail;
                # 240 "./neo-c.h"
                litem_56->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj17=litem_56->item;
                litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj17,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_56;
                # 244 "./neo-c.h"
                self->tail=litem_56;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result54__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result54__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional40=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional40) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
void* right_value88;
char* __dec_obj18;
struct sUIntNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
    # 47 "05number.c"
    self->value=value;
    # 49 "05number.c"
    self->sline=info->sline;
    # 50 "05number.c"
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value88=__builtin_string(info->sname))));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 53 "05number.c"
    __result57__ = __result_obj__ = self;
    come_call_finalizer3(self,sUIntNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result57__;
    come_call_finalizer3(self,sUIntNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sUIntNode_terminated(struct sUIntNode* self){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    # 55 "05number.c"
    __result58__ = (_Bool)0;
    return __result58__;
}

char* sUIntNode_kind(struct sUIntNode* self){
void* __result_obj__;
void* right_value89;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
    # 60 "05number.c"
    __result59__ = __result_obj__ = ((char*)(right_value89=__builtin_string("sUIntNode")));
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result59__;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value90;
struct CVALUE* come_value_57;
void* right_value91;
char* __dec_obj19;
void* right_value92;
void* right_value93;
struct sType* __dec_obj20;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&come_value_57, 0, sizeof(struct CVALUE*));
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
    # 65 "05number.c"
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value90=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 65, "CVALUE"))));
    come_call_finalizer3(right_value90,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 67 "05number.c"
    __dec_obj19=come_value_57->c_value;
    come_value_57->c_value=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("%u",self->value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 68 "05number.c"
    __dec_obj20=come_value_57->type;
    come_value_57->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 68, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value93,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 69 "05number.c"
    come_value_57->var=((void*)0);
    # 71 "05number.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_57));
    # 73 "05number.c"
    add_come_last_code(info,"%s;\n",come_value_57->c_value);
    # 75 "05number.c"
    __result60__ = (_Bool)1;
    come_call_finalizer3(come_value_57,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result60__;
    come_call_finalizer3(come_value_57,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
void* right_value94;
char* __dec_obj21;
struct sLongNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
    # 85 "05number.c"
    self->value=value;
    # 87 "05number.c"
    self->sline=info->sline;
    # 88 "05number.c"
    __dec_obj21=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(info->sname))));
    __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 91 "05number.c"
    __result61__ = __result_obj__ = self;
    come_call_finalizer3(self,sLongNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result61__;
    come_call_finalizer3(self,sLongNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLongNode_kind(struct sLongNode* self){
void* __result_obj__;
void* right_value95;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    # 93 "05number.c"
    __result62__ = __result_obj__ = ((char*)(right_value95=__builtin_string("sLongNode")));
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value96;
struct CVALUE* come_value_58;
void* right_value97;
char* __dec_obj22;
void* right_value98;
void* right_value99;
struct sType* __dec_obj23;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&come_value_58, 0, sizeof(struct CVALUE*));
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
    # 98 "05number.c"
    come_value_58=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value96=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 98, "CVALUE"))));
    come_call_finalizer3(right_value96,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 100 "05number.c"
    __dec_obj22=come_value_58->c_value;
    come_value_58->c_value=(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("%ld",self->value))));
    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 101 "05number.c"
    __dec_obj23=come_value_58->type;
    come_value_58->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 101, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj23,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value98,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value99,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 102 "05number.c"
    come_value_58->var=((void*)0);
    # 104 "05number.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_58));
    # 106 "05number.c"
    add_come_last_code(info,"%s;\n",come_value_58->c_value);
    # 108 "05number.c"
    __result63__ = (_Bool)1;
    come_call_finalizer3(come_value_58,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result63__;
    come_call_finalizer3(come_value_58,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sLongNode_terminated(struct sLongNode* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    # 113 "05number.c"
    __result64__ = (_Bool)0;
    return __result64__;
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long int value, struct sInfo* info){
void* __result_obj__;
void* right_value100;
char* __dec_obj24;
struct sULongNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
    # 123 "05number.c"
    self->value=value;
    # 125 "05number.c"
    self->sline=info->sline;
    # 126 "05number.c"
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value100=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 129 "05number.c"
    __result65__ = __result_obj__ = self;
    come_call_finalizer3(self,sULongNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result65__;
    come_call_finalizer3(self,sULongNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sULongNode_kind(struct sULongNode* self){
void* __result_obj__;
void* right_value101;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    # 131 "05number.c"
    __result66__ = __result_obj__ = ((char*)(right_value101=__builtin_string("sULongNode")));
    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value102;
struct CVALUE* come_value_59;
void* right_value103;
char* __dec_obj25;
void* right_value104;
void* right_value105;
struct sType* __dec_obj26;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&come_value_59, 0, sizeof(struct CVALUE*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
    # 136 "05number.c"
    come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 136, "CVALUE"))));
    come_call_finalizer3(right_value102,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 138 "05number.c"
    __dec_obj25=come_value_59->c_value;
    come_value_59->c_value=(char*)come_increment_ref_count(((char*)(right_value103=xsprintf("%lu",self->value))));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 139 "05number.c"
    __dec_obj26=come_value_59->type;
    come_value_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 139, "sType")))),"long",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value105,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 140 "05number.c"
    come_value_59->var=((void*)0);
    # 142 "05number.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_59));
    # 144 "05number.c"
    add_come_last_code(info,"%s;\n",come_value_59->c_value);
    # 146 "05number.c"
    __result67__ = (_Bool)1;
    come_call_finalizer3(come_value_59,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result67__;
    come_call_finalizer3(come_value_59,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sULongNode_terminated(struct sULongNode* self){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 151 "05number.c"
    __result68__ = (_Bool)0;
    return __result68__;
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, float value, struct sInfo* info){
void* __result_obj__;
void* right_value106;
char* __dec_obj27;
struct sFloatNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
    # 161 "05number.c"
    self->value=value;
    # 163 "05number.c"
    self->sline=info->sline;
    # 164 "05number.c"
    __dec_obj27=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(info->sname))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 167 "05number.c"
    __result69__ = __result_obj__ = self;
    come_call_finalizer3(self,sFloatNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result69__;
    come_call_finalizer3(self,sFloatNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFloatNode_kind(struct sFloatNode* self){
void* __result_obj__;
void* right_value107;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
    # 169 "05number.c"
    __result70__ = __result_obj__ = ((char*)(right_value107=__builtin_string("sFloatNode")));
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value108;
struct CVALUE* come_value_60;
void* right_value109;
char* __dec_obj28;
void* right_value110;
void* right_value111;
struct sType* __dec_obj29;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&come_value_60, 0, sizeof(struct CVALUE*));
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
    # 174 "05number.c"
    come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 174, "CVALUE"))));
    come_call_finalizer3(right_value108,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 176 "05number.c"
    __dec_obj28=come_value_60->c_value;
    come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("%f",self->value))));
    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 177 "05number.c"
    __dec_obj29=come_value_60->type;
    come_value_60->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value110=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 177, "sType")))),"float",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value110,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value111,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 178 "05number.c"
    come_value_60->var=((void*)0);
    # 180 "05number.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_60));
    # 182 "05number.c"
    add_come_last_code(info,"%s;\n",come_value_60->c_value);
    # 184 "05number.c"
    __result71__ = (_Bool)1;
    come_call_finalizer3(come_value_60,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result71__;
    come_call_finalizer3(come_value_60,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sFloatNode_terminated(struct sFloatNode* self){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    # 189 "05number.c"
    __result72__ = (_Bool)0;
    return __result72__;
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, double value, struct sInfo* info){
void* __result_obj__;
void* right_value112;
char* __dec_obj30;
struct sDoubleNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
    # 199 "05number.c"
    self->value=value;
    # 201 "05number.c"
    self->sline=info->sline;
    # 202 "05number.c"
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value112=__builtin_string(info->sname))));
    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 205 "05number.c"
    __result73__ = __result_obj__ = self;
    come_call_finalizer3(self,sDoubleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer3(self,sDoubleNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sDoubleNode_kind(struct sDoubleNode* self){
void* __result_obj__;
void* right_value113;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
    # 207 "05number.c"
    __result74__ = __result_obj__ = ((char*)(right_value113=__builtin_string("sDoubleNode")));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct CVALUE* come_value_61;
void* right_value115;
char* __dec_obj31;
void* right_value116;
void* right_value117;
struct sType* __dec_obj32;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&come_value_61, 0, sizeof(struct CVALUE*));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
    # 212 "05number.c"
    come_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value114=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05number.c", 212, "CVALUE"))));
    come_call_finalizer3(right_value114,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 214 "05number.c"
    __dec_obj31=come_value_61->c_value;
    come_value_61->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("%lf",self->value))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 215 "05number.c"
    __dec_obj32=come_value_61->type;
    come_value_61->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value116=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05number.c", 215, "sType")))),"double",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 216 "05number.c"
    come_value_61->var=((void*)0);
    # 218 "05number.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_61));
    # 220 "05number.c"
    add_come_last_code(info,"%s;\n",come_value_61->c_value);
    # 222 "05number.c"
    __result75__ = (_Bool)1;
    come_call_finalizer3(come_value_61,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(come_value_61,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

_Bool sDoubleNode_terminated(struct sDoubleNode* self){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 227 "05number.c"
    __result76__ = (_Bool)0;
    return __result76__;
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* __result_obj__;
void* right_value118;
void* right_value119;
struct sNode* _inf_value1;
struct sIntNode* _inf_obj_value1;
void* right_value122;
struct sNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value122 = (void*)0;
    # 233 "05number.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 233, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sIntNode*)(right_value119=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value118=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 233, "sIntNode")))),value,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIntNode_finalize;
    _inf_value1->clone=(void*)sIntNode_clone;
    _inf_value1->compile=(void*)sIntNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIntNode_terminated;
    _inf_value1->kind=(void*)sIntNode_kind;
    __result79__ = __result_obj__ = ((struct sNode*)(right_value122=_inf_value1));
    come_call_finalizer3(right_value118,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value119,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result79__;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
const int buf_size_63=128;
char* p2_65;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _while_condtional10;
_Bool _if_conditional54;
_Bool _if_conditional55;
char c_66;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _while_condtional11;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _while_condtional12;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value123;
void* right_value124;
struct sNode* _inf_value2;
struct sFloatNode* _inf_obj_value2;
void* right_value127;
struct sNode* __result82__;
_Bool _if_conditional74;
void* right_value128;
void* right_value129;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* right_value132;
struct sNode* __result85__;
void* right_value133;
void* right_value134;
struct sNode* _inf_value4;
struct sDoubleNode* _inf_obj_value4;
void* right_value137;
struct sNode* __result88__;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
unsigned long int lont_70;
int value2_71;
void* right_value138;
void* right_value139;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* right_value142;
struct sNode* __result91__;
unsigned long int lont_73;
int value_74;
void* right_value143;
void* right_value144;
struct sNode* _inf_value6;
struct sULongNode* _inf_obj_value6;
void* right_value147;
struct sNode* __result94__;
unsigned int value_76;
void* right_value148;
void* right_value149;
struct sNode* _inf_value7;
struct sUIntNode* _inf_obj_value7;
void* right_value152;
struct sNode* __result97__;
_Bool _if_conditional103;
_Bool _if_conditional104;
unsigned long long int value_78;
void* right_value153;
void* right_value154;
struct sNode* _inf_value8;
struct sLongNode* _inf_obj_value8;
void* right_value157;
struct sNode* __result100__;
_Bool _if_conditional110;
unsigned long long int value_80;
void* right_value158;
void* right_value159;
struct sNode* _inf_value9;
struct sULongNode* _inf_obj_value9;
void* right_value162;
struct sNode* __result103__;
unsigned long long int value_82;
void* right_value163;
void* right_value164;
struct sNode* _inf_value10;
struct sLongNode* _inf_obj_value10;
void* right_value167;
struct sNode* __result106__;
unsigned long int lont_84;
int value_85;
void* right_value168;
void* right_value169;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* right_value172;
struct sNode* __result109__;
struct sNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p2_65, 0, sizeof(char*));
memset(&c_66, 0, sizeof(char));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value137 = (void*)0;
memset(&lont_70, 0, sizeof(unsigned long int));
memset(&value2_71, 0, sizeof(int));
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value142 = (void*)0;
memset(&lont_73, 0, sizeof(unsigned long int));
memset(&value_74, 0, sizeof(int));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value147 = (void*)0;
memset(&value_76, 0, sizeof(unsigned int));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value152 = (void*)0;
memset(&value_78, 0, sizeof(unsigned long long int));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value157 = (void*)0;
memset(&value_80, 0, sizeof(unsigned long long int));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value162 = (void*)0;
memset(&value_82, 0, sizeof(unsigned long long int));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value167 = (void*)0;
memset(&lont_84, 0, sizeof(unsigned long int));
memset(&value_85, 0, sizeof(int));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value172 = (void*)0;
    # 238 "05number.c"
    # 239 "05number.c"
    char buf_64[128+1];
    memset(&buf_64, 0, sizeof(char)    *(128+1)    );
    # 240 "05number.c"
    p2_65=buf_64;
    # 247 "05number.c"
    # 242 "05number.c"
    if(minus) {
        # 243 "05number.c"
        *p2_65=45;
        # 244 "05number.c"
        p2_65++;
    }
    # 425 "05number.c"
    # 247 "05number.c"
    if(_if_conditional53=xisdigit(*info->p),    _if_conditional53) {
        # 261 "05number.c"
        while(_while_condtional10=xisdigit(*info->p)||*info->p==95,        _while_condtional10) {
            # 257 "05number.c"
            # 249 "05number.c"
            if(_if_conditional54=*info->p==95,            _if_conditional54) {
                # 250 "05number.c"
                info->p++;
            }
            else {
                # 253 "05number.c"
                *p2_65++=*info->p;
                # 254 "05number.c"
                info->p++;
            }
            # 261 "05number.c"
            # 257 "05number.c"
            if(_if_conditional55=p2_65-buf_64>=buf_size_63,            _if_conditional55) {
                # 258 "05number.c"
                printf("%s %d: overflow node of number\n",info->sname,info->sline);
                # 259 "05number.c"
                exit(5);
            }
        }
        # 262 "05number.c"
        *p2_65=0;
        # 263 "05number.c"
        skip_spaces_and_lf(info);
        # 265 "05number.c"
        c_66=*(info->p+1);
        # 419 "05number.c"
        # 267 "05number.c"
        if(_if_conditional56=*info->p==46&&xisdigit(c_66),        _if_conditional56) {
            # 268 "05number.c"
            *p2_65++=*info->p;
            # 275 "05number.c"
            # 270 "05number.c"
            if(_if_conditional57=p2_65-buf_64>=buf_size_63,            _if_conditional57) {
                # 271 "05number.c"
                printf("%s %d: overflow node of number",info->sname,info->sline);
                # 272 "05number.c"
                exit(11);
            }
            # 275 "05number.c"
            info->p++;
            # 276 "05number.c"
            skip_spaces_and_lf(info);
            # 293 "05number.c"
            while(_while_condtional11=xisdigit(*info->p)||*info->p==95,            _while_condtional11) {
                # 287 "05number.c"
                # 279 "05number.c"
                if(_if_conditional58=*info->p==95,                _if_conditional58) {
                    # 280 "05number.c"
                    info->p++;
                }
                else {
                    # 283 "05number.c"
                    *p2_65++=*info->p;
                    # 284 "05number.c"
                    info->p++;
                }
                # 291 "05number.c"
                # 287 "05number.c"
                if(_if_conditional59=p2_65-buf_64>=buf_size_63,                _if_conditional59) {
                    # 288 "05number.c"
                    err_msg(info,"overflow node of number");
                    # 289 "05number.c"
                    exit(2);
                }
            }
            # 340 "05number.c"
            # 293 "05number.c"
            if(_if_conditional60=*info->p==101,            _if_conditional60) {
                # 294 "05number.c"
                *p2_65++=*info->p;
                # 295 "05number.c"
                info->p++;
                # 302 "05number.c"
                # 297 "05number.c"
                if(_if_conditional61=p2_65-buf_64>=buf_size_63,                _if_conditional61) {
                    # 298 "05number.c"
                    err_msg(info,"overflow node of number");
                    # 299 "05number.c"
                    exit(2);
                }
                # 325 "05number.c"
                # 302 "05number.c"
                if(_if_conditional62=*info->p==43,                _if_conditional62) {
                    # 303 "05number.c"
                    *p2_65++=*info->p;
                    # 304 "05number.c"
                    info->p++;
                    # 310 "05number.c"
                    # 306 "05number.c"
                    if(_if_conditional63=p2_65-buf_64>=buf_size_63,                    _if_conditional63) {
                        # 307 "05number.c"
                        err_msg(info,"overflow node of number");
                        # 308 "05number.c"
                        exit(2);
                    }
                }
                else {
                    # 325 "05number.c"
                    # 311 "05number.c"
                    if(_if_conditional64=*info->p==45,                    _if_conditional64) {
                        # 312 "05number.c"
                        *p2_65++=*info->p;
                        # 313 "05number.c"
                        info->p++;
                        # 319 "05number.c"
                        # 315 "05number.c"
                        if(_if_conditional65=p2_65-buf_64>=buf_size_63,                        _if_conditional65) {
                            # 316 "05number.c"
                            err_msg(info,"overflow node of number");
                            # 317 "05number.c"
                            exit(2);
                        }
                    }
                    else {
                        # 321 "05number.c"
                        err_msg(info,"invalid float value");
                        # 322 "05number.c"
                        exit(2);
                    }
                }
                # 338 "05number.c"
                while(_while_condtional12=xisdigit(*info->p)||*info->p==95,                _while_condtional12) {
                    # 334 "05number.c"
                    # 326 "05number.c"
                    if(_if_conditional66=*info->p==95,                    _if_conditional66) {
                        # 327 "05number.c"
                        info->p++;
                    }
                    else {
                        # 330 "05number.c"
                        *p2_65++=*info->p;
                        # 331 "05number.c"
                        info->p++;
                    }
                    # 338 "05number.c"
                    # 334 "05number.c"
                    if(_if_conditional67=p2_65-buf_64>=buf_size_63,                    _if_conditional67) {
                        # 335 "05number.c"
                        err_msg(info,"overflow node of number");
                        # 336 "05number.c"
                        exit(2);
                    }
                }
            }
            # 340 "05number.c"
            *p2_65=0;
            # 341 "05number.c"
            skip_spaces_and_lf(info);
            # 358 "05number.c"
            # 343 "05number.c"
            if(_if_conditional68=*info->p==102||*info->p==70,            _if_conditional68) {
                # 344 "05number.c"
                info->p++;
                # 345 "05number.c"
                skip_spaces_and_lf(info);
                # 347 "05number.c"
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 347, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sFloatNode*)(right_value124=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value123=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "05number.c", 347, "sFloatNode")))),strtof(buf_64,((void*)0)),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFloatNode_finalize;
                _inf_value2->clone=(void*)sFloatNode_clone;
                _inf_value2->compile=(void*)sFloatNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sFloatNode_terminated;
                _inf_value2->kind=(void*)sFloatNode_kind;
                __result82__ = __result_obj__ = ((struct sNode*)(right_value127=_inf_value2));
                come_call_finalizer3(right_value123,sFloatNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value124,sFloatNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value127) { right_value127 = come_decrement_ref_count2(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result82__;
            }
            else {
                # 358 "05number.c"
                # 349 "05number.c"
                if(_if_conditional74=*info->p==108||*info->p==76,                _if_conditional74) {
                    # 350 "05number.c"
                    info->p++;
                    # 351 "05number.c"
                    skip_spaces_and_lf(info);
                    # 353 "05number.c"
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 353, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sDoubleNode*)(right_value129=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value128=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05number.c", 353, "sDoubleNode")))),strtod(buf_64,((void*)0)),info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sDoubleNode_finalize;
                    _inf_value3->clone=(void*)sDoubleNode_clone;
                    _inf_value3->compile=(void*)sDoubleNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sDoubleNode_terminated;
                    _inf_value3->kind=(void*)sDoubleNode_kind;
                    __result85__ = __result_obj__ = ((struct sNode*)(right_value132=_inf_value3));
                    come_call_finalizer3(right_value128,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value129,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result85__;
                }
                else {
                    # 356 "05number.c"
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 356, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sDoubleNode*)(right_value134=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value133=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "05number.c", 356, "sDoubleNode")))),strtod(buf_64,((void*)0)),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sDoubleNode_finalize;
                    _inf_value4->clone=(void*)sDoubleNode_clone;
                    _inf_value4->compile=(void*)sDoubleNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sDoubleNode_terminated;
                    _inf_value4->kind=(void*)sDoubleNode_kind;
                    __result88__ = __result_obj__ = ((struct sNode*)(right_value137=_inf_value4));
                    come_call_finalizer3(right_value133,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value134,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value137) { right_value137 = come_decrement_ref_count2(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result88__;
                }
            }
        }
        else {
            # 419 "05number.c"
            # 359 "05number.c"
            if(_if_conditional85=*info->p==117||*info->p==85,            _if_conditional85) {
                # 361 "05number.c"
                info->p++;
                # 362 "05number.c"
                skip_spaces_and_lf(info);
                # 387 "05number.c"
                # 364 "05number.c"
                if(_if_conditional86=*info->p==76||*info->p==108,                _if_conditional86) {
                    # 366 "05number.c"
                    info->p++;
                    # 367 "05number.c"
                    skip_spaces_and_lf(info);
                    # 382 "05number.c"
                    # 369 "05number.c"
                    if(_if_conditional87=*info->p==76||*info->p==108,                    _if_conditional87) {
                        # 371 "05number.c"
                        info->p++;
                        # 372 "05number.c"
                        skip_spaces_and_lf(info);
                        # 374 "05number.c"
                        # 374 "05number.c"
                        value2_71=strtoull(buf_64,((void*)0),0);
                        # 376 "05number.c"
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 376, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sULongNode*)(right_value139=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value138=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 376, "sULongNode")))),value2_71,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sULongNode_finalize;
                        _inf_value5->clone=(void*)sULongNode_clone;
                        _inf_value5->compile=(void*)sULongNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sULongNode_terminated;
                        _inf_value5->kind=(void*)sULongNode_kind;
                        __result91__ = __result_obj__ = ((struct sNode*)(right_value142=_inf_value5));
                        come_call_finalizer3(right_value138,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value139,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result91__;
                    }
                    else {
                        # 379 "05number.c"
                        # 379 "05number.c"
                        value_74=strtoull(buf_64,((void*)0),0);
                        # 380 "05number.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 380, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sULongNode*)(right_value144=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value143=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 380, "sULongNode")))),value_74,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sULongNode_finalize;
                        _inf_value6->clone=(void*)sULongNode_clone;
                        _inf_value6->compile=(void*)sULongNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sULongNode_terminated;
                        _inf_value6->kind=(void*)sULongNode_kind;
                        __result94__ = __result_obj__ = ((struct sNode*)(right_value147=_inf_value6));
                        come_call_finalizer3(right_value143,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value144,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value147) { right_value147 = come_decrement_ref_count2(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result94__;
                    }
                }
                else {
                    # 384 "05number.c"
                    value_76=strtoul(buf_64,((void*)0),0);
                    # 385 "05number.c"
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 385, "struct sNode");
                    _inf_obj_value7=come_increment_ref_count(((struct sUIntNode*)(right_value149=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value148=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05number.c", 385, "sUIntNode")))),value_76,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sUIntNode_finalize;
                    _inf_value7->clone=(void*)sUIntNode_clone;
                    _inf_value7->compile=(void*)sUIntNode_compile;
                    _inf_value7->sline=(void*)sNodeBase_sline;
                    _inf_value7->sname=(void*)sNodeBase_sname;
                    _inf_value7->terminated=(void*)sUIntNode_terminated;
                    _inf_value7->kind=(void*)sUIntNode_kind;
                    __result97__ = __result_obj__ = ((struct sNode*)(right_value152=_inf_value7));
                    come_call_finalizer3(right_value148,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value149,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result97__;
                }
            }
            else {
                # 419 "05number.c"
                # 388 "05number.c"
                if(_if_conditional103=*info->p==76||*info->p==108,                _if_conditional103) {
                    # 389 "05number.c"
                    info->p++;
                    # 390 "05number.c"
                    skip_spaces_and_lf(info);
                    # 414 "05number.c"
                    # 392 "05number.c"
                    if(_if_conditional104=*info->p==76||*info->p==108,                    _if_conditional104) {
                        # 394 "05number.c"
                        info->p++;
                        # 395 "05number.c"
                        skip_spaces_and_lf(info);
                        # 397 "05number.c"
                        value_78=strtoull(buf_64,((void*)0),0);
                        # 399 "05number.c"
                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 399, "struct sNode");
                        _inf_obj_value8=come_increment_ref_count(((struct sLongNode*)(right_value154=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value153=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 399, "sLongNode")))),value_78,info))));
                        _inf_value8->_protocol_obj=_inf_obj_value8;
                        _inf_value8->finalize=(void*)sLongNode_finalize;
                        _inf_value8->clone=(void*)sLongNode_clone;
                        _inf_value8->compile=(void*)sLongNode_compile;
                        _inf_value8->sline=(void*)sNodeBase_sline;
                        _inf_value8->sname=(void*)sNodeBase_sname;
                        _inf_value8->terminated=(void*)sLongNode_terminated;
                        _inf_value8->kind=(void*)sLongNode_kind;
                        __result100__ = __result_obj__ = ((struct sNode*)(right_value157=_inf_value8));
                        come_call_finalizer3(right_value153,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value154,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result100__;
                    }
                    else {
                        # 414 "05number.c"
                        # 401 "05number.c"
                        if(_if_conditional110=*info->p==85||*info->p==117,                        _if_conditional110) {
                            # 403 "05number.c"
                            info->p++;
                            # 404 "05number.c"
                            skip_spaces_and_lf(info);
                            # 406 "05number.c"
                            value_80=strtoull(buf_64,((void*)0),0);
                            # 408 "05number.c"
                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 408, "struct sNode");
                            _inf_obj_value9=come_increment_ref_count(((struct sULongNode*)(right_value159=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value158=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 408, "sULongNode")))),value_80,info))));
                            _inf_value9->_protocol_obj=_inf_obj_value9;
                            _inf_value9->finalize=(void*)sULongNode_finalize;
                            _inf_value9->clone=(void*)sULongNode_clone;
                            _inf_value9->compile=(void*)sULongNode_compile;
                            _inf_value9->sline=(void*)sNodeBase_sline;
                            _inf_value9->sname=(void*)sNodeBase_sname;
                            _inf_value9->terminated=(void*)sULongNode_terminated;
                            _inf_value9->kind=(void*)sULongNode_kind;
                            __result103__ = __result_obj__ = ((struct sNode*)(right_value162=_inf_value9));
                            come_call_finalizer3(right_value158,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value159,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result103__;
                        }
                        else {
                            # 411 "05number.c"
                            value_82=strtoull(buf_64,((void*)0),0);
                            # 412 "05number.c"
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 412, "struct sNode");
                            _inf_obj_value10=come_increment_ref_count(((struct sLongNode*)(right_value164=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value163=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 412, "sLongNode")))),value_82,info))));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sLongNode_finalize;
                            _inf_value10->clone=(void*)sLongNode_clone;
                            _inf_value10->compile=(void*)sLongNode_compile;
                            _inf_value10->sline=(void*)sNodeBase_sline;
                            _inf_value10->sname=(void*)sNodeBase_sname;
                            _inf_value10->terminated=(void*)sLongNode_terminated;
                            _inf_value10->kind=(void*)sLongNode_kind;
                            __result106__ = __result_obj__ = ((struct sNode*)(right_value167=_inf_value10));
                            come_call_finalizer3(right_value163,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value164,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result106__;
                        }
                    }
                }
                else {
                    # 416 "05number.c"
                    # 416 "05number.c"
                    value_85=strtoll(buf_64,((void*)0),0);
                    # 417 "05number.c"
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 417, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sIntNode*)(right_value169=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value168=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 417, "sIntNode")))),value_85,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sIntNode_finalize;
                    _inf_value11->clone=(void*)sIntNode_clone;
                    _inf_value11->compile=(void*)sIntNode_compile;
                    _inf_value11->sline=(void*)sNodeBase_sline;
                    _inf_value11->sname=(void*)sNodeBase_sname;
                    _inf_value11->terminated=(void*)sIntNode_terminated;
                    _inf_value11->kind=(void*)sIntNode_kind;
                    __result109__ = __result_obj__ = ((struct sNode*)(right_value172=_inf_value11));
                    come_call_finalizer3(right_value168,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value169,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result109__;
                }
            }
        }
    }
    else {
        # 421 "05number.c"
        err_msg(info,"require digits after + or -");
        # 422 "05number.c"
        exit(2);
    }
    # 425 "05number.c"
    __result110__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result110__;
}

static void sFloatNode_finalize(struct sFloatNode* self){
void* __result_obj__;
_Bool _if_conditional69;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sFloatNode_finalize"
                    # 0 "sFloatNode_finalize"
                    if(_if_conditional69=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional69) {
                        # 0 "sFloatNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
void* __result_obj__;
_Bool _if_conditional70;
struct sFloatNode* __result80__;
void* right_value125;
struct sFloatNode* result_67;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value126;
char* __dec_obj34;
_Bool _if_conditional73;
struct sFloatNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_67, 0, sizeof(struct sFloatNode*));
right_value126 = (void*)0;
                    # 3 "sFloatNode_clone"
                    # 2 "sFloatNode_clone"
                    if(_if_conditional70=self==(void*)0,                    _if_conditional70) {
                        # 2 "sFloatNode_clone"
                        __result80__ = __result_obj__ = (void*)0;
                        return __result80__;
                    }
                    # 3 "sFloatNode_clone"
                    result_67=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(right_value125=(struct sFloatNode*)come_calloc(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3, "sFloatNode"))));
                    come_call_finalizer3(right_value125,sFloatNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sFloatNode_clone"
                    # 4 "sFloatNode_clone"
                    if(_if_conditional71=self!=((void*)0),                    _if_conditional71) {
                        # 4 "sFloatNode_clone"
                        result_67->sline=self->sline;
                    }
                    # 6 "sFloatNode_clone"
                    # 5 "sFloatNode_clone"
                    if(_if_conditional72=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional72) {
                        # 5 "sFloatNode_clone"
                        __dec_obj34=result_67->sname;
                        result_67->sname=(char*)come_increment_ref_count(((char*)(right_value126=string_clone(self->sname))));
                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sFloatNode_clone"
                    # 6 "sFloatNode_clone"
                    if(_if_conditional73=self!=((void*)0),                    _if_conditional73) {
                        # 6 "sFloatNode_clone"
                        result_67->value=self->value;
                    }
                    # 7 "sFloatNode_clone"
                    __result81__ = __result_obj__ = result_67;
                    come_call_finalizer3(result_67,sFloatNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                    come_call_finalizer3(result_67,sFloatNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
void* __result_obj__;
_Bool _if_conditional80;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sDoubleNode_finalize"
                        # 0 "sDoubleNode_finalize"
                        if(_if_conditional80=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional80) {
                            # 0 "sDoubleNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
void* __result_obj__;
_Bool _if_conditional81;
struct sDoubleNode* __result86__;
void* right_value135;
struct sDoubleNode* result_69;
_Bool _if_conditional82;
_Bool _if_conditional83;
void* right_value136;
char* __dec_obj36;
_Bool _if_conditional84;
struct sDoubleNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&result_69, 0, sizeof(struct sDoubleNode*));
right_value136 = (void*)0;
                        # 3 "sDoubleNode_clone"
                        # 2 "sDoubleNode_clone"
                        if(_if_conditional81=self==(void*)0,                        _if_conditional81) {
                            # 2 "sDoubleNode_clone"
                            __result86__ = __result_obj__ = (void*)0;
                            return __result86__;
                        }
                        # 3 "sDoubleNode_clone"
                        result_69=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(right_value135=(struct sDoubleNode*)come_calloc(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3, "sDoubleNode"))));
                        come_call_finalizer3(right_value135,sDoubleNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sDoubleNode_clone"
                        # 4 "sDoubleNode_clone"
                        if(_if_conditional82=self!=((void*)0),                        _if_conditional82) {
                            # 4 "sDoubleNode_clone"
                            result_69->sline=self->sline;
                        }
                        # 6 "sDoubleNode_clone"
                        # 5 "sDoubleNode_clone"
                        if(_if_conditional83=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional83) {
                            # 5 "sDoubleNode_clone"
                            __dec_obj36=result_69->sname;
                            result_69->sname=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(self->sname))));
                            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sDoubleNode_clone"
                        # 6 "sDoubleNode_clone"
                        if(_if_conditional84=self!=((void*)0),                        _if_conditional84) {
                            # 6 "sDoubleNode_clone"
                            result_69->value=self->value;
                        }
                        # 7 "sDoubleNode_clone"
                        __result87__ = __result_obj__ = result_69;
                        come_call_finalizer3(result_69,sDoubleNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result87__;
                        come_call_finalizer3(result_69,sDoubleNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
void* __result_obj__;
int buf_size_87;
char* p_89;
_Bool _while_condtional13;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
unsigned long long int value_90;
_Bool _if_conditional131;
void* right_value173;
void* right_value174;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* right_value177;
struct sNode* __result113__;
void* right_value178;
void* right_value179;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* right_value182;
struct sNode* __result116__;
unsigned long long int value_93;
_Bool _if_conditional142;
void* right_value183;
void* right_value184;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* right_value187;
struct sNode* __result119__;
void* right_value188;
void* right_value189;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* right_value192;
struct sNode* __result122__;
unsigned int value_96;
_Bool _if_conditional153;
void* right_value193;
void* right_value194;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* right_value197;
struct sNode* __result125__;
void* right_value198;
void* right_value199;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* right_value202;
struct sNode* __result128__;
_Bool _if_conditional164;
_Bool _if_conditional165;
unsigned long long int value_99;
_Bool _if_conditional166;
void* right_value203;
void* right_value204;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* right_value207;
struct sNode* __result131__;
void* right_value208;
void* right_value209;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* right_value212;
struct sNode* __result134__;
_Bool _if_conditional177;
unsigned long long int value_102;
_Bool _if_conditional178;
void* right_value213;
void* right_value214;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* right_value217;
struct sNode* __result137__;
void* right_value218;
void* right_value219;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* right_value222;
struct sNode* __result140__;
unsigned long long int value_105;
_Bool _if_conditional189;
void* right_value223;
void* right_value224;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* right_value227;
struct sNode* __result143__;
void* right_value228;
void* right_value229;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* right_value232;
struct sNode* __result146__;
unsigned long long int value_108;
_Bool _if_conditional200;
void* right_value233;
void* right_value234;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* right_value237;
struct sNode* __result149__;
void* right_value238;
void* right_value239;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* right_value242;
struct sNode* __result152__;
struct sNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_87, 0, sizeof(int));
memset(&p_89, 0, sizeof(char*));
memset(&value_90, 0, sizeof(unsigned long long int));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value182 = (void*)0;
memset(&value_93, 0, sizeof(unsigned long long int));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value192 = (void*)0;
memset(&value_96, 0, sizeof(unsigned int));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value202 = (void*)0;
memset(&value_99, 0, sizeof(unsigned long long int));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value212 = (void*)0;
memset(&value_102, 0, sizeof(unsigned long long int));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value222 = (void*)0;
memset(&value_105, 0, sizeof(unsigned long long int));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value232 = (void*)0;
memset(&value_108, 0, sizeof(unsigned long long int));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value242 = (void*)0;
    # 430 "05number.c"
    buf_size_87=128;
    # 431 "05number.c"
    char buf_88[128+1];
    memset(&buf_88, 0, sizeof(char)    *(128+1)    );
    # 432 "05number.c"
    p_89=buf_88;
    # 434 "05number.c"
    *p_89++=48;
    # 435 "05number.c"
    *p_89++=120;
    # 451 "05number.c"
    while(_while_condtional13=(*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95,    _while_condtional13) {
        # 447 "05number.c"
        # 439 "05number.c"
        if(_if_conditional126=*info->p==95,        _if_conditional126) {
            # 440 "05number.c"
            info->p++;
        }
        else {
            # 443 "05number.c"
            *p_89++=*info->p;
            # 444 "05number.c"
            info->p++;
        }
        # 451 "05number.c"
        # 447 "05number.c"
        if(_if_conditional127=p_89-buf_88>=buf_size_87-1,        _if_conditional127) {
            # 448 "05number.c"
            err_msg(info,"overflow node of number");
            # 449 "05number.c"
            exit(2);
        }
    }
    # 452 "05number.c"
    *p_89=0;
    # 453 "05number.c"
    skip_spaces_and_lf(info);
    # 551 "05number.c"
    # 455 "05number.c"
    if(_if_conditional128=*info->p==117||*info->p==85,    _if_conditional128) {
        # 457 "05number.c"
        info->p++;
        # 458 "05number.c"
        skip_spaces_and_lf(info);
        # 500 "05number.c"
        # 460 "05number.c"
        if(_if_conditional129=*info->p==76||*info->p==108,        _if_conditional129) {
            # 462 "05number.c"
            info->p++;
            # 463 "05number.c"
            skip_spaces_and_lf(info);
            # 489 "05number.c"
            # 465 "05number.c"
            if(_if_conditional130=*info->p==76||*info->p==108,            _if_conditional130) {
                # 467 "05number.c"
                info->p++;
                # 468 "05number.c"
                skip_spaces_and_lf(info);
                # 470 "05number.c"
                value_90=strtoull(buf_88,((void*)0),0);
                # 478 "05number.c"
                # 472 "05number.c"
                if(minus) {
                    # 473 "05number.c"
                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 473, "struct sNode");
                    _inf_obj_value12=come_increment_ref_count(((struct sULongNode*)(right_value174=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value173=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 473, "sULongNode")))),-value_90,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sNodeBase_sline;
                    _inf_value12->sname=(void*)sNodeBase_sname;
                    _inf_value12->terminated=(void*)sULongNode_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result113__ = __result_obj__ = ((struct sNode*)(right_value177=_inf_value12));
                    come_call_finalizer3(right_value173,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value174,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result113__;
                }
                else {
                    # 476 "05number.c"
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 476, "struct sNode");
                    _inf_obj_value13=come_increment_ref_count(((struct sULongNode*)(right_value179=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value178=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 476, "sULongNode")))),value_90,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sNodeBase_sline;
                    _inf_value13->sname=(void*)sNodeBase_sname;
                    _inf_value13->terminated=(void*)sULongNode_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result116__ = __result_obj__ = ((struct sNode*)(right_value182=_inf_value13));
                    come_call_finalizer3(right_value178,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value179,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result116__;
                }
            }
            else {
                # 480 "05number.c"
                value_93=strtoull(buf_88,((void*)0),0);
                # 488 "05number.c"
                # 482 "05number.c"
                if(minus) {
                    # 483 "05number.c"
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 483, "struct sNode");
                    _inf_obj_value14=come_increment_ref_count(((struct sULongNode*)(right_value184=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value183=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 483, "sULongNode")))),-value_93,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sNodeBase_sline;
                    _inf_value14->sname=(void*)sNodeBase_sname;
                    _inf_value14->terminated=(void*)sULongNode_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result119__ = __result_obj__ = ((struct sNode*)(right_value187=_inf_value14));
                    come_call_finalizer3(right_value183,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value184,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result119__;
                }
                else {
                    # 486 "05number.c"
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 486, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sULongNode*)(right_value189=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value188=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 486, "sULongNode")))),value_93,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sNodeBase_sline;
                    _inf_value15->sname=(void*)sNodeBase_sname;
                    _inf_value15->terminated=(void*)sULongNode_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result122__ = __result_obj__ = ((struct sNode*)(right_value192=_inf_value15));
                    come_call_finalizer3(right_value188,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value189,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result122__;
                }
            }
        }
        else {
            # 491 "05number.c"
            value_96=strtoull(buf_88,((void*)0),0);
            # 499 "05number.c"
            # 493 "05number.c"
            if(minus) {
                # 494 "05number.c"
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 494, "struct sNode");
                _inf_obj_value16=come_increment_ref_count(((struct sUIntNode*)(right_value194=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value193=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05number.c", 494, "sUIntNode")))),-value_96,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sNodeBase_sline;
                _inf_value16->sname=(void*)sNodeBase_sname;
                _inf_value16->terminated=(void*)sUIntNode_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result125__ = __result_obj__ = ((struct sNode*)(right_value197=_inf_value16));
                come_call_finalizer3(right_value193,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value194,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value197) { right_value197 = come_decrement_ref_count2(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result125__;
            }
            else {
                # 497 "05number.c"
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 497, "struct sNode");
                _inf_obj_value17=come_increment_ref_count(((struct sUIntNode*)(right_value199=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value198=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05number.c", 497, "sUIntNode")))),value_96,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sNodeBase_sline;
                _inf_value17->sname=(void*)sNodeBase_sname;
                _inf_value17->terminated=(void*)sUIntNode_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result128__ = __result_obj__ = ((struct sNode*)(right_value202=_inf_value17));
                come_call_finalizer3(right_value198,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value199,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value202) { right_value202 = come_decrement_ref_count2(right_value202, ((struct sNode*)right_value202)->finalize, ((struct sNode*)right_value202)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result128__;
            }
        }
    }
    else {
        # 551 "05number.c"
        # 501 "05number.c"
        if(_if_conditional164=*info->p==76||*info->p==108,        _if_conditional164) {
            # 502 "05number.c"
            info->p++;
            # 503 "05number.c"
            skip_spaces_and_lf(info);
            # 540 "05number.c"
            # 505 "05number.c"
            if(_if_conditional165=*info->p==76||*info->p==108,            _if_conditional165) {
                # 507 "05number.c"
                info->p++;
                # 508 "05number.c"
                skip_spaces_and_lf(info);
                # 510 "05number.c"
                value_99=strtoull(buf_88,((void*)0),0);
                # 517 "05number.c"
                # 511 "05number.c"
                if(minus) {
                    # 512 "05number.c"
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 512, "struct sNode");
                    _inf_obj_value18=come_increment_ref_count(((struct sLongNode*)(right_value204=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value203=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 512, "sLongNode")))),-value_99,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sLongNode_finalize;
                    _inf_value18->clone=(void*)sLongNode_clone;
                    _inf_value18->compile=(void*)sLongNode_compile;
                    _inf_value18->sline=(void*)sNodeBase_sline;
                    _inf_value18->sname=(void*)sNodeBase_sname;
                    _inf_value18->terminated=(void*)sLongNode_terminated;
                    _inf_value18->kind=(void*)sLongNode_kind;
                    __result131__ = __result_obj__ = ((struct sNode*)(right_value207=_inf_value18));
                    come_call_finalizer3(right_value203,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value204,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value207) { right_value207 = come_decrement_ref_count2(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result131__;
                }
                else {
                    # 515 "05number.c"
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 515, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sLongNode*)(right_value209=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value208=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 515, "sLongNode")))),value_99,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sLongNode_finalize;
                    _inf_value19->clone=(void*)sLongNode_clone;
                    _inf_value19->compile=(void*)sLongNode_compile;
                    _inf_value19->sline=(void*)sNodeBase_sline;
                    _inf_value19->sname=(void*)sNodeBase_sname;
                    _inf_value19->terminated=(void*)sLongNode_terminated;
                    _inf_value19->kind=(void*)sLongNode_kind;
                    __result134__ = __result_obj__ = ((struct sNode*)(right_value212=_inf_value19));
                    come_call_finalizer3(right_value208,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value209,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result134__;
                }
            }
            else {
                # 540 "05number.c"
                # 518 "05number.c"
                if(_if_conditional177=*info->p==85||*info->p==117,                _if_conditional177) {
                    # 520 "05number.c"
                    info->p++;
                    # 521 "05number.c"
                    skip_spaces_and_lf(info);
                    # 523 "05number.c"
                    value_102=strtoull(buf_88,((void*)0),0);
                    # 530 "05number.c"
                    # 524 "05number.c"
                    if(minus) {
                        # 525 "05number.c"
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 525, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sULongNode*)(right_value214=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value213=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 525, "sULongNode")))),-value_102,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sULongNode_finalize;
                        _inf_value20->clone=(void*)sULongNode_clone;
                        _inf_value20->compile=(void*)sULongNode_compile;
                        _inf_value20->sline=(void*)sNodeBase_sline;
                        _inf_value20->sname=(void*)sNodeBase_sname;
                        _inf_value20->terminated=(void*)sULongNode_terminated;
                        _inf_value20->kind=(void*)sULongNode_kind;
                        __result137__ = __result_obj__ = ((struct sNode*)(right_value217=_inf_value20));
                        come_call_finalizer3(right_value213,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value214,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result137__;
                    }
                    else {
                        # 528 "05number.c"
                        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 528, "struct sNode");
                        _inf_obj_value21=come_increment_ref_count(((struct sULongNode*)(right_value219=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value218=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 528, "sULongNode")))),value_102,info))));
                        _inf_value21->_protocol_obj=_inf_obj_value21;
                        _inf_value21->finalize=(void*)sULongNode_finalize;
                        _inf_value21->clone=(void*)sULongNode_clone;
                        _inf_value21->compile=(void*)sULongNode_compile;
                        _inf_value21->sline=(void*)sNodeBase_sline;
                        _inf_value21->sname=(void*)sNodeBase_sname;
                        _inf_value21->terminated=(void*)sULongNode_terminated;
                        _inf_value21->kind=(void*)sULongNode_kind;
                        __result140__ = __result_obj__ = ((struct sNode*)(right_value222=_inf_value21));
                        come_call_finalizer3(right_value218,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value219,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result140__;
                    }
                }
                else {
                    # 532 "05number.c"
                    value_105=strtoull(buf_88,((void*)0),0);
                    # 539 "05number.c"
                    # 533 "05number.c"
                    if(minus) {
                        # 534 "05number.c"
                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 534, "struct sNode");
                        _inf_obj_value22=come_increment_ref_count(((struct sLongNode*)(right_value224=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value223=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 534, "sLongNode")))),-value_105,info))));
                        _inf_value22->_protocol_obj=_inf_obj_value22;
                        _inf_value22->finalize=(void*)sLongNode_finalize;
                        _inf_value22->clone=(void*)sLongNode_clone;
                        _inf_value22->compile=(void*)sLongNode_compile;
                        _inf_value22->sline=(void*)sNodeBase_sline;
                        _inf_value22->sname=(void*)sNodeBase_sname;
                        _inf_value22->terminated=(void*)sLongNode_terminated;
                        _inf_value22->kind=(void*)sLongNode_kind;
                        __result143__ = __result_obj__ = ((struct sNode*)(right_value227=_inf_value22));
                        come_call_finalizer3(right_value223,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value224,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value227) { right_value227 = come_decrement_ref_count2(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result143__;
                    }
                    else {
                        # 537 "05number.c"
                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 537, "struct sNode");
                        _inf_obj_value23=come_increment_ref_count(((struct sLongNode*)(right_value229=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value228=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 537, "sLongNode")))),value_105,info))));
                        _inf_value23->_protocol_obj=_inf_obj_value23;
                        _inf_value23->finalize=(void*)sLongNode_finalize;
                        _inf_value23->clone=(void*)sLongNode_clone;
                        _inf_value23->compile=(void*)sLongNode_compile;
                        _inf_value23->sline=(void*)sNodeBase_sline;
                        _inf_value23->sname=(void*)sNodeBase_sname;
                        _inf_value23->terminated=(void*)sLongNode_terminated;
                        _inf_value23->kind=(void*)sLongNode_kind;
                        __result146__ = __result_obj__ = ((struct sNode*)(right_value232=_inf_value23));
                        come_call_finalizer3(right_value228,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value229,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result146__;
                    }
                }
            }
        }
        else {
            # 542 "05number.c"
            value_108=strtoll(buf_88,((void*)0),0);
            # 549 "05number.c"
            # 543 "05number.c"
            if(minus) {
                # 544 "05number.c"
                _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 544, "struct sNode");
                _inf_obj_value24=come_increment_ref_count(((struct sIntNode*)(right_value234=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value233=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 544, "sIntNode")))),-value_108,info))));
                _inf_value24->_protocol_obj=_inf_obj_value24;
                _inf_value24->finalize=(void*)sIntNode_finalize;
                _inf_value24->clone=(void*)sIntNode_clone;
                _inf_value24->compile=(void*)sIntNode_compile;
                _inf_value24->sline=(void*)sNodeBase_sline;
                _inf_value24->sname=(void*)sNodeBase_sname;
                _inf_value24->terminated=(void*)sIntNode_terminated;
                _inf_value24->kind=(void*)sIntNode_kind;
                __result149__ = __result_obj__ = ((struct sNode*)(right_value237=_inf_value24));
                come_call_finalizer3(right_value233,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value234,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value237) { right_value237 = come_decrement_ref_count2(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result149__;
            }
            else {
                # 547 "05number.c"
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 547, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sIntNode*)(right_value239=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value238=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 547, "sIntNode")))),value_108,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sIntNode_finalize;
                _inf_value25->clone=(void*)sIntNode_clone;
                _inf_value25->compile=(void*)sIntNode_compile;
                _inf_value25->sline=(void*)sNodeBase_sline;
                _inf_value25->sname=(void*)sNodeBase_sname;
                _inf_value25->terminated=(void*)sIntNode_terminated;
                _inf_value25->kind=(void*)sIntNode_kind;
                __result152__ = __result_obj__ = ((struct sNode*)(right_value242=_inf_value25));
                come_call_finalizer3(right_value238,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value239,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value242) { right_value242 = come_decrement_ref_count2(right_value242, ((struct sNode*)right_value242)->finalize, ((struct sNode*)right_value242)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result152__;
            }
        }
    }
    # 551 "05number.c"
    __result153__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result153__;
}

struct sNode* get_oct_number(struct sInfo* info){
void* __result_obj__;
int buf_size_111;
char* p_113;
_Bool _while_condtional14;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
unsigned long long int value_114;
void* right_value243;
void* right_value244;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* right_value247;
struct sNode* __result156__;
unsigned long long int value_116;
void* right_value248;
void* right_value249;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* right_value252;
struct sNode* __result159__;
unsigned int value_118;
void* right_value253;
void* right_value254;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* right_value257;
struct sNode* __result162__;
_Bool _if_conditional231;
_Bool _if_conditional232;
unsigned long long int value_120;
void* right_value258;
void* right_value259;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* right_value262;
struct sNode* __result165__;
_Bool _if_conditional238;
unsigned long long int value_122;
void* right_value263;
void* right_value264;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* right_value267;
struct sNode* __result168__;
unsigned long long int value_124;
void* right_value268;
void* right_value269;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* right_value272;
struct sNode* __result171__;
unsigned long long int value_126;
void* right_value273;
void* right_value274;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* right_value277;
struct sNode* __result174__;
struct sNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_size_111, 0, sizeof(int));
memset(&p_113, 0, sizeof(char*));
memset(&value_114, 0, sizeof(unsigned long long int));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value247 = (void*)0;
memset(&value_116, 0, sizeof(unsigned long long int));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value252 = (void*)0;
memset(&value_118, 0, sizeof(unsigned int));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value257 = (void*)0;
memset(&value_120, 0, sizeof(unsigned long long int));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value262 = (void*)0;
memset(&value_122, 0, sizeof(unsigned long long int));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value267 = (void*)0;
memset(&value_124, 0, sizeof(unsigned long long int));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value272 = (void*)0;
memset(&value_126, 0, sizeof(unsigned long long int));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value277 = (void*)0;
    # 556 "05number.c"
    buf_size_111=128;
    # 557 "05number.c"
    char buf_112[128+1];
    memset(&buf_112, 0, sizeof(char)    *(128+1)    );
    # 558 "05number.c"
    p_113=buf_112;
    # 560 "05number.c"
    *p_113++=48;
    # 576 "05number.c"
    while(_while_condtional14=(*info->p>=48&&*info->p<=55)||*info->p==95,    _while_condtional14) {
        # 572 "05number.c"
        # 563 "05number.c"
        if(_if_conditional211=*info->p==95,        _if_conditional211) {
            # 564 "05number.c"
            info->p++;
        }
        else {
            # 567 "05number.c"
            *p_113=*info->p;
            # 568 "05number.c"
            p_113++;
            # 569 "05number.c"
            info->p++;
        }
        # 576 "05number.c"
        # 572 "05number.c"
        if(_if_conditional212=p_113-buf_112>=buf_size_111-1,        _if_conditional212) {
            # 573 "05number.c"
            err_msg(info,"overflow node of number");
            # 574 "05number.c"
            exit(2);
        }
    }
    # 578 "05number.c"
    *p_113=0;
    # 579 "05number.c"
    skip_spaces_and_lf(info);
    # 640 "05number.c"
    # 581 "05number.c"
    if(_if_conditional213=*info->p==117||*info->p==85,    _if_conditional213) {
        # 583 "05number.c"
        info->p++;
        # 584 "05number.c"
        skip_spaces_and_lf(info);
        # 609 "05number.c"
        # 586 "05number.c"
        if(_if_conditional214=*info->p==76||*info->p==108,        _if_conditional214) {
            # 588 "05number.c"
            info->p++;
            # 589 "05number.c"
            skip_spaces_and_lf(info);
            # 604 "05number.c"
            # 591 "05number.c"
            if(_if_conditional215=*info->p==76||*info->p==108,            _if_conditional215) {
                # 593 "05number.c"
                info->p++;
                # 594 "05number.c"
                skip_spaces_and_lf(info);
                # 596 "05number.c"
                value_114=strtoull(buf_112,((void*)0),0);
                # 598 "05number.c"
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 598, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sULongNode*)(right_value244=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value243=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 598, "sULongNode")))),value_114,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sNodeBase_sline;
                _inf_value26->sname=(void*)sNodeBase_sname;
                _inf_value26->terminated=(void*)sULongNode_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result156__ = __result_obj__ = ((struct sNode*)(right_value247=_inf_value26));
                come_call_finalizer3(right_value243,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value244,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result156__;
            }
            else {
                # 601 "05number.c"
                value_116=strtoull(buf_112,((void*)0),0);
                # 602 "05number.c"
                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 602, "struct sNode");
                _inf_obj_value27=come_increment_ref_count(((struct sULongNode*)(right_value249=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value248=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 602, "sULongNode")))),value_116,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sNodeBase_sline;
                _inf_value27->sname=(void*)sNodeBase_sname;
                _inf_value27->terminated=(void*)sULongNode_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result159__ = __result_obj__ = ((struct sNode*)(right_value252=_inf_value27));
                come_call_finalizer3(right_value248,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value249,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result159__;
            }
        }
        else {
            # 606 "05number.c"
            value_118=strtoul(buf_112,((void*)0),0);
            # 607 "05number.c"
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 607, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sUIntNode*)(right_value254=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value253=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "05number.c", 607, "sUIntNode")))),value_118,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sUIntNode_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result162__ = __result_obj__ = ((struct sNode*)(right_value257=_inf_value28));
            come_call_finalizer3(right_value253,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value254,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result162__;
        }
    }
    else {
        # 640 "05number.c"
        # 610 "05number.c"
        if(_if_conditional231=*info->p==76||*info->p==108,        _if_conditional231) {
            # 611 "05number.c"
            info->p++;
            # 612 "05number.c"
            skip_spaces_and_lf(info);
            # 634 "05number.c"
            # 614 "05number.c"
            if(_if_conditional232=*info->p==76||*info->p==108,            _if_conditional232) {
                # 616 "05number.c"
                info->p++;
                # 617 "05number.c"
                skip_spaces_and_lf(info);
                # 619 "05number.c"
                value_120=strtoull(buf_112,((void*)0),0);
                # 620 "05number.c"
                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 620, "struct sNode");
                _inf_obj_value29=come_increment_ref_count(((struct sLongNode*)(right_value259=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value258=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 620, "sLongNode")))),value_120,info))));
                _inf_value29->_protocol_obj=_inf_obj_value29;
                _inf_value29->finalize=(void*)sLongNode_finalize;
                _inf_value29->clone=(void*)sLongNode_clone;
                _inf_value29->compile=(void*)sLongNode_compile;
                _inf_value29->sline=(void*)sNodeBase_sline;
                _inf_value29->sname=(void*)sNodeBase_sname;
                _inf_value29->terminated=(void*)sLongNode_terminated;
                _inf_value29->kind=(void*)sLongNode_kind;
                __result165__ = __result_obj__ = ((struct sNode*)(right_value262=_inf_value29));
                come_call_finalizer3(right_value258,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value259,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result165__;
            }
            else {
                # 634 "05number.c"
                # 622 "05number.c"
                if(_if_conditional238=*info->p==85||*info->p==117,                _if_conditional238) {
                    # 624 "05number.c"
                    info->p++;
                    # 625 "05number.c"
                    skip_spaces_and_lf(info);
                    # 627 "05number.c"
                    value_122=strtoull(buf_112,((void*)0),0);
                    # 628 "05number.c"
                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 628, "struct sNode");
                    _inf_obj_value30=come_increment_ref_count(((struct sULongNode*)(right_value264=sULongNode_initialize((struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value263=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "05number.c", 628, "sULongNode")))),value_122,info))));
                    _inf_value30->_protocol_obj=_inf_obj_value30;
                    _inf_value30->finalize=(void*)sULongNode_finalize;
                    _inf_value30->clone=(void*)sULongNode_clone;
                    _inf_value30->compile=(void*)sULongNode_compile;
                    _inf_value30->sline=(void*)sNodeBase_sline;
                    _inf_value30->sname=(void*)sNodeBase_sname;
                    _inf_value30->terminated=(void*)sULongNode_terminated;
                    _inf_value30->kind=(void*)sULongNode_kind;
                    __result168__ = __result_obj__ = ((struct sNode*)(right_value267=_inf_value30));
                    come_call_finalizer3(right_value263,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value264,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result168__;
                }
                else {
                    # 631 "05number.c"
                    value_124=strtoull(buf_112,((void*)0),0);
                    # 632 "05number.c"
                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 632, "struct sNode");
                    _inf_obj_value31=come_increment_ref_count(((struct sLongNode*)(right_value269=sLongNode_initialize((struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value268=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "05number.c", 632, "sLongNode")))),value_124,info))));
                    _inf_value31->_protocol_obj=_inf_obj_value31;
                    _inf_value31->finalize=(void*)sLongNode_finalize;
                    _inf_value31->clone=(void*)sLongNode_clone;
                    _inf_value31->compile=(void*)sLongNode_compile;
                    _inf_value31->sline=(void*)sNodeBase_sline;
                    _inf_value31->sname=(void*)sNodeBase_sname;
                    _inf_value31->terminated=(void*)sLongNode_terminated;
                    _inf_value31->kind=(void*)sLongNode_kind;
                    __result171__ = __result_obj__ = ((struct sNode*)(right_value272=_inf_value31));
                    come_call_finalizer3(right_value268,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value269,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result171__;
                }
            }
        }
        else {
            # 636 "05number.c"
            value_126=strtoull(buf_112,((void*)0),0);
            # 637 "05number.c"
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05number.c", 637, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sIntNode*)(right_value274=sIntNode_initialize((struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value273=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "05number.c", 637, "sIntNode")))),value_126,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sIntNode_finalize;
            _inf_value32->clone=(void*)sIntNode_clone;
            _inf_value32->compile=(void*)sIntNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sIntNode_terminated;
            _inf_value32->kind=(void*)sIntNode_kind;
            __result174__ = __result_obj__ = ((struct sNode*)(right_value277=_inf_value32));
            come_call_finalizer3(right_value273,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value274,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result174__;
        }
    }
    # 640 "05number.c"
    __result175__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result175__;
}

static void sUIntNode_finalize(struct sUIntNode* self){
void* __result_obj__;
_Bool _if_conditional226;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sUIntNode_finalize"
                # 0 "sUIntNode_finalize"
                if(_if_conditional226=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional226) {
                    # 0 "sUIntNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
void* __result_obj__;
_Bool _if_conditional227;
struct sUIntNode* __result160__;
void* right_value255;
struct sUIntNode* result_119;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value256;
char* __dec_obj60;
_Bool _if_conditional230;
struct sUIntNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
memset(&result_119, 0, sizeof(struct sUIntNode*));
right_value256 = (void*)0;
                # 3 "sUIntNode_clone"
                # 2 "sUIntNode_clone"
                if(_if_conditional227=self==(void*)0,                _if_conditional227) {
                    # 2 "sUIntNode_clone"
                    __result160__ = __result_obj__ = (void*)0;
                    return __result160__;
                }
                # 3 "sUIntNode_clone"
                result_119=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(right_value255=(struct sUIntNode*)come_calloc(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3, "sUIntNode"))));
                come_call_finalizer3(right_value255,sUIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sUIntNode_clone"
                # 4 "sUIntNode_clone"
                if(_if_conditional228=self!=((void*)0),                _if_conditional228) {
                    # 4 "sUIntNode_clone"
                    result_119->sline=self->sline;
                }
                # 6 "sUIntNode_clone"
                # 5 "sUIntNode_clone"
                if(_if_conditional229=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional229) {
                    # 5 "sUIntNode_clone"
                    __dec_obj60=result_119->sname;
                    result_119->sname=(char*)come_increment_ref_count(((char*)(right_value256=string_clone(self->sname))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sUIntNode_clone"
                # 6 "sUIntNode_clone"
                if(_if_conditional230=self!=((void*)0),                _if_conditional230) {
                    # 6 "sUIntNode_clone"
                    result_119->value=self->value;
                }
                # 7 "sUIntNode_clone"
                __result161__ = __result_obj__ = result_119;
                come_call_finalizer3(result_119,sUIntNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result161__;
                come_call_finalizer3(result_119,sUIntNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sULongNode_finalize(struct sULongNode* self){
void* __result_obj__;
_Bool _if_conditional239;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sULongNode_finalize"
                        # 0 "sULongNode_finalize"
                        if(_if_conditional239=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional239) {
                            # 0 "sULongNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
void* __result_obj__;
_Bool _if_conditional240;
struct sULongNode* __result166__;
void* right_value265;
struct sULongNode* result_123;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value266;
char* __dec_obj62;
_Bool _if_conditional243;
struct sULongNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
memset(&result_123, 0, sizeof(struct sULongNode*));
right_value266 = (void*)0;
                        # 3 "sULongNode_clone"
                        # 2 "sULongNode_clone"
                        if(_if_conditional240=self==(void*)0,                        _if_conditional240) {
                            # 2 "sULongNode_clone"
                            __result166__ = __result_obj__ = (void*)0;
                            return __result166__;
                        }
                        # 3 "sULongNode_clone"
                        result_123=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(right_value265=(struct sULongNode*)come_calloc(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3, "sULongNode"))));
                        come_call_finalizer3(right_value265,sULongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sULongNode_clone"
                        # 4 "sULongNode_clone"
                        if(_if_conditional241=self!=((void*)0),                        _if_conditional241) {
                            # 4 "sULongNode_clone"
                            result_123->sline=self->sline;
                        }
                        # 6 "sULongNode_clone"
                        # 5 "sULongNode_clone"
                        if(_if_conditional242=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional242) {
                            # 5 "sULongNode_clone"
                            __dec_obj62=result_123->sname;
                            result_123->sname=(char*)come_increment_ref_count(((char*)(right_value266=string_clone(self->sname))));
                            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sULongNode_clone"
                        # 6 "sULongNode_clone"
                        if(_if_conditional243=self!=((void*)0),                        _if_conditional243) {
                            # 6 "sULongNode_clone"
                            result_123->value=self->value;
                        }
                        # 7 "sULongNode_clone"
                        __result167__ = __result_obj__ = result_123;
                        come_call_finalizer3(result_123,sULongNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result167__;
                        come_call_finalizer3(result_123,sULongNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLongNode_finalize(struct sLongNode* self){
void* __result_obj__;
_Bool _if_conditional244;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sLongNode_finalize"
                        # 0 "sLongNode_finalize"
                        if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional244) {
                            # 0 "sLongNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
void* __result_obj__;
_Bool _if_conditional245;
struct sLongNode* __result169__;
void* right_value270;
struct sLongNode* result_125;
_Bool _if_conditional246;
_Bool _if_conditional247;
void* right_value271;
char* __dec_obj63;
_Bool _if_conditional248;
struct sLongNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
memset(&result_125, 0, sizeof(struct sLongNode*));
right_value271 = (void*)0;
                        # 3 "sLongNode_clone"
                        # 2 "sLongNode_clone"
                        if(_if_conditional245=self==(void*)0,                        _if_conditional245) {
                            # 2 "sLongNode_clone"
                            __result169__ = __result_obj__ = (void*)0;
                            return __result169__;
                        }
                        # 3 "sLongNode_clone"
                        result_125=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(right_value270=(struct sLongNode*)come_calloc(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3, "sLongNode"))));
                        come_call_finalizer3(right_value270,sLongNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sLongNode_clone"
                        # 4 "sLongNode_clone"
                        if(_if_conditional246=self!=((void*)0),                        _if_conditional246) {
                            # 4 "sLongNode_clone"
                            result_125->sline=self->sline;
                        }
                        # 6 "sLongNode_clone"
                        # 5 "sLongNode_clone"
                        if(_if_conditional247=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional247) {
                            # 5 "sLongNode_clone"
                            __dec_obj63=result_125->sname;
                            result_125->sname=(char*)come_increment_ref_count(((char*)(right_value271=string_clone(self->sname))));
                            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sLongNode_clone"
                        # 6 "sLongNode_clone"
                        if(_if_conditional248=self!=((void*)0),                        _if_conditional248) {
                            # 6 "sLongNode_clone"
                            result_125->value=self->value;
                        }
                        # 7 "sLongNode_clone"
                        __result170__ = __result_obj__ = result_125;
                        come_call_finalizer3(result_125,sLongNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result170__;
                        come_call_finalizer3(result_125,sLongNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sIntNode_finalize(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sIntNode_finalize"
                # 0 "sIntNode_finalize"
                if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional249) {
                    # 0 "sIntNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
void* __result_obj__;
_Bool _if_conditional250;
struct sIntNode* __result172__;
void* right_value275;
struct sIntNode* result_127;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value276;
char* __dec_obj64;
_Bool _if_conditional253;
struct sIntNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
memset(&result_127, 0, sizeof(struct sIntNode*));
right_value276 = (void*)0;
                # 3 "sIntNode_clone"
                # 2 "sIntNode_clone"
                if(_if_conditional250=self==(void*)0,                _if_conditional250) {
                    # 2 "sIntNode_clone"
                    __result172__ = __result_obj__ = (void*)0;
                    return __result172__;
                }
                # 3 "sIntNode_clone"
                result_127=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(right_value275=(struct sIntNode*)come_calloc(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3, "sIntNode"))));
                come_call_finalizer3(right_value275,sIntNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sIntNode_clone"
                # 4 "sIntNode_clone"
                if(_if_conditional251=self!=((void*)0),                _if_conditional251) {
                    # 4 "sIntNode_clone"
                    result_127->sline=self->sline;
                }
                # 6 "sIntNode_clone"
                # 5 "sIntNode_clone"
                if(_if_conditional252=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional252) {
                    # 5 "sIntNode_clone"
                    __dec_obj64=result_127->sname;
                    result_127->sname=(char*)come_increment_ref_count(((char*)(right_value276=string_clone(self->sname))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sIntNode_clone"
                # 6 "sIntNode_clone"
                if(_if_conditional253=self!=((void*)0),                _if_conditional253) {
                    # 6 "sIntNode_clone"
                    result_127->value=self->value;
                }
                # 7 "sIntNode_clone"
                __result173__ = __result_obj__ = result_127;
                come_call_finalizer3(result_127,sIntNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result173__;
                come_call_finalizer3(result_127,sIntNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional254;
void* right_value278;
struct sNode* node_128;
void* right_value279;
struct sNode* __dec_obj65;
struct sNode* __result176__;
_Bool _if_conditional255;
void* right_value280;
struct sNode* node_129;
void* right_value281;
struct sNode* __dec_obj66;
struct sNode* __result177__;
_Bool _if_conditional256;
void* right_value282;
struct sNode* node_130;
void* right_value283;
struct sNode* __dec_obj67;
struct sNode* __result178__;
_Bool _if_conditional257;
void* right_value284;
struct sNode* node_131;
void* right_value285;
struct sNode* __dec_obj68;
struct sNode* __result179__;
void* right_value286;
struct sNode* node_132;
void* right_value287;
struct sNode* __dec_obj69;
struct sNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
memset(&node_128, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&node_129, 0, sizeof(struct sNode*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&node_130, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&node_131, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&node_132, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
    # 645 "05number.c"
    skip_spaces_and_lf(info);
    # 647 "05number.c"
    parse_sharp_v5(info);
    # 690 "05number.c"
    # 649 "05number.c"
    if(_if_conditional254=*info->p==48&&(*(info->p+1)==120||*(info->p+1)==88),    _if_conditional254) {
        # 650 "05number.c"
        info->p+=2;
        # 652 "05number.c"
        node_128=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=get_hex_number((_Bool)0,info))));
        if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 654 "05number.c"
        __dec_obj65=node_128;
        node_128=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_128),info))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value279) { right_value279 = come_decrement_ref_count2(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 656 "05number.c"
        __result176__ = __result_obj__ = node_128;
        if(node_128) { node_128 = come_decrement_ref_count2(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result176__;
        if(node_128) { node_128 = come_decrement_ref_count2(node_128, ((struct sNode*)node_128)->finalize, ((struct sNode*)node_128)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        # 690 "05number.c"
        # 658 "05number.c"
        if(_if_conditional255=*info->p==48&&xisdigit(*(info->p+1)),        _if_conditional255) {
            # 659 "05number.c"
            info->p++;
            # 661 "05number.c"
            node_129=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=get_oct_number(info))));
            if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 663 "05number.c"
            __dec_obj66=node_129;
            node_129=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_129),info))));
            if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 665 "05number.c"
            __result177__ = __result_obj__ = node_129;
            if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result177__;
            if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 690 "05number.c"
            # 667 "05number.c"
            if(_if_conditional256=xisdigit(*info->p),            _if_conditional256) {
                # 668 "05number.c"
                node_130=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=get_number((_Bool)0,info))));
                if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 670 "05number.c"
                __dec_obj67=node_130;
                node_130=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_130),info))));
                if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 672 "05number.c"
                __result178__ = __result_obj__ = node_130;
                if(node_130) { node_130 = come_decrement_ref_count2(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result178__;
                if(node_130) { node_130 = come_decrement_ref_count2(node_130, ((struct sNode*)node_130)->finalize, ((struct sNode*)node_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 690 "05number.c"
                # 674 "05number.c"
                if(_if_conditional257=*info->p==45&&xisdigit(*(info->p+1)),                _if_conditional257) {
                    # 675 "05number.c"
                    info->p++;
                    # 677 "05number.c"
                    node_131=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=get_number((_Bool)1,info))));
                    if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 679 "05number.c"
                    __dec_obj68=node_131;
                    node_131=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_131),info))));
                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 681 "05number.c"
                    __result179__ = __result_obj__ = node_131;
                    if(node_131) { node_131 = come_decrement_ref_count2(node_131, ((struct sNode*)node_131)->finalize, ((struct sNode*)node_131)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result179__;
                    if(node_131) { node_131 = come_decrement_ref_count2(node_131, ((struct sNode*)node_131)->finalize, ((struct sNode*)node_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 684 "05number.c"
                    node_132=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=expression_node_v98(info))));
                    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 686 "05number.c"
                    __dec_obj69=node_132;
                    node_132=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_132),info))));
                    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 688 "05number.c"
                    __result180__ = __result_obj__ = node_132;
                    if(node_132) { node_132 = come_decrement_ref_count2(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result180__;
                    if(node_132) { node_132 = come_decrement_ref_count2(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
        }
    }
}

