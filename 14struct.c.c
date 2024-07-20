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
struct sStructNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
};
struct sClassNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
    _Bool mOutput;
};
struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};
struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
void output_struct_header(struct sClass* klass, struct sInfo* info);

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

_Bool sStructNode_terminated(struct sStructNode* self);

char* sStructNode_kind(struct sStructNode* self);

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);

char* sStructNobodyNode_kind(struct sStructNobodyNode* self);

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self);

char* sGenericsStructNode_kind(struct sGenericsStructNode* self);

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info);

_Bool sClassNode_terminated(struct sClassNode* self);

char* sClassNode_kind(struct sClassNode* self);

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1901, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1908, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1915, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1922, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1929, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1936, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1952, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1962, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1972, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1982, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1992, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2163, "smart_pointer$1char")))),self,len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2168, "smart_pointer$1short")))),self,len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2173, "smart_pointer$1int")))),self,len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2178, "smart_pointer$1long")))),self,len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2183, "smart_pointer$1float")))),self,len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2188, "smart_pointer$1double")))),self,len)));
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
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2193, "list$1char")))),len,self)));
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
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2198, "list$1short")))),len,self)));
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
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2203, "list$1int")))),len,self)));
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
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2208, "list$1long")))),len,self)));
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
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2213, "list$1float")))),len,self)));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2218, "list$1double")))),len,self)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 221, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 231, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 241, "list_item$1char"))));
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
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 221, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 231, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 241, "list_item$1short"))));
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
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 221, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 231, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 241, "list_item$1int"))));
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
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 221, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 231, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 241, "list_item$1long"))));
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
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 221, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 231, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 241, "list_item$1float"))));
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
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 221, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 231, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 241, "list_item$1double"))));
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










char* get_none_generics_name(char* class_name){
void* __result_obj__;
char* p_47;
_Bool _while_condtional7;
_Bool _if_conditional19;
void* right_value79;
void* right_value80;
char* __result52__;
void* right_value81;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_47, 0, sizeof(char*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
    p_47=class_name;
    while(_while_condtional7=*p_47,    _while_condtional7) {
        if(_if_conditional19=*p_47==36,        _if_conditional19) {
            __result52__ = __result_obj__ = ((char*)(right_value80=string_substring(((char*)(right_value79=__builtin_string(class_name))),0,p_47-class_name)));
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result52__;
        }
        else {
            p_47++;
        }
    }
    __result53__ = __result_obj__ = ((char*)(right_value81=__builtin_string(class_name)));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value82;
void* right_value83;
struct buffer* buf_48;
struct sClass* klass_49;
char* class_name_50;
_Bool _if_conditional21;
int i_51;
struct sType* type_61;
void* right_value84;
char* type_name_62;
int i_63;
_Bool _if_conditional41;
void* right_value85;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&buf_48, 0, sizeof(struct buffer*));
memset(&klass_49, 0, sizeof(struct sClass*));
memset(&class_name_50, 0, sizeof(char*));
memset(&i_51, 0, sizeof(int));
memset(&type_61, 0, sizeof(struct sType*));
right_value84 = (void*)0;
memset(&type_name_62, 0, sizeof(char*));
memset(&i_63, 0, sizeof(int));
right_value85 = (void*)0;
    buf_48=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))))))));
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    klass_49=generics_type->mClass;
    class_name_50=klass_49->mName;
    buffer_append_str(buf_48,class_name_50);
    if(_if_conditional21=list$1sTypeph_length(generics_type->mGenericsTypes)>0,    _if_conditional21) {
        buffer_append_char(buf_48,36);
        buffer_append_char(buf_48,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_51=0;        i_51<list$1sTypeph_length(generics_type->mGenericsTypes);        i_51++        ){
            type_61=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_51), "14struct.c", 33, 0));
            type_name_62=(char*)come_increment_ref_count(((char*)(right_value84=create_generics_name(type_61,info))));
            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_48,type_name_62);
            for(            i_63=0;            i_63<type_61->mPointerNum;            i_63++            ){
                buffer_append_char(buf_48,112);
            }
            if(type_61->mHeap) {
                buffer_append_str(buf_48,"h");
            }
            type_name_62 = come_decrement_ref_count2(type_name_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result58__ = __result_obj__ = ((char*)(right_value85=buffer_to_string(buf_48)));
    come_call_finalizer3(buf_48,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result58__;
    come_call_finalizer3(buf_48,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional20;
int __result54__;
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional20=self==((void*)0),        _if_conditional20) {
            __result54__ = 0;
            return __result54__;
        }
        __result55__ = self->len;
        return __result55__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional22;
struct list_item$1sTypeph* it_52;
int i_53;
_Bool _while_condtional8;
_Bool _if_conditional23;
struct sType* __result56__;
struct sType* default_value_54;
struct sType* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_53, 0, sizeof(int));
memset(&default_value_54, 0, sizeof(struct sType*));
                if(_if_conditional22=position<0,                _if_conditional22) {
                    position+=self->len;
                }
                it_52=self->head;
                i_53=0;
                while(_while_condtional8=it_52!=((void*)0),                _while_condtional8) {
                    if(_if_conditional23=position==i_53,                    _if_conditional23) {
                        __result56__ = __result_obj__ = it_52->item;
                        return __result56__;
                    }
                    it_52=it_52->next;
                    i_53++;
                }
                memset(&default_value_54,0,sizeof(struct sType*));
                __result57__ = __result_obj__ = default_value_54;
                come_call_finalizer3(default_value_54,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result57__;
                come_call_finalizer3(default_value_54,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional24=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                    _if_conditional24) {
                        come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional26=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                    _if_conditional26) {
                        come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                    _if_conditional28) {
                        come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),                    _if_conditional29) {
                        self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                    _if_conditional30) {
                        come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional31=self!=((void*)0)&&self->mArrayNum!=((void*)0),                    _if_conditional31) {
                        come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional33=self!=((void*)0)&&self->mParamTypes!=((void*)0),                    _if_conditional33) {
                        come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional34=self!=((void*)0)&&self->mParamNames!=((void*)0),                    _if_conditional34) {
                        come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional36=self!=((void*)0)&&self->mResultType!=((void*)0),                    _if_conditional36) {
                        come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional37=self!=((void*)0)&&self->mAlignas!=((void*)0),                    _if_conditional37) {
                        if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional38=self!=((void*)0)&&self->mSizeNum!=((void*)0),                    _if_conditional38) {
                        if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional39=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                    _if_conditional39) {
                        self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional40=self!=((void*)0)&&self->mAsmName!=((void*)0),                    _if_conditional40) {
                        self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional9;
struct list_item$1sTypeph* prev_it_56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_56, 0, sizeof(struct list_item$1sTypeph*));
                            it_55=self->head;
                            while(_while_condtional9=it_55!=((void*)0),                            _while_condtional9) {
                                prev_it_56=it_55;
                                it_55=it_55->next;
                                come_call_finalizer3(prev_it_56,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional25) {
                                        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional27) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_57;
_Bool _while_condtional10;
struct list_item$1sNodeph* prev_it_58;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_57, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_58, 0, sizeof(struct list_item$1sNodeph*));
                            it_57=self->head;
                            while(_while_condtional10=it_57!=((void*)0),                            _while_condtional10) {
                                prev_it_58=it_57;
                                it_57=it_57->next;
                                come_call_finalizer3(prev_it_58,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional32) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_59;
_Bool _while_condtional11;
struct list_item$1charph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1charph*));
                            it_59=self->head;
                            while(_while_condtional11=it_59!=((void*)0),                            _while_condtional11) {
                                prev_it_60=it_59;
                                it_59=it_59->next;
                                come_call_finalizer3(prev_it_60,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional35=self!=((void*)0)&&self->item!=((void*)0),                                    _if_conditional35) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional42;
void* right_value86;
void* right_value87;
struct buffer* buf_64;
void* right_value88;
struct list$1tuple2$2charphsTypephph* o2_saved_65;
struct tuple2$2charphsTypeph* it_68;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_71;
struct sType* type_72;
void* right_value89;
_Bool _if_conditional50;
void* right_value90;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&buf_64, 0, sizeof(struct buffer*));
right_value88 = (void*)0;
memset(&o2_saved_65, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_68, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_71, 0, sizeof(char*));
memset(&type_72, 0, sizeof(struct sType*));
memset(&name_71, 0, sizeof(char*));
memset(&type_72, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value90 = (void*)0;
    if(_if_conditional42=!klass->mOutputed,    _if_conditional42) {
        klass->mOutputed=(_Bool)1;
        buf_64=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value86=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "buffer"))))))));
        come_call_finalizer3(right_value86,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value87,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_64,((char*)(right_value88=xsprintf("struct %s\n{\n",klass->mName))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        o2_saved_65=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_68=list$1tuple2$2charphsTypephph_begin((o2_saved_65));        !list$1tuple2$2charphsTypephph_end((o2_saved_65));        it_68=list$1tuple2$2charphsTypephph_next((o2_saved_65))        ){
            multiple_assign_var1=it_68;
            name_71=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_72=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_72->mStatic=(_Bool)0;
            buffer_append_str(buf_64,"    ");
            buffer_append_str(buf_64,((char*)(right_value89=make_define_var(type_72,name_71,(_Bool)0,info))));
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_64,";\n");
            name_71 = come_decrement_ref_count2(name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_72,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_65,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_64,"};\n");
        if(_if_conditional50=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional50) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(right_value90=buffer_to_string(buf_64))));
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(buf_64,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple2$2charphsTypeph* result_66;
struct tuple2$2charphsTypeph* __result59__;
_Bool _if_conditional44;
struct tuple2$2charphsTypeph* __result60__;
struct tuple2$2charphsTypeph* result_67;
struct tuple2$2charphsTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_67, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional43=self==((void*)0),            _if_conditional43) {
                memset(&result_66,0,sizeof(struct tuple2$2charphsTypeph*));
                __result59__ = __result_obj__ = result_66;
                return __result59__;
            }
            self->it=self->head;
            if(self->it) {
                __result60__ = __result_obj__ = self->it->item;
                return __result60__;
            }
            memset(&result_67,0,sizeof(struct tuple2$2charphsTypeph*));
            __result61__ = __result_obj__ = result_67;
            return __result61__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
            __result62__ = self==((void*)0)||self->it==((void*)0);
            return __result62__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple2$2charphsTypeph* result_69;
struct tuple2$2charphsTypeph* __result63__;
_Bool _if_conditional46;
struct tuple2$2charphsTypeph* __result64__;
struct tuple2$2charphsTypeph* result_70;
struct tuple2$2charphsTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_70, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional45=self==((void*)0)||self->it==((void*)0),            _if_conditional45) {
                memset(&result_69,0,sizeof(struct tuple2$2charphsTypeph*));
                __result63__ = __result_obj__ = result_69;
                return __result63__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result64__ = __result_obj__ = self->it->item;
                return __result64__;
            }
            memset(&result_70,0,sizeof(struct tuple2$2charphsTypeph*));
            __result65__ = __result_obj__ = result_70;
            return __result65__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_73;
_Bool _while_condtional12;
struct list_item$1tuple2$2charphsTypephph* prev_it_74;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_73, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            it_73=self->head;
            while(_while_condtional12=it_73!=((void*)0),            _while_condtional12) {
                prev_it_74=it_73;
                it_73=it_73->next;
                come_call_finalizer3(prev_it_74,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional47=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional47) {
                        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

void output_struct_header(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value91;
void* right_value92;
struct buffer* buf_75;
_Bool _if_conditional52;
void* right_value93;
void* right_value94;
struct list$1tuple2$2charphsTypephph* o2_saved_76;
struct tuple2$2charphsTypeph* it_77;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_78;
struct sType* type_79;
void* right_value95;
_Bool _if_conditional53;
void* right_value96;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&buf_75, 0, sizeof(struct buffer*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&o2_saved_76, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_77, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_78, 0, sizeof(char*));
memset(&type_79, 0, sizeof(struct sType*));
memset(&name_78, 0, sizeof(char*));
memset(&type_79, 0, sizeof(struct sType*));
right_value95 = (void*)0;
right_value96 = (void*)0;
    if(_if_conditional51=!klass->mOutputed2,    _if_conditional51) {
        klass->mOutputed2=(_Bool)1;
        buf_75=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value92=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value91=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 98, "buffer"))))))));
        come_call_finalizer3(right_value91,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value92,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        if(klass->mParentClassName) {
            buffer_append_str(buf_75,((char*)(right_value93=xsprintf("struct %s extends %s\n{\n",klass->mName,klass->mParentClassName))));
            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            buffer_append_str(buf_75,((char*)(right_value94=xsprintf("struct %s\n{\n",klass->mName))));
            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        for(        o2_saved_76=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_77=list$1tuple2$2charphsTypephph_begin((o2_saved_76));        !list$1tuple2$2charphsTypephph_end((o2_saved_76));        it_77=list$1tuple2$2charphsTypephph_next((o2_saved_76))        ){
            multiple_assign_var2=it_77;
            name_78=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_79=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_79->mStatic=(_Bool)0;
            buffer_append_str(buf_75,"    ");
            buffer_append_str(buf_75,((char*)(right_value95=make_define_var_no_solved(type_79,name_78,(_Bool)0,info))));
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_75,";\n");
            name_78 = come_decrement_ref_count2(name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_79,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_76,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_75,"};\n");
        if(_if_conditional53=info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname),        _if_conditional53) {
        }
        else {
            add_come_code_at_come_header(info,"%s",((char*)(right_value96=buffer_to_string(buf_75))));
            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_80;
_Bool _if_conditional54;
_Bool __result66__;
struct sClass* klass_81;
_Bool _if_conditional55;
_Bool __result67__;
_Bool _if_conditional56;
_Bool __result68__;
int i_82;
_Bool result_83;
_Bool _if_conditional57;
_Bool __result69__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_80, 0, sizeof(struct sType*));
memset(&klass_81, 0, sizeof(struct sClass*));
memset(&i_82, 0, sizeof(int));
memset(&result_83, 0, sizeof(_Bool));
    type2_80=type->mNoSolvedGenericsType->v1;
    if(_if_conditional54=type2_80&&is_no_contained_generics_types(type2_80,info),    _if_conditional54) {
        __result66__ = (_Bool)0;
        return __result66__;
    }
    klass_81=type->mClass;
    if(klass_81->mGenerics) {
        __result67__ = (_Bool)0;
        return __result67__;
    }
    if(klass_81->mMethodGenerics) {
        __result68__ = (_Bool)0;
        return __result68__;
    }
    for(    i_82=0;    i_82<list$1sTypeph_length(type->mGenericsTypes);    i_82++    ){
        result_83=is_no_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_82), "14struct.c", 144, 1)),info);
        if(_if_conditional57=!result_83,        _if_conditional57) {
            __result69__ = (_Bool)0;
            return __result69__;
        }
    }
    __result70__ = (_Bool)1;
    return __result70__;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_84;
_Bool _if_conditional58;
_Bool __result71__;
struct sClass* klass_85;
_Bool _if_conditional59;
_Bool __result72__;
int i_86;
_Bool result_87;
_Bool _if_conditional60;
_Bool __result73__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_84, 0, sizeof(struct sType*));
memset(&klass_85, 0, sizeof(struct sClass*));
memset(&i_86, 0, sizeof(int));
memset(&result_87, 0, sizeof(_Bool));
    type2_84=type->mNoSolvedGenericsType->v1;
    if(_if_conditional58=type2_84&&is_contained_method_generics_types(type2_84,info),    _if_conditional58) {
        __result71__ = (_Bool)1;
        return __result71__;
    }
    klass_85=type->mClass;
    if(klass_85->mMethodGenerics) {
        __result72__ = (_Bool)1;
        return __result72__;
    }
    for(    i_86=0;    i_86<list$1sTypeph_length(type->mGenericsTypes);    i_86++    ){
        result_87=is_contained_method_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_86), "14struct.c", 168, 2)),info);
        if(result_87) {
            __result73__ = (_Bool)1;
            return __result73__;
        }
    }
    __result74__ = (_Bool)0;
    return __result74__;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value97;
char* new_name_88;
_Bool _if_conditional65;
void* right_value133;
struct sType* type2_115;
struct sClass* generics_class_119;
_Bool _if_conditional149;
_Bool __result101__;
void* right_value134;
void* right_value135;
struct sClass* new_class_120;
void* right_value142;
int i_165;
struct list$1tuple2$2charphsTypephph* o2_saved_166;
struct tuple2$2charphsTypeph* it_167;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_168;
struct sType* type_169;
void* right_value143;
struct sType* new_type_170;
void* right_value147;
void* right_value148;
void* right_value149;
void* right_value150;
void* right_value151;
struct sType* __dec_obj40;
_Bool _if_conditional205;
struct sClass* generics_class_176;
_Bool _if_conditional206;
_Bool __result129__;
void* right_value152;
void* right_value153;
struct sClass* new_class_177;
void* right_value154;
_Bool existance_method_generics_178;
int i_179;
struct list$1tuple2$2charphsTypephph* o2_saved_180;
struct tuple2$2charphsTypeph* it_181;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_182;
struct sType* type_183;
void* right_value155;
struct sType* new_type_184;
_Bool _if_conditional207;
void* right_value156;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
struct sType* __dec_obj41;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value161;
struct sType* __dec_obj42;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&new_name_88, 0, sizeof(char*));
right_value133 = (void*)0;
memset(&type2_115, 0, sizeof(struct sType*));
memset(&generics_class_119, 0, sizeof(struct sClass*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&new_class_120, 0, sizeof(struct sClass*));
right_value142 = (void*)0;
memset(&i_165, 0, sizeof(int));
memset(&o2_saved_166, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_167, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_168, 0, sizeof(char*));
memset(&type_169, 0, sizeof(struct sType*));
memset(&name_168, 0, sizeof(char*));
memset(&type_169, 0, sizeof(struct sType*));
right_value143 = (void*)0;
memset(&new_type_170, 0, sizeof(struct sType*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&generics_class_176, 0, sizeof(struct sClass*));
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&new_class_177, 0, sizeof(struct sClass*));
right_value154 = (void*)0;
memset(&existance_method_generics_178, 0, sizeof(_Bool));
memset(&i_179, 0, sizeof(int));
memset(&o2_saved_180, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_181, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_182, 0, sizeof(char*));
memset(&type_183, 0, sizeof(struct sType*));
memset(&name_182, 0, sizeof(char*));
memset(&type_183, 0, sizeof(struct sType*));
right_value155 = (void*)0;
memset(&new_type_184, 0, sizeof(struct sType*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
    new_name_88=(char*)come_increment_ref_count(((char*)(right_value97=create_generics_name(type,info))));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional65=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_88),    _if_conditional65) {
        type2_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(type))));
        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
        generics_class_119=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        if(_if_conditional149=generics_class_119==((void*)0),        _if_conditional149) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result101__ = (_Bool)0;
            come_call_finalizer3(type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
            new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result101__;
        }
        new_class_120=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value135=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value134=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 192, "sClass")))),new_name_88,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(right_value134,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value135,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(new_name_88)))),(struct sClass*)come_increment_ref_count(new_class_120));
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_165=0;
        for(        o2_saved_166=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_119->mFields)),it_167=list$1tuple2$2charphsTypephph_begin((o2_saved_166));        !list$1tuple2$2charphsTypephph_end((o2_saved_166));        it_167=list$1tuple2$2charphsTypephph_next((o2_saved_166))        ){
            multiple_assign_var3=it_167;
            name_168=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_169=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=solve_generics(type_169,type2_115,info))));
            come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2charphsTypephph_push_back(new_class_120->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value150=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value149=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 202, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value147=string_clone(name_168)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(new_type_170)))))))));
            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
            right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value150,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            name_168 = come_decrement_ref_count2(name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_166,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj40=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(type))));
        come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_120;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_120,info);
        come_call_finalizer3(type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(new_class_120,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional205=!map$2charphsClassph_find(info->classes,new_name_88),        _if_conditional205) {
            generics_class_176=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
            if(_if_conditional206=generics_class_176==((void*)0),            _if_conditional206) {
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                __result129__ = (_Bool)0;
                new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result129__;
            }
            new_class_177=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value153=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value152=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 220, "sClass")))),new_name_88,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            come_call_finalizer3(right_value152,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value153,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(new_name_88)))),(struct sClass*)come_increment_ref_count(new_class_177));
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            existance_method_generics_178=(_Bool)0;
            i_179=0;
            for(            o2_saved_180=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_176->mFields)),it_181=list$1tuple2$2charphsTypephph_begin((o2_saved_180));            !list$1tuple2$2charphsTypephph_end((o2_saved_180));            it_181=list$1tuple2$2charphsTypephph_next((o2_saved_180))            ){
                multiple_assign_var4=it_181;
                name_182=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                type_183=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                new_type_184=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=solve_generics(type_183,generics_type,info))));
                come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional207=is_contained_method_generics_types(new_type_184,info),                _if_conditional207) {
                }
                list$1tuple2$2charphsTypephph_push_back(new_class_177->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value159=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value158=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 235, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value156=string_clone(name_182)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(new_type_184)))))))));
                right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
                right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value159,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(new_type_184,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_180,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj41=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(type))));
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            type->mClass=new_class_177;
            list$1sTypeph_reset(type->mGenericsTypes);
            if(_if_conditional208=!existance_method_generics_178,            _if_conditional208) {
                output_struct(new_class_177,info);
            }
            come_call_finalizer3(new_class_177,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional209=type->mNoSolvedGenericsType->v1==((void*)0),            _if_conditional209) {
                __dec_obj42=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(type))));
                come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_88);
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    __result130__ = (_Bool)1;
    new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result130__;
    new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
