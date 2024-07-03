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
struct sCurrentNode
{
    int sline;
    char* sname;
};
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sMethodCallNode
{
    int sline;
    char* sname;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
};
struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated(struct sCurrentNode* self);

char* sCurrentNode_kind(struct sCurrentNode* self);

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

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
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
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
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind(struct sMethodCallNode* self);

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
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










struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sCurrentNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    # 7 "20method.c"
    self->sline=info->sline;
    # 8 "20method.c"
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 11 "20method.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 13 "20method.c"
    __result53__ = self->sline;
    return __result53__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value80;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    # 18 "20method.c"
    __result54__ = __result_obj__ = ((char*)(right_value80=__builtin_string(self->sname)));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sCurrentNode_terminated(struct sCurrentNode* self){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    # 23 "20method.c"
    __result55__ = (_Bool)0;
    return __result55__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__;
void* right_value81;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    # 28 "20method.c"
    __result56__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sCurrentNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* class_name_47;
void* right_value83;
void* right_value84;
struct sClass* current_stack_48;
struct sVarTable* vtable_57;
struct map$2charphsVarph* o2_saved_58;
char* it_61;
char* key_64;
struct sVar* value_68;
void* right_value120;
struct sType* type2_93;
void* right_value121;
void* right_value122;
void* right_value123;
struct tuple2$2charphsTypeph* item_94;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional136;
void* right_value124;
struct sType* type3_95;
void* right_value125;
void* right_value126;
void* right_value127;
struct tuple2$2charphsTypeph* item2_98;
void* right_value134;
void* right_value135;
static int num_current_stack_151=0;
struct map$2charphsVarph* o2_saved_152;
char* it_153;
char* key_154;
struct sVar* value_155;
void* right_value142;
struct sType* type2_156;
void* right_value143;
void* right_value144;
struct tuple2$2charphsTypeph* item_157;
_Bool _if_conditional201;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value145;
struct CVALUE* come_value_158;
void* right_value146;
char* __dec_obj43;
void* right_value147;
void* right_value148;
struct sType* __dec_obj44;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&class_name_47, 0, sizeof(char*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&current_stack_48, 0, sizeof(struct sClass*));
memset(&vtable_57, 0, sizeof(struct sVarTable*));
memset(&o2_saved_58, 0, sizeof(struct map$2charphsVarph*));
memset(&it_61, 0, sizeof(char*));
memset(&key_64, 0, sizeof(char*));
memset(&value_68, 0, sizeof(struct sVar*));
right_value120 = (void*)0;
memset(&type2_93, 0, sizeof(struct sType*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&item_94, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value124 = (void*)0;
memset(&type3_95, 0, sizeof(struct sType*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&item2_98, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&o2_saved_152, 0, sizeof(struct map$2charphsVarph*));
memset(&it_153, 0, sizeof(char*));
memset(&key_154, 0, sizeof(char*));
memset(&value_155, 0, sizeof(struct sVar*));
right_value142 = (void*)0;
memset(&type2_156, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&item_157, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value145 = (void*)0;
memset(&come_value_158, 0, sizeof(struct CVALUE*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    # 33 "20method.c"
    info->current_stack_num++;
    # 34 "20method.c"
    class_name_47=(char*)come_increment_ref_count(((char*)(right_value82=xsprintf("__current_stack%d__",info->current_stack_num))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 35 "20method.c"
    current_stack_48=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value84=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value83=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 35, "sClass")))),class_name_47,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer3(right_value83,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    # 37 "20method.c"
    vtable_57=info->lv_table;
    # 79 "20method.c"
    while(vtable_57) {
        # 76 "20method.c"
        for(        o2_saved_58=(struct map$2charphsVarph*)come_increment_ref_count((vtable_57->mVars)),it_61=map$2charphsVarph_begin((o2_saved_58));        !map$2charphsVarph_end((o2_saved_58));        it_61=map$2charphsVarph_next((o2_saved_58))        ){
            # 41 "20method.c"
            key_64=it_61;
            # 42 "20method.c"
            value_68=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_57->mVars,key_64), "20method.c", 42, 0));
            # 44 "20method.c"
            type2_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(value_68->mType))));
            come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 46 "20method.c"
            type2_93->mPointerNum++;
            # 48 "20method.c"
            item_94=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value123=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value122=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 48, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value121=__builtin_string(value_68->mCValueName)))),(struct sType*)come_increment_ref_count(type2_93)))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value123,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 74 "20method.c"
            # 50 "20method.c"
            if(_if_conditional130=value_68->mCValueName!=((void*)0),            _if_conditional130) {
                # 73 "20method.c"
                # 51 "20method.c"
                if(_if_conditional131=strcmp(value_68->mCValueName,"__list_values")==0,                _if_conditional131) {
                }
                else {
                    # 73 "20method.c"
                    # 54 "20method.c"
                    if(_if_conditional132=strcmp(value_68->mCValueName,"__map_keys")==0,                    _if_conditional132) {
                    }
                    else {
                        # 73 "20method.c"
                        # 57 "20method.c"
                        if(_if_conditional133=strcmp(value_68->mCValueName,"__map_element")==0,                        _if_conditional133) {
                        }
                        else {
                            # 73 "20method.c"
                            # 60 "20method.c"
                            if(_if_conditional134=string_operator_equals(value_68->mType->mClass->mName,"va_list")||string_operator_equals(value_68->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional134) {
                            }
                            else {
                                # 73 "20method.c"
                                # 63 "20method.c"
                                if(_if_conditional136=list$1sNodeph_length(type2_93->mArrayNum)==1,                                _if_conditional136) {
                                    # 64 "20method.c"
                                    type3_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(type2_93))));
                                    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 65 "20method.c"
                                    list$1sNodeph_reset(type3_95->mArrayNum);
                                    # 66 "20method.c"
                                    type3_95->mPointerNum++;
                                    # 67 "20method.c"
                                    item2_98=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value127=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value126=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 67, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(value_68->mCValueName)))),(struct sType*)come_increment_ref_count(type3_95)))));
                                    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value127,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 68 "20method.c"
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value134=tuple2$2charphsTypephp_clone(item2_98)))));
                                    come_call_finalizer3(right_value134,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(type3_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(item2_98,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    # 71 "20method.c"
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value135=tuple2$2charphsTypephp_clone(item_94)))));
                                    come_call_finalizer3(right_value135,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer3(type2_93,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_94,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_58,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        # 76 "20method.c"
        vtable_57=vtable_57->mParent;
    }
    # 79 "20method.c"
    output_struct(current_stack_48,info);
    # 81 "20method.c"
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_47),(struct sClass*)come_increment_ref_count(current_stack_48));
    # 83 "20method.c"
    # 84 "20method.c"
    num_current_stack_151++;
    # 85 "20method.c"
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_47,num_current_stack_151);
    # 86 "20method.c"
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_151,class_name_47);
    # 88 "20method.c"
    vtable_57=info->lv_table;
    # 126 "20method.c"
    while(vtable_57) {
        # 123 "20method.c"
        for(        o2_saved_152=(struct map$2charphsVarph*)come_increment_ref_count((vtable_57->mVars)),it_153=map$2charphsVarph_begin((o2_saved_152));        !map$2charphsVarph_end((o2_saved_152));        it_153=map$2charphsVarph_next((o2_saved_152))        ){
            # 92 "20method.c"
            key_154=it_153;
            # 93 "20method.c"
            value_155=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_57->mVars,key_154), "20method.c", 93, 1));
            # 95 "20method.c"
            type2_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(value_155->mType))));
            come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 97 "20method.c"
            item_157=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value144=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value143=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 97, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_155->mCValueName),(struct sType*)come_increment_ref_count(type2_156)))));
            come_call_finalizer3(right_value143,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value144,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 121 "20method.c"
            # 99 "20method.c"
            if(_if_conditional201=value_155->mCValueName!=((void*)0),            _if_conditional201) {
                # 120 "20method.c"
                # 100 "20method.c"
                if(_if_conditional202=strcmp(value_155->mCValueName,"__list_values")==0,                _if_conditional202) {
                }
                else {
                    # 120 "20method.c"
                    # 103 "20method.c"
                    if(_if_conditional203=strcmp(value_155->mCValueName,"__map_keys")==0,                    _if_conditional203) {
                    }
                    else {
                        # 120 "20method.c"
                        # 106 "20method.c"
                        if(_if_conditional204=strcmp(value_155->mCValueName,"__map_element")==0,                        _if_conditional204) {
                        }
                        else {
                            # 120 "20method.c"
                            # 109 "20method.c"
                            if(_if_conditional205=string_operator_equals(value_155->mType->mClass->mName,"va_list")||string_operator_equals(value_155->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional205) {
                            }
                            else {
                                # 119 "20method.c"
                                # 113 "20method.c"
                                if(_if_conditional206=string_operator_equals(type2_156->mClass->mName,"lambda"),                                _if_conditional206) {
                                    # 114 "20method.c"
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_151,value_155->mCValueName,value_155->mCValueName);
                                }
                                else {
                                    # 117 "20method.c"
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_151,value_155->mCValueName,value_155->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer3(type2_156,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_157,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_152,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        # 123 "20method.c"
        vtable_57=vtable_57->mParent;
    }
    # 126 "20method.c"
    come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 126, "CVALUE"))));
    come_call_finalizer3(right_value145,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 128 "20method.c"
    __dec_obj43=come_value_158->c_value;
    come_value_158->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("&__current_stack%d__",num_current_stack_151))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 129 "20method.c"
    __dec_obj44=come_value_158->type;
    come_value_158->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 129, "sType")))),class_name_47,(_Bool)0,info))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 130 "20method.c"
    come_value_158->var=((void*)0);
    # 132 "20method.c"
    add_come_last_code(info,"%s;\n",come_value_158->c_value);
    # 134 "20method.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
    # 136 "20method.c"
    info->num_current_stack=num_current_stack_151;
    # 138 "20method.c"
    __result118__ = (_Bool)1;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_48,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result118__;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_48,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sClass_finalize"
        # 0 "sClass_finalize"
        if(_if_conditional20=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional20) {
            # 0 "sClass_finalize"
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sClass_finalize"
        # 1 "sClass_finalize"
        if(_if_conditional21=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional21) {
            # 1 "sClass_finalize"
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 3 "sClass_finalize"
        # 2 "sClass_finalize"
        if(_if_conditional42=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional42) {
            # 2 "sClass_finalize"
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 4 "sClass_finalize"
        # 3 "sClass_finalize"
        if(_if_conditional43=self!=((void*)0)&&self->mParentClassName!=((void*)0),        _if_conditional43) {
            # 3 "sClass_finalize"
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_49;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsTypephph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                # 114 "./neo-c.h"
                it_49=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    # 116 "./neo-c.h"
                    prev_it_50=it_49;
                    # 117 "./neo-c.h"
                    it_49=it_49->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_50,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                        if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional22) {
                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sType_finalize"
                                        # 0 "sType_finalize"
                                        if(_if_conditional25=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional25) {
                                            # 0 "sType_finalize"
                                            come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sType_finalize"
                                        # 1 "sType_finalize"
                                        if(_if_conditional27=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional27) {
                                            # 1 "sType_finalize"
                                            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 3 "sType_finalize"
                                        # 2 "sType_finalize"
                                        if(_if_conditional29=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional29) {
                                            # 2 "sType_finalize"
                                            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 4 "sType_finalize"
                                        # 3 "sType_finalize"
                                        if(_if_conditional30=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional30) {
                                            # 3 "sType_finalize"
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 5 "sType_finalize"
                                        # 4 "sType_finalize"
                                        if(_if_conditional31=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional31) {
                                            # 4 "sType_finalize"
                                            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 6 "sType_finalize"
                                        # 5 "sType_finalize"
                                        if(_if_conditional32=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional32) {
                                            # 5 "sType_finalize"
                                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 7 "sType_finalize"
                                        # 6 "sType_finalize"
                                        if(_if_conditional34=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional34) {
                                            # 6 "sType_finalize"
                                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 8 "sType_finalize"
                                        # 7 "sType_finalize"
                                        if(_if_conditional35=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional35) {
                                            # 7 "sType_finalize"
                                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 9 "sType_finalize"
                                        # 8 "sType_finalize"
                                        if(_if_conditional37=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional37) {
                                            # 8 "sType_finalize"
                                            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 10 "sType_finalize"
                                        # 9 "sType_finalize"
                                        if(_if_conditional38=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional38) {
                                            # 9 "sType_finalize"
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 11 "sType_finalize"
                                        # 10 "sType_finalize"
                                        if(_if_conditional39=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional39) {
                                            # 10 "sType_finalize"
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 12 "sType_finalize"
                                        # 11 "sType_finalize"
                                        if(_if_conditional40=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional40) {
                                            # 11 "sType_finalize"
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 13 "sType_finalize"
                                        # 12 "sType_finalize"
                                        if(_if_conditional41=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional41) {
                                            # 12 "sType_finalize"
                                            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_51;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sTypeph*));
                                                # 114 "./neo-c.h"
                                                it_51=self->head;
                                                # 120 "./neo-c.h"
                                                while(_while_condtional8=it_51!=((void*)0),                                                _while_condtional8) {
                                                    # 116 "./neo-c.h"
                                                    prev_it_52=it_51;
                                                    # 117 "./neo-c.h"
                                                    it_51=it_51->next;
                                                    # 118 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_52,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sTypephp_finalize"
                                                        # 0 "list_item$1sTypephp_finalize"
                                                        if(_if_conditional26=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional26) {
                                                            # 0 "list_item$1sTypephp_finalize"
                                                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple1$1sTypephp_finalize"
                                                # 0 "tuple1$1sTypephp_finalize"
                                                if(_if_conditional28=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional28) {
                                                    # 0 "tuple1$1sTypephp_finalize"
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_53;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1sNodeph*));
                                                # 114 "./neo-c.h"
                                                it_53=self->head;
                                                # 120 "./neo-c.h"
                                                while(_while_condtional9=it_53!=((void*)0),                                                _while_condtional9) {
                                                    # 116 "./neo-c.h"
                                                    prev_it_54=it_53;
                                                    # 117 "./neo-c.h"
                                                    it_53=it_53->next;
                                                    # 118 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_54,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1sNodephp_finalize"
                                                        # 0 "list_item$1sNodephp_finalize"
                                                        if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional33) {
                                                            # 0 "list_item$1sNodephp_finalize"
                                                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_55;
_Bool _while_condtional10;
struct list_item$1charph* prev_it_56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_55, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_56, 0, sizeof(struct list_item$1charph*));
                                                # 114 "./neo-c.h"
                                                it_55=self->head;
                                                # 120 "./neo-c.h"
                                                while(_while_condtional10=it_55!=((void*)0),                                                _while_condtional10) {
                                                    # 116 "./neo-c.h"
                                                    prev_it_56=it_55;
                                                    # 117 "./neo-c.h"
                                                    it_55=it_55->next;
                                                    # 118 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_56,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "list_item$1charphp_finalize"
                                                        # 0 "list_item$1charphp_finalize"
                                                        if(_if_conditional36=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional36) {
                                                            # 0 "list_item$1charphp_finalize"
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional44;
char* result_59;
char* __result57__;
_Bool _if_conditional45;
char* __result58__;
char* result_60;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(char*));
memset(&result_60, 0, sizeof(char*));
            # 1279 "./neo-c.h"
            # 1274 "./neo-c.h"
            if(_if_conditional44=self==((void*)0),            _if_conditional44) {
                # 1275 "./neo-c.h"
                # 1276 "./neo-c.h"
                memset(&result_59,0,sizeof(char*));
                # 1277 "./neo-c.h"
                __result57__ = __result_obj__ = result_59;
                return __result57__;
            }
            # 1279 "./neo-c.h"
            self->key_list->it=self->key_list->head;
            # 1285 "./neo-c.h"
            # 1281 "./neo-c.h"
            if(self->key_list->it) {
                # 1282 "./neo-c.h"
                __result58__ = __result_obj__ = self->key_list->it->item;
                return __result58__;
            }
            # 1285 "./neo-c.h"
            # 1286 "./neo-c.h"
            memset(&result_60,0,sizeof(char*));
            # 1287 "./neo-c.h"
            __result59__ = __result_obj__ = result_60;
            return __result59__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1308 "./neo-c.h"
            __result60__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            return __result60__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional46;
char* result_62;
char* __result61__;
_Bool _if_conditional47;
char* __result62__;
char* result_63;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(char*));
memset(&result_63, 0, sizeof(char*));
            # 1296 "./neo-c.h"
            # 1291 "./neo-c.h"
            if(_if_conditional46=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional46) {
                # 1292 "./neo-c.h"
                # 1293 "./neo-c.h"
                memset(&result_62,0,sizeof(char*));
                # 1294 "./neo-c.h"
                __result61__ = __result_obj__ = result_62;
                return __result61__;
            }
            # 1296 "./neo-c.h"
            self->key_list->it=self->key_list->it->next;
            # 1302 "./neo-c.h"
            # 1298 "./neo-c.h"
            if(self->key_list->it) {
                # 1299 "./neo-c.h"
                __result62__ = __result_obj__ = self->key_list->it->item;
                return __result62__;
            }
            # 1302 "./neo-c.h"
            # 1303 "./neo-c.h"
            memset(&result_63,0,sizeof(char*));
            # 1304 "./neo-c.h"
            __result63__ = __result_obj__ = result_63;
            return __result63__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_65;
unsigned int hash_66;
unsigned int it_67;
_Bool _while_condtional11;
_Bool _if_conditional48;
_Bool _if_conditional49;
struct sVar* __result64__;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sVar* __result65__;
struct sVar* __result66__;
struct sVar* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_65, 0, sizeof(struct sVar*));
memset(&hash_66, 0, sizeof(unsigned int));
memset(&it_67, 0, sizeof(unsigned int));
                # 1519 "./neo-c.h"
                # 1520 "./neo-c.h"
                memset(&default_value_65,0,sizeof(struct sVar*));
                # 1522 "./neo-c.h"
                hash_66=string_get_hash_key(((char*)key))%self->size;
                # 1523 "./neo-c.h"
                it_67=hash_66;
                # 1547 "./neo-c.h"
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional48=self->item_existance[it_67],                    _if_conditional48) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional49=string_equals(self->keys[it_67],key),                        _if_conditional49) {
                            # 1530 "./neo-c.h"
                            __result64__ = __result_obj__ = self->items[it_67];
                            come_call_finalizer3(default_value_65,sVar_finalize, 0, 0, 0, 0, (void*)0);
                            return __result64__;
                        }
                        # 1533 "./neo-c.h"
                        it_67++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional54=it_67>=self->size,                        _if_conditional54) {
                            # 1536 "./neo-c.h"
                            it_67=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional55=it_67==hash_66,                            _if_conditional55) {
                                # 1539 "./neo-c.h"
                                __result65__ = __result_obj__ = default_value_65;
                                come_call_finalizer3(default_value_65,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result65__;
                            }
                        }
                    }
                    else {
                        # 1543 "./neo-c.h"
                        __result66__ = __result_obj__ = default_value_65;
                        come_call_finalizer3(default_value_65,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                    }
                }
                # 1547 "./neo-c.h"
                __result67__ = __result_obj__ = default_value_65;
                come_call_finalizer3(default_value_65,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result67__;
                come_call_finalizer3(default_value_65,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional50=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional50) {
                                    # 0 "sVar_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional51=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional51) {
                                    # 1 "sVar_finalize"
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional52=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional52) {
                                    # 2 "sVar_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional53=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional53) {
                                    # 3 "sVar_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional56;
struct sType* __result68__;
void* right_value85;
struct sType* result_69;
_Bool _if_conditional57;
_Bool _if_conditional58;
void* right_value92;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional62;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional66;
void* right_value96;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional67;
void* right_value97;
char* __dec_obj20;
_Bool _if_conditional68;
void* right_value98;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional69;
void* right_value106;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional82;
_Bool _if_conditional83;
void* right_value107;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional84;
void* right_value114;
struct list$1charph* __dec_obj30;
_Bool _if_conditional88;
void* right_value115;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value116;
struct sNode* __dec_obj32;
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
void* right_value117;
struct sNode* __dec_obj33;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value118;
char* __dec_obj34;
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
void* right_value119;
char* __dec_obj35;
_Bool _if_conditional129;
struct sType* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&result_69, 0, sizeof(struct sType*));
right_value92 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
                # 3 "sType_clone"
                # 2 "sType_clone"
                if(_if_conditional56=self==(void*)0,                _if_conditional56) {
                    # 2 "sType_clone"
                    __result68__ = __result_obj__ = (void*)0;
                    return __result68__;
                }
                # 3 "sType_clone"
                result_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sType_clone"
                # 4 "sType_clone"
                if(_if_conditional57=self!=((void*)0),                _if_conditional57) {
                    # 4 "sType_clone"
                    result_69->mClass=self->mClass;
                }
                # 6 "sType_clone"
                # 5 "sType_clone"
                if(_if_conditional58=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional58) {
                    # 5 "sType_clone"
                    __dec_obj16=result_69->mMultipleTypes;
                    result_69->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 7 "sType_clone"
                # 6 "sType_clone"
                if(_if_conditional62=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional62) {
                    # 6 "sType_clone"
                    __dec_obj18=result_69->mNoSolvedGenericsType;
                    result_69->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value95,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 8 "sType_clone"
                # 7 "sType_clone"
                if(_if_conditional66=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional66) {
                    # 7 "sType_clone"
                    __dec_obj19=result_69->mOriginalLoadVarType;
                    result_69->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value96=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value96,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sType_clone"
                # 8 "sType_clone"
                if(_if_conditional67=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional67) {
                    # 8 "sType_clone"
                    __dec_obj20=result_69->mGenericsName;
                    result_69->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value97=string_clone(self->mGenericsName))));
                    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 10 "sType_clone"
                # 9 "sType_clone"
                if(_if_conditional68=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional68) {
                    # 9 "sType_clone"
                    __dec_obj21=result_69->mGenericsTypes;
                    result_69->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value98=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value98,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 11 "sType_clone"
                # 10 "sType_clone"
                if(_if_conditional69=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional69) {
                    # 10 "sType_clone"
                    __dec_obj25=result_69->mArrayNum;
                    result_69->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value106,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 12 "sType_clone"
                # 11 "sType_clone"
                if(_if_conditional82=self!=((void*)0),                _if_conditional82) {
                    # 11 "sType_clone"
                    result_69->mOmitArrayNum=self->mOmitArrayNum;
                }
                # 13 "sType_clone"
                # 12 "sType_clone"
                if(_if_conditional83=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional83) {
                    # 12 "sType_clone"
                    __dec_obj26=result_69->mParamTypes;
                    result_69->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value107,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 14 "sType_clone"
                # 13 "sType_clone"
                if(_if_conditional84=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional84) {
                    # 13 "sType_clone"
                    __dec_obj30=result_69->mParamNames;
                    result_69->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value114=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value114,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 15 "sType_clone"
                # 14 "sType_clone"
                if(_if_conditional88=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional88) {
                    # 14 "sType_clone"
                    __dec_obj31=result_69->mResultType;
                    result_69->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value115=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value115,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 16 "sType_clone"
                # 15 "sType_clone"
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    # 15 "sType_clone"
                    result_69->mVarArgs=self->mVarArgs;
                }
                # 17 "sType_clone"
                # 16 "sType_clone"
                if(_if_conditional90=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional90) {
                    # 16 "sType_clone"
                    __dec_obj32=result_69->mAlignas;
                    result_69->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(self->mAlignas))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 18 "sType_clone"
                # 17 "sType_clone"
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    # 17 "sType_clone"
                    result_69->mUnsigned=self->mUnsigned;
                }
                # 19 "sType_clone"
                # 18 "sType_clone"
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    # 18 "sType_clone"
                    result_69->mShort=self->mShort;
                }
                # 20 "sType_clone"
                # 19 "sType_clone"
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    # 19 "sType_clone"
                    result_69->mLong=self->mLong;
                }
                # 21 "sType_clone"
                # 20 "sType_clone"
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    # 20 "sType_clone"
                    result_69->mLongLong=self->mLongLong;
                }
                # 22 "sType_clone"
                # 21 "sType_clone"
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    # 21 "sType_clone"
                    result_69->mConstant=self->mConstant;
                }
                # 23 "sType_clone"
                # 22 "sType_clone"
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    # 22 "sType_clone"
                    result_69->mRegister=self->mRegister;
                }
                # 24 "sType_clone"
                # 23 "sType_clone"
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    # 23 "sType_clone"
                    result_69->mVolatile=self->mVolatile;
                }
                # 25 "sType_clone"
                # 24 "sType_clone"
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    # 24 "sType_clone"
                    result_69->mStatic=self->mStatic;
                }
                # 26 "sType_clone"
                # 25 "sType_clone"
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    # 25 "sType_clone"
                    result_69->mRecord=self->mRecord;
                }
                # 27 "sType_clone"
                # 26 "sType_clone"
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    # 26 "sType_clone"
                    result_69->mExtern=self->mExtern;
                }
                # 28 "sType_clone"
                # 27 "sType_clone"
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    # 27 "sType_clone"
                    result_69->mRestrict=self->mRestrict;
                }
                # 29 "sType_clone"
                # 28 "sType_clone"
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    # 28 "sType_clone"
                    result_69->mImmutable=self->mImmutable;
                }
                # 30 "sType_clone"
                # 29 "sType_clone"
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    # 29 "sType_clone"
                    result_69->mHeap=self->mHeap;
                }
                # 31 "sType_clone"
                # 30 "sType_clone"
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    # 30 "sType_clone"
                    result_69->mDummyHeap=self->mDummyHeap;
                }
                # 32 "sType_clone"
                # 31 "sType_clone"
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    # 31 "sType_clone"
                    result_69->mDelegate=self->mDelegate;
                }
                # 33 "sType_clone"
                # 32 "sType_clone"
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    # 32 "sType_clone"
                    result_69->mShare=self->mShare;
                }
                # 34 "sType_clone"
                # 33 "sType_clone"
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    # 33 "sType_clone"
                    result_69->mClone=self->mClone;
                }
                # 35 "sType_clone"
                # 34 "sType_clone"
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    # 34 "sType_clone"
                    result_69->mNoHeap=self->mNoHeap;
                }
                # 36 "sType_clone"
                # 35 "sType_clone"
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    # 35 "sType_clone"
                    result_69->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                # 37 "sType_clone"
                # 36 "sType_clone"
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    # 36 "sType_clone"
                    result_69->mRefference=self->mRefference;
                }
                # 38 "sType_clone"
                # 37 "sType_clone"
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    # 37 "sType_clone"
                    result_69->mException=self->mException;
                }
                # 39 "sType_clone"
                # 38 "sType_clone"
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    # 38 "sType_clone"
                    result_69->mPointerNum=self->mPointerNum;
                }
                # 40 "sType_clone"
                # 39 "sType_clone"
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    # 39 "sType_clone"
                    result_69->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                # 41 "sType_clone"
                # 40 "sType_clone"
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    # 40 "sType_clone"
                    result_69->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                # 42 "sType_clone"
                # 41 "sType_clone"
                if(_if_conditional115=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional115) {
                    # 41 "sType_clone"
                    __dec_obj33=result_69->mSizeNum;
                    result_69->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(self->mSizeNum))));
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 43 "sType_clone"
                # 42 "sType_clone"
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    # 42 "sType_clone"
                    result_69->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                # 44 "sType_clone"
                # 43 "sType_clone"
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    # 43 "sType_clone"
                    result_69->mTypeOfExpression=self->mTypeOfExpression;
                }
                # 45 "sType_clone"
                # 44 "sType_clone"
                if(_if_conditional118=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional118) {
                    # 44 "sType_clone"
                    __dec_obj34=result_69->mOriginalTypeName;
                    result_69->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(self->mOriginalTypeName))));
                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 46 "sType_clone"
                # 45 "sType_clone"
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    # 45 "sType_clone"
                    result_69->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                # 47 "sType_clone"
                # 46 "sType_clone"
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    # 46 "sType_clone"
                    result_69->mFunctionParam=self->mFunctionParam;
                }
                # 48 "sType_clone"
                # 47 "sType_clone"
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    # 47 "sType_clone"
                    result_69->mAllocaValue=self->mAllocaValue;
                }
                # 49 "sType_clone"
                # 48 "sType_clone"
                if(_if_conditional122=self!=((void*)0),                _if_conditional122) {
                    # 48 "sType_clone"
                    result_69->mGenericsStruct=self->mGenericsStruct;
                }
                # 50 "sType_clone"
                # 49 "sType_clone"
                if(_if_conditional123=self!=((void*)0),                _if_conditional123) {
                    # 49 "sType_clone"
                    result_69->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                # 51 "sType_clone"
                # 50 "sType_clone"
                if(_if_conditional124=self!=((void*)0),                _if_conditional124) {
                    # 50 "sType_clone"
                    result_69->mComeMemCore=self->mComeMemCore;
                }
                # 52 "sType_clone"
                # 51 "sType_clone"
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    # 51 "sType_clone"
                    result_69->mInline=self->mInline;
                }
                # 53 "sType_clone"
                # 52 "sType_clone"
                if(_if_conditional126=self!=((void*)0),                _if_conditional126) {
                    # 52 "sType_clone"
                    result_69->mNullValue=self->mNullValue;
                }
                # 54 "sType_clone"
                # 53 "sType_clone"
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    # 53 "sType_clone"
                    result_69->mGuardValue=self->mGuardValue;
                }
                # 55 "sType_clone"
                # 54 "sType_clone"
                if(_if_conditional128=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional128) {
                    # 54 "sType_clone"
                    __dec_obj35=result_69->mAsmName;
                    result_69->mAsmName=(char*)come_increment_ref_count(((char*)(right_value119=string_clone(self->mAsmName))));
                    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 56 "sType_clone"
                # 55 "sType_clone"
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    # 55 "sType_clone"
                    result_69->mArrayPointerType=self->mArrayPointerType;
                }
                # 56 "sType_clone"
                __result85__ = __result_obj__ = result_69;
                come_call_finalizer3(result_69,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer3(result_69,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional59;
struct list$1sTypeph* __result69__;
void* right_value86;
void* right_value87;
struct list$1sTypeph* result_70;
struct list_item$1sTypeph* it_71;
_Bool _while_condtional12;
void* right_value91;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1sTypeph*));
memset(&it_71, 0, sizeof(struct list_item$1sTypeph*));
right_value91 = (void*)0;
                        # 133 "./neo-c.h"
                        # 130 "./neo-c.h"
                        if(_if_conditional59=self==((void*)0),                        _if_conditional59) {
                            # 131 "./neo-c.h"
                            __result69__ = __result_obj__ = ((void*)0);
                            return __result69__;
                        }
                        # 133 "./neo-c.h"
                        result_70=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 135 "./neo-c.h"
                        it_71=self->head;
                        # 142 "./neo-c.h"
                        while(_while_condtional12=it_71!=((void*)0),                        _while_condtional12) {
                            # 137 "./neo-c.h"
                            list$1sTypeph_add(result_70,(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(it_71->item)))));
                            come_call_finalizer3(right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 139 "./neo-c.h"
                            it_71=it_71->next;
                        }
                        # 142 "./neo-c.h"
                        __result72__ = __result_obj__ = result_70;
                        come_call_finalizer3(result_70,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                        come_call_finalizer3(result_70,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 95 "./neo-c.h"
                            self->head=((void*)0);
                            # 96 "./neo-c.h"
                            self->tail=((void*)0);
                            # 97 "./neo-c.h"
                            self->len=0;
                            # 99 "./neo-c.h"
                            __result70__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result70__;
                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional60;
void* right_value88;
struct list_item$1sTypeph* litem_72;
struct sType* __dec_obj13;
_Bool _if_conditional61;
void* right_value89;
struct list_item$1sTypeph* litem_73;
struct sType* __dec_obj14;
void* right_value90;
struct list_item$1sTypeph* litem_74;
struct sType* __dec_obj15;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sTypeph*));
right_value90 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sTypeph*));
                                # 177 "./neo-c.h"
                                # 146 "./neo-c.h"
                                if(_if_conditional60=self->len==0,                                _if_conditional60) {
                                    # 147 "./neo-c.h"
                                    litem_72=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 149 "./neo-c.h"
                                    litem_72->prev=((void*)0);
                                    # 150 "./neo-c.h"
                                    litem_72->next=((void*)0);
                                    # 151 "./neo-c.h"
                                    __dec_obj13=litem_72->item;
                                    litem_72->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 153 "./neo-c.h"
                                    self->tail=litem_72;
                                    # 154 "./neo-c.h"
                                    self->head=litem_72;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    # 156 "./neo-c.h"
                                    if(_if_conditional61=self->len==1,                                    _if_conditional61) {
                                        # 157 "./neo-c.h"
                                        litem_73=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                        come_call_finalizer3(right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 159 "./neo-c.h"
                                        litem_73->prev=self->head;
                                        # 160 "./neo-c.h"
                                        litem_73->next=((void*)0);
                                        # 161 "./neo-c.h"
                                        __dec_obj14=litem_73->item;
                                        litem_73->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        # 163 "./neo-c.h"
                                        self->tail=litem_73;
                                        # 164 "./neo-c.h"
                                        self->head->next=litem_73;
                                    }
                                    else {
                                        # 167 "./neo-c.h"
                                        litem_74=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                        come_call_finalizer3(right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 169 "./neo-c.h"
                                        litem_74->prev=self->tail;
                                        # 170 "./neo-c.h"
                                        litem_74->next=((void*)0);
                                        # 171 "./neo-c.h"
                                        __dec_obj15=litem_74->item;
                                        litem_74->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        # 173 "./neo-c.h"
                                        self->tail->next=litem_74;
                                        # 174 "./neo-c.h"
                                        self->tail=litem_74;
                                    }
                                }
                                # 177 "./neo-c.h"
                                self->len++;
                                # 179 "./neo-c.h"
                                __result71__ = __result_obj__ = self;
                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result71__;
                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_75;
_Bool _while_condtional13;
struct list_item$1sTypeph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1sTypeph*));
                        # 114 "./neo-c.h"
                        it_75=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional13=it_75!=((void*)0),                        _while_condtional13) {
                            # 116 "./neo-c.h"
                            prev_it_76=it_75;
                            # 117 "./neo-c.h"
                            it_75=it_75->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_76,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional63;
struct tuple1$1sTypeph* __result73__;
void* right_value93;
struct tuple1$1sTypeph* result_77;
_Bool _if_conditional65;
void* right_value94;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&result_77, 0, sizeof(struct tuple1$1sTypeph*));
right_value94 = (void*)0;
                        # 3 "tuple1$1sTypephp_clone"
                        # 2 "tuple1$1sTypephp_clone"
                        if(_if_conditional63=self==(void*)0,                        _if_conditional63) {
                            # 2 "tuple1$1sTypephp_clone"
                            __result73__ = __result_obj__ = (void*)0;
                            return __result73__;
                        }
                        # 3 "tuple1$1sTypephp_clone"
                        result_77=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer3(right_value93,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "tuple1$1sTypephp_clone"
                        # 4 "tuple1$1sTypephp_clone"
                        if(_if_conditional65=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional65) {
                            # 4 "tuple1$1sTypephp_clone"
                            __dec_obj17=result_77->v1;
                            result_77->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(self->v1))));
                            come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value94,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        # 5 "tuple1$1sTypephp_clone"
                        __result74__ = __result_obj__ = result_77;
                        come_call_finalizer3(result_77,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                        return __result74__;
                        come_call_finalizer3(result_77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple1$1sTypeph_finalize"
                            # 0 "tuple1$1sTypeph_finalize"
                            if(_if_conditional64=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional64) {
                                # 0 "tuple1$1sTypeph_finalize"
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional70;
struct list$1sNodeph* __result75__;
void* right_value99;
void* right_value100;
struct list$1sNodeph* result_78;
struct list_item$1sNodeph* it_79;
_Bool _while_condtional14;
void* right_value105;
struct list$1sNodeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_78, 0, sizeof(struct list$1sNodeph*));
memset(&it_79, 0, sizeof(struct list_item$1sNodeph*));
right_value105 = (void*)0;
                        # 133 "./neo-c.h"
                        # 130 "./neo-c.h"
                        if(_if_conditional70=self==((void*)0),                        _if_conditional70) {
                            # 131 "./neo-c.h"
                            __result75__ = __result_obj__ = ((void*)0);
                            return __result75__;
                        }
                        # 133 "./neo-c.h"
                        result_78=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value99=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                        come_call_finalizer3(right_value99,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 135 "./neo-c.h"
                        it_79=self->head;
                        # 142 "./neo-c.h"
                        while(_while_condtional14=it_79!=((void*)0),                        _while_condtional14) {
                            # 137 "./neo-c.h"
                            list$1sNodeph_add(result_78,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=sNode_clone(it_79->item)))));
                            if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 139 "./neo-c.h"
                            it_79=it_79->next;
                        }
                        # 142 "./neo-c.h"
                        __result80__ = __result_obj__ = result_78;
                        come_call_finalizer3(result_78,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result80__;
                        come_call_finalizer3(result_78,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 95 "./neo-c.h"
                            self->head=((void*)0);
                            # 96 "./neo-c.h"
                            self->tail=((void*)0);
                            # 97 "./neo-c.h"
                            self->len=0;
                            # 99 "./neo-c.h"
                            __result76__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result76__;
                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional71;
void* right_value101;
struct list_item$1sNodeph* litem_80;
struct sNode* __dec_obj22;
_Bool _if_conditional72;
void* right_value102;
struct list_item$1sNodeph* litem_81;
struct sNode* __dec_obj23;
void* right_value103;
struct list_item$1sNodeph* litem_82;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sNodeph*));
                                # 177 "./neo-c.h"
                                # 146 "./neo-c.h"
                                if(_if_conditional71=self->len==0,                                _if_conditional71) {
                                    # 147 "./neo-c.h"
                                    litem_80=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 149 "./neo-c.h"
                                    litem_80->prev=((void*)0);
                                    # 150 "./neo-c.h"
                                    litem_80->next=((void*)0);
                                    # 151 "./neo-c.h"
                                    __dec_obj22=litem_80->item;
                                    litem_80->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 153 "./neo-c.h"
                                    self->tail=litem_80;
                                    # 154 "./neo-c.h"
                                    self->head=litem_80;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    # 156 "./neo-c.h"
                                    if(_if_conditional72=self->len==1,                                    _if_conditional72) {
                                        # 157 "./neo-c.h"
                                        litem_81=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                        come_call_finalizer3(right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 159 "./neo-c.h"
                                        litem_81->prev=self->head;
                                        # 160 "./neo-c.h"
                                        litem_81->next=((void*)0);
                                        # 161 "./neo-c.h"
                                        __dec_obj23=litem_81->item;
                                        litem_81->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 163 "./neo-c.h"
                                        self->tail=litem_81;
                                        # 164 "./neo-c.h"
                                        self->head->next=litem_81;
                                    }
                                    else {
                                        # 167 "./neo-c.h"
                                        litem_82=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                        come_call_finalizer3(right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 169 "./neo-c.h"
                                        litem_82->prev=self->tail;
                                        # 170 "./neo-c.h"
                                        litem_82->next=((void*)0);
                                        # 171 "./neo-c.h"
                                        __dec_obj24=litem_82->item;
                                        litem_82->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                        # 173 "./neo-c.h"
                                        self->tail->next=litem_82;
                                        # 174 "./neo-c.h"
                                        self->tail=litem_82;
                                    }
                                }
                                # 177 "./neo-c.h"
                                self->len++;
                                # 179 "./neo-c.h"
                                __result77__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result77__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional73;
struct sNode* __result78__;
void* right_value104;
struct sNode* result_83;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct sNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&result_83, 0, sizeof(struct sNode*));
                                # 3 "sNode_clone"
                                # 2 "sNode_clone"
                                if(_if_conditional73=self==(void*)0,                                _if_conditional73) {
                                    # 2 "sNode_clone"
                                    __result78__ = __result_obj__ = (void*)0;
                                    return __result78__;
                                }
                                # 3 "sNode_clone"
                                result_83=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 5 "sNode_clone"
                                # 4 "sNode_clone"
                                if(_if_conditional74=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional74) {
                                    # 4 "sNode_clone"
                                    result_83->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                # 6 "sNode_clone"
                                # 5 "sNode_clone"
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    # 5 "sNode_clone"
                                    result_83->finalize=self->finalize;
                                }
                                # 7 "sNode_clone"
                                # 6 "sNode_clone"
                                if(_if_conditional76=self!=((void*)0),                                _if_conditional76) {
                                    # 6 "sNode_clone"
                                    result_83->clone=self->clone;
                                }
                                # 8 "sNode_clone"
                                # 7 "sNode_clone"
                                if(_if_conditional77=self!=((void*)0),                                _if_conditional77) {
                                    # 7 "sNode_clone"
                                    result_83->compile=self->compile;
                                }
                                # 9 "sNode_clone"
                                # 8 "sNode_clone"
                                if(_if_conditional78=self!=((void*)0),                                _if_conditional78) {
                                    # 8 "sNode_clone"
                                    result_83->sline=self->sline;
                                }
                                # 10 "sNode_clone"
                                # 9 "sNode_clone"
                                if(_if_conditional79=self!=((void*)0),                                _if_conditional79) {
                                    # 9 "sNode_clone"
                                    result_83->sname=self->sname;
                                }
                                # 11 "sNode_clone"
                                # 10 "sNode_clone"
                                if(_if_conditional80=self!=((void*)0),                                _if_conditional80) {
                                    # 10 "sNode_clone"
                                    result_83->terminated=self->terminated;
                                }
                                # 12 "sNode_clone"
                                # 11 "sNode_clone"
                                if(_if_conditional81=self!=((void*)0),                                _if_conditional81) {
                                    # 11 "sNode_clone"
                                    result_83->kind=self->kind;
                                }
                                # 12 "sNode_clone"
                                __result79__ = __result_obj__ = result_83;
                                if(result_83) { result_83 = come_decrement_ref_count2(result_83, ((struct sNode*)result_83)->finalize, ((struct sNode*)result_83)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result79__;
                                if(result_83) { result_83 = come_decrement_ref_count2(result_83, ((struct sNode*)result_83)->finalize, ((struct sNode*)result_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_84;
_Bool _while_condtional15;
struct list_item$1sNodeph* prev_it_85;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_84, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_85, 0, sizeof(struct list_item$1sNodeph*));
                        # 114 "./neo-c.h"
                        it_84=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional15=it_84!=((void*)0),                        _while_condtional15) {
                            # 116 "./neo-c.h"
                            prev_it_85=it_84;
                            # 117 "./neo-c.h"
                            it_84=it_84->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_85,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional85;
struct list$1charph* __result81__;
void* right_value108;
void* right_value109;
struct list$1charph* result_86;
struct list_item$1charph* it_87;
_Bool _while_condtional16;
void* right_value113;
struct list$1charph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&result_86, 0, sizeof(struct list$1charph*));
memset(&it_87, 0, sizeof(struct list_item$1charph*));
right_value113 = (void*)0;
                        # 133 "./neo-c.h"
                        # 130 "./neo-c.h"
                        if(_if_conditional85=self==((void*)0),                        _if_conditional85) {
                            # 131 "./neo-c.h"
                            __result81__ = __result_obj__ = ((void*)0);
                            return __result81__;
                        }
                        # 133 "./neo-c.h"
                        result_86=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                        come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 135 "./neo-c.h"
                        it_87=self->head;
                        # 142 "./neo-c.h"
                        while(_while_condtional16=it_87!=((void*)0),                        _while_condtional16) {
                            # 137 "./neo-c.h"
                            list$1charph_add(result_86,(char*)come_increment_ref_count(((char*)(right_value113=string_clone(it_87->item)))));
                            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 139 "./neo-c.h"
                            it_87=it_87->next;
                        }
                        # 142 "./neo-c.h"
                        __result84__ = __result_obj__ = result_86;
                        come_call_finalizer3(result_86,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result84__;
                        come_call_finalizer3(result_86,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 95 "./neo-c.h"
                            self->head=((void*)0);
                            # 96 "./neo-c.h"
                            self->tail=((void*)0);
                            # 97 "./neo-c.h"
                            self->len=0;
                            # 99 "./neo-c.h"
                            __result82__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional86;
void* right_value110;
struct list_item$1charph* litem_88;
char* __dec_obj27;
_Bool _if_conditional87;
void* right_value111;
struct list_item$1charph* litem_89;
char* __dec_obj28;
void* right_value112;
struct list_item$1charph* litem_90;
char* __dec_obj29;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1charph*));
right_value112 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1charph*));
                                # 177 "./neo-c.h"
                                # 146 "./neo-c.h"
                                if(_if_conditional86=self->len==0,                                _if_conditional86) {
                                    # 147 "./neo-c.h"
                                    litem_88=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                    come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 149 "./neo-c.h"
                                    litem_88->prev=((void*)0);
                                    # 150 "./neo-c.h"
                                    litem_88->next=((void*)0);
                                    # 151 "./neo-c.h"
                                    __dec_obj27=litem_88->item;
                                    litem_88->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 153 "./neo-c.h"
                                    self->tail=litem_88;
                                    # 154 "./neo-c.h"
                                    self->head=litem_88;
                                }
                                else {
                                    # 177 "./neo-c.h"
                                    # 156 "./neo-c.h"
                                    if(_if_conditional87=self->len==1,                                    _if_conditional87) {
                                        # 157 "./neo-c.h"
                                        litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                        come_call_finalizer3(right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 159 "./neo-c.h"
                                        litem_89->prev=self->head;
                                        # 160 "./neo-c.h"
                                        litem_89->next=((void*)0);
                                        # 161 "./neo-c.h"
                                        __dec_obj28=litem_89->item;
                                        litem_89->item=(char*)come_increment_ref_count(item);
                                        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 163 "./neo-c.h"
                                        self->tail=litem_89;
                                        # 164 "./neo-c.h"
                                        self->head->next=litem_89;
                                    }
                                    else {
                                        # 167 "./neo-c.h"
                                        litem_90=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                        come_call_finalizer3(right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 169 "./neo-c.h"
                                        litem_90->prev=self->tail;
                                        # 170 "./neo-c.h"
                                        litem_90->next=((void*)0);
                                        # 171 "./neo-c.h"
                                        __dec_obj29=litem_90->item;
                                        litem_90->item=(char*)come_increment_ref_count(item);
                                        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        # 173 "./neo-c.h"
                                        self->tail->next=litem_90;
                                        # 174 "./neo-c.h"
                                        self->tail=litem_90;
                                    }
                                }
                                # 177 "./neo-c.h"
                                self->len++;
                                # 179 "./neo-c.h"
                                __result83__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result83__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_91;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_92;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_91, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_92, 0, sizeof(struct list_item$1charph*));
                        # 114 "./neo-c.h"
                        it_91=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional17=it_91!=((void*)0),                        _while_condtional17) {
                            # 116 "./neo-c.h"
                            prev_it_92=it_91;
                            # 117 "./neo-c.h"
                            it_91=it_91->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_92,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj36;
struct sType* __dec_obj37;
struct tuple2$2charphsTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
                # 1738 "./neo-c.h"
                __dec_obj36=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 1739 "./neo-c.h"
                __dec_obj37=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 1741 "./neo-c.h"
                __result86__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result86__;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional135;
int __result87__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 354 "./neo-c.h"
                                    # 351 "./neo-c.h"
                                    if(_if_conditional135=self==((void*)0),                                    _if_conditional135) {
                                        # 352 "./neo-c.h"
                                        __result87__ = 0;
                                        return __result87__;
                                    }
                                    # 354 "./neo-c.h"
                                    __result88__ = self->len;
                                    return __result88__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_96;
_Bool _while_condtional18;
struct list_item$1sNodeph* prev_it_97;
struct list$1sNodeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_97, 0, sizeof(struct list_item$1sNodeph*));
                                        # 420 "./neo-c.h"
                                        it_96=self->head;
                                        # 427 "./neo-c.h"
                                        while(_while_condtional18=it_96!=((void*)0),                                        _while_condtional18) {
                                            # 422 "./neo-c.h"
                                            prev_it_97=it_96;
                                            # 423 "./neo-c.h"
                                            it_96=it_96->next;
                                            # 424 "./neo-c.h"
                                            come_call_finalizer3(prev_it_97,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 427 "./neo-c.h"
                                        self->head=((void*)0);
                                        # 428 "./neo-c.h"
                                        self->tail=((void*)0);
                                        # 430 "./neo-c.h"
                                        self->len=0;
                                        # 432 "./neo-c.h"
                                        __result89__ = __result_obj__ = self;
                                        return __result89__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional137;
void* right_value128;
struct list_item$1tuple2$2charphsTypephph* litem_99;
struct tuple2$2charphsTypeph* __dec_obj38;
_Bool _if_conditional140;
void* right_value129;
struct list_item$1tuple2$2charphsTypephph* litem_100;
struct tuple2$2charphsTypeph* __dec_obj39;
void* right_value130;
struct list_item$1tuple2$2charphsTypephph* litem_101;
struct tuple2$2charphsTypeph* __dec_obj40;
struct list$1tuple2$2charphsTypephph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value129 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value130 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        # 247 "./neo-c.h"
                                        # 216 "./neo-c.h"
                                        if(_if_conditional137=self->len==0,                                        _if_conditional137) {
                                            # 217 "./neo-c.h"
                                            litem_99=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value128=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsTypephph"))));
                                            come_call_finalizer3(right_value128,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 219 "./neo-c.h"
                                            litem_99->prev=((void*)0);
                                            # 220 "./neo-c.h"
                                            litem_99->next=((void*)0);
                                            # 221 "./neo-c.h"
                                            __dec_obj38=litem_99->item;
                                            litem_99->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                            come_call_finalizer3(__dec_obj38,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            # 223 "./neo-c.h"
                                            self->tail=litem_99;
                                            # 224 "./neo-c.h"
                                            self->head=litem_99;
                                        }
                                        else {
                                            # 247 "./neo-c.h"
                                            # 226 "./neo-c.h"
                                            if(_if_conditional140=self->len==1,                                            _if_conditional140) {
                                                # 227 "./neo-c.h"
                                                litem_100=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value129=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                                                come_call_finalizer3(right_value129,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 229 "./neo-c.h"
                                                litem_100->prev=self->head;
                                                # 230 "./neo-c.h"
                                                litem_100->next=((void*)0);
                                                # 231 "./neo-c.h"
                                                __dec_obj39=litem_100->item;
                                                litem_100->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                                come_call_finalizer3(__dec_obj39,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                # 233 "./neo-c.h"
                                                self->tail=litem_100;
                                                # 234 "./neo-c.h"
                                                self->head->next=litem_100;
                                            }
                                            else {
                                                # 237 "./neo-c.h"
                                                litem_101=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value130=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                                                come_call_finalizer3(right_value130,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 239 "./neo-c.h"
                                                litem_101->prev=self->tail;
                                                # 240 "./neo-c.h"
                                                litem_101->next=((void*)0);
                                                # 241 "./neo-c.h"
                                                __dec_obj40=litem_101->item;
                                                litem_101->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                                come_call_finalizer3(__dec_obj40,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                # 243 "./neo-c.h"
                                                self->tail->next=litem_101;
                                                # 244 "./neo-c.h"
                                                self->tail=litem_101;
                                            }
                                        }
                                        # 247 "./neo-c.h"
                                        self->len++;
                                        # 249 "./neo-c.h"
                                        __result90__ = __result_obj__ = self;
                                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result90__;
                                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    if(_if_conditional143=self!=((void*)0)&&self->v1!=((void*)0),                                                    _if_conditional143) {
                                                        # 0 "tuple2$2charphsTypephp_finalize"
                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    # 2 "tuple2$2charphsTypephp_finalize"
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    if(_if_conditional144=self!=((void*)0)&&self->v2!=((void*)0),                                                    _if_conditional144) {
                                                        # 1 "tuple2$2charphsTypephp_finalize"
                                                        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional145;
struct tuple2$2charphsTypeph* __result91__;
void* right_value131;
struct tuple2$2charphsTypeph* result_102;
_Bool _if_conditional148;
void* right_value132;
char* __dec_obj41;
_Bool _if_conditional149;
void* right_value133;
struct sType* __dec_obj42;
struct tuple2$2charphsTypeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&result_102, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value132 = (void*)0;
right_value133 = (void*)0;
                                        # 3 "tuple2$2charphsTypephp_clone"
                                        # 2 "tuple2$2charphsTypephp_clone"
                                        if(_if_conditional145=self==(void*)0,                                        _if_conditional145) {
                                            # 2 "tuple2$2charphsTypephp_clone"
                                            __result91__ = __result_obj__ = (void*)0;
                                            return __result91__;
                                        }
                                        # 3 "tuple2$2charphsTypephp_clone"
                                        result_102=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value131=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                                        come_call_finalizer3(right_value131,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "tuple2$2charphsTypephp_clone"
                                        # 4 "tuple2$2charphsTypephp_clone"
                                        if(_if_conditional148=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional148) {
                                            # 4 "tuple2$2charphsTypephp_clone"
                                            __dec_obj41=result_102->v1;
                                            result_102->v1=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(self->v1))));
                                            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 6 "tuple2$2charphsTypephp_clone"
                                        # 5 "tuple2$2charphsTypephp_clone"
                                        if(_if_conditional149=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional149) {
                                            # 5 "tuple2$2charphsTypephp_clone"
                                            __dec_obj42=result_102->v2;
                                            result_102->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(self->v2))));
                                            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        # 6 "tuple2$2charphsTypephp_clone"
                                        __result92__ = __result_obj__ = result_102;
                                        come_call_finalizer3(result_102,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result92__;
                                        come_call_finalizer3(result_102,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional146;
_Bool _if_conditional147;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "tuple2$2charphsTypeph_finalize"
                                            # 0 "tuple2$2charphsTypeph_finalize"
                                            if(_if_conditional146=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional146) {
                                                # 0 "tuple2$2charphsTypeph_finalize"
                                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "tuple2$2charphsTypeph_finalize"
                                            # 1 "tuple2$2charphsTypeph_finalize"
                                            if(_if_conditional147=self!=((void*)0)&&self->v2!=((void*)0),                                            _if_conditional147) {
                                                # 1 "tuple2$2charphsTypeph_finalize"
                                                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_103;
_Bool _if_conditional150;
_Bool _if_conditional151;
int i_104;
_Bool _if_conditional152;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_103, 0, sizeof(int));
memset(&i_104, 0, sizeof(int));
            # 1112 "./neo-c.h"
            for(            i_103=0;            i_103<self->size;            i_103++            ){
                # 1111 "./neo-c.h"
                # 1106 "./neo-c.h"
                if(_if_conditional150=self->item_existance[i_103],                _if_conditional150) {
                    # 1110 "./neo-c.h"
                    # 1107 "./neo-c.h"
                    if(_if_conditional151=1,                    _if_conditional151) {
                        # 1108 "./neo-c.h"
                        come_call_finalizer3(self->items[i_103],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            # 1112 "./neo-c.h"
            come_free((char*)self->items);
            # 1121 "./neo-c.h"
            for(            i_104=0;            i_104<self->size;            i_104++            ){
                # 1120 "./neo-c.h"
                # 1115 "./neo-c.h"
                if(_if_conditional152=self->item_existance[i_104],                _if_conditional152) {
                    # 1119 "./neo-c.h"
                    # 1116 "./neo-c.h"
                    if(_if_conditional153=1,                    _if_conditional153) {
                        # 1117 "./neo-c.h"
                        self->keys[i_104] = come_decrement_ref_count2(self->keys[i_104], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_105;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_106;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_105, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_106, 0, sizeof(struct list_item$1charp*));
                # 114 "./neo-c.h"
                it_105=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional19=it_105!=((void*)0),                _while_condtional19) {
                    # 116 "./neo-c.h"
                    prev_it_106=it_105;
                    # 117 "./neo-c.h"
                    it_105=it_105->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional154;
unsigned int hash_124;
unsigned int it_125;
_Bool _while_condtional22;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool same_key_exist_142;
char* it2_145;
_Bool _if_conditional197;
_Bool _if_conditional198;
struct map$2charphsClassph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_124, 0, sizeof(unsigned int));
memset(&it_125, 0, sizeof(unsigned int));
memset(&same_key_exist_142, 0, sizeof(_Bool));
memset(&it2_145, 0, sizeof(char*));
        # 1368 "./neo-c.h"
        # 1365 "./neo-c.h"
        if(_if_conditional154=self->len*10>=self->size,        _if_conditional154) {
            # 1366 "./neo-c.h"
            map$2charphsClassph_rehash(self);
        }
        # 1368 "./neo-c.h"
        hash_124=string_get_hash_key(key)%self->size;
        # 1369 "./neo-c.h"
        it_125=hash_124;
        # 1427 "./neo-c.h"
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            # 1425 "./neo-c.h"
            # 1372 "./neo-c.h"
            if(_if_conditional166=self->item_existance[it_125],            _if_conditional166) {
                # 1395 "./neo-c.h"
                # 1374 "./neo-c.h"
                if(_if_conditional167=string_equals(self->keys[it_125],key),                _if_conditional167) {
                    # 1385 "./neo-c.h"
                    # 1376 "./neo-c.h"
                    if(_if_conditional168=1,                    _if_conditional168) {
                        # 1377 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_125]);
                        # 1378 "./neo-c.h"
                        self->keys[it_125] = come_decrement_ref_count2(self->keys[it_125], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        # 1379 "./neo-c.h"
                        self->keys[it_125]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        # 1382 "./neo-c.h"
                        list$1charp_remove(self->key_list,self->keys[it_125]);
                        # 1383 "./neo-c.h"
                        self->keys[it_125]=key;
                    }
                    # 1392 "./neo-c.h"
                    # 1385 "./neo-c.h"
                    if(_if_conditional188=1,                    _if_conditional188) {
                        # 1386 "./neo-c.h"
                        come_call_finalizer3(self->items[it_125],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        # 1387 "./neo-c.h"
                        self->items[it_125]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        # 1390 "./neo-c.h"
                        self->items[it_125]=item;
                    }
                    # 1392 "./neo-c.h"
                    break;
                }
                # 1395 "./neo-c.h"
                it_125++;
                # 1405 "./neo-c.h"
                # 1397 "./neo-c.h"
                if(_if_conditional189=it_125>=self->size,                _if_conditional189) {
                    # 1398 "./neo-c.h"
                    it_125=0;
                }
                else {
                    # 1405 "./neo-c.h"
                    # 1400 "./neo-c.h"
                    if(_if_conditional190=it_125==hash_124,                    _if_conditional190) {
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
                self->item_existance[it_125]=(_Bool)1;
                # 1414 "./neo-c.h"
                # 1408 "./neo-c.h"
                if(_if_conditional191=1,                _if_conditional191) {
                    # 1409 "./neo-c.h"
                    self->keys[it_125]=(char*)come_increment_ref_count(key);
                }
                else {
                    # 1412 "./neo-c.h"
                    self->keys[it_125]=key;
                }
                # 1421 "./neo-c.h"
                # 1414 "./neo-c.h"
                if(_if_conditional192=1,                _if_conditional192) {
                    # 1415 "./neo-c.h"
                    self->items[it_125]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    # 1418 "./neo-c.h"
                    self->items[it_125]=item;
                }
                # 1421 "./neo-c.h"
                self->len++;
                # 1423 "./neo-c.h"
                break;
            }
        }
        # 1427 "./neo-c.h"
        same_key_exist_142=(_Bool)0;
        # 1435 "./neo-c.h"
        for(        it2_145=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_145=list$1charp_next(self->key_list)        ){
            # 1433 "./neo-c.h"
            # 1430 "./neo-c.h"
            if(_if_conditional197=string_equals(it2_145,key),            _if_conditional197) {
                # 1431 "./neo-c.h"
                same_key_exist_142=(_Bool)1;
            }
        }
        # 1439 "./neo-c.h"
        # 1435 "./neo-c.h"
        if(_if_conditional198=!same_key_exist_142,        _if_conditional198) {
            # 1436 "./neo-c.h"
            list$1charp_push_back(self->key_list,key);
        }
        # 1439 "./neo-c.h"
        __result116__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result116__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_107;
void* right_value136;
char** keys_108;
void* right_value137;
struct sClass** items_109;
void* right_value138;
_Bool* item_existance_110;
int len_111;
char* it_114;
struct sClass* default_value_117;
struct sClass* it2_120;
unsigned int hash_121;
int n_122;
_Bool _while_condtional21;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct sClass* default_value_123;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_107, 0, sizeof(int));
right_value136 = (void*)0;
memset(&keys_108, 0, sizeof(char**));
right_value137 = (void*)0;
memset(&items_109, 0, sizeof(struct sClass**));
right_value138 = (void*)0;
memset(&item_existance_110, 0, sizeof(_Bool*));
memset(&len_111, 0, sizeof(int));
memset(&it_114, 0, sizeof(char*));
memset(&default_value_117, 0, sizeof(struct sClass*));
memset(&it2_120, 0, sizeof(struct sClass*));
memset(&hash_121, 0, sizeof(unsigned int));
memset(&n_122, 0, sizeof(int));
memset(&default_value_123, 0, sizeof(struct sClass*));
                # 1312 "./neo-c.h"
                size_107=self->size*10;
                # 1313 "./neo-c.h"
                keys_108=(char**)come_increment_ref_count(((char**)(right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_107)), "./neo-c.h", 1313, "char*%"))));
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1314 "./neo-c.h"
                items_109=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value137=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_107)), "./neo-c.h", 1314, "sClass*%"))));
                come_call_finalizer3(right_value137,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                # 1315 "./neo-c.h"
                item_existance_110=(_Bool*)come_increment_ref_count(((_Bool*)(right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_107)), "./neo-c.h", 1315, "bool"))));
                right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1317 "./neo-c.h"
                len_111=0;
                # 1352 "./neo-c.h"
                for(                it_114=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_114=map$2charphsClassph_next(self)                ){
                    # 1320 "./neo-c.h"
                    # 1321 "./neo-c.h"
                    memset(&default_value_117,0,sizeof(struct sClass*));
                    # 1322 "./neo-c.h"
                    it2_120=map$2charphsClassph_at(self,it_114,default_value_117);
                    # 1323 "./neo-c.h"
                    hash_121=string_get_hash_key(it_114)%size_107;
                    # 1324 "./neo-c.h"
                    n_122=hash_121;
                    # 1350 "./neo-c.h"
                    while(_while_condtional21=(_Bool)1,                    _while_condtional21) {
                        # 1349 "./neo-c.h"
                        # 1327 "./neo-c.h"
                        if(_if_conditional163=item_existance_110[n_122],                        _if_conditional163) {
                            # 1329 "./neo-c.h"
                            n_122++;
                            # 1339 "./neo-c.h"
                            # 1331 "./neo-c.h"
                            if(_if_conditional164=n_122>=size_107,                            _if_conditional164) {
                                # 1332 "./neo-c.h"
                                n_122=0;
                            }
                            else {
                                # 1339 "./neo-c.h"
                                # 1334 "./neo-c.h"
                                if(_if_conditional165=n_122==hash_121,                                _if_conditional165) {
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
                            item_existance_110[n_122]=(_Bool)1;
                            # 1342 "./neo-c.h"
                            keys_108[n_122]=it_114;
                            # 1343 "./neo-c.h"
                            # 1344 "./neo-c.h"
                            items_109[n_122]=map$2charphsClassph_at(self,it_114,default_value_123);
                            # 1346 "./neo-c.h"
                            len_111++;
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
                self->keys=keys_108;
                # 1357 "./neo-c.h"
                self->items=items_109;
                # 1358 "./neo-c.h"
                self->item_existance=item_existance_110;
                # 1360 "./neo-c.h"
                self->size=size_107;
                # 1361 "./neo-c.h"
                self->len=len_111;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional155;
char* result_112;
char* __result93__;
_Bool _if_conditional156;
char* __result94__;
char* result_113;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(char*));
memset(&result_113, 0, sizeof(char*));
                    # 1279 "./neo-c.h"
                    # 1274 "./neo-c.h"
                    if(_if_conditional155=self==((void*)0),                    _if_conditional155) {
                        # 1275 "./neo-c.h"
                        # 1276 "./neo-c.h"
                        memset(&result_112,0,sizeof(char*));
                        # 1277 "./neo-c.h"
                        __result93__ = __result_obj__ = result_112;
                        return __result93__;
                    }
                    # 1279 "./neo-c.h"
                    self->key_list->it=self->key_list->head;
                    # 1285 "./neo-c.h"
                    # 1281 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1282 "./neo-c.h"
                        __result94__ = __result_obj__ = self->key_list->it->item;
                        return __result94__;
                    }
                    # 1285 "./neo-c.h"
                    # 1286 "./neo-c.h"
                    memset(&result_113,0,sizeof(char*));
                    # 1287 "./neo-c.h"
                    __result95__ = __result_obj__ = result_113;
                    return __result95__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1308 "./neo-c.h"
                    __result96__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result96__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional157;
char* result_115;
char* __result97__;
_Bool _if_conditional158;
char* __result98__;
char* result_116;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(char*));
memset(&result_116, 0, sizeof(char*));
                    # 1296 "./neo-c.h"
                    # 1291 "./neo-c.h"
                    if(_if_conditional157=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional157) {
                        # 1292 "./neo-c.h"
                        # 1293 "./neo-c.h"
                        memset(&result_115,0,sizeof(char*));
                        # 1294 "./neo-c.h"
                        __result97__ = __result_obj__ = result_115;
                        return __result97__;
                    }
                    # 1296 "./neo-c.h"
                    self->key_list->it=self->key_list->it->next;
                    # 1302 "./neo-c.h"
                    # 1298 "./neo-c.h"
                    if(self->key_list->it) {
                        # 1299 "./neo-c.h"
                        __result98__ = __result_obj__ = self->key_list->it->item;
                        return __result98__;
                    }
                    # 1302 "./neo-c.h"
                    # 1303 "./neo-c.h"
                    memset(&result_116,0,sizeof(char*));
                    # 1304 "./neo-c.h"
                    __result99__ = __result_obj__ = result_116;
                    return __result99__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_118;
unsigned int it_119;
_Bool _while_condtional20;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct sClass* __result100__;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct sClass* __result101__;
struct sClass* __result102__;
struct sClass* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_118, 0, sizeof(unsigned int));
memset(&it_119, 0, sizeof(unsigned int));
                        # 1201 "./neo-c.h"
                        hash_118=string_get_hash_key(((char*)key))%self->size;
                        # 1202 "./neo-c.h"
                        it_119=hash_118;
                        # 1226 "./neo-c.h"
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            # 1224 "./neo-c.h"
                            # 1205 "./neo-c.h"
                            if(_if_conditional159=self->item_existance[it_119],                            _if_conditional159) {
                                # 1212 "./neo-c.h"
                                # 1207 "./neo-c.h"
                                if(_if_conditional160=string_equals(self->keys[it_119],key),                                _if_conditional160) {
                                    # 1209 "./neo-c.h"
                                    __result100__ = __result_obj__ = self->items[it_119];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result100__;
                                }
                                # 1212 "./neo-c.h"
                                it_119++;
                                # 1220 "./neo-c.h"
                                # 1214 "./neo-c.h"
                                if(_if_conditional161=it_119>=self->size,                                _if_conditional161) {
                                    # 1215 "./neo-c.h"
                                    it_119=0;
                                }
                                else {
                                    # 1220 "./neo-c.h"
                                    # 1217 "./neo-c.h"
                                    if(_if_conditional162=it_119==hash_118,                                    _if_conditional162) {
                                        # 1218 "./neo-c.h"
                                        __result101__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result101__;
                                    }
                                }
                            }
                            else {
                                # 1222 "./neo-c.h"
                                __result102__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result102__;
                            }
                        }
                        # 1226 "./neo-c.h"
                        __result103__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result103__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_126;
struct list_item$1charp* it_127;
_Bool _while_condtional23;
_Bool _if_conditional169;
struct list$1charp* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_126, 0, sizeof(int));
memset(&it_127, 0, sizeof(struct list_item$1charp*));
                            # 435 "./neo-c.h"
                            it2_126=0;
                            # 436 "./neo-c.h"
                            it_127=self->head;
                            # 447 "./neo-c.h"
                            while(_while_condtional23=it_127!=((void*)0),                            _while_condtional23) {
                                # 442 "./neo-c.h"
                                # 438 "./neo-c.h"
                                if(_if_conditional169=string_equals(it_127->item,item),                                _if_conditional169) {
                                    # 439 "./neo-c.h"
                                    list$1charp_delete(self,it2_126,it2_126+1);
                                    # 440 "./neo-c.h"
                                    break;
                                }
                                # 442 "./neo-c.h"
                                it2_126++;
                                # 444 "./neo-c.h"
                                it_127=it_127->next;
                            }
                            # 447 "./neo-c.h"
                            __result107__ = __result_obj__ = self;
                            return __result107__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
int tmp_128;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
struct list$1charp* __result104__;
_Bool _if_conditional176;
_Bool _if_conditional177;
struct list_item$1charp* it_131;
int i_132;
_Bool _while_condtional25;
_Bool _if_conditional178;
struct list_item$1charp* prev_it_133;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct list_item$1charp* it_134;
int i_135;
_Bool _while_condtional26;
_Bool _if_conditional181;
_Bool _if_conditional182;
struct list_item$1charp* prev_it_136;
struct list_item$1charp* it_137;
struct list_item$1charp* head_prev_it_138;
struct list_item$1charp* tail_it_139;
int i_140;
_Bool _while_condtional27;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
struct list_item$1charp* prev_it_141;
_Bool _if_conditional186;
_Bool _if_conditional187;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_128, 0, sizeof(int));
memset(&it_131, 0, sizeof(struct list_item$1charp*));
memset(&i_132, 0, sizeof(int));
memset(&prev_it_133, 0, sizeof(struct list_item$1charp*));
memset(&it_134, 0, sizeof(struct list_item$1charp*));
memset(&i_135, 0, sizeof(int));
memset(&prev_it_136, 0, sizeof(struct list_item$1charp*));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_138, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_139, 0, sizeof(struct list_item$1charp*));
memset(&i_140, 0, sizeof(int));
memset(&prev_it_141, 0, sizeof(struct list_item$1charp*));
                                        # 454 "./neo-c.h"
                                        # 451 "./neo-c.h"
                                        if(_if_conditional170=head<0,                                        _if_conditional170) {
                                            # 452 "./neo-c.h"
                                            head+=self->len;
                                        }
                                        # 458 "./neo-c.h"
                                        # 454 "./neo-c.h"
                                        if(_if_conditional171=tail<0,                                        _if_conditional171) {
                                            # 455 "./neo-c.h"
                                            tail+=self->len+1;
                                        }
                                        # 464 "./neo-c.h"
                                        # 458 "./neo-c.h"
                                        if(_if_conditional172=head>tail,                                        _if_conditional172) {
                                            # 459 "./neo-c.h"
                                            tmp_128=tail;
                                            # 460 "./neo-c.h"
                                            tail=head;
                                            # 461 "./neo-c.h"
                                            head=tmp_128;
                                        }
                                        # 468 "./neo-c.h"
                                        # 464 "./neo-c.h"
                                        if(_if_conditional173=head<0,                                        _if_conditional173) {
                                            # 465 "./neo-c.h"
                                            head=0;
                                        }
                                        # 472 "./neo-c.h"
                                        # 468 "./neo-c.h"
                                        if(_if_conditional174=tail>self->len,                                        _if_conditional174) {
                                            # 469 "./neo-c.h"
                                            tail=self->len;
                                        }
                                        # 476 "./neo-c.h"
                                        # 472 "./neo-c.h"
                                        if(_if_conditional175=head==tail,                                        _if_conditional175) {
                                            # 473 "./neo-c.h"
                                            __result104__ = __result_obj__ = self;
                                            return __result104__;
                                        }
                                        # 571 "./neo-c.h"
                                        # 476 "./neo-c.h"
                                        if(_if_conditional176=head==0&&tail==self->len,                                        _if_conditional176) {
                                            # 478 "./neo-c.h"
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            # 571 "./neo-c.h"
                                            # 480 "./neo-c.h"
                                            if(_if_conditional177=head==0,                                            _if_conditional177) {
                                                # 481 "./neo-c.h"
                                                it_131=self->head;
                                                # 482 "./neo-c.h"
                                                i_132=0;
                                                # 504 "./neo-c.h"
                                                while(_while_condtional25=it_131!=((void*)0),                                                _while_condtional25) {
                                                    # 503 "./neo-c.h"
                                                    # 484 "./neo-c.h"
                                                    if(_if_conditional178=i_132<tail,                                                    _if_conditional178) {
                                                        # 485 "./neo-c.h"
                                                        prev_it_133=it_131;
                                                        # 487 "./neo-c.h"
                                                        it_131=it_131->next;
                                                        # 488 "./neo-c.h"
                                                        i_132++;
                                                        # 490 "./neo-c.h"
                                                        come_call_finalizer3(prev_it_133,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        # 492 "./neo-c.h"
                                                        self->len--;
                                                    }
                                                    else {
                                                        # 503 "./neo-c.h"
                                                        # 494 "./neo-c.h"
                                                        if(_if_conditional179=i_132==tail,                                                        _if_conditional179) {
                                                            # 495 "./neo-c.h"
                                                            self->head=it_131;
                                                            # 496 "./neo-c.h"
                                                            self->head->prev=((void*)0);
                                                            # 497 "./neo-c.h"
                                                            break;
                                                        }
                                                        else {
                                                            # 500 "./neo-c.h"
                                                            it_131=it_131->next;
                                                            # 501 "./neo-c.h"
                                                            i_132++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                # 571 "./neo-c.h"
                                                # 505 "./neo-c.h"
                                                if(_if_conditional180=tail==self->len,                                                _if_conditional180) {
                                                    # 506 "./neo-c.h"
                                                    it_134=self->head;
                                                    # 507 "./neo-c.h"
                                                    i_135=0;
                                                    # 529 "./neo-c.h"
                                                    while(_while_condtional26=it_134!=((void*)0),                                                    _while_condtional26) {
                                                        # 514 "./neo-c.h"
                                                        # 509 "./neo-c.h"
                                                        if(_if_conditional181=i_135==head,                                                        _if_conditional181) {
                                                            # 510 "./neo-c.h"
                                                            self->tail=it_134->prev;
                                                            # 511 "./neo-c.h"
                                                            self->tail->next=((void*)0);
                                                        }
                                                        # 528 "./neo-c.h"
                                                        # 514 "./neo-c.h"
                                                        if(_if_conditional182=i_135>=head,                                                        _if_conditional182) {
                                                            # 515 "./neo-c.h"
                                                            prev_it_136=it_134;
                                                            # 517 "./neo-c.h"
                                                            it_134=it_134->next;
                                                            # 518 "./neo-c.h"
                                                            i_135++;
                                                            # 520 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_136,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 522 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 525 "./neo-c.h"
                                                            it_134=it_134->next;
                                                            # 526 "./neo-c.h"
                                                            i_135++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 531 "./neo-c.h"
                                                    it_137=self->head;
                                                    # 533 "./neo-c.h"
                                                    head_prev_it_138=((void*)0);
                                                    # 534 "./neo-c.h"
                                                    tail_it_139=((void*)0);
                                                    # 537 "./neo-c.h"
                                                    i_140=0;
                                                    # 563 "./neo-c.h"
                                                    while(_while_condtional27=it_137!=((void*)0),                                                    _while_condtional27) {
                                                        # 542 "./neo-c.h"
                                                        # 539 "./neo-c.h"
                                                        if(_if_conditional183=i_140==head,                                                        _if_conditional183) {
                                                            # 540 "./neo-c.h"
                                                            head_prev_it_138=it_137->prev;
                                                        }
                                                        # 546 "./neo-c.h"
                                                        # 542 "./neo-c.h"
                                                        if(_if_conditional184=i_140==tail,                                                        _if_conditional184) {
                                                            # 543 "./neo-c.h"
                                                            tail_it_139=it_137;
                                                        }
                                                        # 561 "./neo-c.h"
                                                        # 546 "./neo-c.h"
                                                        if(_if_conditional185=i_140>=head&&i_140<tail,                                                        _if_conditional185) {
                                                            # 548 "./neo-c.h"
                                                            prev_it_141=it_137;
                                                            # 550 "./neo-c.h"
                                                            it_137=it_137->next;
                                                            # 551 "./neo-c.h"
                                                            i_140++;
                                                            # 553 "./neo-c.h"
                                                            come_call_finalizer3(prev_it_141,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            # 555 "./neo-c.h"
                                                            self->len--;
                                                        }
                                                        else {
                                                            # 558 "./neo-c.h"
                                                            it_137=it_137->next;
                                                            # 559 "./neo-c.h"
                                                            i_140++;
                                                        }
                                                    }
                                                    # 566 "./neo-c.h"
                                                    # 563 "./neo-c.h"
                                                    if(_if_conditional186=head_prev_it_138!=((void*)0),                                                    _if_conditional186) {
                                                        # 564 "./neo-c.h"
                                                        head_prev_it_138->next=tail_it_139;
                                                    }
                                                    # 569 "./neo-c.h"
                                                    # 566 "./neo-c.h"
                                                    if(_if_conditional187=tail_it_139!=((void*)0),                                                    _if_conditional187) {
                                                        # 567 "./neo-c.h"
                                                        tail_it_139->prev=head_prev_it_138;
                                                    }
                                                }
                                            }
                                        }
                                        # 571 "./neo-c.h"
                                        __result106__ = __result_obj__ = self;
                                        return __result106__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_129;
_Bool _while_condtional24;
struct list_item$1charp* prev_it_130;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_129, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_130, 0, sizeof(struct list_item$1charp*));
                                                # 420 "./neo-c.h"
                                                it_129=self->head;
                                                # 427 "./neo-c.h"
                                                while(_while_condtional24=it_129!=((void*)0),                                                _while_condtional24) {
                                                    # 422 "./neo-c.h"
                                                    prev_it_130=it_129;
                                                    # 423 "./neo-c.h"
                                                    it_129=it_129->next;
                                                    # 424 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_130,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 427 "./neo-c.h"
                                                self->head=((void*)0);
                                                # 428 "./neo-c.h"
                                                self->tail=((void*)0);
                                                # 430 "./neo-c.h"
                                                self->len=0;
                                                # 432 "./neo-c.h"
                                                __result105__ = __result_obj__ = self;
                                                return __result105__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional193;
char* result_143;
char* __result108__;
_Bool _if_conditional194;
char* __result109__;
char* result_144;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_143, 0, sizeof(char*));
memset(&result_144, 0, sizeof(char*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional193=self==((void*)0),            _if_conditional193) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_143,0,sizeof(char*));
                # 279 "./neo-c.h"
                __result108__ = __result_obj__ = result_143;
                return __result108__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result109__ = __result_obj__ = self->it->item;
                return __result109__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_144,0,sizeof(char*));
            # 289 "./neo-c.h"
            __result110__ = __result_obj__ = result_144;
            return __result110__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result111__ = self==((void*)0)||self->it==((void*)0);
            return __result111__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional195;
char* result_146;
char* __result112__;
_Bool _if_conditional196;
char* __result113__;
char* result_147;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(char*));
memset(&result_147, 0, sizeof(char*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional195=self==((void*)0)||self->it==((void*)0),            _if_conditional195) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_146,0,sizeof(char*));
                # 296 "./neo-c.h"
                __result112__ = __result_obj__ = result_146;
                return __result112__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result113__ = __result_obj__ = self->it->item;
                return __result113__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_147,0,sizeof(char*));
            # 307 "./neo-c.h"
            __result114__ = __result_obj__ = result_147;
            return __result114__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional199;
void* right_value139;
struct list_item$1charp* litem_148;
_Bool _if_conditional200;
void* right_value140;
struct list_item$1charp* litem_149;
void* right_value141;
struct list_item$1charp* litem_150;
struct list$1charp* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1charp*));
right_value140 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charp*));
right_value141 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charp*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional199=self->len==0,                _if_conditional199) {
                    # 217 "./neo-c.h"
                    litem_148=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value139,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_148->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_148->next=((void*)0);
                    # 221 "./neo-c.h"
                    litem_148->item=item;
                    # 223 "./neo-c.h"
                    self->tail=litem_148;
                    # 224 "./neo-c.h"
                    self->head=litem_148;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional200=self->len==1,                    _if_conditional200) {
                        # 227 "./neo-c.h"
                        litem_149=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value140,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_149->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_149->next=((void*)0);
                        # 231 "./neo-c.h"
                        litem_149->item=item;
                        # 233 "./neo-c.h"
                        self->tail=litem_149;
                        # 234 "./neo-c.h"
                        self->head->next=litem_149;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_150=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value141,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_150->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_150->next=((void*)0);
                        # 241 "./neo-c.h"
                        litem_150->item=item;
                        # 243 "./neo-c.h"
                        self->tail->next=litem_150;
                        # 244 "./neo-c.h"
                        self->tail=litem_150;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result115__ = __result_obj__ = self;
                return __result115__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional207;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional207=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional207) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional208=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional208) {
            # 1 "CVALUE_finalize"
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional209;
void* right_value149;
struct list_item$1CVALUEph* litem_159;
struct CVALUE* __dec_obj45;
_Bool _if_conditional211;
void* right_value150;
struct list_item$1CVALUEph* litem_160;
struct CVALUE* __dec_obj46;
void* right_value151;
struct list_item$1CVALUEph* litem_161;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1CVALUEph*));
right_value150 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1CVALUEph*));
right_value151 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1CVALUEph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional209=self->len==0,        _if_conditional209) {
            # 217 "./neo-c.h"
            litem_159=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_159->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_159->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj45=litem_159->item;
            litem_159->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_159;
            # 224 "./neo-c.h"
            self->head=litem_159;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional211=self->len==1,            _if_conditional211) {
                # 227 "./neo-c.h"
                litem_160=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_160->prev=self->head;
                # 230 "./neo-c.h"
                litem_160->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj46=litem_160->item;
                litem_160->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_160;
                # 234 "./neo-c.h"
                self->head->next=litem_160;
            }
            else {
                # 237 "./neo-c.h"
                litem_161=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value151=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value151,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_161->prev=self->tail;
                # 240 "./neo-c.h"
                litem_161->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj47=litem_161->item;
                litem_161->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_161;
                # 244 "./neo-c.h"
                self->tail=litem_161;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result117__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result117__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional210=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional210) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value152;
