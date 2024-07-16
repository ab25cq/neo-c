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

struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);

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










struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
struct sCurrentNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    self->sline=info->sline;
    __dec_obj12=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(info->sname))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = self->sline;
    return __result53__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value80;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result54__ = __result_obj__ = ((char*)(right_value80=__builtin_string(self->sname)));
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sCurrentNode_terminated(struct sCurrentNode* self){
void* __result_obj__;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    __result55__ = (_Bool)0;
    return __result55__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__;
void* right_value81;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
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
    info->current_stack_num++;
    class_name_47=(char*)come_increment_ref_count(((char*)(right_value82=xsprintf("__current_stack%d__",info->current_stack_num))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    current_stack_48=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value84=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value83=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 35, "sClass")))),class_name_47,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer3(right_value83,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    vtable_57=info->lv_table;
    while(vtable_57) {
        for(        o2_saved_58=(struct map$2charphsVarph*)come_increment_ref_count((vtable_57->mVars)),it_61=map$2charphsVarph_begin((o2_saved_58));        !map$2charphsVarph_end((o2_saved_58));        it_61=map$2charphsVarph_next((o2_saved_58))        ){
            key_64=it_61;
            value_68=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_57->mVars,key_64), "20method.c", 42, 0));
            type2_93=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=sType_clone(value_68->mType))));
            come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type2_93->mPointerNum++;
            item_94=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value123=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value122=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 48, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value121=__builtin_string(value_68->mCValueName)))),(struct sType*)come_increment_ref_count(type2_93)))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value123,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional130=value_68->mCValueName!=((void*)0),            _if_conditional130) {
                if(_if_conditional131=strcmp(value_68->mCValueName,"__list_values")==0,                _if_conditional131) {
                }
                else {
                    if(_if_conditional132=strcmp(value_68->mCValueName,"__map_keys")==0,                    _if_conditional132) {
                    }
                    else {
                        if(_if_conditional133=strcmp(value_68->mCValueName,"__map_element")==0,                        _if_conditional133) {
                        }
                        else {
                            if(_if_conditional134=string_operator_equals(value_68->mType->mClass->mName,"va_list")||string_operator_equals(value_68->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional134) {
                            }
                            else {
                                if(_if_conditional136=list$1sNodeph_length(type2_93->mArrayNum)==1,                                _if_conditional136) {
                                    type3_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(type2_93))));
                                    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    list$1sNodeph_reset(type3_95->mArrayNum);
                                    type3_95->mPointerNum++;
                                    item2_98=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value127=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value126=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 67, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(value_68->mCValueName)))),(struct sType*)come_increment_ref_count(type3_95)))));
                                    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value127,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value134=tuple2$2charphsTypephp_clone(item2_98)))));
                                    come_call_finalizer3(right_value134,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(type3_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(item2_98,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
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
        vtable_57=vtable_57->mParent;
    }
    output_struct(current_stack_48,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_47),(struct sClass*)come_increment_ref_count(current_stack_48));
    num_current_stack_151++;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_47,num_current_stack_151);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_151,class_name_47);
    vtable_57=info->lv_table;
    while(vtable_57) {
        for(        o2_saved_152=(struct map$2charphsVarph*)come_increment_ref_count((vtable_57->mVars)),it_153=map$2charphsVarph_begin((o2_saved_152));        !map$2charphsVarph_end((o2_saved_152));        it_153=map$2charphsVarph_next((o2_saved_152))        ){
            key_154=it_153;
            value_155=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_57->mVars,key_154), "20method.c", 93, 1));
            type2_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(value_155->mType))));
            come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
            item_157=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value144=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value143=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 97, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_155->mCValueName),(struct sType*)come_increment_ref_count(type2_156)))));
            come_call_finalizer3(right_value143,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value144,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional201=value_155->mCValueName!=((void*)0),            _if_conditional201) {
                if(_if_conditional202=strcmp(value_155->mCValueName,"__list_values")==0,                _if_conditional202) {
                }
                else {
                    if(_if_conditional203=strcmp(value_155->mCValueName,"__map_keys")==0,                    _if_conditional203) {
                    }
                    else {
                        if(_if_conditional204=strcmp(value_155->mCValueName,"__map_element")==0,                        _if_conditional204) {
                        }
                        else {
                            if(_if_conditional205=string_operator_equals(value_155->mType->mClass->mName,"va_list")||string_operator_equals(value_155->mType->mClass->mName,"__builtin_va_list"),                            _if_conditional205) {
                            }
                            else {
                                if(_if_conditional206=string_operator_equals(type2_156->mClass->mName,"lambda"),                                _if_conditional206) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_151,value_155->mCValueName,value_155->mCValueName);
                                }
                                else {
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
        vtable_57=vtable_57->mParent;
    }
    come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 126, "CVALUE"))));
    come_call_finalizer3(right_value145,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=come_value_158->c_value;
    come_value_158->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("&__current_stack%d__",num_current_stack_151))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj44=come_value_158->type;
    come_value_158->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 129, "sType")))),class_name_47,(_Bool)0,info))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_158->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_158->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
    info->num_current_stack=num_current_stack_151;
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
        if(_if_conditional20=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional20) {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional21=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional21) {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional42=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional42) {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional43=self!=((void*)0)&&self->mParentClassName!=((void*)0),        _if_conditional43) {
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
                it_49=self->head;
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    prev_it_50=it_49;
                    it_49=it_49->next;
                    come_call_finalizer3(prev_it_50,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional22=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional22) {
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
                                        if(_if_conditional25=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                                        _if_conditional25) {
                                            come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional27=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional27) {
                                            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional29=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        _if_conditional29) {
                                            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional30=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        _if_conditional30) {
                                            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional31=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        _if_conditional31) {
                                            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional32=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        _if_conditional32) {
                                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional34=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        _if_conditional34) {
                                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional35=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        _if_conditional35) {
                                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional37=self!=((void*)0)&&self->mResultType!=((void*)0),                                        _if_conditional37) {
                                            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional38=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        _if_conditional38) {
                                            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional39=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        _if_conditional39) {
                                            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional40=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        _if_conditional40) {
                                            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional41=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        _if_conditional41) {
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
                                                it_51=self->head;
                                                while(_while_condtional8=it_51!=((void*)0),                                                _while_condtional8) {
                                                    prev_it_52=it_51;
                                                    it_51=it_51->next;
                                                    come_call_finalizer3(prev_it_52,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional26=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional26) {
                                                            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional28=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional28) {
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
                                                it_53=self->head;
                                                while(_while_condtional9=it_53!=((void*)0),                                                _while_condtional9) {
                                                    prev_it_54=it_53;
                                                    it_53=it_53->next;
                                                    come_call_finalizer3(prev_it_54,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional33) {
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
                                                it_55=self->head;
                                                while(_while_condtional10=it_55!=((void*)0),                                                _while_condtional10) {
                                                    prev_it_56=it_55;
                                                    it_55=it_55->next;
                                                    come_call_finalizer3(prev_it_56,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional36=self!=((void*)0)&&self->item!=((void*)0),                                                        _if_conditional36) {
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
            if(_if_conditional44=self==((void*)0),            _if_conditional44) {
                memset(&result_59,0,sizeof(char*));
                __result57__ = __result_obj__ = result_59;
                return __result57__;
            }
            self->key_list->it=self->key_list->head;
            if(self->key_list->it) {
                __result58__ = __result_obj__ = self->key_list->it->item;
                return __result58__;
            }
            memset(&result_60,0,sizeof(char*));
            __result59__ = __result_obj__ = result_60;
            return __result59__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
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
            if(_if_conditional46=self==((void*)0)||self->key_list->it==((void*)0),            _if_conditional46) {
                memset(&result_62,0,sizeof(char*));
                __result61__ = __result_obj__ = result_62;
                return __result61__;
            }
            self->key_list->it=self->key_list->it->next;
            if(self->key_list->it) {
                __result62__ = __result_obj__ = self->key_list->it->item;
                return __result62__;
            }
            memset(&result_63,0,sizeof(char*));
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
                memset(&default_value_65,0,sizeof(struct sVar*));
                hash_66=string_get_hash_key(((char*)key))%self->size;
                it_67=hash_66;
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    if(_if_conditional48=self->item_existance[it_67],                    _if_conditional48) {
                        if(_if_conditional49=string_equals(self->keys[it_67],key),                        _if_conditional49) {
                            __result64__ = __result_obj__ = self->items[it_67];
                            come_call_finalizer3(default_value_65,sVar_finalize, 0, 0, 0, 0, (void*)0);
                            return __result64__;
                        }
                        it_67++;
                        if(_if_conditional54=it_67>=self->size,                        _if_conditional54) {
                            it_67=0;
                        }
                        else {
                            if(_if_conditional55=it_67==hash_66,                            _if_conditional55) {
                                __result65__ = __result_obj__ = default_value_65;
                                come_call_finalizer3(default_value_65,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result65__;
                            }
                        }
                    }
                    else {
                        __result66__ = __result_obj__ = default_value_65;
                        come_call_finalizer3(default_value_65,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                    }
                }
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
                                if(_if_conditional50=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional50) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional51=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional51) {
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional52=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional52) {
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional53=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional53) {
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
                if(_if_conditional56=self==(void*)0,                _if_conditional56) {
                    __result68__ = __result_obj__ = (void*)0;
                    return __result68__;
                }
                result_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional57=self!=((void*)0),                _if_conditional57) {
                    result_69->mClass=self->mClass;
                }
                if(_if_conditional58=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional58) {
                    __dec_obj16=result_69->mMultipleTypes;
                    result_69->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional62=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional62) {
                    __dec_obj18=result_69->mNoSolvedGenericsType;
                    result_69->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value95,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional66=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional66) {
                    __dec_obj19=result_69->mOriginalLoadVarType;
                    result_69->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value96=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value96,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional67=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional67) {
                    __dec_obj20=result_69->mGenericsName;
                    result_69->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value97=string_clone(self->mGenericsName))));
                    __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional68=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional68) {
                    __dec_obj21=result_69->mGenericsTypes;
                    result_69->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value98=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value98,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional69=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional69) {
                    __dec_obj25=result_69->mArrayNum;
                    result_69->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value106,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional82=self!=((void*)0),                _if_conditional82) {
                    result_69->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(_if_conditional83=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional83) {
                    __dec_obj26=result_69->mParamTypes;
                    result_69->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value107,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional84=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional84) {
                    __dec_obj30=result_69->mParamNames;
                    result_69->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value114=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value114,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional88=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional88) {
                    __dec_obj31=result_69->mResultType;
                    result_69->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value115=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value115,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional89=self!=((void*)0),                _if_conditional89) {
                    result_69->mVarArgs=self->mVarArgs;
                }
                if(_if_conditional90=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional90) {
                    __dec_obj32=result_69->mAlignas;
                    result_69->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(self->mAlignas))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional91=self!=((void*)0),                _if_conditional91) {
                    result_69->mUnsigned=self->mUnsigned;
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    result_69->mShort=self->mShort;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    result_69->mLong=self->mLong;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    result_69->mLongLong=self->mLongLong;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    result_69->mConstant=self->mConstant;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    result_69->mRegister=self->mRegister;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    result_69->mVolatile=self->mVolatile;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    result_69->mStatic=self->mStatic;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    result_69->mRecord=self->mRecord;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    result_69->mExtern=self->mExtern;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    result_69->mRestrict=self->mRestrict;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    result_69->mImmutable=self->mImmutable;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    result_69->mHeap=self->mHeap;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    result_69->mDummyHeap=self->mDummyHeap;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    result_69->mDelegate=self->mDelegate;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    result_69->mShare=self->mShare;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    result_69->mClone=self->mClone;
                }
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    result_69->mNoHeap=self->mNoHeap;
                }
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    result_69->mNoCallingDestructor=self->mNoCallingDestructor;
                }
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    result_69->mRefference=self->mRefference;
                }
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    result_69->mException=self->mException;
                }
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    result_69->mPointerNum=self->mPointerNum;
                }
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    result_69->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    result_69->mNoArrayPointerNum=self->mNoArrayPointerNum;
                }
                if(_if_conditional115=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional115) {
                    __dec_obj33=result_69->mSizeNum;
                    result_69->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(self->mSizeNum))));
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    result_69->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    result_69->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(_if_conditional118=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional118) {
                    __dec_obj34=result_69->mOriginalTypeName;
                    result_69->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value118=string_clone(self->mOriginalTypeName))));
                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    result_69->mOriginalPointerNum=self->mOriginalPointerNum;
                }
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    result_69->mFunctionParam=self->mFunctionParam;
                }
                if(_if_conditional121=self!=((void*)0),                _if_conditional121) {
                    result_69->mAllocaValue=self->mAllocaValue;
                }
                if(_if_conditional122=self!=((void*)0),                _if_conditional122) {
                    result_69->mGenericsStruct=self->mGenericsStruct;
                }
                if(_if_conditional123=self!=((void*)0),                _if_conditional123) {
                    result_69->mSolvedGenericsName=self->mSolvedGenericsName;
                }
                if(_if_conditional124=self!=((void*)0),                _if_conditional124) {
                    result_69->mComeMemCore=self->mComeMemCore;
                }
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    result_69->mInline=self->mInline;
                }
                if(_if_conditional126=self!=((void*)0),                _if_conditional126) {
                    result_69->mNullValue=self->mNullValue;
                }
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    result_69->mGuardValue=self->mGuardValue;
                }
                if(_if_conditional128=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional128) {
                    __dec_obj35=result_69->mAsmName;
                    result_69->mAsmName=(char*)come_increment_ref_count(((char*)(right_value119=string_clone(self->mAsmName))));
                    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    result_69->mArrayPointerType=self->mArrayPointerType;
                }
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
                        if(_if_conditional59=self==((void*)0),                        _if_conditional59) {
                            __result69__ = __result_obj__ = ((void*)0);
                            return __result69__;
                        }
                        result_70=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value87=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                        come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_71=self->head;
                        while(_while_condtional12=it_71!=((void*)0),                        _while_condtional12) {
                            list$1sTypeph_add(result_70,(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(it_71->item)))));
                            come_call_finalizer3(right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            it_71=it_71->next;
                        }
                        __result72__ = __result_obj__ = result_70;
                        come_call_finalizer3(result_70,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                        come_call_finalizer3(result_70,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
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
                                if(_if_conditional60=self->len==0,                                _if_conditional60) {
                                    litem_72=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_72->prev=((void*)0);
                                    litem_72->next=((void*)0);
                                    __dec_obj13=litem_72->item;
                                    litem_72->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_72;
                                    self->head=litem_72;
                                }
                                else {
                                    if(_if_conditional61=self->len==1,                                    _if_conditional61) {
                                        litem_73=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                        come_call_finalizer3(right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_73->prev=self->head;
                                        litem_73->next=((void*)0);
                                        __dec_obj14=litem_73->item;
                                        litem_73->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_73;
                                        self->head->next=litem_73;
                                    }
                                    else {
                                        litem_74=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                        come_call_finalizer3(right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_74->prev=self->tail;
                                        litem_74->next=((void*)0);
                                        __dec_obj15=litem_74->item;
                                        litem_74->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_74;
                                        self->tail=litem_74;
                                    }
                                }
                                self->len++;
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
                        it_75=self->head;
                        while(_while_condtional13=it_75!=((void*)0),                        _while_condtional13) {
                            prev_it_76=it_75;
                            it_75=it_75->next;
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
                        if(_if_conditional63=self==(void*)0,                        _if_conditional63) {
                            __result73__ = __result_obj__ = (void*)0;
                            return __result73__;
                        }
                        result_77=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer3(right_value93,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional65=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional65) {
                            __dec_obj17=result_77->v1;
                            result_77->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(self->v1))));
                            come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value94,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        __result74__ = __result_obj__ = result_77;
                        come_call_finalizer3(result_77,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                        return __result74__;
                        come_call_finalizer3(result_77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional64=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional64) {
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
                        if(_if_conditional70=self==((void*)0),                        _if_conditional70) {
                            __result75__ = __result_obj__ = ((void*)0);
                            return __result75__;
                        }
                        result_78=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value99=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                        come_call_finalizer3(right_value99,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_79=self->head;
                        while(_while_condtional14=it_79!=((void*)0),                        _while_condtional14) {
                            list$1sNodeph_add(result_78,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=sNode_clone(it_79->item)))));
                            if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_79=it_79->next;
                        }
                        __result80__ = __result_obj__ = result_78;
                        come_call_finalizer3(result_78,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result80__;
                        come_call_finalizer3(result_78,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
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
                                if(_if_conditional71=self->len==0,                                _if_conditional71) {
                                    litem_80=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_80->prev=((void*)0);
                                    litem_80->next=((void*)0);
                                    __dec_obj22=litem_80->item;
                                    litem_80->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_80;
                                    self->head=litem_80;
                                }
                                else {
                                    if(_if_conditional72=self->len==1,                                    _if_conditional72) {
                                        litem_81=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                        come_call_finalizer3(right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_81->prev=self->head;
                                        litem_81->next=((void*)0);
                                        __dec_obj23=litem_81->item;
                                        litem_81->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_81;
                                        self->head->next=litem_81;
                                    }
                                    else {
                                        litem_82=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                        come_call_finalizer3(right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_82->prev=self->tail;
                                        litem_82->next=((void*)0);
                                        __dec_obj24=litem_82->item;
                                        litem_82->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_82;
                                        self->tail=litem_82;
                                    }
                                }
                                self->len++;
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
                                if(_if_conditional73=self==(void*)0,                                _if_conditional73) {
                                    __result78__ = __result_obj__ = (void*)0;
                                    return __result78__;
                                }
                                result_83=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional74=self!=((void*)0)&&self->clone!=((void*)0),                                _if_conditional74) {
                                    result_83->_protocol_obj=self->clone(self->_protocol_obj);
                                }
                                if(_if_conditional75=self!=((void*)0),                                _if_conditional75) {
                                    result_83->finalize=self->finalize;
                                }
                                if(_if_conditional76=self!=((void*)0),                                _if_conditional76) {
                                    result_83->clone=self->clone;
                                }
                                if(_if_conditional77=self!=((void*)0),                                _if_conditional77) {
                                    result_83->compile=self->compile;
                                }
                                if(_if_conditional78=self!=((void*)0),                                _if_conditional78) {
                                    result_83->sline=self->sline;
                                }
                                if(_if_conditional79=self!=((void*)0),                                _if_conditional79) {
                                    result_83->sname=self->sname;
                                }
                                if(_if_conditional80=self!=((void*)0),                                _if_conditional80) {
                                    result_83->terminated=self->terminated;
                                }
                                if(_if_conditional81=self!=((void*)0),                                _if_conditional81) {
                                    result_83->kind=self->kind;
                                }
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
                        it_84=self->head;
                        while(_while_condtional15=it_84!=((void*)0),                        _while_condtional15) {
                            prev_it_85=it_84;
                            it_84=it_84->next;
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
                        if(_if_conditional85=self==((void*)0),                        _if_conditional85) {
                            __result81__ = __result_obj__ = ((void*)0);
                            return __result81__;
                        }
                        result_86=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value109=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                        come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_87=self->head;
                        while(_while_condtional16=it_87!=((void*)0),                        _while_condtional16) {
                            list$1charph_add(result_86,(char*)come_increment_ref_count(((char*)(right_value113=string_clone(it_87->item)))));
                            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_87=it_87->next;
                        }
                        __result84__ = __result_obj__ = result_86;
                        come_call_finalizer3(result_86,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result84__;
                        come_call_finalizer3(result_86,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
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
                                if(_if_conditional86=self->len==0,                                _if_conditional86) {
                                    litem_88=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                    come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_88->prev=((void*)0);
                                    litem_88->next=((void*)0);
                                    __dec_obj27=litem_88->item;
                                    litem_88->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_88;
                                    self->head=litem_88;
                                }
                                else {
                                    if(_if_conditional87=self->len==1,                                    _if_conditional87) {
                                        litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                        come_call_finalizer3(right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_89->prev=self->head;
                                        litem_89->next=((void*)0);
                                        __dec_obj28=litem_89->item;
                                        litem_89->item=(char*)come_increment_ref_count(item);
                                        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_89;
                                        self->head->next=litem_89;
                                    }
                                    else {
                                        litem_90=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                        come_call_finalizer3(right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_90->prev=self->tail;
                                        litem_90->next=((void*)0);
                                        __dec_obj29=litem_90->item;
                                        litem_90->item=(char*)come_increment_ref_count(item);
                                        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_90;
                                        self->tail=litem_90;
                                    }
                                }
                                self->len++;
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
                        it_91=self->head;
                        while(_while_condtional17=it_91!=((void*)0),                        _while_condtional17) {
                            prev_it_92=it_91;
                            it_91=it_91->next;
                            come_call_finalizer3(prev_it_92,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj36;
struct sType* __dec_obj37;
struct tuple2$2charphsTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj36=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj37=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                                    if(_if_conditional135=self==((void*)0),                                    _if_conditional135) {
                                        __result87__ = 0;
                                        return __result87__;
                                    }
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
                                        it_96=self->head;
                                        while(_while_condtional18=it_96!=((void*)0),                                        _while_condtional18) {
                                            prev_it_97=it_96;
                                            it_96=it_96->next;
                                            come_call_finalizer3(prev_it_97,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        self->head=((void*)0);
                                        self->tail=((void*)0);
                                        self->len=0;
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
                                        if(_if_conditional137=self->len==0,                                        _if_conditional137) {
                                            litem_99=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value128=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsTypephph"))));
                                            come_call_finalizer3(right_value128,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            litem_99->prev=((void*)0);
                                            litem_99->next=((void*)0);
                                            __dec_obj38=litem_99->item;
                                            litem_99->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                            come_call_finalizer3(__dec_obj38,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            self->tail=litem_99;
                                            self->head=litem_99;
                                        }
                                        else {
                                            if(_if_conditional140=self->len==1,                                            _if_conditional140) {
                                                litem_100=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value129=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsTypephph"))));
                                                come_call_finalizer3(right_value129,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                litem_100->prev=self->head;
                                                litem_100->next=((void*)0);
                                                __dec_obj39=litem_100->item;
                                                litem_100->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                                come_call_finalizer3(__dec_obj39,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                self->tail=litem_100;
                                                self->head->next=litem_100;
                                            }
                                            else {
                                                litem_101=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value130=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsTypephph"))));
                                                come_call_finalizer3(right_value130,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                litem_101->prev=self->tail;
                                                litem_101->next=((void*)0);
                                                __dec_obj40=litem_101->item;
                                                litem_101->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                                come_call_finalizer3(__dec_obj40,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                self->tail->next=litem_101;
                                                self->tail=litem_101;
                                            }
                                        }
                                        self->len++;
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
                                                    if(_if_conditional143=self!=((void*)0)&&self->v1!=((void*)0),                                                    _if_conditional143) {
                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional144=self!=((void*)0)&&self->v2!=((void*)0),                                                    _if_conditional144) {
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
                                        if(_if_conditional145=self==(void*)0,                                        _if_conditional145) {
                                            __result91__ = __result_obj__ = (void*)0;
                                            return __result91__;
                                        }
                                        result_102=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value131=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                                        come_call_finalizer3(right_value131,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional148=self!=((void*)0)&&self->v1!=((void*)0),                                        _if_conditional148) {
                                            __dec_obj41=result_102->v1;
                                            result_102->v1=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(self->v1))));
                                            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional149=self!=((void*)0)&&self->v2!=((void*)0),                                        _if_conditional149) {
                                            __dec_obj42=result_102->v2;
                                            result_102->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(self->v2))));
                                            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
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
                                            if(_if_conditional146=self!=((void*)0)&&self->v1!=((void*)0),                                            _if_conditional146) {
                                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional147=self!=((void*)0)&&self->v2!=((void*)0),                                            _if_conditional147) {
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
            for(            i_103=0;            i_103<self->size;            i_103++            ){
                if(_if_conditional150=self->item_existance[i_103],                _if_conditional150) {
                    if(_if_conditional151=1,                    _if_conditional151) {
                        come_call_finalizer3(self->items[i_103],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_104=0;            i_104<self->size;            i_104++            ){
                if(_if_conditional152=self->item_existance[i_104],                _if_conditional152) {
                    if(_if_conditional153=1,                    _if_conditional153) {
                        self->keys[i_104] = come_decrement_ref_count2(self->keys[i_104], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
                it_105=self->head;
                while(_while_condtional19=it_105!=((void*)0),                _while_condtional19) {
                    prev_it_106=it_105;
                    it_105=it_105->next;
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
        if(_if_conditional154=self->len*10>=self->size,        _if_conditional154) {
            map$2charphsClassph_rehash(self);
        }
        hash_124=string_get_hash_key(key)%self->size;
        it_125=hash_124;
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            if(_if_conditional166=self->item_existance[it_125],            _if_conditional166) {
                if(_if_conditional167=string_equals(self->keys[it_125],key),                _if_conditional167) {
                    if(_if_conditional168=1,                    _if_conditional168) {
                        list$1charp_remove(self->key_list,self->keys[it_125]);
                        self->keys[it_125] = come_decrement_ref_count2(self->keys[it_125], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_125]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_125]);
                        self->keys[it_125]=key;
                    }
                    if(_if_conditional188=1,                    _if_conditional188) {
                        come_call_finalizer3(self->items[it_125],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_125]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_125]=item;
                    }
                    break;
                }
                it_125++;
                if(_if_conditional189=it_125>=self->size,                _if_conditional189) {
                    it_125=0;
                }
                else {
                    if(_if_conditional190=it_125==hash_124,                    _if_conditional190) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_125]=(_Bool)1;
                if(_if_conditional191=1,                _if_conditional191) {
                    self->keys[it_125]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_125]=key;
                }
                if(_if_conditional192=1,                _if_conditional192) {
                    self->items[it_125]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_125]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_142=(_Bool)0;
        for(        it2_145=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_145=list$1charp_next(self->key_list)        ){
            if(_if_conditional197=string_equals(it2_145,key),            _if_conditional197) {
                same_key_exist_142=(_Bool)1;
            }
        }
        if(_if_conditional198=!same_key_exist_142,        _if_conditional198) {
            list$1charp_push_back(self->key_list,key);
        }
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
                size_107=self->size*10;
                keys_108=(char**)come_increment_ref_count(((char**)(right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_107)), "./neo-c.h", 1313, "char*%"))));
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_109=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value137=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_107)), "./neo-c.h", 1314, "sClass*%"))));
                come_call_finalizer3(right_value137,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_110=(_Bool*)come_increment_ref_count(((_Bool*)(right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_107)), "./neo-c.h", 1315, "bool"))));
                right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_111=0;
                for(                it_114=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_114=map$2charphsClassph_next(self)                ){
                    memset(&default_value_117,0,sizeof(struct sClass*));
                    it2_120=map$2charphsClassph_at(self,it_114,default_value_117);
                    hash_121=string_get_hash_key(it_114)%size_107;
                    n_122=hash_121;
                    while(_while_condtional21=(_Bool)1,                    _while_condtional21) {
                        if(_if_conditional163=item_existance_110[n_122],                        _if_conditional163) {
                            n_122++;
                            if(_if_conditional164=n_122>=size_107,                            _if_conditional164) {
                                n_122=0;
                            }
                            else {
                                if(_if_conditional165=n_122==hash_121,                                _if_conditional165) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_110[n_122]=(_Bool)1;
                            keys_108[n_122]=it_114;
                            items_109[n_122]=map$2charphsClassph_at(self,it_114,default_value_123);
                            len_111++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_108;
                self->items=items_109;
                self->item_existance=item_existance_110;
                self->size=size_107;
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
                    if(_if_conditional155=self==((void*)0),                    _if_conditional155) {
                        memset(&result_112,0,sizeof(char*));
                        __result93__ = __result_obj__ = result_112;
                        return __result93__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result94__ = __result_obj__ = self->key_list->it->item;
                        return __result94__;
                    }
                    memset(&result_113,0,sizeof(char*));
                    __result95__ = __result_obj__ = result_113;
                    return __result95__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
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
                    if(_if_conditional157=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional157) {
                        memset(&result_115,0,sizeof(char*));
                        __result97__ = __result_obj__ = result_115;
                        return __result97__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result98__ = __result_obj__ = self->key_list->it->item;
                        return __result98__;
                    }
                    memset(&result_116,0,sizeof(char*));
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
                        hash_118=string_get_hash_key(((char*)key))%self->size;
                        it_119=hash_118;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional159=self->item_existance[it_119],                            _if_conditional159) {
                                if(_if_conditional160=string_equals(self->keys[it_119],key),                                _if_conditional160) {
                                    __result100__ = __result_obj__ = self->items[it_119];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result100__;
                                }
                                it_119++;
                                if(_if_conditional161=it_119>=self->size,                                _if_conditional161) {
                                    it_119=0;
                                }
                                else {
                                    if(_if_conditional162=it_119==hash_118,                                    _if_conditional162) {
                                        __result101__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result101__;
                                    }
                                }
                            }
                            else {
                                __result102__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result102__;
                            }
                        }
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
                            it2_126=0;
                            it_127=self->head;
                            while(_while_condtional23=it_127!=((void*)0),                            _while_condtional23) {
                                if(_if_conditional169=string_equals(it_127->item,item),                                _if_conditional169) {
                                    list$1charp_delete(self,it2_126,it2_126+1);
                                    break;
                                }
                                it2_126++;
                                it_127=it_127->next;
                            }
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
                                        if(_if_conditional170=head<0,                                        _if_conditional170) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional171=tail<0,                                        _if_conditional171) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional172=head>tail,                                        _if_conditional172) {
                                            tmp_128=tail;
                                            tail=head;
                                            head=tmp_128;
                                        }
                                        if(_if_conditional173=head<0,                                        _if_conditional173) {
                                            head=0;
                                        }
                                        if(_if_conditional174=tail>self->len,                                        _if_conditional174) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional175=head==tail,                                        _if_conditional175) {
                                            __result104__ = __result_obj__ = self;
                                            return __result104__;
                                        }
                                        if(_if_conditional176=head==0&&tail==self->len,                                        _if_conditional176) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional177=head==0,                                            _if_conditional177) {
                                                it_131=self->head;
                                                i_132=0;
                                                while(_while_condtional25=it_131!=((void*)0),                                                _while_condtional25) {
                                                    if(_if_conditional178=i_132<tail,                                                    _if_conditional178) {
                                                        prev_it_133=it_131;
                                                        it_131=it_131->next;
                                                        i_132++;
                                                        come_call_finalizer3(prev_it_133,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional179=i_132==tail,                                                        _if_conditional179) {
                                                            self->head=it_131;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_131=it_131->next;
                                                            i_132++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional180=tail==self->len,                                                _if_conditional180) {
                                                    it_134=self->head;
                                                    i_135=0;
                                                    while(_while_condtional26=it_134!=((void*)0),                                                    _while_condtional26) {
                                                        if(_if_conditional181=i_135==head,                                                        _if_conditional181) {
                                                            self->tail=it_134->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional182=i_135>=head,                                                        _if_conditional182) {
                                                            prev_it_136=it_134;
                                                            it_134=it_134->next;
                                                            i_135++;
                                                            come_call_finalizer3(prev_it_136,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_134=it_134->next;
                                                            i_135++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_137=self->head;
                                                    head_prev_it_138=((void*)0);
                                                    tail_it_139=((void*)0);
                                                    i_140=0;
                                                    while(_while_condtional27=it_137!=((void*)0),                                                    _while_condtional27) {
                                                        if(_if_conditional183=i_140==head,                                                        _if_conditional183) {
                                                            head_prev_it_138=it_137->prev;
                                                        }
                                                        if(_if_conditional184=i_140==tail,                                                        _if_conditional184) {
                                                            tail_it_139=it_137;
                                                        }
                                                        if(_if_conditional185=i_140>=head&&i_140<tail,                                                        _if_conditional185) {
                                                            prev_it_141=it_137;
                                                            it_137=it_137->next;
                                                            i_140++;
                                                            come_call_finalizer3(prev_it_141,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_137=it_137->next;
                                                            i_140++;
                                                        }
                                                    }
                                                    if(_if_conditional186=head_prev_it_138!=((void*)0),                                                    _if_conditional186) {
                                                        head_prev_it_138->next=tail_it_139;
                                                    }
                                                    if(_if_conditional187=tail_it_139!=((void*)0),                                                    _if_conditional187) {
                                                        tail_it_139->prev=head_prev_it_138;
                                                    }
                                                }
                                            }
                                        }
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
                                                it_129=self->head;
                                                while(_while_condtional24=it_129!=((void*)0),                                                _while_condtional24) {
                                                    prev_it_130=it_129;
                                                    it_129=it_129->next;
                                                    come_call_finalizer3(prev_it_130,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
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
            if(_if_conditional193=self==((void*)0),            _if_conditional193) {
                memset(&result_143,0,sizeof(char*));
                __result108__ = __result_obj__ = result_143;
                return __result108__;
            }
            self->it=self->head;
            if(self->it) {
                __result109__ = __result_obj__ = self->it->item;
                return __result109__;
            }
            memset(&result_144,0,sizeof(char*));
            __result110__ = __result_obj__ = result_144;
            return __result110__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
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
            if(_if_conditional195=self==((void*)0)||self->it==((void*)0),            _if_conditional195) {
                memset(&result_146,0,sizeof(char*));
                __result112__ = __result_obj__ = result_146;
                return __result112__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result113__ = __result_obj__ = self->it->item;
                return __result113__;
            }
            memset(&result_147,0,sizeof(char*));
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
                if(_if_conditional199=self->len==0,                _if_conditional199) {
                    litem_148=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                    come_call_finalizer3(right_value139,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_148->prev=((void*)0);
                    litem_148->next=((void*)0);
                    litem_148->item=item;
                    self->tail=litem_148;
                    self->head=litem_148;
                }
                else {
                    if(_if_conditional200=self->len==1,                    _if_conditional200) {
                        litem_149=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                        come_call_finalizer3(right_value140,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_149->prev=self->head;
                        litem_149->next=((void*)0);
                        litem_149->item=item;
                        self->tail=litem_149;
                        self->head->next=litem_149;
                    }
                    else {
                        litem_150=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                        come_call_finalizer3(right_value141,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_150->prev=self->tail;
                        litem_150->next=((void*)0);
                        litem_150->item=item;
                        self->tail->next=litem_150;
                        self->tail=litem_150;
                    }
                }
                self->len++;
                __result115__ = __result_obj__ = self;
                return __result115__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional207;
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional207=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional207) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional208=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional208) {
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
        if(_if_conditional209=self->len==0,        _if_conditional209) {
            litem_159=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_159->prev=((void*)0);
            litem_159->next=((void*)0);
            __dec_obj45=litem_159->item;
            litem_159->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_159;
            self->head=litem_159;
        }
        else {
            if(_if_conditional211=self->len==1,            _if_conditional211) {
                litem_160=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_160->prev=self->head;
                litem_160->next=((void*)0);
                __dec_obj46=litem_160->item;
                litem_160->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_160;
                self->head->next=litem_160;
            }
            else {
                litem_161=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value151=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value151,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_161->prev=self->tail;
                litem_161->next=((void*)0);
                __dec_obj47=litem_161->item;
                litem_161->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_161;
                self->tail=litem_161;
            }
        }
        self->len++;
        __result117__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result117__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional210=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional210) {
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
    none_generics_name_162=(char*)come_increment_ref_count(((char*)(right_value152=get_none_generics_name(type->mClass->mName))));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name2_163=(char*)come_increment_ref_count(((char*)(right_value153=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name3_164=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s_%s",none_generics_name_162,fun_name))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    generics_fun_167=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_164,((void*)0));
    if(generics_fun_167) {
        if(_if_conditional227=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(fun_name2_163)))),generics_fun_167,type,info),        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional227) {
            err_msg(info,"%s not found",fun_name3_164);
            __result123__ = __result_obj__ = ((char*)(right_value156=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result123__;
        }
    }
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
        hash_165=string_get_hash_key(((char*)key))%self->size;
        it_166=hash_165;
        while(_while_condtional28=(_Bool)1,        _while_condtional28) {
            if(_if_conditional212=self->item_existance[it_166],            _if_conditional212) {
                if(_if_conditional213=string_equals(self->keys[it_166],key),                _if_conditional213) {
                    __result119__ = __result_obj__ = self->items[it_166];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result119__;
                }
                it_166++;
                if(_if_conditional224=it_166>=self->size,                _if_conditional224) {
                    it_166=0;
                }
                else {
                    if(_if_conditional225=it_166==hash_165,                    _if_conditional225) {
                        __result120__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result120__;
                    }
                }
            }
            else {
                __result121__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result121__;
            }
        }
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
                        if(_if_conditional214=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional214) {
                            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional215=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional215) {
                            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional216=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional216) {
                            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional217=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional217) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional218=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional218) {
                            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional219=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional219) {
                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional220=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional220) {
                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional221=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional221) {
                            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional222=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional222) {
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional223=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional223) {
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
    __dec_obj48=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=sNode_clone(obj))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value157) { right_value157 = come_decrement_ref_count2(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj49=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(fun_name))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj55=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value168=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj55,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value168,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=buffer_clone(method_block))));
    come_call_finalizer3(__dec_obj56,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->method_block_sline=method_block_sline;
    __dec_obj58=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value171=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer3(__dec_obj58,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value171,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
    if(self->method_block) {
        __result132__ = (_Bool)1;
        return __result132__;
    }
    else {
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
struct CVALUE* __exception_result_var_b1;
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
struct CVALUE* __exception_result_var_b2;
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
struct CVALUE* __exception_result_var_b3;
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
struct CVALUE* __exception_result_var_b4;
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
struct CVALUE* __exception_result_var_b5;
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
struct CVALUE* __exception_result_var_b6;
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
struct CVALUE* __exception_result_var_b7;
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
struct CVALUE* __exception_result_var_b8;
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
struct CVALUE* __exception_result_var_b9;
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
struct CVALUE* __exception_result_var_b10;
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
    fun_name_178=self->fun_name;
    params_179=self->params;
    obj_180=self->obj;
    method_block_181=self->method_block;
    method_block_sline_182=self->method_block_sline;
    method_generics_types_183=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj59=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value173=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer3(__dec_obj59,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value173,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional252=!node_compile(obj_180,info),    _if_conditional252) {
        __result135__ = (_Bool)0;
        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result135__;
    }
    obj_value_184=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 216, 2),__exception_result_var_b1=((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer3(right_value174,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional253=gComeDebug&&obj_value_184->type->mPointerNum>0,    _if_conditional253) {
        __dec_obj60=obj_value_184->c_value;
        obj_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value175=make_type_name_string(obj_value_184->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),obj_value_184->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    obj_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(obj_value_184->type))));
    come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_186=obj_type_185->mClass;
    calling_dynamic_method_187=(_Bool)0;
    lambda_type_188=((void*)0);
    for(    o2_saved_189=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_186->mFields)),it_192=list$1tuple2$2charphsTypephph_begin((o2_saved_189));    !list$1tuple2$2charphsTypephph_end((o2_saved_189));    it_192=list$1tuple2$2charphsTypephph_next((o2_saved_189))    ){
        multiple_assign_var1=it_192;
        field_name_195=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_196=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional258=string_operator_equals(field_name_195,fun_name_178)&&string_operator_equals(field_type_196->mClass->mName,"lambda"),        _if_conditional258) {
            calling_dynamic_method_187=(_Bool)1;
            lambda_type_188=field_type_196;
            field_name_195 = come_decrement_ref_count2(field_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_195 = come_decrement_ref_count2(field_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_189,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(calling_dynamic_method_187) {
        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(lambda_type_188->mResultType->v1))));
        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_197->mStatic=(_Bool)0;
        come_params_200=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value180=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value179=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 246, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value179,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value180,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        i_201=0;
        for(        o2_saved_202=(params_179),it_205=list$1tuple2$2charphsNodephph_begin((o2_saved_202));        !list$1tuple2$2charphsNodephph_end((o2_saved_202));        it_205=list$1tuple2$2charphsNodephph_next((o2_saved_202))        ){
            multiple_assign_var2=it_205;
            label_208=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_209=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            if(_if_conditional264=i_201==0,            _if_conditional264) {
                list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(obj_value_184));
                i_201++;
            }
            else {
                if(_if_conditional265=!node_compile(node_209,info),                _if_conditional265) {
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
                come_value_210=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 261, 3),__exception_result_var_b2=((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b2));
                come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                check_assign_type(((char*)(right_value184=xsprintf("\%s param num \%s is assinged to",((char*)(right_value182=charp_to_string(fun_name_178))),((char*)(right_value183=int_to_string(i_201)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 263, 4)),come_value_210->type,come_value_210,(_Bool)0,(_Bool)1,info);
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional268=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 264, 5))->mHeap&&come_value_210->type->mHeap,                _if_conditional268) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 266, 6)),come_value_210->type,come_value_210,info);
                }
                list$1CVALUEph_push_back(come_params_200,(struct CVALUE*)come_increment_ref_count(come_value_210));
                i_201++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_208 = come_decrement_ref_count2(label_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_214=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value186=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value185=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 276, "buffer"))))))));
        come_call_finalizer3(right_value185,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value186,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_214,((char*)(right_value187=xsprintf("%s->%s",obj_value_184->c_value,fun_name_178))));
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_214,"(");
        j_215=0;
        for(        o2_saved_216=(struct list$1CVALUEph*)come_increment_ref_count((come_params_200)),it_219=list$1CVALUEph_begin((o2_saved_216));        !list$1CVALUEph_end((o2_saved_216));        it_219=list$1CVALUEph_next((o2_saved_216))        ){
            if(_if_conditional273=j_215==0,            _if_conditional273) {
                __dec_obj61=it_219->c_value;
                it_219->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s->_protocol_obj",it_219->c_value))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            buffer_append_str(buf_214,it_219->c_value);
            if(_if_conditional275=j_215!=list$1CVALUEph_length(come_params_200)-1,            _if_conditional275) {
                buffer_append_str(buf_214,",");
            }
            j_215++;
        }
        come_call_finalizer3(o2_saved_216,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_214,")");
        come_value2_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 296, "CVALUE"))));
        come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj62=come_value2_222->c_value;
        come_value2_222->c_value=(char*)come_increment_ref_count(((char*)(right_value190=buffer_to_string(buf_214))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type2_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=solve_generics(result_type_197,info->generics_type,info))));
        come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(result_type2_223->mHeap) {
            __dec_obj63=come_value2_222->c_value;
            come_value2_222->c_value=(char*)come_increment_ref_count(((char*)(right_value193=append_object_to_right_values(((char*)(right_value192=buffer_to_string(buf_214))),(struct sType*)come_increment_ref_count(result_type2_223),info))));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj64=come_value2_222->type;
        come_value2_222->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(result_type2_223))));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value194,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value2_222->type->mStatic=(_Bool)0;
        come_value2_222->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_222->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_222));
        come_call_finalizer3(result_type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_200,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_214,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value197=string_to_string(((char*)(right_value196=make_generics_function(obj_type_185,(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(fun_name_178)))),info,(_Bool)1)))))));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_225=((void*)0);
        for(        i_226=128;        i_226>=1;        i_226--        ){
            new_fun_name_227=(char*)come_increment_ref_count(((char*)(right_value198=xsprintf("%s_v%d",generics_fun_name_224,i_226))));
            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_225=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_227);
            if(_if_conditional296=fun_225!=((void*)0),            _if_conditional296) {
                __dec_obj65=generics_fun_name_224;
                generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string(new_fun_name_227))));
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_227 = come_decrement_ref_count2(new_fun_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_227 = come_decrement_ref_count2(new_fun_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional297=fun_225==((void*)0),        _if_conditional297) {
            obj_array_type_231=obj_type_185->mOriginalLoadVarType->v1;
            if(_if_conditional298=obj_array_type_231&&list$1sNodeph_length(obj_array_type_231->mArrayNum)>0,            _if_conditional298) {
                array_method_name_232=(char*)come_increment_ref_count(((char*)(right_value200=create_method_name(obj_array_type_231,(_Bool)0,fun_name_178,info,(_Bool)0))));
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_225=map$2charphsFunph_at(info->funcs,array_method_name_232,((void*)0));
                if(fun_225) {
                    __dec_obj66=generics_fun_name_224;
                    generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(array_method_name_232))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                    if(_if_conditional304=fun_225==((void*)0),                    _if_conditional304) {
                        __dec_obj67=generics_fun_name_224;
                        generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value203=create_method_name(obj_type_185,(_Bool)0,((char*)(right_value202=__builtin_string(fun_name_178))),info,(_Bool)1))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                        if(_if_conditional305=fun_225==((void*)0),                        _if_conditional305) {
                            err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_224,info->come_fun->mName);
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
                fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                if(_if_conditional306=fun_225==((void*)0),                _if_conditional306) {
                    __dec_obj68=generics_fun_name_224;
                    generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value205=create_method_name(obj_type_185,(_Bool)0,((char*)(right_value204=__builtin_string(fun_name_178))),info,(_Bool)1))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                    if(_if_conditional307=fun_225==((void*)0),                    _if_conditional307) {
                        klass_235=obj_type_185->mClass;
                        while(_while_condtional37=map$2charphsClassphp_operator_load_element(info->classes,klass_235->mParentClassName),                        _while_condtional37) {
                            klass_235=map$2charphsClassphp_operator_load_element(info->classes,klass_235->mParentClassName);
                            __dec_obj69=generics_fun_name_224;
                            generics_fun_name_224=(char*)come_increment_ref_count(((char*)(right_value206=create_method_name_using_class(klass_235,(_Bool)0,fun_name_178,info,(_Bool)1))));
                            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                            if(fun_225) {
                                break;
                            }
                        }
                    }
                    if(_if_conditional313=fun_225==((void*)0),                    _if_conditional313) {
                        err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_224,info->come_fun->mName);
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
        if(_if_conditional314=fun_225==((void*)0),        _if_conditional314) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_224,info->come_fun->mName);
            __result177__ = (_Bool)1;
            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result177__;
        }
        if(_if_conditional316=list$1sTypeph_length(fun_225->mParamTypes)==0,        _if_conditional316) {
            err_msg(info,"Method require function parametor");
            __result180__ = (_Bool)1;
            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result180__;
        }
        result_type_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(fun_225->mResultType))));
        come_call_finalizer3(right_value207,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_239->mStatic=(_Bool)0;
        result_type2_240=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=solve_generics(result_type_239,info->generics_type,info))));
        come_call_finalizer3(right_value208,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_types_241=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value210=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value209=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 398, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value209,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value210,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_242=(struct list$1sTypeph*)come_increment_ref_count((fun_225->mParamTypes)),it_245=list$1sTypeph_begin((o2_saved_242));        !list$1sTypeph_end((o2_saved_242));        it_245=list$1sTypeph_next((o2_saved_242))        ){
            if(_if_conditional321=it_245==((void*)0),            _if_conditional321) {
                list$1sTypeph_push_back(param_types_241,it_245);
            }
            else {
                it2_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=solve_generics(it_245,info->generics_type,info))));
                come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
                list$1sTypeph_push_back(param_types_241,(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(it2_251)))));
                come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(it2_251,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_252=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value217=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value216=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 410, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value216,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value217,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        for(        i_253=0;        i_253<list$1sTypeph_length(fun_225->mParamTypes)-(method_block_181?2:0);        i_253++        ){
            list$1CVALUEph_add(come_params_252,((void*)0));
        }
        first_param_257=(_Bool)1;
        for(        o2_saved_258=(params_179),it_259=list$1tuple2$2charphsNodephph_begin((o2_saved_258));        !list$1tuple2$2charphsNodephph_end((o2_saved_258));        it_259=list$1tuple2$2charphsNodephph_next((o2_saved_258))        ){
            multiple_assign_var3=it_259;
            label_260=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_261=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            if(first_param_257) {
                first_param_257=(_Bool)0;
            }
            else {
                if(label_260) {
                    if(_if_conditional328=!node_compile(node_261,info),                    _if_conditional328) {
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
                    come_value_262=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 428, 7),__exception_result_var_b3=((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b3));
                    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    n_263=0;
                    for(                    o2_saved_264=(struct list$1charph*)come_increment_ref_count((fun_225->mParamNames)),it_267=list$1charph_begin((o2_saved_264));                    !list$1charph_end((o2_saved_264));                    it_267=list$1charph_next((o2_saved_264))                    ){
                        if(_if_conditional333=string_operator_equals(label_260,it_267),                        _if_conditional333) {
                            break;
                        }
                        n_263++;
                    }
                    come_call_finalizer3(o2_saved_264,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional334=list$1sTypephp_operator_load_element(param_types_241,n_263),                    _if_conditional334) {
                        check_assign_type(((char*)(right_value224=xsprintf("\%s param num \%s is assinged to",((char*)(right_value222=charp_to_string(fun_name_178))),((char*)(right_value223=int_to_string(n_263)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,n_263), "20method.c", 441, 8)),come_value_262->type,come_value_262,(_Bool)0,(_Bool)1,info);
                        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional335=list$1sTypephp_operator_load_element(param_types_241,n_263)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,n_263), "20method.c", 443, 9))->mHeap&&come_value_262->type->mHeap,                    _if_conditional335) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,n_263), "20method.c", 444, 10)),come_value_262->type,come_value_262,info);
                    }
                    list$1CVALUEph_replace(come_params_252,n_263,(struct CVALUE*)come_increment_ref_count(come_value_262));
                    come_call_finalizer3(come_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_260 = come_decrement_ref_count2(label_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_261) { node_261 = come_decrement_ref_count2(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        i_272=0;
        for(        o2_saved_273=(params_179),it_274=list$1tuple2$2charphsNodephph_begin((o2_saved_273));        !list$1tuple2$2charphsNodephph_end((o2_saved_273));        it_274=list$1tuple2$2charphsNodephph_next((o2_saved_273))        ){
            multiple_assign_var4=it_274;
            label_275=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_276=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(_if_conditional339=i_272==0,            _if_conditional339) {
                check_assign_type(((char*)(right_value227=xsprintf("\%s param num \%s is assinged to",((char*)(right_value225=charp_to_string(fun_name_178))),((char*)(right_value226=int_to_string(i_272)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 456, 11)),obj_value_184->type,obj_value_184,(_Bool)0,(_Bool)1,info);
                right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional340=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 457, 12))->mHeap&&obj_value_184->type->mHeap,                _if_conditional340) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 458, 13)),obj_value_184->type,obj_value_184,info);
                }
                else {
                    if(_if_conditional341=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 460, 14))->mHeap&&!obj_value_184->type->mHeap&&!gComeGC,                    _if_conditional341) {
                        err_msg(info,"require heap parametor(%s)",((char*)come_null_check(list$1charphp_operator_load_element(fun_225->mParamNames,i_272), "20method.c", 461, 15)));
                        exit(2);
                    }
                }
                list$1CVALUEph_replace(come_params_252,i_272,(struct CVALUE*)come_increment_ref_count(obj_value_184));
                i_272++;
            }
            else {
                if(label_275) {
                }
                else {
                    if(_if_conditional345=!node_compile(node_276,info),                    _if_conditional345) {
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
                    come_value_280=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 475, 16),__exception_result_var_b4=((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b4));
                    come_call_finalizer3(right_value228,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    while(_while_condtional40=(_Bool)1,                    _while_condtional40) {
                        if(_if_conditional348=list$1CVALUEphp_operator_load_element(come_params_252,i_272)==((void*)0),                        _if_conditional348) {
                            break;
                        }
                        else {
                            i_272++;
                        }
                    }
                    if(_if_conditional349=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 487, 17)),                    _if_conditional349) {
                        check_assign_type(((char*)(right_value231=xsprintf("\%s param num \%s is assinged to",((char*)(right_value229=charp_to_string(fun_name_178))),((char*)(right_value230=int_to_string(i_272)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 488, 18)),come_value_280->type,come_value_280,(_Bool)0,(_Bool)1,info);
                        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional350=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 490, 19))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 490, 20))->mHeap&&come_value_280->type->mHeap,                    _if_conditional350) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 491, 21)),come_value_280->type,come_value_280,info);
                    }
                    list$1CVALUEph_replace(come_params_252,i_272,(struct CVALUE*)come_increment_ref_count(come_value_280));
                    i_272++;
                    come_call_finalizer3(come_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_275 = come_decrement_ref_count2(label_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_276) { node_276 = come_decrement_ref_count2(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        while(_while_condtional42=(_Bool)1,        _while_condtional42) {
            if(_if_conditional351=list$1CVALUEphp_operator_load_element(come_params_252,i_272)==((void*)0),            _if_conditional351) {
                break;
            }
            else {
                i_272++;
            }
        }
        obj_array_type_284=obj_type_185->mOriginalLoadVarType->v1;
        if(_if_conditional352=obj_array_type_284&&list$1sNodeph_length(obj_array_type_284->mArrayNum)>0,        _if_conditional352) {
            array_method_name_285=(char*)come_increment_ref_count(((char*)(right_value232=create_method_name(obj_array_type_284,(_Bool)0,fun_name_178,info,(_Bool)0))));
            right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional353=string_operator_equals(generics_fun_name_224,array_method_name_285),            _if_conditional353) {
                if(_if_conditional354=charp_operator_equals(fun_name_178,"to_pointer"),                _if_conditional354) {
                    buf_286=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value233=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 513, "buffer"))))))));
                    come_call_finalizer3(right_value233,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value234,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    i_287=0;
                    for(                    o2_saved_288=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_284->mArrayNum)),it_291=list$1sNodeph_begin((o2_saved_288));                    !list$1sNodeph_end((o2_saved_288));                    it_291=list$1sNodeph_next((o2_saved_288))                    ){
                        if(_if_conditional359=!node_compile(it_291,info),                        _if_conditional359) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_294=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 522, 22),__exception_result_var_b5=((struct CVALUE*)(right_value235=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b5));
                        come_call_finalizer3(right_value235,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_286,((char*)(right_value236=xsprintf("%s",come_value_294->c_value))));
                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional360=i_287!=list$1sNodeph_length(obj_array_type_284->mArrayNum)-1,                        _if_conditional360) {
                            buffer_append_str(buf_286,"*");
                        }
                        i_287++;
                        come_call_finalizer3(come_value_294,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_288,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 532, "CVALUE"))));
                    come_call_finalizer3(right_value237,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    __dec_obj77=come_value_295->c_value;
                    come_value_295->c_value=(char*)come_increment_ref_count(((char*)(right_value238=buffer_to_string(buf_286))));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_value_295->var=((void*)0);
                    __dec_obj78=come_value_295->type;
                    come_value_295->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value239=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 536, "sType")))),"long",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1CVALUEph_replace(come_params_252,1,(struct CVALUE*)come_increment_ref_count(come_value_295));
                    list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value246=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value245=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 539, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("len")))),((void*)0))))));
                    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value246,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional364=charp_operator_equals(fun_name_178,"length"),                    _if_conditional364) {
                        buf_299=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value248=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value247=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 542, "buffer"))))))));
                        come_call_finalizer3(right_value247,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value248,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        i_300=0;
                        for(                        o2_saved_301=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_284->mArrayNum)),it_302=list$1sNodeph_begin((o2_saved_301));                        !list$1sNodeph_end((o2_saved_301));                        it_302=list$1sNodeph_next((o2_saved_301))                        ){
                            if(_if_conditional365=!node_compile(it_302,info),                            _if_conditional365) {
                                err_msg(info,"invalid array num");
                                exit(1);
                            }
                            come_value_303=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 551, 23),__exception_result_var_b6=((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b6));
                            come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_299,((char*)(right_value250=xsprintf("%s",come_value_303->c_value))));
                            right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional366=i_300!=list$1sNodeph_length(obj_array_type_284->mArrayNum)-1,                            _if_conditional366) {
                                buffer_append_str(buf_299,"*");
                            }
                            i_300++;
                            come_call_finalizer3(come_value_303,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_301,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 561, "CVALUE"))));
                        come_call_finalizer3(right_value251,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj83=come_value_304->c_value;
                        come_value_304->c_value=(char*)come_increment_ref_count(((char*)(right_value252=buffer_to_string(buf_299))));
                        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_value_304->var=((void*)0);
                        __dec_obj84=come_value_304->type;
                        come_value_304->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 565, "sType")))),"long",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1CVALUEph_replace(come_params_252,1,(struct CVALUE*)come_increment_ref_count(come_value_304));
                        list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value257=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value256=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 568, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("len")))),((void*)0))))));
                        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value257,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(buf_299,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(_if_conditional367=charp_operator_equals(fun_name_178,"to_buffer"),                        _if_conditional367) {
                            buf_305=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value259=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value258=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 571, "buffer"))))))));
                            come_call_finalizer3(right_value258,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value259,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            i_306=0;
                            for(                            o2_saved_307=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_284->mArrayNum)),it_308=list$1sNodeph_begin((o2_saved_307));                            !list$1sNodeph_end((o2_saved_307));                            it_308=list$1sNodeph_next((o2_saved_307))                            ){
                                if(_if_conditional368=!node_compile(it_308,info),                                _if_conditional368) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_309=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 580, 24),__exception_result_var_b7=((struct CVALUE*)(right_value260=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b7));
                                come_call_finalizer3(right_value260,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                dec_stack_ptr(1,info);
                                buffer_append_str(buf_305,((char*)(right_value261=xsprintf("%s",come_value_309->c_value))));
                                right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional369=i_306!=list$1sNodeph_length(obj_array_type_284->mArrayNum)-1,                                _if_conditional369) {
                                    buffer_append_str(buf_305,"*");
                                }
                                i_306++;
                                come_call_finalizer3(come_value_309,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_307,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_value_310=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 590, "CVALUE"))));
                            come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj85=come_value_310->c_value;
                            come_value_310->c_value=(char*)come_increment_ref_count(((char*)(right_value263=buffer_to_string(buf_305))));
                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_value_310->var=((void*)0);
                            __dec_obj86=come_value_310->type;
                            come_value_310->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value264=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 594, "sType")))),"long",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1CVALUEph_replace(come_params_252,1,(struct CVALUE*)come_increment_ref_count(come_value_310));
                            list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value268=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value267=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 597, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value266=xsprintf("len")))),((void*)0))))));
                            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value268,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_value_310,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional370=charp_operator_equals(fun_name_178,"to_list"),                            _if_conditional370) {
                                buf_311=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value270=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 600, "buffer"))))))));
                                come_call_finalizer3(right_value269,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value270,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                i_312=0;
                                for(                                o2_saved_313=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_284->mArrayNum)),it_314=list$1sNodeph_begin((o2_saved_313));                                !list$1sNodeph_end((o2_saved_313));                                it_314=list$1sNodeph_next((o2_saved_313))                                ){
                                    if(_if_conditional371=!node_compile(it_314,info),                                    _if_conditional371) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_315=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 609, 25),__exception_result_var_b8=((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b8));
                                    come_call_finalizer3(right_value271,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    dec_stack_ptr(1,info);
                                    buffer_append_str(buf_311,((char*)(right_value272=xsprintf("%s",come_value_315->c_value))));
                                    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional372=i_312!=list$1sNodeph_length(obj_array_type_284->mArrayNum)-1,                                    _if_conditional372) {
                                        buffer_append_str(buf_311,"*");
                                    }
                                    i_312++;
                                    come_call_finalizer3(come_value_315,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer3(o2_saved_313,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_316=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 619, "CVALUE"))));
                                come_call_finalizer3(right_value273,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                __dec_obj87=come_value_316->c_value;
                                come_value_316->c_value=(char*)come_increment_ref_count(((char*)(right_value274=buffer_to_string(buf_311))));
                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_value_316->var=((void*)0);
                                __dec_obj88=come_value_316->type;
                                come_value_316->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 623, "sType")))),"long",(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value275,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                list$1CVALUEph_replace(come_params_252,1,(struct CVALUE*)come_increment_ref_count(come_value_316));
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
        if(_if_conditional374=list$1tuple2$2charphsNodephph_length(params_179)<list$1sTypeph_length(fun_225->mParamTypes)+(method_block_181?-2:0),        _if_conditional374) {
            for(            ;            i_272<list$1sTypeph_length(fun_225->mParamTypes)+(method_block_181?-2:0);            i_272++            ){
                default_param_317=(char*)come_increment_ref_count(((char*)(right_value280=string_clone(list$1charphp_operator_load_element(fun_225->mParamDefaultParametors,i_272)))));
                right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_318=((char*)come_null_check(list$1charphp_operator_load_element(fun_225->mParamNames,i_272), "20method.c", 635, 26));
                if(_if_conditional375=default_param_317&&string_operator_not_equals(default_param_317,"")&&list$1CVALUEphp_operator_load_element(come_params_252,i_272)==((void*)0),                _if_conditional375) {
                    source_319=(struct buffer*)come_increment_ref_count(info->source);
                    p_320=info->p;
                    head_321=info->head;
                    sline_322=info->sline;
                    __dec_obj89=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value281=string_to_buffer(default_param_317))));
                    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value281,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=expression_v13(info))));
                    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional376=!node_compile(node_323,info),                    _if_conditional376) {
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
                    __dec_obj90=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_319);
                    come_call_finalizer3(__dec_obj90,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_320;
                    info->head=head_321;
                    info->sline=sline_322;
                    come_value_324=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 658, 27),__exception_result_var_b9=((struct CVALUE*)(right_value283=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b9));
                    come_call_finalizer3(right_value283,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional377=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 659, 28)),                    _if_conditional377) {
                        check_assign_type(((char*)(right_value286=xsprintf("\%s param num \%s is assinged to",((char*)(right_value284=charp_to_string(fun_name_178))),((char*)(right_value285=int_to_string(i_272)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 660, 29)),come_value_324->type,come_value_324,(_Bool)0,(_Bool)1,info);
                        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional378=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 662, 30))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 662, 31))->mHeap&&come_value_324->type->mHeap,                    _if_conditional378) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_241,i_272), "20method.c", 663, 32)),come_value_324->type,come_value_324,info);
                    }
                    list$1CVALUEph_replace(come_params_252,i_272,(struct CVALUE*)come_increment_ref_count(come_value_324));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_319,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional379=list$1CVALUEphp_operator_load_element(come_params_252,i_272)==((void*)0),                    _if_conditional379) {
                        err_msg(info,"require parametor(%s) %d",fun_225->mName,i_272);
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
        if(method_block_181) {
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
            if(_if_conditional385=!node_compile(current_stack_frame_node_326,info),            _if_conditional385) {
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
            come_value_327=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 684, 33),__exception_result_var_b10=((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b10));
            come_call_finalizer3(right_value292,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            list$1CVALUEph_push_back(come_params_252,(struct CVALUE*)come_increment_ref_count(come_value_327));
            dec_stack_ptr(1,info);
            method_block2_328=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value294=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 688, "buffer"))))))));
            come_call_finalizer3(right_value293,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value294,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            method_block_type_329=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_225->mParamTypes,-1), "20method.c", 689, 34))))));
            come_call_finalizer3(right_value295,sType_finalize, 0, 1, 0, 0, __result_obj__);
            class_name_330=(char*)come_increment_ref_count(((char*)(right_value296=xsprintf("__current_stack%d__",info->current_stack_num))));
            right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_329->mParamTypes,0), "20method.c", 693, 35))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_330);
            current_stack_frame_struct_331=info->current_stack_frame_struct;
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_330);
            info->num_method_block++;
            if(_if_conditional386=string_operator_not_equals(method_block_type_329->mClass->mName,"lambda"),            _if_conditional386) {
                err_msg(info,"This function does not have method block(%s)",fun_name_178);
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
            result_type_332=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(method_block_type_329->mResultType->v1))));
            come_call_finalizer3(right_value297,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_332->mStatic=(_Bool)0;
            param_types_333=method_block_type_329->mParamTypes;
            param_names_334=method_block_type_329->mParamNames;
            all_alhabet_sname_335=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value298=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 709, "buffer"))))))));
            come_call_finalizer3(right_value298,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value299,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            {
                p_336=info->sname;
                while(_while_condtional43=*p_336,                _while_condtional43) {
                    if(_if_conditional387=xisalnum(*p_336),                    _if_conditional387) {
                        buffer_append_char(all_alhabet_sname_335,*p_336++);
                    }
                    else {
                        p_336++;
                    }
                }
            }
            buffer_append_str(method_block2_328,((char*)(right_value302=xsprintf("%s method_block%d_%s(",((char*)(right_value300=make_type_name_string(result_type_332,(_Bool)0,(_Bool)0,(_Bool)0,info))),info->num_method_block,((char*)(right_value301=buffer_to_string(all_alhabet_sname_335)))))));
            right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_337=0;
            for(            o2_saved_338=(param_types_333),it_339=list$1sTypeph_begin((o2_saved_338));            !list$1sTypeph_end((o2_saved_338));            it_339=list$1sTypeph_next((o2_saved_338))            ){
                param_type_340=it_339;
                if(_if_conditional388=i_337==0,                _if_conditional388) {
                    param_name_341=(char*)come_increment_ref_count(((char*)(right_value303=xsprintf("parent"))));
                    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    buffer_append_str(method_block2_328,((char*)(right_value305=xsprintf("%s",((char*)(right_value304=make_define_var(param_type_340,param_name_341,(_Bool)0,info)))))));
                    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_341 = come_decrement_ref_count2(param_name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional389=i_337==1,                    _if_conditional389) {
                        param_name_342=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("it"))));
                        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(method_block2_328,((char*)(right_value308=xsprintf("%s",((char*)(right_value307=make_define_var(param_type_340,param_name_342,(_Bool)0,info)))))));
                        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_342 = come_decrement_ref_count2(param_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_343=(char*)come_increment_ref_count(((char*)(right_value309=xsprintf("it%d",i_337))));
                        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        buffer_append_str(method_block2_328,((char*)(right_value311=xsprintf("%s",((char*)(right_value310=make_define_var(param_type_340,param_name_343,(_Bool)0,info)))))));
                        right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_343 = come_decrement_ref_count2(param_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional390=i_337!=list$1sTypeph_length(param_types_333)-1,                _if_conditional390) {
                    buffer_append_str(method_block2_328,",");
                }
                i_337++;
            }
            buffer_append_str(method_block2_328,")\n");
            buffer_append_str(method_block2_328,((char*)(right_value312=buffer_to_string(method_block_181))));
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            source3_344=(struct buffer*)come_increment_ref_count(info->source);
            p_345=info->p;
            head_346=info->head;
            sline_347=info->sline;
            __dec_obj92=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_328);
            come_call_finalizer3(__dec_obj92,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=info->source->buf;
            info->head=info->source->buf;
            info->sline=method_block_sline_182;
            node_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=parse_function(info))));
            if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional391=!node_compile(node_348,info),            _if_conditional391) {
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
            method_block_name_349=(char*)come_increment_ref_count(((char*)(right_value315=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value314=buffer_to_string(all_alhabet_sname_335)))))));
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_value2_350=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value316=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 773, "CVALUE"))));
            come_call_finalizer3(right_value316,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            fun2_351=map$2charphsFunph_at(info->funcs,method_block_name_349,((void*)0));
            if(_if_conditional392=fun2_351==((void*)0),            _if_conditional392) {
                err_msg(info,"method block function not found(%s)",method_block_name_349);
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
            method_block_type2_352=fun2_351->mLambdaType;
            __dec_obj93=come_value2_350->c_value;
            come_value2_350->c_value=(char*)come_increment_ref_count(((char*)(right_value317=xsprintf("(void*)%s",method_block_name_349))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj94=come_value2_350->type;
            come_value2_350->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(method_block_type2_352))));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value2_350->var=((void*)0);
            list$1CVALUEph_push_back(come_params_252,(struct CVALUE*)come_increment_ref_count(come_value2_350));
            __dec_obj95=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_344);
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_345;
            info->head=head_346;
            info->sline=sline_347;
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
        buf_353=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value320=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 798, "buffer"))))))));
        come_call_finalizer3(right_value319,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value320,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_353,generics_fun_name_224);
        buffer_append_str(buf_353,"(");
        j_354=0;
        for(        o2_saved_355=(struct list$1CVALUEph*)come_increment_ref_count((come_params_252)),it_356=list$1CVALUEph_begin((o2_saved_355));        !list$1CVALUEph_end((o2_saved_355));        it_356=list$1CVALUEph_next((o2_saved_355))        ){
            buffer_append_str(buf_353,it_356->c_value);
            if(_if_conditional393=j_354!=list$1CVALUEph_length(come_params_252)-1,            _if_conditional393) {
                buffer_append_str(buf_353,",");
            }
            j_354++;
        }
        come_call_finalizer3(o2_saved_355,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_353,")");
        come_value2_357=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 817, "CVALUE"))));
        come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj96=come_value2_357->c_value;
        come_value2_357->c_value=(char*)come_increment_ref_count(((char*)(right_value322=buffer_to_string(buf_353))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj97=come_value2_357->type;
        come_value2_357->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(result_type2_240))));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value2_357->type->mStatic=(_Bool)0;
        come_value2_357->var=((void*)0);
        if(result_type2_240->mHeap) {
            __dec_obj98=come_value2_357->c_value;
            come_value2_357->c_value=(char*)come_increment_ref_count(((char*)(right_value324=append_object_to_right_values(come_value2_357->c_value,(struct sType*)come_increment_ref_count(result_type2_240),info))));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj99=come_value2_357->c_value;
        come_value2_357->c_value=(char*)come_increment_ref_count(((char*)(right_value325=append_stackframe(come_value2_357->c_value,come_value2_357->type,info))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value2_357->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_357));
        if(method_block_181) {
            var_name_358=(char*)come_increment_ref_count(((char*)(right_value326=xsprintf("__current_stack%d__",info->num_current_stack))));
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_359=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(info->come_fun->mResultType))));
            come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_360=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=solve_generics(result_type_359,info->generics_type,info))));
            come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type3_361=result_type2_360->mNoSolvedGenericsType->v1;
            if(result_type2_360->mNoSolvedGenericsType->v1) {
                result_type3_361=result_type2_360->mNoSolvedGenericsType->v1;
            }
            else {
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
    come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj100=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_183);
    come_call_finalizer3(__dec_obj100,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
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
        if(_if_conditional228=self==((void*)0),        _if_conditional228) {
            __result125__ = __result_obj__ = ((void*)0);
            return __result125__;
        }
        result_170=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value160=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value159=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value159,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value160,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_171=self->head;
        while(_while_condtional30=it_171!=((void*)0),        _while_condtional30) {
            list$1tuple2$2charphsNodephph_add(result_170,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value167=tuple2$2charphsNodephp_clone(it_171->item)))));
            come_call_finalizer3(right_value167,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_171=it_171->next;
        }
        __result130__ = __result_obj__ = result_170;
        come_call_finalizer3(result_170,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result130__;
        come_call_finalizer3(result_170,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
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
                it_168=self->head;
                while(_while_condtional29=it_168!=((void*)0),                _while_condtional29) {
                    prev_it_169=it_168;
                    it_168=it_168->next;
                    come_call_finalizer3(prev_it_169,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional229=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional229) {
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
                if(_if_conditional232=self->len==0,                _if_conditional232) {
                    litem_172=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value161=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value161,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_172->prev=((void*)0);
                    litem_172->next=((void*)0);
                    __dec_obj50=litem_172->item;
                    litem_172->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj50,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_172;
                    self->head=litem_172;
                }
                else {
                    if(_if_conditional235=self->len==1,                    _if_conditional235) {
                        litem_173=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value162=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value162,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_173->prev=self->head;
                        litem_173->next=((void*)0);
                        __dec_obj51=litem_173->item;
                        litem_173->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj51,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_173;
                        self->head->next=litem_173;
                    }
                    else {
                        litem_174=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value163=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value163,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_174->prev=self->tail;
                        litem_174->next=((void*)0);
                        __dec_obj52=litem_174->item;
                        litem_174->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj52,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_174;
                        self->tail=litem_174;
                    }
                }
                self->len++;
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
                            if(_if_conditional238=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional238) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional239=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional239) {
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
                if(_if_conditional240=self==(void*)0,                _if_conditional240) {
                    __result128__ = __result_obj__ = (void*)0;
                    return __result128__;
                }
                result_175=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value164=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value164,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional243=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional243) {
                    __dec_obj53=result_175->v1;
                    result_175->v1=(char*)come_increment_ref_count(((char*)(right_value165=string_clone(self->v1))));
                    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional244=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional244) {
                    __dec_obj54=result_175->v2;
                    result_175->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(self->v2))));
                    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
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
                    if(_if_conditional241=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional241) {
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional242=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional242) {
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
        it_176=self->head;
        while(_while_condtional31=it_176!=((void*)0),        _while_condtional31) {
            prev_it_177=it_176;
            it_176=it_176->next;
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
        if(_if_conditional254=self==((void*)0),        _if_conditional254) {
            memset(&result_190,0,sizeof(struct tuple2$2charphsTypeph*));
            __result136__ = __result_obj__ = result_190;
            return __result136__;
        }
        self->it=self->head;
        if(self->it) {
            __result137__ = __result_obj__ = self->it->item;
            return __result137__;
        }
        memset(&result_191,0,sizeof(struct tuple2$2charphsTypeph*));
        __result138__ = __result_obj__ = result_191;
        return __result138__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
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
        if(_if_conditional256=self==((void*)0)||self->it==((void*)0),        _if_conditional256) {
            memset(&result_193,0,sizeof(struct tuple2$2charphsTypeph*));
            __result140__ = __result_obj__ = result_193;
            return __result140__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result141__ = __result_obj__ = self->it->item;
            return __result141__;
        }
        memset(&result_194,0,sizeof(struct tuple2$2charphsTypeph*));
        __result142__ = __result_obj__ = result_194;
        return __result142__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
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
                it_198=self->head;
                while(_while_condtional32=it_198!=((void*)0),                _while_condtional32) {
                    prev_it_199=it_198;
                    it_198=it_198->next;
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
            if(_if_conditional260=self==((void*)0),            _if_conditional260) {
                memset(&result_203,0,sizeof(struct tuple2$2charphsNodeph*));
                __result144__ = __result_obj__ = result_203;
                return __result144__;
            }
            self->it=self->head;
            if(self->it) {
                __result145__ = __result_obj__ = self->it->item;
                return __result145__;
            }
            memset(&result_204,0,sizeof(struct tuple2$2charphsNodeph*));
            __result146__ = __result_obj__ = result_204;
            return __result146__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
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
            if(_if_conditional262=self==((void*)0)||self->it==((void*)0),            _if_conditional262) {
                memset(&result_206,0,sizeof(struct tuple2$2charphsNodeph*));
                __result148__ = __result_obj__ = result_206;
                return __result148__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result149__ = __result_obj__ = self->it->item;
                return __result149__;
            }
            memset(&result_207,0,sizeof(struct tuple2$2charphsNodeph*));
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
                    if(_if_conditional266=position<0,                    _if_conditional266) {
                        position+=self->len;
                    }
                    it_211=self->head;
                    i_212=0;
                    while(_while_condtional33=it_211!=((void*)0),                    _while_condtional33) {
                        if(_if_conditional267=position==i_212,                        _if_conditional267) {
                            __result152__ = __result_obj__ = it_211->item;
                            return __result152__;
                        }
                        it_211=it_211->next;
                        i_212++;
                    }
                    memset(&default_value_213,0,sizeof(struct sType*));
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
            if(_if_conditional269=self==((void*)0),            _if_conditional269) {
                memset(&result_217,0,sizeof(struct CVALUE*));
                __result154__ = __result_obj__ = result_217;
                return __result154__;
            }
            self->it=self->head;
            if(self->it) {
                __result155__ = __result_obj__ = self->it->item;
                return __result155__;
            }
            memset(&result_218,0,sizeof(struct CVALUE*));
            __result156__ = __result_obj__ = result_218;
            return __result156__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
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
            if(_if_conditional271=self==((void*)0)||self->it==((void*)0),            _if_conditional271) {
                memset(&result_220,0,sizeof(struct CVALUE*));
                __result158__ = __result_obj__ = result_220;
                return __result158__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result159__ = __result_obj__ = self->it->item;
                return __result159__;
            }
            memset(&result_221,0,sizeof(struct CVALUE*));
            __result160__ = __result_obj__ = result_221;
            return __result160__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional274;
int __result161__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional274=self==((void*)0),                _if_conditional274) {
                    __result161__ = 0;
                    return __result161__;
                }
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
                memset(&default_value_228,0,sizeof(struct sFun*));
                hash_229=string_get_hash_key(((char*)key))%self->size;
                it_230=hash_229;
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    if(_if_conditional277=self->item_existance[it_230],                    _if_conditional277) {
                        if(_if_conditional278=string_equals(self->keys[it_230],key),                        _if_conditional278) {
                            __result163__ = __result_obj__ = self->items[it_230];
                            come_call_finalizer3(default_value_228,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result163__;
                        }
                        it_230++;
                        if(_if_conditional294=it_230>=self->size,                        _if_conditional294) {
                            it_230=0;
                        }
                        else {
                            if(_if_conditional295=it_230==hash_229,                            _if_conditional295) {
                                __result164__ = __result_obj__ = default_value_228;
                                come_call_finalizer3(default_value_228,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result164__;
                            }
                        }
                    }
                    else {
                        __result165__ = __result_obj__ = default_value_228;
                        come_call_finalizer3(default_value_228,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result165__;
                    }
                }
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
                                if(_if_conditional279=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional279) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional280=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional280) {
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional281=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional281) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional282=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional282) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional283=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional283) {
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional284=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional284) {
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional285=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional285) {
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional288=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional288) {
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional289=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional289) {
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional290=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional290) {
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional291=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional291) {
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional292=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional292) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional293=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional293) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional286;
_Bool _if_conditional287;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional286=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional286) {
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional287=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional287) {
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
                    hash_233=string_get_hash_key(((char*)key))%self->size;
                    it_234=hash_233;
                    while(_while_condtional35=(_Bool)1,                    _while_condtional35) {
                        if(_if_conditional299=self->item_existance[it_234],                        _if_conditional299) {
                            if(_if_conditional300=string_equals(self->keys[it_234],key),                            _if_conditional300) {
                                __result167__ = __result_obj__ = self->items[it_234];
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result167__;
                            }
                            it_234++;
                            if(_if_conditional301=it_234>=self->size,                            _if_conditional301) {
                                it_234=0;
                            }
                            else {
                                if(_if_conditional302=it_234==hash_233,                                _if_conditional302) {
                                    __result168__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result168__;
                                }
                            }
                        }
                        else {
                            __result169__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result169__;
                        }
                    }
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
                            memset(&default_value_236,0,sizeof(struct sClass*));
                            hash_237=string_get_hash_key(((char*)key))%self->size;
                            it_238=hash_237;
                            while(_while_condtional36=(_Bool)1,                            _while_condtional36) {
                                if(_if_conditional308=self->item_existance[it_238],                                _if_conditional308) {
                                    if(_if_conditional309=string_equals(self->keys[it_238],key),                                    _if_conditional309) {
                                        __result172__ = __result_obj__ = self->items[it_238];
                                        come_call_finalizer3(default_value_236,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result172__;
                                    }
                                    it_238++;
                                    if(_if_conditional310=it_238>=self->size,                                    _if_conditional310) {
                                        it_238=0;
                                    }
                                    else {
                                        if(_if_conditional311=it_238==hash_237,                                        _if_conditional311) {
                                            __result173__ = __result_obj__ = default_value_236;
                                            come_call_finalizer3(default_value_236,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result173__;
                                        }
                                    }
                                }
                                else {
                                    __result174__ = __result_obj__ = default_value_236;
                                    come_call_finalizer3(default_value_236,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result174__;
                                }
                            }
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
            if(_if_conditional315=self==((void*)0),            _if_conditional315) {
                __result178__ = 0;
                return __result178__;
            }
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
            if(_if_conditional317=self==((void*)0),            _if_conditional317) {
                memset(&result_243,0,sizeof(struct sType*));
                __result181__ = __result_obj__ = result_243;
                return __result181__;
            }
            self->it=self->head;
            if(self->it) {
                __result182__ = __result_obj__ = self->it->item;
                return __result182__;
            }
            memset(&result_244,0,sizeof(struct sType*));
            __result183__ = __result_obj__ = result_244;
            return __result183__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
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
            if(_if_conditional319=self==((void*)0)||self->it==((void*)0),            _if_conditional319) {
                memset(&result_246,0,sizeof(struct sType*));
                __result185__ = __result_obj__ = result_246;
                return __result185__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result186__ = __result_obj__ = self->it->item;
                return __result186__;
            }
            memset(&result_247,0,sizeof(struct sType*));
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
                    if(_if_conditional322=self->len==0,                    _if_conditional322) {
                        litem_248=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value211=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value211,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_248->prev=((void*)0);
                        litem_248->next=((void*)0);
                        __dec_obj70=litem_248->item;
                        litem_248->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_248;
                        self->head=litem_248;
                    }
                    else {
                        if(_if_conditional323=self->len==1,                        _if_conditional323) {
                            litem_249=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value212=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value212,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_249->prev=self->head;
                            litem_249->next=((void*)0);
                            __dec_obj71=litem_249->item;
                            litem_249->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_249;
                            self->head->next=litem_249;
                        }
                        else {
                            litem_250=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value213=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value213,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_250->prev=self->tail;
                            litem_250->next=((void*)0);
                            __dec_obj72=litem_250->item;
                            litem_250->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_250;
                            self->tail=litem_250;
                        }
                    }
                    self->len++;
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
                if(_if_conditional324=self->len==0,                _if_conditional324) {
                    litem_254=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value218=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 147, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value218,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_254->prev=((void*)0);
                    litem_254->next=((void*)0);
                    __dec_obj73=litem_254->item;
                    litem_254->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_254;
                    self->head=litem_254;
                }
                else {
                    if(_if_conditional325=self->len==1,                    _if_conditional325) {
                        litem_255=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value219=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 157, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value219,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_255->prev=self->head;
                        litem_255->next=((void*)0);
                        __dec_obj74=litem_255->item;
                        litem_255->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj74,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_255;
                        self->head->next=litem_255;
                    }
                    else {
                        litem_256=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value220=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 167, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value220,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_256->prev=self->tail;
                        litem_256->next=((void*)0);
                        __dec_obj75=litem_256->item;
                        litem_256->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj75,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_256;
                        self->tail=litem_256;
                    }
                }
                self->len++;
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
                        if(_if_conditional329=self==((void*)0),                        _if_conditional329) {
                            memset(&result_265,0,sizeof(char*));
                            __result191__ = __result_obj__ = result_265;
                            return __result191__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result192__ = __result_obj__ = self->it->item;
                            return __result192__;
                        }
                        memset(&result_266,0,sizeof(char*));
                        __result193__ = __result_obj__ = result_266;
                        return __result193__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
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
                        if(_if_conditional331=self==((void*)0)||self->it==((void*)0),                        _if_conditional331) {
                            memset(&result_268,0,sizeof(char*));
                            __result195__ = __result_obj__ = result_268;
                            return __result195__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result196__ = __result_obj__ = self->it->item;
                            return __result196__;
                        }
                        memset(&result_269,0,sizeof(char*));
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
                        if(_if_conditional336=position<0,                        _if_conditional336) {
                            position+=self->len;
                        }
                        if(_if_conditional337=position>=self->len,                        _if_conditional337) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result198__ = __result_obj__ = self;
                            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result198__;
                        }
                        it_270=self->head;
                        i_271=0;
                        while(_while_condtional38=it_270!=((void*)0),                        _while_condtional38) {
                            if(_if_conditional338=position==i_271,                            _if_conditional338) {
                                __dec_obj76=it_270->item;
                                it_270->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj76,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_270=it_270->next;
                            i_271++;
                        }
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
                            if(_if_conditional342=position<0,                            _if_conditional342) {
                                position+=self->len;
                            }
                            it_277=self->head;
                            i_278=0;
                            while(_while_condtional39=it_277!=((void*)0),                            _while_condtional39) {
                                if(_if_conditional343=position==i_278,                                _if_conditional343) {
                                    __result200__ = __result_obj__ = it_277->item;
                                    return __result200__;
                                }
                                it_277=it_277->next;
                                i_278++;
                            }
                            memset(&default_value_279,0,sizeof(char*));
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
                            if(_if_conditional346=position<0,                            _if_conditional346) {
                                position+=self->len;
                            }
                            it_281=self->head;
                            i_282=0;
                            while(_while_condtional41=it_281!=((void*)0),                            _while_condtional41) {
                                if(_if_conditional347=position==i_282,                                _if_conditional347) {
                                    __result203__ = __result_obj__ = it_281->item;
                                    return __result203__;
                                }
                                it_281=it_281->next;
                                i_282++;
                            }
                            memset(&default_value_283,0,sizeof(struct CVALUE*));
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
                        if(_if_conditional355=self==((void*)0),                        _if_conditional355) {
                            memset(&result_289,0,sizeof(struct sNode*));
                            __result205__ = __result_obj__ = result_289;
                            return __result205__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result206__ = __result_obj__ = self->it->item;
                            return __result206__;
                        }
                        memset(&result_290,0,sizeof(struct sNode*));
                        __result207__ = __result_obj__ = result_290;
                        return __result207__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
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
                        if(_if_conditional357=self==((void*)0)||self->it==((void*)0),                        _if_conditional357) {
                            memset(&result_292,0,sizeof(struct sNode*));
                            __result209__ = __result_obj__ = result_292;
                            return __result209__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result210__ = __result_obj__ = self->it->item;
                            return __result210__;
                        }
                        memset(&result_293,0,sizeof(struct sNode*));
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
                        if(_if_conditional361=self->len==0,                        _if_conditional361) {
                            litem_296=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value241=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value241,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_296->prev=((void*)0);
                            litem_296->next=((void*)0);
                            __dec_obj79=litem_296->item;
                            litem_296->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj79,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_296;
                            self->head=litem_296;
                        }
                        else {
                            if(_if_conditional362=self->len==1,                            _if_conditional362) {
                                litem_297=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value242=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(right_value242,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_297->prev=self->head;
                                litem_297->next=((void*)0);
                                __dec_obj80=litem_297->item;
                                litem_297->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj80,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_297;
                                self->head->next=litem_297;
                            }
                            else {
                                litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value243=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(right_value243,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_298->prev=self->tail;
                                litem_298->next=((void*)0);
                                __dec_obj81=litem_298->item;
                                litem_298->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj81,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_298;
                                self->tail=litem_298;
                            }
                        }
                        self->len++;
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
                        __dec_obj82=self->v1;
                        self->v1=(char*)come_increment_ref_count(v1);
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->v2=v2;
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
                            if(_if_conditional363=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional363) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional373;
int __result214__;
int __result215__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional373=self==((void*)0),            _if_conditional373) {
                __result214__ = 0;
                return __result214__;
            }
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
int __exception_result_var_b11;
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
    params_362=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value330=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value329=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 860, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value329,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value330,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsNodephph_push_back(params_362,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value333=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value332=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 861, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=sNode_clone(obj)))))))));
    if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value332,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value333,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional397=*info->p==45&&*(info->p+1)==62,    _if_conditional397) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_363=(_Bool)0;
    {
        p_364=info->p;
        sline_365=info->sline;
        if(_if_conditional398=*info->p==60,        _if_conditional398) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional399=xisalpha(*info->p)||*info->p==95,            _if_conditional399) {
                word_366=(char*)come_increment_ref_count(((char*)(right_value334=parse_word(info))));
                right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional400=is_type_name(word_366,info),                _if_conditional400) {
                    parse_method_generics_type_363=(_Bool)1;
                }
                word_366 = come_decrement_ref_count2(word_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_364;
        info->sline=sline_365;
    }
    method_generics_types_367=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value336=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value335=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 891, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value335,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value336,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional401=parse_method_generics_type_363&&*info->p==60,    _if_conditional401) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional44=(_Bool)1,        _while_condtional44) {
            if(_if_conditional402=*info->p==0,            _if_conditional402) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else {
                if(_if_conditional403=*info->p==62,                _if_conditional403) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional404=*info->p==44,                    _if_conditional404) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value337=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_368=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                        name_369=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        err_370=multiple_assign_var5->v3;
                        come_call_finalizer3(right_value337,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional407=!err_370,                        _if_conditional407) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_367,(struct sType*)come_increment_ref_count(((struct sType*)(right_value338=sType_clone(type_368)))));
                        come_call_finalizer3(right_value338,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_368,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_369 = come_decrement_ref_count2(name_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    if(_if_conditional408=*info->p!=123,    _if_conditional408) {
        (come_push_stackframe("20method.c", 924, 36),__exception_result_var_b11=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b11);
        while(_while_condtional45=(_Bool)1,        _while_condtional45) {
            if(_if_conditional409=*info->p==41,            _if_conditional409) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_371=info->p;
            sline_372=info->sline;
            err_flag_373=(_Bool)0;
            label_374=(char*)come_increment_ref_count(((char*)(right_value339=__builtin_string(""))));
            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional410=xisalpha(*info->p)||*info->p==95,            _if_conditional410) {
                __dec_obj103=label_374;
                label_374=(char*)come_increment_ref_count(((char*)(right_value340=parse_word(info))));
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                err_flag_373=(_Bool)1;
            }
            if(_if_conditional411=err_flag_373==(_Bool)1&&*info->p==58,            _if_conditional411) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj104=label_374;
                label_374=((void*)0);
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_371;
                info->sline=sline_372;
            }
            no_comma_375=info->no_comma;
            info->no_comma=(_Bool)1;
            node_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=expression_v13(info))));
            if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj105=node_376;
            node_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_376),info))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_375;
            list$1tuple2$2charphsNodephph_push_back(params_362,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value344=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value343=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 963, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_374),(struct sNode*)come_increment_ref_count(node_376))))));
            come_call_finalizer3(right_value343,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value344,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional412=*info->p==44,            _if_conditional412) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional413=*info->p==41,                _if_conditional413) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_374 = come_decrement_ref_count2(label_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_374 = come_decrement_ref_count2(label_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_377=((void*)0);
    method_block_sline_378=0;
    if(_if_conditional414=*info->p==123,    _if_conditional414) {
        head_379=info->p;
        method_block_sline_378=info->sline;
        ((char*)(right_value345=skip_block(info)));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_380=info->p;
        __dec_obj106=method_block_377;
        method_block_377=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value347=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value346=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 987, "buffer"))))))));
        come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value346,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value347,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        len_381=tail_380-head_379;
        mem_382=(char*)come_increment_ref_count(((char*)(right_value348=(char*)come_calloc(1, sizeof(char)*(1*(len_381+1)), "20method.c", 990, "char"))));
        right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(mem_382,head_379,len_381);
        mem_382[len_381]=0;
        buffer_append_str(method_block_377,mem_382);
        buffer_append_str(method_block_377,"\n");
        mem_382 = come_decrement_ref_count2(mem_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    if(_if_conditional415=*info->p==60,    _if_conditional415) {
    }
    parse_sharp_v5(info);
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
    __dec_obj113=node_384;
    node_384=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_384),info))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
        __dec_obj101=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj102=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
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
                            if(_if_conditional405=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional405) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional406=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional406) {
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
        if(_if_conditional416=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional416) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional417=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional417) {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional418=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional418) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional419=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional419) {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional420=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional420) {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional421=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional421) {
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
        if(_if_conditional422=self==(void*)0,        _if_conditional422) {
            __result226__ = __result_obj__ = (void*)0;
            return __result226__;
        }
        result_383=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value352=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer3(right_value352,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional423=self!=((void*)0),        _if_conditional423) {
            result_383->sline=self->sline;
        }
        if(_if_conditional424=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional424) {
            __dec_obj107=result_383->sname;
            result_383->sname=(char*)come_increment_ref_count(((char*)(right_value353=string_clone(self->sname))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional425=self!=((void*)0)&&self->obj!=((void*)0),        _if_conditional425) {
            __dec_obj108=result_383->obj;
            result_383->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=sNode_clone(self->obj))));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional426=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional426) {
            __dec_obj109=result_383->fun_name;
            result_383->fun_name=(char*)come_increment_ref_count(((char*)(right_value355=string_clone(self->fun_name))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional427=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional427) {
            __dec_obj110=result_383->params;
            result_383->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value356=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj110,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value356,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional428=self!=((void*)0)&&self->method_block!=((void*)0),        _if_conditional428) {
            __dec_obj111=result_383->method_block;
            result_383->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value357=buffer_clone(self->method_block))));
            come_call_finalizer3(__dec_obj111,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value357,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional429=self!=((void*)0),        _if_conditional429) {
            result_383->method_block_sline=self->method_block_sline;
        }
        if(_if_conditional430=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional430) {
            __dec_obj112=result_383->method_generics_types;
            result_383->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value358=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj112,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value358,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
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
    if(_if_conditional431=charp_operator_equals(buf,"__current__"),    _if_conditional431) {
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
    __result232__ = __result_obj__ = ((struct sNode*)(right_value366=string_node_v17(buf,head,head_sline,info)));
    if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result232__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional432;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional432) {
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
            if(_if_conditional433=self==(void*)0,            _if_conditional433) {
                __result229__ = __result_obj__ = (void*)0;
                return __result229__;
            }
            result_385=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value363=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer3(right_value363,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional434=self!=((void*)0),            _if_conditional434) {
                result_385->sline=self->sline;
            }
            if(_if_conditional435=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional435) {
                __dec_obj114=result_385->sname;
                result_385->sname=(char*)come_increment_ref_count(((char*)(right_value364=string_clone(self->sname))));
                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result230__ = __result_obj__ = result_385;
            come_call_finalizer3(result_385,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result230__;
            come_call_finalizer3(result_385,sCurrentNode_finalize, 0, 0, 0, 0, (void*)0);
}