unsigned int hash_89;
int it_90;
_Bool _while_condtional13;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool __result75__;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool __result76__;
_Bool __result77__;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(int));
        hash_89=string_get_hash_key(((char*)key))%self->size;
        it_90=hash_89;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional61=self->item_existance[it_90],            _if_conditional61) {
                if(_if_conditional62=string_equals(self->keys[it_90],key),                _if_conditional62) {
                    __result75__ = (_Bool)1;
                    return __result75__;
                }
                it_90++;
                if(_if_conditional63=it_90>=self->size,                _if_conditional63) {
                    it_90=0;
                }
                else {
                    if(_if_conditional64=it_90==hash_89,                    _if_conditional64) {
                        __result76__ = (_Bool)0;
                        return __result76__;
                    }
                }
            }
            else {
                __result77__ = (_Bool)0;
                return __result77__;
            }
        }
        __result78__ = (_Bool)0;
        return __result78__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional66;
struct sType* __result79__;
void* right_value98;
struct sType* result_91;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value105;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional72;
void* right_value108;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional76;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional77;
void* right_value110;
char* __dec_obj19;
_Bool _if_conditional78;
void* right_value111;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional79;
void* right_value119;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value120;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional94;
void* right_value127;
struct list$1charph* __dec_obj29;
_Bool _if_conditional98;
void* right_value128;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value129;
struct sNode* __dec_obj31;
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
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value130;
struct sNode* __dec_obj32;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
void* right_value131;
char* __dec_obj33;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
void* right_value132;
char* __dec_obj34;
_Bool _if_conditional140;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_91, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
            if(_if_conditional66=self==(void*)0,            _if_conditional66) {
                __result79__ = __result_obj__ = (void*)0;
                return __result79__;
            }
            result_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value98,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_91->mClass=self->mClass;
            }
            if(_if_conditional68=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional68) {
                __dec_obj15=result_91->mMultipleTypes;
                result_91->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional72=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional72) {
                __dec_obj17=result_91->mNoSolvedGenericsType;
                result_91->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value108,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional76=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional76) {
                __dec_obj18=result_91->mOriginalLoadVarType;
                result_91->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional77=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional77) {
                __dec_obj19=result_91->mGenericsName;
                result_91->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value110=string_clone(self->mGenericsName))));
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional78=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional78) {
                __dec_obj20=result_91->mGenericsTypes;
                result_91->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional79=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional79) {
                __dec_obj24=result_91->mArrayNum;
                result_91->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value119=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value119,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_91->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional93=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional93) {
                __dec_obj25=result_91->mParamTypes;
                result_91->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value120,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional94=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional94) {
                __dec_obj29=result_91->mParamNames;
                result_91->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value127,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional98=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional98) {
                __dec_obj30=result_91->mResultType;
                result_91->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value128=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value128,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                result_91->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional100=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional100) {
                __dec_obj31=result_91->mAlignas;
                result_91->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(self->mAlignas))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_91->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                result_91->mShort=self->mShort;
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_91->mLong=self->mLong;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_91->mLongLong=self->mLongLong;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_91->mConstant=self->mConstant;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_91->mRegister=self->mRegister;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_91->mVolatile=self->mVolatile;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_91->mStatic=self->mStatic;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_91->mUniq=self->mUniq;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_91->mRecord=self->mRecord;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_91->mExtern=self->mExtern;
            }
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                result_91->mRestrict=self->mRestrict;
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_91->mImmutable=self->mImmutable;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_91->mHeap=self->mHeap;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                result_91->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                result_91->mDelegate=self->mDelegate;
            }
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                result_91->mShare=self->mShare;
            }
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                result_91->mClone=self->mClone;
            }
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                result_91->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                result_91->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                result_91->mRefference=self->mRefference;
            }
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                result_91->mException=self->mException;
            }
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                result_91->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional124=self!=((void*)0),            _if_conditional124) {
                result_91->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional125=self!=((void*)0),            _if_conditional125) {
                result_91->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional126=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional126) {
                __dec_obj32=result_91->mSizeNum;
                result_91->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=sNode_clone(self->mSizeNum))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional127=self!=((void*)0),            _if_conditional127) {
                result_91->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional128=self!=((void*)0),            _if_conditional128) {
                result_91->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional129=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional129) {
                __dec_obj33=result_91->mOriginalTypeName;
                result_91->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->mOriginalTypeName))));
                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional130=self!=((void*)0),            _if_conditional130) {
                result_91->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                result_91->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                result_91->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional133=self!=((void*)0),            _if_conditional133) {
                result_91->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional134=self!=((void*)0),            _if_conditional134) {
                result_91->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional135=self!=((void*)0),            _if_conditional135) {
                result_91->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional136=self!=((void*)0),            _if_conditional136) {
                result_91->mInline=self->mInline;
            }
            if(_if_conditional137=self!=((void*)0),            _if_conditional137) {
                result_91->mNullValue=self->mNullValue;
            }
            if(_if_conditional138=self!=((void*)0),            _if_conditional138) {
                result_91->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional139=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional139) {
                __dec_obj34=result_91->mAsmName;
                result_91->mAsmName=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(self->mAsmName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional140=self!=((void*)0),            _if_conditional140) {
                result_91->mArrayPointerType=self->mArrayPointerType;
            }
            __result96__ = __result_obj__ = result_91;
            come_call_finalizer3(result_91,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result96__;
            come_call_finalizer3(result_91,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional69;
struct list$1sTypeph* __result80__;
void* right_value99;
void* right_value100;
struct list$1sTypeph* result_92;
struct list_item$1sTypeph* it_93;
_Bool _while_condtional14;
void* right_value104;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_92, 0, sizeof(struct list$1sTypeph*));
memset(&it_93, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
                    if(_if_conditional69=self==((void*)0),                    _if_conditional69) {
                        __result80__ = __result_obj__ = ((void*)0);
                        return __result80__;
                    }
                    result_92=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value100=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 137, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value100,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_93=self->head;
                    while(_while_condtional14=it_93!=((void*)0),                    _while_condtional14) {
                        list$1sTypeph_add(result_92,(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=sType_clone(it_93->item)))));
                        come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_93=it_93->next;
                    }
                    __result83__ = __result_obj__ = result_92;
                    come_call_finalizer3(result_92,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result83__;
                    come_call_finalizer3(result_92,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result81__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result81__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional70;
void* right_value101;
struct list_item$1sTypeph* litem_94;
struct sType* __dec_obj12;
_Bool _if_conditional71;
void* right_value102;
struct list_item$1sTypeph* litem_95;
struct sType* __dec_obj13;
void* right_value103;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj14;
struct list$1sTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1sTypeph*));
right_value102 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1sTypeph*));
right_value103 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional70=self->len==0,                            _if_conditional70) {
                                litem_94=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value101=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 151, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value101,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_94->prev=((void*)0);
                                litem_94->next=((void*)0);
                                __dec_obj12=litem_94->item;
                                litem_94->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_94;
                                self->head=litem_94;
                            }
                            else {
                                if(_if_conditional71=self->len==1,                                _if_conditional71) {
                                    litem_95=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 161, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value102,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_95->prev=self->head;
                                    litem_95->next=((void*)0);
                                    __dec_obj13=litem_95->item;
                                    litem_95->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_95;
                                    self->head->next=litem_95;
                                }
                                else {
                                    litem_96=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 171, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value103,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_96->prev=self->tail;
                                    litem_96->next=((void*)0);
                                    __dec_obj14=litem_96->item;
                                    litem_96->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_96;
                                    self->tail=litem_96;
                                }
                            }
                            self->len++;
                            __result82__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_97;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_97, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_98, 0, sizeof(struct list_item$1sTypeph*));
                    it_97=self->head;
                    while(_while_condtional15=it_97!=((void*)0),                    _while_condtional15) {
                        prev_it_98=it_97;
                        it_97=it_97->next;
                        come_call_finalizer3(prev_it_98,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional73;
struct tuple1$1sTypeph* __result84__;
void* right_value106;
struct tuple1$1sTypeph* result_99;
_Bool _if_conditional75;
void* right_value107;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_99, 0, sizeof(struct tuple1$1sTypeph*));
right_value107 = (void*)0;
                    if(_if_conditional73=self==(void*)0,                    _if_conditional73) {
                        __result84__ = __result_obj__ = (void*)0;
                        return __result84__;
                    }
                    result_99=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value106,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional75=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional75) {
                        __dec_obj16=result_99->v1;
                        result_99->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value107,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result85__ = __result_obj__ = result_99;
                    come_call_finalizer3(result_99,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                    come_call_finalizer3(result_99,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional74=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional74) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional80;
struct list$1sNodeph* __result86__;
void* right_value112;
void* right_value113;
struct list$1sNodeph* result_100;
struct list_item$1sNodeph* it_101;
_Bool _while_condtional16;
void* right_value118;
struct list$1sNodeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_100, 0, sizeof(struct list$1sNodeph*));
memset(&it_101, 0, sizeof(struct list_item$1sNodeph*));
right_value118 = (void*)0;
                    if(_if_conditional80=self==((void*)0),                    _if_conditional80) {
                        __result86__ = __result_obj__ = ((void*)0);
                        return __result86__;
                    }
                    result_100=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value113=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value112=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 137, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value112,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value113,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_101=self->head;
                    while(_while_condtional16=it_101!=((void*)0),                    _while_condtional16) {
                        list$1sNodeph_add(result_100,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(it_101->item)))));
                        if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_101=it_101->next;
                    }
                    __result91__ = __result_obj__ = result_100;
                    come_call_finalizer3(result_100,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result91__;
                    come_call_finalizer3(result_100,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result87__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result87__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional81;
void* right_value114;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj21;
_Bool _if_conditional82;
void* right_value115;
struct list_item$1sNodeph* litem_103;
struct sNode* __dec_obj22;
void* right_value116;
struct list_item$1sNodeph* litem_104;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_102, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sNodeph*));
right_value116 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional81=self->len==0,                            _if_conditional81) {
                                litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 151, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value114,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_102->prev=((void*)0);
                                litem_102->next=((void*)0);
                                __dec_obj21=litem_102->item;
                                litem_102->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_102;
                                self->head=litem_102;
                            }
                            else {
                                if(_if_conditional82=self->len==1,                                _if_conditional82) {
                                    litem_103=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 161, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value115,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_103->prev=self->head;
                                    litem_103->next=((void*)0);
                                    __dec_obj22=litem_103->item;
                                    litem_103->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_103;
                                    self->head->next=litem_103;
                                }
                                else {
                                    litem_104=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 171, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value116,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_104->prev=self->tail;
                                    litem_104->next=((void*)0);
                                    __dec_obj23=litem_104->item;
                                    litem_104->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_104;
                                    self->tail=litem_104;
                                }
                            }
                            self->len++;
                            __result88__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result88__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional83;
struct sNode* __result89__;
void* right_value117;
struct sNode* result_105;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_105, 0, sizeof(struct sNode*));
                            if(_if_conditional83=self==(void*)0,                            _if_conditional83) {
                                __result89__ = __result_obj__ = (void*)0;
                                return __result89__;
                            }
                            result_105=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional84=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional84) {
                                result_105->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional85=self!=((void*)0),                            _if_conditional85) {
                                result_105->finalize=self->finalize;
                            }
                            if(_if_conditional86=self!=((void*)0),                            _if_conditional86) {
                                result_105->clone=self->clone;
                            }
                            if(_if_conditional87=self!=((void*)0),                            _if_conditional87) {
                                result_105->compile=self->compile;
                            }
                            if(_if_conditional88=self!=((void*)0),                            _if_conditional88) {
                                result_105->sline=self->sline;
                            }
                            if(_if_conditional89=self!=((void*)0),                            _if_conditional89) {
                                result_105->sname=self->sname;
                            }
                            if(_if_conditional90=self!=((void*)0),                            _if_conditional90) {
                                result_105->terminated=self->terminated;
                            }
                            if(_if_conditional91=self!=((void*)0),                            _if_conditional91) {
                                result_105->kind=self->kind;
                            }
                            __result90__ = __result_obj__ = result_105;
                            if(result_105) { result_105 = come_decrement_ref_count2(result_105, ((struct sNode*)result_105)->finalize, ((struct sNode*)result_105)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result90__;
                            if(result_105) { result_105 = come_decrement_ref_count2(result_105, ((struct sNode*)result_105)->finalize, ((struct sNode*)result_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_106;
_Bool _while_condtional17;
struct list_item$1sNodeph* prev_it_107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_106, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_107, 0, sizeof(struct list_item$1sNodeph*));
                    it_106=self->head;
                    while(_while_condtional17=it_106!=((void*)0),                    _while_condtional17) {
                        prev_it_107=it_106;
                        it_106=it_106->next;
                        come_call_finalizer3(prev_it_107,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional95;
struct list$1charph* __result92__;
void* right_value121;
void* right_value122;
struct list$1charph* result_108;
struct list_item$1charph* it_109;
_Bool _while_condtional18;
void* right_value126;
struct list$1charph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&result_108, 0, sizeof(struct list$1charph*));
memset(&it_109, 0, sizeof(struct list_item$1charph*));
right_value126 = (void*)0;
                    if(_if_conditional95=self==((void*)0),                    _if_conditional95) {
                        __result92__ = __result_obj__ = ((void*)0);
                        return __result92__;
                    }
                    result_108=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value122=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 137, "list$1charph"))))))));
                    come_call_finalizer3(right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value122,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_109=self->head;
                    while(_while_condtional18=it_109!=((void*)0),                    _while_condtional18) {
                        list$1charph_add(result_108,(char*)come_increment_ref_count(((char*)(right_value126=string_clone(it_109->item)))));
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_109=it_109->next;
                    }
                    __result95__ = __result_obj__ = result_108;
                    come_call_finalizer3(result_108,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                    come_call_finalizer3(result_108,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result93__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result93__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional96;
void* right_value123;
struct list_item$1charph* litem_110;
char* __dec_obj26;
_Bool _if_conditional97;
void* right_value124;
struct list_item$1charph* litem_111;
char* __dec_obj27;
void* right_value125;
struct list_item$1charph* litem_112;
char* __dec_obj28;
struct list$1charph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1charph*));
right_value124 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
right_value125 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional96=self->len==0,                            _if_conditional96) {
                                litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 151, "list_item$1charph"))));
                                come_call_finalizer3(right_value123,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_110->prev=((void*)0);
                                litem_110->next=((void*)0);
                                __dec_obj26=litem_110->item;
                                litem_110->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_110;
                                self->head=litem_110;
                            }
                            else {
                                if(_if_conditional97=self->len==1,                                _if_conditional97) {
                                    litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 161, "list_item$1charph"))));
                                    come_call_finalizer3(right_value124,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_111->prev=self->head;
                                    litem_111->next=((void*)0);
                                    __dec_obj27=litem_111->item;
                                    litem_111->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_111;
                                    self->head->next=litem_111;
                                }
                                else {
                                    litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value125=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 171, "list_item$1charph"))));
                                    come_call_finalizer3(right_value125,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_112->prev=self->tail;
                                    litem_112->next=((void*)0);
                                    __dec_obj28=litem_112->item;
                                    litem_112->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_112;
                                    self->tail=litem_112;
                                }
                            }
                            self->len++;
                            __result94__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result94__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_113;
_Bool _while_condtional19;
struct list_item$1charph* prev_it_114;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_113, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_114, 0, sizeof(struct list_item$1charph*));
                    it_113=self->head;
                    while(_while_condtional19=it_113!=((void*)0),                    _while_condtional19) {
                        prev_it_114=it_113;
                        it_113=it_113->next;
                        come_call_finalizer3(prev_it_114,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_116;
unsigned int hash_117;
unsigned int it_118;
_Bool _while_condtional20;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct sClass* __result97__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sClass* __result98__;
struct sClass* __result99__;
struct sClass* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_116, 0, sizeof(struct sClass*));
memset(&hash_117, 0, sizeof(unsigned int));
memset(&it_118, 0, sizeof(unsigned int));
            memset(&default_value_116,0,sizeof(struct sClass*));
            hash_117=string_get_hash_key(((char*)key))%self->size;
            it_118=hash_117;
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                if(_if_conditional141=self->item_existance[it_118],                _if_conditional141) {
                    if(_if_conditional142=string_equals(self->keys[it_118],key),                    _if_conditional142) {
                        __result97__ = __result_obj__ = self->items[it_118];
                        come_call_finalizer3(default_value_116,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        return __result97__;
                    }
                    it_118++;
                    if(_if_conditional147=it_118>=self->size,                    _if_conditional147) {
                        it_118=0;
                    }
                    else {
                        if(_if_conditional148=it_118==hash_117,                        _if_conditional148) {
                            __result98__ = __result_obj__ = default_value_116;
                            come_call_finalizer3(default_value_116,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result98__;
                        }
                    }
                }
                else {
                    __result99__ = __result_obj__ = default_value_116;
                    come_call_finalizer3(default_value_116,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result99__;
                }
            }
            __result100__ = __result_obj__ = default_value_116;
            come_call_finalizer3(default_value_116,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result100__;
            come_call_finalizer3(default_value_116,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional143=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional143) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional144=self!=((void*)0)&&self->mFields!=((void*)0),                            _if_conditional144) {
                                come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional145=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional145) {
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional146=self!=((void*)0)&&self->mParentClassName!=((void*)0),                            _if_conditional146) {
                                self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional150;
unsigned int hash_138;
unsigned int it_139;
_Bool _while_condtional23;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional184;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool same_key_exist_156;
char* it2_159;
_Bool _if_conditional193;
_Bool _if_conditional194;
struct map$2charphsClassph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_138, 0, sizeof(unsigned int));
memset(&it_139, 0, sizeof(unsigned int));
memset(&same_key_exist_156, 0, sizeof(_Bool));
memset(&it2_159, 0, sizeof(char*));
            if(_if_conditional150=self->len*10>=self->size,            _if_conditional150) {
                map$2charphsClassph_rehash(self);
            }
            hash_138=string_get_hash_key(key)%self->size;
            it_139=hash_138;
            while(_while_condtional23=(_Bool)1,            _while_condtional23) {
                if(_if_conditional162=self->item_existance[it_139],                _if_conditional162) {
                    if(_if_conditional163=string_equals(self->keys[it_139],key),                    _if_conditional163) {
                        if(_if_conditional164=1,                        _if_conditional164) {
                            list$1charp_remove(self->key_list,self->keys[it_139]);
                            self->keys[it_139] = come_decrement_ref_count2(self->keys[it_139], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_139]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_139]);
                            self->keys[it_139]=key;
                        }
                        if(_if_conditional184=1,                        _if_conditional184) {
                            come_call_finalizer3(self->items[it_139],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_139]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_139]=item;
                        }
                        break;
                    }
                    it_139++;
                    if(_if_conditional185=it_139>=self->size,                    _if_conditional185) {
                        it_139=0;
                    }
                    else {
                        if(_if_conditional186=it_139==hash_138,                        _if_conditional186) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_139]=(_Bool)1;
                    if(_if_conditional187=1,                    _if_conditional187) {
                        self->keys[it_139]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_139]=key;
                    }
                    if(_if_conditional188=1,                    _if_conditional188) {
                        self->items[it_139]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_139]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_156=(_Bool)0;
            for(            it2_159=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_159=list$1charp_next(self->key_list)            ){
                if(_if_conditional193=string_equals(it2_159,key),                _if_conditional193) {
                    same_key_exist_156=(_Bool)1;
                }
            }
            if(_if_conditional194=!same_key_exist_156,            _if_conditional194) {
                list$1charp_push_back(self->key_list,key);
            }
            __result125__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result125__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_121;
void* right_value136;
char** keys_122;
void* right_value137;
struct sClass** items_123;
void* right_value138;
_Bool* item_existance_124;
int len_125;
char* it_128;
struct sClass* default_value_131;
struct sClass* it2_134;
unsigned int hash_135;
int n_136;
_Bool _while_condtional22;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct sClass* default_value_137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_121, 0, sizeof(int));
right_value136 = (void*)0;
memset(&keys_122, 0, sizeof(char**));
right_value137 = (void*)0;
memset(&items_123, 0, sizeof(struct sClass**));
right_value138 = (void*)0;
memset(&item_existance_124, 0, sizeof(_Bool*));
memset(&len_125, 0, sizeof(int));
memset(&it_128, 0, sizeof(char*));
memset(&default_value_131, 0, sizeof(struct sClass*));
memset(&it2_134, 0, sizeof(struct sClass*));
memset(&hash_135, 0, sizeof(unsigned int));
memset(&n_136, 0, sizeof(int));
memset(&default_value_137, 0, sizeof(struct sClass*));
                    size_121=self->size*10;
                    keys_122=(char**)come_increment_ref_count(((char**)(right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_121)), "./neo-c.h", 1317, "char*%"))));
                    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_123=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value137=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_121)), "./neo-c.h", 1318, "sClass*%"))));
                    come_call_finalizer3(right_value137,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_124=(_Bool*)come_increment_ref_count(((_Bool*)(right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_121)), "./neo-c.h", 1319, "bool"))));
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_125=0;
                    for(                    it_128=map$2charphsClassph_begin(self);                    !map$2charphsClassph_end(self);                    it_128=map$2charphsClassph_next(self)                    ){
                        memset(&default_value_131,0,sizeof(struct sClass*));
                        it2_134=map$2charphsClassph_at(self,it_128,default_value_131);
                        hash_135=string_get_hash_key(it_128)%size_121;
                        n_136=hash_135;
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            if(_if_conditional159=item_existance_124[n_136],                            _if_conditional159) {
                                n_136++;
                                if(_if_conditional160=n_136>=size_121,                                _if_conditional160) {
                                    n_136=0;
                                }
                                else {
                                    if(_if_conditional161=n_136==hash_135,                                    _if_conditional161) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_124[n_136]=(_Bool)1;
                                keys_122[n_136]=it_128;
                                items_123[n_136]=map$2charphsClassph_at(self,it_128,default_value_137);
                                len_125++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_122;
                    self->items=items_123;
                    self->item_existance=item_existance_124;
                    self->size=size_121;
                    self->len=len_125;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional151;
char* result_126;
char* __result102__;
_Bool _if_conditional152;
char* __result103__;
char* result_127;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(char*));
memset(&result_127, 0, sizeof(char*));
                        if(_if_conditional151=self==((void*)0),                        _if_conditional151) {
                            memset(&result_126,0,sizeof(char*));
                            __result102__ = __result_obj__ = result_126;
                            return __result102__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result103__ = __result_obj__ = self->key_list->it->item;
                            return __result103__;
                        }
                        memset(&result_127,0,sizeof(char*));
                        __result104__ = __result_obj__ = result_127;
                        return __result104__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result105__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                        return __result105__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional153;
char* result_129;
char* __result106__;
_Bool _if_conditional154;
char* __result107__;
char* result_130;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_129, 0, sizeof(char*));
memset(&result_130, 0, sizeof(char*));
                        if(_if_conditional153=self==((void*)0)||self->key_list->it==((void*)0),                        _if_conditional153) {
                            memset(&result_129,0,sizeof(char*));
                            __result106__ = __result_obj__ = result_129;
                            return __result106__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result107__ = __result_obj__ = self->key_list->it->item;
                            return __result107__;
                        }
                        memset(&result_130,0,sizeof(char*));
                        __result108__ = __result_obj__ = result_130;
                        return __result108__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_132;
unsigned int it_133;
_Bool _while_condtional21;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct sClass* __result109__;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct sClass* __result110__;
struct sClass* __result111__;
struct sClass* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_132, 0, sizeof(unsigned int));
memset(&it_133, 0, sizeof(unsigned int));
                            hash_132=string_get_hash_key(((char*)key))%self->size;
                            it_133=hash_132;
                            while(_while_condtional21=(_Bool)1,                            _while_condtional21) {
                                if(_if_conditional155=self->item_existance[it_133],                                _if_conditional155) {
                                    if(_if_conditional156=string_equals(self->keys[it_133],key),                                    _if_conditional156) {
                                        __result109__ = __result_obj__ = self->items[it_133];
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result109__;
                                    }
                                    it_133++;
                                    if(_if_conditional157=it_133>=self->size,                                    _if_conditional157) {
                                        it_133=0;
                                    }
                                    else {
                                        if(_if_conditional158=it_133==hash_132,                                        _if_conditional158) {
                                            __result110__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result110__;
                                        }
                                    }
                                }
                                else {
                                    __result111__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result111__;
                                }
                            }
                            __result112__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result112__;
                            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_140;