char* none_generics_name_162;
void* right_value153;
char* fun_name2_163;
void* right_value154;
char* fun_name3_164;
struct sGenericsFun* generics_fun_167;
_Bool _if_conditional226;
void* right_value155;
_Bool _if_conditional227;
void* right_value156;
char* __result123__;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&none_generics_name_162, 0, sizeof(char*));
right_value153 = (void*)0;
memset(&fun_name2_163, 0, sizeof(char*));
right_value154 = (void*)0;
memset(&fun_name3_164, 0, sizeof(char*));
memset(&generics_fun_167, 0, sizeof(struct sGenericsFun*));
right_value155 = (void*)0;
right_value156 = (void*)0;
    # 148 "20method.c"
    none_generics_name_162=(char*)come_increment_ref_count(((char*)(right_value152=get_none_generics_name(type->mClass->mName))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 149 "20method.c"
    fun_name2_163=(char*)come_increment_ref_count(((char*)(right_value153=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 150 "20method.c"
    fun_name3_164=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s_%s",none_generics_name_162,fun_name))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 152 "20method.c"
    generics_fun_167=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_164,((void*)0));
    # 161 "20method.c"
    # 154 "20method.c"
    if(generics_fun_167) {
        # 159 "20method.c"
        # 155 "20method.c"
        if(_if_conditional227=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(fun_name2_163)))),generics_fun_167,type,info),        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional227) {
            # 156 "20method.c"
            err_msg(info,"%s not found",fun_name3_164);
            # 157 "20method.c"
            __result123__ = __result_obj__ = ((char*)(right_value156=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result123__;
        }
    }
    # 161 "20method.c"
    __result124__ = __result_obj__ = fun_name2_163;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result124__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_165;
unsigned int it_166;
_Bool _while_condtional28;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sGenericsFun* __result119__;
_Bool _if_conditional224;
_Bool _if_conditional225;
struct sGenericsFun* __result120__;
struct sGenericsFun* __result121__;
struct sGenericsFun* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_165, 0, sizeof(unsigned int));
memset(&it_166, 0, sizeof(unsigned int));
        # 1201 "./neo-c.h"
        hash_165=string_get_hash_key(((char*)key))%self->size;
        # 1202 "./neo-c.h"
        it_166=hash_165;
        # 1226 "./neo-c.h"
        while(_while_condtional28=(_Bool)1,        _while_condtional28) {
            # 1224 "./neo-c.h"
            # 1205 "./neo-c.h"
            if(_if_conditional212=self->item_existance[it_166],            _if_conditional212) {
                # 1212 "./neo-c.h"
                # 1207 "./neo-c.h"
                if(_if_conditional213=string_equals(self->keys[it_166],key),                _if_conditional213) {
                    # 1209 "./neo-c.h"
                    __result119__ = __result_obj__ = self->items[it_166];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result119__;
                }
                # 1212 "./neo-c.h"
                it_166++;
                # 1220 "./neo-c.h"
                # 1214 "./neo-c.h"
                if(_if_conditional224=it_166>=self->size,                _if_conditional224) {
                    # 1215 "./neo-c.h"
                    it_166=0;
                }
                else {
                    # 1220 "./neo-c.h"
                    # 1217 "./neo-c.h"
                    if(_if_conditional225=it_166==hash_165,                    _if_conditional225) {
                        # 1218 "./neo-c.h"
                        __result120__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result120__;
                    }
                }
            }
            else {
                # 1222 "./neo-c.h"
                __result121__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result121__;
            }
        }
        # 1226 "./neo-c.h"
        __result122__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result122__;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sGenericsFun_finalize"
                        # 0 "sGenericsFun_finalize"
                        if(_if_conditional214=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional214) {
                            # 0 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sGenericsFun_finalize"
                        # 1 "sGenericsFun_finalize"
                        if(_if_conditional215=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional215) {
                            # 1 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sGenericsFun_finalize"
                        # 2 "sGenericsFun_finalize"
                        if(_if_conditional216=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional216) {
                            # 2 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sGenericsFun_finalize"
                        # 3 "sGenericsFun_finalize"
                        if(_if_conditional217=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional217) {
                            # 3 "sGenericsFun_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 5 "sGenericsFun_finalize"
                        # 4 "sGenericsFun_finalize"
                        if(_if_conditional218=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional218) {
                            # 4 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 6 "sGenericsFun_finalize"
                        # 5 "sGenericsFun_finalize"
                        if(_if_conditional219=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional219) {
                            # 5 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 7 "sGenericsFun_finalize"
                        # 6 "sGenericsFun_finalize"
                        if(_if_conditional220=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional220) {
                            # 6 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 8 "sGenericsFun_finalize"
                        # 7 "sGenericsFun_finalize"
                        if(_if_conditional221=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional221) {
                            # 7 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 9 "sGenericsFun_finalize"
                        # 8 "sGenericsFun_finalize"
                        if(_if_conditional222=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional222) {
                            # 8 "sGenericsFun_finalize"
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 10 "sGenericsFun_finalize"
                        # 9 "sGenericsFun_finalize"
                        if(_if_conditional223=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional223) {
                            # 9 "sGenericsFun_finalize"
                            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value157;
struct sNode* __dec_obj48;
void* right_value158;
char* __dec_obj49;
void* right_value168;
struct list$1tuple2$2charphsNodephph* __dec_obj55;
void* right_value169;
struct buffer* __dec_obj56;
void* right_value170;
char* __dec_obj57;
void* right_value171;
struct list$1sTypeph* __dec_obj58;
struct sMethodCallNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
    # 175 "20method.c"
    __dec_obj48=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=sNode_clone(obj))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 176 "20method.c"
    __dec_obj49=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(fun_name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 177 "20method.c"
    __dec_obj55=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value168=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj55,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value168,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 178 "20method.c"
    __dec_obj56=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=buffer_clone(method_block))));
    come_call_finalizer3(__dec_obj56,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 179 "20method.c"
    self->sline=info->sline;
    # 180 "20method.c"
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 181 "20method.c"
    self->method_block_sline=method_block_sline;
    # 182 "20method.c"
    __dec_obj58=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value171=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer3(__dec_obj58,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value171,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 185 "20method.c"
    __result131__ = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result131__;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional251;
_Bool __result132__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    # 193 "20method.c"
    # 187 "20method.c"
    if(self->method_block) {
        # 188 "20method.c"
        __result132__ = (_Bool)1;
        return __result132__;
    }
    else {
        # 191 "20method.c"
        __result133__ = (_Bool)0;
        return __result133__;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__;
void* right_value172;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    # 197 "20method.c"
    __result134__ = __result_obj__ = ((char*)(right_value172=__builtin_string("sMethodCallNode")));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_178;
struct list$1tuple2$2charphsNodephph* params_179;
struct sNode* obj_180;
struct buffer* method_block_181;
int method_block_sline_182;
struct list$1sTypeph* method_generics_types_183;
void* right_value173;
struct list$1sTypeph* __dec_obj59;
_Bool _if_conditional252;
_Bool __result135__;
void* right_value174;
struct CVALUE* obj_value_184;
_Bool _if_conditional253;
void* right_value175;
void* right_value176;
char* __dec_obj60;
void* right_value177;
struct sType* obj_type_185;
struct sClass* klass_186;
_Bool calling_dynamic_method_187;
struct sType* lambda_type_188;
struct list$1tuple2$2charphsTypephph* o2_saved_189;
struct tuple2$2charphsTypeph* it_192;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_195;
struct sType* field_type_196;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value178;
struct sType* result_type_197;
void* right_value179;
void* right_value180;
struct list$1CVALUEph* come_params_200;
int i_201;
struct list$1tuple2$2charphsNodephph* o2_saved_202;
struct tuple2$2charphsNodeph* it_205;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_208;
struct sNode* node_209;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool __result151__;
void* right_value181;
struct CVALUE* come_value_210;
void* right_value182;
void* right_value183;
void* right_value184;
_Bool _if_conditional268;
void* right_value185;
void* right_value186;
struct buffer* buf_214;
void* right_value187;
int j_215;
struct list$1CVALUEph* o2_saved_216;
struct CVALUE* it_219;
_Bool _if_conditional273;
void* right_value188;
char* __dec_obj61;
_Bool _if_conditional275;
void* right_value189;
struct CVALUE* come_value2_222;
void* right_value190;
char* __dec_obj62;
void* right_value191;
struct sType* result_type2_223;
_Bool _if_conditional276;
void* right_value192;
void* right_value193;
char* __dec_obj63;
void* right_value194;
struct sType* __dec_obj64;
void* right_value195;
void* right_value196;
void* right_value197;
char* generics_fun_name_224;
struct sFun* fun_225;
int i_226;
void* right_value198;
char* new_fun_name_227;
_Bool _if_conditional296;
void* right_value199;
char* __dec_obj65;
_Bool _if_conditional297;
struct sType* obj_array_type_231;
_Bool _if_conditional298;
void* right_value200;
char* array_method_name_232;
_Bool _if_conditional303;
void* right_value201;
char* __dec_obj66;
_Bool _if_conditional304;
void* right_value202;
void* right_value203;
char* __dec_obj67;
_Bool _if_conditional305;
_Bool __result171__;
_Bool _if_conditional306;
void* right_value204;
void* right_value205;
char* __dec_obj68;
_Bool _if_conditional307;
struct sClass* klass_235;
_Bool _while_condtional37;
void* right_value206;
char* __dec_obj69;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool __result176__;
_Bool _if_conditional314;
_Bool __result177__;
_Bool _if_conditional316;
_Bool __result180__;
void* right_value207;
struct sType* result_type_239;
void* right_value208;
struct sType* result_type2_240;
void* right_value209;
void* right_value210;
struct list$1sTypeph* param_types_241;
struct list$1sTypeph* o2_saved_242;
struct sType* it_245;
_Bool _if_conditional321;
void* right_value214;
struct sType* it2_251;
void* right_value215;
void* right_value216;
void* right_value217;
struct list$1CVALUEph* come_params_252;
int i_253;
_Bool first_param_257;
struct list$1tuple2$2charphsNodephph* o2_saved_258;
struct tuple2$2charphsNodeph* it_259;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_260;
struct sNode* node_261;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool __result190__;
void* right_value221;
struct CVALUE* come_value_262;
int n_263;
struct list$1charph* o2_saved_264;
char* it_267;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value222;
void* right_value223;
void* right_value224;
_Bool _if_conditional335;
int i_272;
struct list$1tuple2$2charphsNodephph* o2_saved_273;
struct tuple2$2charphsNodeph* it_274;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_275;
struct sNode* node_276;
_Bool _if_conditional339;
void* right_value225;
void* right_value226;
void* right_value227;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool __result202__;
void* right_value228;
struct CVALUE* come_value_280;
_Bool _while_condtional40;
_Bool _if_conditional348;
_Bool _if_conditional349;
void* right_value229;
void* right_value230;
void* right_value231;
_Bool _if_conditional350;
_Bool _while_condtional42;
_Bool _if_conditional351;
struct sType* obj_array_type_284;
_Bool _if_conditional352;
void* right_value232;
char* array_method_name_285;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value233;
void* right_value234;
struct buffer* buf_286;
int i_287;
struct list$1sNodeph* o2_saved_288;
struct sNode* it_291;
_Bool _if_conditional359;
void* right_value235;
struct CVALUE* come_value_294;
void* right_value236;
_Bool _if_conditional360;
void* right_value237;
struct CVALUE* come_value_295;
void* right_value238;
char* __dec_obj77;
void* right_value239;
void* right_value240;
struct sType* __dec_obj78;
void* right_value244;
void* right_value245;
void* right_value246;
_Bool _if_conditional364;
void* right_value247;
void* right_value248;
struct buffer* buf_299;
int i_300;
struct list$1sNodeph* o2_saved_301;
struct sNode* it_302;
_Bool _if_conditional365;
void* right_value249;
struct CVALUE* come_value_303;
void* right_value250;
_Bool _if_conditional366;
void* right_value251;
struct CVALUE* come_value_304;
void* right_value252;
char* __dec_obj83;
void* right_value253;
void* right_value254;
struct sType* __dec_obj84;
void* right_value255;
void* right_value256;
void* right_value257;
_Bool _if_conditional367;
void* right_value258;
void* right_value259;
struct buffer* buf_305;
int i_306;
struct list$1sNodeph* o2_saved_307;
struct sNode* it_308;
_Bool _if_conditional368;
void* right_value260;
struct CVALUE* come_value_309;
void* right_value261;
_Bool _if_conditional369;
void* right_value262;
struct CVALUE* come_value_310;
void* right_value263;
char* __dec_obj85;
void* right_value264;
void* right_value265;
struct sType* __dec_obj86;
void* right_value266;
void* right_value267;
void* right_value268;
_Bool _if_conditional370;
void* right_value269;
void* right_value270;
struct buffer* buf_311;
int i_312;
struct list$1sNodeph* o2_saved_313;
struct sNode* it_314;
_Bool _if_conditional371;
void* right_value271;
struct CVALUE* come_value_315;
void* right_value272;
_Bool _if_conditional372;
void* right_value273;
struct CVALUE* come_value_316;
void* right_value274;
char* __dec_obj87;
void* right_value275;
void* right_value276;
struct sType* __dec_obj88;
void* right_value277;
void* right_value278;
void* right_value279;
_Bool _if_conditional374;
void* right_value280;
char* default_param_317;
char* param_name_318;
_Bool _if_conditional375;
struct buffer* source_319;
char* p_320;
char* head_321;
int sline_322;
void* right_value281;
struct buffer* __dec_obj89;
void* right_value282;
struct sNode* node_323;
_Bool _if_conditional376;
_Bool __result216__;
struct buffer* __dec_obj90;
void* right_value283;
struct CVALUE* come_value_324;
_Bool _if_conditional377;
void* right_value284;
void* right_value285;
void* right_value286;
_Bool _if_conditional378;
_Bool _if_conditional379;
_Bool __result217__;
_Bool _if_conditional380;
void* right_value287;
void* right_value288;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value291;
struct sNode* current_stack_frame_node_326;
_Bool _if_conditional385;
_Bool __result220__;
void* right_value292;
struct CVALUE* come_value_327;
void* right_value293;
void* right_value294;
struct buffer* method_block2_328;
void* right_value295;
struct sType* method_block_type_329;
void* right_value296;
char* class_name_330;
struct sClass* current_stack_frame_struct_331;
_Bool _if_conditional386;
_Bool __result221__;
void* right_value297;
struct sType* result_type_332;
struct list$1sTypeph* param_types_333;
struct list$1charph* param_names_334;
void* right_value298;
void* right_value299;
struct buffer* all_alhabet_sname_335;
char* p_336;
_Bool _while_condtional43;
_Bool _if_conditional387;
void* right_value300;
void* right_value301;
void* right_value302;
int i_337;
struct list$1sTypeph* o2_saved_338;
struct sType* it_339;
struct sType* param_type_340;
_Bool _if_conditional388;
void* right_value303;
char* param_name_341;
void* right_value304;
void* right_value305;
_Bool _if_conditional389;
void* right_value306;
char* param_name_342;
void* right_value307;
void* right_value308;
void* right_value309;
char* param_name_343;
void* right_value310;
void* right_value311;
_Bool _if_conditional390;
void* right_value312;
struct buffer* source3_344;
char* p_345;
char* head_346;
int sline_347;
struct buffer* __dec_obj92;
void* right_value313;
struct sNode* node_348;
_Bool _if_conditional391;
_Bool __result222__;
void* right_value314;
void* right_value315;
char* method_block_name_349;
void* right_value316;
struct CVALUE* come_value2_350;
struct sFun* fun2_351;
_Bool _if_conditional392;
_Bool __result223__;
struct sType* method_block_type2_352;
void* right_value317;
char* __dec_obj93;
void* right_value318;
struct sType* __dec_obj94;
struct buffer* __dec_obj95;
void* right_value319;
void* right_value320;
struct buffer* buf_353;
int j_354;
struct list$1CVALUEph* o2_saved_355;
struct CVALUE* it_356;
_Bool _if_conditional393;
void* right_value321;
struct CVALUE* come_value2_357;
void* right_value322;
char* __dec_obj96;
void* right_value323;
struct sType* __dec_obj97;
_Bool _if_conditional394;
void* right_value324;
char* __dec_obj98;
void* right_value325;
char* __dec_obj99;
_Bool _if_conditional395;
void* right_value326;
char* var_name_358;
void* right_value327;
struct sType* result_type_359;
void* right_value328;
struct sType* result_type2_360;
struct sType* result_type3_361;
_Bool _if_conditional396;
struct list$1sTypeph* __dec_obj100;
_Bool __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_178, 0, sizeof(char*));
memset(&params_179, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_180, 0, sizeof(struct sNode*));
memset(&method_block_181, 0, sizeof(struct buffer*));
memset(&method_block_sline_182, 0, sizeof(int));
memset(&method_generics_types_183, 0, sizeof(struct list$1sTypeph*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&obj_value_184, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&obj_type_185, 0, sizeof(struct sType*));
memset(&klass_186, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_187, 0, sizeof(_Bool));
memset(&lambda_type_188, 0, sizeof(struct sType*));
memset(&o2_saved_189, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_192, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_195, 0, sizeof(char*));
memset(&field_type_196, 0, sizeof(struct sType*));
memset(&field_name_195, 0, sizeof(char*));
memset(&field_type_196, 0, sizeof(struct sType*));
right_value178 = (void*)0;
memset(&result_type_197, 0, sizeof(struct sType*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&come_params_200, 0, sizeof(struct list$1CVALUEph*));
memset(&i_201, 0, sizeof(int));
memset(&o2_saved_202, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_205, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_208, 0, sizeof(char*));
memset(&node_209, 0, sizeof(struct sNode*));
memset(&label_208, 0, sizeof(char*));
memset(&node_209, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&come_value_210, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&buf_214, 0, sizeof(struct buffer*));
right_value187 = (void*)0;
memset(&j_215, 0, sizeof(int));
memset(&o2_saved_216, 0, sizeof(struct list$1CVALUEph*));
memset(&it_219, 0, sizeof(struct CVALUE*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&come_value2_222, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&result_type2_223, 0, sizeof(struct sType*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&generics_fun_name_224, 0, sizeof(char*));
memset(&fun_225, 0, sizeof(struct sFun*));
memset(&i_226, 0, sizeof(int));
right_value198 = (void*)0;
memset(&new_fun_name_227, 0, sizeof(char*));
right_value199 = (void*)0;
memset(&obj_array_type_231, 0, sizeof(struct sType*));
right_value200 = (void*)0;
memset(&array_method_name_232, 0, sizeof(char*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&klass_235, 0, sizeof(struct sClass*));
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&result_type_239, 0, sizeof(struct sType*));
right_value208 = (void*)0;
memset(&result_type2_240, 0, sizeof(struct sType*));
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&param_types_241, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_242, 0, sizeof(struct list$1sTypeph*));
memset(&it_245, 0, sizeof(struct sType*));
right_value214 = (void*)0;
memset(&it2_251, 0, sizeof(struct sType*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&come_params_252, 0, sizeof(struct list$1CVALUEph*));
memset(&i_253, 0, sizeof(int));
memset(&first_param_257, 0, sizeof(_Bool));
memset(&o2_saved_258, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_259, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_260, 0, sizeof(char*));
memset(&node_261, 0, sizeof(struct sNode*));
memset(&label_260, 0, sizeof(char*));
memset(&node_261, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
memset(&come_value_262, 0, sizeof(struct CVALUE*));
memset(&n_263, 0, sizeof(int));
memset(&o2_saved_264, 0, sizeof(struct list$1charph*));
memset(&it_267, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&i_272, 0, sizeof(int));
memset(&o2_saved_273, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_274, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_275, 0, sizeof(char*));
memset(&node_276, 0, sizeof(struct sNode*));
memset(&label_275, 0, sizeof(char*));
memset(&node_276, 0, sizeof(struct sNode*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&come_value_280, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&obj_array_type_284, 0, sizeof(struct sType*));
right_value232 = (void*)0;
memset(&array_method_name_285, 0, sizeof(char*));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&buf_286, 0, sizeof(struct buffer*));
memset(&i_287, 0, sizeof(int));
memset(&o2_saved_288, 0, sizeof(struct list$1sNodeph*));
memset(&it_291, 0, sizeof(struct sNode*));
right_value235 = (void*)0;
memset(&come_value_294, 0, sizeof(struct CVALUE*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&come_value_295, 0, sizeof(struct CVALUE*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&buf_299, 0, sizeof(struct buffer*));
memset(&i_300, 0, sizeof(int));
memset(&o2_saved_301, 0, sizeof(struct list$1sNodeph*));
memset(&it_302, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
memset(&come_value_303, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&come_value_304, 0, sizeof(struct CVALUE*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&buf_305, 0, sizeof(struct buffer*));
memset(&i_306, 0, sizeof(int));
memset(&o2_saved_307, 0, sizeof(struct list$1sNodeph*));
memset(&it_308, 0, sizeof(struct sNode*));
right_value260 = (void*)0;
memset(&come_value_309, 0, sizeof(struct CVALUE*));
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&come_value_310, 0, sizeof(struct CVALUE*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&buf_311, 0, sizeof(struct buffer*));
memset(&i_312, 0, sizeof(int));
memset(&o2_saved_313, 0, sizeof(struct list$1sNodeph*));
memset(&it_314, 0, sizeof(struct sNode*));
right_value271 = (void*)0;
memset(&come_value_315, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&come_value_316, 0, sizeof(struct CVALUE*));
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&default_param_317, 0, sizeof(char*));
memset(&param_name_318, 0, sizeof(char*));
memset(&source_319, 0, sizeof(struct buffer*));
memset(&p_320, 0, sizeof(char*));
memset(&head_321, 0, sizeof(char*));
memset(&sline_322, 0, sizeof(int));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&node_323, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
memset(&come_value_324, 0, sizeof(struct CVALUE*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value291 = (void*)0;
memset(&current_stack_frame_node_326, 0, sizeof(struct sNode*));
right_value292 = (void*)0;
memset(&come_value_327, 0, sizeof(struct CVALUE*));
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&method_block2_328, 0, sizeof(struct buffer*));
right_value295 = (void*)0;
memset(&method_block_type_329, 0, sizeof(struct sType*));
right_value296 = (void*)0;
memset(&class_name_330, 0, sizeof(char*));
memset(&current_stack_frame_struct_331, 0, sizeof(struct sClass*));
right_value297 = (void*)0;
memset(&result_type_332, 0, sizeof(struct sType*));
memset(&param_types_333, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_334, 0, sizeof(struct list$1charph*));
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&all_alhabet_sname_335, 0, sizeof(struct buffer*));
memset(&p_336, 0, sizeof(char*));
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&i_337, 0, sizeof(int));
memset(&o2_saved_338, 0, sizeof(struct list$1sTypeph*));
memset(&it_339, 0, sizeof(struct sType*));
memset(&param_type_340, 0, sizeof(struct sType*));
right_value303 = (void*)0;
memset(&param_name_341, 0, sizeof(char*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&param_name_342, 0, sizeof(char*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&param_name_343, 0, sizeof(char*));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&source3_344, 0, sizeof(struct buffer*));
memset(&p_345, 0, sizeof(char*));
memset(&head_346, 0, sizeof(char*));
memset(&sline_347, 0, sizeof(int));
right_value313 = (void*)0;
memset(&node_348, 0, sizeof(struct sNode*));
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&method_block_name_349, 0, sizeof(char*));
right_value316 = (void*)0;
memset(&come_value2_350, 0, sizeof(struct CVALUE*));
memset(&fun2_351, 0, sizeof(struct sFun*));
memset(&method_block_type2_352, 0, sizeof(struct sType*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&buf_353, 0, sizeof(struct buffer*));
memset(&j_354, 0, sizeof(int));
memset(&o2_saved_355, 0, sizeof(struct list$1CVALUEph*));
memset(&it_356, 0, sizeof(struct CVALUE*));
right_value321 = (void*)0;
memset(&come_value2_357, 0, sizeof(struct CVALUE*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&var_name_358, 0, sizeof(char*));
right_value327 = (void*)0;
memset(&result_type_359, 0, sizeof(struct sType*));
right_value328 = (void*)0;
memset(&result_type2_360, 0, sizeof(struct sType*));
memset(&result_type3_361, 0, sizeof(struct sType*));
    # 202 "20method.c"
    fun_name_178=self->fun_name;
    # 203 "20method.c"
    params_179=self->params;
    # 204 "20method.c"
    obj_180=self->obj;
    # 205 "20method.c"
    method_block_181=self->method_block;
    # 206 "20method.c"
    method_block_sline_182=self->method_block_sline;
    # 209 "20method.c"
    method_generics_types_183=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    # 210 "20method.c"
    __dec_obj59=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value173=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer3(__dec_obj59,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value173,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 216 "20method.c"
    # 212 "20method.c"
    if(_if_conditional252=!node_compile(obj_180,info),    _if_conditional252) {
        # 213 "20method.c"
        __result135__ = (_Bool)0;
        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result135__;
    }
    # 216 "20method.c"
    obj_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value174,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 217 "20method.c"
    dec_stack_ptr(1,info);
    # 226 "20method.c"
    # 219 "20method.c"
    if(_if_conditional253=gComeDebug&&obj_value_184->type->mPointerNum>0,    _if_conditional253) {
        # 220 "20method.c"
        __dec_obj60=obj_value_184->c_value;
        obj_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value175=make_type_name_string(obj_value_184->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),obj_value_184->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 226 "20method.c"
    obj_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(obj_value_184->type))));
    come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 228 "20method.c"
    klass_186=obj_type_185->mClass;
    # 230 "20method.c"
    calling_dynamic_method_187=(_Bool)0;
    # 231 "20method.c"
    lambda_type_188=((void*)0);
    # 242 "20method.c"
    for(    o2_saved_189=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_186->mFields)),it_192=list$1tuple2$2charphsTypephph_begin((o2_saved_189));    !list$1tuple2$2charphsTypephph_end((o2_saved_189));    it_192=list$1tuple2$2charphsTypephph_next((o2_saved_189))    ){
        # 233 "20method.c"
        multiple_assign_var1=it_192;
        field_name_195=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_196=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 240 "20method.c"
        # 235 "20method.c"
        if(_if_conditional258=string_operator_equals(field_name_195,fun_name_178)&&string_operator_equals(field_type_196->mClass->mName,"lambda"),        _if_conditional258) {
            # 236 "20method.c"
            calling_dynamic_method_187=(_Bool)1;
            # 237 "20method.c"
            lambda_type_188=field_type_196;
            # 238 "20method.c"
            field_name_195 = come_decrement_ref_count2(field_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_195 = come_decrement_ref_count2(field_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_189,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    # 851 "20method.c"
    # 242 "20method.c"
    if(calling_dynamic_method_187) {
        # 243 "20method.c"
        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(lambda_type_188->mResultType->v1))));
        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 244 "20method.c"
        result_type_197->mStatic=(_Bool)0;
        # 246 "20method.c"
        come_params_200=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value180=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value179=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 246, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value179,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value180,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 248 "20method.c"
        i_201=0;
        # 276 "20method.c"
        for(        o2_saved_202=(params_179),it_205=list$1tuple2$2charphsNodephph_begin((o2_saved_202));        !list$1tuple2$2charphsNodephph_end((o2_saved_202));        it_205=list$1tuple2$2charphsNodephph_next((o2_saved_202))        ){
            # 250 "20method.c"
            multiple_assign_var2=it_205;
            label_208=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_209=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            # 274 "20method.c"
            # 252 "20method.c"
            if(_if_conditional264=i_201==0,            _if_conditional264) {
                # 253 "20method.c"
                list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(obj_value_184));
                # 254 "20method.c"
                i_201++;
            }
            else {
                # 261 "20method.c"
                # 257 "20method.c"
                if(_if_conditional265=!node_compile(node_209,info),                _if_conditional265) {
                    # 258 "20method.c"
                    __result151__ = (_Bool)0;
                    label_208 = come_decrement_ref_count2(label_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(result_type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_200,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result151__;
                }
                # 261 "20method.c"
                come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 263 "20method.c"
                check_assign_type(((char*)(right_value184=xsprintf("\%s param num \%s is assinged to",((char*)(right_value182=charp_to_string(fun_name_178))),((char*)(right_value183=int_to_string(i_201)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 263, 2)),come_value_210->type,come_value_210,(_Bool)0,(_Bool)1,info);
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 269 "20method.c"
                # 264 "20method.c"
                if(_if_conditional268=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 264, 3))->mHeap&&come_value_210->type->mHeap,                _if_conditional268) {
                    # 266 "20method.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 266, 4)),come_value_210->type,come_value_210,info);
                }
                # 269 "20method.c"
                list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(come_value_210));
                # 271 "20method.c"
                i_201++;
                # 272 "20method.c"
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_208 = come_decrement_ref_count2(label_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 276 "20method.c"
        buf_214=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value186=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value185=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 276, "buffer"))))))));
        come_call_finalizer3(right_value185,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value186,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 278 "20method.c"
        buffer_append_str(buf_214,((char*)(right_value187=xsprintf("%s->%s",obj_value_184->c_value,fun_name_178))));
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 279 "20method.c"
        buffer_append_str(buf_214,"(");
        # 281 "20method.c"
        j_215=0;
        # 294 "20method.c"
        for(        o2_saved_216=(struct list$1CVALUEph*)come_increment_ref_count((come_params_200)),it_219=list$1CVALUEph_begin((o2_saved_216));        !list$1CVALUEph_end((o2_saved_216));        it_219=list$1CVALUEph_next((o2_saved_216))        ){
            # 286 "20method.c"
            # 283 "20method.c"
            if(_if_conditional273=j_215==0,            _if_conditional273) {
                # 284 "20method.c"
                __dec_obj61=it_219->c_value;
                it_219->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s->_protocol_obj",it_219->c_value))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 286 "20method.c"
            buffer_append_str(buf_214,it_219->c_value);
            # 292 "20method.c"
            # 288 "20method.c"
            if(_if_conditional275=j_215!=list$1CVALUEph_length(come_params_200)-1,            _if_conditional275) {
                # 289 "20method.c"
                buffer_append_str(buf_214,",");
            }
            # 292 "20method.c"
            j_215++;
        }
        come_call_finalizer3(o2_saved_216,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 294 "20method.c"
        buffer_append_str(buf_214,")");
        # 296 "20method.c"
        come_value2_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 296, "CVALUE"))));
        come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 298 "20method.c"
        __dec_obj62=come_value2_222->c_value;
        come_value2_222->c_value=(char*)come_increment_ref_count(((char*)(right_value190=buffer_to_string(buf_214))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 300 "20method.c"
        result_type2_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=solve_generics(result_type_197,info->generics_type,info))));
        come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 306 "20method.c"
        # 302 "20method.c"
        if(result_type2_223->mHeap) {
            # 303 "20method.c"
            __dec_obj63=come_value2_222->c_value;
            come_value2_222->c_value=(char*)come_increment_ref_count(((char*)(right_value193=append_object_to_right_values(((char*)(right_value192=buffer_to_string(buf_214))),(struct sType*)come_increment_ref_count(result_type2_223),info))));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 306 "20method.c"
        __dec_obj64=come_value2_222->type;
        come_value2_222->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(result_type2_223))));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value194,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 307 "20method.c"
        come_value2_222->type->mStatic=(_Bool)0;
        # 308 "20method.c"
        come_value2_222->var=((void*)0);
        # 310 "20method.c"
        add_come_last_code(info,"%s;\n",come_value2_222->c_value);
        # 312 "20method.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_222));
        come_call_finalizer3(result_type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_200,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_214,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 315 "20method.c"
        generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value197=string_to_string(((char*)(right_value196=make_generics_function(obj_type_185,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(fun_name_178)))),info,(_Bool)1)))))));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 317 "20method.c"
        fun_225=((void*)0);
        # 330 "20method.c"
        for(        i_226=128;        i_226>=1;        i_226--        ){
            # 320 "20method.c"
            new_fun_name_227=(char*)come_increment_ref_count(((char*)(right_value198=xsprintf("%s_v%d",generics_fun_name_224,i_226))));
            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 322 "20method.c"
            fun_225=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_227);
            # 328 "20method.c"
            # 324 "20method.c"
            if(_if_conditional296=fun_225!=((void*)0),            _if_conditional296) {
                # 325 "20method.c"
                __dec_obj65=generics_fun_name_224;
                generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string(new_fun_name_227))));
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 326 "20method.c"
                new_fun_name_227 = come_decrement_ref_count2(new_fun_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_227 = come_decrement_ref_count2(new_fun_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 383 "20method.c"
        # 330 "20method.c"
        if(_if_conditional297=fun_225==((void*)0),        _if_conditional297) {
            # 331 "20method.c"
            obj_array_type_231=obj_type_185->mOriginalLoadVarType->v1;
            # 382 "20method.c"
            # 333 "20method.c"
            if(_if_conditional298=obj_array_type_231&&list$1sNodeph_length(obj_array_type_231->mArrayNum)>0,            _if_conditional298) {
                # 334 "20method.c"
                array_method_name_232=(char*)come_increment_ref_count(((char*)(right_value200=create_method_name(obj_array_type_231,(_Bool)0,fun_name_178,info,(_Bool)0))));
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 336 "20method.c"
                fun_225=map$2charphsFunph_at(info->funcs,array_method_name_232,((void*)0));
                # 353 "20method.c"
                # 338 "20method.c"
                if(fun_225) {
                    # 339 "20method.c"
                    __dec_obj66=generics_fun_name_224;
                    generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(array_method_name_232))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 342 "20method.c"
                    fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                    # 352 "20method.c"
                    # 344 "20method.c"
                    if(_if_conditional304=fun_225==((void*)0),                    _if_conditional304) {
                        # 345 "20method.c"
                        __dec_obj67=generics_fun_name_224;
                        generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value203=create_method_name(obj_type_185,(_Bool)0,((char*)(right_value202=__builtin_string(fun_name_178))),info,(_Bool)1))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 346 "20method.c"
                        fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                        # 351 "20method.c"
                        # 347 "20method.c"
                        if(_if_conditional305=fun_225==((void*)0),                        _if_conditional305) {
                            # 348 "20method.c"
                            err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_224,info->come_fun->mName);
                            # 349 "20method.c"
                            __result171__ = (_Bool)1;
                            array_method_name_232 = come_decrement_ref_count2(array_method_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result171__;
                        }
                    }
                }
                array_method_name_232 = come_decrement_ref_count2(array_method_name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 355 "20method.c"
                fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                # 381 "20method.c"
                # 357 "20method.c"
                if(_if_conditional306=fun_225==((void*)0),                _if_conditional306) {
                    # 358 "20method.c"
                    __dec_obj68=generics_fun_name_224;
                    generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value205=create_method_name(obj_type_185,(_Bool)0,((char*)(right_value204=__builtin_string(fun_name_178))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 360 "20method.c"
                    fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                    # 376 "20method.c"
                    # 362 "20method.c"
                    if(_if_conditional307=fun_225==((void*)0),                    _if_conditional307) {
                        # 363 "20method.c"
                        klass_235=obj_type_185->mClass;
                        # 374 "20method.c"
                        while(_while_condtional37=map$2charphsClassphp_operator_load_element(info->classes,klass_235->mParentClassName),                        _while_condtional37) {
                            # 365 "20method.c"
                            klass_235=map$2charphsClassphp_operator_load_element(info->classes,klass_235->mParentClassName);
                            # 366 "20method.c"
                            __dec_obj69=generics_fun_name_224;
                            generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value206=create_method_name_using_class(klass_235,(_Bool)0,fun_name_178,info,(_Bool)1))));
                            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 368 "20method.c"
                            fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                            # 373 "20method.c"
                            # 370 "20method.c"
                            if(fun_225) {
                                # 371 "20method.c"
                                break;
                            }
                        }
                    }
                    # 380 "20method.c"
                    # 376 "20method.c"
                    if(_if_conditional313=fun_225==((void*)0),                    _if_conditional313) {
                        # 377 "20method.c"
                        err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_224,info->come_fun->mName);
                        # 378 "20method.c"
                        __result176__ = (_Bool)1;
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result176__;
                    }
                }
            }
        }
        # 388 "20method.c"
        # 383 "20method.c"
        if(_if_conditional314=fun_225==((void*)0),        _if_conditional314) {
            # 384 "20method.c"
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_224,info->come_fun->mName);
            # 385 "20method.c"
            __result177__ = (_Bool)1;
            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result177__;
        }
        # 393 "20method.c"
        # 388 "20method.c"
        if(_if_conditional316=list$1sTypeph_length(fun_225->mParamTypes)==0,        _if_conditional316) {
            # 389 "20method.c"
            err_msg(info,"Method require function parametor");
            # 390 "20method.c"
            __result180__ = (_Bool)1;
            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result180__;
        }
        # 393 "20method.c"
        result_type_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(fun_225->mResultType))));
        come_call_finalizer3(right_value207,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 394 "20method.c"
        result_type_239->mStatic=(_Bool)0;
        # 396 "20method.c"
        result_type2_240=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=solve_generics(result_type_239,info->generics_type,info))));
        come_call_finalizer3(right_value208,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 398 "20method.c"
        param_types_241=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value210=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value209=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 398, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value209,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value210,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 410 "20method.c"
        for(        o2_saved_242=(struct list$1sTypeph*)come_increment_ref_count((fun_225->mParamTypes)),it_245=list$1sTypeph_begin((o2_saved_242));        !list$1sTypeph_end((o2_saved_242));        it_245=list$1sTypeph_next((o2_saved_242))        ){
            # 408 "20method.c"
            # 400 "20method.c"
            if(_if_conditional321=it_245==((void*)0),            _if_conditional321) {
                # 401 "20method.c"
                list$1sTypeph_push_back(param_types_241,it_245);
            }
            else {
                # 404 "20method.c"
                it2_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=solve_generics(it_245,info->generics_type,info))));
                come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 406 "20method.c"
                list$1sTypeph_push_back(param_types_241,(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(it2_251)))));
                come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(it2_251,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        # 410 "20method.c"
        come_params_252=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value217=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value216=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 410, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value216,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value217,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 416 "20method.c"
        for(        i_253=0;        i_253<list$1sTypeph_length(fun_225->mParamTypes)-(method_block_181?2:0);        i_253++        ){
            # 413 "20method.c"
            list$1CVALUEph_add(come_params_252,((void*)0));
        }
        # 416 "20method.c"
        first_param_257=(_Bool)1;
        # 451 "20method.c"
        for(        o2_saved_258=(params_179),it_259=list$1tuple2$2charphsNodephph_begin((o2_saved_258));        !list$1tuple2$2charphsNodephph_end((o2_saved_258));        it_259=list$1tuple2$2charphsNodephph_next((o2_saved_258))        ){
            # 418 "20method.c"
            multiple_assign_var3=it_259;
            label_260=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_261=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            # 449 "20method.c"
            # 420 "20method.c"
            if(first_param_257) {
                # 421 "20method.c"
                first_param_257=(_Bool)0;
            }
            else {
                # 449 "20method.c"
                # 423 "20method.c"
                if(label_260) {
                    # 428 "20method.c"
                    # 424 "20method.c"
                    if(_if_conditional328=!node_compile(node_261,info),                    _if_conditional328) {
                        # 425 "20method.c"
                        __result190__ = (_Bool)0;
                        label_260 = come_decrement_ref_count2(label_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_261) { node_261 = come_decrement_ref_count2(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result190__;
                    }
                    # 428 "20method.c"
                    come_value_262=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 429 "20method.c"
                    dec_stack_ptr(1,info);
                    # 431 "20method.c"
                    n_263=0;
                    # 440 "20method.c"
                    for(                    o2_saved_264=(struct list$1charph*)come_increment_ref_count((fun_225->mParamNames)),it_267=list$1charph_begin((o2_saved_264));                    !list$1charph_end((o2_saved_264));                    it_267=list$1charph_next((o2_saved_264))                    ){
                        # 437 "20method.c"
                        # 433 "20method.c"
                        if(_if_conditional333=string_operator_equals(label_260,it_267),                        _if_conditional333) {
                            # 434 "20method.c"
                            break;
                        }
                        # 437 "20method.c"
                        n_263++;
                    }
                    come_call_finalizer3(o2_saved_264,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    # 443 "20method.c"
                    # 440 "20method.c"
                    if(_if_conditional334=list$1sTypephp_operator_load_element(param_types_241,n_263),                    _if_conditional334) {
                        # 441 "20method.c"
                        check_assign_type(((char*)(right_value224=xsprintf("\%s param num \%s is assinged to",((char*)(right_value222=charp_to_string(fun_name_178))),((char*)(right_value223=int_to_string(n_263)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,n_263), "20method.c", 441, 5)),come_value_262->type,come_value_262,(_Bool)0,(_Bool)1,info);
                        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 447 "20method.c"
                    # 443 "20method.c"
                    if(_if_conditional335=list$1sTypephp_operator_load_element(param_types_241,n_263)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,n_263), "20method.c", 443, 6))->mHeap&&come_value_262->type->mHeap,                    _if_conditional335) {
                        # 444 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,n_263), "20method.c", 444, 7)),come_value_262->type,come_value_262,info);
                    }
                    # 447 "20method.c"
                    list$1CVALUEph_replace(come_params_252,n_263,(struct CVALUE*)come_increment_ref_count(come_value_262));
                    come_call_finalizer3(come_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_260 = come_decrement_ref_count2(label_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_261) { node_261 = come_decrement_ref_count2(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 451 "20method.c"
        i_272=0;
        # 499 "20method.c"
        for(        o2_saved_273=(params_179),it_274=list$1tuple2$2charphsNodephph_begin((o2_saved_273));        !list$1tuple2$2charphsNodephph_end((o2_saved_273));        it_274=list$1tuple2$2charphsNodephph_next((o2_saved_273))        ){
            # 453 "20method.c"
            multiple_assign_var4=it_274;
            label_275=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_276=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            # 497 "20method.c"
            # 455 "20method.c"
            if(_if_conditional339=i_272==0,            _if_conditional339) {
                # 456 "20method.c"
                check_assign_type(((char*)(right_value227=xsprintf("\%s param num \%s is assinged to",((char*)(right_value225=charp_to_string(fun_name_178))),((char*)(right_value226=int_to_string(i_272)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 456, 8)),obj_value_184->type,obj_value_184,(_Bool)0,(_Bool)1,info);
                right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 464 "20method.c"
                # 457 "20method.c"
                if(_if_conditional340=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 457, 9))->mHeap&&obj_value_184->type->mHeap,                _if_conditional340) {
                    # 458 "20method.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 458, 10)),obj_value_184->type,obj_value_184,info);
                }
                else {
                    # 464 "20method.c"
                    # 460 "20method.c"
                    if(_if_conditional341=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 460, 11))->mHeap&&!obj_value_184->type->mHeap&&!gComeGC,                    _if_conditional341) {
                        # 461 "20method.c"
                        err_msg(info,"require heap parametor(%s)",((char*)come_null_check(list$1charphp_operator_load_element(fun_225->mParamNames,i_272), "20method.c", 461, 12)));
                        # 462 "20method.c"
                        exit(2);
                    }
                }
                # 464 "20method.c"
                list$1CVALUEph_replace(come_params_252,i_272,(struct CVALUE*)come_increment_ref_count(obj_value_184));
                # 466 "20method.c"
                i_272++;
            }
            else {
                # 497 "20method.c"
                # 468 "20method.c"
                if(label_275) {
                }
                else {
                    # 475 "20method.c"
                    # 471 "20method.c"
                    if(_if_conditional345=!node_compile(node_276,info),                    _if_conditional345) {
                        # 472 "20method.c"
                        __result202__ = (_Bool)0;
                        label_275 = come_decrement_ref_count2(label_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_276) { node_276 = come_decrement_ref_count2(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result202__;
                    }
                    # 475 "20method.c"
                    come_value_280=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value228,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 476 "20method.c"
                    dec_stack_ptr(1,info);
                    # 487 "20method.c"
                    while(_while_condtional40=(_Bool)1,                    _while_condtional40) {
                        # 485 "20method.c"
                        # 479 "20method.c"
                        if(_if_conditional348=list$1CVALUEphp_operator_load_element(come_params_252,i_272)==((void*)0),                        _if_conditional348) {
                            # 480 "20method.c"
                            break;
                        }
                        else {
                            # 483 "20method.c"
                            i_272++;
                        }
                    }
                    # 490 "20method.c"
                    # 487 "20method.c"
                    if(_if_conditional349=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 487, 13)),                    _if_conditional349) {
                        # 488 "20method.c"
                        check_assign_type(((char*)(right_value231=xsprintf("\%s param num \%s is assinged to",((char*)(right_value229=charp_to_string(fun_name_178))),((char*)(right_value230=int_to_string(i_272)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 488, 14)),come_value_280->type,come_value_280,(_Bool)0,(_Bool)1,info);
                        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 494 "20method.c"
                    # 490 "20method.c"
                    if(_if_conditional350=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 490, 15))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 490, 16))->mHeap&&come_value_280->type->mHeap,                    _if_conditional350) {
                        # 491 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 491, 17)),come_value_280->type,come_value_280,info);
                    }
                    # 494 "20method.c"
                    list$1CVALUEph_replace(come_params_252,i_272,(struct CVALUE*)come_increment_ref_count(come_value_280));
                    # 495 "20method.c"
                    i_272++;
                    come_call_finalizer3(come_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_275 = come_decrement_ref_count2(label_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_276) { node_276 = come_decrement_ref_count2(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 508 "20method.c"
        while(_while_condtional42=(_Bool)1,        _while_condtional42) {
            # 506 "20method.c"
            # 500 "20method.c"
            if(_if_conditional351=list$1CVALUEphp_operator_load_element(come_params_252,i_272)==((void*)0),            _if_conditional351) {
                # 501 "20method.c"
                break;
            }
            else {
                # 504 "20method.c"
                i_272++;
            }
        }
        # 508 "20method.c"
        obj_array_type_284=obj_type_185->mOriginalLoadVarType->v1;
        # 631 "20method.c"
        # 509 "20method.c"
        if(_if_conditional352=obj_array_type_284&&list$1sNodeph_length(obj_array_type_284->mArrayNum)>0,        _if_conditional352) {
            # 510 "20method.c"
            array_method_name_285=(char*)come_increment_ref_count(((char*)(right_value232=create_method_name(obj_array_type_284,(_Bool)0,fun_name_178,info,(_Bool)0))));
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 629 "20method.c"
            # 511 "20method.c"
            if(_if_conditional353=string_operator_equals(generics_fun_name_224,array_method_name_285),            _if_conditional353) {
                # 628 "20method.c"
                # 512 "20method.c"
                if(_if_conditional354=charp_operator_equals(fun_name_178,"to_pointer"),                _if_conditional354) {
                    # 513 "20method.c"
                    buf_286=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value233=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 513, "buffer"))))))));
                    come_call_finalizer3(right_value233,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value234,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    # 515 "20method.c"
                    i_287=0;
                    # 532 "20method.c"
                    for(                    o2_saved_288=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_284->mArrayNum)),it_291=list$1sNodeph_begin((o2_saved_288));                    !list$1sNodeph_end((o2_saved_288));                    it_291=list$1sNodeph_next((o2_saved_288))                    ){
                        # 522 "20method.c"
                        # 517 "20method.c"
                        if(_if_conditional359=!node_compile(it_291,info),                        _if_conditional359) {
                            # 518 "20method.c"
                            err_msg(info,"invalid array num");
                            # 519 "20method.c"
                            exit(1);
                        }
                        # 522 "20method.c"
                        come_value_294=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=get_value_from_stack(-1,info))));
                        come_call_finalizer3(right_value235,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        # 523 "20method.c"
                        dec_stack_ptr(1,info);
                        # 525 "20method.c"
                        buffer_append_str(buf_286,((char*)(right_value236=xsprintf("%s",come_value_294->c_value))));
                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 529 "20method.c"
                        # 526 "20method.c"
                        if(_if_conditional360=i_287!=list$1sNodeph_length(obj_array_type_284->mArrayNum)-1,                        _if_conditional360) {
                            # 527 "20method.c"
                            buffer_append_str(buf_286,"*");
                        }
                        # 529 "20method.c"
                        i_287++;
                        come_call_finalizer3(come_value_294,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_288,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 532 "20method.c"
                    come_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 532, "CVALUE"))));
                    come_call_finalizer3(right_value237,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 534 "20method.c"
                    __dec_obj77=come_value_295->c_value;
                    come_value_295->c_value=(char*)come_increment_ref_count(((char*)(right_value238=buffer_to_string(buf_286))));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 535 "20method.c"
                    come_value_295->var=((void*)0);
                    # 536 "20method.c"
                    __dec_obj78=come_value_295->type;
                    come_value_295->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value239=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 536, "sType")))),"long",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 538 "20method.c"
                    list$1CVALUEph_replace(come_params_252,1,(struct CVALUE*)come_increment_ref_count(come_value_295));
                    # 539 "20method.c"
                    list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value246=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value245=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 539, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("len")))),((void*)0))))));
                    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value246,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 628 "20method.c"
                    # 541 "20method.c"
                    if(_if_conditional364=charp_operator_equals(fun_name_178,"length"),                    _if_conditional364) {
                        # 542 "20method.c"
                        buf_299=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value248=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value247=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 542, "buffer"))))))));
                        come_call_finalizer3(right_value247,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value248,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        # 544 "20method.c"
                        i_300=0;
                        # 561 "20method.c"
                        for(                        o2_saved_301=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_284->mArrayNum)),it_302=list$1sNodeph_begin((o2_saved_301));                        !list$1sNodeph_end((o2_saved_301));                        it_302=list$1sNodeph_next((o2_saved_301))                        ){
                            # 551 "20method.c"
                            # 546 "20method.c"
                            if(_if_conditional365=!node_compile(it_302,info),                            _if_conditional365) {
                                # 547 "20method.c"
                                err_msg(info,"invalid array num");
                                # 548 "20method.c"
                                exit(1);
                            }
                            # 551 "20method.c"
                            come_value_303=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
                            come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            # 552 "20method.c"
                            dec_stack_ptr(1,info);
                            # 554 "20method.c"
                            buffer_append_str(buf_299,((char*)(right_value250=xsprintf("%s",come_value_303->c_value))));
                            right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 558 "20method.c"
                            # 555 "20method.c"
                            if(_if_conditional366=i_300!=list$1sNodeph_length(obj_array_type_284->mArrayNum)-1,                            _if_conditional366) {
                                # 556 "20method.c"
                                buffer_append_str(buf_299,"*");
                            }
                            # 558 "20method.c"
                            i_300++;
                            come_call_finalizer3(come_value_303,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_301,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 561 "20method.c"
                        come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 561, "CVALUE"))));
                        come_call_finalizer3(right_value251,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        # 563 "20method.c"
                        __dec_obj83=come_value_304->c_value;
                        come_value_304->c_value=(char*)come_increment_ref_count(((char*)(right_value252=buffer_to_string(buf_299))));
                        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 564 "20method.c"
                        come_value_304->var=((void*)0);
                        # 565 "20method.c"
                        __dec_obj84=come_value_304->type;
                        come_value_304->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 565, "sType")))),"long",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 567 "20method.c"
                        list$1CVALUEph_replace(come_params_252,1,(struct CVALUE*)come_increment_ref_count(come_value_304));
                        # 568 "20method.c"
                        list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value257=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value256=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 568, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("len")))),((void*)0))))));
                        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value257,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(buf_299,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 628 "20method.c"
                        # 570 "20method.c"
                        if(_if_conditional367=charp_operator_equals(fun_name_178,"to_buffer"),                        _if_conditional367) {
                            # 571 "20method.c"
                            buf_305=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value259=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value258=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 571, "buffer"))))))));
                            come_call_finalizer3(right_value258,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value259,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 573 "20method.c"
                            i_306=0;
                            # 590 "20method.c"
                            for(                            o2_saved_307=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_284->mArrayNum)),it_308=list$1sNodeph_begin((o2_saved_307));                            !list$1sNodeph_end((o2_saved_307));                            it_308=list$1sNodeph_next((o2_saved_307))                            ){
                                # 580 "20method.c"
                                # 575 "20method.c"
                                if(_if_conditional368=!node_compile(it_308,info),                                _if_conditional368) {
                                    # 576 "20method.c"
                                    err_msg(info,"invalid array num");
                                    # 577 "20method.c"
                                    exit(1);
                                }
                                # 580 "20method.c"
                                come_value_309=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=get_value_from_stack(-1,info))));
                                come_call_finalizer3(right_value260,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                # 581 "20method.c"
                                dec_stack_ptr(1,info);
                                # 583 "20method.c"
                                buffer_append_str(buf_305,((char*)(right_value261=xsprintf("%s",come_value_309->c_value))));
                                right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 587 "20method.c"
                                # 584 "20method.c"
                                if(_if_conditional369=i_306!=list$1sNodeph_length(obj_array_type_284->mArrayNum)-1,                                _if_conditional369) {
                                    # 585 "20method.c"
                                    buffer_append_str(buf_305,"*");
                                }
                                # 587 "20method.c"
                                i_306++;
                                come_call_finalizer3(come_value_309,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_307,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            # 590 "20method.c"
                            come_value_310=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 590, "CVALUE"))));
                            come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            # 592 "20method.c"
                            __dec_obj85=come_value_310->c_value;
                            come_value_310->c_value=(char*)come_increment_ref_count(((char*)(right_value263=buffer_to_string(buf_305))));
                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 593 "20method.c"
                            come_value_310->var=((void*)0);
                            # 594 "20method.c"
                            __dec_obj86=come_value_310->type;
                            come_value_310->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value264=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 594, "sType")))),"long",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            # 596 "20method.c"
                            list$1CVALUEph_replace(come_params_252,1,(struct CVALUE*)come_increment_ref_count(come_value_310));
                            # 597 "20method.c"
                            list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value268=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value267=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 597, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value266=xsprintf("len")))),((void*)0))))));
                            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value268,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_value_310,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 628 "20method.c"
                            # 599 "20method.c"
                            if(_if_conditional370=charp_operator_equals(fun_name_178,"to_list"),                            _if_conditional370) {
                                # 600 "20method.c"
                                buf_311=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value270=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 600, "buffer"))))))));
                                come_call_finalizer3(right_value269,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value270,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                # 602 "20method.c"
                                i_312=0;
                                # 619 "20method.c"
                                for(                                o2_saved_313=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_284->mArrayNum)),it_314=list$1sNodeph_begin((o2_saved_313));                                !list$1sNodeph_end((o2_saved_313));                                it_314=list$1sNodeph_next((o2_saved_313))                                ){
                                    # 609 "20method.c"
                                    # 604 "20method.c"
                                    if(_if_conditional371=!node_compile(it_314,info),                                    _if_conditional371) {
                                        # 605 "20method.c"
                                        err_msg(info,"invalid array num");
                                        # 606 "20method.c"
                                        exit(1);
                                    }
                                    # 609 "20method.c"
                                    come_value_315=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
                                    come_call_finalizer3(right_value271,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 610 "20method.c"
                                    dec_stack_ptr(1,info);
                                    # 612 "20method.c"
                                    buffer_append_str(buf_311,((char*)(right_value272=xsprintf("%s",come_value_315->c_value))));
                                    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    # 616 "20method.c"
                                    # 613 "20method.c"
                                    if(_if_conditional372=i_312!=list$1sNodeph_length(obj_array_type_284->mArrayNum)-1,                                    _if_conditional372) {
                                        # 614 "20method.c"
                                        buffer_append_str(buf_311,"*");
                                    }
                                    # 616 "20method.c"
                                    i_312++;
                                    come_call_finalizer3(come_value_315,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer3(o2_saved_313,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                # 619 "20method.c"
                                come_value_316=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 619, "CVALUE"))));
                                come_call_finalizer3(right_value273,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                # 621 "20method.c"
                                __dec_obj87=come_value_316->c_value;
                                come_value_316->c_value=(char*)come_increment_ref_count(((char*)(right_value274=buffer_to_string(buf_311))));
                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 622 "20method.c"
                                come_value_316->var=((void*)0);
                                # 623 "20method.c"
                                __dec_obj88=come_value_316->type;
                                come_value_316->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 623, "sType")))),"long",(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value275,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                # 625 "20method.c"
                                list$1CVALUEph_replace(come_params_252,1,(struct CVALUE*)come_increment_ref_count(come_value_316));
                                # 626 "20method.c"
                                list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value279=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value278=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 626, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value277=xsprintf("len")))),((void*)0))))));
                                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value279,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(buf_311,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_value_316,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            array_method_name_285 = come_decrement_ref_count2(array_method_name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 677 "20method.c"
        # 631 "20method.c"
        if(_if_conditional374=list$1tuple2$2charphsNodephph_length(params_179)<list$1sTypeph_length(fun_225->mParamTypes)+(method_block_181?-2:0),        _if_conditional374) {
            # 675 "20method.c"
            for(            ;            i_272<list$1sTypeph_length(fun_225->mParamTypes)+(method_block_181?-2:0);            i_272++            ){
                # 634 "20method.c"
                default_param_317=(char*)come_increment_ref_count(((char*)(right_value280=string_clone(list$1charphp_operator_load_element(fun_225->mParamDefaultParametors,i_272)))));
                right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 635 "20method.c"
                param_name_318=((char*)come_null_check(list$1charphp_operator_load_element(fun_225->mParamNames,i_272), "20method.c", 635, 18));
                # 674 "20method.c"
                # 637 "20method.c"
                if(_if_conditional375=default_param_317&&string_operator_not_equals(default_param_317,"")&&list$1CVALUEphp_operator_load_element(come_params_252,i_272)==((void*)0),                _if_conditional375) {
                    # 638 "20method.c"
                    source_319=(struct buffer*)come_increment_ref_count(info->source);
                    # 639 "20method.c"
                    p_320=info->p;
                    # 640 "20method.c"
                    head_321=info->head;
                    # 641 "20method.c"
                    sline_322=info->sline;
                    # 643 "20method.c"
                    __dec_obj89=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value281=string_to_buffer(default_param_317))));
                    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value281,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    # 644 "20method.c"
                    info->p=info->source->buf;
                    # 645 "20method.c"
                    info->head=info->source->buf;
                    # 647 "20method.c"
                    node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=expression_v13(info))));
                    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 653 "20method.c"
                    # 649 "20method.c"
                    if(_if_conditional376=!node_compile(node_323,info),                    _if_conditional376) {
                        # 650 "20method.c"
                        __result216__ = (_Bool)0;
                        come_call_finalizer3(source_319,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_317 = come_decrement_ref_count2(default_param_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result216__;
                    }
                    # 653 "20method.c"
                    __dec_obj90=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_319);
                    come_call_finalizer3(__dec_obj90,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    # 654 "20method.c"
                    info->p=p_320;
                    # 655 "20method.c"
                    info->head=head_321;
                    # 656 "20method.c"
                    info->sline=sline_322;
                    # 658 "20method.c"
                    come_value_324=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value283=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value283,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 662 "20method.c"
                    # 659 "20method.c"
                    if(_if_conditional377=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 659, 19)),                    _if_conditional377) {
                        # 660 "20method.c"
                        check_assign_type(((char*)(right_value286=xsprintf("\%s param num \%s is assinged to",((char*)(right_value284=charp_to_string(fun_name_178))),((char*)(right_value285=int_to_string(i_272)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 660, 20)),come_value_324->type,come_value_324,(_Bool)0,(_Bool)1,info);
                        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 665 "20method.c"
                    # 662 "20method.c"
                    if(_if_conditional378=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 662, 21))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 662, 22))->mHeap&&come_value_324->type->mHeap,                    _if_conditional378) {
                        # 663 "20method.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 663, 23)),come_value_324->type,come_value_324,info);
                    }
                    # 665 "20method.c"
                    list$1CVALUEph_replace(come_params_252,i_272,(struct CVALUE*)come_increment_ref_count(come_value_324));
                    # 666 "20method.c"
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_319,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 673 "20method.c"
                    # 669 "20method.c"
                    if(_if_conditional379=list$1CVALUEphp_operator_load_element(come_params_252,i_272)==((void*)0),                    _if_conditional379) {
                        # 670 "20method.c"
                        err_msg(info,"require parametor(%s) %d",fun_225->mName,i_272);
                        # 671 "20method.c"
                        __result217__ = (_Bool)0;
                        default_param_317 = come_decrement_ref_count2(default_param_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result217__;
                    }
                }
                default_param_317 = come_decrement_ref_count2(default_param_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 798 "20method.c"
        # 677 "20method.c"
        if(method_block_181) {
            # 678 "20method.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 678, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value288=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value287=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 678, "sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=_inf_value1)));
            come_call_finalizer3(right_value287,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value288,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 684 "20method.c"
            # 680 "20method.c"
            if(_if_conditional385=!node_compile(current_stack_frame_node_326,info),            _if_conditional385) {
                # 681 "20method.c"
                __result220__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result220__;
            }
            # 684 "20method.c"
            come_value_327=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value292,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 685 "20method.c"
            list$1CVALUEph_push_back(come_params_252,(struct CVALUE*)come_increment_ref_count(come_value_327));
            # 686 "20method.c"
            dec_stack_ptr(1,info);
            # 688 "20method.c"
            method_block2_328=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value294=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 688, "buffer"))))))));
            come_call_finalizer3(right_value293,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value294,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 689 "20method.c"
            method_block_type_329=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_225->mParamTypes,-1), "20method.c", 689, 24))))));
            come_call_finalizer3(right_value295,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 691 "20method.c"
            class_name_330=(char*)come_increment_ref_count(((char*)(right_value296=xsprintf("__current_stack%d__",info->current_stack_num))));
            right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 693 "20method.c"
            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_329->mParamTypes,0), "20method.c", 693, 25))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_330);
            # 694 "20method.c"
            current_stack_frame_struct_331=info->current_stack_frame_struct;
            # 695 "20method.c"
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_330);
            # 697 "20method.c"
            info->num_method_block++;
            # 704 "20method.c"
            # 699 "20method.c"
            if(_if_conditional386=string_operator_not_equals(method_block_type_329->mClass->mName,"lambda"),            _if_conditional386) {
                # 700 "20method.c"
                err_msg(info,"This function does not have method block(%s)",fun_name_178);
                # 701 "20method.c"
                __result221__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_328,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_330 = come_decrement_ref_count2(class_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result221__;
            }
            # 704 "20method.c"
            result_type_332=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(method_block_type_329->mResultType->v1))));
            come_call_finalizer3(right_value297,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 705 "20method.c"
            result_type_332->mStatic=(_Bool)0;
            # 706 "20method.c"
            param_types_333=method_block_type_329->mParamTypes;
            # 707 "20method.c"
            param_names_334=method_block_type_329->mParamNames;
            # 709 "20method.c"
            all_alhabet_sname_335=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value298=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 709, "buffer"))))))));
            come_call_finalizer3(right_value298,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value299,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 722 "20method.c"
            {
                # 711 "20method.c"
                p_336=info->sname;
                # 720 "20method.c"
                while(_while_condtional43=*p_336,                _while_condtional43) {
                    # 719 "20method.c"
                    # 713 "20method.c"
                    if(_if_conditional387=xisalnum(*p_336),                    _if_conditional387) {
                        # 714 "20method.c"
                        buffer_append_char(all_alhabet_sname_335,*p_336++);
                    }
                    else {
                        # 717 "20method.c"
                        p_336++;
                    }
                }
            }
            # 722 "20method.c"
            buffer_append_str(method_block2_328,((char*)(right_value302=xsprintf("%s method_block%d_%s(",((char*)(right_value300=make_type_name_string(result_type_332,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value301=buffer_to_string(all_alhabet_sname_335)))))));
            right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 724 "20method.c"
            i_337=0;
            # 749 "20method.c"
            for(            o2_saved_338=(param_types_333),it_339=list$1sTypeph_begin((o2_saved_338));            !list$1sTypeph_end((o2_saved_338));            it_339=list$1sTypeph_next((o2_saved_338))            ){
                # 726 "20method.c"
                param_type_340=it_339;
                # 743 "20method.c"
                # 727 "20method.c"
                if(_if_conditional388=i_337==0,                _if_conditional388) {
                    # 728 "20method.c"
                    param_name_341=(char*)come_increment_ref_count(((char*)(right_value303=xsprintf("parent"))));
                    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 730 "20method.c"
                    buffer_append_str(method_block2_328,((char*)(right_value305=xsprintf("%s",((char*)(right_value304=make_define_var(param_type_340,param_name_341,(_Bool)0,info)))))));
                    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_341 = come_decrement_ref_count2(param_name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 743 "20method.c"
                    # 732 "20method.c"
                    if(_if_conditional389=i_337==1,                    _if_conditional389) {
                        # 733 "20method.c"
                        param_name_342=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("it"))));
                        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 735 "20method.c"
                        buffer_append_str(method_block2_328,((char*)(right_value308=xsprintf("%s",((char*)(right_value307=make_define_var(param_type_340,param_name_342,(_Bool)0,info)))))));
                        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_342 = come_decrement_ref_count2(param_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 738 "20method.c"
                        param_name_343=(char*)come_increment_ref_count(((char*)(right_value309=xsprintf("it%d",i_337))));
                        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 740 "20method.c"
                        buffer_append_str(method_block2_328,((char*)(right_value311=xsprintf("%s",((char*)(right_value310=make_define_var(param_type_340,param_name_343,(_Bool)0,info)))))));
                        right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_343 = come_decrement_ref_count2(param_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                # 747 "20method.c"
                # 743 "20method.c"
                if(_if_conditional390=i_337!=list$1sTypeph_length(param_types_333)-1,                _if_conditional390) {
                    # 744 "20method.c"
                    buffer_append_str(method_block2_328,",");
                }
                # 747 "20method.c"
                i_337++;
            }
            # 749 "20method.c"
            buffer_append_str(method_block2_328,")\n");
            # 751 "20method.c"
            buffer_append_str(method_block2_328,((char*)(right_value312=buffer_to_string(method_block_181))));
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 753 "20method.c"
            source3_344=(struct buffer*)come_increment_ref_count(info->source);
            # 754 "20method.c"
            p_345=info->p;
            # 755 "20method.c"
            head_346=info->head;
            # 756 "20method.c"
            sline_347=info->sline;
            # 759 "20method.c"
            __dec_obj92=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_328);
            come_call_finalizer3(__dec_obj92,buffer_finalize, 0, 0, 0, 0, (void*)0);
            # 760 "20method.c"
            info->p=info->source->buf;
            # 761 "20method.c"
            info->head=info->source->buf;
            # 762 "20method.c"
            info->sline=method_block_sline_182;
            # 765 "20method.c"
            node_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=parse_function(info))));
            if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 771 "20method.c"
            # 767 "20method.c"
            if(_if_conditional391=!node_compile(node_348,info),            _if_conditional391) {
                # 768 "20method.c"
                __result222__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_328,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_330 = come_decrement_ref_count2(class_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_335,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result222__;
            }
            # 771 "20method.c"
            method_block_name_349=(char*)come_increment_ref_count(((char*)(right_value315=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value314=buffer_to_string(all_alhabet_sname_335)))))));
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 773 "20method.c"
            come_value2_350=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value316=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 773, "CVALUE"))));
            come_call_finalizer3(right_value316,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 775 "20method.c"
            fun2_351=map$2charphsFunph_at(info->funcs,method_block_name_349,((void*)0));
            # 782 "20method.c"
            # 777 "20method.c"
            if(_if_conditional392=fun2_351==((void*)0),            _if_conditional392) {
                # 778 "20method.c"
                err_msg(info,"method block function not found(%s)",method_block_name_349);
                # 779 "20method.c"
                __result223__ = (_Bool)1;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_328,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_330 = come_decrement_ref_count2(class_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_335,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_349 = come_decrement_ref_count2(method_block_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value2_350,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result223__;
            }
            # 782 "20method.c"
            method_block_type2_352=fun2_351->mLambdaType;
            # 784 "20method.c"
            __dec_obj93=come_value2_350->c_value;
            come_value2_350->c_value=(char*)come_increment_ref_count(((char*)(right_value317=xsprintf("(void*)%s",method_block_name_349))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 785 "20method.c"
            __dec_obj94=come_value2_350->type;
            come_value2_350->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(method_block_type2_352))));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 786 "20method.c"
            come_value2_350->var=((void*)0);
            # 788 "20method.c"
            list$1CVALUEph_push_back(come_params_252,(struct CVALUE*)come_increment_ref_count(come_value2_350));
            # 790 "20method.c"
            __dec_obj95=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_344);
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 0, 0, (void*)0);
            # 791 "20method.c"
            info->p=p_345;
            # 792 "20method.c"
            info->head=head_346;
            # 793 "20method.c"
            info->sline=sline_347;
            # 795 "20method.c"
            info->current_stack_frame_struct=current_stack_frame_struct_331;
            if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_328,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_330 = come_decrement_ref_count2(class_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_335,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_349 = come_decrement_ref_count2(method_block_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_350,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 798 "20method.c"
        buf_353=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value320=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 798, "buffer"))))))));
        come_call_finalizer3(right_value319,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value320,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 800 "20method.c"
        buffer_append_str(buf_353,generics_fun_name_224);
        # 801 "20method.c"
        buffer_append_str(buf_353,"(");
        # 804 "20method.c"
        j_354=0;
        # 814 "20method.c"
        for(        o2_saved_355=(struct list$1CVALUEph*)come_increment_ref_count((come_params_252)),it_356=list$1CVALUEph_begin((o2_saved_355));        !list$1CVALUEph_end((o2_saved_355));        it_356=list$1CVALUEph_next((o2_saved_355))        ){
            # 806 "20method.c"
            buffer_append_str(buf_353,it_356->c_value);
            # 812 "20method.c"
            # 808 "20method.c"
            if(_if_conditional393=j_354!=list$1CVALUEph_length(come_params_252)-1,            _if_conditional393) {
                # 809 "20method.c"
                buffer_append_str(buf_353,",");
            }
            # 812 "20method.c"
            j_354++;
        }
        come_call_finalizer3(o2_saved_355,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 814 "20method.c"
        buffer_append_str(buf_353,")");
        # 817 "20method.c"
        come_value2_357=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 817, "CVALUE"))));
        come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 819 "20method.c"
        __dec_obj96=come_value2_357->c_value;
        come_value2_357->c_value=(char*)come_increment_ref_count(((char*)(right_value322=buffer_to_string(buf_353))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 820 "20method.c"
        __dec_obj97=come_value2_357->type;
        come_value2_357->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(result_type2_240))));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 821 "20method.c"
        come_value2_357->type->mStatic=(_Bool)0;
        # 822 "20method.c"
        come_value2_357->var=((void*)0);
        # 828 "20method.c"
        # 824 "20method.c"
        if(result_type2_240->mHeap) {
            # 825 "20method.c"
            __dec_obj98=come_value2_357->c_value;
            come_value2_357->c_value=(char*)come_increment_ref_count(((char*)(right_value324=append_object_to_right_values(come_value2_357->c_value,(struct sType*)come_increment_ref_count(result_type2_240),info))));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 828 "20method.c"
        __dec_obj99=come_value2_357->c_value;
        come_value2_357->c_value=(char*)come_increment_ref_count(((char*)(right_value325=append_stackframe(come_value2_357->c_value,come_value2_357->type,info))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 830 "20method.c"
        add_come_last_code(info,"%s;\n",come_value2_357->c_value);
        # 832 "20method.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_357));
        # 849 "20method.c"
        # 834 "20method.c"
        if(method_block_181) {
            # 835 "20method.c"
            var_name_358=(char*)come_increment_ref_count(((char*)(right_value326=xsprintf("__current_stack%d__",info->num_current_stack))));
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 837 "20method.c"
            result_type_359=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(info->come_fun->mResultType))));
            come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 839 "20method.c"
            result_type2_360=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=solve_generics(result_type_359,info->generics_type,info))));
            come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 841 "20method.c"
            result_type3_361=result_type2_360->mNoSolvedGenericsType->v1;
            # 848 "20method.c"
            # 842 "20method.c"
            if(result_type2_360->mNoSolvedGenericsType->v1) {
                # 843 "20method.c"
                result_type3_361=result_type2_360->mNoSolvedGenericsType->v1;
            }
            else {
                # 846 "20method.c"
                result_type3_361=result_type2_360;
            }
            var_name_358 = come_decrement_ref_count2(var_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_360,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_240,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_241,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_353,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_357,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 851 "20method.c"
    come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 852 "20method.c"
    __dec_obj100=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_183);
    come_call_finalizer3(__dec_obj100,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 854 "20method.c"
    __result224__ = (_Bool)1;
    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result224__;
    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional228;
struct list$1tuple2$2charphsNodephph* __result125__;
void* right_value159;
void* right_value160;
struct list$1tuple2$2charphsNodephph* result_170;
struct list_item$1tuple2$2charphsNodephph* it_171;
_Bool _while_condtional30;
void* right_value167;
struct list$1tuple2$2charphsNodephph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&result_170, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_171, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value167 = (void*)0;
        # 133 "./neo-c.h"
        # 130 "./neo-c.h"
        if(_if_conditional228=self==((void*)0),        _if_conditional228) {
            # 131 "./neo-c.h"
            __result125__ = __result_obj__ = ((void*)0);
            return __result125__;
        }
        # 133 "./neo-c.h"
        result_170=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value160=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value159=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value159,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value160,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 135 "./neo-c.h"
        it_171=self->head;
        # 142 "./neo-c.h"
        while(_while_condtional30=it_171!=((void*)0),        _while_condtional30) {
            # 137 "./neo-c.h"
            list$1tuple2$2charphsNodephph_add(result_170,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value167=tuple2$2charphsNodephp_clone(it_171->item)))));
            come_call_finalizer3(right_value167,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 139 "./neo-c.h"
            it_171=it_171->next;
        }
        # 142 "./neo-c.h"
        __result130__ = __result_obj__ = result_170;
        come_call_finalizer3(result_170,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result130__;
        come_call_finalizer3(result_170,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result126__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_168;
_Bool _while_condtional29;
struct list_item$1tuple2$2charphsNodephph* prev_it_169;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_168, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_169, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 114 "./neo-c.h"
                it_168=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional29=it_168!=((void*)0),                _while_condtional29) {
                    # 116 "./neo-c.h"
                    prev_it_169=it_168;
                    # 117 "./neo-c.h"
                    it_168=it_168->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_169,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional229=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional229) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional232;
void* right_value161;
struct list_item$1tuple2$2charphsNodephph* litem_172;
struct tuple2$2charphsNodeph* __dec_obj50;
_Bool _if_conditional235;
void* right_value162;
struct list_item$1tuple2$2charphsNodephph* litem_173;
struct tuple2$2charphsNodeph* __dec_obj51;
void* right_value163;
struct list_item$1tuple2$2charphsNodephph* litem_174;
struct tuple2$2charphsNodeph* __dec_obj52;
struct list$1tuple2$2charphsNodephph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&litem_172, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value162 = (void*)0;
memset(&litem_173, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value163 = (void*)0;
memset(&litem_174, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 177 "./neo-c.h"
                # 146 "./neo-c.h"
                if(_if_conditional232=self->len==0,                _if_conditional232) {
                    # 147 "./neo-c.h"
                    litem_172=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value161=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value161,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    litem_172->prev=((void*)0);
                    # 150 "./neo-c.h"
                    litem_172->next=((void*)0);
                    # 151 "./neo-c.h"
                    __dec_obj50=litem_172->item;
                    litem_172->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj50,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 153 "./neo-c.h"
                    self->tail=litem_172;
                    # 154 "./neo-c.h"
                    self->head=litem_172;
                }
                else {
                    # 177 "./neo-c.h"
                    # 156 "./neo-c.h"
                    if(_if_conditional235=self->len==1,                    _if_conditional235) {
                        # 157 "./neo-c.h"
                        litem_173=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value162=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value162,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 159 "./neo-c.h"
                        litem_173->prev=self->head;
                        # 160 "./neo-c.h"
                        litem_173->next=((void*)0);
                        # 161 "./neo-c.h"
                        __dec_obj51=litem_173->item;
                        litem_173->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj51,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 163 "./neo-c.h"
                        self->tail=litem_173;
                        # 164 "./neo-c.h"
                        self->head->next=litem_173;
                    }
                    else {
                        # 167 "./neo-c.h"
                        litem_174=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value163=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value163,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_174->prev=self->tail;
                        # 170 "./neo-c.h"
                        litem_174->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj52=litem_174->item;
                        litem_174->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj52,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail->next=litem_174;
                        # 174 "./neo-c.h"
                        self->tail=litem_174;
                    }
                }
                # 177 "./neo-c.h"
                self->len++;
                # 179 "./neo-c.h"
                __result127__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result127__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional238;
_Bool _if_conditional239;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphsNodephp_finalize"
                            # 0 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional238=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional238) {
                                # 0 "tuple2$2charphsNodephp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple2$2charphsNodephp_finalize"
                            # 1 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional239=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional239) {
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional240;
struct tuple2$2charphsNodeph* __result128__;
void* right_value164;
struct tuple2$2charphsNodeph* result_175;
_Bool _if_conditional243;
void* right_value165;
char* __dec_obj53;
_Bool _if_conditional244;
void* right_value166;
struct sNode* __dec_obj54;
struct tuple2$2charphsNodeph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&result_175, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value165 = (void*)0;
right_value166 = (void*)0;
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional240=self==(void*)0,                _if_conditional240) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result128__ = __result_obj__ = (void*)0;
                    return __result128__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_175=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value164=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value164,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional243=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional243) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj53=result_175->v1;
                    result_175->v1=(char*)come_increment_ref_count(((char*)(right_value165=string_clone(self->v1))));
                    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional244=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional244) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj54=result_175->v2;
                    result_175->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(self->v2))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "tuple2$2charphsNodephp_clone"
                __result129__ = __result_obj__ = result_175;
                come_call_finalizer3(result_175,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result129__;
                come_call_finalizer3(result_175,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional241;
_Bool _if_conditional242;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2charphsNodeph_finalize"
                    # 0 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional241=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional241) {
                        # 0 "tuple2$2charphsNodeph_finalize"
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2charphsNodeph_finalize"
                    # 1 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional242=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional242) {
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_176;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsNodephph* prev_it_177;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_176, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_177, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        # 114 "./neo-c.h"
        it_176=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional31=it_176!=((void*)0),        _while_condtional31) {
            # 116 "./neo-c.h"
            prev_it_177=it_176;
            # 117 "./neo-c.h"
            it_176=it_176->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_177,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional254;
struct tuple2$2charphsTypeph* result_190;
struct tuple2$2charphsTypeph* __result136__;
_Bool _if_conditional255;
struct tuple2$2charphsTypeph* __result137__;
struct tuple2$2charphsTypeph* result_191;
struct tuple2$2charphsTypeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_191, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional254=self==((void*)0),        _if_conditional254) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_190,0,sizeof(struct tuple2$2charphsTypeph*));
            # 279 "./neo-c.h"
            __result136__ = __result_obj__ = result_190;
            return __result136__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result137__ = __result_obj__ = self->it->item;
            return __result137__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_191,0,sizeof(struct tuple2$2charphsTypeph*));
        # 289 "./neo-c.h"
        __result138__ = __result_obj__ = result_191;
        return __result138__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result139__ = self==((void*)0)||self->it==((void*)0);
        return __result139__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional256;
