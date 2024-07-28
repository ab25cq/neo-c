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
struct sEnumNode
{
    int sline;
    char* sname;
    char* mTypeName;
    struct list$1tuple2$2charphsNodephph* mElements;
    _Bool mOutput;
    char* mDeclareSName;
};
struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info);

_Bool sEnumNode_terminated(struct sEnumNode* self);

char* sEnumNode_kind(struct sEnumNode* self);

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sNode* parse_enum(char* type_name, struct sInfo* info);

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct sClass* sClass_clone(struct sClass* self);
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
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

static void sEnumNode_finalize(struct sEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
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










struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char* type_name, struct list$1tuple2$2charphsNodephph* elements, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
void* right_value80;
char* __exception_result_var_b52;
char* __dec_obj12;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b58;
void* right_value91;
struct list$1tuple2$2charphsNodephph* __dec_obj18;
void* right_value92;
char* __exception_result_var_b59;
char* __dec_obj19;
struct sEnumNode* __result60__;
struct sEnumNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
    (come_push_stackframe("16enum.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "16enum.c", 7, 573)), "16enum.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=((struct sEnumNode*)come_null_check(self, "16enum.c", 9, 580))->mTypeName;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 9, 580))->mTypeName=(char*)come_increment_ref_count((come_push_stackframe("16enum.c", 9, 581),__exception_result_var_b52=((char*)(right_value80=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b52));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj18=((struct sEnumNode*)come_null_check(self, "16enum.c", 10, 582))->mElements;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 10, 582))->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value91=(come_push_stackframe("16enum.c", 10, 742),__exception_result_var_b58=list$1tuple2$2charphsNodephphp_clone(elements), come_pop_stackframe(), __exception_result_var_b58))));
    come_call_finalizer3(__dec_obj18,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value91,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 12, 747))->mOutput=output;
    __dec_obj19=((struct sEnumNode*)come_null_check(self, "16enum.c", 14, 748))->mDeclareSName;
    ((struct sEnumNode*)come_null_check(self, "16enum.c", 14, 748))->mDeclareSName=(char*)come_increment_ref_count((come_push_stackframe("16enum.c", 14, 751),__exception_result_var_b59=((char*)(right_value92=__builtin_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 14, 749)), "16enum.c", 14, 750))->sname))), come_pop_stackframe(), __exception_result_var_b59));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result60__ = __result_obj__ = self;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result60__;
    __result61__ = __result_obj__ = self;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result61__;
    come_call_finalizer3(self,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sEnumNode_terminated(struct sEnumNode* self){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    __result62__ = (_Bool)1;
    return __result62__;
}

char* sEnumNode_kind(struct sEnumNode* self){
void* __result_obj__;
void* right_value93;
char* __exception_result_var_b60;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
    __result63__ = __result_obj__ = (come_push_stackframe("16enum.c", 26, 768),__exception_result_var_b60=((char*)(right_value93=__builtin_string("sEnumNode"))), come_pop_stackframe(), __exception_result_var_b60);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo* info){
void* __result_obj__;
char* type_name_58;
struct list$1tuple2$2charphsNodephph* elements_59;
void* right_value94;
void* right_value95;
struct buffer* __exception_result_var_b61;
struct buffer* buf_60;
_Bool __exception_result_var_b62;
_Bool _if_conditional50;
void* right_value96;
char* __exception_result_var_b63;
struct buffer* __exception_result_var_b64;
void* right_value97;
char* __exception_result_var_b65;
struct buffer* __exception_result_var_b66;
int i_61;
int n_62;
struct list$1tuple2$2charphsNodephph* o2_saved_63;
struct tuple2$2charphsNodeph* __exception_result_var_b69;
struct tuple2$2charphsNodeph* it_66;
_Bool __exception_result_var_b70;
struct tuple2$2charphsNodeph* __exception_result_var_b73;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* name_69;
struct sNode* value_70;
void* right_value98;
char* __exception_result_var_b76;
struct sVar* __exception_result_var_b77;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct buffer* __exception_result_var_b78;
struct buffer* __exception_result_var_b79;
int __exception_result_var_b80;
_Bool _if_conditional83;
struct buffer* __exception_result_var_b81;
void* right_value99;
char* __exception_result_var_b82;
char* c_value_79;
void* right_value100;
void* right_value101;
struct sType* __exception_result_var_b83;
_Bool __exception_result_var_b84;
_Bool _if_conditional84;
_Bool __result77__;
void* right_value102;
struct CVALUE* __exception_result_var_b85;
struct CVALUE* right_value_80;
void* right_value103;
void* right_value104;
struct sType* __exception_result_var_b86;
void* right_value105;
char* __exception_result_var_b87;
struct buffer* __exception_result_var_b88;
int __exception_result_var_b89;
_Bool _if_conditional87;
struct buffer* __exception_result_var_b90;
struct buffer* __exception_result_var_b91;
int __exception_result_var_b92;
void* right_value106;
char* __exception_result_var_b93;
struct buffer* __exception_result_var_b94;
_Bool __exception_result_var_b95;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value107;
char* __exception_result_var_b96;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_name_58, 0, sizeof(char*));
memset(&elements_59, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value94 = (void*)0;
right_value95 = (void*)0;
memset(&buf_60, 0, sizeof(struct buffer*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&i_61, 0, sizeof(int));
memset(&n_62, 0, sizeof(int));
memset(&o2_saved_63, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_66, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value98 = (void*)0;
right_value99 = (void*)0;
memset(&c_value_79, 0, sizeof(char*));
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&right_value_80, 0, sizeof(struct CVALUE*));
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
    type_name_58=(char*)come_increment_ref_count(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "16enum.c", 31, 769)), "16enum.c", 31, 770))->mTypeName);
    elements_59=((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "16enum.c", 32, 771)), "16enum.c", 32, 772))->mElements;
    buf_60=(struct buffer*)come_increment_ref_count((come_push_stackframe("16enum.c", 34, 774),__exception_result_var_b61=((struct buffer*)(right_value95=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value94=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 34, "buffer"))), "16enum.c", 34, 773)))))), come_pop_stackframe(), __exception_result_var_b61));
    come_call_finalizer3(right_value94,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value95,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional50=(come_push_stackframe("16enum.c", 36, 775),__exception_result_var_b62=string_operator_equals(type_name_58,""), come_pop_stackframe(), __exception_result_var_b62),    _if_conditional50) {
        (come_push_stackframe("16enum.c", 37, 779),__exception_result_var_b64=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 37, 776)), "16enum.c", 37, 777)),(come_push_stackframe("16enum.c", 37, 778),__exception_result_var_b63=((char*)(right_value96=xsprintf("enum { ",type_name_58))), come_pop_stackframe(), __exception_result_var_b63)), come_pop_stackframe(), __exception_result_var_b64);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        (come_push_stackframe("16enum.c", 40, 783),__exception_result_var_b66=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 40, 780)), "16enum.c", 40, 781)),(come_push_stackframe("16enum.c", 40, 782),__exception_result_var_b65=((char*)(right_value97=xsprintf("enum %s { ",type_name_58))), come_pop_stackframe(), __exception_result_var_b65)), come_pop_stackframe(), __exception_result_var_b66);
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    i_61=0;
    n_62=0;
    for(    o2_saved_63=(elements_59),it_66=(come_push_stackframe("16enum.c", 45, 798),__exception_result_var_b69=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_63), "16enum.c", 45, 784)), "16enum.c", 45, 785))), come_pop_stackframe(), __exception_result_var_b69);    !(come_push_stackframe("16enum.c", 45, 803),__exception_result_var_b70=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_63), "16enum.c", 45, 799)), "16enum.c", 45, 800))), come_pop_stackframe(), __exception_result_var_b70);    it_66=(come_push_stackframe("16enum.c", 45, 822),__exception_result_var_b73=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_63), "16enum.c", 45, 804)), "16enum.c", 45, 805))), come_pop_stackframe(), __exception_result_var_b73)    ){
        multiple_assign_var1=it_66;
        name_69=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        value_70=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional80=(come_push_stackframe("16enum.c", 48, 945),__exception_result_var_b77=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 48, 823)), "16enum.c", 48, 824))->gv_table, "16enum.c", 48, 825)), "16enum.c", 48, 826))->mVars, "16enum.c", 48, 827)), "16enum.c", 48, 828)),(come_push_stackframe("16enum.c", 48, 944),__exception_result_var_b76=((char*)(right_value98=__builtin_string(name_69))), come_pop_stackframe(), __exception_result_var_b76),((void*)0)), come_pop_stackframe(), __exception_result_var_b77)!=((void*)0),        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional80) {
            ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "16enum.c", 49, 946)), "16enum.c", 49, 947))->mOutput=(_Bool)0;
        }
        if(_if_conditional81=value_70==((void*)0),        _if_conditional81) {
            (come_push_stackframe("16enum.c", 53, 950),__exception_result_var_b78=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 53, 948)), "16enum.c", 53, 949)),name_69), come_pop_stackframe(), __exception_result_var_b78);
            (come_push_stackframe("16enum.c", 54, 953),__exception_result_var_b79=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 54, 951)), "16enum.c", 54, 952)),"\n"), come_pop_stackframe(), __exception_result_var_b79);
            if(_if_conditional83=i_61!=(come_push_stackframe("16enum.c", 56, 958),__exception_result_var_b80=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_59, "16enum.c", 56, 954)), "16enum.c", 56, 955))), come_pop_stackframe(), __exception_result_var_b80)-1,            _if_conditional83) {
                (come_push_stackframe("16enum.c", 57, 961),__exception_result_var_b81=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 57, 959)), "16enum.c", 57, 960)),","), come_pop_stackframe(), __exception_result_var_b81);
            }
            c_value_79=(char*)come_increment_ref_count((come_push_stackframe("16enum.c", 60, 962),__exception_result_var_b82=((char*)(right_value99=xsprintf("%d",n_62))), come_pop_stackframe(), __exception_result_var_b82));
            right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("16enum.c", 62,965),add_variable_to_global_table_with_int_value(name_69,(struct sType*)come_increment_ref_count((come_push_stackframe("16enum.c", 62, 964),__exception_result_var_b83=((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 62, "sType"))), "16enum.c", 62, 963))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b83)),c_value_79,info),come_pop_stackframe());
            come_call_finalizer3(right_value100,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value101,sType_finalize, 0, 1, 0, 0, __result_obj__);
            c_value_79 = come_decrement_ref_count2(c_value_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional84=!(come_push_stackframe("16enum.c", 65, 966),__exception_result_var_b84=node_compile(value_70,info), come_pop_stackframe(), __exception_result_var_b84),            _if_conditional84) {
                __result77__ = (_Bool)0;
                name_69 = come_decrement_ref_count2(name_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(value_70) { value_70 = come_decrement_ref_count2(value_70, ((struct sNode*)value_70)->finalize, ((struct sNode*)value_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result77__;
            }
            right_value_80=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("16enum.c", 69, 967),__exception_result_var_b85=((struct CVALUE*)(right_value102=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b85));
            come_call_finalizer3(right_value102,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("16enum.c", 70,976),dec_stack_ptr(1,info),come_pop_stackframe());
            (come_push_stackframe("16enum.c", 72,981),add_variable_to_global_table_with_int_value(name_69,(struct sType*)come_increment_ref_count((come_push_stackframe("16enum.c", 72, 978),__exception_result_var_b86=((struct sType*)(right_value104=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value103=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "16enum.c", 72, "sType"))), "16enum.c", 72, 977))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b86)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_80, "16enum.c", 72, 979)), "16enum.c", 72, 980))->c_value,info),come_pop_stackframe());
            come_call_finalizer3(right_value103,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("16enum.c", 74, 987),__exception_result_var_b88=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 74, 982)), "16enum.c", 74, 983)),(come_push_stackframe("16enum.c", 74, 986),__exception_result_var_b87=((char*)(right_value105=xsprintf("%s=%s",name_69,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_80, "16enum.c", 74, 984)), "16enum.c", 74, 985))->c_value))), come_pop_stackframe(), __exception_result_var_b87)), come_pop_stackframe(), __exception_result_var_b88);
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional87=i_61!=(come_push_stackframe("16enum.c", 76, 990),__exception_result_var_b89=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_59, "16enum.c", 76, 988)), "16enum.c", 76, 989))), come_pop_stackframe(), __exception_result_var_b89)-1,            _if_conditional87) {
                (come_push_stackframe("16enum.c", 77, 993),__exception_result_var_b90=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 77, 991)), "16enum.c", 77, 992)),","), come_pop_stackframe(), __exception_result_var_b90);
            }
            (come_push_stackframe("16enum.c", 80, 996),__exception_result_var_b91=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 80, 994)), "16enum.c", 80, 995)),"\n"), come_pop_stackframe(), __exception_result_var_b91);
            n_62=(come_push_stackframe("16enum.c", 82, 999),__exception_result_var_b92=atoi(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_80, "16enum.c", 82, 997)), "16enum.c", 82, 998))->c_value), come_pop_stackframe(), __exception_result_var_b92);
            come_call_finalizer3(right_value_80,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_61++;
        n_62++;
        name_69 = come_decrement_ref_count2(name_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_70) { value_70 = come_decrement_ref_count2(value_70, ((struct sNode*)value_70)->finalize, ((struct sNode*)value_70)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    (come_push_stackframe("16enum.c", 88, 1003),__exception_result_var_b94=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 88, 1000)), "16enum.c", 88, 1001)),(come_push_stackframe("16enum.c", 88, 1002),__exception_result_var_b93=((char*)(right_value106=xsprintf("};\n",type_name_58))), come_pop_stackframe(), __exception_result_var_b93)), come_pop_stackframe(), __exception_result_var_b94);
    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional88=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 90, 1004)), "16enum.c", 90, 1005))->output_header_file&&(come_push_stackframe("16enum.c", 90, 1010),__exception_result_var_b95=string_operator_not_equals(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "16enum.c", 90, 1006)), "16enum.c", 90, 1007))->mDeclareSName,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 90, 1008)), "16enum.c", 90, 1009))->base_sname), come_pop_stackframe(), __exception_result_var_b95),    _if_conditional88) {
    }
    else {
        if(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "16enum.c", 93, 1011)), "16enum.c", 93, 1012))->mOutput) {
            (come_push_stackframe("16enum.c", 94,1016),add_come_code_at_source_head(info,"%s",(come_push_stackframe("16enum.c", 94, 1015),__exception_result_var_b96=((char*)(right_value107=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_60, "16enum.c", 94, 1013)), "16enum.c", 94, 1014))))), come_pop_stackframe(), __exception_result_var_b96)),come_pop_stackframe());
            right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __result78__ = (_Bool)1;
    type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result78__;
    type_name_58 = come_decrement_ref_count2(type_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_60,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 576)), "sNodeBase_finalize", 0, 577))->sname!=((void*)0),        _if_conditional19) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional20;
struct list$1tuple2$2charphsNodephph* __result52__;
void* right_value81;
void* right_value82;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b53;
struct list$1tuple2$2charphsNodephph* result_49;
struct list_item$1tuple2$2charphsNodephph* it_50;
_Bool _while_condtional8;
struct tuple2$2charphsNodeph* __exception_result_var_b56;
void* right_value90;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b57;
struct list$1tuple2$2charphsNodephph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
right_value82 = (void*)0;
memset(&result_49, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_50, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value90 = (void*)0;
        if(_if_conditional20=self==((void*)0),        _if_conditional20) {
            __result52__ = __result_obj__ = ((void*)0);
            return __result52__;
        }
        result_49=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 607),__exception_result_var_b53=((struct list$1tuple2$2charphsNodephph*)(right_value82=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value81=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsNodephph"))), "./neo-c.h", 139, 583)), "./neo-c.h", 139, 584)))))), come_pop_stackframe(), __exception_result_var_b53));
        come_call_finalizer3(right_value81,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value82,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_50=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 141, 608)), "./neo-c.h", 141, 609))->head;
        while(_while_condtional8=it_50!=((void*)0),        _while_condtional8) {
            (come_push_stackframe("./neo-c.h", 143, 739),__exception_result_var_b57=list$1tuple2$2charphsNodephph_add(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(result_49, "./neo-c.h", 143, 610)), "./neo-c.h", 143, 611)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value90=(come_push_stackframe("./neo-c.h", 143, 738),__exception_result_var_b56=tuple2$2charphsNodephp_clone(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_50, "./neo-c.h", 143, 680)), "./neo-c.h", 143, 681))->item), come_pop_stackframe(), __exception_result_var_b56))))), come_pop_stackframe(), __exception_result_var_b57);
            come_call_finalizer3(right_value90,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_50=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_50, "./neo-c.h", 145, 740)), "./neo-c.h", 145, 741))->next;
        }
        __result59__ = __result_obj__ = result_49;
        come_call_finalizer3(result_49,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result59__;
        come_call_finalizer3(result_49,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 101, 585)), "./neo-c.h", 101, 586))->head=((void*)0);
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 102, 587)), "./neo-c.h", 102, 588))->tail=((void*)0);
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 103, 589)), "./neo-c.h", 103, 590))->len=0;
            __result53__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result53__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_47;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsNodephph* prev_it_48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_47, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_48, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_47=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 120, 591)), "./neo-c.h", 120, 592))->head;
                while(_while_condtional7=it_47!=((void*)0),                _while_condtional7) {
                    prev_it_48=it_47;
                    it_47=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_47, "./neo-c.h", 123, 593)), "./neo-c.h", 123, 594))->next;
                    come_call_finalizer3(prev_it_48,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional21=self!=((void*)0)&&((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0, 595)), "list_item$1tuple2$2charphsNodephphp_finalize", 0, 596))->item!=((void*)0),                        _if_conditional21) {
                            come_call_finalizer3(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0, 597)), "list_item$1tuple2$2charphsNodephphp_finalize", 0, 598))->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional24;