struct list_item$1charp* it_141;
_Bool _while_condtional24;
_Bool _if_conditional165;
struct list$1charp* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_140, 0, sizeof(int));
memset(&it_141, 0, sizeof(struct list_item$1charp*));
                                it2_140=0;
                                it_141=self->head;
                                while(_while_condtional24=it_141!=((void*)0),                                _while_condtional24) {
                                    if(_if_conditional165=string_equals(it_141->item,item),                                    _if_conditional165) {
                                        list$1charp_delete(self,it2_140,it2_140+1);
                                        break;
                                    }
                                    it2_140++;
                                    it_141=it_141->next;
                                }
                                __result116__ = __result_obj__ = self;
                                return __result116__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
int tmp_142;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
struct list$1charp* __result113__;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct list_item$1charp* it_145;
int i_146;
_Bool _while_condtional26;
_Bool _if_conditional174;
struct list_item$1charp* prev_it_147;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct list_item$1charp* it_148;
int i_149;
_Bool _while_condtional27;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct list_item$1charp* prev_it_150;
struct list_item$1charp* it_151;
struct list_item$1charp* head_prev_it_152;
struct list_item$1charp* tail_it_153;
int i_154;
_Bool _while_condtional28;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct list_item$1charp* prev_it_155;
_Bool _if_conditional182;
_Bool _if_conditional183;
struct list$1charp* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_142, 0, sizeof(int));
memset(&it_145, 0, sizeof(struct list_item$1charp*));
memset(&i_146, 0, sizeof(int));
memset(&prev_it_147, 0, sizeof(struct list_item$1charp*));
memset(&it_148, 0, sizeof(struct list_item$1charp*));
memset(&i_149, 0, sizeof(int));
memset(&prev_it_150, 0, sizeof(struct list_item$1charp*));
memset(&it_151, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_152, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_153, 0, sizeof(struct list_item$1charp*));
memset(&i_154, 0, sizeof(int));
memset(&prev_it_155, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional166=head<0,                                            _if_conditional166) {
                                                head+=self->len;
                                            }
                                            if(_if_conditional167=tail<0,                                            _if_conditional167) {
                                                tail+=self->len+1;
                                            }
                                            if(_if_conditional168=head>tail,                                            _if_conditional168) {
                                                tmp_142=tail;
                                                tail=head;
                                                head=tmp_142;
                                            }
                                            if(_if_conditional169=head<0,                                            _if_conditional169) {
                                                head=0;
                                            }
                                            if(_if_conditional170=tail>self->len,                                            _if_conditional170) {
                                                tail=self->len;
                                            }
                                            if(_if_conditional171=head==tail,                                            _if_conditional171) {
                                                __result113__ = __result_obj__ = self;
                                                return __result113__;
                                            }
                                            if(_if_conditional172=head==0&&tail==self->len,                                            _if_conditional172) {
                                                list$1charp_reset(self);
                                            }
                                            else {
                                                if(_if_conditional173=head==0,                                                _if_conditional173) {
                                                    it_145=self->head;
                                                    i_146=0;
                                                    while(_while_condtional26=it_145!=((void*)0),                                                    _while_condtional26) {
                                                        if(_if_conditional174=i_146<tail,                                                        _if_conditional174) {
                                                            prev_it_147=it_145;
                                                            it_145=it_145->next;
                                                            i_146++;
                                                            come_call_finalizer3(prev_it_147,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional175=i_146==tail,                                                            _if_conditional175) {
                                                                self->head=it_145;
                                                                self->head->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_145=it_145->next;
                                                                i_146++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional176=tail==self->len,                                                    _if_conditional176) {
                                                        it_148=self->head;
                                                        i_149=0;
                                                        while(_while_condtional27=it_148!=((void*)0),                                                        _while_condtional27) {
                                                            if(_if_conditional177=i_149==head,                                                            _if_conditional177) {
                                                                self->tail=it_148->prev;
                                                                self->tail->next=((void*)0);
                                                            }
                                                            if(_if_conditional178=i_149>=head,                                                            _if_conditional178) {
                                                                prev_it_150=it_148;
                                                                it_148=it_148->next;
                                                                i_149++;
                                                                come_call_finalizer3(prev_it_150,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_148=it_148->next;
                                                                i_149++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_151=self->head;
                                                        head_prev_it_152=((void*)0);
                                                        tail_it_153=((void*)0);
                                                        i_154=0;
                                                        while(_while_condtional28=it_151!=((void*)0),                                                        _while_condtional28) {
                                                            if(_if_conditional179=i_154==head,                                                            _if_conditional179) {
                                                                head_prev_it_152=it_151->prev;
                                                            }
                                                            if(_if_conditional180=i_154==tail,                                                            _if_conditional180) {
                                                                tail_it_153=it_151;
                                                            }
                                                            if(_if_conditional181=i_154>=head&&i_154<tail,                                                            _if_conditional181) {
                                                                prev_it_155=it_151;
                                                                it_151=it_151->next;
                                                                i_154++;
                                                                come_call_finalizer3(prev_it_155,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                self->len--;
                                                            }
                                                            else {
                                                                it_151=it_151->next;
                                                                i_154++;
                                                            }
                                                        }
                                                        if(_if_conditional182=head_prev_it_152!=((void*)0),                                                        _if_conditional182) {
                                                            head_prev_it_152->next=tail_it_153;
                                                        }
                                                        if(_if_conditional183=tail_it_153!=((void*)0),                                                        _if_conditional183) {
                                                            tail_it_153->prev=head_prev_it_152;
                                                        }
                                                    }
                                                }
                                            }
                                            __result115__ = __result_obj__ = self;
                                            return __result115__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_143;
_Bool _while_condtional25;
struct list_item$1charp* prev_it_144;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_143, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_144, 0, sizeof(struct list_item$1charp*));
                                                    it_143=self->head;
                                                    while(_while_condtional25=it_143!=((void*)0),                                                    _while_condtional25) {
                                                        prev_it_144=it_143;
                                                        it_143=it_143->next;
                                                        come_call_finalizer3(prev_it_144,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    self->head=((void*)0);
                                                    self->tail=((void*)0);
                                                    self->len=0;
                                                    __result114__ = __result_obj__ = self;
                                                    return __result114__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional189;
char* result_157;
char* __result117__;
_Bool _if_conditional190;
char* __result118__;
char* result_158;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_157, 0, sizeof(char*));
memset(&result_158, 0, sizeof(char*));
                if(_if_conditional189=self==((void*)0),                _if_conditional189) {
                    memset(&result_157,0,sizeof(char*));
                    __result117__ = __result_obj__ = result_157;
                    return __result117__;
                }
                self->it=self->head;
                if(self->it) {
                    __result118__ = __result_obj__ = self->it->item;
                    return __result118__;
                }
                memset(&result_158,0,sizeof(char*));
                __result119__ = __result_obj__ = result_158;
                return __result119__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
                __result120__ = self==((void*)0)||self->it==((void*)0);
                return __result120__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional191;
char* result_160;
char* __result121__;
_Bool _if_conditional192;
char* __result122__;
char* result_161;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_160, 0, sizeof(char*));
memset(&result_161, 0, sizeof(char*));
                if(_if_conditional191=self==((void*)0)||self->it==((void*)0),                _if_conditional191) {
                    memset(&result_160,0,sizeof(char*));
                    __result121__ = __result_obj__ = result_160;
                    return __result121__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result122__ = __result_obj__ = self->it->item;
                    return __result122__;
                }
                memset(&result_161,0,sizeof(char*));
                __result123__ = __result_obj__ = result_161;
                return __result123__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional195;
void* right_value139;
struct list_item$1charp* litem_162;
_Bool _if_conditional196;
void* right_value140;
struct list_item$1charp* litem_163;
void* right_value141;
struct list_item$1charp* litem_164;
struct list$1charp* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1charp*));
right_value140 = (void*)0;
memset(&litem_163, 0, sizeof(struct list_item$1charp*));
right_value141 = (void*)0;
memset(&litem_164, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional195=self->len==0,                    _if_conditional195) {
                        litem_162=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 221, "list_item$1charp"))));
                        come_call_finalizer3(right_value139,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_162->prev=((void*)0);
                        litem_162->next=((void*)0);
                        litem_162->item=item;
                        self->tail=litem_162;
                        self->head=litem_162;
                    }
                    else {
                        if(_if_conditional196=self->len==1,                        _if_conditional196) {
                            litem_163=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 231, "list_item$1charp"))));
                            come_call_finalizer3(right_value140,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_163->prev=self->head;
                            litem_163->next=((void*)0);
                            litem_163->item=item;
                            self->tail=litem_163;
                            self->head->next=litem_163;
                        }
                        else {
                            litem_164=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 241, "list_item$1charp"))));
                            come_call_finalizer3(right_value141,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_164->prev=self->tail;
                            litem_164->next=((void*)0);
                            litem_164->item=item;
                            self->tail->next=litem_164;
                            self->tail=litem_164;
                        }
                    }
                    self->len++;
                    __result124__ = __result_obj__ = self;
                    return __result124__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional197;
void* right_value144;
struct list_item$1tuple2$2charphsTypephph* litem_171;
struct tuple2$2charphsTypeph* __dec_obj35;
_Bool _if_conditional200;
void* right_value145;
struct list_item$1tuple2$2charphsTypephph* litem_172;
struct tuple2$2charphsTypeph* __dec_obj36;
void* right_value146;
struct list_item$1tuple2$2charphsTypephph* litem_173;
struct tuple2$2charphsTypeph* __dec_obj37;
struct list$1tuple2$2charphsTypephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&litem_171, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value145 = (void*)0;
memset(&litem_172, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value146 = (void*)0;
memset(&litem_173, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(_if_conditional197=self->len==0,                _if_conditional197) {
                    litem_171=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value144=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 221, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value144,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_171->prev=((void*)0);
                    litem_171->next=((void*)0);
                    __dec_obj35=litem_171->item;
                    litem_171->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj35,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_171;
                    self->head=litem_171;
                }
                else {
                    if(_if_conditional200=self->len==1,                    _if_conditional200) {
                        litem_172=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value145=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 231, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value145,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_172->prev=self->head;
                        litem_172->next=((void*)0);
                        __dec_obj36=litem_172->item;
                        litem_172->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj36,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_172;
                        self->head->next=litem_172;
                    }
                    else {
                        litem_173=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value146=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 241, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value146,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_173->prev=self->tail;
                        litem_173->next=((void*)0);
                        __dec_obj37=litem_173->item;
                        litem_173->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj37,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_173;
                        self->tail=litem_173;
                    }
                }
                self->len++;
                __result126__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result126__;
                come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj38;
struct sType* __dec_obj39;
struct tuple2$2charphsTypeph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj38=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj39=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
                __result127__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result127__;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_174;
_Bool _while_condtional29;
struct list_item$1sTypeph* prev_it_175;
struct list$1sTypeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_174, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_175, 0, sizeof(struct list_item$1sTypeph*));
            it_174=self->head;
            while(_while_condtional29=it_174!=((void*)0),            _while_condtional29) {
                prev_it_175=it_174;
                it_174=it_174->next;
                come_call_finalizer3(prev_it_175,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result128__ = __result_obj__ = self;
            return __result128__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value162;
void* right_value163;
char* __dec_obj43;
void* right_value178;
struct sClass* __dec_obj53;
struct sStructNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value178 = (void*)0;
    ((struct sNodeBase*)(right_value162=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value162,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(name))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value178=sClass_clone(klass))));
    come_call_finalizer3(__dec_obj53,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    self->mOutput=output;
    __result139__ = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result139__;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sStructNode_terminated(struct sStructNode* self){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = (_Bool)1;
    return __result140__;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__;
void* right_value179;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sStructNode")));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value180;
struct sClass* klass_194;
void* right_value181;
char* name_195;
_Bool _if_conditional246;
void* right_value182;
_Bool _if_conditional248;
struct sClass* klass2_196;
void* right_value183;
struct list$1tuple2$2charphsTypephph* __dec_obj54;
void* right_value184;
void* right_value185;
struct sType* type_197;
void* right_value189;
_Bool _if_conditional271;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&klass_194, 0, sizeof(struct sClass*));
right_value181 = (void*)0;
memset(&name_195, 0, sizeof(char*));
right_value182 = (void*)0;
memset(&klass2_196, 0, sizeof(struct sClass*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&type_197, 0, sizeof(struct sType*));
right_value189 = (void*)0;
    klass_194=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value180=sClass_clone(self->mClass))));
    come_call_finalizer3(right_value180,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    name_195=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(self->mName))));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional246=map$2charphsClassph_at(info->classes,name_195,((void*)0))==((void*)0),    _if_conditional246) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_195),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value182=sClass_clone(klass_194)))));
        come_call_finalizer3(right_value182,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        if(_if_conditional248=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_195,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_194->mFields)>0,        _if_conditional248) {
            klass2_196=map$2charphsClassph_at(info->classes,name_195,((void*)0));
            __dec_obj54=klass2_196->mFields;
            klass2_196->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value183=list$1tuple2$2charphsTypephphp_clone(klass_194->mFields))));
            come_call_finalizer3(__dec_obj54,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value183,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 294, "sType")))),name_195,(_Bool)0,info))));
    come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(type_197)))));
    come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(self->mOutput) {
        output_struct(klass_194,info);
    }
    __result156__ = (_Bool)1;
    come_call_finalizer3(klass_194,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_195 = come_decrement_ref_count2(name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
    come_call_finalizer3(klass_194,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_195 = come_decrement_ref_count2(name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional210=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional210) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional211;
struct sClass* __result131__;
void* right_value164;
struct sClass* result_185;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value165;
char* __dec_obj44;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value175;
struct list$1tuple2$2charphsTypephph* __dec_obj50;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
void* right_value176;
char* __dec_obj51;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value177;
char* __dec_obj52;
struct sClass* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
memset(&result_185, 0, sizeof(struct sClass*));
right_value165 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
        if(_if_conditional211=self==(void*)0,        _if_conditional211) {
            __result131__ = __result_obj__ = (void*)0;
            return __result131__;
        }
        result_185=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value164=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
        come_call_finalizer3(right_value164,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional212=self!=((void*)0),        _if_conditional212) {
            result_185->mStruct=self->mStruct;
        }
        if(_if_conditional213=self!=((void*)0),        _if_conditional213) {
            result_185->mFloat=self->mFloat;
        }
        if(_if_conditional214=self!=((void*)0),        _if_conditional214) {
            result_185->mUnion=self->mUnion;
        }
        if(_if_conditional215=self!=((void*)0),        _if_conditional215) {
            result_185->mGenerics=self->mGenerics;
        }
        if(_if_conditional216=self!=((void*)0),        _if_conditional216) {
            result_185->mMethodGenerics=self->mMethodGenerics;
        }
        if(_if_conditional217=self!=((void*)0),        _if_conditional217) {
            result_185->mEnum=self->mEnum;
        }
        if(_if_conditional218=self!=((void*)0),        _if_conditional218) {
            result_185->mProtocol=self->mProtocol;
        }
        if(_if_conditional219=self!=((void*)0),        _if_conditional219) {
            result_185->mNumber=self->mNumber;
        }
        if(_if_conditional220=self!=((void*)0)&&self->mName!=((void*)0),        _if_conditional220) {
            __dec_obj44=result_185->mName;
            result_185->mName=(char*)come_increment_ref_count(((char*)(right_value165=string_clone(self->mName))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional221=self!=((void*)0),        _if_conditional221) {
            result_185->mGenericsNum=self->mGenericsNum;
        }
        if(_if_conditional222=self!=((void*)0),        _if_conditional222) {
            result_185->mMethodGenericsNum=self->mMethodGenericsNum;
        }
        if(_if_conditional223=self!=((void*)0)&&self->mFields!=((void*)0),        _if_conditional223) {
            __dec_obj50=result_185->mFields;
            result_185->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value175=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
            come_call_finalizer3(__dec_obj50,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value175,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional238=self!=((void*)0),        _if_conditional238) {
            result_185->mOutputed=self->mOutputed;
        }
        if(_if_conditional239=self!=((void*)0),        _if_conditional239) {
            result_185->mOutputed2=self->mOutputed2;
        }
        if(_if_conditional240=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        _if_conditional240) {
            __dec_obj51=result_185->mDeclareSName;
            result_185->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value176=string_clone(self->mDeclareSName))));
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional241=self!=((void*)0),        _if_conditional241) {
            result_185->mNobodyStruct=self->mNobodyStruct;
        }
        if(_if_conditional242=self!=((void*)0)&&self->mParentClassName!=((void*)0),        _if_conditional242) {
            __dec_obj52=result_185->mParentClassName;
            result_185->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(self->mParentClassName))));
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result138__ = __result_obj__ = result_185;
        come_call_finalizer3(result_185,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result138__;
        come_call_finalizer3(result_185,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional224;
struct list$1tuple2$2charphsTypephph* __result132__;
void* right_value166;
void* right_value167;
struct list$1tuple2$2charphsTypephph* result_186;
struct list_item$1tuple2$2charphsTypephph* it_187;
_Bool _while_condtional30;
void* right_value174;
struct list$1tuple2$2charphsTypephph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&result_186, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_187, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value174 = (void*)0;
                if(_if_conditional224=self==((void*)0),                _if_conditional224) {
                    __result132__ = __result_obj__ = ((void*)0);
                    return __result132__;
                }
                result_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value167=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value166=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 137, "list$1tuple2$2charphsTypephph"))))))));
                come_call_finalizer3(right_value166,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value167,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_187=self->head;
                while(_while_condtional30=it_187!=((void*)0),                _while_condtional30) {
                    list$1tuple2$2charphsTypephph_add(result_186,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value174=tuple2$2charphsTypephp_clone(it_187->item)))));
                    come_call_finalizer3(right_value174,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_187=it_187->next;
                }
                __result137__ = __result_obj__ = result_186;
                come_call_finalizer3(result_186,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result137__;
                come_call_finalizer3(result_186,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result133__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result133__;
                    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional225;
void* right_value168;
struct list_item$1tuple2$2charphsTypephph* litem_188;
struct tuple2$2charphsTypeph* __dec_obj45;
_Bool _if_conditional228;
void* right_value169;
struct list_item$1tuple2$2charphsTypephph* litem_189;
struct tuple2$2charphsTypeph* __dec_obj46;
void* right_value170;
struct list_item$1tuple2$2charphsTypephph* litem_190;
struct tuple2$2charphsTypeph* __dec_obj47;
struct list$1tuple2$2charphsTypephph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value169 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value170 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional225=self->len==0,                        _if_conditional225) {
                            litem_188=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value168=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 151, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value168,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_188->prev=((void*)0);
                            litem_188->next=((void*)0);
                            __dec_obj45=litem_188->item;
                            litem_188->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj45,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_188;
                            self->head=litem_188;
                        }
                        else {
                            if(_if_conditional228=self->len==1,                            _if_conditional228) {
                                litem_189=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value169=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 161, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value169,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_189->prev=self->head;
                                litem_189->next=((void*)0);
                                __dec_obj46=litem_189->item;
                                litem_189->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj46,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_189;
                                self->head->next=litem_189;
                            }
                            else {
                                litem_190=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value170=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 171, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value170,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_190->prev=self->tail;
                                litem_190->next=((void*)0);
                                __dec_obj47=litem_190->item;
                                litem_190->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj47,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_190;
                                self->tail=litem_190;
                            }
                        }
                        self->len++;
                        __result134__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result134__;
                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional231;
_Bool _if_conditional232;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional231=self!=((void*)0)&&self->v1!=((void*)0),                                    _if_conditional231) {
                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional232=self!=((void*)0)&&self->v2!=((void*)0),                                    _if_conditional232) {
                                        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional233;
struct tuple2$2charphsTypeph* __result135__;
void* right_value171;
struct tuple2$2charphsTypeph* result_191;
_Bool _if_conditional236;
void* right_value172;
char* __dec_obj48;
_Bool _if_conditional237;
void* right_value173;
struct sType* __dec_obj49;
struct tuple2$2charphsTypeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&result_191, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value172 = (void*)0;
right_value173 = (void*)0;
                        if(_if_conditional233=self==(void*)0,                        _if_conditional233) {
                            __result135__ = __result_obj__ = (void*)0;
                            return __result135__;
                        }
                        result_191=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value171=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer3(right_value171,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional236=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional236) {
                            __dec_obj48=result_191->v1;
                            result_191->v1=(char*)come_increment_ref_count(((char*)(right_value172=string_clone(self->v1))));
                            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional237=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional237) {
                            __dec_obj49=result_191->v2;
                            result_191->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(self->v2))));
                            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        __result136__ = __result_obj__ = result_191;
                        come_call_finalizer3(result_191,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                        return __result136__;
                        come_call_finalizer3(result_191,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional234;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional234=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional234) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional235=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional235) {
                                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_192;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsTypephph* prev_it_193;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_192, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_193, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_192=self->head;
                while(_while_condtional31=it_192!=((void*)0),                _while_condtional31) {
                    prev_it_193=it_192;
                    it_192=it_192->next;
                    come_call_finalizer3(prev_it_193,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional247;
int __result142__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional247=self==((void*)0),            _if_conditional247) {
                __result142__ = 0;
                return __result142__;
            }
            __result143__ = self->len;
            return __result143__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional249;
unsigned int hash_215;
unsigned int it_216;
_Bool _while_condtional34;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool same_key_exist_217;
char* it2_218;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct map$2charphsTypeph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_215, 0, sizeof(unsigned int));
memset(&it_216, 0, sizeof(unsigned int));
memset(&same_key_exist_217, 0, sizeof(_Bool));
memset(&it2_218, 0, sizeof(char*));
        if(_if_conditional249=self->len*10>=self->size,        _if_conditional249) {
            map$2charphsTypeph_rehash(self);
        }
        hash_215=string_get_hash_key(key)%self->size;
        it_216=hash_215;
        while(_while_condtional34=(_Bool)1,        _while_condtional34) {
            if(_if_conditional261=self->item_existance[it_216],            _if_conditional261) {
                if(_if_conditional262=string_equals(self->keys[it_216],key),                _if_conditional262) {
                    if(_if_conditional263=1,                    _if_conditional263) {
                        list$1charp_remove(self->key_list,self->keys[it_216]);
                        self->keys[it_216] = come_decrement_ref_count2(self->keys[it_216], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_216]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_216]);
                        self->keys[it_216]=key;
                    }
                    if(_if_conditional264=1,                    _if_conditional264) {
                        come_call_finalizer3(self->items[it_216],sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_216]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_216]=item;
                    }
                    break;
                }
                it_216++;
                if(_if_conditional265=it_216>=self->size,                _if_conditional265) {
                    it_216=0;
                }
                else {
                    if(_if_conditional266=it_216==hash_215,                    _if_conditional266) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_216]=(_Bool)1;
                if(_if_conditional267=1,                _if_conditional267) {
                    self->keys[it_216]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_216]=key;
                }
                if(_if_conditional268=1,                _if_conditional268) {
                    self->items[it_216]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_216]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_217=(_Bool)0;
        for(        it2_218=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_218=list$1charp_next(self->key_list)        ){
            if(_if_conditional269=string_equals(it2_218,key),            _if_conditional269) {
                same_key_exist_217=(_Bool)1;
            }
        }
        if(_if_conditional270=!same_key_exist_217,        _if_conditional270) {
            list$1charp_push_back(self->key_list,key);
        }
        __result155__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result155__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