struct tuple2$2charphsTypeph* result_193;
struct tuple2$2charphsTypeph* __result140__;
_Bool _if_conditional257;
struct tuple2$2charphsTypeph* __result141__;
struct tuple2$2charphsTypeph* result_194;
struct tuple2$2charphsTypeph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_194, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional256=self==((void*)0)||self->it==((void*)0),        _if_conditional256) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_193,0,sizeof(struct tuple2$2charphsTypeph*));
            # 296 "./neo-c.h"
            __result140__ = __result_obj__ = result_193;
            return __result140__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result141__ = __result_obj__ = self->it->item;
            return __result141__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_194,0,sizeof(struct tuple2$2charphsTypeph*));
        # 307 "./neo-c.h"
        __result142__ = __result_obj__ = result_194;
        return __result142__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result143__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result143__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_198;
_Bool _while_condtional32;
struct list_item$1CVALUEph* prev_it_199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_198, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_199, 0, sizeof(struct list_item$1CVALUEph*));
                # 114 "./neo-c.h"
                it_198=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional32=it_198!=((void*)0),                _while_condtional32) {
                    # 116 "./neo-c.h"
                    prev_it_199=it_198;
                    # 117 "./neo-c.h"
                    it_198=it_198->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_199,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional260;
struct tuple2$2charphsNodeph* result_203;
struct tuple2$2charphsNodeph* __result144__;
_Bool _if_conditional261;
struct tuple2$2charphsNodeph* __result145__;
struct tuple2$2charphsNodeph* result_204;
struct tuple2$2charphsNodeph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_204, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional260=self==((void*)0),            _if_conditional260) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_203,0,sizeof(struct tuple2$2charphsNodeph*));
                # 279 "./neo-c.h"
                __result144__ = __result_obj__ = result_203;
                return __result144__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result145__ = __result_obj__ = self->it->item;
                return __result145__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_204,0,sizeof(struct tuple2$2charphsNodeph*));
            # 289 "./neo-c.h"
            __result146__ = __result_obj__ = result_204;
            return __result146__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result147__ = self==((void*)0)||self->it==((void*)0);
            return __result147__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional262;