void* right_value83;
struct list_item$1tuple2$2charphsNodephph* litem_51;
struct tuple2$2charphsNodeph* __dec_obj13;
_Bool _if_conditional27;
void* right_value84;
struct list_item$1tuple2$2charphsNodephph* litem_52;
struct tuple2$2charphsNodeph* __dec_obj14;
void* right_value85;
struct list_item$1tuple2$2charphsNodephph* litem_53;
struct tuple2$2charphsNodeph* __dec_obj15;
struct list$1tuple2$2charphsNodephph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value84 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value85 = (void*)0;
memset(&litem_53, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional24=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 152, 612)), "./neo-c.h", 152, 613))->len==0,                _if_conditional24) {
                    litem_51=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value83=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value83,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_51, "./neo-c.h", 155, 614)), "./neo-c.h", 155, 615))->prev=((void*)0);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_51, "./neo-c.h", 156, 616)), "./neo-c.h", 156, 617))->next=((void*)0);
                    __dec_obj13=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_51, "./neo-c.h", 157, 618)), "./neo-c.h", 157, 619))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_51, "./neo-c.h", 157, 618)), "./neo-c.h", 157, 619))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj13,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 159, 628)), "./neo-c.h", 159, 629))->tail=litem_51;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 160, 630)), "./neo-c.h", 160, 631))->head=litem_51;
                }
                else {
                    if(_if_conditional27=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 162, 632)), "./neo-c.h", 162, 633))->len==1,                    _if_conditional27) {
                        litem_52=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value84=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value84,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_52, "./neo-c.h", 165, 634)), "./neo-c.h", 165, 635))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 165, 636)), "./neo-c.h", 165, 637))->head;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_52, "./neo-c.h", 166, 638)), "./neo-c.h", 166, 639))->next=((void*)0);
                        __dec_obj14=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_52, "./neo-c.h", 167, 640)), "./neo-c.h", 167, 641))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_52, "./neo-c.h", 167, 640)), "./neo-c.h", 167, 641))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj14,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 169, 650)), "./neo-c.h", 169, 651))->tail=litem_52;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 170, 652)), "./neo-c.h", 170, 653))->head, "./neo-c.h", 170, 654)), "./neo-c.h", 170, 655))->next=litem_52;
                    }
                    else {
                        litem_53=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value85=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value85,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_53, "./neo-c.h", 175, 656)), "./neo-c.h", 175, 657))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 175, 658)), "./neo-c.h", 175, 659))->tail;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_53, "./neo-c.h", 176, 660)), "./neo-c.h", 176, 661))->next=((void*)0);
                        __dec_obj15=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_53, "./neo-c.h", 177, 662)), "./neo-c.h", 177, 663))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_53, "./neo-c.h", 177, 662)), "./neo-c.h", 177, 663))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj15,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 179, 672)), "./neo-c.h", 179, 673))->tail, "./neo-c.h", 179, 674)), "./neo-c.h", 179, 675))->next=litem_53;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 180, 676)), "./neo-c.h", 180, 677))->tail=litem_53;
                    }
                }
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 183, 678)), "./neo-c.h", 183, 679))->len++;
                __result54__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result54__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional30;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional30=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 664)), "tuple2$2charphsNodephp_finalize", 0, 665))->v1!=((void*)0),                            _if_conditional30) {
                                ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 666)), "tuple2$2charphsNodephp_finalize", 0, 667))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 666)), "tuple2$2charphsNodephp_finalize", 0, 667))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional31=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 668)), "tuple2$2charphsNodephp_finalize", 1, 669))->v2!=((void*)0),                            _if_conditional31) {
                                if(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 670)), "tuple2$2charphsNodephp_finalize", 1, 671))->v2) { ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 670)), "tuple2$2charphsNodephp_finalize", 1, 671))->v2 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 670)), "tuple2$2charphsNodephp_finalize", 1, 671))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 670)), "tuple2$2charphsNodephp_finalize", 1, 671))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 670)), "tuple2$2charphsNodephp_finalize", 1, 671))->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
struct tuple2$2charphsNodeph* __result55__;
void* right_value86;
struct tuple2$2charphsNodeph* result_54;
_Bool _if_conditional35;
char* __exception_result_var_b54;
void* right_value87;
char* __dec_obj16;
_Bool _if_conditional36;
struct sNode* __exception_result_var_b55;
void* right_value89;
struct sNode* __dec_obj17;
struct tuple2$2charphsNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_54, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value87 = (void*)0;
right_value89 = (void*)0;
                if(_if_conditional32=self==(void*)0,                _if_conditional32) {
                    __result55__ = __result_obj__ = (void*)0;
                    return __result55__;
                }
                result_54=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value86=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value86,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional35=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4, 690)), "tuple2$2charphsNodephp_clone", 4, 691))->v1!=((void*)0),                _if_conditional35) {
                    __dec_obj16=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_54, "tuple2$2charphsNodephp_clone", 4, 692)), "tuple2$2charphsNodephp_clone", 4, 693))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_54, "tuple2$2charphsNodephp_clone", 4, 692)), "tuple2$2charphsNodephp_clone", 4, 693))->v1=(char*)come_increment_ref_count(((char*)(right_value87=(come_push_stackframe("tuple2$2charphsNodephp_clone", 4, 696),__exception_result_var_b54=string_clone(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4, 694)), "tuple2$2charphsNodephp_clone", 4, 695))->v1), come_pop_stackframe(), __exception_result_var_b54))));
                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional36=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5, 697)), "tuple2$2charphsNodephp_clone", 5, 698))->v2!=((void*)0),                _if_conditional36) {
                    __dec_obj17=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_54, "tuple2$2charphsNodephp_clone", 5, 699)), "tuple2$2charphsNodephp_clone", 5, 700))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_54, "tuple2$2charphsNodephp_clone", 5, 699)), "tuple2$2charphsNodephp_clone", 5, 700))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value89=(come_push_stackframe("tuple2$2charphsNodephp_clone", 5, 737),__exception_result_var_b55=sNode_clone(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5, 701)), "tuple2$2charphsNodephp_clone", 5, 702))->v2), come_pop_stackframe(), __exception_result_var_b55))));
                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, ((struct sNode*)right_value89)->finalize, ((struct sNode*)right_value89)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result58__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_54,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional33=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 682)), "tuple2$2charphsNodeph_finalize", 0, 683))->v1!=((void*)0),                    _if_conditional33) {
                        ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 684)), "tuple2$2charphsNodeph_finalize", 0, 685))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 684)), "tuple2$2charphsNodeph_finalize", 0, 685))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional34=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 686)), "tuple2$2charphsNodeph_finalize", 1, 687))->v2!=((void*)0),                    _if_conditional34) {
                        if(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 688)), "tuple2$2charphsNodeph_finalize", 1, 689))->v2) { ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 688)), "tuple2$2charphsNodeph_finalize", 1, 689))->v2 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 688)), "tuple2$2charphsNodeph_finalize", 1, 689))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 688)), "tuple2$2charphsNodeph_finalize", 1, 689))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 688)), "tuple2$2charphsNodeph_finalize", 1, 689))->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional37;
struct sNode* __result56__;
void* right_value88;
struct sNode* result_55;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&result_55, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result56__ = __result_obj__ = (void*)0;
                            return __result56__;
                        }
                        result_55=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value88=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value88) { right_value88 = come_decrement_ref_count2(right_value88, ((struct sNode*)right_value88)->finalize, ((struct sNode*)right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional38=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 703)), "sNode_clone", 4, 704))->clone!=((void*)0),                        _if_conditional38) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_55, "sNode_clone", 4, 705)), "sNode_clone", 4, 706))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 707)), "sNode_clone", 4, 708))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 707)), "sNode_clone", 4, 708))->_protocol_obj);
                        }
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_55, "sNode_clone", 5, 709)), "sNode_clone", 5, 710))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 711)), "sNode_clone", 5, 712))->finalize;
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_55, "sNode_clone", 6, 713)), "sNode_clone", 6, 714))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 715)), "sNode_clone", 6, 716))->clone;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_55, "sNode_clone", 7, 717)), "sNode_clone", 7, 718))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 719)), "sNode_clone", 7, 720))->compile;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_55, "sNode_clone", 8, 721)), "sNode_clone", 8, 722))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 723)), "sNode_clone", 8, 724))->sline;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_55, "sNode_clone", 9, 725)), "sNode_clone", 9, 726))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 727)), "sNode_clone", 9, 728))->sname;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_55, "sNode_clone", 10, 729)), "sNode_clone", 10, 730))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 731)), "sNode_clone", 10, 732))->terminated;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_55, "sNode_clone", 11, 733)), "sNode_clone", 11, 734))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 735)), "sNode_clone", 11, 736))->kind;
                        }
                        __result57__ = __result_obj__ = result_55;
                        if(result_55) { result_55 = come_decrement_ref_count2(result_55, ((struct sNode*)result_55)->finalize, ((struct sNode*)result_55)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result57__;
                        if(result_55) { result_55 = come_decrement_ref_count2(result_55, ((struct sNode*)result_55)->finalize, ((struct sNode*)result_55)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_56;
_Bool _while_condtional9;
struct list_item$1tuple2$2charphsNodephph* prev_it_57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_57, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        it_56=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 120, 743)), "./neo-c.h", 120, 744))->head;
        while(_while_condtional9=it_56!=((void*)0),        _while_condtional9) {
            prev_it_57=it_56;
            it_56=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_56, "./neo-c.h", 123, 745)), "./neo-c.h", 123, 746))->next;
            come_call_finalizer3(prev_it_57,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct tuple2$2charphsNodeph* result_64;
void* __exception_result_var_b67;
struct tuple2$2charphsNodeph* __result64__;
_Bool _if_conditional52;
struct tuple2$2charphsNodeph* __result65__;
struct tuple2$2charphsNodeph* result_65;
void* __exception_result_var_b68;
struct tuple2$2charphsNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_65, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional51=self==((void*)0),        _if_conditional51) {
            (come_push_stackframe("./neo-c.h", 284, 786),__exception_result_var_b67=memset(&result_64,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b67);
            __result64__ = __result_obj__ = result_64;
            return __result64__;
        }
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 287, 787)), "./neo-c.h", 287, 788))->it=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 287, 789)), "./neo-c.h", 287, 790))->head;
        if(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 289, 791)), "./neo-c.h", 289, 792))->it) {
            __result65__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 290, 793)), "./neo-c.h", 290, 794))->it, "./neo-c.h", 290, 795)), "./neo-c.h", 290, 796))->item;
            return __result65__;
        }
        (come_push_stackframe("./neo-c.h", 294, 797),__exception_result_var_b68=memset(&result_65,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b68);
        __result66__ = __result_obj__ = result_65;
        return __result66__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
        __result67__ = self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 317, 801)), "./neo-c.h", 317, 802))->it==((void*)0);
        return __result67__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional53;
struct tuple2$2charphsNodeph* result_67;
void* __exception_result_var_b71;
struct tuple2$2charphsNodeph* __result68__;
_Bool _if_conditional54;
struct tuple2$2charphsNodeph* __result69__;
struct tuple2$2charphsNodeph* result_68;
void* __exception_result_var_b72;
struct tuple2$2charphsNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_68, 0, sizeof(struct tuple2$2charphsNodeph*));
        if(_if_conditional53=self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 299, 806)), "./neo-c.h", 299, 807))->it==((void*)0),        _if_conditional53) {
            (come_push_stackframe("./neo-c.h", 301, 808),__exception_result_var_b71=memset(&result_67,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b71);
            __result68__ = __result_obj__ = result_67;
            return __result68__;
        }
        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 305, 809)), "./neo-c.h", 305, 810))->it=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 305, 811)), "./neo-c.h", 305, 812))->it, "./neo-c.h", 305, 813)), "./neo-c.h", 305, 814))->next;
        if(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 307, 815)), "./neo-c.h", 307, 816))->it) {
            __result69__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 308, 817)), "./neo-c.h", 308, 818))->it, "./neo-c.h", 308, 819)), "./neo-c.h", 308, 820))->item;
            return __result69__;
        }
        (come_push_stackframe("./neo-c.h", 312, 821),__exception_result_var_b72=memset(&result_68,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b72);
        __result70__ = __result_obj__ = result_68;
        return __result70__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b74;
unsigned int hash_71;
unsigned int it_72;
_Bool _while_condtional10;
_Bool _if_conditional55;
_Bool __exception_result_var_b75;
_Bool _if_conditional56;
struct sVar* __result71__;
_Bool _if_conditional78;
_Bool _if_conditional79;
struct sVar* __result72__;
struct sVar* __result73__;
struct sVar* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
            hash_71=(come_push_stackframe("./neo-c.h", 1207, 831),__exception_result_var_b74=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 829)), "./neo-c.h", 1207, 830))), come_pop_stackframe(), __exception_result_var_b74)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1207, 832)), "./neo-c.h", 1207, 833))->size;
            it_72=hash_71;
            while(_while_condtional10=(_Bool)1,            _while_condtional10) {
                if(_if_conditional55=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1211, 834)), "./neo-c.h", 1211, 835))->item_existance, "./neo-c.h", 1211, 836))[it_72],                _if_conditional55) {
                    if(_if_conditional56=(come_push_stackframe("./neo-c.h", 1213, 842),__exception_result_var_b75=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1213, 837)), "./neo-c.h", 1213, 838))->keys, "./neo-c.h", 1213, 839))[it_72], "./neo-c.h", 1213, 840)), "./neo-c.h", 1213, 841)),key), come_pop_stackframe(), __exception_result_var_b75),                    _if_conditional56) {
                        __result71__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1215, 843)), "./neo-c.h", 1215, 844))->items, "./neo-c.h", 1215, 845))[it_72];
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result71__;
                    }
                    it_72++;
                    if(_if_conditional78=it_72>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1220, 942)), "./neo-c.h", 1220, 943))->size,                    _if_conditional78) {
                        it_72=0;
                    }
                    else {
                        if(_if_conditional79=it_72==hash_71,                        _if_conditional79) {
                            __result72__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result72__;
                        }
                    }
                }
                else {
                    __result73__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result73__;
                }
            }
            __result74__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result74__;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional77;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional57=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 846)), "sVar_finalize", 0, 847))->mName!=((void*)0),                            _if_conditional57) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 848)), "sVar_finalize", 0, 849))->mName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 848)), "sVar_finalize", 0, 849))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional58=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 850)), "sVar_finalize", 1, 851))->mCValueName!=((void*)0),                            _if_conditional58) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 852)), "sVar_finalize", 1, 853))->mCValueName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 852)), "sVar_finalize", 1, 853))->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional59=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 854)), "sVar_finalize", 2, 855))->mType!=((void*)0),                            _if_conditional59) {
                                come_call_finalizer3(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 856)), "sVar_finalize", 2, 857))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional77=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 938)), "sVar_finalize", 3, 939))->mFunName!=((void*)0),                            _if_conditional77) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 940)), "sVar_finalize", 3, 941))->mFunName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 940)), "sVar_finalize", 3, 941))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional60;
_Bool _if_conditional62;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional75;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional60=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 858)), "sType_finalize", 0, 859))->mMultipleTypes!=((void*)0),                                    _if_conditional60) {
                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 860)), "sType_finalize", 0, 861))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional62=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 870)), "sType_finalize", 1, 871))->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional62) {
                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 872)), "sType_finalize", 1, 873))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional64=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 878)), "sType_finalize", 2, 879))->mOriginalLoadVarType!=((void*)0),                                    _if_conditional64) {
                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 880)), "sType_finalize", 2, 881))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 882)), "sType_finalize", 3, 883))->mGenericsName!=((void*)0),                                    _if_conditional65) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 884)), "sType_finalize", 3, 885))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 884)), "sType_finalize", 3, 885))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional66=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 886)), "sType_finalize", 4, 887))->mGenericsTypes!=((void*)0),                                    _if_conditional66) {
                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 888)), "sType_finalize", 4, 889))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional67=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 890)), "sType_finalize", 5, 891))->mArrayNum!=((void*)0),                                    _if_conditional67) {
                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 892)), "sType_finalize", 5, 893))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 902)), "sType_finalize", 6, 903))->mParamTypes!=((void*)0),                                    _if_conditional69) {
                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 904)), "sType_finalize", 6, 905))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 906)), "sType_finalize", 7, 907))->mParamNames!=((void*)0),                                    _if_conditional70) {
                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 908)), "sType_finalize", 7, 909))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional72=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 918)), "sType_finalize", 8, 919))->mResultType!=((void*)0),                                    _if_conditional72) {
                                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 920)), "sType_finalize", 8, 921))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional73=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 922)), "sType_finalize", 9, 923))->mAlignas!=((void*)0),                                    _if_conditional73) {
                                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 924)), "sType_finalize", 9, 925))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 924)), "sType_finalize", 9, 925))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 924)), "sType_finalize", 9, 925))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 924)), "sType_finalize", 9, 925))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 924)), "sType_finalize", 9, 925))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 926)), "sType_finalize", 10, 927))->mSizeNum!=((void*)0),                                    _if_conditional74) {
                                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 928)), "sType_finalize", 10, 929))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 928)), "sType_finalize", 10, 929))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 928)), "sType_finalize", 10, 929))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 928)), "sType_finalize", 10, 929))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 928)), "sType_finalize", 10, 929))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 930)), "sType_finalize", 11, 931))->mOriginalTypeName!=((void*)0),                                    _if_conditional75) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 932)), "sType_finalize", 11, 933))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 932)), "sType_finalize", 11, 933))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 934)), "sType_finalize", 12, 935))->mAsmName!=((void*)0),                                    _if_conditional76) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 936)), "sType_finalize", 12, 937))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 936)), "sType_finalize", 12, 937))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_73;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1sTypeph*));
                                            it_73=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 862)), "./neo-c.h", 120, 863))->head;
                                            while(_while_condtional11=it_73!=((void*)0),                                            _while_condtional11) {
                                                prev_it_74=it_73;
                                                it_73=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_73, "./neo-c.h", 123, 864)), "./neo-c.h", 123, 865))->next;
                                                come_call_finalizer3(prev_it_74,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional61=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 866)), "list_item$1sTypephp_finalize", 0, 867))->item!=((void*)0),                                                    _if_conditional61) {
                                                        come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 868)), "list_item$1sTypephp_finalize", 0, 869))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional63;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional63=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 874)), "tuple1$1sTypephp_finalize", 0, 875))->v1!=((void*)0),                                            _if_conditional63) {
                                                come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 876)), "tuple1$1sTypephp_finalize", 0, 877))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_75;
_Bool _while_condtional12;
struct list_item$1sNodeph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1sNodeph*));
                                            it_75=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 894)), "./neo-c.h", 120, 895))->head;
                                            while(_while_condtional12=it_75!=((void*)0),                                            _while_condtional12) {
                                                prev_it_76=it_75;
                                                it_75=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_75, "./neo-c.h", 123, 896)), "./neo-c.h", 123, 897))->next;
                                                come_call_finalizer3(prev_it_76,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional68;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional68=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 898)), "list_item$1sNodephp_finalize", 0, 899))->item!=((void*)0),                                                    _if_conditional68) {
                                                        if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 900)), "list_item$1sNodephp_finalize", 0, 901))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 900)), "list_item$1sNodephp_finalize", 0, 901))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 900)), "list_item$1sNodephp_finalize", 0, 901))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 900)), "list_item$1sNodephp_finalize", 0, 901))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 900)), "list_item$1sNodephp_finalize", 0, 901))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_77;
_Bool _while_condtional13;
struct list_item$1charph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1charph*));
                                            it_77=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 910)), "./neo-c.h", 120, 911))->head;
                                            while(_while_condtional13=it_77!=((void*)0),                                            _while_condtional13) {
                                                prev_it_78=it_77;
                                                it_77=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_77, "./neo-c.h", 123, 912)), "./neo-c.h", 123, 913))->next;
                                                come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional71;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional71=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 914)), "list_item$1charphp_finalize", 0, 915))->item!=((void*)0),                                                    _if_conditional71) {
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 916)), "list_item$1charphp_finalize", 0, 917))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 916)), "list_item$1charphp_finalize", 0, 917))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional82;
int __result75__;
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional82=self==((void*)0),                _if_conditional82) {
                    __result75__ = 0;
                    return __result75__;
                }
                __result76__ = ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 360, 956)), "./neo-c.h", 360, 957))->len;
                return __result76__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional85;