int size_198;
void* right_value186;
char** keys_199;
void* right_value187;
struct sType** items_200;
void* right_value188;
_Bool* item_existance_201;
int len_202;
char* it_205;
struct sType* default_value_208;
struct sType* it2_211;
unsigned int hash_212;
int n_213;
_Bool _while_condtional33;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct sType* default_value_214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_198, 0, sizeof(int));
right_value186 = (void*)0;
memset(&keys_199, 0, sizeof(char**));
right_value187 = (void*)0;
memset(&items_200, 0, sizeof(struct sType**));
right_value188 = (void*)0;
memset(&item_existance_201, 0, sizeof(_Bool*));
memset(&len_202, 0, sizeof(int));
memset(&it_205, 0, sizeof(char*));
memset(&default_value_208, 0, sizeof(struct sType*));
memset(&it2_211, 0, sizeof(struct sType*));
memset(&hash_212, 0, sizeof(unsigned int));
memset(&n_213, 0, sizeof(int));
memset(&default_value_214, 0, sizeof(struct sType*));
                size_198=self->size*10;
                keys_199=(char**)come_increment_ref_count(((char**)(right_value186=(char**)come_calloc(1, sizeof(char*)*(1*(size_198)), "./neo-c.h", 1317, "char*%"))));
                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_200=(struct sType**)come_increment_ref_count(((struct sType**)(right_value187=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_198)), "./neo-c.h", 1318, "sType*%"))));
                come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_201=(_Bool*)come_increment_ref_count(((_Bool*)(right_value188=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_198)), "./neo-c.h", 1319, "bool"))));
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_202=0;
                for(                it_205=map$2charphsTypeph_begin(self);                !map$2charphsTypeph_end(self);                it_205=map$2charphsTypeph_next(self)                ){
                    memset(&default_value_208,0,sizeof(struct sType*));
                    it2_211=map$2charphsTypeph_at(self,it_205,default_value_208);
                    hash_212=string_get_hash_key(it_205)%size_198;
                    n_213=hash_212;
                    while(_while_condtional33=(_Bool)1,                    _while_condtional33) {
                        if(_if_conditional258=item_existance_201[n_213],                        _if_conditional258) {
                            n_213++;
                            if(_if_conditional259=n_213>=size_198,                            _if_conditional259) {
                                n_213=0;
                            }
                            else {
                                if(_if_conditional260=n_213==hash_212,                                _if_conditional260) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_201[n_213]=(_Bool)1;
                            keys_199[n_213]=it_205;
                            items_200[n_213]=map$2charphsTypeph_at(self,it_205,default_value_214);
                            len_202++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_199;
                self->items=items_200;
                self->item_existance=item_existance_201;
                self->size=size_198;
                self->len=len_202;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional250;
char* result_203;
char* __result144__;
_Bool _if_conditional251;
char* __result145__;
char* result_204;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(char*));
memset(&result_204, 0, sizeof(char*));
                    if(_if_conditional250=self==((void*)0),                    _if_conditional250) {
                        memset(&result_203,0,sizeof(char*));
                        __result144__ = __result_obj__ = result_203;
                        return __result144__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result145__ = __result_obj__ = self->key_list->it->item;
                        return __result145__;
                    }
                    memset(&result_204,0,sizeof(char*));
                    __result146__ = __result_obj__ = result_204;
                    return __result146__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result147__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result147__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional252;
char* result_206;
char* __result148__;
_Bool _if_conditional253;
char* __result149__;
char* result_207;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
                    if(_if_conditional252=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional252) {
                        memset(&result_206,0,sizeof(char*));
                        __result148__ = __result_obj__ = result_206;
                        return __result148__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result149__ = __result_obj__ = self->key_list->it->item;
                        return __result149__;
                    }
                    memset(&result_207,0,sizeof(char*));
                    __result150__ = __result_obj__ = result_207;
                    return __result150__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_209;
unsigned int it_210;
_Bool _while_condtional32;
_Bool _if_conditional254;
_Bool _if_conditional255;
struct sType* __result151__;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct sType* __result152__;
struct sType* __result153__;
struct sType* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_209, 0, sizeof(unsigned int));
memset(&it_210, 0, sizeof(unsigned int));
                        hash_209=string_get_hash_key(((char*)key))%self->size;
                        it_210=hash_209;
                        while(_while_condtional32=(_Bool)1,                        _while_condtional32) {
                            if(_if_conditional254=self->item_existance[it_210],                            _if_conditional254) {
                                if(_if_conditional255=string_equals(self->keys[it_210],key),                                _if_conditional255) {
                                    __result151__ = __result_obj__ = self->items[it_210];
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result151__;
                                }
                                it_210++;
                                if(_if_conditional256=it_210>=self->size,                                _if_conditional256) {
                                    it_210=0;
                                }
                                else {
                                    if(_if_conditional257=it_210==hash_209,                                    _if_conditional257) {
                                        __result152__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result152__;
                                    }
                                }
                            }
                            else {
                                __result153__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result153__;
                            }
                        }
                        __result154__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result154__;
                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
void* right_value190;
void* right_value191;
char* __dec_obj55;
void* right_value192;
struct sClass* __dec_obj56;
struct sStructNobodyNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
    ((struct sNodeBase*)(right_value190=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value190,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string(name))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value192=sClass_clone(klass))));
    come_call_finalizer3(__dec_obj56,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value192,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    __result157__ = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result157__;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = (_Bool)1;
    return __result158__;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__;
void* right_value193;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    __result159__ = __result_obj__ = ((char*)(right_value193=__builtin_string("sStructNobodyNode")));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* name_219;
struct sClass* klass_220;
_Bool _if_conditional275;
void* right_value195;
void* right_value196;
void* right_value197;
struct sType* type_221;
void* right_value198;
_Bool _if_conditional276;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
memset(&name_219, 0, sizeof(char*));
memset(&klass_220, 0, sizeof(struct sClass*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&type_221, 0, sizeof(struct sType*));
right_value198 = (void*)0;
    name_219=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(self->mName))));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_220=self->mClass;
    if(_if_conditional275=map$2charphsClassph_at(info->classes,name_219,((void*)0))==((void*)0),    _if_conditional275) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_219),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value195=sClass_clone(klass_220)))));
        come_call_finalizer3(right_value195,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    type_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 334, "sType")))),name_219,(_Bool)0,info))));
    come_call_finalizer3(right_value196,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_219),(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type_221)))));
    come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional276=info->output_header_file&&string_operator_not_equals(klass_220->mDeclareSName,info->base_sname),    _if_conditional276) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_219);
    }
    __result160__ = (_Bool)1;
    name_219 = come_decrement_ref_count2(name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_221,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result160__;
    name_219 = come_decrement_ref_count2(name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_221,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value199;
struct sGenericsStructNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
    ((struct sNodeBase*)(right_value199=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value199,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result161__ = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result161__;
    come_call_finalizer3(self,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = (_Bool)1;
    return __result162__;
}

char* sGenericsStructNode_kind(struct sGenericsStructNode* self){
void* __result_obj__;
void* right_value200;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
    __result163__ = __result_obj__ = ((char*)(right_value200=__builtin_string("sGenericsStructNode")));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = (_Bool)1;
    return __result164__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value201;
void* right_value202;
char* __dec_obj57;
void* right_value203;
struct sClass* __dec_obj58;
struct list$1sNodeph* __dec_obj59;
struct sClassNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
    ((struct sNodeBase*)(right_value201=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value201,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj57=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(name))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj58=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=sClass_clone(klass))));
    come_call_finalizer3(__dec_obj58,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value203,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj59,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result165__ = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result165__;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sClassNode_terminated(struct sClassNode* self){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = (_Bool)1;
    return __result166__;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__;
void* right_value204;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    __result167__ = __result_obj__ = ((char*)(right_value204=__builtin_string("sClassNode")));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value205;
struct sClass* klass_222;
void* right_value206;
char* name_223;
_Bool _if_conditional282;
void* right_value207;
_Bool _if_conditional283;
struct sClass* klass2_224;
void* right_value208;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
void* right_value209;
void* right_value210;
struct sType* type_225;
void* right_value211;
_Bool _if_conditional284;
struct list$1sNodeph* o2_saved_226;
struct sNode* it_229;
_Bool _if_conditional289;
_Bool __result175__;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
memset(&klass_222, 0, sizeof(struct sClass*));
right_value206 = (void*)0;
memset(&name_223, 0, sizeof(char*));
right_value207 = (void*)0;
memset(&klass2_224, 0, sizeof(struct sClass*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
memset(&type_225, 0, sizeof(struct sType*));
right_value211 = (void*)0;
memset(&o2_saved_226, 0, sizeof(struct list$1sNodeph*));
memset(&it_229, 0, sizeof(struct sNode*));
    klass_222=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=sClass_clone(self->mClass))));
    come_call_finalizer3(right_value205,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    name_223=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(self->mName))));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional282=map$2charphsClassph_at(info->classes,name_223,((void*)0))==((void*)0),    _if_conditional282) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_223),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value207=sClass_clone(klass_222)))));
        come_call_finalizer3(right_value207,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        if(_if_conditional283=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_223,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_222->mFields)>0,        _if_conditional283) {
            klass2_224=map$2charphsClassph_at(info->classes,name_223,((void*)0));
            __dec_obj60=klass2_224->mFields;
            klass2_224->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value208=list$1tuple2$2charphsTypephphp_clone(klass_222->mFields))));
            come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value208,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 409, "sType")))),name_223,(_Bool)0,info))));
    come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_223),(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(type_225)))));
    come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(self->mOutput) {
        output_struct(klass_222,info);
    }
    for(    o2_saved_226=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_229=list$1sNodeph_begin((o2_saved_226));    !list$1sNodeph_end((o2_saved_226));    it_229=list$1sNodeph_next((o2_saved_226))    ){
        if(_if_conditional289=!node_compile(it_229,info),        _if_conditional289) {
            __result175__ = (_Bool)0;
            come_call_finalizer3(o2_saved_226,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_222,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_223 = come_decrement_ref_count2(name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result175__;
        }
    }
    come_call_finalizer3(o2_saved_226,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    __result176__ = (_Bool)1;
    come_call_finalizer3(klass_222,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_223 = come_decrement_ref_count2(name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result176__;
    come_call_finalizer3(klass_222,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_223 = come_decrement_ref_count2(name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional285;
struct sNode* result_227;
struct sNode* __result168__;
_Bool _if_conditional286;
struct sNode* __result169__;
struct sNode* result_228;
struct sNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_227, 0, sizeof(struct sNode*));
memset(&result_228, 0, sizeof(struct sNode*));
        if(_if_conditional285=self==((void*)0),        _if_conditional285) {
            memset(&result_227,0,sizeof(struct sNode*));
            __result168__ = __result_obj__ = result_227;
            return __result168__;
        }
        self->it=self->head;
        if(self->it) {
            __result169__ = __result_obj__ = self->it->item;
            return __result169__;
        }
        memset(&result_228,0,sizeof(struct sNode*));
        __result170__ = __result_obj__ = result_228;
        return __result170__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
        __result171__ = self==((void*)0)||self->it==((void*)0);
        return __result171__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional287;
struct sNode* result_230;
struct sNode* __result172__;
_Bool _if_conditional288;
struct sNode* __result173__;
struct sNode* result_231;
struct sNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_230, 0, sizeof(struct sNode*));
memset(&result_231, 0, sizeof(struct sNode*));
        if(_if_conditional287=self==((void*)0)||self->it==((void*)0),        _if_conditional287) {
            memset(&result_230,0,sizeof(struct sNode*));
            __result172__ = __result_obj__ = result_230;
            return __result172__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result173__ = __result_obj__ = self->it->item;
            return __result173__;
        }
        memset(&result_231,0,sizeof(struct sNode*));
        __result174__ = __result_obj__ = result_231;
        return __result174__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_232;
_Bool output_233;
_Bool _if_conditional290;
void* right_value212;
void* right_value213;
void* right_value214;
struct sClass* __dec_obj61;
void* right_value215;
void* right_value216;
struct sClass* __dec_obj62;
_Bool _if_conditional291;
struct sClass* parent_class_236;
_Bool _if_conditional292;
void* right_value217;
void* right_value218;
char* parent_class_name_237;
_Bool _if_conditional293;
struct sNode* __result178__;
int __exception_result_var_b1;
_Bool _while_condtional36;
_Bool multiple_declare_238;
char* p_239;
int sline_240;
void* right_value219;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_241;
char* name_242;
_Bool err_243;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value220;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_244;
char* name_245;
_Bool err_246;
void* right_value221;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_247;
char* name2_248;
_Bool _if_conditional300;
void* right_value222;
void* right_value223;
_Bool _while_condtional37;
void* right_value224;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_249;
char* name2_250;
_Bool _if_conditional301;
void* right_value225;
void* right_value226;
void* right_value227;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_251;
char* name_252;
_Bool err_253;
_Bool _if_conditional302;
_Bool _if_conditional303;
void* right_value228;
void* right_value229;
int __exception_result_var_b2;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value230;
char* __dec_obj63;
void* right_value231;
void* right_value232;
void* right_value233;
void* right_value234;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value239;
struct sNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_232, 0, sizeof(struct sClass*));
memset(&output_233, 0, sizeof(_Bool));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&parent_class_236, 0, sizeof(struct sClass*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&parent_class_name_237, 0, sizeof(char*));
memset(&multiple_declare_238, 0, sizeof(_Bool));
memset(&p_239, 0, sizeof(char*));
memset(&sline_240, 0, sizeof(int));
right_value219 = (void*)0;
memset(&type_241, 0, sizeof(struct sType*));
memset(&name_242, 0, sizeof(char*));
memset(&err_243, 0, sizeof(_Bool));
memset(&type_241, 0, sizeof(struct sType*));
memset(&name_242, 0, sizeof(char*));
memset(&err_243, 0, sizeof(_Bool));
right_value220 = (void*)0;
memset(&base_type_244, 0, sizeof(struct sType*));
memset(&name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
memset(&base_type_244, 0, sizeof(struct sType*));
memset(&name_245, 0, sizeof(char*));
memset(&err_246, 0, sizeof(_Bool));
right_value221 = (void*)0;
memset(&type2_247, 0, sizeof(struct sType*));
memset(&name2_248, 0, sizeof(char*));
memset(&type2_247, 0, sizeof(struct sType*));
memset(&name2_248, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&type2_249, 0, sizeof(struct sType*));
memset(&name2_250, 0, sizeof(char*));
memset(&type2_249, 0, sizeof(struct sType*));
memset(&name2_250, 0, sizeof(char*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&type2_251, 0, sizeof(struct sType*));
memset(&name_252, 0, sizeof(char*));
memset(&err_253, 0, sizeof(_Bool));
memset(&type2_251, 0, sizeof(struct sType*));
memset(&name_252, 0, sizeof(char*));
memset(&err_253, 0, sizeof(_Bool));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value239 = (void*)0;
    if(_if_conditional290=map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0),    _if_conditional290) {
        output_233=(_Bool)1;
        __dec_obj61=klass_232;
        klass_232=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value214=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value212=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 432, "sClass")))),((char*)(right_value213=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(__dec_obj61,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value212,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_232));
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj62=klass_232;
        klass_232=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))))));
        come_call_finalizer3(__dec_obj62,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value216,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional291=list$1tuple2$2charphsTypephph_length(klass_232->mFields)>0,        _if_conditional291) {
            output_233=(_Bool)0;
        }
    }
    list$1tuple2$2charphsTypephph_reset(klass_232->mFields);
    parent_class_236=((void*)0);
    if(_if_conditional292=parsecmp("extends",info),    _if_conditional292) {
        ((char*)(right_value217=parse_word(info)));
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_237=(char*)come_increment_ref_count(((char*)(right_value218=parse_word(info))));
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_236=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_237);
        if(_if_conditional293=parent_class_236==((void*)0),        _if_conditional293) {
            err_msg(info,"invalid class name(%s)",parent_class_name_237);
            __result178__ = __result_obj__ = ((void*)0);
            parent_class_name_237 = come_decrement_ref_count2(parent_class_name_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(klass_232,sClass_finalize, 0, 0, 0, 0, (void*)0);
            return __result178__;
        }
        parent_class_name_237 = come_decrement_ref_count2(parent_class_name_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("14struct.c", 458, 3),__exception_result_var_b1=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b1);
    while(_while_condtional36=(_Bool)1,    _while_condtional36) {
        multiple_declare_238=(_Bool)0;
        {
            p_239=info->p;
            sline_240=info->sline;
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value219=backtrace_parse_type((_Bool)1,info)));
            type_241=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_242=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_243=multiple_assign_var5->v3;
            come_call_finalizer3(right_value219,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional296=err_243&&*info->p==44,            _if_conditional296) {
                multiple_declare_238=(_Bool)1;
            }
            info->p=p_239;
            info->sline=sline_240;
            come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_242 = come_decrement_ref_count2(name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(multiple_declare_238) {
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value220=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_244=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_245=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_246=multiple_assign_var6->v3;
            come_call_finalizer3(right_value220,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value221=parse_variable_name((struct sType*)come_increment_ref_count(base_type_244),(_Bool)1,info)));
            type2_247=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name2_248=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(right_value221,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional300=!info->no_output_err,            _if_conditional300) {
                list$1tuple2$2charphsTypephph_push_back(klass_232->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value223=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value222=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 482, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_248),(struct sType*)come_increment_ref_count(type2_247))))));
                come_call_finalizer3(right_value222,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value223,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            while(_while_condtional37=*info->p==44,            _while_condtional37) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(right_value224=parse_variable_name((struct sType*)come_increment_ref_count(base_type_244),(_Bool)0,info)));
                type2_249=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name2_250=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                come_call_finalizer3(right_value224,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional301=!info->no_output_err,                _if_conditional301) {
                    list$1tuple2$2charphsTypephph_push_back(klass_232->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value226=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value225=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 492, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_250),(struct sType*)come_increment_ref_count(type2_249))))));
                    come_call_finalizer3(right_value225,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value226,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(type2_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_250 = come_decrement_ref_count2(name2_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(base_type_244,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_245 = come_decrement_ref_count2(name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_247,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_248 = come_decrement_ref_count2(name2_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value227=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_251=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_252=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_253=multiple_assign_var9->v3;
            come_call_finalizer3(right_value227,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional302=!err_253,            _if_conditional302) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(_if_conditional303=!info->no_output_err,            _if_conditional303) {
                list$1tuple2$2charphsTypephph_push_back(klass_232->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value229=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value228=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 505, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_252),(struct sType*)come_increment_ref_count(type2_251))))));
                come_call_finalizer3(right_value228,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value229,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(type2_251,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_252 = come_decrement_ref_count2(name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (come_push_stackframe("14struct.c", 508, 4),__exception_result_var_b2=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b2);
        parse_sharp_v5(info);
        if(_if_conditional304=*info->p==125,        _if_conditional304) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    if(parent_class_236) {
        __dec_obj63=klass_232->mParentClassName;
        klass_232->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value230=string_clone(parent_class_236->mName))));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_232->mName),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value231=sClass_clone(klass_232)))));
        come_call_finalizer3(right_value231,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 524, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value234=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value232=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 524, "sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_232),output_233,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result181__ = __result_obj__ = ((struct sNode*)(right_value239=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_232,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value232,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value234,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value239) { right_value239 = come_decrement_ref_count2(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result181__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_232,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_234;
_Bool _while_condtional35;
struct list_item$1tuple2$2charphsTypephph* prev_it_235;
struct list$1tuple2$2charphsTypephph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_234, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_235, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_234=self->head;
        while(_while_condtional35=it_234!=((void*)0),        _while_condtional35) {
            prev_it_235=it_234;
            it_234=it_234->next;
            come_call_finalizer3(prev_it_235,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result177__ = __result_obj__ = self;
        return __result177__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional294;
_Bool _if_conditional295;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional294=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional294) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional295=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional295) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional298;
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional298=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional298) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional299=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional299) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional315;
char* source_head_255;
void* right_value240;
char* type_name_256;
_Bool _if_conditional316;
struct sClass* struct_class_257;
_Bool _if_conditional317;
void* right_value241;
void* right_value242;
struct sClass* __dec_obj67;
struct sClass* __dec_obj68;
char* source_tail_258;
void* right_value243;
void* right_value244;
struct buffer* header_259;
void* right_value245;
void* right_value246;
void* right_value247;
void* right_value248;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value253;
struct sNode* __result184__;
_Bool _if_conditional326;
_Bool _while_condtional39;
void* right_value254;
char* T_263;
void* right_value258;
_Bool _if_conditional329;
_Bool _if_conditional330;
struct sClass* generics_class_267;
_Bool _if_conditional331;
void* right_value259;
void* right_value260;
struct sClass* __dec_obj75;
_Bool _if_conditional332;
int __exception_result_var_b3;
_Bool _while_condtional40;
void* right_value261;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type2_268;
char* name_269;
_Bool err_270;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value262;
void* right_value263;
_Bool _while_condtional41;
void* right_value264;
char* name2_271;
void* right_value265;
struct sType* type3_272;
_Bool _if_conditional335;
_Bool no_comma_273;
void* right_value266;
struct sNode* node_274;
struct sNode* __dec_obj76;
void* right_value267;
void* right_value268;
void* right_value269;
void* right_value270;
int __exception_result_var_b4;
_Bool _if_conditional336;
char* source_tail_275;
void* right_value271;
void* right_value272;
struct buffer* header_276;
void* right_value273;
void* right_value274;
void* right_value275;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value278;
struct sNode* __result189__;
_Bool output_278;
struct sClass* struct_class_279;
_Bool _if_conditional341;
void* right_value279;
void* right_value280;
struct sClass* __dec_obj78;
void* right_value281;
struct sClass* __dec_obj79;
_Bool _if_conditional342;
struct sClass* parent_class_280;
_Bool _if_conditional343;
void* right_value282;
void* right_value283;
char* parent_class_name_281;
_Bool _if_conditional344;
struct sNode* __result190__;
int __exception_result_var_b5;
_Bool _while_condtional42;
_Bool multiple_declare_282;
char* p_283;
int sline_284;
void* right_value284;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_285;
char* name_286;
_Bool err_287;
_Bool _if_conditional345;
_Bool _if_conditional346;
void* right_value285;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* base_type_288;
char* name_289;
_Bool err_290;
void* right_value286;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_291;
char* name2_292;
void* right_value287;
void* right_value288;
_Bool _while_condtional43;
void* right_value289;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_293;
char* name2_294;
void* right_value290;
void* right_value291;
void* right_value292;
struct tuple3$3sTypephcharphbool* multiple_assign_var15;
struct sType* type2_295;
char* name_296;
_Bool err_297;
_Bool _if_conditional347;
void* right_value293;
void* right_value294;
int __exception_result_var_b6;
_Bool _if_conditional348;
struct sClass* klass2_298;
_Bool _if_conditional349;
_Bool _if_conditional350;
char* source_tail_299;
void* right_value295;
void* right_value296;
struct buffer* header_300;
void* right_value297;
_Bool _if_conditional351;
void* right_value298;
char* __dec_obj80;
void* right_value299;
void* right_value300;
void* right_value301;
void* right_value302;
void* right_value303;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value308;
struct sNode* __result193__;
_Bool _if_conditional361;
char* source_head_302;
void* right_value309;
char* type_name_303;
struct sClass* parent_class_304;
_Bool _if_conditional362;
void* right_value310;
void* right_value311;
char* parent_class_name_305;
_Bool _if_conditional363;
struct sNode* __result194__;
void* right_value312;
void* right_value313;
struct list$1sClassp* parent_classes_308;
struct sClass* parent_class2_309;
_Bool _if_conditional366;
_Bool output_313;
struct sClass* struct_class_314;
_Bool _if_conditional367;
void* right_value317;
void* right_value318;
struct sClass* __dec_obj84;
void* right_value319;
struct sClass* __dec_obj85;
_Bool _if_conditional368;
struct sClass* defining_class_315;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value320;
char* __dec_obj86;
void* right_value321;
void* right_value327;
struct list$1sClassp* o2_saved_321;
struct sClass* parent_324;
struct list$1tuple2$2charphsTypephph* o2_saved_327;
struct tuple2$2charphsTypeph* it_328;
void* right_value328;
_Bool _if_conditional377;
struct sClass* klass2_329;
_Bool _if_conditional378;
void* right_value329;
char* __dec_obj87;
void* right_value330;
void* right_value331;
struct list$1sClassp* o2_saved_330;
struct sClass* parent_331;
struct list$1tuple2$2charphsTypephph* o2_saved_332;
struct tuple2$2charphsTypeph* it_333;
void* right_value332;
struct list$1tuple2$2charphsTypephph* o2_saved_334;
struct tuple2$2charphsTypeph* it_335;
void* right_value333;
int __exception_result_var_b7;
char* head_336;
char* p_saved_337;
int sline_saved_338;
char* sname_saved_339;
void* right_value334;
void* right_value335;
struct list$1sNodeph* methods_340;
_Bool _while_condtional46;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value336;
char* __dec_obj88;
char* __dec_obj89;
struct map$2charphcharph* __dec_obj90;
_Bool include__345;
_Bool multiple_declare_346;
_Bool _if_conditional385;
char* p_347;
int sline_348;
_Bool _if_conditional386;
void* right_value337;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* type_349;
char* name_350;
_Bool err_351;
_Bool _if_conditional387;
_Bool define_function_flag_352;
_Bool _if_conditional388;
char* p_353;
int sline_354;
_Bool _if_conditional389;
_Bool invalid_type_355;
_Bool _if_conditional390;
void* right_value338;
struct tuple3$3sTypephcharphbool* multiple_assign_var17;
struct sType* result_type_356;
char* fun_name_357;
_Bool err_358;
char* word_359;
_Bool _if_conditional391;
void* right_value339;
char* __dec_obj91;
_Bool _if_conditional392;
void* right_value340;
char* __dec_obj92;
char* __dec_obj93;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _while_condtional48;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value341;
char* __dec_obj94;
_Bool _if_conditional399;
_Bool _if_conditional400;
char* tail_360;
int pointer_num_361;
void* right_value342;
void* right_value343;
struct sType* __dec_obj95;
void* right_value344;
struct sNode* method_362;
struct sType* __dec_obj96;
_Bool _if_conditional403;
void* right_value348;
struct tuple3$3sTypephcharphbool* multiple_assign_var18;
struct sType* base_type_366;
char* name_367;
_Bool err_368;
void* right_value349;
struct tuple2$2sTypephcharph* multiple_assign_var19;
struct sType* type2_369;
char* name2_370;
void* right_value350;
void* right_value351;
_Bool _while_condtional49;
void* right_value352;
struct tuple2$2sTypephcharph* multiple_assign_var20;
struct sType* type2_371;
char* name2_372;
void* right_value353;
void* right_value354;
int __exception_result_var_b8;
_Bool _if_conditional404;
void* right_value355;
void* right_value356;
char* module_name_373;
void* right_value357;
void* right_value358;
struct list$1charph* params_374;
_Bool _if_conditional405;
_Bool _while_condtional50;
void* right_value359;
char* word_375;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
void* right_value360;
char* __dec_obj100;
_Bool _if_conditional418;
struct sNode* __result211__;
struct sClassModule* module_379;
_Bool _if_conditional420;
void* right_value361;
void* right_value367;
struct map$2charphcharph* __dec_obj102;
int i_383;
struct list$1charph* o2_saved_384;
char* it_387;
void* right_value371;
void* right_value372;
char* __dec_obj103;
void* right_value373;
struct tuple3$3sTypephcharphbool* multiple_assign_var21;
struct sType* type2_414;
char* name_415;
_Bool err_416;
_Bool _if_conditional453;
void* right_value374;
void* right_value375;
int __exception_result_var_b9;
_Bool _if_conditional454;
_Bool _if_conditional455;
_Bool _if_conditional456;
void* right_value376;
char* __dec_obj104;
void* right_value377;
void* right_value378;
void* right_value379;
void* right_value380;
struct sNode* _inf_value5;
struct sClassNode* _inf_obj_value5;
void* right_value386;
struct sNode* __result240__;
void* right_value387;
struct sNode* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_255, 0, sizeof(char*));
right_value240 = (void*)0;
memset(&type_name_256, 0, sizeof(char*));
memset(&struct_class_257, 0, sizeof(struct sClass*));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&source_tail_258, 0, sizeof(char*));
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&header_259, 0, sizeof(struct buffer*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&T_263, 0, sizeof(char*));
right_value258 = (void*)0;
memset(&generics_class_267, 0, sizeof(struct sClass*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&type2_268, 0, sizeof(struct sType*));
memset(&name_269, 0, sizeof(char*));
memset(&err_270, 0, sizeof(_Bool));
memset(&type2_268, 0, sizeof(struct sType*));
memset(&name_269, 0, sizeof(char*));
memset(&err_270, 0, sizeof(_Bool));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&name2_271, 0, sizeof(char*));
right_value265 = (void*)0;
memset(&type3_272, 0, sizeof(struct sType*));
memset(&no_comma_273, 0, sizeof(_Bool));
right_value266 = (void*)0;
memset(&node_274, 0, sizeof(struct sNode*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&source_tail_275, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&header_276, 0, sizeof(struct buffer*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value278 = (void*)0;
memset(&output_278, 0, sizeof(_Bool));
memset(&struct_class_279, 0, sizeof(struct sClass*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&parent_class_280, 0, sizeof(struct sClass*));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&parent_class_name_281, 0, sizeof(char*));
memset(&multiple_declare_282, 0, sizeof(_Bool));
memset(&p_283, 0, sizeof(char*));
memset(&sline_284, 0, sizeof(int));
right_value284 = (void*)0;
memset(&type_285, 0, sizeof(struct sType*));
memset(&name_286, 0, sizeof(char*));
memset(&err_287, 0, sizeof(_Bool));
memset(&type_285, 0, sizeof(struct sType*));
memset(&name_286, 0, sizeof(char*));
memset(&err_287, 0, sizeof(_Bool));
right_value285 = (void*)0;
memset(&base_type_288, 0, sizeof(struct sType*));
memset(&name_289, 0, sizeof(char*));
memset(&err_290, 0, sizeof(_Bool));
memset(&base_type_288, 0, sizeof(struct sType*));
memset(&name_289, 0, sizeof(char*));
memset(&err_290, 0, sizeof(_Bool));
right_value286 = (void*)0;
memset(&type2_291, 0, sizeof(struct sType*));
memset(&name2_292, 0, sizeof(char*));
memset(&type2_291, 0, sizeof(struct sType*));
memset(&name2_292, 0, sizeof(char*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&type2_293, 0, sizeof(struct sType*));
memset(&name2_294, 0, sizeof(char*));
memset(&type2_293, 0, sizeof(struct sType*));
memset(&name2_294, 0, sizeof(char*));
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&type2_295, 0, sizeof(struct sType*));
memset(&name_296, 0, sizeof(char*));
memset(&err_297, 0, sizeof(_Bool));
memset(&type2_295, 0, sizeof(struct sType*));
memset(&name_296, 0, sizeof(char*));
memset(&err_297, 0, sizeof(_Bool));
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&klass2_298, 0, sizeof(struct sClass*));
memset(&source_tail_299, 0, sizeof(char*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&header_300, 0, sizeof(struct buffer*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value308 = (void*)0;
memset(&source_head_302, 0, sizeof(char*));
right_value309 = (void*)0;
memset(&type_name_303, 0, sizeof(char*));
memset(&parent_class_304, 0, sizeof(struct sClass*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&parent_class_name_305, 0, sizeof(char*));
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&parent_classes_308, 0, sizeof(struct list$1sClassp*));
memset(&parent_class2_309, 0, sizeof(struct sClass*));
memset(&output_313, 0, sizeof(_Bool));
memset(&struct_class_314, 0, sizeof(struct sClass*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&defining_class_315, 0, sizeof(struct sClass*));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value327 = (void*)0;
memset(&o2_saved_321, 0, sizeof(struct list$1sClassp*));
memset(&parent_324, 0, sizeof(struct sClass*));
memset(&o2_saved_327, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_328, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value328 = (void*)0;
memset(&klass2_329, 0, sizeof(struct sClass*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&o2_saved_330, 0, sizeof(struct list$1sClassp*));
memset(&parent_331, 0, sizeof(struct sClass*));
memset(&o2_saved_332, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_333, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value332 = (void*)0;
memset(&o2_saved_334, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_335, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value333 = (void*)0;
memset(&head_336, 0, sizeof(char*));
memset(&p_saved_337, 0, sizeof(char*));
memset(&sline_saved_338, 0, sizeof(int));
memset(&sname_saved_339, 0, sizeof(char*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&methods_340, 0, sizeof(struct list$1sNodeph*));
right_value336 = (void*)0;
memset(&include__345, 0, sizeof(_Bool));
memset(&multiple_declare_346, 0, sizeof(_Bool));
memset(&p_347, 0, sizeof(char*));
memset(&sline_348, 0, sizeof(int));
right_value337 = (void*)0;
memset(&type_349, 0, sizeof(struct sType*));
memset(&name_350, 0, sizeof(char*));
memset(&err_351, 0, sizeof(_Bool));
memset(&type_349, 0, sizeof(struct sType*));
memset(&name_350, 0, sizeof(char*));
memset(&err_351, 0, sizeof(_Bool));
memset(&define_function_flag_352, 0, sizeof(_Bool));
memset(&p_353, 0, sizeof(char*));
memset(&sline_354, 0, sizeof(int));
memset(&invalid_type_355, 0, sizeof(_Bool));
right_value338 = (void*)0;
memset(&result_type_356, 0, sizeof(struct sType*));
memset(&fun_name_357, 0, sizeof(char*));
memset(&err_358, 0, sizeof(_Bool));
memset(&result_type_356, 0, sizeof(struct sType*));
memset(&fun_name_357, 0, sizeof(char*));
memset(&err_358, 0, sizeof(_Bool));
memset(&word_359, 0, sizeof(char*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&tail_360, 0, sizeof(char*));
memset(&pointer_num_361, 0, sizeof(int));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&method_362, 0, sizeof(struct sNode*));
right_value348 = (void*)0;
memset(&base_type_366, 0, sizeof(struct sType*));
memset(&name_367, 0, sizeof(char*));
memset(&err_368, 0, sizeof(_Bool));
memset(&base_type_366, 0, sizeof(struct sType*));
memset(&name_367, 0, sizeof(char*));
memset(&err_368, 0, sizeof(_Bool));
right_value349 = (void*)0;
memset(&type2_369, 0, sizeof(struct sType*));
memset(&name2_370, 0, sizeof(char*));
memset(&type2_369, 0, sizeof(struct sType*));
memset(&name2_370, 0, sizeof(char*));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&type2_371, 0, sizeof(struct sType*));
memset(&name2_372, 0, sizeof(char*));
memset(&type2_371, 0, sizeof(struct sType*));
memset(&name2_372, 0, sizeof(char*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&module_name_373, 0, sizeof(char*));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&params_374, 0, sizeof(struct list$1charph*));
right_value359 = (void*)0;
memset(&word_375, 0, sizeof(char*));
right_value360 = (void*)0;
memset(&module_379, 0, sizeof(struct sClassModule*));
right_value361 = (void*)0;
right_value367 = (void*)0;
memset(&i_383, 0, sizeof(int));
memset(&o2_saved_384, 0, sizeof(struct list$1charph*));
memset(&it_387, 0, sizeof(char*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&type2_414, 0, sizeof(struct sType*));
memset(&name_415, 0, sizeof(char*));
memset(&err_416, 0, sizeof(_Bool));
memset(&type2_414, 0, sizeof(struct sType*));
memset(&name_415, 0, sizeof(char*));
memset(&err_416, 0, sizeof(_Bool));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
    if(_if_conditional315=charp_operator_equals(buf,"struct"),    _if_conditional315) {
        source_head_255=head;
        type_name_256=(char*)come_increment_ref_count(((char*)(right_value240=parse_word(info))));
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional316=*info->p==59,        _if_conditional316) {
            info->p++;
            skip_spaces_and_lf(info);
            if(_if_conditional317=map$2charphsClassph_at(info->classes,type_name_256,((void*)0))==((void*)0),            _if_conditional317) {
                __dec_obj67=struct_class_257;
                struct_class_257=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value242=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value241=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 540, "sClass")))),type_name_256,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer3(__dec_obj67,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value241,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value242,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                struct_class_257->mNobodyStruct=(_Bool)1;
            }
            else {
                __dec_obj68=struct_class_257;
                struct_class_257=(struct sClass*)come_increment_ref_count(map$2charphsClassph_at(info->classes,type_name_256,((void*)0)));
                come_call_finalizer3(__dec_obj68,sClass_finalize, 0, 0, 0, 0, (void*)0);
                struct_class_257->mNobodyStruct=(_Bool)1;
            }
            source_tail_258=info->p;
            header_259=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value244=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value243=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 550, "buffer"))))))));
            come_call_finalizer3(right_value243,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value244,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append(header_259,source_head_255,source_tail_258-source_head_255);
            add_come_code_at_come_header(info,"%s",((char*)(right_value245=buffer_to_string(header_259))));
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 555, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value248=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value246=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 555, "sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(type_name_256)))),(struct sClass*)come_increment_ref_count(struct_class_257),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result184__ = __result_obj__ = ((struct sNode*)(right_value253=_inf_value2));
            come_call_finalizer3(struct_class_257,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_259,buffer_finalize, 0, 0, 0, 0, (void*)0);
            type_name_256 = come_decrement_ref_count2(type_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value246,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value248,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result184__;
            come_call_finalizer3(struct_class_257,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_259,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional326=*info->p==60,            _if_conditional326) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while(_while_condtional39=(_Bool)1,                _while_condtional39) {
                    T_263=(char*)come_increment_ref_count(((char*)(right_value254=parse_word(info))));
                    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(right_value258=string_clone(T_263)))));
                    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional329=*info->p==62,                    _if_conditional329) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        T_263 = come_decrement_ref_count2(T_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        if(_if_conditional330=*info->p==44,                        _if_conditional330) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            exit(2);
                        }
                    }
                    T_263 = come_decrement_ref_count2(T_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional331=map$2charphsClassph_at(info->generics_classes,type_name_256,((void*)0))!=((void*)0),                _if_conditional331) {
                    err_msg(info,"redifined generics struct(%s)",type_name_256);
                    exit(2);
                }
                else {
                    __dec_obj75=generics_class_267;
                    generics_class_267=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value260=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value259=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 589, "sClass")))),type_name_256,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj75,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value259,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value260,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional332=map$2charphsClassph_at(info->generics_classes,type_name_256,((void*)0))==((void*)0),                _if_conditional332) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_256),(struct sClass*)come_increment_ref_count(generics_class_267));
                }
                (come_push_stackframe("14struct.c", 596, 5),__exception_result_var_b3=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b3);
                while(_while_condtional40=(_Bool)1,                _while_condtional40) {
                    parse_sharp_v5(info);
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value261=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_268=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_269=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_270=multiple_assign_var10->v3;
                    come_call_finalizer3(right_value261,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional333=!err_270,                    _if_conditional333) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(_if_conditional334=*info->p==44,                    _if_conditional334) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value263=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value262=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 609, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_269),(struct sType*)come_increment_ref_count(type2_268))))));
                        come_call_finalizer3(right_value262,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value263,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional41=*info->p==44,                        _while_condtional41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_271=(char*)come_increment_ref_count(((char*)(right_value264=parse_word(info))));
                            right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            type3_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(type2_268))));
                            come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional335=*info->p==58,                            _if_conditional335) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_273=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=expression_v13(info))));
                                if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                info->no_comma=no_comma_273;
                                __dec_obj76=type3_272->mSizeNum;
                                type3_272->mSizeNum=(struct sNode*)come_increment_ref_count(node_274);
                                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_274) { node_274 = come_decrement_ref_count2(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value268=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value267=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 631, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_271),(struct sType*)come_increment_ref_count(type3_272))))));
                            come_call_finalizer3(right_value267,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value268,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            name2_271 = come_decrement_ref_count2(name2_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type3_272,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value270=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value269=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 635, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_269),(struct sType*)come_increment_ref_count(type2_268))))));
                        come_call_finalizer3(right_value269,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value270,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    (come_push_stackframe("14struct.c", 638, 6),__exception_result_var_b4=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b4);
                    parse_sharp_v5(info);
                    if(_if_conditional336=*info->p==125,                    _if_conditional336) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(type2_268,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    parse_sharp_v5(info);
                    come_call_finalizer3(type2_268,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                list$1charph_reset(info->generics_type_names);
                source_tail_275=info->p;
                header_276=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value272=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value271=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 654, "buffer"))))))));
                come_call_finalizer3(right_value271,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value272,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_276,"struct ");
                buffer_append(header_276,source_head_255,source_tail_275-source_head_255);
                add_come_code_at_come_header(info,"%s;\n",((char*)(right_value273=buffer_to_string(header_276))));
                right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 660, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value275=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value274=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 660, "sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result189__ = __result_obj__ = ((struct sNode*)(right_value278=_inf_value3));
                come_call_finalizer3(generics_class_267,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
                type_name_256 = come_decrement_ref_count2(type_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value274,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value275,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result189__;
                come_call_finalizer3(generics_class_267,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                output_278=(_Bool)1;
                if(_if_conditional341=map$2charphsClassph_at(info->classes,type_name_256,((void*)0))==((void*)0),                _if_conditional341) {
                    __dec_obj78=struct_class_279;
                    struct_class_279=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value280=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value279=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 667, "sClass")))),type_name_256,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj78,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value279,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value280,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj79=struct_class_279;
                    struct_class_279=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value281=sClass_clone(map$2charphsClassph_at(info->classes,type_name_256,((void*)0))))));
                    come_call_finalizer3(__dec_obj79,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value281,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional342=list$1tuple2$2charphsTypephph_length(struct_class_279->mFields)>0,                    _if_conditional342) {
                        output_278=(_Bool)0;
                    }
                }
                parent_class_280=((void*)0);
                if(_if_conditional343=parsecmp("extends",info),                _if_conditional343) {
                    ((char*)(right_value282=parse_word(info)));
                    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parent_class_name_281=(char*)come_increment_ref_count(((char*)(right_value283=parse_word(info))));
                    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parent_class_280=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_281);
                    if(_if_conditional344=parent_class_280==((void*)0),                    _if_conditional344) {
                        err_msg(info,"invalid class name(%s)",parent_class_name_281);
                        __result190__ = __result_obj__ = ((void*)0);
                        parent_class_name_281 = come_decrement_ref_count2(parent_class_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(struct_class_279,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_256 = come_decrement_ref_count2(type_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result190__;
                    }
                    parent_class_name_281 = come_decrement_ref_count2(parent_class_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                (come_push_stackframe("14struct.c", 690, 7),__exception_result_var_b5=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b5);
                while(_while_condtional42=(_Bool)1,                _while_condtional42) {
                    parse_sharp_v5(info);
                    multiple_declare_282=(_Bool)0;
                    {
                        p_283=info->p;
                        sline_284=info->sline;
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value284=backtrace_parse_type((_Bool)1,info)));
                        type_285=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_286=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_287=multiple_assign_var11->v3;
                        come_call_finalizer3(right_value284,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional345=err_287&&*info->p==44,                        _if_conditional345) {
                            multiple_declare_282=(_Bool)1;
                        }
                        info->p=p_283;
                        info->sline=sline_284;
                        come_call_finalizer3(type_285,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_286 = come_decrement_ref_count2(name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(multiple_declare_282) {
                        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(right_value285=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_288=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name_289=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        err_290=multiple_assign_var12->v3;
                        come_call_finalizer3(right_value285,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(right_value286=parse_variable_name((struct sType*)come_increment_ref_count(base_type_288),(_Bool)1,info)));
                        type2_291=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_292=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer3(right_value286,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_279->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value288=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value287=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 715, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_292),(struct sType*)come_increment_ref_count(type2_291))))));
                        come_call_finalizer3(right_value287,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value288,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional43=*info->p==44,                        _while_condtional43) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var14=((struct tuple2$2sTypephcharph*)(right_value289=parse_variable_name((struct sType*)come_increment_ref_count(base_type_288),(_Bool)0,info)));
                            type2_293=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                            name2_294=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                            come_call_finalizer3(right_value289,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_279->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value291=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value290=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 723, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_294),(struct sType*)come_increment_ref_count(type2_293))))));
                            come_call_finalizer3(right_value290,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value291,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_294 = come_decrement_ref_count2(name2_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(base_type_288,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_289 = come_decrement_ref_count2(name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_292 = come_decrement_ref_count2(name2_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(right_value292=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_295=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                        name_296=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        err_297=multiple_assign_var15->v3;
                        come_call_finalizer3(right_value292,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional347=!err_297,                        _if_conditional347) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_279->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value294=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value293=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 733, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_296),(struct sType*)come_increment_ref_count(type2_295))))));
                        come_call_finalizer3(right_value293,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value294,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type2_295,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_296 = come_decrement_ref_count2(name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    (come_push_stackframe("14struct.c", 736, 8),__exception_result_var_b6=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b6);
                    parse_sharp_v5(info);
                    if(_if_conditional348=*info->p==125,                    _if_conditional348) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                list$1charph_reset(info->generics_type_names);
                klass2_298=map$2charphsClassph_at(info->classes,type_name_256,((void*)0));
                if(_if_conditional349=klass2_298==((void*)0)||klass2_298->mNobodyStruct,                _if_conditional349) {
                    if(klass2_298) {
                        klass2_298->mNobodyStruct=(_Bool)0;
                    }
                    source_tail_299=info->p;
                    header_300=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value296=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value295=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 756, "buffer"))))))));
                    come_call_finalizer3(right_value295,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value296,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    buffer_append(header_300,source_head_255,source_tail_299-source_head_255);
                    add_come_code_at_come_header(info,"%s;\n",((char*)(right_value297=buffer_to_string(header_300))));
                    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(header_300,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(parent_class_280) {
                    __dec_obj80=struct_class_279->mParentClassName;
                    struct_class_279->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value298=string_clone(parent_class_280->mName))));
                    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_279->mName),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value299=sClass_clone(struct_class_279)))));
                    come_call_finalizer3(right_value299,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 767, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value303=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value300=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 767, "sStructNode")))),(char*)come_increment_ref_count(((char*)(right_value301=__builtin_string(type_name_256)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value302=sClass_clone(struct_class_279)))),output_278,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result193__ = __result_obj__ = ((struct sNode*)(right_value308=_inf_value4));
                come_call_finalizer3(struct_class_279,sClass_finalize, 0, 0, 0, 0, (void*)0);
                type_name_256 = come_decrement_ref_count2(type_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value300,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value302,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value303,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result193__;
                come_call_finalizer3(struct_class_279,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_256 = come_decrement_ref_count2(type_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional361=charp_operator_equals(buf,"class"),        _if_conditional361) {
            source_head_302=head;
            type_name_303=(char*)come_increment_ref_count(((char*)(right_value309=parse_word(info))));
            right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_304=((void*)0);
            if(_if_conditional362=parsecmp("extends",info),            _if_conditional362) {
                ((char*)(right_value310=parse_word(info)));
                right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_305=(char*)come_increment_ref_count(((char*)(right_value311=parse_word(info))));
                right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_304=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_305);
                if(_if_conditional363=parent_class_304==((void*)0),                _if_conditional363) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_305);
                    __result194__ = __result_obj__ = ((void*)0);
                    parent_class_name_305 = come_decrement_ref_count2(parent_class_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_303 = come_decrement_ref_count2(type_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result194__;
                }
                parent_class_name_305 = come_decrement_ref_count2(parent_class_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parent_classes_308=(struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value313=list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value312=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 790, "list$1sClassp"))))))));
            come_call_finalizer3(right_value312,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value313,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            parent_class2_309=parent_class_304;
            while(parent_class2_309) {
                list$1sClassp_add(parent_classes_308,parent_class2_309);
                if(parent_class_304->mParentClassName) {
                    parent_class2_309=map$2charphsClassphp_operator_load_element(info->classes,parent_class_304->mParentClassName);
                }
                else {
                    parent_class2_309=((void*)0);
                }
            }
            output_313=(_Bool)1;
            if(_if_conditional367=map$2charphsClassph_at(info->classes,type_name_303,((void*)0))==((void*)0),            _if_conditional367) {
                __dec_obj84=struct_class_314;
                struct_class_314=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value318=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value317=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 807, "sClass")))),type_name_303,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                come_call_finalizer3(__dec_obj84,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value317,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value318,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj85=struct_class_314;
                struct_class_314=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value319=sClass_clone(map$2charphsClassph_at(info->classes,type_name_303,((void*)0))))));
                come_call_finalizer3(__dec_obj85,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value319,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional368=list$1tuple2$2charphsTypephph_length(struct_class_314->mFields)>0,                _if_conditional368) {
                    output_313=(_Bool)0;
                }
            }
            defining_class_315=info->defining_class;
            info->defining_class=struct_class_314;
            if(_if_conditional369=map$2charphsClassph_at(info->classes,type_name_303,((void*)0))==((void*)0),            _if_conditional369) {
                if(parent_class_304) {
                    __dec_obj86=struct_class_314->mParentClassName;
                    struct_class_314->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value320=string_clone(parent_class_304->mName))));
                    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_303),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value321=sClass_clone(struct_class_314)))));
                come_call_finalizer3(right_value321,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                for(                o2_saved_321=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(right_value327=list$1sClassp_reverse(parent_classes_308))))),parent_324=list$1sClassp_begin((o2_saved_321)) ,                come_call_finalizer3(right_value327,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                0;                !list$1sClassp_end((o2_saved_321));                parent_324=list$1sClassp_next((o2_saved_321))                ){
                    for(                    o2_saved_327=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_324->mFields)),it_328=list$1tuple2$2charphsTypephph_begin((o2_saved_327));                    !list$1tuple2$2charphsTypephph_end((o2_saved_327));                    it_328=list$1tuple2$2charphsTypephph_next((o2_saved_327))                    ){
                        list$1tuple2$2charphsTypephph_add(struct_class_314->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value328=tuple2$2charphsTypephp_clone(it_328)))));
                        come_call_finalizer3(right_value328,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    come_call_finalizer3(o2_saved_327,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_321,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional377=list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,type_name_303,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_314->mFields)>0,                _if_conditional377) {
                    klass2_329=map$2charphsClassph_at(info->classes,type_name_303,((void*)0));
                    if(parent_class_304) {
                        __dec_obj87=klass2_329->mParentClassName;
                        klass2_329->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value329=string_clone(parent_class_304->mName))));
                        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_303),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value330=sClass_clone(klass2_329)))));
                    come_call_finalizer3(right_value330,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    for(                    o2_saved_330=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(right_value331=list$1sClassp_reverse(parent_classes_308))))),parent_331=list$1sClassp_begin((o2_saved_330)) ,                    come_call_finalizer3(right_value331,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                    0;                    !list$1sClassp_end((o2_saved_330));                    parent_331=list$1sClassp_next((o2_saved_330))                    ){
                        for(                        o2_saved_332=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_331->mFields)),it_333=list$1tuple2$2charphsTypephph_begin((o2_saved_332));                        !list$1tuple2$2charphsTypephph_end((o2_saved_332));                        it_333=list$1tuple2$2charphsTypephph_next((o2_saved_332))                        ){
                            list$1tuple2$2charphsTypephph_add(klass2_329->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value332=tuple2$2charphsTypephp_clone(it_333)))));
                            come_call_finalizer3(right_value332,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer3(o2_saved_332,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_330,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    for(                    o2_saved_334=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_314->mFields)),it_335=list$1tuple2$2charphsTypephph_begin((o2_saved_334));                    !list$1tuple2$2charphsTypephph_end((o2_saved_334));                    it_335=list$1tuple2$2charphsTypephph_next((o2_saved_334))                    ){
                        list$1tuple2$2charphsTypephph_add(klass2_329->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value333=tuple2$2charphsTypephp_clone(it_335)))));
                        come_call_finalizer3(right_value333,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    come_call_finalizer3(o2_saved_334,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            (come_push_stackframe("14struct.c", 849, 9),__exception_result_var_b7=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b7);
            head_336=info->p;
            p_saved_337=((void*)0);
            sline_saved_338=0;
            sname_saved_339=((void*)0);
            methods_340=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value335=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value334=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 857, "list$1sNodeph"))))))));
            come_call_finalizer3(right_value334,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value335,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            while(_while_condtional46=(_Bool)1,            _while_condtional46) {
                if(p_saved_337) {
                    if(_if_conditional380=*info->p==0,                    _if_conditional380) {
                        info->p=p_saved_337;
                        info->sline=sline_saved_338;
                        __dec_obj88=info->sname;
                        info->sname=(char*)come_increment_ref_count(((char*)(right_value336=__builtin_string(sname_saved_339))));
                        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        p_saved_337=((void*)0);
                        sline_saved_338=0;
                        __dec_obj89=sname_saved_339;
                        sname_saved_339=((void*)0);
                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj90=info->module_params;
                        info->module_params=((void*)0);
                        come_call_finalizer3(__dec_obj90,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                parse_sharp_v5(info);
                include__345=parsecmp("include",info);
                multiple_declare_346=(_Bool)0;
                if(_if_conditional385=include__345==(_Bool)0,                _if_conditional385) {
                    p_347=info->p;
                    sline_348=info->sline;
                    if(_if_conditional386=memcmp(info->p,"new(",4)!=0,                    _if_conditional386) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(right_value337=backtrace_parse_type((_Bool)1,info)));
                        type_349=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        name_350=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_351=multiple_assign_var16->v3;
                        come_call_finalizer3(right_value337,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional387=err_351&&*info->p==44,                        _if_conditional387) {
                            multiple_declare_346=(_Bool)1;
                        }
                        come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_350 = come_decrement_ref_count2(name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    info->p=p_347;
                    info->sline=sline_348;
                }
                define_function_flag_352=(_Bool)0;
                if(_if_conditional388=include__345==(_Bool)0,                _if_conditional388) {
                    p_353=info->p;
                    sline_354=info->sline;
                    if(_if_conditional389=memcmp(info->p,"new(",4)==0,                    _if_conditional389) {
                        define_function_flag_352=(_Bool)1;
                    }
                    else {
                        invalid_type_355=(_Bool)0;
                        if(_if_conditional390=xisalpha(*info->p)||*info->p==95,                        _if_conditional390) {
                            multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(right_value338=backtrace_parse_type((_Bool)0,info)));
                            result_type_356=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                            fun_name_357=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                            err_358=multiple_assign_var17->v3;
                            come_call_finalizer3(right_value338,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(result_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_357 = come_decrement_ref_count2(fun_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_359=((void*)0);
                        if(_if_conditional391=xisalnum(*info->p)||*info->p==95,                        _if_conditional391) {
                            __dec_obj91=word_359;
                            word_359=(char*)come_increment_ref_count(((char*)(right_value339=parse_word(info))));
                            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional392=string_operator_equals(word_359,"extern"),                            _if_conditional392) {
                                __dec_obj92=word_359;
                                word_359=(char*)come_increment_ref_count(((char*)(right_value340=parse_word(info))));
                                __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            __dec_obj93=word_359;
                            word_359=((void*)0);
                            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        info->no_output_err=(_Bool)0;
                        if(word_359) {
                            if(_if_conditional394=is_type_name(word_359,info),                            _if_conditional394) {
                                while(_while_condtional48=*info->p==42,                                _while_condtional48) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                if(_if_conditional395=*info->p==91&&*(info->p+1)==93,                                _if_conditional395) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                }
                                if(_if_conditional396=*info->p==58,                                _if_conditional396) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                if(_if_conditional397=*info->p==58,                                _if_conditional397) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                if(_if_conditional398=xisalnum(*info->p)||*info->p==95,                                _if_conditional398) {
                                    __dec_obj94=word_359;
                                    word_359=(char*)come_increment_ref_count(((char*)(right_value341=parse_word(info))));
                                    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            if(_if_conditional399=strlen(word_359)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58)),                            _if_conditional399) {
                                define_function_flag_352=(_Bool)1;
                            }
                        }
                        word_359 = come_decrement_ref_count2(word_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    info->p=p_353;
                    info->sline=sline_354;
                }
                if(define_function_flag_352) {
                    tail_360=info->p;
                    pointer_num_361=1;
                    __dec_obj95=info->impl_type;
                    info->impl_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 960, "sType")))),type_name_303,(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    info->impl_type->mPointerNum=pointer_num_361;
                    output_struct_header(struct_class_314,info);
                    info->in_class=(_Bool)1;
                    method_362=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=parse_function(info))));
                    if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __dec_obj96=info->impl_type;
                    info->impl_type=((void*)0);
                    come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
                    info->in_class=(_Bool)0;
                    list$1sNodeph_push_back(methods_340,(struct sNode*)come_increment_ref_count(method_362));
                    if(method_362) { method_362 = come_decrement_ref_count2(method_362, ((struct sNode*)method_362)->finalize, ((struct sNode*)method_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(multiple_declare_346) {
                        multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(right_value348=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_366=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name_367=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        err_368=multiple_assign_var18->v3;
                        come_call_finalizer3(right_value348,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var19=((struct tuple2$2sTypephcharph*)(right_value349=parse_variable_name((struct sType*)come_increment_ref_count(base_type_366),(_Bool)1,info)));
                        type2_369=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                        name2_370=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                        come_call_finalizer3(right_value349,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_314->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value351=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value350=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 979, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_370),(struct sType*)come_increment_ref_count(type2_369))))));
                        come_call_finalizer3(right_value350,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value351,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional49=*info->p==44,                        _while_condtional49) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var20=((struct tuple2$2sTypephcharph*)(right_value352=parse_variable_name((struct sType*)come_increment_ref_count(base_type_366),(_Bool)0,info)));
                            type2_371=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                            name2_372=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            come_call_finalizer3(right_value352,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_314->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value354=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value353=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 987, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_372),(struct sType*)come_increment_ref_count(type2_371))))));
                            come_call_finalizer3(right_value353,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value354,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_372 = come_decrement_ref_count2(name2_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        (come_push_stackframe("14struct.c", 989, 10),__exception_result_var_b8=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b8);
                        come_call_finalizer3(base_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_367 = come_decrement_ref_count2(name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type2_369,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_370 = come_decrement_ref_count2(name2_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(_if_conditional404=parsecmp("include",info),                        _if_conditional404) {
                            ((char*)(right_value355=parse_word(info)));
                            right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            module_name_373=(char*)come_increment_ref_count(((char*)(right_value356=parse_word(info))));
                            right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            params_374=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value358=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value357=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 996, "list$1charph"))))))));
                            come_call_finalizer3(right_value357,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value358,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional405=*info->p==60,                            _if_conditional405) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                while(_while_condtional50=(_Bool)1,                                _while_condtional50) {
                                    word_375=(char*)come_increment_ref_count(((char*)(right_value359=parse_word(info))));
                                    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    list$1charph_add(params_374,(char*)come_increment_ref_count(word_375));
                                    if(_if_conditional406=*info->p==44,                                    _if_conditional406) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(_if_conditional407=*info->p==0,                                        _if_conditional407) {
                                            err_msg(info,"invalid source end");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional408=*info->p==62,                                            _if_conditional408) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                word_375 = come_decrement_ref_count2(word_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid charactor(%c)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    word_375 = come_decrement_ref_count2(word_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            if(_if_conditional409=*info->p==59,                            _if_conditional409) {
                                info->p++;
                            }
                            skip_spaces_and_lf(info);
                            p_saved_337=info->p;
                            sline_saved_338=info->sline;
                            __dec_obj100=sname_saved_339;
                            sname_saved_339=(char*)come_increment_ref_count(((char*)(right_value360=__builtin_string(info->sname))));
                            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional418=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_373)==((void*)0),                            _if_conditional418) {
                                err_msg(info,"module not found");
                                __result211__ = __result_obj__ = ((void*)0);
                                module_name_373 = come_decrement_ref_count2(module_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_374,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_303 = come_decrement_ref_count2(type_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(parent_classes_308,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(struct_class_314,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                sname_saved_339 = come_decrement_ref_count2(sname_saved_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(methods_340,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                return __result211__;
                            }
                            module_379=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_373), "14struct.c", 1040, 11));
                            if(_if_conditional420=list$1charph_length(module_379->mParams)!=list$1charph_length(params_374),                            _if_conditional420) {
                                err_msg(info,"invalid parametor number");
                                exit(1);
                            }
                            __dec_obj102=info->module_params;
                            info->module_params=(struct map$2charphcharph*)come_increment_ref_count(((struct map$2charphcharph*)(right_value367=map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count(((struct map$2charphcharph*)(right_value361=(struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1047, "map$2charphcharph"))))))));
                            come_call_finalizer3(__dec_obj102,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value361,map$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value367,map$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            i_383=0;
                            for(                            o2_saved_384=(struct list$1charph*)come_increment_ref_count((module_379->mParams)),it_387=list$1charph_begin((o2_saved_384));                            !list$1charph_end((o2_saved_384));                            it_387=list$1charph_next((o2_saved_384))                            ){
                                ((char*)(right_value371=map$2charphcharphp_operator_store_element(info->module_params,it_387,((char*)come_null_check(list$1charphp_operator_load_element(params_374,i_383), "14struct.c", 1051, 12)))));
                                right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            come_call_finalizer3(o2_saved_384,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=module_379->mText;
                            info->sline=module_379->mSLine;
                            __dec_obj103=info->sname;
                            info->sname=(char*)come_increment_ref_count(((char*)(right_value372=__builtin_string(module_379->mSName))));
                            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            module_name_373 = come_decrement_ref_count2(module_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_374,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(right_value373=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type2_414=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                            name_415=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                            err_416=multiple_assign_var21->v3;
                            come_call_finalizer3(right_value373,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional453=!err_416,                            _if_conditional453) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            list$1tuple2$2charphsTypephph_push_back(struct_class_314->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value375=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value374=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1065, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_415),(struct sType*)come_increment_ref_count(type2_414))))));
                            come_call_finalizer3(right_value374,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value375,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("14struct.c", 1066, 13),__exception_result_var_b9=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b9);
                            come_call_finalizer3(type2_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_415 = come_decrement_ref_count2(name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                parse_sharp_v5(info);
                if(_if_conditional454=*info->p==125,                _if_conditional454) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            if(p_saved_337) {
                if(_if_conditional456=info->p==0,                _if_conditional456) {
                    info->p=p_saved_337;
                    info->sline=sline_saved_338;
                    __dec_obj104=info->sname;
                    info->sname=(char*)come_increment_ref_count(((char*)(right_value376=__builtin_string(sname_saved_339))));
                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    p_saved_337=((void*)0);
                    sline_saved_338=0;
                }
            }
            list$1charph_reset(info->generics_type_names);
            info->defining_class=defining_class_315;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1094, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sClassNode*)(right_value380=sClassNode_initialize((struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value377=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1094, "sClassNode")))),(char*)come_increment_ref_count(((char*)(right_value378=__builtin_string(type_name_303)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value379=sClass_clone(struct_class_314)))),(struct list$1sNodeph*)come_increment_ref_count(methods_340),output_313,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sClassNode_finalize;
            _inf_value5->clone=(void*)sClassNode_clone;
            _inf_value5->compile=(void*)sClassNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sClassNode_terminated;
            _inf_value5->kind=(void*)sClassNode_kind;
            __result240__ = __result_obj__ = ((struct sNode*)(right_value386=_inf_value5));
            type_name_303 = come_decrement_ref_count2(type_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(parent_classes_308,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(struct_class_314,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_339 = come_decrement_ref_count2(sname_saved_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(methods_340,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value377,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value379,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value380,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result240__;
            type_name_303 = come_decrement_ref_count2(type_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(parent_classes_308,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(struct_class_314,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_339 = come_decrement_ref_count2(sname_saved_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(methods_340,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result241__ = __result_obj__ = ((struct sNode*)(right_value387=top_level_v97(buf,head,head_sline,info)));
    if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result241__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional318=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional318) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional319=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional319) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional320=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional320) {
                    come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional321;
struct sStructNobodyNode* __result182__;
void* right_value249;
struct sStructNobodyNode* result_260;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value250;
char* __dec_obj69;
_Bool _if_conditional324;
void* right_value251;
char* __dec_obj70;
_Bool _if_conditional325;
void* right_value252;
struct sClass* __dec_obj71;
struct sStructNobodyNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value249 = (void*)0;
memset(&result_260, 0, sizeof(struct sStructNobodyNode*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
                if(_if_conditional321=self==(void*)0,                _if_conditional321) {
                    __result182__ = __result_obj__ = (void*)0;
                    return __result182__;
                }
                result_260=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value249=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"))));
                come_call_finalizer3(right_value249,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional322=self!=((void*)0),                _if_conditional322) {
                    result_260->sline=self->sline;
                }
                if(_if_conditional323=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional323) {
                    __dec_obj69=result_260->sname;
                    result_260->sname=(char*)come_increment_ref_count(((char*)(right_value250=string_clone(self->sname))));
                    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional324=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional324) {
                    __dec_obj70=result_260->mName;
                    result_260->mName=(char*)come_increment_ref_count(((char*)(right_value251=string_clone(self->mName))));
                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional325=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional325) {
                    __dec_obj71=result_260->mClass;
                    result_260->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value252=sClass_clone(self->mClass))));
                    come_call_finalizer3(__dec_obj71,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value252,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result183__ = __result_obj__ = result_260;
                come_call_finalizer3(result_260,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result183__;
                come_call_finalizer3(result_260,sStructNobodyNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_261;
_Bool _while_condtional38;
struct list_item$1charph* prev_it_262;
struct list$1charph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_261, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_262, 0, sizeof(struct list_item$1charph*));
                    it_261=self->head;
                    while(_while_condtional38=it_261!=((void*)0),                    _while_condtional38) {
                        prev_it_262=it_261;
                        it_261=it_261->next;
                        come_call_finalizer3(prev_it_262,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result185__ = __result_obj__ = self;
                    return __result185__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional327;
void* right_value255;
struct list_item$1charph* litem_264;
char* __dec_obj72;
_Bool _if_conditional328;
void* right_value256;
struct list_item$1charph* litem_265;
char* __dec_obj73;
void* right_value257;
struct list_item$1charph* litem_266;
char* __dec_obj74;
struct list$1charph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
memset(&litem_264, 0, sizeof(struct list_item$1charph*));
right_value256 = (void*)0;
memset(&litem_265, 0, sizeof(struct list_item$1charph*));
right_value257 = (void*)0;
memset(&litem_266, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional327=self->len==0,                        _if_conditional327) {
                            litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value255=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 221, "list_item$1charph"))));
                            come_call_finalizer3(right_value255,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_264->prev=((void*)0);
                            litem_264->next=((void*)0);
                            __dec_obj72=litem_264->item;
                            litem_264->item=(char*)come_increment_ref_count(item);
                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_264;
                            self->head=litem_264;
                        }
                        else {
                            if(_if_conditional328=self->len==1,                            _if_conditional328) {
                                litem_265=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value256=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 231, "list_item$1charph"))));
                                come_call_finalizer3(right_value256,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_265->prev=self->head;
                                litem_265->next=((void*)0);
                                __dec_obj73=litem_265->item;
                                litem_265->item=(char*)come_increment_ref_count(item);
                                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_265;
                                self->head->next=litem_265;
                            }
                            else {
                                litem_266=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value257=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 241, "list_item$1charph"))));
                                come_call_finalizer3(right_value257,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_266->prev=self->tail;
                                litem_266->next=((void*)0);
                                __dec_obj74=litem_266->item;
                                litem_266->item=(char*)come_increment_ref_count(item);
                                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_266;
                                self->tail=litem_266;
                            }
                        }
                        self->len++;
                        __result186__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result186__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional337=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional337) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional338;
struct sGenericsStructNode* __result187__;
void* right_value276;
struct sGenericsStructNode* result_277;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value277;
char* __dec_obj77;
struct sGenericsStructNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_277, 0, sizeof(struct sGenericsStructNode*));
right_value277 = (void*)0;
                    if(_if_conditional338=self==(void*)0,                    _if_conditional338) {
                        __result187__ = __result_obj__ = (void*)0;
                        return __result187__;
                    }
                    result_277=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value276=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"))));
                    come_call_finalizer3(right_value276,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional339=self!=((void*)0),                    _if_conditional339) {
                        result_277->sline=self->sline;
                    }
                    if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional340) {
                        __dec_obj77=result_277->sname;
                        result_277->sname=(char*)come_increment_ref_count(((char*)(right_value277=string_clone(self->sname))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result188__ = __result_obj__ = result_277;
                    come_call_finalizer3(result_277,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result188__;
                    come_call_finalizer3(result_277,sGenericsStructNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional352=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional352) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional353=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional353) {
                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional354=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional354) {
                        come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional355;
struct sStructNode* __result191__;
void* right_value304;
struct sStructNode* result_301;
_Bool _if_conditional356;
_Bool _if_conditional357;
void* right_value305;
char* __dec_obj81;
_Bool _if_conditional358;
void* right_value306;
char* __dec_obj82;
_Bool _if_conditional359;
void* right_value307;
struct sClass* __dec_obj83;
_Bool _if_conditional360;
struct sStructNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
memset(&result_301, 0, sizeof(struct sStructNode*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
                    if(_if_conditional355=self==(void*)0,                    _if_conditional355) {
                        __result191__ = __result_obj__ = (void*)0;
                        return __result191__;
                    }
                    result_301=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value304=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"))));
                    come_call_finalizer3(right_value304,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional356=self!=((void*)0),                    _if_conditional356) {
                        result_301->sline=self->sline;
                    }
                    if(_if_conditional357=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional357) {
                        __dec_obj81=result_301->sname;
                        result_301->sname=(char*)come_increment_ref_count(((char*)(right_value305=string_clone(self->sname))));
                        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional358=self!=((void*)0)&&self->mName!=((void*)0),                    _if_conditional358) {
                        __dec_obj82=result_301->mName;
                        result_301->mName=(char*)come_increment_ref_count(((char*)(right_value306=string_clone(self->mName))));
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional359=self!=((void*)0)&&self->mClass!=((void*)0),                    _if_conditional359) {
                        __dec_obj83=result_301->mClass;
                        result_301->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value307=sClass_clone(self->mClass))));
                        come_call_finalizer3(__dec_obj83,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value307,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional360=self!=((void*)0),                    _if_conditional360) {
                        result_301->mOutput=self->mOutput;
                    }
                    __result192__ = __result_obj__ = result_301;
                    come_call_finalizer3(result_301,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result192__;
                    come_call_finalizer3(result_301,sStructNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__;
struct list$1sClassp* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result195__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
                return __result195__;
                come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
void* __result_obj__;
struct list_item$1sClassp* it_306;
_Bool _while_condtional44;
struct list_item$1sClassp* prev_it_307;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_306, 0, sizeof(struct list_item$1sClassp*));
memset(&prev_it_307, 0, sizeof(struct list_item$1sClassp*));
                    it_306=self->head;
                    while(_while_condtional44=it_306!=((void*)0),                    _while_condtional44) {
                        prev_it_307=it_306;
                        it_306=it_306->next;
                        come_call_finalizer3(prev_it_307,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional364;
void* right_value314;
struct list_item$1sClassp* litem_310;
_Bool _if_conditional365;
void* right_value315;
struct list_item$1sClassp* litem_311;
void* right_value316;
struct list_item$1sClassp* litem_312;
struct list$1sClassp* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
memset(&litem_310, 0, sizeof(struct list_item$1sClassp*));
right_value315 = (void*)0;
memset(&litem_311, 0, sizeof(struct list_item$1sClassp*));
right_value316 = (void*)0;
memset(&litem_312, 0, sizeof(struct list_item$1sClassp*));
                    if(_if_conditional364=self->len==0,                    _if_conditional364) {
                        litem_310=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value314=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 151, "list_item$1sClassp"))));
                        come_call_finalizer3(right_value314,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_310->prev=((void*)0);
                        litem_310->next=((void*)0);
                        litem_310->item=item;
                        self->tail=litem_310;
                        self->head=litem_310;
                    }
                    else {
                        if(_if_conditional365=self->len==1,                        _if_conditional365) {
                            litem_311=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value315=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 161, "list_item$1sClassp"))));
                            come_call_finalizer3(right_value315,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_311->prev=self->head;
                            litem_311->next=((void*)0);
                            litem_311->item=item;
                            self->tail=litem_311;
                            self->head->next=litem_311;
                        }
                        else {
                            litem_312=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value316=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 171, "list_item$1sClassp"))));
                            come_call_finalizer3(right_value316,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_312->prev=self->tail;
                            litem_312->next=((void*)0);
                            litem_312->item=item;
                            self->tail->next=litem_312;
                            self->tail=litem_312;
                        }
                    }
                    self->len++;
                    __result196__ = __result_obj__ = self;
                    return __result196__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__;
void* right_value322;
void* right_value323;
struct list$1sClassp* result_316;
struct list_item$1sClassp* it_317;
_Bool _while_condtional45;
struct list$1sClassp* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&result_316, 0, sizeof(struct list$1sClassp*));
memset(&it_317, 0, sizeof(struct list_item$1sClassp*));
                    result_316=(struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value323=list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(right_value322=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./neo-c.h", 943, "list$1sClassp"))))))));
                    come_call_finalizer3(right_value322,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value323,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_317=self->tail;
                    while(_while_condtional45=it_317!=((void*)0),                    _while_condtional45) {
                        list$1sClassp_push_back(result_316,it_317->item);
                        it_317=it_317->prev;
                    }
                    __result198__ = __result_obj__ = result_316;
                    come_call_finalizer3(result_316,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result198__;
                    come_call_finalizer3(result_316,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional371;
void* right_value324;
struct list_item$1sClassp* litem_318;
_Bool _if_conditional372;
void* right_value325;
struct list_item$1sClassp* litem_319;
void* right_value326;
struct list_item$1sClassp* litem_320;
struct list$1sClassp* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
memset(&litem_318, 0, sizeof(struct list_item$1sClassp*));
right_value325 = (void*)0;
memset(&litem_319, 0, sizeof(struct list_item$1sClassp*));
right_value326 = (void*)0;
memset(&litem_320, 0, sizeof(struct list_item$1sClassp*));
                            if(_if_conditional371=self->len==0,                            _if_conditional371) {
                                litem_318=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value324=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 221, "list_item$1sClassp"))));
                                come_call_finalizer3(right_value324,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_318->prev=((void*)0);
                                litem_318->next=((void*)0);
                                litem_318->item=item;
                                self->tail=litem_318;
                                self->head=litem_318;
                            }
                            else {
                                if(_if_conditional372=self->len==1,                                _if_conditional372) {
                                    litem_319=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value325=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 231, "list_item$1sClassp"))));
                                    come_call_finalizer3(right_value325,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_319->prev=self->head;
                                    litem_319->next=((void*)0);
                                    litem_319->item=item;
                                    self->tail=litem_319;
                                    self->head->next=litem_319;
                                }
                                else {
                                    litem_320=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value326=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 241, "list_item$1sClassp"))));
                                    come_call_finalizer3(right_value326,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_320->prev=self->tail;
                                    litem_320->next=((void*)0);
                                    litem_320->item=item;
                                    self->tail->next=litem_320;
                                    self->tail=litem_320;
                                }
                            }
                            self->len++;
                            __result197__ = __result_obj__ = self;
                            return __result197__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__;