struct tuple2$2charphsNodeph* result_206;
struct tuple2$2charphsNodeph* __result148__;
_Bool _if_conditional263;
struct tuple2$2charphsNodeph* __result149__;
struct tuple2$2charphsNodeph* result_207;
struct tuple2$2charphsNodeph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_207, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional262=self==((void*)0)||self->it==((void*)0),            _if_conditional262) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_206,0,sizeof(struct tuple2$2charphsNodeph*));
                # 296 "./neo-c.h"
                __result148__ = __result_obj__ = result_206;
                return __result148__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result149__ = __result_obj__ = self->it->item;
                return __result149__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_207,0,sizeof(struct tuple2$2charphsNodeph*));
            # 307 "./neo-c.h"
            __result150__ = __result_obj__ = result_207;
            return __result150__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional266;
struct list_item$1sTypeph* it_211;
int i_212;
_Bool _while_condtional33;
_Bool _if_conditional267;
struct sType* __result152__;
struct sType* default_value_213;
struct sType* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_211, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_212, 0, sizeof(int));
memset(&default_value_213, 0, sizeof(struct sType*));
                    # 673 "./neo-c.h"
                    # 669 "./neo-c.h"
                    if(_if_conditional266=position<0,                    _if_conditional266) {
                        # 670 "./neo-c.h"
                        position+=self->len;
                    }
                    # 673 "./neo-c.h"
                    it_211=self->head;
                    # 674 "./neo-c.h"
                    i_212=0;
                    # 681 "./neo-c.h"
                    while(_while_condtional33=it_211!=((void*)0),                    _while_condtional33) {
                        # 679 "./neo-c.h"
                        # 676 "./neo-c.h"
                        if(_if_conditional267=position==i_212,                        _if_conditional267) {
                            # 677 "./neo-c.h"
                            __result152__ = __result_obj__ = it_211->item;
                            return __result152__;
                        }
                        # 679 "./neo-c.h"
                        it_211=it_211->next;
                        # 680 "./neo-c.h"
                        i_212++;
                    }
                    # 683 "./neo-c.h"
                    # 684 "./neo-c.h"
                    memset(&default_value_213,0,sizeof(struct sType*));
                    # 685 "./neo-c.h"
                    __result153__ = __result_obj__ = default_value_213;
                    come_call_finalizer3(default_value_213,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result153__;
                    come_call_finalizer3(default_value_213,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional269;
struct CVALUE* result_217;
struct CVALUE* __result154__;
_Bool _if_conditional270;
struct CVALUE* __result155__;
struct CVALUE* result_218;
struct CVALUE* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct CVALUE*));
memset(&result_218, 0, sizeof(struct CVALUE*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional269=self==((void*)0),            _if_conditional269) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_217,0,sizeof(struct CVALUE*));
                # 279 "./neo-c.h"
                __result154__ = __result_obj__ = result_217;
                return __result154__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result155__ = __result_obj__ = self->it->item;
                return __result155__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_218,0,sizeof(struct CVALUE*));
            # 289 "./neo-c.h"
            __result156__ = __result_obj__ = result_218;
            return __result156__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result157__ = self==((void*)0)||self->it==((void*)0);
            return __result157__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional271;