_Bool _if_conditional86;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional85=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 968)), "CVALUE_finalize", 0, 969))->c_value!=((void*)0),                _if_conditional85) {
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 970)), "CVALUE_finalize", 0, 971))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 970)), "CVALUE_finalize", 0, 971))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional86=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 972)), "CVALUE_finalize", 1, 973))->type!=((void*)0),                _if_conditional86) {
                    come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 974)), "CVALUE_finalize", 1, 975))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sNode* parse_enum(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_81;
_Bool output_82;
struct sClass* __exception_result_var_b99;
_Bool _if_conditional101;
void* right_value108;
void* right_value109;
struct sClass* __exception_result_var_b100;
struct sClass* __dec_obj20;
struct map$2charphsClassph* __exception_result_var_b130;
struct sClass* __exception_result_var_b131;
struct sClass* __exception_result_var_b166;
void* right_value168;
struct sClass* __dec_obj55;
int __exception_result_var_b167;
void* right_value169;
void* right_value170;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b168;
struct list$1tuple2$2charphsNodephph* elements_163;
_Bool _while_condtional31;
void* right_value171;
char* __exception_result_var_b169;
char* element_name_164;
_Bool _if_conditional250;
_Bool no_comma_165;
void* right_value172;
struct sNode* __exception_result_var_b170;
struct sNode* element_value_166;
_Bool _if_conditional251;
void* right_value176;
void* right_value177;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b171;
_Bool _if_conditional254;
void* right_value178;
void* right_value179;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b172;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value180;
void* right_value181;
struct sEnumNode* __exception_result_var_b173;
struct sNode* _inf_value1;
struct sEnumNode* _inf_obj_value1;
void* right_value187;
struct sNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_81, 0, sizeof(struct sClass*));
memset(&output_82, 0, sizeof(_Bool));
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&elements_163, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value171 = (void*)0;
memset(&element_name_164, 0, sizeof(char*));
memset(&no_comma_165, 0, sizeof(_Bool));
right_value172 = (void*)0;
memset(&element_value_166, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value187 = (void*)0;
    if(_if_conditional101=(come_push_stackframe("16enum.c", 106, 1072),__exception_result_var_b99=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 106, 1017)), "16enum.c", 106, 1018))->classes, "16enum.c", 106, 1019)), "16enum.c", 106, 1020)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b99)==((void*)0),    _if_conditional101) {
        output_82=(_Bool)1;
        __dec_obj20=klass_81;
        klass_81=(struct sClass*)come_increment_ref_count((come_push_stackframe("16enum.c", 108, 1074),__exception_result_var_b100=((struct sClass*)(right_value109=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value108=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 108, "sClass"))), "16enum.c", 108, 1073))),type_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b100));
        come_call_finalizer3(__dec_obj20,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value108,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value109,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("16enum.c", 109, 1432),__exception_result_var_b130=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 109, 1075)), "16enum.c", 109, 1076))->classes, "16enum.c", 109, 1077)), "16enum.c", 109, 1078)),(char*)come_increment_ref_count(type_name),(struct sClass*)come_increment_ref_count(klass_81)), come_pop_stackframe(), __exception_result_var_b130);
    }
    else {
        output_82=(_Bool)0;
        __dec_obj55=klass_81;
        klass_81=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value168=(come_push_stackframe("16enum.c", 113, 2120),__exception_result_var_b166=sClass_clone((come_push_stackframe("16enum.c", 113, 1437),__exception_result_var_b131=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 113, 1433)), "16enum.c", 113, 1434))->classes, "16enum.c", 113, 1435)), "16enum.c", 113, 1436)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b131)), come_pop_stackframe(), __exception_result_var_b166))));
        come_call_finalizer3(__dec_obj55,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value168,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    (come_push_stackframe("16enum.c", 116, 2121),__exception_result_var_b167=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b167);
    elements_163=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("16enum.c", 118, 2123),__exception_result_var_b168=((struct list$1tuple2$2charphsNodephph*)(right_value170=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value169=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 118, "list$1tuple2$2charphsNodephph"))), "16enum.c", 118, 2122)))))), come_pop_stackframe(), __exception_result_var_b168));
    come_call_finalizer3(right_value169,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional31=(_Bool)1,    _while_condtional31) {
        (come_push_stackframe("16enum.c", 121,2124),parse_sharp_v5(info),come_pop_stackframe());
        element_name_164=(char*)come_increment_ref_count((come_push_stackframe("16enum.c", 123, 2125),__exception_result_var_b169=((char*)(right_value171=parse_word(info))), come_pop_stackframe(), __exception_result_var_b169));
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("16enum.c", 125,2126),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional250=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 127, 2127)), "16enum.c", 127, 2128))->p, "16enum.c", 127, 2129))==61,        _if_conditional250) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 128, 2130)), "16enum.c", 128, 2131))->p++;
            (come_push_stackframe("16enum.c", 129,2132),skip_spaces_and_lf(info),come_pop_stackframe());
            no_comma_165=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 131, 2133)), "16enum.c", 131, 2134))->no_comma;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 132, 2135)), "16enum.c", 132, 2136))->no_comma=(_Bool)1;
            element_value_166=(struct sNode*)come_increment_ref_count((come_push_stackframe("16enum.c", 133, 2137),__exception_result_var_b170=((struct sNode*)(right_value172=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b170));
            if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 135, 2138)), "16enum.c", 135, 2139))->no_comma=no_comma_165;
            if(_if_conditional251=!((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 137, 2140)), "16enum.c", 137, 2141))->no_output_err,            _if_conditional251) {
                (come_push_stackframe("16enum.c", 138, 2192),__exception_result_var_b171=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_163, "16enum.c", 138, 2142)), "16enum.c", 138, 2143)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value177=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value176=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 138, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_164),(struct sNode*)come_increment_ref_count(element_value_166)))))), come_pop_stackframe(), __exception_result_var_b171);
                come_call_finalizer3(right_value176,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value177,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(element_value_166) { element_value_166 = come_decrement_ref_count2(element_value_166, ((struct sNode*)element_value_166)->finalize, ((struct sNode*)element_value_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional254=!((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 142, 2193)), "16enum.c", 142, 2194))->no_output_err,            _if_conditional254) {
                (come_push_stackframe("16enum.c", 143, 2205),__exception_result_var_b172=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_163, "16enum.c", 143, 2195)), "16enum.c", 143, 2196)),(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value179=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value178=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "16enum.c", 143, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(element_name_164),((void*)0)))))), come_pop_stackframe(), __exception_result_var_b172);
                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value179,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
        }
        (come_push_stackframe("16enum.c", 147,2206),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional256=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 149, 2207)), "16enum.c", 149, 2208))->p, "16enum.c", 149, 2209))==44,        _if_conditional256) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 150, 2210)), "16enum.c", 150, 2211))->p++;
            (come_push_stackframe("16enum.c", 151,2212),skip_spaces_and_lf(info),come_pop_stackframe());
        }
        (come_push_stackframe("16enum.c", 154,2213),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional257=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 156, 2214)), "16enum.c", 156, 2215))->p, "16enum.c", 156, 2216))==125,        _if_conditional257) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 157, 2217)), "16enum.c", 157, 2218))->p++;
            (come_push_stackframe("16enum.c", 158,2219),skip_spaces_and_lf(info),come_pop_stackframe());
            element_name_164 = come_decrement_ref_count2(element_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        element_name_164 = come_decrement_ref_count2(element_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 163, "struct sNode");
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("16enum.c", 163, 2221),__exception_result_var_b173=((struct sEnumNode*)(right_value181=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)come_null_check(((struct sEnumNode*)(right_value180=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 163, "sEnumNode"))), "16enum.c", 163, 2220))),(char*)come_increment_ref_count(type_name),elements_163,output_82,info))), come_pop_stackframe(), __exception_result_var_b173));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sEnumNode_finalize;
    _inf_value1->clone=(void*)sEnumNode_clone;
    _inf_value1->compile=(void*)sEnumNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sEnumNode_terminated;
    _inf_value1->kind=(void*)sEnumNode_kind;
    __result136__ = __result_obj__ = ((struct sNode*)(right_value187=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_81,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elements_163,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result136__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_81,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elements_163,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b97;
unsigned int hash_83;
unsigned int it_84;
_Bool _while_condtional14;
_Bool _if_conditional90;
_Bool __exception_result_var_b98;
_Bool _if_conditional91;
struct sClass* __result79__;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sClass* __result80__;
struct sClass* __result81__;
struct sClass* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_83, 0, sizeof(unsigned int));
memset(&it_84, 0, sizeof(unsigned int));
        hash_83=(come_push_stackframe("./neo-c.h", 1207, 1023),__exception_result_var_b97=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1021)), "./neo-c.h", 1207, 1022))), come_pop_stackframe(), __exception_result_var_b97)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1207, 1024)), "./neo-c.h", 1207, 1025))->size;
        it_84=hash_83;
        while(_while_condtional14=(_Bool)1,        _while_condtional14) {
            if(_if_conditional90=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1211, 1026)), "./neo-c.h", 1211, 1027))->item_existance, "./neo-c.h", 1211, 1028))[it_84],            _if_conditional90) {
                if(_if_conditional91=(come_push_stackframe("./neo-c.h", 1213, 1034),__exception_result_var_b98=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1213, 1029)), "./neo-c.h", 1213, 1030))->keys, "./neo-c.h", 1213, 1031))[it_84], "./neo-c.h", 1213, 1032)), "./neo-c.h", 1213, 1033)),key), come_pop_stackframe(), __exception_result_var_b98),                _if_conditional91) {
                    __result79__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1215, 1035)), "./neo-c.h", 1215, 1036))->items, "./neo-c.h", 1215, 1037))[it_84];
                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
                it_84++;
                if(_if_conditional99=it_84>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1220, 1070)), "./neo-c.h", 1220, 1071))->size,                _if_conditional99) {
                    it_84=0;
                }
                else {
                    if(_if_conditional100=it_84==hash_83,                    _if_conditional100) {
                        __result80__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result80__;
                    }
                }
            }
            else {
                __result81__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result81__;
            }
        }
        __result82__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result82__;
        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional97;
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional92=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1038)), "sClass_finalize", 0, 1039))->mName!=((void*)0),                        _if_conditional92) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1040)), "sClass_finalize", 0, 1041))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1040)), "sClass_finalize", 0, 1041))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional93=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1042)), "sClass_finalize", 1, 1043))->mFields!=((void*)0),                        _if_conditional93) {
                            come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1044)), "sClass_finalize", 1, 1045))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional97=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1062)), "sClass_finalize", 2, 1063))->mDeclareSName!=((void*)0),                        _if_conditional97) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1064)), "sClass_finalize", 2, 1065))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1064)), "sClass_finalize", 2, 1065))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional98=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1066)), "sClass_finalize", 3, 1067))->mParentClassName!=((void*)0),                        _if_conditional98) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1068)), "sClass_finalize", 3, 1069))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1068)), "sClass_finalize", 3, 1069))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_85;
_Bool _while_condtional15;
struct list_item$1tuple2$2charphsTypephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_85=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 1046)), "./neo-c.h", 120, 1047))->head;
                                while(_while_condtional15=it_85!=((void*)0),                                _while_condtional15) {
                                    prev_it_86=it_85;
                                    it_85=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_85, "./neo-c.h", 123, 1048)), "./neo-c.h", 123, 1049))->next;
                                    come_call_finalizer3(prev_it_86,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional94;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional94=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1050)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1051))->item!=((void*)0),                                        _if_conditional94) {
                                            come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1052)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1053))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional102;
unsigned int __exception_result_var_b113;
unsigned int hash_102;
unsigned int it_103;
_Bool _while_condtional17;
_Bool _if_conditional110;
_Bool __exception_result_var_b114;
_Bool _if_conditional111;
_Bool _if_conditional112;
struct list$1charp* __exception_result_var_b118;
struct list$1charp* __exception_result_var_b119;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
int __exception_result_var_b120;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool same_key_exist_120;
char* __exception_result_var_b123;
char* it2_123;
_Bool __exception_result_var_b124;
char* __exception_result_var_b127;
_Bool __exception_result_var_b128;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct list$1charp* __exception_result_var_b129;
struct map$2charphsClassph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_102, 0, sizeof(unsigned int));
memset(&it_103, 0, sizeof(unsigned int));
memset(&same_key_exist_120, 0, sizeof(_Bool));
memset(&it2_123, 0, sizeof(char*));
            if(_if_conditional102=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1079)), "./neo-c.h", 1371, 1080))->len*10>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1081)), "./neo-c.h", 1371, 1082))->size,            _if_conditional102) {
                (come_push_stackframe("./neo-c.h", 1372,1183),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1372, 1083)), "./neo-c.h", 1372, 1084))),come_pop_stackframe());
            }
            hash_102=(come_push_stackframe("./neo-c.h", 1374, 1186),__exception_result_var_b113=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1184)), "./neo-c.h", 1374, 1185))), come_pop_stackframe(), __exception_result_var_b113)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1374, 1187)), "./neo-c.h", 1374, 1188))->size;
            it_103=hash_102;
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                if(_if_conditional110=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1378, 1189)), "./neo-c.h", 1378, 1190))->item_existance, "./neo-c.h", 1378, 1191))[it_103],                _if_conditional110) {
                    if(_if_conditional111=(come_push_stackframe("./neo-c.h", 1380, 1197),__exception_result_var_b114=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1380, 1192)), "./neo-c.h", 1380, 1193))->keys, "./neo-c.h", 1380, 1194))[it_103], "./neo-c.h", 1380, 1195)), "./neo-c.h", 1380, 1196)),key), come_pop_stackframe(), __exception_result_var_b114),                    _if_conditional111) {
                        if(_if_conditional112=1,                        _if_conditional112) {
                            (come_push_stackframe("./neo-c.h", 1383, 1286),__exception_result_var_b118=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1198)), "./neo-c.h", 1383, 1199))->key_list, "./neo-c.h", 1383, 1200)), "./neo-c.h", 1383, 1201)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1283)), "./neo-c.h", 1383, 1284))->keys, "./neo-c.h", 1383, 1285))[it_103]), come_pop_stackframe(), __exception_result_var_b118);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1287)), "./neo-c.h", 1384, 1288))->keys, "./neo-c.h", 1384, 1289))[it_103] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1287)), "./neo-c.h", 1384, 1288))->keys, "./neo-c.h", 1384, 1289))[it_103], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1385, 1290)), "./neo-c.h", 1385, 1291))->keys, "./neo-c.h", 1385, 1292))[it_103]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            (come_push_stackframe("./neo-c.h", 1388, 1300),__exception_result_var_b119=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1293)), "./neo-c.h", 1388, 1294))->key_list, "./neo-c.h", 1388, 1295)), "./neo-c.h", 1388, 1296)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1297)), "./neo-c.h", 1388, 1298))->keys, "./neo-c.h", 1388, 1299))[it_103]), come_pop_stackframe(), __exception_result_var_b119);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1389, 1301)), "./neo-c.h", 1389, 1302))->keys, "./neo-c.h", 1389, 1303))[it_103]=key;
                        }
                        if(_if_conditional132=1,                        _if_conditional132) {
                            come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1392, 1304)), "./neo-c.h", 1392, 1305))->items, "./neo-c.h", 1392, 1306))[it_103],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1393, 1307)), "./neo-c.h", 1393, 1308))->items, "./neo-c.h", 1393, 1309))[it_103]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1396, 1310)), "./neo-c.h", 1396, 1311))->items, "./neo-c.h", 1396, 1312))[it_103]=item;
                        }
                        break;
                    }
                    it_103++;
                    if(_if_conditional133=it_103>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1403, 1313)), "./neo-c.h", 1403, 1314))->size,                    _if_conditional133) {
                        it_103=0;
                    }
                    else {
                        if(_if_conditional134=it_103==hash_102,                        _if_conditional134) {
                            (come_push_stackframe("./neo-c.h", 1407, 1315),__exception_result_var_b120=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b120);
                            (come_push_stackframe("./neo-c.h", 1408,1316),stackframe(),come_pop_stackframe());
                            (come_push_stackframe("./neo-c.h", 1409,1317),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    ((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1413, 1318)), "./neo-c.h", 1413, 1319))->item_existance, "./neo-c.h", 1413, 1320))[it_103]=(_Bool)1;
                    if(_if_conditional135=1,                    _if_conditional135) {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1415, 1321)), "./neo-c.h", 1415, 1322))->keys, "./neo-c.h", 1415, 1323))[it_103]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1418, 1324)), "./neo-c.h", 1418, 1325))->keys, "./neo-c.h", 1418, 1326))[it_103]=key;
                    }
                    if(_if_conditional136=1,                    _if_conditional136) {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1421, 1327)), "./neo-c.h", 1421, 1328))->items, "./neo-c.h", 1421, 1329))[it_103]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1424, 1330)), "./neo-c.h", 1424, 1331))->items, "./neo-c.h", 1424, 1332))[it_103]=item;
                    }
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1427, 1333)), "./neo-c.h", 1427, 1334))->len++;
                    break;
                }
            }
            same_key_exist_120=(_Bool)0;
            for(            it2_123=(come_push_stackframe("./neo-c.h", 1434, 1351),__exception_result_var_b123=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1335)), "./neo-c.h", 1434, 1336))->key_list, "./neo-c.h", 1434, 1337)), "./neo-c.h", 1434, 1338))), come_pop_stackframe(), __exception_result_var_b123);            !(come_push_stackframe("./neo-c.h", 1434, 1358),__exception_result_var_b124=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1352)), "./neo-c.h", 1434, 1353))->key_list, "./neo-c.h", 1434, 1354)), "./neo-c.h", 1434, 1355))), come_pop_stackframe(), __exception_result_var_b124);            it2_123=(come_push_stackframe("./neo-c.h", 1434, 1379),__exception_result_var_b127=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1359)), "./neo-c.h", 1434, 1360))->key_list, "./neo-c.h", 1434, 1361)), "./neo-c.h", 1434, 1362))), come_pop_stackframe(), __exception_result_var_b127)            ){
                if(_if_conditional141=(come_push_stackframe("./neo-c.h", 1436, 1382),__exception_result_var_b128=string_equals(((char*)come_null_check(((char*)come_null_check(it2_123, "./neo-c.h", 1436, 1380)), "./neo-c.h", 1436, 1381)),key), come_pop_stackframe(), __exception_result_var_b128),                _if_conditional141) {
                    same_key_exist_120=(_Bool)1;
                }
            }
            if(_if_conditional142=!same_key_exist_120,            _if_conditional142) {
                (come_push_stackframe("./neo-c.h", 1442, 1431),__exception_result_var_b129=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1442, 1383)), "./neo-c.h", 1442, 1384))->key_list, "./neo-c.h", 1442, 1385)), "./neo-c.h", 1442, 1386)),key), come_pop_stackframe(), __exception_result_var_b129);
            }
            __result102__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result102__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_87;