_Bool _if_conditional373;
struct sClass* result_322;
struct sClass* __result199__;
_Bool _if_conditional374;
struct sClass* __result200__;
struct sClass* result_323;
struct sClass* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_322, 0, sizeof(struct sClass*));
memset(&result_323, 0, sizeof(struct sClass*));
                    if(_if_conditional373=self==((void*)0),                    _if_conditional373) {
                        memset(&result_322,0,sizeof(struct sClass*));
                        __result199__ = __result_obj__ = result_322;
                        return __result199__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result200__ = __result_obj__ = self->it->item;
                        return __result200__;
                    }
                    memset(&result_323,0,sizeof(struct sClass*));
                    __result201__ = __result_obj__ = result_323;
                    return __result201__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
void* __result_obj__;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result202__ = self==((void*)0)||self->it==((void*)0);
                    return __result202__;
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__;
_Bool _if_conditional375;
struct sClass* result_325;
struct sClass* __result203__;
_Bool _if_conditional376;
struct sClass* __result204__;
struct sClass* result_326;
struct sClass* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_325, 0, sizeof(struct sClass*));
memset(&result_326, 0, sizeof(struct sClass*));
                    if(_if_conditional375=self==((void*)0)||self->it==((void*)0),                    _if_conditional375) {
                        memset(&result_325,0,sizeof(struct sClass*));
                        __result203__ = __result_obj__ = result_325;
                        return __result203__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result204__ = __result_obj__ = self->it->item;
                        return __result204__;
                    }
                    memset(&result_326,0,sizeof(struct sClass*));
                    __result205__ = __result_obj__ = result_326;
                    return __result205__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_341;