struct CVALUE* result_220;
struct CVALUE* __result158__;
_Bool _if_conditional272;
struct CVALUE* __result159__;
struct CVALUE* result_221;
struct CVALUE* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(struct CVALUE*));
memset(&result_221, 0, sizeof(struct CVALUE*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional271=self==((void*)0)||self->it==((void*)0),            _if_conditional271) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_220,0,sizeof(struct CVALUE*));
                # 296 "./neo-c.h"
                __result158__ = __result_obj__ = result_220;
                return __result158__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result159__ = __result_obj__ = self->it->item;
                return __result159__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_221,0,sizeof(struct CVALUE*));
            # 307 "./neo-c.h"
            __result160__ = __result_obj__ = result_221;
            return __result160__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional274;
int __result161__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                # 354 "./neo-c.h"
                # 351 "./neo-c.h"
                if(_if_conditional274=self==((void*)0),                _if_conditional274) {
                    # 352 "./neo-c.h"
                    __result161__ = 0;
                    return __result161__;
                }
                # 354 "./neo-c.h"
                __result162__ = self->len;
                return __result162__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_228;
unsigned int hash_229;
unsigned int it_230;
_Bool _while_condtional34;
_Bool _if_conditional277;
_Bool _if_conditional278;
struct sFun* __result163__;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct sFun* __result164__;
struct sFun* __result165__;
struct sFun* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_228, 0, sizeof(struct sFun*));
memset(&hash_229, 0, sizeof(unsigned int));
memset(&it_230, 0, sizeof(unsigned int));
                # 1519 "./neo-c.h"
                # 1520 "./neo-c.h"
                memset(&default_value_228,0,sizeof(struct sFun*));
                # 1522 "./neo-c.h"
                hash_229=string_get_hash_key(((char*)key))%self->size;
                # 1523 "./neo-c.h"
                it_230=hash_229;
                # 1547 "./neo-c.h"
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional277=self->item_existance[it_230],                    _if_conditional277) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional278=string_equals(self->keys[it_230],key),                        _if_conditional278) {
                            # 1530 "./neo-c.h"
                            __result163__ = __result_obj__ = self->items[it_230];
                            come_call_finalizer3(default_value_228,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result163__;
                        }
                        # 1533 "./neo-c.h"
                        it_230++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional294=it_230>=self->size,                        _if_conditional294) {
                            # 1536 "./neo-c.h"
                            it_230=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional295=it_230==hash_229,                            _if_conditional295) {
                                # 1539 "./neo-c.h"
                                __result164__ = __result_obj__ = default_value_228;
                                come_call_finalizer3(default_value_228,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result164__;
                            }
                        }
                    }
                    else {
                        # 1543 "./neo-c.h"
                        __result165__ = __result_obj__ = default_value_228;
                        come_call_finalizer3(default_value_228,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result165__;
                    }
                }
                # 1547 "./neo-c.h"
                __result166__ = __result_obj__ = default_value_228;
                come_call_finalizer3(default_value_228,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result166__;
                come_call_finalizer3(default_value_228,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional279=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional279) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional280=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional280) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional281=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional281) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional282=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional282) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional283=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional283) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional284=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional284) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional285=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional285) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional288=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional288) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional289=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional289) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional290=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional290) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional291=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional291) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional292=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional292) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional293=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional293) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional286=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional286) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional287=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional287) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_233;