void* right_value110;
char** keys_88;
void* right_value111;
struct sClass** items_89;
void* right_value112;
_Bool* item_existance_90;
int len_91;
char* __exception_result_var_b103;
char* it_94;
_Bool __exception_result_var_b104;
char* __exception_result_var_b107;
struct sClass* default_value_97;
void* __exception_result_var_b108;
struct sClass* __exception_result_var_b109;
struct sClass* it2_98;
unsigned int __exception_result_var_b110;
unsigned int hash_99;
int n_100;
_Bool _while_condtional16;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
int __exception_result_var_b111;
struct sClass* default_value_101;
struct sClass* __exception_result_var_b112;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_87, 0, sizeof(int));
right_value110 = (void*)0;
memset(&keys_88, 0, sizeof(char**));
right_value111 = (void*)0;
memset(&items_89, 0, sizeof(struct sClass**));
right_value112 = (void*)0;
memset(&item_existance_90, 0, sizeof(_Bool*));
memset(&len_91, 0, sizeof(int));
memset(&it_94, 0, sizeof(char*));
memset(&default_value_97, 0, sizeof(struct sClass*));
memset(&it2_98, 0, sizeof(struct sClass*));
memset(&hash_99, 0, sizeof(unsigned int));
memset(&n_100, 0, sizeof(int));
memset(&default_value_101, 0, sizeof(struct sClass*));
                    size_87=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1318, 1085)), "./neo-c.h", 1318, 1086))->size*10;
                    keys_88=(char**)come_increment_ref_count(((char**)(right_value110=(char**)come_calloc(1, sizeof(char*)*(1*(size_87)), "./neo-c.h", 1319, "char*%"))));
                    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_89=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value111=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_87)), "./neo-c.h", 1320, "sClass*%"))));
                    come_call_finalizer3(right_value111,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_90=(_Bool*)come_increment_ref_count(((_Bool*)(right_value112=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_87)), "./neo-c.h", 1321, "bool"))));
                    right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_91=0;
                    for(                    it_94=(come_push_stackframe("./neo-c.h", 1325, 1109),__exception_result_var_b103=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1087)), "./neo-c.h", 1325, 1088))), come_pop_stackframe(), __exception_result_var_b103);                    !(come_push_stackframe("./neo-c.h", 1325, 1118),__exception_result_var_b104=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1110)), "./neo-c.h", 1325, 1111))), come_pop_stackframe(), __exception_result_var_b104);                    it_94=(come_push_stackframe("./neo-c.h", 1325, 1147),__exception_result_var_b107=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1119)), "./neo-c.h", 1325, 1120))), come_pop_stackframe(), __exception_result_var_b107)                    ){
                        (come_push_stackframe("./neo-c.h", 1327, 1148),__exception_result_var_b108=memset(&default_value_97,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b108);
                        it2_98=(come_push_stackframe("./neo-c.h", 1328, 1151),__exception_result_var_b109=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1328, 1149)), "./neo-c.h", 1328, 1150)),it_94,default_value_97), come_pop_stackframe(), __exception_result_var_b109);
                        hash_99=(come_push_stackframe("./neo-c.h", 1329, 1154),__exception_result_var_b110=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_94, "./neo-c.h", 1329, 1152)), "./neo-c.h", 1329, 1153))), come_pop_stackframe(), __exception_result_var_b110)%size_87;
                        n_100=hash_99;
                        while(_while_condtional16=(_Bool)1,                        _while_condtional16) {
                            if(_if_conditional107=((_Bool*)come_null_check(item_existance_90, "./neo-c.h", 1333, 1155))[n_100],                            _if_conditional107) {
                                n_100++;
                                if(_if_conditional108=n_100>=size_87,                                _if_conditional108) {
                                    n_100=0;
                                }
                                else {
                                    if(_if_conditional109=n_100==hash_99,                                    _if_conditional109) {
                                        (come_push_stackframe("./neo-c.h", 1341, 1156),__exception_result_var_b111=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b111);
                                        (come_push_stackframe("./neo-c.h", 1342,1157),stackframe(),come_pop_stackframe());
                                        (come_push_stackframe("./neo-c.h", 1343,1158),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                ((_Bool*)come_null_check(item_existance_90, "./neo-c.h", 1347, 1159))[n_100]=(_Bool)1;
                                ((char**)come_null_check(keys_88, "./neo-c.h", 1348, 1160))[n_100]=it_94;
                                ((struct sClass**)come_null_check(items_89, "./neo-c.h", 1350, 1161))[n_100]=(come_push_stackframe("./neo-c.h", 1350, 1164),__exception_result_var_b112=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1350, 1162)), "./neo-c.h", 1350, 1163)),it_94,default_value_101), come_pop_stackframe(), __exception_result_var_b112);
                                len_91++;
                                break;
                            }
                        }
                    }
                    (come_push_stackframe("./neo-c.h", 1358,1167),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1358, 1165)), "./neo-c.h", 1358, 1166))->items),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1168)), "./neo-c.h", 1359, 1169))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1168)), "./neo-c.h", 1359, 1169))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (come_push_stackframe("./neo-c.h", 1360,1172),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1360, 1170)), "./neo-c.h", 1360, 1171))->keys),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1362, 1173)), "./neo-c.h", 1362, 1174))->keys=keys_88;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1363, 1175)), "./neo-c.h", 1363, 1176))->items=items_89;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1364, 1177)), "./neo-c.h", 1364, 1178))->item_existance=item_existance_90;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1366, 1179)), "./neo-c.h", 1366, 1180))->size=size_87;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1367, 1181)), "./neo-c.h", 1367, 1182))->len=len_91;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional103;
char* result_92;
void* __exception_result_var_b101;
char* __result83__;
_Bool _if_conditional104;
char* __result84__;
char* result_93;
void* __exception_result_var_b102;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(char*));
memset(&result_93, 0, sizeof(char*));
                        if(_if_conditional103=self==((void*)0),                        _if_conditional103) {
                            (come_push_stackframe("./neo-c.h", 1282, 1089),__exception_result_var_b101=memset(&result_92,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b101);
                            __result83__ = __result_obj__ = result_92;
                            return __result83__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1090)), "./neo-c.h", 1285, 1091))->key_list, "./neo-c.h", 1285, 1092)), "./neo-c.h", 1285, 1093))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1094)), "./neo-c.h", 1285, 1095))->key_list, "./neo-c.h", 1285, 1096)), "./neo-c.h", 1285, 1097))->head;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1287, 1098)), "./neo-c.h", 1287, 1099))->key_list, "./neo-c.h", 1287, 1100)), "./neo-c.h", 1287, 1101))->it) {
                            __result84__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1288, 1102)), "./neo-c.h", 1288, 1103))->key_list, "./neo-c.h", 1288, 1104)), "./neo-c.h", 1288, 1105))->it, "./neo-c.h", 1288, 1106)), "./neo-c.h", 1288, 1107))->item;
                            return __result84__;
                        }
                        (come_push_stackframe("./neo-c.h", 1292, 1108),__exception_result_var_b102=memset(&result_93,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b102);
                        __result85__ = __result_obj__ = result_93;
                        return __result85__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result86__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1112)), "./neo-c.h", 1314, 1113))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1114)), "./neo-c.h", 1314, 1115))->key_list, "./neo-c.h", 1314, 1116)), "./neo-c.h", 1314, 1117))->it==((void*)0);
                        return __result86__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional105;
char* result_95;
void* __exception_result_var_b105;
char* __result87__;
_Bool _if_conditional106;
char* __result88__;
char* result_96;
void* __exception_result_var_b106;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_95, 0, sizeof(char*));
memset(&result_96, 0, sizeof(char*));
                        if(_if_conditional105=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1297, 1121)), "./neo-c.h", 1297, 1122))->key_list, "./neo-c.h", 1297, 1123)), "./neo-c.h", 1297, 1124))->it==((void*)0),                        _if_conditional105) {
                            (come_push_stackframe("./neo-c.h", 1299, 1125),__exception_result_var_b105=memset(&result_95,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b105);
                            __result87__ = __result_obj__ = result_95;
                            return __result87__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1126)), "./neo-c.h", 1302, 1127))->key_list, "./neo-c.h", 1302, 1128)), "./neo-c.h", 1302, 1129))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1130)), "./neo-c.h", 1302, 1131))->key_list, "./neo-c.h", 1302, 1132)), "./neo-c.h", 1302, 1133))->it, "./neo-c.h", 1302, 1134)), "./neo-c.h", 1302, 1135))->next;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1304, 1136)), "./neo-c.h", 1304, 1137))->key_list, "./neo-c.h", 1304, 1138)), "./neo-c.h", 1304, 1139))->it) {
                            __result88__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1305, 1140)), "./neo-c.h", 1305, 1141))->key_list, "./neo-c.h", 1305, 1142)), "./neo-c.h", 1305, 1143))->it, "./neo-c.h", 1305, 1144)), "./neo-c.h", 1305, 1145))->item;
                            return __result88__;
                        }
                        (come_push_stackframe("./neo-c.h", 1309, 1146),__exception_result_var_b106=memset(&result_96,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b106);
                        __result89__ = __result_obj__ = result_96;
                        return __result89__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_104;
struct list_item$1charp* it_105;
_Bool _while_condtional18;
_Bool __exception_result_var_b115;
_Bool _if_conditional113;
struct list$1charp* __exception_result_var_b117;
struct list$1charp* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_104, 0, sizeof(int));
memset(&it_105, 0, sizeof(struct list_item$1charp*));
                                it2_104=0;
                                it_105=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 1202)), "./neo-c.h", 442, 1203))->head;
                                while(_while_condtional18=it_105!=((void*)0),                                _while_condtional18) {
                                    if(_if_conditional113=(come_push_stackframe("./neo-c.h", 444, 1208),__exception_result_var_b115=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_105, "./neo-c.h", 444, 1204)), "./neo-c.h", 444, 1205))->item, "./neo-c.h", 444, 1206)), "./neo-c.h", 444, 1207)),item), come_pop_stackframe(), __exception_result_var_b115),                                    _if_conditional113) {
                                        (come_push_stackframe("./neo-c.h", 445, 1280),__exception_result_var_b117=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 1209)), "./neo-c.h", 445, 1210)),it2_104,it2_104+1), come_pop_stackframe(), __exception_result_var_b117);
                                        break;
                                    }
                                    it2_104++;
                                    it_105=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_105, "./neo-c.h", 450, 1281)), "./neo-c.h", 450, 1282))->next;
                                }
                                __result93__ = __result_obj__ = self;
                                return __result93__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
int tmp_106;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
struct list$1charp* __result90__;
_Bool _if_conditional120;
struct list$1charp* __exception_result_var_b116;
_Bool _if_conditional121;
struct list_item$1charp* it_109;
int i_110;
_Bool _while_condtional20;
_Bool _if_conditional122;
struct list_item$1charp* prev_it_111;
_Bool _if_conditional123;
_Bool _if_conditional124;
struct list_item$1charp* it_112;
int i_113;
_Bool _while_condtional21;
_Bool _if_conditional125;
_Bool _if_conditional126;
struct list_item$1charp* prev_it_114;
struct list_item$1charp* it_115;
struct list_item$1charp* head_prev_it_116;
struct list_item$1charp* tail_it_117;
int i_118;
_Bool _while_condtional22;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
struct list_item$1charp* prev_it_119;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_106, 0, sizeof(int));
memset(&it_109, 0, sizeof(struct list_item$1charp*));
memset(&i_110, 0, sizeof(int));
memset(&prev_it_111, 0, sizeof(struct list_item$1charp*));
memset(&it_112, 0, sizeof(struct list_item$1charp*));
memset(&i_113, 0, sizeof(int));
memset(&prev_it_114, 0, sizeof(struct list_item$1charp*));
memset(&it_115, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_116, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_117, 0, sizeof(struct list_item$1charp*));
memset(&i_118, 0, sizeof(int));
memset(&prev_it_119, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional114=head<0,                                            _if_conditional114) {
                                                head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 1211)), "./neo-c.h", 458, 1212))->len;
                                            }
                                            if(_if_conditional115=tail<0,                                            _if_conditional115) {
                                                tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 1213)), "./neo-c.h", 461, 1214))->len+1;
                                            }
                                            if(_if_conditional116=head>tail,                                            _if_conditional116) {
                                                tmp_106=tail;
                                                tail=head;
                                                head=tmp_106;
                                            }
                                            if(_if_conditional117=head<0,                                            _if_conditional117) {
                                                head=0;
                                            }
                                            if(_if_conditional118=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 1215)), "./neo-c.h", 474, 1216))->len,                                            _if_conditional118) {
                                                tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 1217)), "./neo-c.h", 475, 1218))->len;
                                            }
                                            if(_if_conditional119=head==tail,                                            _if_conditional119) {
                                                __result90__ = __result_obj__ = self;
                                                return __result90__;
                                            }
                                            if(_if_conditional120=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 1219)), "./neo-c.h", 482, 1220))->len,                                            _if_conditional120) {
                                                (come_push_stackframe("./neo-c.h", 484, 1233),__exception_result_var_b116=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 1221)), "./neo-c.h", 484, 1222))), come_pop_stackframe(), __exception_result_var_b116);
                                            }
                                            else {
                                                if(_if_conditional121=head==0,                                                _if_conditional121) {
                                                    it_109=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 1234)), "./neo-c.h", 487, 1235))->head;
                                                    i_110=0;
                                                    while(_while_condtional20=it_109!=((void*)0),                                                    _while_condtional20) {
                                                        if(_if_conditional122=i_110<tail,                                                        _if_conditional122) {
                                                            prev_it_111=it_109;
                                                            it_109=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_109, "./neo-c.h", 493, 1236)), "./neo-c.h", 493, 1237))->next;
                                                            i_110++;
                                                            come_call_finalizer3(prev_it_111,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 1238)), "./neo-c.h", 498, 1239))->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional123=i_110==tail,                                                            _if_conditional123) {
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 1240)), "./neo-c.h", 501, 1241))->head=it_109;
                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 1242)), "./neo-c.h", 502, 1243))->head, "./neo-c.h", 502, 1244)), "./neo-c.h", 502, 1245))->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_109=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_109, "./neo-c.h", 506, 1246)), "./neo-c.h", 506, 1247))->next;
                                                                i_110++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional124=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 1248)), "./neo-c.h", 511, 1249))->len,                                                    _if_conditional124) {
                                                        it_112=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 1250)), "./neo-c.h", 512, 1251))->head;
                                                        i_113=0;
                                                        while(_while_condtional21=it_112!=((void*)0),                                                        _while_condtional21) {
                                                            if(_if_conditional125=i_113==head,                                                            _if_conditional125) {
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 1252)), "./neo-c.h", 516, 1253))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_112, "./neo-c.h", 516, 1254)), "./neo-c.h", 516, 1255))->prev;
                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 1256)), "./neo-c.h", 517, 1257))->tail, "./neo-c.h", 517, 1258)), "./neo-c.h", 517, 1259))->next=((void*)0);
                                                            }
                                                            if(_if_conditional126=i_113>=head,                                                            _if_conditional126) {
                                                                prev_it_114=it_112;
                                                                it_112=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_112, "./neo-c.h", 523, 1260)), "./neo-c.h", 523, 1261))->next;
                                                                i_113++;
                                                                come_call_finalizer3(prev_it_114,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 1262)), "./neo-c.h", 528, 1263))->len--;
                                                            }
                                                            else {
                                                                it_112=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_112, "./neo-c.h", 531, 1264)), "./neo-c.h", 531, 1265))->next;
                                                                i_113++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_115=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 1266)), "./neo-c.h", 537, 1267))->head;
                                                        head_prev_it_116=((void*)0);
                                                        tail_it_117=((void*)0);
                                                        i_118=0;
                                                        while(_while_condtional22=it_115!=((void*)0),                                                        _while_condtional22) {
                                                            if(_if_conditional127=i_118==head,                                                            _if_conditional127) {
                                                                head_prev_it_116=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_115, "./neo-c.h", 546, 1268)), "./neo-c.h", 546, 1269))->prev;
                                                            }
                                                            if(_if_conditional128=i_118==tail,                                                            _if_conditional128) {
                                                                tail_it_117=it_115;
                                                            }
                                                            if(_if_conditional129=i_118>=head&&i_118<tail,                                                            _if_conditional129) {
                                                                prev_it_119=it_115;
                                                                it_115=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_115, "./neo-c.h", 556, 1270)), "./neo-c.h", 556, 1271))->next;
                                                                i_118++;
                                                                come_call_finalizer3(prev_it_119,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 1272)), "./neo-c.h", 561, 1273))->len--;
                                                            }
                                                            else {
                                                                it_115=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_115, "./neo-c.h", 564, 1274)), "./neo-c.h", 564, 1275))->next;
                                                                i_118++;
                                                            }
                                                        }
                                                        if(_if_conditional130=head_prev_it_116!=((void*)0),                                                        _if_conditional130) {
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_116, "./neo-c.h", 570, 1276)), "./neo-c.h", 570, 1277))->next=tail_it_117;
                                                        }
                                                        if(_if_conditional131=tail_it_117!=((void*)0),                                                        _if_conditional131) {
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_117, "./neo-c.h", 573, 1278)), "./neo-c.h", 573, 1279))->prev=head_prev_it_116;
                                                        }
                                                    }
                                                }
                                            }
                                            __result92__ = __result_obj__ = self;
                                            return __result92__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_107;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_108;
struct list$1charp* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_107, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_108, 0, sizeof(struct list_item$1charp*));
                                                    it_107=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 1223)), "./neo-c.h", 426, 1224))->head;
                                                    while(_while_condtional19=it_107!=((void*)0),                                                    _while_condtional19) {
                                                        prev_it_108=it_107;
                                                        it_107=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_107, "./neo-c.h", 429, 1225)), "./neo-c.h", 429, 1226))->next;
                                                        come_call_finalizer3(prev_it_108,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 1227)), "./neo-c.h", 433, 1228))->head=((void*)0);
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 1229)), "./neo-c.h", 434, 1230))->tail=((void*)0);
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 1231)), "./neo-c.h", 436, 1232))->len=0;
                                                    __result91__ = __result_obj__ = self;
                                                    return __result91__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional137;
char* result_121;
void* __exception_result_var_b121;
char* __result94__;
_Bool _if_conditional138;
char* __result95__;
char* result_122;
void* __exception_result_var_b122;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(char*));
memset(&result_122, 0, sizeof(char*));
                if(_if_conditional137=self==((void*)0),                _if_conditional137) {
                    (come_push_stackframe("./neo-c.h", 284, 1339),__exception_result_var_b121=memset(&result_121,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b121);
                    __result94__ = __result_obj__ = result_121;
                    return __result94__;
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1340)), "./neo-c.h", 287, 1341))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1342)), "./neo-c.h", 287, 1343))->head;
                if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 1344)), "./neo-c.h", 289, 1345))->it) {
                    __result95__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 1346)), "./neo-c.h", 290, 1347))->it, "./neo-c.h", 290, 1348)), "./neo-c.h", 290, 1349))->item;
                    return __result95__;
                }
                (come_push_stackframe("./neo-c.h", 294, 1350),__exception_result_var_b122=memset(&result_122,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b122);
                __result96__ = __result_obj__ = result_122;
                return __result96__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                __result97__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 1356)), "./neo-c.h", 317, 1357))->it==((void*)0);
                return __result97__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional139;