_Bool _if_conditional381;
_Bool _if_conditional382;
int i_342;
_Bool _if_conditional383;
_Bool _if_conditional384;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_341, 0, sizeof(int));
memset(&i_342, 0, sizeof(int));
                            for(                            i_341=0;                            i_341<self->size;                            i_341++                            ){
                                if(_if_conditional381=self->item_existance[i_341],                                _if_conditional381) {
                                    if(_if_conditional382=1,                                    _if_conditional382) {
                                        self->items[i_341] = come_decrement_ref_count2(self->items[i_341], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                            come_free((char*)self->items);
                            for(                            i_342=0;                            i_342<self->size;                            i_342++                            ){
                                if(_if_conditional383=self->item_existance[i_342],                                _if_conditional383) {
                                    if(_if_conditional384=1,                                    _if_conditional384) {
                                        self->keys[i_342] = come_decrement_ref_count2(self->keys[i_342], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                            come_free((char*)self->keys);
                            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_343;
_Bool _while_condtional47;
struct list_item$1charp* prev_it_344;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_343, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_344, 0, sizeof(struct list_item$1charp*));
                                it_343=self->head;
                                while(_while_condtional47=it_343!=((void*)0),                                _while_condtional47) {
                                    prev_it_344=it_343;
                                    it_343=it_343->next;
                                    come_call_finalizer3(prev_it_344,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional401;
void* right_value345;
struct list_item$1sNodeph* litem_363;
struct sNode* __dec_obj97;
_Bool _if_conditional402;
void* right_value346;
struct list_item$1sNodeph* litem_364;
struct sNode* __dec_obj98;
void* right_value347;
struct list_item$1sNodeph* litem_365;
struct sNode* __dec_obj99;
struct list$1sNodeph* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
memset(&litem_363, 0, sizeof(struct list_item$1sNodeph*));
right_value346 = (void*)0;
memset(&litem_364, 0, sizeof(struct list_item$1sNodeph*));
right_value347 = (void*)0;
memset(&litem_365, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional401=self->len==0,                        _if_conditional401) {
                            litem_363=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 221, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value345,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_363->prev=((void*)0);
                            litem_363->next=((void*)0);
                            __dec_obj97=litem_363->item;
                            litem_363->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_363;
                            self->head=litem_363;
                        }
                        else {
                            if(_if_conditional402=self->len==1,                            _if_conditional402) {
                                litem_364=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 231, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value346,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_364->prev=self->head;
                                litem_364->next=((void*)0);
                                __dec_obj98=litem_364->item;
                                litem_364->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_364;
                                self->head->next=litem_364;
                            }
                            else {
                                litem_365=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 241, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value347,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_365->prev=self->tail;
                                litem_365->next=((void*)0);
                                __dec_obj99=litem_365->item;
                                litem_365->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_365;
                                self->tail=litem_365;
                            }
                        }
                        self->len++;
                        __result206__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result206__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__;
struct sClassModule* default_value_376;
unsigned int hash_377;
unsigned int it_378;
_Bool _while_condtional51;
_Bool _if_conditional410;
_Bool _if_conditional411;
struct sClassModule* __result207__;
_Bool _if_conditional416;
_Bool _if_conditional417;
struct sClassModule* __result208__;
struct sClassModule* __result209__;
struct sClassModule* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_376, 0, sizeof(struct sClassModule*));
memset(&hash_377, 0, sizeof(unsigned int));
memset(&it_378, 0, sizeof(unsigned int));
                                memset(&default_value_376,0,sizeof(struct sClassModule*));
                                hash_377=string_get_hash_key(((char*)key))%self->size;
                                it_378=hash_377;
                                while(_while_condtional51=(_Bool)1,                                _while_condtional51) {
                                    if(_if_conditional410=self->item_existance[it_378],                                    _if_conditional410) {
                                        if(_if_conditional411=string_equals(self->keys[it_378],key),                                        _if_conditional411) {
                                            __result207__ = __result_obj__ = self->items[it_378];
                                            come_call_finalizer3(default_value_376,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result207__;
                                        }
                                        it_378++;
                                        if(_if_conditional416=it_378>=self->size,                                        _if_conditional416) {
                                            it_378=0;
                                        }
                                        else {
                                            if(_if_conditional417=it_378==hash_377,                                            _if_conditional417) {
                                                __result208__ = __result_obj__ = default_value_376;
                                                come_call_finalizer3(default_value_376,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result208__;
                                            }
                                        }
                                    }
                                    else {
                                        __result209__ = __result_obj__ = default_value_376;
                                        come_call_finalizer3(default_value_376,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result209__;
                                    }
                                }
                                __result210__ = __result_obj__ = default_value_376;
                                come_call_finalizer3(default_value_376,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                                return __result210__;
                                come_call_finalizer3(default_value_376,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional412=self!=((void*)0)&&self->mName!=((void*)0),                                                _if_conditional412) {
                                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional413=self!=((void*)0)&&self->mText!=((void*)0),                                                _if_conditional413) {
                                                    self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional414=self!=((void*)0)&&self->mParams!=((void*)0),                                                _if_conditional414) {
                                                    come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional415=self!=((void*)0)&&self->mSName!=((void*)0),                                                _if_conditional415) {
                                                    self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional419;
int __result212__;
int __result213__;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional419=self==((void*)0),                                _if_conditional419) {
                                    __result212__ = 0;
                                    return __result212__;
                                }
                                __result213__ = self->len;
                                return __result213__;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__;
void* right_value362;
void* right_value363;
void* right_value364;
int i_380;
void* right_value365;
void* right_value366;
struct list$1charp* __dec_obj101;
struct map$2charphcharph* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&i_380, 0, sizeof(int));
right_value365 = (void*)0;
right_value366 = (void*)0;
                                self->keys=(char**)come_increment_ref_count(((char**)(right_value362=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1066, "char*%"))));
                                right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                self->items=(char**)come_increment_ref_count(((char**)(right_value363=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1067, "char*%"))));
                                right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value364=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1068, "bool"))));
                                right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_380=0;                                i_380<128;                                i_380++                                ){
                                    self->item_existance[i_380]=(_Bool)0;
                                }
                                self->size=128;
                                self->len=0;
                                __dec_obj101=self->key_list;
                                self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value366=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value365=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1078, "list$1charp"))))))));
                                come_call_finalizer3(__dec_obj101,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value365,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value366,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                self->it=0;
                                __result215__ = __result_obj__ = self;
                                come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
                                return __result215__;
                                come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
                                    self->head=((void*)0);
                                    self->tail=((void*)0);
                                    self->len=0;
                                    __result214__ = __result_obj__ = self;
                                    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result214__;
                                    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_381;
_Bool _if_conditional421;
_Bool _if_conditional422;
int i_382;
_Bool _if_conditional423;
_Bool _if_conditional424;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_381, 0, sizeof(int));
memset(&i_382, 0, sizeof(int));
                                    for(                                    i_381=0;                                    i_381<self->size;                                    i_381++                                    ){
                                        if(_if_conditional421=self->item_existance[i_381],                                        _if_conditional421) {
                                            if(_if_conditional422=1,                                            _if_conditional422) {
                                                self->items[i_381] = come_decrement_ref_count2(self->items[i_381], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                        }
                                    }
                                    come_free((char*)self->items);
                                    for(                                    i_382=0;                                    i_382<self->size;                                    i_382++                                    ){
                                        if(_if_conditional423=self->item_existance[i_382],                                        _if_conditional423) {
                                            if(_if_conditional424=1,                                            _if_conditional424) {
                                                self->keys[i_382] = come_decrement_ref_count2(self->keys[i_382], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                        }
                                    }
                                    come_free((char*)self->keys);
                                    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional425;
char* result_385;
char* __result216__;
_Bool _if_conditional426;
char* __result217__;
char* result_386;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_385, 0, sizeof(char*));
memset(&result_386, 0, sizeof(char*));
                                if(_if_conditional425=self==((void*)0),                                _if_conditional425) {
                                    memset(&result_385,0,sizeof(char*));
                                    __result216__ = __result_obj__ = result_385;
                                    return __result216__;
                                }
                                self->it=self->head;
                                if(self->it) {
                                    __result217__ = __result_obj__ = self->it->item;
                                    return __result217__;
                                }
                                memset(&result_386,0,sizeof(char*));
                                __result218__ = __result_obj__ = result_386;
                                return __result218__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result219__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result219__ = self==((void*)0)||self->it==((void*)0);
                                return __result219__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional427;
char* result_388;
char* __result220__;
_Bool _if_conditional428;
char* __result221__;
char* result_389;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_388, 0, sizeof(char*));
memset(&result_389, 0, sizeof(char*));
                                if(_if_conditional427=self==((void*)0)||self->it==((void*)0),                                _if_conditional427) {
                                    memset(&result_388,0,sizeof(char*));
                                    __result220__ = __result_obj__ = result_388;
                                    return __result220__;
                                }
                                self->it=self->it->next;
                                if(self->it) {
                                    __result221__ = __result_obj__ = self->it->item;
                                    return __result221__;
                                }
                                memset(&result_389,0,sizeof(char*));
                                __result222__ = __result_obj__ = result_389;
                                return __result222__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional429;
struct list_item$1charph* it_390;
int i_391;
_Bool _while_condtional52;
_Bool _if_conditional430;
char* __result223__;
char* default_value_392;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_390, 0, sizeof(struct list_item$1charph*));
memset(&i_391, 0, sizeof(int));
memset(&default_value_392, 0, sizeof(char*));
                                    if(_if_conditional429=position<0,                                    _if_conditional429) {
                                        position+=self->len;
                                    }
                                    it_390=self->head;
                                    i_391=0;
                                    while(_while_condtional52=it_390!=((void*)0),                                    _while_condtional52) {
                                        if(_if_conditional430=position==i_391,                                        _if_conditional430) {
                                            __result223__ = __result_obj__ = it_390->item;
                                            return __result223__;
                                        }
                                        it_390=it_390->next;
                                        i_391++;
                                    }
                                    memset(&default_value_392,0,sizeof(char*));
                                    __result224__ = __result_obj__ = default_value_392;
                                    default_value_392 = come_decrement_ref_count2(default_value_392, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result224__;
                                    default_value_392 = come_decrement_ref_count2(default_value_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__;
char* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
                                    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
                                    __result237__ = __result_obj__ = item;
                                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result237__;
                                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__;
_Bool _if_conditional431;
unsigned int hash_410;
unsigned int it_411;
_Bool _while_condtional55;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
_Bool same_key_exist_412;
char* it2_413;
_Bool _if_conditional451;
_Bool _if_conditional452;
struct map$2charphcharph* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_410, 0, sizeof(unsigned int));
memset(&it_411, 0, sizeof(unsigned int));
memset(&same_key_exist_412, 0, sizeof(_Bool));
memset(&it2_413, 0, sizeof(char*));
                                        if(_if_conditional431=self->len*10>=self->size,                                        _if_conditional431) {
                                            map$2charphcharph_rehash(self);
                                        }
                                        hash_410=string_get_hash_key(key)%self->size;
                                        it_411=hash_410;
                                        while(_while_condtional55=(_Bool)1,                                        _while_condtional55) {
                                            if(_if_conditional443=self->item_existance[it_411],                                            _if_conditional443) {
                                                if(_if_conditional444=string_equals(self->keys[it_411],key),                                                _if_conditional444) {
                                                    if(_if_conditional445=1,                                                    _if_conditional445) {
                                                        list$1charp_remove(self->key_list,self->keys[it_411]);
                                                        self->keys[it_411] = come_decrement_ref_count2(self->keys[it_411], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        self->keys[it_411]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        list$1charp_remove(self->key_list,self->keys[it_411]);
                                                        self->keys[it_411]=key;
                                                    }
                                                    if(_if_conditional446=1,                                                    _if_conditional446) {
                                                        self->items[it_411] = come_decrement_ref_count2(self->items[it_411], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        self->items[it_411]=(char*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        self->items[it_411]=item;
                                                    }
                                                    break;
                                                }
                                                it_411++;
                                                if(_if_conditional447=it_411>=self->size,                                                _if_conditional447) {
                                                    it_411=0;
                                                }
                                                else {
                                                    if(_if_conditional448=it_411==hash_410,                                                    _if_conditional448) {
                                                        printf("unexpected error in map.insert\n");
                                                        stackframe();
                                                        exit(2);
                                                    }
                                                }
                                            }
                                            else {
                                                self->item_existance[it_411]=(_Bool)1;
                                                if(_if_conditional449=1,                                                _if_conditional449) {
                                                    self->keys[it_411]=(char*)come_increment_ref_count(key);
                                                }
                                                else {
                                                    self->keys[it_411]=key;
                                                }
                                                if(_if_conditional450=1,                                                _if_conditional450) {
                                                    self->items[it_411]=(char*)come_increment_ref_count(item);
                                                }
                                                else {
                                                    self->items[it_411]=item;
                                                }
                                                self->len++;
                                                break;
                                            }
                                        }
                                        same_key_exist_412=(_Bool)0;
                                        for(                                        it2_413=list$1charp_begin(self->key_list);                                        !list$1charp_end(self->key_list);                                        it2_413=list$1charp_next(self->key_list)                                        ){
                                            if(_if_conditional451=string_equals(it2_413,key),                                            _if_conditional451) {
                                                same_key_exist_412=(_Bool)1;
                                            }
                                        }
                                        if(_if_conditional452=!same_key_exist_412,                                        _if_conditional452) {
                                            list$1charp_push_back(self->key_list,key);
                                        }
                                        __result236__ = __result_obj__ = self;
                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        return __result236__;
                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
void* __result_obj__;
int size_393;
void* right_value368;
char** keys_394;
void* right_value369;
char** items_395;
void* right_value370;
_Bool* item_existance_396;
int len_397;
char* it_400;
char* default_value_403;
char* it2_406;
unsigned int hash_407;
int n_408;
_Bool _while_condtional54;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
char* default_value_409;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_393, 0, sizeof(int));
right_value368 = (void*)0;
memset(&keys_394, 0, sizeof(char**));
right_value369 = (void*)0;
memset(&items_395, 0, sizeof(char**));
right_value370 = (void*)0;
memset(&item_existance_396, 0, sizeof(_Bool*));
memset(&len_397, 0, sizeof(int));
memset(&it_400, 0, sizeof(char*));
memset(&default_value_403, 0, sizeof(char*));
memset(&it2_406, 0, sizeof(char*));
memset(&hash_407, 0, sizeof(unsigned int));
memset(&n_408, 0, sizeof(int));
memset(&default_value_409, 0, sizeof(char*));
                                                size_393=self->size*10;
                                                keys_394=(char**)come_increment_ref_count(((char**)(right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(size_393)), "./neo-c.h", 1317, "char*%"))));
                                                right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                items_395=(char**)come_increment_ref_count(((char**)(right_value369=(char**)come_calloc(1, sizeof(char*)*(1*(size_393)), "./neo-c.h", 1318, "char*%"))));
                                                right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                item_existance_396=(_Bool*)come_increment_ref_count(((_Bool*)(right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_393)), "./neo-c.h", 1319, "bool"))));
                                                right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                len_397=0;
                                                for(                                                it_400=map$2charphcharph_begin(self);                                                !map$2charphcharph_end(self);                                                it_400=map$2charphcharph_next(self)                                                ){
                                                    memset(&default_value_403,0,sizeof(char*));
                                                    it2_406=map$2charphcharph_at(self,it_400,default_value_403);
                                                    hash_407=string_get_hash_key(it_400)%size_393;
                                                    n_408=hash_407;
                                                    while(_while_condtional54=(_Bool)1,                                                    _while_condtional54) {
                                                        if(_if_conditional440=item_existance_396[n_408],                                                        _if_conditional440) {
                                                            n_408++;
                                                            if(_if_conditional441=n_408>=size_393,                                                            _if_conditional441) {
                                                                n_408=0;
                                                            }
                                                            else {
                                                                if(_if_conditional442=n_408==hash_407,                                                                _if_conditional442) {
                                                                    printf("unexpected error in map.rehash(1)\n");
                                                                    stackframe();
                                                                    exit(2);
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            item_existance_396[n_408]=(_Bool)1;
                                                            keys_394[n_408]=it_400;
                                                            items_395[n_408]=map$2charphcharph_at(self,it_400,default_value_409);
                                                            len_397++;
                                                            break;
                                                        }
                                                    }
                                                }
                                                come_free((char*)self->items);
                                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_free((char*)self->keys);
                                                self->keys=keys_394;
                                                self->items=items_395;
                                                self->item_existance=item_existance_396;
                                                self->size=size_393;
                                                self->len=len_397;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__;
_Bool _if_conditional432;
char* result_398;
char* __result225__;
_Bool _if_conditional433;
char* __result226__;
char* result_399;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_398, 0, sizeof(char*));
memset(&result_399, 0, sizeof(char*));
                                                    if(_if_conditional432=self==((void*)0),                                                    _if_conditional432) {
                                                        memset(&result_398,0,sizeof(char*));
                                                        __result225__ = __result_obj__ = result_398;
                                                        return __result225__;
                                                    }
                                                    self->key_list->it=self->key_list->head;
                                                    if(self->key_list->it) {
                                                        __result226__ = __result_obj__ = self->key_list->it->item;
                                                        return __result226__;
                                                    }
                                                    memset(&result_399,0,sizeof(char*));
                                                    __result227__ = __result_obj__ = result_399;
                                                    return __result227__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
void* __result_obj__;
_Bool __result228__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    __result228__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                                    return __result228__;
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__;
_Bool _if_conditional434;
char* result_401;
char* __result229__;
_Bool _if_conditional435;
char* __result230__;
char* result_402;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_401, 0, sizeof(char*));
memset(&result_402, 0, sizeof(char*));
                                                    if(_if_conditional434=self==((void*)0)||self->key_list->it==((void*)0),                                                    _if_conditional434) {
                                                        memset(&result_401,0,sizeof(char*));
                                                        __result229__ = __result_obj__ = result_401;
                                                        return __result229__;
                                                    }
                                                    self->key_list->it=self->key_list->it->next;
                                                    if(self->key_list->it) {
                                                        __result230__ = __result_obj__ = self->key_list->it->item;
                                                        return __result230__;
                                                    }
                                                    memset(&result_402,0,sizeof(char*));
                                                    __result231__ = __result_obj__ = result_402;
                                                    return __result231__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__;