unsigned int it_234;
_Bool _while_condtional35;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct sFun* __result167__;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct sFun* __result168__;
struct sFun* __result169__;
struct sFun* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_233, 0, sizeof(unsigned int));
memset(&it_234, 0, sizeof(unsigned int));
                    # 1201 "./neo-c.h"
                    hash_233=string_get_hash_key(((char*)key))%self->size;
                    # 1202 "./neo-c.h"
                    it_234=hash_233;
                    # 1226 "./neo-c.h"
                    while(_while_condtional35=(_Bool)1,                    _while_condtional35) {
                        # 1224 "./neo-c.h"
                        # 1205 "./neo-c.h"
                        if(_if_conditional299=self->item_existance[it_234],                        _if_conditional299) {
                            # 1212 "./neo-c.h"
                            # 1207 "./neo-c.h"
                            if(_if_conditional300=string_equals(self->keys[it_234],key),                            _if_conditional300) {
                                # 1209 "./neo-c.h"
                                __result167__ = __result_obj__ = self->items[it_234];
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result167__;
                            }
                            # 1212 "./neo-c.h"
                            it_234++;
                            # 1220 "./neo-c.h"
                            # 1214 "./neo-c.h"
                            if(_if_conditional301=it_234>=self->size,                            _if_conditional301) {
                                # 1215 "./neo-c.h"
                                it_234=0;
                            }
                            else {
                                # 1220 "./neo-c.h"
                                # 1217 "./neo-c.h"
                                if(_if_conditional302=it_234==hash_233,                                _if_conditional302) {
                                    # 1218 "./neo-c.h"
                                    __result168__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result168__;
                                }
                            }
                        }
                        else {
                            # 1222 "./neo-c.h"
                            __result169__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result169__;
                        }
                    }
                    # 1226 "./neo-c.h"
                    __result170__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result170__;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_236;