char* result_124;
void* __exception_result_var_b125;
char* __result98__;
_Bool _if_conditional140;
char* __result99__;
char* result_125;
void* __exception_result_var_b126;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                if(_if_conditional139=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 1363)), "./neo-c.h", 299, 1364))->it==((void*)0),                _if_conditional139) {
                    (come_push_stackframe("./neo-c.h", 301, 1365),__exception_result_var_b125=memset(&result_124,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b125);
                    __result98__ = __result_obj__ = result_124;
                    return __result98__;
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1366)), "./neo-c.h", 305, 1367))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1368)), "./neo-c.h", 305, 1369))->it, "./neo-c.h", 305, 1370)), "./neo-c.h", 305, 1371))->next;
                if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 1372)), "./neo-c.h", 307, 1373))->it) {
                    __result99__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 1374)), "./neo-c.h", 308, 1375))->it, "./neo-c.h", 308, 1376)), "./neo-c.h", 308, 1377))->item;
                    return __result99__;
                }
                (come_push_stackframe("./neo-c.h", 312, 1378),__exception_result_var_b126=memset(&result_125,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b126);
                __result100__ = __result_obj__ = result_125;
                return __result100__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional143;
void* right_value113;
struct list_item$1charp* litem_126;
_Bool _if_conditional144;
void* right_value114;
struct list_item$1charp* litem_127;
void* right_value115;
struct list_item$1charp* litem_128;
struct list$1charp* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
memset(&litem_126, 0, sizeof(struct list_item$1charp*));
right_value114 = (void*)0;
memset(&litem_127, 0, sizeof(struct list_item$1charp*));
right_value115 = (void*)0;
memset(&litem_128, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional143=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 1387)), "./neo-c.h", 222, 1388))->len==0,                    _if_conditional143) {
                        litem_126=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value113=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                        come_call_finalizer3(right_value113,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_126, "./neo-c.h", 225, 1389)), "./neo-c.h", 225, 1390))->prev=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_126, "./neo-c.h", 226, 1391)), "./neo-c.h", 226, 1392))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_126, "./neo-c.h", 227, 1393)), "./neo-c.h", 227, 1394))->item=item;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 1395)), "./neo-c.h", 229, 1396))->tail=litem_126;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 1397)), "./neo-c.h", 230, 1398))->head=litem_126;
                    }
                    else {
                        if(_if_conditional144=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 1399)), "./neo-c.h", 232, 1400))->len==1,                        _if_conditional144) {
                            litem_127=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value114=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                            come_call_finalizer3(right_value114,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_127, "./neo-c.h", 235, 1401)), "./neo-c.h", 235, 1402))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 1403)), "./neo-c.h", 235, 1404))->head;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_127, "./neo-c.h", 236, 1405)), "./neo-c.h", 236, 1406))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_127, "./neo-c.h", 237, 1407)), "./neo-c.h", 237, 1408))->item=item;
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 1409)), "./neo-c.h", 239, 1410))->tail=litem_127;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 1411)), "./neo-c.h", 240, 1412))->head, "./neo-c.h", 240, 1413)), "./neo-c.h", 240, 1414))->next=litem_127;
                        }
                        else {
                            litem_128=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value115=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                            come_call_finalizer3(right_value115,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_128, "./neo-c.h", 245, 1415)), "./neo-c.h", 245, 1416))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 1417)), "./neo-c.h", 245, 1418))->tail;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_128, "./neo-c.h", 246, 1419)), "./neo-c.h", 246, 1420))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_128, "./neo-c.h", 247, 1421)), "./neo-c.h", 247, 1422))->item=item;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 1423)), "./neo-c.h", 249, 1424))->tail, "./neo-c.h", 249, 1425)), "./neo-c.h", 249, 1426))->next=litem_128;
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 1427)), "./neo-c.h", 250, 1428))->tail=litem_128;
                        }
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 1429)), "./neo-c.h", 253, 1430))->len++;
                    __result101__ = __result_obj__ = self;
                    return __result101__;
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional145;
struct sClass* __result103__;
void* right_value116;
struct sClass* result_129;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
char* __exception_result_var_b132;
void* right_value117;
char* __dec_obj21;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b163;
void* right_value165;
struct list$1tuple2$2charphsTypephph* __dec_obj52;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
char* __exception_result_var_b164;
void* right_value166;
char* __dec_obj53;
_Bool _if_conditional248;
_Bool _if_conditional249;
char* __exception_result_var_b165;
void* right_value167;
char* __dec_obj54;
struct sClass* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
memset(&result_129, 0, sizeof(struct sClass*));
right_value117 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
            if(_if_conditional145=self==(void*)0,            _if_conditional145) {
                __result103__ = __result_obj__ = (void*)0;
                return __result103__;
            }
            result_129=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value116=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            come_call_finalizer3(right_value116,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional146=self!=((void*)0),            _if_conditional146) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 4, 1438)), "sClass_clone", 4, 1439))->mStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 4, 1440)), "sClass_clone", 4, 1441))->mStruct;
            }
            if(_if_conditional147=self!=((void*)0),            _if_conditional147) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 5, 1442)), "sClass_clone", 5, 1443))->mFloat=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 5, 1444)), "sClass_clone", 5, 1445))->mFloat;
            }
            if(_if_conditional148=self!=((void*)0),            _if_conditional148) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 6, 1446)), "sClass_clone", 6, 1447))->mUnion=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 6, 1448)), "sClass_clone", 6, 1449))->mUnion;
            }
            if(_if_conditional149=self!=((void*)0),            _if_conditional149) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 7, 1450)), "sClass_clone", 7, 1451))->mGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 7, 1452)), "sClass_clone", 7, 1453))->mGenerics;
            }
            if(_if_conditional150=self!=((void*)0),            _if_conditional150) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 8, 1454)), "sClass_clone", 8, 1455))->mMethodGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 8, 1456)), "sClass_clone", 8, 1457))->mMethodGenerics;
            }
            if(_if_conditional151=self!=((void*)0),            _if_conditional151) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 9, 1458)), "sClass_clone", 9, 1459))->mEnum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 9, 1460)), "sClass_clone", 9, 1461))->mEnum;
            }
            if(_if_conditional152=self!=((void*)0),            _if_conditional152) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 10, 1462)), "sClass_clone", 10, 1463))->mProtocol=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 10, 1464)), "sClass_clone", 10, 1465))->mProtocol;
            }
            if(_if_conditional153=self!=((void*)0),            _if_conditional153) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 11, 1466)), "sClass_clone", 11, 1467))->mNumber=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 11, 1468)), "sClass_clone", 11, 1469))->mNumber;
            }
            if(_if_conditional154=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 1470)), "sClass_clone", 12, 1471))->mName!=((void*)0),            _if_conditional154) {
                __dec_obj21=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 12, 1472)), "sClass_clone", 12, 1473))->mName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 12, 1472)), "sClass_clone", 12, 1473))->mName=(char*)come_increment_ref_count(((char*)(right_value117=(come_push_stackframe("sClass_clone", 12, 1476),__exception_result_var_b132=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 1474)), "sClass_clone", 12, 1475))->mName), come_pop_stackframe(), __exception_result_var_b132))));
                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional155=self!=((void*)0),            _if_conditional155) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 13, 1477)), "sClass_clone", 13, 1478))->mGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 13, 1479)), "sClass_clone", 13, 1480))->mGenericsNum;
            }
            if(_if_conditional156=self!=((void*)0),            _if_conditional156) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 14, 1481)), "sClass_clone", 14, 1482))->mMethodGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 14, 1483)), "sClass_clone", 14, 1484))->mMethodGenericsNum;
            }
            if(_if_conditional157=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 1485)), "sClass_clone", 15, 1486))->mFields!=((void*)0),            _if_conditional157) {
                __dec_obj52=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 15, 1487)), "sClass_clone", 15, 1488))->mFields;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 15, 1487)), "sClass_clone", 15, 1488))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value165=(come_push_stackframe("sClass_clone", 15, 2089),__exception_result_var_b163=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 1489)), "sClass_clone", 15, 1490))->mFields), come_pop_stackframe(), __exception_result_var_b163))));
                come_call_finalizer3(__dec_obj52,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional245=self!=((void*)0),            _if_conditional245) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 16, 2094)), "sClass_clone", 16, 2095))->mOutputed=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 16, 2096)), "sClass_clone", 16, 2097))->mOutputed;
            }
            if(_if_conditional246=self!=((void*)0),            _if_conditional246) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 17, 2098)), "sClass_clone", 17, 2099))->mOutputed2=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 17, 2100)), "sClass_clone", 17, 2101))->mOutputed2;
            }
            if(_if_conditional247=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 2102)), "sClass_clone", 18, 2103))->mDeclareSName!=((void*)0),            _if_conditional247) {
                __dec_obj53=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 18, 2104)), "sClass_clone", 18, 2105))->mDeclareSName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 18, 2104)), "sClass_clone", 18, 2105))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value166=(come_push_stackframe("sClass_clone", 18, 2108),__exception_result_var_b164=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 2106)), "sClass_clone", 18, 2107))->mDeclareSName), come_pop_stackframe(), __exception_result_var_b164))));
                __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional248=self!=((void*)0),            _if_conditional248) {
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 19, 2109)), "sClass_clone", 19, 2110))->mNobodyStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 19, 2111)), "sClass_clone", 19, 2112))->mNobodyStruct;
            }
            if(_if_conditional249=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 2113)), "sClass_clone", 20, 2114))->mParentClassName!=((void*)0),            _if_conditional249) {
                __dec_obj54=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 20, 2115)), "sClass_clone", 20, 2116))->mParentClassName;
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_129, "sClass_clone", 20, 2115)), "sClass_clone", 20, 2116))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value167=(come_push_stackframe("sClass_clone", 20, 2119),__exception_result_var_b165=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 2117)), "sClass_clone", 20, 2118))->mParentClassName), come_pop_stackframe(), __exception_result_var_b165))));
                __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result130__ = __result_obj__ = result_129;
            come_call_finalizer3(result_129,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result130__;
            come_call_finalizer3(result_129,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional158;
struct list$1tuple2$2charphsTypephph* __result104__;
void* right_value118;
void* right_value119;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b133;
struct list$1tuple2$2charphsTypephph* result_130;
struct list_item$1tuple2$2charphsTypephph* it_131;
_Bool _while_condtional23;
struct tuple2$2charphsTypeph* __exception_result_var_b161;
void* right_value164;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b162;
struct list$1tuple2$2charphsTypephph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_130, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_131, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value164 = (void*)0;
                    if(_if_conditional158=self==((void*)0),                    _if_conditional158) {
                        __result104__ = __result_obj__ = ((void*)0);
                        return __result104__;
                    }
                    result_130=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1499),__exception_result_var_b133=((struct list$1tuple2$2charphsTypephph*)(right_value119=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value118=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsTypephph"))), "./neo-c.h", 139, 1491)), "./neo-c.h", 139, 1492)))))), come_pop_stackframe(), __exception_result_var_b133));
                    come_call_finalizer3(right_value118,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value119,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_131=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 141, 1500)), "./neo-c.h", 141, 1501))->head;
                    while(_while_condtional23=it_131!=((void*)0),                    _while_condtional23) {
                        (come_push_stackframe("./neo-c.h", 143, 2086),__exception_result_var_b162=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_130, "./neo-c.h", 143, 1502)), "./neo-c.h", 143, 1503)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value164=(come_push_stackframe("./neo-c.h", 143, 2085),__exception_result_var_b161=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_131, "./neo-c.h", 143, 1572)), "./neo-c.h", 143, 1573))->item), come_pop_stackframe(), __exception_result_var_b161))))), come_pop_stackframe(), __exception_result_var_b162);
                        come_call_finalizer3(right_value164,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_131=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_131, "./neo-c.h", 145, 2087)), "./neo-c.h", 145, 2088))->next;
                    }
                    __result129__ = __result_obj__ = result_130;
                    come_call_finalizer3(result_130,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result129__;
                    come_call_finalizer3(result_130,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 101, 1493)), "./neo-c.h", 101, 1494))->head=((void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 102, 1495)), "./neo-c.h", 102, 1496))->tail=((void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 103, 1497)), "./neo-c.h", 103, 1498))->len=0;
                        __result105__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result105__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional159;
void* right_value120;
struct list_item$1tuple2$2charphsTypephph* litem_132;
struct tuple2$2charphsTypeph* __dec_obj22;
_Bool _if_conditional162;
void* right_value121;
struct list_item$1tuple2$2charphsTypephph* litem_133;
struct tuple2$2charphsTypeph* __dec_obj23;
void* right_value122;
struct list_item$1tuple2$2charphsTypephph* litem_134;
struct tuple2$2charphsTypeph* __dec_obj24;
struct list$1tuple2$2charphsTypephph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value121 = (void*)0;
memset(&litem_133, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value122 = (void*)0;
memset(&litem_134, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(_if_conditional159=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 152, 1504)), "./neo-c.h", 152, 1505))->len==0,                            _if_conditional159) {
                                litem_132=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value120=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value120,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./neo-c.h", 155, 1506)), "./neo-c.h", 155, 1507))->prev=((void*)0);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./neo-c.h", 156, 1508)), "./neo-c.h", 156, 1509))->next=((void*)0);
                                __dec_obj22=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./neo-c.h", 157, 1510)), "./neo-c.h", 157, 1511))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./neo-c.h", 157, 1510)), "./neo-c.h", 157, 1511))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj22,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 159, 1520)), "./neo-c.h", 159, 1521))->tail=litem_132;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 160, 1522)), "./neo-c.h", 160, 1523))->head=litem_132;
                            }
                            else {
                                if(_if_conditional162=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 162, 1524)), "./neo-c.h", 162, 1525))->len==1,                                _if_conditional162) {
                                    litem_133=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value121=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value121,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_133, "./neo-c.h", 165, 1526)), "./neo-c.h", 165, 1527))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 165, 1528)), "./neo-c.h", 165, 1529))->head;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_133, "./neo-c.h", 166, 1530)), "./neo-c.h", 166, 1531))->next=((void*)0);
                                    __dec_obj23=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_133, "./neo-c.h", 167, 1532)), "./neo-c.h", 167, 1533))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_133, "./neo-c.h", 167, 1532)), "./neo-c.h", 167, 1533))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj23,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 169, 1542)), "./neo-c.h", 169, 1543))->tail=litem_133;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 170, 1544)), "./neo-c.h", 170, 1545))->head, "./neo-c.h", 170, 1546)), "./neo-c.h", 170, 1547))->next=litem_133;
                                }
                                else {
                                    litem_134=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value122=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(right_value122,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_134, "./neo-c.h", 175, 1548)), "./neo-c.h", 175, 1549))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 175, 1550)), "./neo-c.h", 175, 1551))->tail;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_134, "./neo-c.h", 176, 1552)), "./neo-c.h", 176, 1553))->next=((void*)0);
                                    __dec_obj24=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_134, "./neo-c.h", 177, 1554)), "./neo-c.h", 177, 1555))->item;
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_134, "./neo-c.h", 177, 1554)), "./neo-c.h", 177, 1555))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 179, 1564)), "./neo-c.h", 179, 1565))->tail, "./neo-c.h", 179, 1566)), "./neo-c.h", 179, 1567))->next=litem_134;
                                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 180, 1568)), "./neo-c.h", 180, 1569))->tail=litem_134;
                                }
                            }
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 183, 1570)), "./neo-c.h", 183, 1571))->len++;
                            __result106__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result106__;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional165;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional165=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1556)), "tuple2$2charphsTypephp_finalize", 0, 1557))->v1!=((void*)0),                                        _if_conditional165) {
                                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1558)), "tuple2$2charphsTypephp_finalize", 0, 1559))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1558)), "tuple2$2charphsTypephp_finalize", 0, 1559))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional166=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 1560)), "tuple2$2charphsTypephp_finalize", 1, 1561))->v2!=((void*)0),                                        _if_conditional166) {
                                            come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 1562)), "tuple2$2charphsTypephp_finalize", 1, 1563))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional167;
struct tuple2$2charphsTypeph* __result107__;
void* right_value123;
struct tuple2$2charphsTypeph* result_135;
_Bool _if_conditional170;
char* __exception_result_var_b134;
void* right_value124;
char* __dec_obj25;
_Bool _if_conditional171;
struct sType* __exception_result_var_b160;
void* right_value163;
struct sType* __dec_obj51;
struct tuple2$2charphsTypeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_135, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value124 = (void*)0;
right_value163 = (void*)0;
                            if(_if_conditional167=self==(void*)0,                            _if_conditional167) {
                                __result107__ = __result_obj__ = (void*)0;
                                return __result107__;
                            }
                            result_135=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value123=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            come_call_finalizer3(right_value123,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional170=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 1582)), "tuple2$2charphsTypephp_clone", 4, 1583))->v1!=((void*)0),                            _if_conditional170) {
                                __dec_obj25=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_135, "tuple2$2charphsTypephp_clone", 4, 1584)), "tuple2$2charphsTypephp_clone", 4, 1585))->v1;
                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_135, "tuple2$2charphsTypephp_clone", 4, 1584)), "tuple2$2charphsTypephp_clone", 4, 1585))->v1=(char*)come_increment_ref_count(((char*)(right_value124=(come_push_stackframe("tuple2$2charphsTypephp_clone", 4, 1588),__exception_result_var_b134=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 1586)), "tuple2$2charphsTypephp_clone", 4, 1587))->v1), come_pop_stackframe(), __exception_result_var_b134))));
                                __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional171=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 1589)), "tuple2$2charphsTypephp_clone", 5, 1590))->v2!=((void*)0),                            _if_conditional171) {
                                __dec_obj51=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_135, "tuple2$2charphsTypephp_clone", 5, 1591)), "tuple2$2charphsTypephp_clone", 5, 1592))->v2;
                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_135, "tuple2$2charphsTypephp_clone", 5, 1591)), "tuple2$2charphsTypephp_clone", 5, 1592))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(come_push_stackframe("tuple2$2charphsTypephp_clone", 5, 2084),__exception_result_var_b160=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 1593)), "tuple2$2charphsTypephp_clone", 5, 1594))->v2), come_pop_stackframe(), __exception_result_var_b160))));
                                come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            __result128__ = __result_obj__ = result_135;
                            come_call_finalizer3(result_135,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result128__;
                            come_call_finalizer3(result_135,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional168;
_Bool _if_conditional169;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional168=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 1574)), "tuple2$2charphsTypeph_finalize", 0, 1575))->v1!=((void*)0),                                _if_conditional168) {
                                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 1576)), "tuple2$2charphsTypeph_finalize", 0, 1577))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 1576)), "tuple2$2charphsTypeph_finalize", 0, 1577))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional169=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 1578)), "tuple2$2charphsTypeph_finalize", 1, 1579))->v2!=((void*)0),                                _if_conditional169) {
                                    come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 1580)), "tuple2$2charphsTypeph_finalize", 1, 1581))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional172;