unsigned int hash_404;
unsigned int it_405;
_Bool _while_condtional53;
_Bool _if_conditional436;
_Bool _if_conditional437;
char* __result232__;
_Bool _if_conditional438;
_Bool _if_conditional439;
char* __result233__;
char* __result234__;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_404, 0, sizeof(unsigned int));
memset(&it_405, 0, sizeof(unsigned int));
                                                        hash_404=string_get_hash_key(((char*)key))%self->size;
                                                        it_405=hash_404;
                                                        while(_while_condtional53=(_Bool)1,                                                        _while_condtional53) {
                                                            if(_if_conditional436=self->item_existance[it_405],                                                            _if_conditional436) {
                                                                if(_if_conditional437=string_equals(self->keys[it_405],key),                                                                _if_conditional437) {
                                                                    __result232__ = __result_obj__ = self->items[it_405];
                                                                    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                    return __result232__;
                                                                }
                                                                it_405++;
                                                                if(_if_conditional438=it_405>=self->size,                                                                _if_conditional438) {
                                                                    it_405=0;
                                                                }
                                                                else {
                                                                    if(_if_conditional439=it_405==hash_404,                                                                    _if_conditional439) {
                                                                        __result233__ = __result_obj__ = default_value;
                                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        return __result233__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                __result234__ = __result_obj__ = default_value;
                                                                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                return __result234__;
                                                            }
                                                        }
                                                        __result235__ = __result_obj__ = default_value;
                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                        return __result235__;
                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sClassNode_finalize(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional457;
_Bool _if_conditional458;
_Bool _if_conditional459;
_Bool _if_conditional460;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional457=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional457) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional458=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional458) {
                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional459=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional459) {
                    come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional460=self!=((void*)0)&&self->mMethods!=((void*)0),                _if_conditional460) {
                    come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional461;
struct sClassNode* __result238__;
void* right_value381;
struct sClassNode* result_417;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value382;
char* __dec_obj105;
_Bool _if_conditional464;
void* right_value383;
char* __dec_obj106;
_Bool _if_conditional465;
void* right_value384;
struct sClass* __dec_obj107;
_Bool _if_conditional466;
void* right_value385;
struct list$1sNodeph* __dec_obj108;
_Bool _if_conditional467;
struct sClassNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_417, 0, sizeof(struct sClassNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
                if(_if_conditional461=self==(void*)0,                _if_conditional461) {
                    __result238__ = __result_obj__ = (void*)0;
                    return __result238__;
                }
                result_417=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value381=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"))));
                come_call_finalizer3(right_value381,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional462=self!=((void*)0),                _if_conditional462) {
                    result_417->sline=self->sline;
                }
                if(_if_conditional463=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional463) {
                    __dec_obj105=result_417->sname;
                    result_417->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional464=self!=((void*)0)&&self->mName!=((void*)0),                _if_conditional464) {
                    __dec_obj106=result_417->mName;
                    result_417->mName=(char*)come_increment_ref_count(((char*)(right_value383=string_clone(self->mName))));
                    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional465=self!=((void*)0)&&self->mClass!=((void*)0),                _if_conditional465) {
                    __dec_obj107=result_417->mClass;
                    result_417->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value384=sClass_clone(self->mClass))));
                    come_call_finalizer3(__dec_obj107,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value384,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional466=self!=((void*)0)&&self->mMethods!=((void*)0),                _if_conditional466) {
                    __dec_obj108=result_417->mMethods;
                    result_417->mMethods=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value385=list$1sNodephp_clone(self->mMethods))));
                    come_call_finalizer3(__dec_obj108,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value385,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional467=self!=((void*)0),                _if_conditional467) {
                    result_417->mOutput=self->mOutput;
                }
                __result239__ = __result_obj__ = result_417;
                come_call_finalizer3(result_417,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result239__;
                come_call_finalizer3(result_417,sClassNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_418;
char* p_419;
int sline_420;
_Bool _if_conditional468;
void* right_value388;
char* type_name_421;
_Bool _if_conditional469;
void* right_value389;
void* right_value390;
_Bool _if_conditional470;
void* right_value391;
_Bool _if_conditional471;
_Bool _if_conditional472;
void* right_value392;
char* type_name_422;
void* right_value393;
struct sNode* __result242__;
void* right_value394;
struct sNode* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_418, 0, sizeof(_Bool));
memset(&p_419, 0, sizeof(char*));
memset(&sline_420, 0, sizeof(int));
right_value388 = (void*)0;
memset(&type_name_421, 0, sizeof(char*));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&type_name_422, 0, sizeof(char*));
right_value393 = (void*)0;
right_value394 = (void*)0;
    define_struct_418=(_Bool)0;
    {
        p_419=info->p;
        sline_420=info->sline;
        if(_if_conditional468=charp_operator_equals(buf,"struct"),        _if_conditional468) {
            type_name_421=(char*)come_increment_ref_count(((char*)(right_value388=parse_word(info))));
            right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional469=parsecmp("extends",info),            _if_conditional469) {
                ((char*)(right_value389=parse_word(info)));
                right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                ((char*)(right_value390=parse_word(info)));
                right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional470=*info->p==123,            _if_conditional470) {
                ((char*)(right_value391=skip_block(info)));
                right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional471=*info->p==59,                _if_conditional471) {
                    define_struct_418=(_Bool)1;
                }
            }
            type_name_421 = come_decrement_ref_count2(type_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_419;
        info->sline=sline_420;
    }
    if(define_struct_418) {
        type_name_422=(char*)come_increment_ref_count(((char*)(right_value392=parse_word(info))));
        right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result242__ = __result_obj__ = ((struct sNode*)(right_value393=parse_struct((char*)come_increment_ref_count(type_name_422),info)));
        type_name_422 = come_decrement_ref_count2(type_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result242__;
        type_name_422 = come_decrement_ref_count2(type_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result243__ = __result_obj__ = ((struct sNode*)(right_value394=string_node_v13(buf,head,head_sline,info)));
    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result243__;
}