unsigned int hash_237;
unsigned int it_238;
_Bool _while_condtional36;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct sClass* __result172__;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct sClass* __result173__;
struct sClass* __result174__;
struct sClass* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_236, 0, sizeof(struct sClass*));
memset(&hash_237, 0, sizeof(unsigned int));
memset(&it_238, 0, sizeof(unsigned int));
                            # 1519 "./neo-c.h"
                            # 1520 "./neo-c.h"
                            memset(&default_value_236,0,sizeof(struct sClass*));
                            # 1522 "./neo-c.h"
                            hash_237=string_get_hash_key(((char*)key))%self->size;
                            # 1523 "./neo-c.h"
                            it_238=hash_237;
                            # 1547 "./neo-c.h"
                            while(_while_condtional36=(_Bool)1,                            _while_condtional36) {
                                # 1545 "./neo-c.h"
                                # 1526 "./neo-c.h"
                                if(_if_conditional308=self->item_existance[it_238],                                _if_conditional308) {
                                    # 1533 "./neo-c.h"
                                    # 1528 "./neo-c.h"
                                    if(_if_conditional309=string_equals(self->keys[it_238],key),                                    _if_conditional309) {
                                        # 1530 "./neo-c.h"
                                        __result172__ = __result_obj__ = self->items[it_238];
                                        come_call_finalizer3(default_value_236,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result172__;
                                    }
                                    # 1533 "./neo-c.h"
                                    it_238++;
                                    # 1541 "./neo-c.h"
                                    # 1535 "./neo-c.h"
                                    if(_if_conditional310=it_238>=self->size,                                    _if_conditional310) {
                                        # 1536 "./neo-c.h"
                                        it_238=0;
                                    }
                                    else {
                                        # 1541 "./neo-c.h"
                                        # 1538 "./neo-c.h"
                                        if(_if_conditional311=it_238==hash_237,                                        _if_conditional311) {
                                            # 1539 "./neo-c.h"
                                            __result173__ = __result_obj__ = default_value_236;
                                            come_call_finalizer3(default_value_236,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result173__;
                                        }
                                    }
                                }
                                else {
                                    # 1543 "./neo-c.h"
                                    __result174__ = __result_obj__ = default_value_236;
                                    come_call_finalizer3(default_value_236,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result174__;
                                }
                            }
                            # 1547 "./neo-c.h"
                            __result175__ = __result_obj__ = default_value_236;
                            come_call_finalizer3(default_value_236,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result175__;
                            come_call_finalizer3(default_value_236,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional315;
int __result178__;
int __result179__;
memset(&__result_obj__, 0, sizeof(void*));
            # 354 "./neo-c.h"
            # 351 "./neo-c.h"
            if(_if_conditional315=self==((void*)0),            _if_conditional315) {
                # 352 "./neo-c.h"
                __result178__ = 0;
                return __result178__;
            }
            # 354 "./neo-c.h"
            __result179__ = self->len;
            return __result179__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional317;
struct sType* result_243;
struct sType* __result181__;
_Bool _if_conditional318;
struct sType* __result182__;
struct sType* result_244;
struct sType* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct sType*));
memset(&result_244, 0, sizeof(struct sType*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional317=self==((void*)0),            _if_conditional317) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_243,0,sizeof(struct sType*));
                # 279 "./neo-c.h"
                __result181__ = __result_obj__ = result_243;
                return __result181__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result182__ = __result_obj__ = self->it->item;
                return __result182__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_244,0,sizeof(struct sType*));
            # 289 "./neo-c.h"
            __result183__ = __result_obj__ = result_244;
            return __result183__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result184__ = self==((void*)0)||self->it==((void*)0);
            return __result184__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional319;
struct sType* result_246;
struct sType* __result185__;
_Bool _if_conditional320;
struct sType* __result186__;
struct sType* result_247;
struct sType* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct sType*));
memset(&result_247, 0, sizeof(struct sType*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional319=self==((void*)0)||self->it==((void*)0),            _if_conditional319) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_246,0,sizeof(struct sType*));
                # 296 "./neo-c.h"
                __result185__ = __result_obj__ = result_246;
                return __result185__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result186__ = __result_obj__ = self->it->item;
                return __result186__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_247,0,sizeof(struct sType*));
            # 307 "./neo-c.h"
            __result187__ = __result_obj__ = result_247;
            return __result187__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional322;
void* right_value211;
struct list_item$1sTypeph* litem_248;
struct sType* __dec_obj70;
_Bool _if_conditional323;
void* right_value212;
struct list_item$1sTypeph* litem_249;
struct sType* __dec_obj71;
void* right_value213;
struct list_item$1sTypeph* litem_250;
struct sType* __dec_obj72;
struct list$1sTypeph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
memset(&litem_248, 0, sizeof(struct list_item$1sTypeph*));
right_value212 = (void*)0;
memset(&litem_249, 0, sizeof(struct list_item$1sTypeph*));
right_value213 = (void*)0;
memset(&litem_250, 0, sizeof(struct list_item$1sTypeph*));
                    # 247 "./neo-c.h"
                    # 216 "./neo-c.h"
                    if(_if_conditional322=self->len==0,                    _if_conditional322) {
                        # 217 "./neo-c.h"
                        litem_248=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value211=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value211,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 219 "./neo-c.h"
                        litem_248->prev=((void*)0);
                        # 220 "./neo-c.h"
                        litem_248->next=((void*)0);
                        # 221 "./neo-c.h"
                        __dec_obj70=litem_248->item;
                        litem_248->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 223 "./neo-c.h"
                        self->tail=litem_248;
                        # 224 "./neo-c.h"
                        self->head=litem_248;
                    }
                    else {
                        # 247 "./neo-c.h"
                        # 226 "./neo-c.h"
                        if(_if_conditional323=self->len==1,                        _if_conditional323) {
                            # 227 "./neo-c.h"
                            litem_249=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value212=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value212,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 229 "./neo-c.h"
                            litem_249->prev=self->head;
                            # 230 "./neo-c.h"
                            litem_249->next=((void*)0);
                            # 231 "./neo-c.h"
                            __dec_obj71=litem_249->item;
                            litem_249->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 233 "./neo-c.h"
                            self->tail=litem_249;
                            # 234 "./neo-c.h"
                            self->head->next=litem_249;
                        }
                        else {
                            # 237 "./neo-c.h"
                            litem_250=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value213=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value213,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 239 "./neo-c.h"
                            litem_250->prev=self->tail;
                            # 240 "./neo-c.h"
                            litem_250->next=((void*)0);
                            # 241 "./neo-c.h"
                            __dec_obj72=litem_250->item;
                            litem_250->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 243 "./neo-c.h"
                            self->tail->next=litem_250;
                            # 244 "./neo-c.h"
                            self->tail=litem_250;
                        }
                    }
                    # 247 "./neo-c.h"
                    self->len++;
                    # 249 "./neo-c.h"
                    __result188__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result188__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional324;
void* right_value218;
struct list_item$1CVALUEph* litem_254;
struct CVALUE* __dec_obj73;
_Bool _if_conditional325;
void* right_value219;
struct list_item$1CVALUEph* litem_255;
struct CVALUE* __dec_obj74;
void* right_value220;
struct list_item$1CVALUEph* litem_256;
struct CVALUE* __dec_obj75;
struct list$1CVALUEph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
memset(&litem_254, 0, sizeof(struct list_item$1CVALUEph*));
right_value219 = (void*)0;
memset(&litem_255, 0, sizeof(struct list_item$1CVALUEph*));
right_value220 = (void*)0;
memset(&litem_256, 0, sizeof(struct list_item$1CVALUEph*));
                # 177 "./neo-c.h"
                # 146 "./neo-c.h"
                if(_if_conditional324=self->len==0,                _if_conditional324) {
                    # 147 "./neo-c.h"
                    litem_254=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value218=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 147, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value218,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    litem_254->prev=((void*)0);
                    # 150 "./neo-c.h"
                    litem_254->next=((void*)0);
                    # 151 "./neo-c.h"
                    __dec_obj73=litem_254->item;
                    litem_254->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 153 "./neo-c.h"
                    self->tail=litem_254;
                    # 154 "./neo-c.h"
                    self->head=litem_254;
                }
                else {
                    # 177 "./neo-c.h"
                    # 156 "./neo-c.h"
                    if(_if_conditional325=self->len==1,                    _if_conditional325) {
                        # 157 "./neo-c.h"
                        litem_255=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value219=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 157, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value219,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 159 "./neo-c.h"
                        litem_255->prev=self->head;
                        # 160 "./neo-c.h"
                        litem_255->next=((void*)0);
                        # 161 "./neo-c.h"
                        __dec_obj74=litem_255->item;
                        litem_255->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj74,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 163 "./neo-c.h"
                        self->tail=litem_255;
                        # 164 "./neo-c.h"
                        self->head->next=litem_255;
                    }
                    else {
                        # 167 "./neo-c.h"
                        litem_256=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value220=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 167, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value220,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_256->prev=self->tail;
                        # 170 "./neo-c.h"
                        litem_256->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj75=litem_256->item;
                        litem_256->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj75,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail->next=litem_256;
                        # 174 "./neo-c.h"
                        self->tail=litem_256;
                    }
                }
                # 177 "./neo-c.h"
                self->len++;
                # 179 "./neo-c.h"
                __result189__ = __result_obj__ = self;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result189__;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional329;
char* result_265;
char* __result191__;
_Bool _if_conditional330;
char* __result192__;
char* result_266;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_265, 0, sizeof(char*));
memset(&result_266, 0, sizeof(char*));
                        # 281 "./neo-c.h"
                        # 276 "./neo-c.h"
                        if(_if_conditional329=self==((void*)0),                        _if_conditional329) {
                            # 277 "./neo-c.h"
                            # 278 "./neo-c.h"
                            memset(&result_265,0,sizeof(char*));
                            # 279 "./neo-c.h"
                            __result191__ = __result_obj__ = result_265;
                            return __result191__;
                        }
                        # 281 "./neo-c.h"
                        self->it=self->head;
                        # 287 "./neo-c.h"
                        # 283 "./neo-c.h"
                        if(self->it) {
                            # 284 "./neo-c.h"
                            __result192__ = __result_obj__ = self->it->item;
                            return __result192__;
                        }
                        # 287 "./neo-c.h"
                        # 288 "./neo-c.h"
                        memset(&result_266,0,sizeof(char*));
                        # 289 "./neo-c.h"
                        __result193__ = __result_obj__ = result_266;
                        return __result193__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "./neo-c.h"
                        __result194__ = self==((void*)0)||self->it==((void*)0);
                        return __result194__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional331;
char* result_268;
char* __result195__;
_Bool _if_conditional332;
char* __result196__;
char* result_269;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_268, 0, sizeof(char*));
memset(&result_269, 0, sizeof(char*));
                        # 299 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(_if_conditional331=self==((void*)0)||self->it==((void*)0),                        _if_conditional331) {
                            # 294 "./neo-c.h"
                            # 295 "./neo-c.h"
                            memset(&result_268,0,sizeof(char*));
                            # 296 "./neo-c.h"
                            __result195__ = __result_obj__ = result_268;
                            return __result195__;
                        }
                        # 299 "./neo-c.h"
                        self->it=self->it->next;
                        # 305 "./neo-c.h"
                        # 301 "./neo-c.h"
                        if(self->it) {
                            # 302 "./neo-c.h"
                            __result196__ = __result_obj__ = self->it->item;
                            return __result196__;
                        }
                        # 305 "./neo-c.h"
                        # 306 "./neo-c.h"
                        memset(&result_269,0,sizeof(char*));
                        # 307 "./neo-c.h"
                        __result197__ = __result_obj__ = result_269;
                        return __result197__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct list$1CVALUEph* __result198__;
struct list_item$1CVALUEph* it_270;
int i_271;
_Bool _while_condtional38;
_Bool _if_conditional338;
struct CVALUE* __dec_obj76;
struct list$1CVALUEph* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_270, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_271, 0, sizeof(int));
                        # 579 "./neo-c.h"
                        # 575 "./neo-c.h"
                        if(_if_conditional336=position<0,                        _if_conditional336) {
                            # 576 "./neo-c.h"
                            position+=self->len;
                        }
                        # 584 "./neo-c.h"
                        # 579 "./neo-c.h"
                        if(_if_conditional337=position>=self->len,                        _if_conditional337) {
                            # 580 "./neo-c.h"
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            # 581 "./neo-c.h"
                            __result198__ = __result_obj__ = self;
                            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result198__;
                        }
                        # 584 "./neo-c.h"
                        it_270=self->head;
                        # 585 "./neo-c.h"
                        i_271=0;
                        # 595 "./neo-c.h"
                        while(_while_condtional38=it_270!=((void*)0),                        _while_condtional38) {
                            # 591 "./neo-c.h"
                            # 587 "./neo-c.h"
                            if(_if_conditional338=position==i_271,                            _if_conditional338) {
                                # 588 "./neo-c.h"
                                __dec_obj76=it_270->item;
                                it_270->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj76,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                # 589 "./neo-c.h"
                                break;
                            }
                            # 591 "./neo-c.h"
                            it_270=it_270->next;
                            # 592 "./neo-c.h"
                            i_271++;
                        }
                        # 595 "./neo-c.h"
                        __result199__ = __result_obj__ = self;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result199__;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional342;