struct sType* __result108__;
void* right_value125;
struct sType* result_136;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct list$1sTypeph* __exception_result_var_b138;
void* right_value132;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional178;
struct tuple1$1sTypeph* __exception_result_var_b140;
void* right_value135;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional182;
struct tuple1$1sTypeph* __exception_result_var_b142;
void* right_value138;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional185;
char* __exception_result_var_b143;
void* right_value139;
char* __dec_obj34;
_Bool _if_conditional186;
struct list$1sTypeph* __exception_result_var_b144;
void* right_value140;
struct list$1sTypeph* __dec_obj35;
_Bool _if_conditional187;
struct list$1sNodeph* __exception_result_var_b148;
void* right_value147;
struct list$1sNodeph* __dec_obj39;
_Bool _if_conditional191;
_Bool _if_conditional192;
struct list$1sTypeph* __exception_result_var_b149;
void* right_value148;
struct list$1sTypeph* __dec_obj40;
_Bool _if_conditional193;
struct list$1charph* __exception_result_var_b153;
void* right_value155;
struct list$1charph* __dec_obj44;
_Bool _if_conditional197;
struct tuple1$1sTypeph* __exception_result_var_b155;
void* right_value158;
struct tuple1$1sTypeph* __dec_obj46;
_Bool _if_conditional200;
_Bool _if_conditional201;
struct sNode* __exception_result_var_b156;
void* right_value159;
struct sNode* __dec_obj47;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
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
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct sNode* __exception_result_var_b157;
void* right_value160;
struct sNode* __dec_obj48;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
char* __exception_result_var_b158;
void* right_value161;
char* __dec_obj49;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
char* __exception_result_var_b159;
void* right_value162;
char* __dec_obj50;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
struct sType* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_136, 0, sizeof(struct sType*));
right_value132 = (void*)0;
right_value135 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value155 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
                                    if(_if_conditional172=self==(void*)0,                                    _if_conditional172) {
                                        __result108__ = __result_obj__ = (void*)0;
                                        return __result108__;
                                    }
                                    result_136=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    come_call_finalizer3(right_value125,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional173=self!=((void*)0),                                    _if_conditional173) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 4, 1595)), "sType_clone", 4, 1596))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 1597)), "sType_clone", 4, 1598))->mClass;
                                    }
                                    if(_if_conditional174=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 1599)), "sType_clone", 5, 1600))->mMultipleTypes!=((void*)0),                                    _if_conditional174) {
                                        __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 5, 1601)), "sType_clone", 5, 1602))->mMultipleTypes;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 5, 1601)), "sType_clone", 5, 1602))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=(come_push_stackframe("sType_clone", 5, 1668),__exception_result_var_b138=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 1603)), "sType_clone", 5, 1604))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b138))));
                                        come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value132,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional178=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1673)), "sType_clone", 6, 1674))->mNoSolvedGenericsType!=((void*)0),                                    _if_conditional178) {
                                        __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 6, 1675)), "sType_clone", 6, 1676))->mNoSolvedGenericsType;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 6, 1675)), "sType_clone", 6, 1676))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value135=(come_push_stackframe("sType_clone", 6, 1690),__exception_result_var_b140=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1677)), "sType_clone", 6, 1678))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b140))));
                                        come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value135,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional182=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1691)), "sType_clone", 7, 1692))->mOriginalLoadVarType!=((void*)0),                                    _if_conditional182) {
                                        __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 7, 1693)), "sType_clone", 7, 1694))->mOriginalLoadVarType;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 7, 1693)), "sType_clone", 7, 1694))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value138=(come_push_stackframe("sType_clone", 7, 1704),__exception_result_var_b142=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1695)), "sType_clone", 7, 1696))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b142))));
                                        come_call_finalizer3(__dec_obj33,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value138,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional185=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1705)), "sType_clone", 8, 1706))->mGenericsName!=((void*)0),                                    _if_conditional185) {
                                        __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 8, 1707)), "sType_clone", 8, 1708))->mGenericsName;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 8, 1707)), "sType_clone", 8, 1708))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value139=(come_push_stackframe("sType_clone", 8, 1711),__exception_result_var_b143=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1709)), "sType_clone", 8, 1710))->mGenericsName), come_pop_stackframe(), __exception_result_var_b143))));
                                        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional186=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1712)), "sType_clone", 9, 1713))->mGenericsTypes!=((void*)0),                                    _if_conditional186) {
                                        __dec_obj35=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 9, 1714)), "sType_clone", 9, 1715))->mGenericsTypes;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 9, 1714)), "sType_clone", 9, 1715))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value140=(come_push_stackframe("sType_clone", 9, 1718),__exception_result_var_b144=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1716)), "sType_clone", 9, 1717))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b144))));
                                        come_call_finalizer3(__dec_obj35,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value140,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional187=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1719)), "sType_clone", 10, 1720))->mArrayNum!=((void*)0),                                    _if_conditional187) {
                                        __dec_obj39=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 10, 1721)), "sType_clone", 10, 1722))->mArrayNum;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 10, 1721)), "sType_clone", 10, 1722))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value147=(come_push_stackframe("sType_clone", 10, 1788),__exception_result_var_b148=list$1sNodeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1723)), "sType_clone", 10, 1724))->mArrayNum), come_pop_stackframe(), __exception_result_var_b148))));
                                        come_call_finalizer3(__dec_obj39,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value147,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional191=self!=((void*)0),                                    _if_conditional191) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 11, 1793)), "sType_clone", 11, 1794))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 1795)), "sType_clone", 11, 1796))->mOmitArrayNum;
                                    }
                                    if(_if_conditional192=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1797)), "sType_clone", 12, 1798))->mParamTypes!=((void*)0),                                    _if_conditional192) {
                                        __dec_obj40=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 12, 1799)), "sType_clone", 12, 1800))->mParamTypes;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 12, 1799)), "sType_clone", 12, 1800))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value148=(come_push_stackframe("sType_clone", 12, 1803),__exception_result_var_b149=list$1sTypeph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1801)), "sType_clone", 12, 1802))->mParamTypes), come_pop_stackframe(), __exception_result_var_b149))));
                                        come_call_finalizer3(__dec_obj40,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value148,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional193=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1804)), "sType_clone", 13, 1805))->mParamNames!=((void*)0),                                    _if_conditional193) {
                                        __dec_obj44=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 13, 1806)), "sType_clone", 13, 1807))->mParamNames;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 13, 1806)), "sType_clone", 13, 1807))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value155=(come_push_stackframe("sType_clone", 13, 1873),__exception_result_var_b153=list$1charph_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1808)), "sType_clone", 13, 1809))->mParamNames), come_pop_stackframe(), __exception_result_var_b153))));
                                        come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value155,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional197=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1878)), "sType_clone", 14, 1879))->mResultType!=((void*)0),                                    _if_conditional197) {
                                        __dec_obj46=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 14, 1880)), "sType_clone", 14, 1881))->mResultType;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 14, 1880)), "sType_clone", 14, 1881))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value158=(come_push_stackframe("sType_clone", 14, 1891),__exception_result_var_b155=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1882)), "sType_clone", 14, 1883))->mResultType), come_pop_stackframe(), __exception_result_var_b155))));
                                        come_call_finalizer3(__dec_obj46,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value158,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional200=self!=((void*)0),                                    _if_conditional200) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 15, 1892)), "sType_clone", 15, 1893))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1894)), "sType_clone", 15, 1895))->mVarArgs;
                                    }
                                    if(_if_conditional201=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1896)), "sType_clone", 16, 1897))->mAlignas!=((void*)0),                                    _if_conditional201) {
                                        __dec_obj47=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 16, 1898)), "sType_clone", 16, 1899))->mAlignas;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 16, 1898)), "sType_clone", 16, 1899))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=(come_push_stackframe("sType_clone", 16, 1902),__exception_result_var_b156=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1900)), "sType_clone", 16, 1901))->mAlignas), come_pop_stackframe(), __exception_result_var_b156))));
                                        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value159) { right_value159 = come_decrement_ref_count2(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional202=self!=((void*)0),                                    _if_conditional202) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 17, 1903)), "sType_clone", 17, 1904))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1905)), "sType_clone", 17, 1906))->mUnsigned;
                                    }
                                    if(_if_conditional203=self!=((void*)0),                                    _if_conditional203) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 18, 1907)), "sType_clone", 18, 1908))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1909)), "sType_clone", 18, 1910))->mShort;
                                    }
                                    if(_if_conditional204=self!=((void*)0),                                    _if_conditional204) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 19, 1911)), "sType_clone", 19, 1912))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1913)), "sType_clone", 19, 1914))->mLong;
                                    }
                                    if(_if_conditional205=self!=((void*)0),                                    _if_conditional205) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 20, 1915)), "sType_clone", 20, 1916))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1917)), "sType_clone", 20, 1918))->mLongLong;
                                    }
                                    if(_if_conditional206=self!=((void*)0),                                    _if_conditional206) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 21, 1919)), "sType_clone", 21, 1920))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1921)), "sType_clone", 21, 1922))->mConstant;
                                    }
                                    if(_if_conditional207=self!=((void*)0),                                    _if_conditional207) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 22, 1923)), "sType_clone", 22, 1924))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1925)), "sType_clone", 22, 1926))->mRegister;
                                    }
                                    if(_if_conditional208=self!=((void*)0),                                    _if_conditional208) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 23, 1927)), "sType_clone", 23, 1928))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1929)), "sType_clone", 23, 1930))->mVolatile;
                                    }
                                    if(_if_conditional209=self!=((void*)0),                                    _if_conditional209) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 24, 1931)), "sType_clone", 24, 1932))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1933)), "sType_clone", 24, 1934))->mStatic;
                                    }
                                    if(_if_conditional210=self!=((void*)0),                                    _if_conditional210) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 25, 1935)), "sType_clone", 25, 1936))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1937)), "sType_clone", 25, 1938))->mUniq;
                                    }
                                    if(_if_conditional211=self!=((void*)0),                                    _if_conditional211) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 26, 1939)), "sType_clone", 26, 1940))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1941)), "sType_clone", 26, 1942))->mRecord;
                                    }
                                    if(_if_conditional212=self!=((void*)0),                                    _if_conditional212) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 27, 1943)), "sType_clone", 27, 1944))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1945)), "sType_clone", 27, 1946))->mExtern;
                                    }
                                    if(_if_conditional213=self!=((void*)0),                                    _if_conditional213) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 28, 1947)), "sType_clone", 28, 1948))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1949)), "sType_clone", 28, 1950))->mRestrict;
                                    }
                                    if(_if_conditional214=self!=((void*)0),                                    _if_conditional214) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 29, 1951)), "sType_clone", 29, 1952))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1953)), "sType_clone", 29, 1954))->mImmutable;
                                    }
                                    if(_if_conditional215=self!=((void*)0),                                    _if_conditional215) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 30, 1955)), "sType_clone", 30, 1956))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1957)), "sType_clone", 30, 1958))->mHeap;
                                    }
                                    if(_if_conditional216=self!=((void*)0),                                    _if_conditional216) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 31, 1959)), "sType_clone", 31, 1960))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1961)), "sType_clone", 31, 1962))->mDummyHeap;
                                    }
                                    if(_if_conditional217=self!=((void*)0),                                    _if_conditional217) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 32, 1963)), "sType_clone", 32, 1964))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1965)), "sType_clone", 32, 1966))->mDelegate;
                                    }
                                    if(_if_conditional218=self!=((void*)0),                                    _if_conditional218) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 33, 1967)), "sType_clone", 33, 1968))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1969)), "sType_clone", 33, 1970))->mShare;
                                    }
                                    if(_if_conditional219=self!=((void*)0),                                    _if_conditional219) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 34, 1971)), "sType_clone", 34, 1972))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1973)), "sType_clone", 34, 1974))->mClone;
                                    }
                                    if(_if_conditional220=self!=((void*)0),                                    _if_conditional220) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 35, 1975)), "sType_clone", 35, 1976))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1977)), "sType_clone", 35, 1978))->mNoHeap;
                                    }
                                    if(_if_conditional221=self!=((void*)0),                                    _if_conditional221) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 36, 1979)), "sType_clone", 36, 1980))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1981)), "sType_clone", 36, 1982))->mNoCallingDestructor;
                                    }
                                    if(_if_conditional222=self!=((void*)0),                                    _if_conditional222) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 37, 1983)), "sType_clone", 37, 1984))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1985)), "sType_clone", 37, 1986))->mRefference;
                                    }
                                    if(_if_conditional223=self!=((void*)0),                                    _if_conditional223) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 38, 1987)), "sType_clone", 38, 1988))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1989)), "sType_clone", 38, 1990))->mException;
                                    }
                                    if(_if_conditional224=self!=((void*)0),                                    _if_conditional224) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 39, 1991)), "sType_clone", 39, 1992))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1993)), "sType_clone", 39, 1994))->mPointerNum;
                                    }
                                    if(_if_conditional225=self!=((void*)0),                                    _if_conditional225) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 40, 1995)), "sType_clone", 40, 1996))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1997)), "sType_clone", 40, 1998))->mOriginalTypeNamePointerNum;
                                    }
                                    if(_if_conditional226=self!=((void*)0),                                    _if_conditional226) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 41, 1999)), "sType_clone", 41, 2000))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 2001)), "sType_clone", 41, 2002))->mNoArrayPointerNum;
                                    }
                                    if(_if_conditional227=self!=((void*)0),                                    _if_conditional227) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 42, 2003)), "sType_clone", 42, 2004))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 2005)), "sType_clone", 42, 2006))->mTypedefOriginalPointerNum;
                                    }
                                    if(_if_conditional228=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 2007)), "sType_clone", 43, 2008))->mSizeNum!=((void*)0),                                    _if_conditional228) {
                                        __dec_obj48=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 43, 2009)), "sType_clone", 43, 2010))->mSizeNum;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 43, 2009)), "sType_clone", 43, 2010))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=(come_push_stackframe("sType_clone", 43, 2013),__exception_result_var_b157=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 2011)), "sType_clone", 43, 2012))->mSizeNum), come_pop_stackframe(), __exception_result_var_b157))));
                                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional229=self!=((void*)0),                                    _if_conditional229) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 44, 2014)), "sType_clone", 44, 2015))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 2016)), "sType_clone", 44, 2017))->mDynamicArrayNum;
                                    }
                                    if(_if_conditional230=self!=((void*)0),                                    _if_conditional230) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 45, 2018)), "sType_clone", 45, 2019))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 2020)), "sType_clone", 45, 2021))->mTypeOfExpression;
                                    }
                                    if(_if_conditional231=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 2022)), "sType_clone", 46, 2023))->mOriginalTypeName!=((void*)0),                                    _if_conditional231) {
                                        __dec_obj49=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 46, 2024)), "sType_clone", 46, 2025))->mOriginalTypeName;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 46, 2024)), "sType_clone", 46, 2025))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value161=(come_push_stackframe("sType_clone", 46, 2028),__exception_result_var_b158=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 2026)), "sType_clone", 46, 2027))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b158))));
                                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional232=self!=((void*)0),                                    _if_conditional232) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 47, 2029)), "sType_clone", 47, 2030))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 2031)), "sType_clone", 47, 2032))->mOriginalPointerNum;
                                    }
                                    if(_if_conditional233=self!=((void*)0),                                    _if_conditional233) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 48, 2033)), "sType_clone", 48, 2034))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 2035)), "sType_clone", 48, 2036))->mFunctionParam;
                                    }
                                    if(_if_conditional234=self!=((void*)0),                                    _if_conditional234) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 49, 2037)), "sType_clone", 49, 2038))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 2039)), "sType_clone", 49, 2040))->mAllocaValue;
                                    }
                                    if(_if_conditional235=self!=((void*)0),                                    _if_conditional235) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 50, 2041)), "sType_clone", 50, 2042))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 2043)), "sType_clone", 50, 2044))->mGenericsStruct;
                                    }
                                    if(_if_conditional236=self!=((void*)0),                                    _if_conditional236) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 51, 2045)), "sType_clone", 51, 2046))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 2047)), "sType_clone", 51, 2048))->mSolvedGenericsName;
                                    }
                                    if(_if_conditional237=self!=((void*)0),                                    _if_conditional237) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 52, 2049)), "sType_clone", 52, 2050))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 2051)), "sType_clone", 52, 2052))->mComeMemCore;
                                    }
                                    if(_if_conditional238=self!=((void*)0),                                    _if_conditional238) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 53, 2053)), "sType_clone", 53, 2054))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 2055)), "sType_clone", 53, 2056))->mInline;
                                    }
                                    if(_if_conditional239=self!=((void*)0),                                    _if_conditional239) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 54, 2057)), "sType_clone", 54, 2058))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 2059)), "sType_clone", 54, 2060))->mNullValue;
                                    }
                                    if(_if_conditional240=self!=((void*)0),                                    _if_conditional240) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 55, 2061)), "sType_clone", 55, 2062))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 2063)), "sType_clone", 55, 2064))->mGuardValue;
                                    }
                                    if(_if_conditional241=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 2065)), "sType_clone", 56, 2066))->mAsmName!=((void*)0),                                    _if_conditional241) {
                                        __dec_obj50=((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 56, 2067)), "sType_clone", 56, 2068))->mAsmName;
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 56, 2067)), "sType_clone", 56, 2068))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value162=(come_push_stackframe("sType_clone", 56, 2071),__exception_result_var_b159=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 2069)), "sType_clone", 56, 2070))->mAsmName), come_pop_stackframe(), __exception_result_var_b159))));
                                        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional242=self!=((void*)0),                                    _if_conditional242) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 57, 2072)), "sType_clone", 57, 2073))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 2074)), "sType_clone", 57, 2075))->mArrayPointerType;
                                    }
                                    if(_if_conditional243=self!=((void*)0),                                    _if_conditional243) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 58, 2076)), "sType_clone", 58, 2077))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 2078)), "sType_clone", 58, 2079))->mLambdaArray;
                                    }
                                    if(_if_conditional244=self!=((void*)0),                                    _if_conditional244) {
                                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_136, "sType_clone", 59, 2080)), "sType_clone", 59, 2081))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 2082)), "sType_clone", 59, 2083))->mNoNumberArray;
                                    }
                                    __result127__ = __result_obj__ = result_136;
                                    come_call_finalizer3(result_136,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result127__;
                                    come_call_finalizer3(result_136,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional175;
struct list$1sTypeph* __result109__;
void* right_value126;
void* right_value127;
struct list$1sTypeph* __exception_result_var_b135;
struct list$1sTypeph* result_137;
struct list_item$1sTypeph* it_138;
_Bool _while_condtional24;
struct sType* __exception_result_var_b136;
void* right_value131;
struct list$1sTypeph* __exception_result_var_b137;
struct list$1sTypeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&result_137, 0, sizeof(struct list$1sTypeph*));
memset(&it_138, 0, sizeof(struct list_item$1sTypeph*));
right_value131 = (void*)0;
                                            if(_if_conditional175=self==((void*)0),                                            _if_conditional175) {
                                                __result109__ = __result_obj__ = ((void*)0);
                                                return __result109__;
                                            }
                                            result_137=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1613),__exception_result_var_b135=((struct list$1sTypeph*)(right_value127=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value126=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 1605)), "./neo-c.h", 139, 1606)))))), come_pop_stackframe(), __exception_result_var_b135));
                                            come_call_finalizer3(right_value126,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value127,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_138=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 1614)), "./neo-c.h", 141, 1615))->head;
                                            while(_while_condtional24=it_138!=((void*)0),                                            _while_condtional24) {
                                                (come_push_stackframe("./neo-c.h", 143, 1665),__exception_result_var_b137=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_137, "./neo-c.h", 143, 1616)), "./neo-c.h", 143, 1617)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(come_push_stackframe("./neo-c.h", 143, 1664),__exception_result_var_b136=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_138, "./neo-c.h", 143, 1662)), "./neo-c.h", 143, 1663))->item), come_pop_stackframe(), __exception_result_var_b136))))), come_pop_stackframe(), __exception_result_var_b137);
                                                come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                it_138=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_138, "./neo-c.h", 145, 1666)), "./neo-c.h", 145, 1667))->next;
                                            }
                                            __result112__ = __result_obj__ = result_137;
                                            come_call_finalizer3(result_137,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result112__;
                                            come_call_finalizer3(result_137,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
                                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 1607)), "./neo-c.h", 101, 1608))->head=((void*)0);
                                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 1609)), "./neo-c.h", 102, 1610))->tail=((void*)0);
                                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 1611)), "./neo-c.h", 103, 1612))->len=0;
                                                __result110__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result110__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional176;