struct list_item$1charph* it_277;
int i_278;
_Bool _while_condtional39;
_Bool _if_conditional343;
char* __result200__;
char* default_value_279;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_277, 0, sizeof(struct list_item$1charph*));
memset(&i_278, 0, sizeof(int));
memset(&default_value_279, 0, sizeof(char*));
                            # 673 "./neo-c.h"
                            # 669 "./neo-c.h"
                            if(_if_conditional342=position<0,                            _if_conditional342) {
                                # 670 "./neo-c.h"
                                position+=self->len;
                            }
                            # 673 "./neo-c.h"
                            it_277=self->head;
                            # 674 "./neo-c.h"
                            i_278=0;
                            # 681 "./neo-c.h"
                            while(_while_condtional39=it_277!=((void*)0),                            _while_condtional39) {
                                # 679 "./neo-c.h"
                                # 676 "./neo-c.h"
                                if(_if_conditional343=position==i_278,                                _if_conditional343) {
                                    # 677 "./neo-c.h"
                                    __result200__ = __result_obj__ = it_277->item;
                                    return __result200__;
                                }
                                # 679 "./neo-c.h"
                                it_277=it_277->next;
                                # 680 "./neo-c.h"
                                i_278++;
                            }
                            # 683 "./neo-c.h"
                            # 684 "./neo-c.h"
                            memset(&default_value_279,0,sizeof(char*));
                            # 685 "./neo-c.h"
                            __result201__ = __result_obj__ = default_value_279;
                            default_value_279 = come_decrement_ref_count2(default_value_279, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result201__;
                            default_value_279 = come_decrement_ref_count2(default_value_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional346;
struct list_item$1CVALUEph* it_281;
int i_282;
_Bool _while_condtional41;
_Bool _if_conditional347;
struct CVALUE* __result203__;
struct CVALUE* default_value_283;
struct CVALUE* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_281, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_282, 0, sizeof(int));
memset(&default_value_283, 0, sizeof(struct CVALUE*));
                            # 673 "./neo-c.h"
                            # 669 "./neo-c.h"
                            if(_if_conditional346=position<0,                            _if_conditional346) {
                                # 670 "./neo-c.h"
                                position+=self->len;
                            }
                            # 673 "./neo-c.h"
                            it_281=self->head;
                            # 674 "./neo-c.h"
                            i_282=0;
                            # 681 "./neo-c.h"
                            while(_while_condtional41=it_281!=((void*)0),                            _while_condtional41) {
                                # 679 "./neo-c.h"
                                # 676 "./neo-c.h"
                                if(_if_conditional347=position==i_282,                                _if_conditional347) {
                                    # 677 "./neo-c.h"
                                    __result203__ = __result_obj__ = it_281->item;
                                    return __result203__;
                                }
                                # 679 "./neo-c.h"
                                it_281=it_281->next;
                                # 680 "./neo-c.h"
                                i_282++;
                            }
                            # 683 "./neo-c.h"
                            # 684 "./neo-c.h"
                            memset(&default_value_283,0,sizeof(struct CVALUE*));
                            # 685 "./neo-c.h"
                            __result204__ = __result_obj__ = default_value_283;
                            come_call_finalizer3(default_value_283,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result204__;
                            come_call_finalizer3(default_value_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional355;
struct sNode* result_289;
struct sNode* __result205__;
_Bool _if_conditional356;
struct sNode* __result206__;
struct sNode* result_290;
struct sNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_289, 0, sizeof(struct sNode*));
memset(&result_290, 0, sizeof(struct sNode*));
                        # 281 "./neo-c.h"
                        # 276 "./neo-c.h"
                        if(_if_conditional355=self==((void*)0),                        _if_conditional355) {
                            # 277 "./neo-c.h"
                            # 278 "./neo-c.h"
                            memset(&result_289,0,sizeof(struct sNode*));
                            # 279 "./neo-c.h"
                            __result205__ = __result_obj__ = result_289;
                            return __result205__;
                        }
                        # 281 "./neo-c.h"
                        self->it=self->head;
                        # 287 "./neo-c.h"
                        # 283 "./neo-c.h"
                        if(self->it) {
                            # 284 "./neo-c.h"
                            __result206__ = __result_obj__ = self->it->item;
                            return __result206__;
                        }
                        # 287 "./neo-c.h"
                        # 288 "./neo-c.h"
                        memset(&result_290,0,sizeof(struct sNode*));
                        # 289 "./neo-c.h"
                        __result207__ = __result_obj__ = result_290;
                        return __result207__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "./neo-c.h"
                        __result208__ = self==((void*)0)||self->it==((void*)0);
                        return __result208__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional357;
struct sNode* result_292;
struct sNode* __result209__;
_Bool _if_conditional358;
struct sNode* __result210__;
struct sNode* result_293;
struct sNode* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_292, 0, sizeof(struct sNode*));
memset(&result_293, 0, sizeof(struct sNode*));
                        # 299 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(_if_conditional357=self==((void*)0)||self->it==((void*)0),                        _if_conditional357) {
                            # 294 "./neo-c.h"
                            # 295 "./neo-c.h"
                            memset(&result_292,0,sizeof(struct sNode*));
                            # 296 "./neo-c.h"
                            __result209__ = __result_obj__ = result_292;
                            return __result209__;
                        }
                        # 299 "./neo-c.h"
                        self->it=self->it->next;
                        # 305 "./neo-c.h"
                        # 301 "./neo-c.h"
                        if(self->it) {
                            # 302 "./neo-c.h"
                            __result210__ = __result_obj__ = self->it->item;
                            return __result210__;
                        }
                        # 305 "./neo-c.h"
                        # 306 "./neo-c.h"
                        memset(&result_293,0,sizeof(struct sNode*));
                        # 307 "./neo-c.h"
                        __result211__ = __result_obj__ = result_293;
                        return __result211__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional361;
void* right_value241;
struct list_item$1tuple2$2charphsNodephph* litem_296;
struct tuple2$2charphsNodeph* __dec_obj79;
_Bool _if_conditional362;
void* right_value242;
struct list_item$1tuple2$2charphsNodephph* litem_297;
struct tuple2$2charphsNodeph* __dec_obj80;
void* right_value243;
struct list_item$1tuple2$2charphsNodephph* litem_298;
struct tuple2$2charphsNodeph* __dec_obj81;
struct list$1tuple2$2charphsNodephph* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&litem_296, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value242 = (void*)0;
memset(&litem_297, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value243 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                        # 247 "./neo-c.h"
                        # 216 "./neo-c.h"
                        if(_if_conditional361=self->len==0,                        _if_conditional361) {
                            # 217 "./neo-c.h"
                            litem_296=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value241=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value241,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 219 "./neo-c.h"
                            litem_296->prev=((void*)0);
                            # 220 "./neo-c.h"
                            litem_296->next=((void*)0);
                            # 221 "./neo-c.h"
                            __dec_obj79=litem_296->item;
                            litem_296->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj79,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            # 223 "./neo-c.h"
                            self->tail=litem_296;
                            # 224 "./neo-c.h"
                            self->head=litem_296;
                        }
                        else {
                            # 247 "./neo-c.h"
                            # 226 "./neo-c.h"
                            if(_if_conditional362=self->len==1,                            _if_conditional362) {
                                # 227 "./neo-c.h"
                                litem_297=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value242=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(right_value242,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 229 "./neo-c.h"
                                litem_297->prev=self->head;
                                # 230 "./neo-c.h"
                                litem_297->next=((void*)0);
                                # 231 "./neo-c.h"
                                __dec_obj80=litem_297->item;
                                litem_297->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj80,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                # 233 "./neo-c.h"
                                self->tail=litem_297;
                                # 234 "./neo-c.h"
                                self->head->next=litem_297;
                            }
                            else {
                                # 237 "./neo-c.h"
                                litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value243=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(right_value243,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 239 "./neo-c.h"
                                litem_298->prev=self->tail;
                                # 240 "./neo-c.h"
                                litem_298->next=((void*)0);
                                # 241 "./neo-c.h"
                                __dec_obj81=litem_298->item;
                                litem_298->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj81,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                # 243 "./neo-c.h"
                                self->tail->next=litem_298;
                                # 244 "./neo-c.h"
                                self->tail=litem_298;
                            }
                        }
                        # 247 "./neo-c.h"
                        self->len++;
                        # 249 "./neo-c.h"
                        __result212__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result212__;
                        come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj82;
struct tuple2$2charphvoidp* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1738 "./neo-c.h"
                        __dec_obj82=self->v1;
                        self->v1=(char*)come_increment_ref_count(v1);
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        # 1739 "./neo-c.h"
                        self->v2=v2;
                        # 1741 "./neo-c.h"
                        __result213__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result213__;
                        come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
void* __result_obj__;
_Bool _if_conditional363;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphvoidpp_finalize"
                            # 0 "tuple2$2charphvoidpp_finalize"
                            if(_if_conditional363=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional363) {
                                # 0 "tuple2$2charphvoidpp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional373;
int __result214__;
int __result215__;
memset(&__result_obj__, 0, sizeof(void*));
            # 354 "./neo-c.h"
            # 351 "./neo-c.h"
            if(_if_conditional373=self==((void*)0),            _if_conditional373) {
                # 352 "./neo-c.h"
                __result214__ = 0;
                return __result214__;
            }
            # 354 "./neo-c.h"
            __result215__ = self->len;
            return __result215__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value329;
void* right_value330;
struct list$1tuple2$2charphsNodephph* params_362;
void* right_value331;
void* right_value332;
void* right_value333;
_Bool _if_conditional397;
_Bool parse_method_generics_type_363;
char* p_364;
int sline_365;
_Bool _if_conditional398;
_Bool _if_conditional399;
void* right_value334;
char* word_366;
_Bool _if_conditional400;
void* right_value335;
void* right_value336;
struct list$1sTypeph* method_generics_types_367;
_Bool _if_conditional401;
_Bool _while_condtional44;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
void* right_value337;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_368;
char* name_369;
_Bool err_370;
_Bool _if_conditional407;
void* right_value338;
_Bool _if_conditional408;
int __exception_result_var_b1;
_Bool _while_condtional45;
_Bool _if_conditional409;
char* p_371;
int sline_372;
_Bool err_flag_373;
void* right_value339;
char* label_374;
_Bool _if_conditional410;
void* right_value340;
char* __dec_obj103;
_Bool _if_conditional411;
char* __dec_obj104;
_Bool no_comma_375;
void* right_value341;
struct sNode* node_376;
void* right_value342;
struct sNode* __dec_obj105;
void* right_value343;
void* right_value344;
_Bool _if_conditional412;
_Bool _if_conditional413;
struct buffer* method_block_377;
int method_block_sline_378;
_Bool _if_conditional414;
char* head_379;
void* right_value345;
char* tail_380;
void* right_value346;
void* right_value347;
struct buffer* __dec_obj106;
int len_381;
void* right_value348;
char* mem_382;
_Bool _if_conditional415;
void* right_value349;
void* right_value350;
void* right_value351;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value359;
struct sNode* node_384;
void* right_value360;
struct sNode* __dec_obj113;
struct sNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&params_362, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&parse_method_generics_type_363, 0, sizeof(_Bool));
memset(&p_364, 0, sizeof(char*));
memset(&sline_365, 0, sizeof(int));
right_value334 = (void*)0;
memset(&word_366, 0, sizeof(char*));
right_value335 = (void*)0;
right_value336 = (void*)0;
memset(&method_generics_types_367, 0, sizeof(struct list$1sTypeph*));
right_value337 = (void*)0;
memset(&type_368, 0, sizeof(struct sType*));
memset(&name_369, 0, sizeof(char*));
memset(&err_370, 0, sizeof(_Bool));
memset(&type_368, 0, sizeof(struct sType*));
memset(&name_369, 0, sizeof(char*));
memset(&err_370, 0, sizeof(_Bool));
right_value338 = (void*)0;
memset(&p_371, 0, sizeof(char*));
memset(&sline_372, 0, sizeof(int));
memset(&err_flag_373, 0, sizeof(_Bool));
right_value339 = (void*)0;
memset(&label_374, 0, sizeof(char*));
right_value340 = (void*)0;
memset(&no_comma_375, 0, sizeof(_Bool));
right_value341 = (void*)0;
memset(&node_376, 0, sizeof(struct sNode*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&method_block_377, 0, sizeof(struct buffer*));
memset(&method_block_sline_378, 0, sizeof(int));
memset(&head_379, 0, sizeof(char*));
right_value345 = (void*)0;
memset(&tail_380, 0, sizeof(char*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&len_381, 0, sizeof(int));
right_value348 = (void*)0;
memset(&mem_382, 0, sizeof(char*));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value359 = (void*)0;
memset(&node_384, 0, sizeof(struct sNode*));
right_value360 = (void*)0;
    # 860 "20method.c"
    params_362=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value330=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value329=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 860, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value329,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value330,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 861 "20method.c"
    list$1tuple2$2charphsNodephph_push_back(params_362,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value333=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value331=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 861, "tuple2$2charphsNodeph")))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=sNode_clone(obj)))))))));
    come_call_finalizer3(right_value331,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value333,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 869 "20method.c"
    # 863 "20method.c"
    if(_if_conditional397=*info->p==45&&*(info->p+1)==62,    _if_conditional397) {
        # 864 "20method.c"
        info->p+=2;
        # 865 "20method.c"
        skip_spaces_and_lf(info);
    }
    # 869 "20method.c"
    parse_method_generics_type_363=(_Bool)0;
    # 891 "20method.c"
    {
        # 871 "20method.c"
        p_364=info->p;
        # 872 "20method.c"
        sline_365=info->sline;
        # 887 "20method.c"
        # 874 "20method.c"
        if(_if_conditional398=*info->p==60,        _if_conditional398) {
            # 875 "20method.c"
            info->p++;
            # 876 "20method.c"
            skip_spaces_and_lf(info);
            # 885 "20method.c"
            # 878 "20method.c"
            if(_if_conditional399=xisalpha(*info->p)||*info->p==95,            _if_conditional399) {
                # 879 "20method.c"
                word_366=(char*)come_increment_ref_count(((char*)(right_value334=parse_word(info))));
                right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 884 "20method.c"
                # 881 "20method.c"
                if(_if_conditional400=is_type_name(word_366,info),                _if_conditional400) {
                    # 882 "20method.c"
                    parse_method_generics_type_363=(_Bool)1;
                }
                word_366 = come_decrement_ref_count2(word_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 887 "20method.c"
        info->p=p_364;
        # 888 "20method.c"
        info->sline=sline_365;
    }
    # 891 "20method.c"
    method_generics_types_367=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value336=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value335=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 891, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value335,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value336,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 923 "20method.c"
    # 892 "20method.c"
    if(_if_conditional401=parse_method_generics_type_363&&*info->p==60,    _if_conditional401) {
        # 893 "20method.c"
        info->p++;
        # 894 "20method.c"
        skip_spaces_and_lf(info);
        # 921 "20method.c"
        while(_while_condtional44=(_Bool)1,        _while_condtional44) {
            # 920 "20method.c"
            # 897 "20method.c"
            if(_if_conditional402=*info->p==0,            _if_conditional402) {
                # 898 "20method.c"
                err_msg(info,"unexpected source end");
                # 899 "20method.c"
                exit(2);
            }
            else {
                # 920 "20method.c"
                # 901 "20method.c"
                if(_if_conditional403=*info->p==62,                _if_conditional403) {
                    # 902 "20method.c"
                    info->p++;
                    # 903 "20method.c"
                    skip_spaces_and_lf(info);
                    # 904 "20method.c"
                    break;
                }
                else {
                    # 920 "20method.c"
                    # 906 "20method.c"
                    if(_if_conditional404=*info->p==44,                    _if_conditional404) {
                        # 907 "20method.c"
                        info->p++;
                        # 908 "20method.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 911 "20method.c"
                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value337=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_368=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                        name_369=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        err_370=multiple_assign_var5->v3;
                        come_call_finalizer3(right_value337,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 918 "20method.c"
                        # 913 "20method.c"
                        if(_if_conditional407=!err_370,                        _if_conditional407) {
                            # 914 "20method.c"
                            err_msg(info,"invalid method generics paramtor type");
                            # 915 "20method.c"
                            exit(2);
                        }
                        # 918 "20method.c"
                        list$1sTypeph_push_back(method_generics_types_367,(struct sType*)come_increment_ref_count(((struct sType*)(right_value338=sType_clone(type_368)))));
                        come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_368,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_369 = come_decrement_ref_count2(name_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 977 "20method.c"
    # 923 "20method.c"
    if(_if_conditional408=*info->p!=123,    _if_conditional408) {
        # 924 "20method.c"
        (come_push_stackframe("20method.c", 924, 26),__exception_result_var_b1=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b1);
        # 975 "20method.c"
        while(_while_condtional45=(_Bool)1,        _while_condtional45) {
            # 933 "20method.c"
            # 927 "20method.c"
            if(_if_conditional409=*info->p==41,            _if_conditional409) {
                # 928 "20method.c"
                info->p++;
                # 929 "20method.c"
                skip_spaces_and_lf(info);
                # 930 "20method.c"
                break;
            }
            # 933 "20method.c"
            p_371=info->p;
            # 934 "20method.c"
            sline_372=info->sline;
            # 936 "20method.c"
            err_flag_373=(_Bool)0;
            # 937 "20method.c"
            label_374=(char*)come_increment_ref_count(((char*)(right_value339=__builtin_string(""))));
            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 941 "20method.c"
            # 938 "20method.c"
            if(_if_conditional410=xisalpha(*info->p)||*info->p==95,            _if_conditional410) {
                # 939 "20method.c"
                __dec_obj103=label_374;
                label_374=(char*)come_increment_ref_count(((char*)(right_value340=parse_word(info))));
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 940 "20method.c"
                err_flag_373=(_Bool)1;
            }
            # 954 "20method.c"
            # 943 "20method.c"
            if(_if_conditional411=err_flag_373==(_Bool)1&&*info->p==58,            _if_conditional411) {
                # 944 "20method.c"
                info->p++;
                # 945 "20method.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 948 "20method.c"
                __dec_obj104=label_374;
                label_374=((void*)0);
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                # 950 "20method.c"
                info->p=p_371;
                # 951 "20method.c"
                info->sline=sline_372;
            }
            # 954 "20method.c"
            no_comma_375=info->no_comma;
            # 955 "20method.c"
            info->no_comma=(_Bool)1;
            # 957 "20method.c"
            node_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
            if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 959 "20method.c"
            __dec_obj105=node_376;
            node_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_376),info))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 961 "20method.c"
            info->no_comma=no_comma_375;
            # 963 "20method.c"
            list$1tuple2$2charphsNodephph_push_back(params_362,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value344=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value343=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 963, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_374),(struct sNode*)come_increment_ref_count(node_376))))));
            come_call_finalizer3(right_value343,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value344,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 974 "20method.c"
            # 965 "20method.c"
            if(_if_conditional412=*info->p==44,            _if_conditional412) {
                # 966 "20method.c"
                info->p++;
                # 967 "20method.c"
                skip_spaces_and_lf(info);
            }
            else {
                # 974 "20method.c"
                # 969 "20method.c"
                if(_if_conditional413=*info->p==41,                _if_conditional413) {
                    # 970 "20method.c"
                    info->p++;
                    # 971 "20method.c"
                    skip_spaces_and_lf(info);
                    # 972 "20method.c"
                    label_374 = come_decrement_ref_count2(label_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_374 = come_decrement_ref_count2(label_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    # 977 "20method.c"
    method_block_377=((void*)0);
    # 978 "20method.c"
    method_block_sline_378=0;
    # 998 "20method.c"
    # 979 "20method.c"
    if(_if_conditional414=*info->p==123,    _if_conditional414) {
        # 980 "20method.c"
        head_379=info->p;
        # 981 "20method.c"
        method_block_sline_378=info->sline;
        # 983 "20method.c"
        ((char*)(right_value345=skip_block(info)));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 985 "20method.c"
        tail_380=info->p;
        # 987 "20method.c"
        __dec_obj106=method_block_377;
        method_block_377=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value346=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 987, "buffer"))))))));
        come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value346,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value347,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 989 "20method.c"
        len_381=tail_380-head_379;
        # 990 "20method.c"
        mem_382=(char*)come_increment_ref_count(((char*)(right_value348=(char*)come_calloc(1, sizeof(char)*(1*(len_381+1)), "20method.c", 990, "char"))));
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 991 "20method.c"
        memcpy(mem_382,head_379,len_381);
        # 992 "20method.c"
        mem_382[len_381]=0;
        # 994 "20method.c"
        buffer_append_str(method_block_377,mem_382);
        # 995 "20method.c"
        buffer_append_str(method_block_377,"\n");
        mem_382 = come_decrement_ref_count2(mem_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    # 998 "20method.c"
    parse_sharp_v5(info);
    # 1003 "20method.c"
    # 1000 "20method.c"
    if(_if_conditional415=*info->p==60,    _if_conditional415) {
    }
    # 1003 "20method.c"
    parse_sharp_v5(info);
    # 1005 "20method.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1005, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value351=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value349=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1005, "sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_362),method_block_377,method_block_sline_378,method_generics_types_367,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_384=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=_inf_value2)));
    come_call_finalizer3(right_value349,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value351,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1007 "20method.c"
    __dec_obj113=node_384;
    node_384=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_384),info))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1009 "20method.c"
    __result228__ = __result_obj__ = node_384;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(params_362,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_367,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_377,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result228__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(params_362,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_367,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_377,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj101;
struct sNode* __dec_obj102;
struct tuple2$2charphsNodeph* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
        # 1738 "./neo-c.h"
        __dec_obj101=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        # 1739 "./neo-c.h"
        __dec_obj102=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
        # 1741 "./neo-c.h"
        __result225__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result225__;
        come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional405;
_Bool _if_conditional406;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            # 0 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional405=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional405) {
                                # 0 "tuple3$3sTypephcharphboolp_finalize"
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple3$3sTypephcharphboolp_finalize"
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional406=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional406) {
                                # 1 "tuple3$3sTypephcharphboolp_finalize"
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sMethodCallNode_finalize"
        # 0 "sMethodCallNode_finalize"
        if(_if_conditional416=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional416) {
            # 0 "sMethodCallNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sMethodCallNode_finalize"
        # 1 "sMethodCallNode_finalize"
        if(_if_conditional417=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional417) {
            # 1 "sMethodCallNode_finalize"
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 3 "sMethodCallNode_finalize"
        # 2 "sMethodCallNode_finalize"
        if(_if_conditional418=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional418) {
            # 2 "sMethodCallNode_finalize"
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 4 "sMethodCallNode_finalize"
        # 3 "sMethodCallNode_finalize"
        if(_if_conditional419=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional419) {
            # 3 "sMethodCallNode_finalize"
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 5 "sMethodCallNode_finalize"
        # 4 "sMethodCallNode_finalize"
        if(_if_conditional420=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional420) {
            # 4 "sMethodCallNode_finalize"
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 6 "sMethodCallNode_finalize"
        # 5 "sMethodCallNode_finalize"
        if(_if_conditional421=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional421) {
            # 5 "sMethodCallNode_finalize"
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional422;
struct sMethodCallNode* __result226__;
void* right_value352;
struct sMethodCallNode* result_383;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value353;
char* __dec_obj107;
_Bool _if_conditional425;
void* right_value354;
struct sNode* __dec_obj108;
_Bool _if_conditional426;
void* right_value355;
char* __dec_obj109;
_Bool _if_conditional427;
void* right_value356;
struct list$1tuple2$2charphsNodephph* __dec_obj110;
_Bool _if_conditional428;
void* right_value357;
struct buffer* __dec_obj111;
_Bool _if_conditional429;
_Bool _if_conditional430;
void* right_value358;
struct list$1sTypeph* __dec_obj112;
struct sMethodCallNode* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
memset(&result_383, 0, sizeof(struct sMethodCallNode*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
        # 3 "sMethodCallNode_clone"
        # 2 "sMethodCallNode_clone"
        if(_if_conditional422=self==(void*)0,        _if_conditional422) {
            # 2 "sMethodCallNode_clone"
            __result226__ = __result_obj__ = (void*)0;
            return __result226__;
        }
        # 3 "sMethodCallNode_clone"
        result_383=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value352=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer3(right_value352,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sMethodCallNode_clone"
        # 4 "sMethodCallNode_clone"
        if(_if_conditional423=self!=((void*)0),        _if_conditional423) {
            # 4 "sMethodCallNode_clone"
            result_383->sline=self->sline;
        }
        # 6 "sMethodCallNode_clone"
        # 5 "sMethodCallNode_clone"
        if(_if_conditional424=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional424) {
            # 5 "sMethodCallNode_clone"
            __dec_obj107=result_383->sname;
            result_383->sname=(char*)come_increment_ref_count(((char*)(right_value353=string_clone(self->sname))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sMethodCallNode_clone"
        # 6 "sMethodCallNode_clone"
        if(_if_conditional425=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional425) {
            # 6 "sMethodCallNode_clone"
            __dec_obj108=result_383->obj;
            result_383->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=sNode_clone(self->obj))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 8 "sMethodCallNode_clone"
        # 7 "sMethodCallNode_clone"
        if(_if_conditional426=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional426) {
            # 7 "sMethodCallNode_clone"
            __dec_obj109=result_383->fun_name;
            result_383->fun_name=(char*)come_increment_ref_count(((char*)(right_value355=string_clone(self->fun_name))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 9 "sMethodCallNode_clone"
        # 8 "sMethodCallNode_clone"
        if(_if_conditional427=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional427) {
            # 8 "sMethodCallNode_clone"
            __dec_obj110=result_383->params;
            result_383->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value356=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj110,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value356,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 10 "sMethodCallNode_clone"
        # 9 "sMethodCallNode_clone"
        if(_if_conditional428=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional428) {
            # 9 "sMethodCallNode_clone"
            __dec_obj111=result_383->method_block;
            result_383->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value357=buffer_clone(self->method_block))));
            come_call_finalizer3(__dec_obj111,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value357,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sMethodCallNode_clone"
        # 10 "sMethodCallNode_clone"
        if(_if_conditional429=self!=((void*)0),        _if_conditional429) {
            # 10 "sMethodCallNode_clone"
            result_383->method_block_sline=self->method_block_sline;
        }
        # 12 "sMethodCallNode_clone"
        # 11 "sMethodCallNode_clone"
        if(_if_conditional430=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional430) {
            # 11 "sMethodCallNode_clone"
            __dec_obj112=result_383->method_generics_types;
            result_383->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value358=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj112,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value358,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sMethodCallNode_clone"
        __result227__ = __result_obj__ = result_383;
        come_call_finalizer3(result_383,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result227__;
        come_call_finalizer3(result_383,sMethodCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional431;
void* right_value361;
void* right_value362;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value365;
struct sNode* __result231__;
void* right_value366;
struct sNode* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
    # 1018 "20method.c"
    # 1014 "20method.c"
    if(_if_conditional431=charp_operator_equals(buf,"__current__"),    _if_conditional431) {
        # 1015 "20method.c"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1015, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value362=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value361=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1015, "sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result231__ = __result_obj__ = ((struct sNode*)(right_value365=_inf_value3));
        come_call_finalizer3(right_value361,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value362,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result231__;
    }
    # 1018 "20method.c"
    __result232__ = __result_obj__ = ((struct sNode*)(right_value366=string_node_v15(buf,head,head_sline,info)));
    if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result232__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional432;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sCurrentNode_finalize"
            # 0 "sCurrentNode_finalize"
            if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional432) {
                # 0 "sCurrentNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional433;
struct sCurrentNode* __result229__;
void* right_value363;
struct sCurrentNode* result_385;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value364;
char* __dec_obj114;
struct sCurrentNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
memset(&result_385, 0, sizeof(struct sCurrentNode*));
right_value364 = (void*)0;
            # 3 "sCurrentNode_clone"
            # 2 "sCurrentNode_clone"
            if(_if_conditional433=self==(void*)0,            _if_conditional433) {
                # 2 "sCurrentNode_clone"
                __result229__ = __result_obj__ = (void*)0;
                return __result229__;
            }
            # 3 "sCurrentNode_clone"
            result_385=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value363=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer3(right_value363,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sCurrentNode_clone"
            # 4 "sCurrentNode_clone"
            if(_if_conditional434=self!=((void*)0),            _if_conditional434) {
                # 4 "sCurrentNode_clone"
                result_385->sline=self->sline;
            }
            # 6 "sCurrentNode_clone"
            # 5 "sCurrentNode_clone"
            if(_if_conditional435=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional435) {
                # 5 "sCurrentNode_clone"
                __dec_obj114=result_385->sname;
                result_385->sname=(char*)come_increment_ref_count(((char*)(right_value364=string_clone(self->sname))));
                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sCurrentNode_clone"
            __result230__ = __result_obj__ = result_385;
            come_call_finalizer3(result_385,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result230__;
            come_call_finalizer3(result_385,sCurrentNode_finalize, 0, 0, 0, 0, (void*)0);
}