void* right_value128;
struct list_item$1sTypeph* litem_139;
struct sType* __dec_obj26;
_Bool _if_conditional177;
void* right_value129;
struct list_item$1sTypeph* litem_140;
struct sType* __dec_obj27;
void* right_value130;
struct list_item$1sTypeph* litem_141;
struct sType* __dec_obj28;
struct list$1sTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1sTypeph*));
right_value129 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1sTypeph*));
right_value130 = (void*)0;
memset(&litem_141, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(_if_conditional176=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 1618)), "./neo-c.h", 152, 1619))->len==0,                                                    _if_conditional176) {
                                                        litem_139=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(right_value128,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_139, "./neo-c.h", 155, 1620)), "./neo-c.h", 155, 1621))->prev=((void*)0);
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_139, "./neo-c.h", 156, 1622)), "./neo-c.h", 156, 1623))->next=((void*)0);
                                                        __dec_obj26=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_139, "./neo-c.h", 157, 1624)), "./neo-c.h", 157, 1625))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_139, "./neo-c.h", 157, 1624)), "./neo-c.h", 157, 1625))->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 1626)), "./neo-c.h", 159, 1627))->tail=litem_139;
                                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 1628)), "./neo-c.h", 160, 1629))->head=litem_139;
                                                    }
                                                    else {
                                                        if(_if_conditional177=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 1630)), "./neo-c.h", 162, 1631))->len==1,                                                        _if_conditional177) {
                                                            litem_140=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value129,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_140, "./neo-c.h", 165, 1632)), "./neo-c.h", 165, 1633))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 1634)), "./neo-c.h", 165, 1635))->head;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_140, "./neo-c.h", 166, 1636)), "./neo-c.h", 166, 1637))->next=((void*)0);
                                                            __dec_obj27=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_140, "./neo-c.h", 167, 1638)), "./neo-c.h", 167, 1639))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_140, "./neo-c.h", 167, 1638)), "./neo-c.h", 167, 1639))->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj27,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 1640)), "./neo-c.h", 169, 1641))->tail=litem_140;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 1642)), "./neo-c.h", 170, 1643))->head, "./neo-c.h", 170, 1644)), "./neo-c.h", 170, 1645))->next=litem_140;
                                                        }
                                                        else {
                                                            litem_141=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(right_value130,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_141, "./neo-c.h", 175, 1646)), "./neo-c.h", 175, 1647))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 1648)), "./neo-c.h", 175, 1649))->tail;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_141, "./neo-c.h", 176, 1650)), "./neo-c.h", 176, 1651))->next=((void*)0);
                                                            __dec_obj28=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_141, "./neo-c.h", 177, 1652)), "./neo-c.h", 177, 1653))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_141, "./neo-c.h", 177, 1652)), "./neo-c.h", 177, 1653))->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 1654)), "./neo-c.h", 179, 1655))->tail, "./neo-c.h", 179, 1656)), "./neo-c.h", 179, 1657))->next=litem_141;
                                                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 1658)), "./neo-c.h", 180, 1659))->tail=litem_141;
                                                        }
                                                    }
                                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 1660)), "./neo-c.h", 183, 1661))->len++;
                                                    __result111__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result111__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_142;
_Bool _while_condtional25;
struct list_item$1sTypeph* prev_it_143;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_142, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_143, 0, sizeof(struct list_item$1sTypeph*));
                                            it_142=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 1669)), "./neo-c.h", 120, 1670))->head;
                                            while(_while_condtional25=it_142!=((void*)0),                                            _while_condtional25) {
                                                prev_it_143=it_142;
                                                it_142=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_142, "./neo-c.h", 123, 1671)), "./neo-c.h", 123, 1672))->next;
                                                come_call_finalizer3(prev_it_143,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional180=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1679)), "tuple1$1sTypeph_finalize", 0, 1680))->v1!=((void*)0),                                                _if_conditional180) {
                                                    come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1681)), "tuple1$1sTypeph_finalize", 0, 1682))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional188;
struct list$1sNodeph* __result117__;
void* right_value141;
void* right_value142;
struct list$1sNodeph* __exception_result_var_b145;
struct list$1sNodeph* result_146;
struct list_item$1sNodeph* it_147;
_Bool _while_condtional26;
struct sNode* __exception_result_var_b146;
void* right_value146;
struct list$1sNodeph* __exception_result_var_b147;
struct list$1sNodeph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&result_146, 0, sizeof(struct list$1sNodeph*));
memset(&it_147, 0, sizeof(struct list_item$1sNodeph*));
right_value146 = (void*)0;
                                            if(_if_conditional188=self==((void*)0),                                            _if_conditional188) {
                                                __result117__ = __result_obj__ = ((void*)0);
                                                return __result117__;
                                            }
                                            result_146=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1733),__exception_result_var_b145=((struct list$1sNodeph*)(right_value142=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value141=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 1725)), "./neo-c.h", 139, 1726)))))), come_pop_stackframe(), __exception_result_var_b145));
                                            come_call_finalizer3(right_value141,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value142,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_147=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 1734)), "./neo-c.h", 141, 1735))->head;
                                            while(_while_condtional26=it_147!=((void*)0),                                            _while_condtional26) {
                                                (come_push_stackframe("./neo-c.h", 143, 1785),__exception_result_var_b147=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_146, "./neo-c.h", 143, 1736)), "./neo-c.h", 143, 1737)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=(come_push_stackframe("./neo-c.h", 143, 1784),__exception_result_var_b146=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_147, "./neo-c.h", 143, 1782)), "./neo-c.h", 143, 1783))->item), come_pop_stackframe(), __exception_result_var_b146))))), come_pop_stackframe(), __exception_result_var_b147);
                                                if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                it_147=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_147, "./neo-c.h", 145, 1786)), "./neo-c.h", 145, 1787))->next;
                                            }
                                            __result120__ = __result_obj__ = result_146;
                                            come_call_finalizer3(result_146,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result120__;
                                            come_call_finalizer3(result_146,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
                                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 1727)), "./neo-c.h", 101, 1728))->head=((void*)0);
                                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 1729)), "./neo-c.h", 102, 1730))->tail=((void*)0);
                                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 1731)), "./neo-c.h", 103, 1732))->len=0;
                                                __result118__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result118__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional189;
void* right_value143;
struct list_item$1sNodeph* litem_148;
struct sNode* __dec_obj36;
_Bool _if_conditional190;
void* right_value144;
struct list_item$1sNodeph* litem_149;
struct sNode* __dec_obj37;
void* right_value145;
struct list_item$1sNodeph* litem_150;
struct sNode* __dec_obj38;
struct list$1sNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1sNodeph*));
right_value144 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1sNodeph*));
right_value145 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(_if_conditional189=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 1738)), "./neo-c.h", 152, 1739))->len==0,                                                    _if_conditional189) {
                                                        litem_148=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(right_value143,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_148, "./neo-c.h", 155, 1740)), "./neo-c.h", 155, 1741))->prev=((void*)0);
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_148, "./neo-c.h", 156, 1742)), "./neo-c.h", 156, 1743))->next=((void*)0);
                                                        __dec_obj36=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_148, "./neo-c.h", 157, 1744)), "./neo-c.h", 157, 1745))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_148, "./neo-c.h", 157, 1744)), "./neo-c.h", 157, 1745))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
                                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 1746)), "./neo-c.h", 159, 1747))->tail=litem_148;
                                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 1748)), "./neo-c.h", 160, 1749))->head=litem_148;
                                                    }
                                                    else {
                                                        if(_if_conditional190=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 1750)), "./neo-c.h", 162, 1751))->len==1,                                                        _if_conditional190) {
                                                            litem_149=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value144,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_149, "./neo-c.h", 165, 1752)), "./neo-c.h", 165, 1753))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 1754)), "./neo-c.h", 165, 1755))->head;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_149, "./neo-c.h", 166, 1756)), "./neo-c.h", 166, 1757))->next=((void*)0);
                                                            __dec_obj37=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_149, "./neo-c.h", 167, 1758)), "./neo-c.h", 167, 1759))->item;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_149, "./neo-c.h", 167, 1758)), "./neo-c.h", 167, 1759))->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
                                                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 1760)), "./neo-c.h", 169, 1761))->tail=litem_149;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 1762)), "./neo-c.h", 170, 1763))->head, "./neo-c.h", 170, 1764)), "./neo-c.h", 170, 1765))->next=litem_149;
                                                        }
                                                        else {
                                                            litem_150=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(right_value145,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_150, "./neo-c.h", 175, 1766)), "./neo-c.h", 175, 1767))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 1768)), "./neo-c.h", 175, 1769))->tail;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_150, "./neo-c.h", 176, 1770)), "./neo-c.h", 176, 1771))->next=((void*)0);
                                                            __dec_obj38=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_150, "./neo-c.h", 177, 1772)), "./neo-c.h", 177, 1773))->item;
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_150, "./neo-c.h", 177, 1772)), "./neo-c.h", 177, 1773))->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
                                                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 1774)), "./neo-c.h", 179, 1775))->tail, "./neo-c.h", 179, 1776)), "./neo-c.h", 179, 1777))->next=litem_150;
                                                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 1778)), "./neo-c.h", 180, 1779))->tail=litem_150;
                                                        }
                                                    }
                                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 1780)), "./neo-c.h", 183, 1781))->len++;
                                                    __result119__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result119__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_151;
_Bool _while_condtional27;
struct list_item$1sNodeph* prev_it_152;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_151, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_152, 0, sizeof(struct list_item$1sNodeph*));
                                            it_151=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 1789)), "./neo-c.h", 120, 1790))->head;
                                            while(_while_condtional27=it_151!=((void*)0),                                            _while_condtional27) {
                                                prev_it_152=it_151;
                                                it_151=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_151, "./neo-c.h", 123, 1791)), "./neo-c.h", 123, 1792))->next;
                                                come_call_finalizer3(prev_it_152,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional194;
struct list$1charph* __result121__;
void* right_value149;
void* right_value150;
struct list$1charph* __exception_result_var_b150;
struct list$1charph* result_153;
struct list_item$1charph* it_154;
_Bool _while_condtional28;
char* __exception_result_var_b151;
void* right_value154;
struct list$1charph* __exception_result_var_b152;
struct list$1charph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&result_153, 0, sizeof(struct list$1charph*));
memset(&it_154, 0, sizeof(struct list_item$1charph*));
right_value154 = (void*)0;
                                            if(_if_conditional194=self==((void*)0),                                            _if_conditional194) {
                                                __result121__ = __result_obj__ = ((void*)0);
                                                return __result121__;
                                            }
                                            result_153=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1818),__exception_result_var_b150=((struct list$1charph*)(right_value150=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value149=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 1810)), "./neo-c.h", 139, 1811)))))), come_pop_stackframe(), __exception_result_var_b150));
                                            come_call_finalizer3(right_value149,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value150,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_154=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 1819)), "./neo-c.h", 141, 1820))->head;
                                            while(_while_condtional28=it_154!=((void*)0),                                            _while_condtional28) {
                                                (come_push_stackframe("./neo-c.h", 143, 1870),__exception_result_var_b152=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_153, "./neo-c.h", 143, 1821)), "./neo-c.h", 143, 1822)),(char*)come_increment_ref_count(((char*)(right_value154=(come_push_stackframe("./neo-c.h", 143, 1869),__exception_result_var_b151=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_154, "./neo-c.h", 143, 1867)), "./neo-c.h", 143, 1868))->item), come_pop_stackframe(), __exception_result_var_b151))))), come_pop_stackframe(), __exception_result_var_b152);
                                                right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                it_154=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_154, "./neo-c.h", 145, 1871)), "./neo-c.h", 145, 1872))->next;
                                            }
                                            __result124__ = __result_obj__ = result_153;
                                            come_call_finalizer3(result_153,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result124__;
                                            come_call_finalizer3(result_153,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
                                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1812)), "./neo-c.h", 101, 1813))->head=((void*)0);
                                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1814)), "./neo-c.h", 102, 1815))->tail=((void*)0);
                                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1816)), "./neo-c.h", 103, 1817))->len=0;
                                                __result122__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result122__;
                                                come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional195;
void* right_value151;
struct list_item$1charph* litem_155;
char* __dec_obj41;
_Bool _if_conditional196;
void* right_value152;
struct list_item$1charph* litem_156;
char* __dec_obj42;
void* right_value153;
struct list_item$1charph* litem_157;
char* __dec_obj43;
struct list$1charph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1charph*));
right_value152 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1charph*));
right_value153 = (void*)0;
memset(&litem_157, 0, sizeof(struct list_item$1charph*));
                                                    if(_if_conditional195=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 1823)), "./neo-c.h", 152, 1824))->len==0,                                                    _if_conditional195) {
                                                        litem_155=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                                        come_call_finalizer3(right_value151,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_155, "./neo-c.h", 155, 1825)), "./neo-c.h", 155, 1826))->prev=((void*)0);
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_155, "./neo-c.h", 156, 1827)), "./neo-c.h", 156, 1828))->next=((void*)0);
                                                        __dec_obj41=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_155, "./neo-c.h", 157, 1829)), "./neo-c.h", 157, 1830))->item;
                                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_155, "./neo-c.h", 157, 1829)), "./neo-c.h", 157, 1830))->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 1831)), "./neo-c.h", 159, 1832))->tail=litem_155;
                                                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 1833)), "./neo-c.h", 160, 1834))->head=litem_155;
                                                    }
                                                    else {
                                                        if(_if_conditional196=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 1835)), "./neo-c.h", 162, 1836))->len==1,                                                        _if_conditional196) {
                                                            litem_156=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value152,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_156, "./neo-c.h", 165, 1837)), "./neo-c.h", 165, 1838))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 1839)), "./neo-c.h", 165, 1840))->head;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_156, "./neo-c.h", 166, 1841)), "./neo-c.h", 166, 1842))->next=((void*)0);
                                                            __dec_obj42=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_156, "./neo-c.h", 167, 1843)), "./neo-c.h", 167, 1844))->item;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_156, "./neo-c.h", 167, 1843)), "./neo-c.h", 167, 1844))->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 1845)), "./neo-c.h", 169, 1846))->tail=litem_156;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 1847)), "./neo-c.h", 170, 1848))->head, "./neo-c.h", 170, 1849)), "./neo-c.h", 170, 1850))->next=litem_156;
                                                        }
                                                        else {
                                                            litem_157=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                                            come_call_finalizer3(right_value153,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_157, "./neo-c.h", 175, 1851)), "./neo-c.h", 175, 1852))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 1853)), "./neo-c.h", 175, 1854))->tail;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_157, "./neo-c.h", 176, 1855)), "./neo-c.h", 176, 1856))->next=((void*)0);
                                                            __dec_obj43=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_157, "./neo-c.h", 177, 1857)), "./neo-c.h", 177, 1858))->item;
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_157, "./neo-c.h", 177, 1857)), "./neo-c.h", 177, 1858))->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 1859)), "./neo-c.h", 179, 1860))->tail, "./neo-c.h", 179, 1861)), "./neo-c.h", 179, 1862))->next=litem_157;
                                                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 1863)), "./neo-c.h", 180, 1864))->tail=litem_157;
                                                        }
                                                    }
                                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 1865)), "./neo-c.h", 183, 1866))->len++;
                                                    __result123__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result123__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_158;
_Bool _while_condtional29;
struct list_item$1charph* prev_it_159;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_158, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_159, 0, sizeof(struct list_item$1charph*));
                                            it_158=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1874)), "./neo-c.h", 120, 1875))->head;
                                            while(_while_condtional29=it_158!=((void*)0),                                            _while_condtional29) {
                                                prev_it_159=it_158;
                                                it_158=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_158, "./neo-c.h", 123, 1876)), "./neo-c.h", 123, 1877))->next;
                                                come_call_finalizer3(prev_it_159,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional198;
struct tuple1$1sTypeph* __result125__;
void* right_value156;
struct tuple1$1sTypeph* result_160;
_Bool _if_conditional199;
struct sType* __exception_result_var_b154;
void* right_value157;
struct sType* __dec_obj45;
struct tuple1$1sTypeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&result_160, 0, sizeof(struct tuple1$1sTypeph*));
right_value157 = (void*)0;
                                            if(_if_conditional198=self==(void*)0,                                            _if_conditional198) {
                                                __result125__ = __result_obj__ = (void*)0;
                                                return __result125__;
                                            }
                                            result_160=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value156=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            come_call_finalizer3(right_value156,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional199=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1884)), "tuple1$1sTypephp_clone", 4, 1885))->v1!=((void*)0),                                            _if_conditional199) {
                                                __dec_obj45=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_160, "tuple1$1sTypephp_clone", 4, 1886)), "tuple1$1sTypephp_clone", 4, 1887))->v1;
                                                ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_160, "tuple1$1sTypephp_clone", 4, 1886)), "tuple1$1sTypephp_clone", 4, 1887))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 1890),__exception_result_var_b154=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1888)), "tuple1$1sTypephp_clone", 4, 1889))->v1), come_pop_stackframe(), __exception_result_var_b154))));
                                                come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result126__ = __result_obj__ = result_160;
                                            come_call_finalizer3(result_160,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result126__;
                                            come_call_finalizer3(result_160,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_161;
_Bool _while_condtional30;
struct list_item$1tuple2$2charphsTypephph* prev_it_162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_161=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 2090)), "./neo-c.h", 120, 2091))->head;
                    while(_while_condtional30=it_161!=((void*)0),                    _while_condtional30) {
                        prev_it_162=it_161;
                        it_161=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_161, "./neo-c.h", 123, 2092)), "./neo-c.h", 123, 2093))->next;
                        come_call_finalizer3(prev_it_162,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional252;
void* right_value173;
struct list_item$1tuple2$2charphsNodephph* litem_167;
struct tuple2$2charphsNodeph* __dec_obj56;
_Bool _if_conditional253;
void* right_value174;
struct list_item$1tuple2$2charphsNodephph* litem_168;
struct tuple2$2charphsNodeph* __dec_obj57;
void* right_value175;
struct list_item$1tuple2$2charphsNodephph* litem_169;
struct tuple2$2charphsNodeph* __dec_obj58;
struct list$1tuple2$2charphsNodephph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&litem_167, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value174 = (void*)0;
memset(&litem_168, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value175 = (void*)0;
memset(&litem_169, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                    if(_if_conditional252=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 222, 2144)), "./neo-c.h", 222, 2145))->len==0,                    _if_conditional252) {
                        litem_167=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value173=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value173,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_167, "./neo-c.h", 225, 2146)), "./neo-c.h", 225, 2147))->prev=((void*)0);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_167, "./neo-c.h", 226, 2148)), "./neo-c.h", 226, 2149))->next=((void*)0);
                        __dec_obj56=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_167, "./neo-c.h", 227, 2150)), "./neo-c.h", 227, 2151))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_167, "./neo-c.h", 227, 2150)), "./neo-c.h", 227, 2151))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj56,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 229, 2152)), "./neo-c.h", 229, 2153))->tail=litem_167;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 230, 2154)), "./neo-c.h", 230, 2155))->head=litem_167;
                    }
                    else {
                        if(_if_conditional253=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 232, 2156)), "./neo-c.h", 232, 2157))->len==1,                        _if_conditional253) {
                            litem_168=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value174,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_168, "./neo-c.h", 235, 2158)), "./neo-c.h", 235, 2159))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 235, 2160)), "./neo-c.h", 235, 2161))->head;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_168, "./neo-c.h", 236, 2162)), "./neo-c.h", 236, 2163))->next=((void*)0);
                            __dec_obj57=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_168, "./neo-c.h", 237, 2164)), "./neo-c.h", 237, 2165))->item;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_168, "./neo-c.h", 237, 2164)), "./neo-c.h", 237, 2165))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj57,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 239, 2166)), "./neo-c.h", 239, 2167))->tail=litem_168;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 240, 2168)), "./neo-c.h", 240, 2169))->head, "./neo-c.h", 240, 2170)), "./neo-c.h", 240, 2171))->next=litem_168;
                        }
                        else {
                            litem_169=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value175=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value175,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_169, "./neo-c.h", 245, 2172)), "./neo-c.h", 245, 2173))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 245, 2174)), "./neo-c.h", 245, 2175))->tail;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_169, "./neo-c.h", 246, 2176)), "./neo-c.h", 246, 2177))->next=((void*)0);
                            __dec_obj58=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_169, "./neo-c.h", 247, 2178)), "./neo-c.h", 247, 2179))->item;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_169, "./neo-c.h", 247, 2178)), "./neo-c.h", 247, 2179))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj58,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 249, 2180)), "./neo-c.h", 249, 2181))->tail, "./neo-c.h", 249, 2182)), "./neo-c.h", 249, 2183))->next=litem_169;
                            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 250, 2184)), "./neo-c.h", 250, 2185))->tail=litem_169;
                        }
                    }
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 253, 2186)), "./neo-c.h", 253, 2187))->len++;
                    __result131__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result131__;
                    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj59;
struct sNode* __dec_obj60;
struct tuple2$2charphsNodeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj59=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1744, 2188)), "./neo-c.h", 1744, 2189))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1744, 2188)), "./neo-c.h", 1744, 2189))->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj60=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1745, 2190)), "./neo-c.h", 1745, 2191))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1745, 2190)), "./neo-c.h", 1745, 2191))->v2=(struct sNode*)come_increment_ref_count(v2);
                    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
                    __result132__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result132__;
                    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj61;
struct tuple2$2charphvoidp* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj61=((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "./neo-c.h", 1744, 2197)), "./neo-c.h", 1744, 2198))->v1;
                    ((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "./neo-c.h", 1744, 2197)), "./neo-c.h", 1744, 2198))->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                    ((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "./neo-c.h", 1745, 2199)), "./neo-c.h", 1745, 2200))->v2=v2;
                    __result133__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result133__;
                    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
void* __result_obj__;
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional255=self!=((void*)0)&&((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "tuple2$2charphvoidpp_finalize", 0, 2201)), "tuple2$2charphvoidpp_finalize", 0, 2202))->v1!=((void*)0),                        _if_conditional255) {
                            ((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "tuple2$2charphvoidpp_finalize", 0, 2203)), "tuple2$2charphvoidpp_finalize", 0, 2204))->v1 = come_decrement_ref_count2(((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "tuple2$2charphvoidpp_finalize", 0, 2203)), "tuple2$2charphvoidpp_finalize", 0, 2204))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b178;
_Bool _if_conditional269;
char* source_head_171;
_Bool output_172;
char* __dec_obj66;
char* type_name_173;
_Bool _if_conditional270;
void* right_value188;
char* __exception_result_var_b179;
char* __dec_obj67;
struct sClass* __exception_result_var_b180;
_Bool _if_conditional271;
void* right_value189;
char* __exception_result_var_b181;
char* __dec_obj68;
void* right_value190;
void* right_value191;
struct sClass* __exception_result_var_b182;
struct map$2charphsClassph* __exception_result_var_b183;
int __exception_result_var_b184;
void* right_value192;
void* right_value193;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b185;
struct list$1tuple2$2charphsNodephph* elements_174;
_Bool _while_condtional32;
void* right_value194;
char* __exception_result_var_b186;
char* element_name_175;
_Bool _if_conditional272;
_Bool no_comma_176;
void* right_value195;
struct sNode* __exception_result_var_b187;
struct sNode* element_value_177;
void* right_value196;
void* right_value197;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b188;
void* right_value198;
void* right_value199;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b189;
_Bool _if_conditional273;
_Bool _if_conditional274;
char* source_tail_178;
void* right_value200;
void* right_value201;
struct buffer* __exception_result_var_b190;
struct buffer* header_179;
struct buffer* __exception_result_var_b191;
struct buffer* __exception_result_var_b192;
void* right_value202;
char* __exception_result_var_b193;
void* right_value203;
void* right_value204;
struct sEnumNode* __exception_result_var_b194;
struct sNode* _inf_value2;
struct sEnumNode* _inf_obj_value2;
void* right_value210;
struct sNode* __result139__;
void* right_value211;
struct sNode* __exception_result_var_b199;
struct sNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_171, 0, sizeof(char*));
memset(&output_172, 0, sizeof(_Bool));
memset(&type_name_173, 0, sizeof(char*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&elements_174, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value194 = (void*)0;
memset(&element_name_175, 0, sizeof(char*));
memset(&no_comma_176, 0, sizeof(_Bool));
right_value195 = (void*)0;
memset(&element_value_177, 0, sizeof(struct sNode*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&source_tail_178, 0, sizeof(char*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&header_179, 0, sizeof(struct buffer*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
    if(_if_conditional269=(come_push_stackframe("16enum.c", 168, 2274),__exception_result_var_b178=charp_operator_equals(buf,"enum"), come_pop_stackframe(), __exception_result_var_b178),    _if_conditional269) {
        source_head_171=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 169, 2275)), "16enum.c", 169, 2276))->p;
        output_172=(_Bool)1;
        __dec_obj66=type_name_173;
        type_name_173=((void*)0);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(_if_conditional270=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 174, 2277)), "16enum.c", 174, 2278))->p, "16enum.c", 174, 2279))==123,        _if_conditional270) {
            __dec_obj67=type_name_173;
            type_name_173=(char*)come_increment_ref_count((come_push_stackframe("16enum.c", 175, 2280),__exception_result_var_b179=((char*)(right_value188=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b179));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            if(_if_conditional271=(come_push_stackframe("16enum.c", 178, 2285),__exception_result_var_b180=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 178, 2281)), "16enum.c", 178, 2282))->classes, "16enum.c", 178, 2283)), "16enum.c", 178, 2284)),type_name_173,((void*)0)), come_pop_stackframe(), __exception_result_var_b180)==((void*)0),            _if_conditional271) {
            }
            else {
                output_172=(_Bool)0;
            }
            __dec_obj68=type_name_173;
            type_name_173=(char*)come_increment_ref_count((come_push_stackframe("16enum.c", 184, 2286),__exception_result_var_b181=((char*)(right_value189=parse_word(info))), come_pop_stackframe(), __exception_result_var_b181));
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("16enum.c", 186, 2293),__exception_result_var_b183=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 186, 2287)), "16enum.c", 186, 2288))->classes, "16enum.c", 186, 2289)), "16enum.c", 186, 2290)),(char*)come_increment_ref_count(type_name_173),(struct sClass*)come_increment_ref_count((come_push_stackframe("16enum.c", 186, 2292),__exception_result_var_b182=((struct sClass*)(right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "16enum.c", 186, "sClass"))), "16enum.c", 186, 2291))),type_name_173,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b182))), come_pop_stackframe(), __exception_result_var_b183);
            come_call_finalizer3(right_value190,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value191,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("16enum.c", 189, 2294),__exception_result_var_b184=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b184);
        elements_174=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("16enum.c", 191, 2296),__exception_result_var_b185=((struct list$1tuple2$2charphsNodephph*)(right_value193=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value192=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "16enum.c", 191, "list$1tuple2$2charphsNodephph"))), "16enum.c", 191, 2295)))))), come_pop_stackframe(), __exception_result_var_b185));
        come_call_finalizer3(right_value192,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value193,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional32=(_Bool)1,        _while_condtional32) {
            (come_push_stackframe("16enum.c", 194,2297),parse_sharp_v5(info),come_pop_stackframe());
            element_name_175=(char*)come_increment_ref_count((come_push_stackframe("16enum.c", 195, 2298),__exception_result_var_b186=((char*)(right_value194=parse_word(info))), come_pop_stackframe(), __exception_result_var_b186));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("16enum.c", 196,2299),parse_sharp_v5(info),come_pop_stackframe());
            if(_if_conditional272=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 198, 2300)), "16enum.c", 198, 2301))->p, "16enum.c", 198, 2302))==61,            _if_conditional272) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 199, 2303)), "16enum.c", 199, 2304))->p++;
                (come_push_stackframe("16enum.c", 200,2305),skip_spaces_and_lf(info),come_pop_stackframe());
                no_comma_176=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 202, 2306)), "16enum.c", 202, 2307))->no_comma;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 203, 2308)), "16enum.c", 203, 2309))->no_comma=(_Bool)1;
                element_value_177=(struct sNode*)come_increment_ref_count((come_push_stackframe("16enum.c", 204, 2310),__exception_result_var_b187=((struct sNode*)(right_value195=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b187));
                if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 206, 2311)), "16enum.c", 206, 2312))->no_comma=no_comma_176;
                (come_push_stackframe("16enum.c", 208, 2315),__exception_result_var_b188=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_174, "16enum.c", 208, 2313)), "16enum.c", 208, 2314)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value197=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value196=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "16enum.c", 208, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(element_name_175),(struct sNode*)come_increment_ref_count(element_value_177)))))), come_pop_stackframe(), __exception_result_var_b188);
                come_call_finalizer3(right_value196,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value197,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(element_value_177) { element_value_177 = come_decrement_ref_count2(element_value_177, ((struct sNode*)element_value_177)->finalize, ((struct sNode*)element_value_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                (come_push_stackframe("16enum.c", 211, 2318),__exception_result_var_b189=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(elements_174, "16enum.c", 211, 2316)), "16enum.c", 211, 2317)),(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value199=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value198=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "16enum.c", 211, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(element_name_175),((void*)0)))))), come_pop_stackframe(), __exception_result_var_b189);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value199,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            (come_push_stackframe("16enum.c", 213,2319),parse_sharp_v5(info),come_pop_stackframe());
            if(_if_conditional273=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 215, 2320)), "16enum.c", 215, 2321))->p, "16enum.c", 215, 2322))==44,            _if_conditional273) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 216, 2323)), "16enum.c", 216, 2324))->p++;
                (come_push_stackframe("16enum.c", 217,2325),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            (come_push_stackframe("16enum.c", 219,2326),parse_sharp_v5(info),come_pop_stackframe());
            if(_if_conditional274=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 221, 2327)), "16enum.c", 221, 2328))->p, "16enum.c", 221, 2329))==125,            _if_conditional274) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 222, 2330)), "16enum.c", 222, 2331))->p++;
                (come_push_stackframe("16enum.c", 223,2332),skip_spaces_and_lf(info),come_pop_stackframe());
                element_name_175 = come_decrement_ref_count2(element_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            element_name_175 = come_decrement_ref_count2(element_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        source_tail_178=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "16enum.c", 228, 2333)), "16enum.c", 228, 2334))->p;
        header_179=(struct buffer*)come_increment_ref_count((come_push_stackframe("16enum.c", 230, 2336),__exception_result_var_b190=((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "16enum.c", 230, "buffer"))), "16enum.c", 230, 2335)))))), come_pop_stackframe(), __exception_result_var_b190));
        come_call_finalizer3(right_value200,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value201,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("16enum.c", 231, 2339),__exception_result_var_b191=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_179, "16enum.c", 231, 2337)), "16enum.c", 231, 2338)),"enum "), come_pop_stackframe(), __exception_result_var_b191);
        (come_push_stackframe("16enum.c", 232, 2342),__exception_result_var_b192=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_179, "16enum.c", 232, 2340)), "16enum.c", 232, 2341)),source_head_171,source_tail_178-source_head_171), come_pop_stackframe(), __exception_result_var_b192);
        (come_push_stackframe("16enum.c", 234,2346),add_come_code_at_come_header(info,"%s;\n",(come_push_stackframe("16enum.c", 234, 2345),__exception_result_var_b193=((char*)(right_value202=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_179, "16enum.c", 234, 2343)), "16enum.c", 234, 2344))))), come_pop_stackframe(), __exception_result_var_b193)),come_pop_stackframe());
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "16enum.c", 236, "struct sNode");
        _inf_obj_value2=come_increment_ref_count((come_push_stackframe("16enum.c", 236, 2348),__exception_result_var_b194=((struct sEnumNode*)(right_value204=sEnumNode_initialize((struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)come_null_check(((struct sEnumNode*)(right_value203=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "16enum.c", 236, "sEnumNode"))), "16enum.c", 236, 2347))),(char*)come_increment_ref_count(type_name_173),elements_174,output_172,info))), come_pop_stackframe(), __exception_result_var_b194));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sEnumNode_finalize;
        _inf_value2->clone=(void*)sEnumNode_clone;
        _inf_value2->compile=(void*)sEnumNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sEnumNode_terminated;
        _inf_value2->kind=(void*)sEnumNode_kind;
        __result139__ = __result_obj__ = ((struct sNode*)(right_value210=_inf_value2));
        type_name_173 = come_decrement_ref_count2(type_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elements_174,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_179,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value203,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value204,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result139__;
        type_name_173 = come_decrement_ref_count2(type_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elements_174,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result140__ = __result_obj__ = (come_push_stackframe("16enum.c", 239, 2401),__exception_result_var_b199=((struct sNode*)(right_value211=top_level_v95(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b199);
    if(right_value211) { right_value211 = come_decrement_ref_count2(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result140__;
}

static void sEnumNode_finalize(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional275=self!=((void*)0)&&((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0, 2349)), "sEnumNode_finalize", 0, 2350))->sname!=((void*)0),            _if_conditional275) {
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0, 2351)), "sEnumNode_finalize", 0, 2352))->sname = come_decrement_ref_count2(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 0, 2351)), "sEnumNode_finalize", 0, 2352))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional276=self!=((void*)0)&&((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1, 2353)), "sEnumNode_finalize", 1, 2354))->mTypeName!=((void*)0),            _if_conditional276) {
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1, 2355)), "sEnumNode_finalize", 1, 2356))->mTypeName = come_decrement_ref_count2(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 1, 2355)), "sEnumNode_finalize", 1, 2356))->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional277=self!=((void*)0)&&((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2, 2357)), "sEnumNode_finalize", 2, 2358))->mElements!=((void*)0),            _if_conditional277) {
                come_call_finalizer3(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 2, 2359)), "sEnumNode_finalize", 2, 2360))->mElements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional278=self!=((void*)0)&&((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3, 2361)), "sEnumNode_finalize", 3, 2362))->mDeclareSName!=((void*)0),            _if_conditional278) {
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3, 2363)), "sEnumNode_finalize", 3, 2364))->mDeclareSName = come_decrement_ref_count2(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_finalize", 3, 2363)), "sEnumNode_finalize", 3, 2364))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self){
void* __result_obj__;
_Bool _if_conditional279;
struct sEnumNode* __result137__;
void* right_value205;
struct sEnumNode* result_180;
_Bool _if_conditional280;
_Bool _if_conditional281;
char* __exception_result_var_b195;
void* right_value206;
char* __dec_obj69;
_Bool _if_conditional282;
char* __exception_result_var_b196;
void* right_value207;
char* __dec_obj70;
_Bool _if_conditional283;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b197;
void* right_value208;
struct list$1tuple2$2charphsNodephph* __dec_obj71;
_Bool _if_conditional284;
_Bool _if_conditional285;
char* __exception_result_var_b198;
void* right_value209;
char* __dec_obj72;
struct sEnumNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
memset(&result_180, 0, sizeof(struct sEnumNode*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
            if(_if_conditional279=self==(void*)0,            _if_conditional279) {
                __result137__ = __result_obj__ = (void*)0;
                return __result137__;
            }
            result_180=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(right_value205=(struct sEnumNode*)come_calloc(1, sizeof(struct sEnumNode)*(1), "sEnumNode_clone", 3, "sEnumNode"))));
            come_call_finalizer3(right_value205,sEnumNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional280=self!=((void*)0),            _if_conditional280) {
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 4, 2365)), "sEnumNode_clone", 4, 2366))->sline=((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 4, 2367)), "sEnumNode_clone", 4, 2368))->sline;
            }
            if(_if_conditional281=self!=((void*)0)&&((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 5, 2369)), "sEnumNode_clone", 5, 2370))->sname!=((void*)0),            _if_conditional281) {
                __dec_obj69=((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 5, 2371)), "sEnumNode_clone", 5, 2372))->sname;
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 5, 2371)), "sEnumNode_clone", 5, 2372))->sname=(char*)come_increment_ref_count(((char*)(right_value206=(come_push_stackframe("sEnumNode_clone", 5, 2375),__exception_result_var_b195=string_clone(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 5, 2373)), "sEnumNode_clone", 5, 2374))->sname), come_pop_stackframe(), __exception_result_var_b195))));
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional282=self!=((void*)0)&&((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 6, 2376)), "sEnumNode_clone", 6, 2377))->mTypeName!=((void*)0),            _if_conditional282) {
                __dec_obj70=((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 6, 2378)), "sEnumNode_clone", 6, 2379))->mTypeName;
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 6, 2378)), "sEnumNode_clone", 6, 2379))->mTypeName=(char*)come_increment_ref_count(((char*)(right_value207=(come_push_stackframe("sEnumNode_clone", 6, 2382),__exception_result_var_b196=string_clone(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 6, 2380)), "sEnumNode_clone", 6, 2381))->mTypeName), come_pop_stackframe(), __exception_result_var_b196))));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional283=self!=((void*)0)&&((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 7, 2383)), "sEnumNode_clone", 7, 2384))->mElements!=((void*)0),            _if_conditional283) {
                __dec_obj71=((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 7, 2385)), "sEnumNode_clone", 7, 2386))->mElements;
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 7, 2385)), "sEnumNode_clone", 7, 2386))->mElements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value208=(come_push_stackframe("sEnumNode_clone", 7, 2389),__exception_result_var_b197=list$1tuple2$2charphsNodephphp_clone(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 7, 2387)), "sEnumNode_clone", 7, 2388))->mElements), come_pop_stackframe(), __exception_result_var_b197))));
                come_call_finalizer3(__dec_obj71,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value208,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional284=self!=((void*)0),            _if_conditional284) {
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 8, 2390)), "sEnumNode_clone", 8, 2391))->mOutput=((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 8, 2392)), "sEnumNode_clone", 8, 2393))->mOutput;
            }
            if(_if_conditional285=self!=((void*)0)&&((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 9, 2394)), "sEnumNode_clone", 9, 2395))->mDeclareSName!=((void*)0),            _if_conditional285) {
                __dec_obj72=((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 9, 2396)), "sEnumNode_clone", 9, 2397))->mDeclareSName;
                ((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(result_180, "sEnumNode_clone", 9, 2396)), "sEnumNode_clone", 9, 2397))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value209=(come_push_stackframe("sEnumNode_clone", 9, 2400),__exception_result_var_b198=string_clone(((struct sEnumNode*)come_null_check(((struct sEnumNode*)come_null_check(self, "sEnumNode_clone", 9, 2398)), "sEnumNode_clone", 9, 2399))->mDeclareSName), come_pop_stackframe(), __exception_result_var_b198))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result138__ = __result_obj__ = result_180;
            come_call_finalizer3(result_180,sEnumNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result138__;
            come_call_finalizer3(result_180,sEnumNode_finalize, 0, 0, 0, 0, (void*)0);
}

