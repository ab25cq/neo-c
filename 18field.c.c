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
struct sStoreFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};
struct sNullCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};
struct sNullableNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};
struct sRangeCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
};
struct sLoadFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    char* mName;
};
struct sStoreArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};
struct sLoadArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    _Bool mBreakGuard;
};
struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated(struct sStoreFieldNode* self);

char* sStoreFieldNode_kind(struct sStoreFieldNode* self);

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated(struct sNullCheckNode* self);

char* sNullCheckNode_kind(struct sNullCheckNode* self);

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);

_Bool sNullableNode_terminated(struct sNullableNode* self);

char* sNullableNode_kind(struct sNullableNode* self);

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated(struct sRangeCheckNode* self);

char* sRangeCheckNode_kind(struct sRangeCheckNode* self);

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated(struct sLoadFieldNode* self);

char* sLoadFieldNode_kind(struct sLoadFieldNode* self);

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated(struct sStoreArrayNode* self);

char* sStoreArrayNode_kind(struct sStoreArrayNode* self);

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);

_Bool sLoadArrayNode_terminated(struct sLoadArrayNode* self);

char* sLoadArrayNode_kind(struct sLoadArrayNode* self);

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated(struct sLoadRangeArrayNode* self);

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_77;
_Bool _if_conditional110;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
char* fun_name2_80;
struct sFun* operator_fun_81;
_Bool _if_conditional111;
_Bool _if_conditional113;
void* right_value115;
char* none_generics_name_82;
void* right_value116;
struct sType* obj_type_83;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_84;
struct sGenericsFun* generics_fun_87;
_Bool _if_conditional128;
void* right_value119;
_Bool _if_conditional129;
_Bool __result76__;
void* right_value120;
char* __dec_obj37;
int i_91;
void* right_value121;
char* new_fun_name_92;
_Bool _if_conditional149;
void* right_value122;
char* __dec_obj38;
_Bool _if_conditional150;
_Bool result_93;
_Bool _if_conditional151;
void* right_value123;
struct CVALUE* come_value_94;
char* left_value2_95;
void* right_value124;
void* right_value125;
_Bool _if_conditional156;
void* right_value126;
char* __dec_obj39;
void* right_value127;
char* __dec_obj40;
char* middle_value2_99;
void* right_value128;
void* right_value129;
_Bool _if_conditional157;
void* right_value130;
char* __dec_obj41;
void* right_value131;
char* __dec_obj42;
char* right_value2_100;
void* right_value132;
void* right_value133;
_Bool _if_conditional158;
void* right_value134;
char* __dec_obj43;
void* right_value135;
char* __dec_obj44;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
char* __dec_obj45;
void* right_value141;
struct sType* result_type1_101;
void* right_value142;
struct sType* result_type2_102;
void* right_value143;
struct sType* __dec_obj46;
_Bool _if_conditional159;
void* right_value144;
char* __dec_obj47;
_Bool _if_conditional160;
void* right_value145;
void* right_value146;
char* __dec_obj48;
void* right_value147;
char* __dec_obj49;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&generics_type_77, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
memset(&class_name_79, 0, sizeof(char*));
memset(&fun_name2_80, 0, sizeof(char*));
memset(&operator_fun_81, 0, sizeof(struct sFun*));
right_value115 = (void*)0;
memset(&none_generics_name_82, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&obj_type_83, 0, sizeof(struct sType*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&fun_name3_84, 0, sizeof(char*));
memset(&generics_fun_87, 0, sizeof(struct sGenericsFun*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&i_91, 0, sizeof(int));
right_value121 = (void*)0;
memset(&new_fun_name_92, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&result_93, 0, sizeof(_Bool));
right_value123 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
memset(&left_value2_95, 0, sizeof(char*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&middle_value2_99, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&right_value2_100, 0, sizeof(char*));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&result_type1_101, 0, sizeof(struct sType*));
right_value142 = (void*)0;
memset(&result_type2_102, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    # 5 "18field.c"
    generics_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 11 "18field.c"
    # 7 "18field.c"
    if(generics_type_77->mNoSolvedGenericsType->v1) {
        # 8 "18field.c"
        __dec_obj35=generics_type_77;
        generics_type_77=(struct sType*)come_increment_ref_count(generics_type_77->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 11 "18field.c"
    klass_78=type->mClass;
    # 12 "18field.c"
    class_name_79=klass_78->mName;
    # 14 "18field.c"
    # 15 "18field.c"
    operator_fun_81=((void*)0);
    # 21 "18field.c"
    # 17 "18field.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 18 "18field.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 58 "18field.c"
    # 21 "18field.c"
    if(_if_conditional113=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional113) {
        # 22 "18field.c"
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 24 "18field.c"
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 26 "18field.c"
        __dec_obj36=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 27 "18field.c"
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 29 "18field.c"
        generics_fun_87=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        # 37 "18field.c"
        # 31 "18field.c"
        if(generics_fun_87) {
            # 35 "18field.c"
            # 32 "18field.c"
            if(_if_conditional129=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_80)))),generics_fun_87,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional129) {
                # 33 "18field.c"
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
        }
        # 37 "18field.c"
        operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 40 "18field.c"
        __dec_obj37=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 42 "18field.c"
        # 53 "18field.c"
        for(        i_91=128-1;        i_91>=1;        i_91--        ){
            # 44 "18field.c"
            new_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%s_v%d",fun_name2_80,i_91))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 45 "18field.c"
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_92);
            # 51 "18field.c"
            # 47 "18field.c"
            if(operator_fun_81) {
                # 48 "18field.c"
                __dec_obj38=fun_name2_80;
                fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(new_fun_name_92))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 49 "18field.c"
                new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 56 "18field.c"
        # 53 "18field.c"
        if(_if_conditional150=operator_fun_81==((void*)0),        _if_conditional150) {
            # 54 "18field.c"
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        }
    }
    # 58 "18field.c"
    result_93=(_Bool)0;
    # 116 "18field.c"
    # 60 "18field.c"
    if(operator_fun_81) {
        # 61 "18field.c"
        come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer3(right_value123,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 62 "18field.c"
        # 63 "18field.c"
        check_assign_type(((char*)(right_value125=xsprintf("\%s is assigned to",((char*)(right_value124=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 71 "18field.c"
        # 64 "18field.c"
        if(_if_conditional156=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap,        _if_conditional156) {
            # 65 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info);
            # 66 "18field.c"
            __dec_obj39=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 69 "18field.c"
            __dec_obj40=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 71 "18field.c"
        # 72 "18field.c"
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 80 "18field.c"
        # 73 "18field.c"
        if(_if_conditional157=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap,        _if_conditional157) {
            # 74 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info);
            # 75 "18field.c"
            __dec_obj41=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",middle_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 78 "18field.c"
            __dec_obj42=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(middle_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 80 "18field.c"
        # 81 "18field.c"
        check_assign_type(((char*)(right_value133=xsprintf("\%s is assigned to",((char*)(right_value132=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 90 "18field.c"
        # 82 "18field.c"
        if(_if_conditional158=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap,        _if_conditional158) {
            # 83 "18field.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info);
            # 84 "18field.c"
            __dec_obj43=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s",right_value->c_value))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 87 "18field.c"
            __dec_obj44=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value135=string_clone(right_value->c_value))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 90 "18field.c"
        __dec_obj45=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value136=string_to_string(fun_name2_80))),((char*)(right_value137=string_to_string(left_value2_95))),((char*)(right_value138=string_to_string(middle_value2_99))),((char*)(right_value139=string_to_string(right_value2_100)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 92 "18field.c"
        result_type1_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(operator_fun_81->mResultType))));
        come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 94 "18field.c"
        result_type2_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=solve_generics(result_type1_101,generics_type_77,info))));
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 96 "18field.c"
        __dec_obj46=come_value_94->type;
        come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(result_type2_102))));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 97 "18field.c"
        come_value_94->var=((void*)0);
        # 103 "18field.c"
        # 99 "18field.c"
        if(result_type2_102->mHeap) {
            # 100 "18field.c"
            __dec_obj47=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value144=append_object_to_right_values(come_value_94->c_value,(struct sType*)come_increment_ref_count(result_type2_102),info))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 107 "18field.c"
        # 103 "18field.c"
        if(_if_conditional160=result_type2_102->mGuardValue&&result_type2_102->mPointerNum>0,        _if_conditional160) {
            # 104 "18field.c"
            __dec_obj48=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value145=make_type_name_string(result_type2_102,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_94->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 107 "18field.c"
        __dec_obj49=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value147=append_stackframe(come_value_94->c_value,come_value_94->type,info))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 109 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_94->c_value);
        # 111 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
        # 113 "18field.c"
        result_93=(_Bool)1;
        come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_95 = come_decrement_ref_count2(left_value2_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_99 = come_decrement_ref_count2(middle_value2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_100 = come_decrement_ref_count2(right_value2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_101,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_102,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 116 "18field.c"
    __result84__ = result_93;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional19;
struct sType* __result52__;
void* right_value79;
struct sType* result_47;
_Bool _if_conditional37;
_Bool _if_conditional38;
void* right_value86;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional42;
void* right_value89;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional46;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
void* right_value91;
char* __dec_obj19;
_Bool _if_conditional48;
void* right_value92;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional49;
void* right_value100;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional62;
_Bool _if_conditional63;
void* right_value101;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional64;
void* right_value108;
struct list$1charph* __dec_obj29;
_Bool _if_conditional68;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional69;
_Bool _if_conditional70;
void* right_value110;
struct sNode* __dec_obj31;
_Bool _if_conditional71;
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
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
void* right_value112;
char* __dec_obj33;
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
void* right_value113;
char* __dec_obj34;
_Bool _if_conditional109;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            # 2 "sType_clone"
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        # 3 "sType_clone"
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value79,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            # 4 "sType_clone"
            result_47->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional38=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional38) {
            # 5 "sType_clone"
            __dec_obj15=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            # 6 "sType_clone"
            __dec_obj17=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            # 7 "sType_clone"
            __dec_obj18=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional47=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional47) {
            # 8 "sType_clone"
            __dec_obj19=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional48) {
            # 9 "sType_clone"
            __dec_obj20=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional49) {
            # 10 "sType_clone"
            __dec_obj24=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 11 "sType_clone"
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional63=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional63) {
            # 12 "sType_clone"
            __dec_obj25=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional64) {
            # 13 "sType_clone"
            __dec_obj29=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional68) {
            # 14 "sType_clone"
            __dec_obj30=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 15 "sType_clone"
            result_47->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional70=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional70) {
            # 16 "sType_clone"
            __dec_obj31=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 17 "sType_clone"
            result_47->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 18 "sType_clone"
            result_47->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 19 "sType_clone"
            result_47->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 20 "sType_clone"
            result_47->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 21 "sType_clone"
            result_47->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 22 "sType_clone"
            result_47->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 23 "sType_clone"
            result_47->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 24 "sType_clone"
            result_47->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 25 "sType_clone"
            result_47->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 26 "sType_clone"
            result_47->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 27 "sType_clone"
            result_47->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            # 28 "sType_clone"
            result_47->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 29 "sType_clone"
            result_47->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 30 "sType_clone"
            result_47->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            # 31 "sType_clone"
            result_47->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 32 "sType_clone"
            result_47->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 33 "sType_clone"
            result_47->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 34 "sType_clone"
            result_47->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 35 "sType_clone"
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 36 "sType_clone"
            result_47->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 37 "sType_clone"
            result_47->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 38 "sType_clone"
            result_47->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 39 "sType_clone"
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 40 "sType_clone"
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional95=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional95) {
            # 41 "sType_clone"
            __dec_obj32=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 42 "sType_clone"
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            # 43 "sType_clone"
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional98=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional98) {
            # 44 "sType_clone"
            __dec_obj33=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            # 45 "sType_clone"
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            # 46 "sType_clone"
            result_47->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 47 "sType_clone"
            result_47->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            # 48 "sType_clone"
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            # 49 "sType_clone"
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            # 50 "sType_clone"
            result_47->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            # 51 "sType_clone"
            result_47->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            # 52 "sType_clone"
            result_47->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            # 53 "sType_clone"
            result_47->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional108=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional108) {
            # 54 "sType_clone"
            __dec_obj34=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            # 55 "sType_clone"
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result69__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional20) {
                # 0 "sType_finalize"
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional22) {
                # 1 "sType_finalize"
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional24) {
                # 2 "sType_finalize"
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional25) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional26) {
                # 4 "sType_finalize"
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional27) {
                # 5 "sType_finalize"
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional29) {
                # 6 "sType_finalize"
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional30) {
                # 7 "sType_finalize"
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional32) {
                # 8 "sType_finalize"
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional33) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional34) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional35) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional36) {
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
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
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
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional21) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional23) {
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
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
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
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional28) {
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
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
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
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional31) {
                                # 0 "list_item$1charphp_finalize"
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sTypeph* __result53__;
void* right_value80;
void* right_value81;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value85;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    # 131 "./neo-c.h"
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                # 133 "./neo-c.h"
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_55=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    # 137 "./neo-c.h"
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_55=it_55->next;
                }
                # 142 "./neo-c.h"
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value82;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj12;
_Bool _if_conditional41;
void* right_value83;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj13;
void* right_value84;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value83 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            # 147 "./neo-c.h"
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_56->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_56->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj12=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_56;
                            # 154 "./neo-c.h"
                            self->head=litem_56;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                # 157 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_57->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj13=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_57;
                                # 164 "./neo-c.h"
                                self->head->next=litem_57;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_58->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_58->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj14=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_58;
                                # 174 "./neo-c.h"
                                self->tail=litem_58;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
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
                # 114 "./neo-c.h"
                it_59=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    # 116 "./neo-c.h"
                    prev_it_60=it_59;
                    # 117 "./neo-c.h"
                    it_59=it_59->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __result57__;
void* right_value87;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional45;
void* right_value88;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value88 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional43=self==(void*)0,                _if_conditional43) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value87,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj16=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result58__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional44) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result59__;
void* right_value93;
void* right_value94;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value99;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    # 131 "./neo-c.h"
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                # 133 "./neo-c.h"
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_63=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    # 137 "./neo-c.h"
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_63->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 139 "./neo-c.h"
                    it_63=it_63->next;
                }
                # 142 "./neo-c.h"
                __result64__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value95;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj21;
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj22;
void* right_value97;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            # 147 "./neo-c.h"
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_64->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_64->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj21=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            # 153 "./neo-c.h"
                            self->tail=litem_64;
                            # 154 "./neo-c.h"
                            self->head=litem_64;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                # 157 "./neo-c.h"
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_65->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_65->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj22=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 163 "./neo-c.h"
                                self->tail=litem_65;
                                # 164 "./neo-c.h"
                                self->head->next=litem_65;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_66->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_66->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj23=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                # 173 "./neo-c.h"
                                self->tail->next=litem_66;
                                # 174 "./neo-c.h"
                                self->tail=litem_66;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result61__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result61__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional53;
struct sNode* __result62__;
void* right_value98;
struct sNode* result_67;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            # 2 "sNode_clone"
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        # 3 "sNode_clone"
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional54=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional54) {
                            # 4 "sNode_clone"
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
                            # 5 "sNode_clone"
                            result_67->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            # 6 "sNode_clone"
                            result_67->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            # 7 "sNode_clone"
                            result_67->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            # 8 "sNode_clone"
                            result_67->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            # 9 "sNode_clone"
                            result_67->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            # 10 "sNode_clone"
                            result_67->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            # 11 "sNode_clone"
                            result_67->kind=self->kind;
                        }
                        # 12 "sNode_clone"
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
                # 114 "./neo-c.h"
                it_68=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    # 116 "./neo-c.h"
                    prev_it_69=it_68;
                    # 117 "./neo-c.h"
                    it_68=it_68->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1charph* __result65__;
void* right_value102;
void* right_value103;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value107;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    # 131 "./neo-c.h"
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                # 133 "./neo-c.h"
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_71=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    # 137 "./neo-c.h"
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_71->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_71=it_71->next;
                }
                # 142 "./neo-c.h"
                __result68__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional66;
void* right_value104;
struct list_item$1charph* litem_72;
char* __dec_obj26;
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_73;
char* __dec_obj27;
void* right_value106;
struct list_item$1charph* litem_74;
char* __dec_obj28;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value105 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            # 147 "./neo-c.h"
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_72->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_72->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj26=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_72;
                            # 154 "./neo-c.h"
                            self->head=litem_72;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional67=self->len==1,                            _if_conditional67) {
                                # 157 "./neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_73->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_73->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj27=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_73;
                                # 164 "./neo-c.h"
                                self->head->next=litem_73;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_74->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_74->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj28=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_74;
                                # 174 "./neo-c.h"
                                self->tail=litem_74;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
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
                # 114 "./neo-c.h"
                it_75=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    # 116 "./neo-c.h"
                    prev_it_76=it_75;
                    # 117 "./neo-c.h"
                    it_75=it_75->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional112;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional112=self==((void*)0),        _if_conditional112) {
            # 352 "./neo-c.h"
            __result70__ = 0;
            return __result70__;
        }
        # 354 "./neo-c.h"
        __result71__ = self->len;
        return __result71__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional16;
_Bool _if_conditional114;
_Bool _if_conditional115;
struct sGenericsFun* __result72__;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct sGenericsFun* __result73__;
struct sGenericsFun* __result74__;
struct sGenericsFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
            # 1201 "./neo-c.h"
            hash_85=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_86=hash_85;
            # 1226 "./neo-c.h"
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional114=self->item_existance[it_86],                _if_conditional114) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional115=string_equals(self->keys[it_86],key),                    _if_conditional115) {
                        # 1209 "./neo-c.h"
                        __result72__ = __result_obj__ = self->items[it_86];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    # 1212 "./neo-c.h"
                    it_86++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional126=it_86>=self->size,                    _if_conditional126) {
                        # 1215 "./neo-c.h"
                        it_86=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional127=it_86==hash_85,                        _if_conditional127) {
                            # 1218 "./neo-c.h"
                            __result73__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result73__;
                        }
                    }
                }
                else {
                    # 1222 "./neo-c.h"
                    __result74__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
            }
            # 1226 "./neo-c.h"
            __result75__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sGenericsFun_finalize"
                            # 0 "sGenericsFun_finalize"
                            if(_if_conditional116=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional116) {
                                # 0 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sGenericsFun_finalize"
                            # 1 "sGenericsFun_finalize"
                            if(_if_conditional117=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional117) {
                                # 1 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sGenericsFun_finalize"
                            # 2 "sGenericsFun_finalize"
                            if(_if_conditional118=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional118) {
                                # 2 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sGenericsFun_finalize"
                            # 3 "sGenericsFun_finalize"
                            if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional119) {
                                # 3 "sGenericsFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sGenericsFun_finalize"
                            # 4 "sGenericsFun_finalize"
                            if(_if_conditional120=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional120) {
                                # 4 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sGenericsFun_finalize"
                            # 5 "sGenericsFun_finalize"
                            if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional121) {
                                # 5 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sGenericsFun_finalize"
                            # 6 "sGenericsFun_finalize"
                            if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional122) {
                                # 6 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sGenericsFun_finalize"
                            # 7 "sGenericsFun_finalize"
                            if(_if_conditional123=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional123) {
                                # 7 "sGenericsFun_finalize"
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sGenericsFun_finalize"
                            # 8 "sGenericsFun_finalize"
                            if(_if_conditional124=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional124) {
                                # 8 "sGenericsFun_finalize"
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sGenericsFun_finalize"
                            # 9 "sGenericsFun_finalize"
                            if(_if_conditional125=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional125) {
                                # 9 "sGenericsFun_finalize"
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sFun* __result77__;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct sFun* __result78__;
struct sFun* __result79__;
struct sFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sFun*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            # 1519 "./neo-c.h"
            # 1520 "./neo-c.h"
            memset(&default_value_88,0,sizeof(struct sFun*));
            # 1522 "./neo-c.h"
            hash_89=string_get_hash_key(((char*)key))%self->size;
            # 1523 "./neo-c.h"
            it_90=hash_89;
            # 1547 "./neo-c.h"
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                # 1545 "./neo-c.h"
                # 1526 "./neo-c.h"
                if(_if_conditional130=self->item_existance[it_90],                _if_conditional130) {
                    # 1533 "./neo-c.h"
                    # 1528 "./neo-c.h"
                    if(_if_conditional131=string_equals(self->keys[it_90],key),                    _if_conditional131) {
                        # 1530 "./neo-c.h"
                        __result77__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        return __result77__;
                    }
                    # 1533 "./neo-c.h"
                    it_90++;
                    # 1541 "./neo-c.h"
                    # 1535 "./neo-c.h"
                    if(_if_conditional147=it_90>=self->size,                    _if_conditional147) {
                        # 1536 "./neo-c.h"
                        it_90=0;
                    }
                    else {
                        # 1541 "./neo-c.h"
                        # 1538 "./neo-c.h"
                        if(_if_conditional148=it_90==hash_89,                        _if_conditional148) {
                            # 1539 "./neo-c.h"
                            __result78__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result78__;
                        }
                    }
                }
                else {
                    # 1543 "./neo-c.h"
                    __result79__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
            }
            # 1547 "./neo-c.h"
            __result80__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result80__;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sFun_finalize"
                            # 0 "sFun_finalize"
                            if(_if_conditional132=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional132) {
                                # 0 "sFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sFun_finalize"
                            # 1 "sFun_finalize"
                            if(_if_conditional133=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional133) {
                                # 1 "sFun_finalize"
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sFun_finalize"
                            # 2 "sFun_finalize"
                            if(_if_conditional134=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional134) {
                                # 2 "sFun_finalize"
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sFun_finalize"
                            # 3 "sFun_finalize"
                            if(_if_conditional135=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional135) {
                                # 3 "sFun_finalize"
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sFun_finalize"
                            # 4 "sFun_finalize"
                            if(_if_conditional136=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional136) {
                                # 4 "sFun_finalize"
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sFun_finalize"
                            # 5 "sFun_finalize"
                            if(_if_conditional137=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional137) {
                                # 5 "sFun_finalize"
                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sFun_finalize"
                            # 6 "sFun_finalize"
                            if(_if_conditional138=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional138) {
                                # 6 "sFun_finalize"
                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sFun_finalize"
                            # 7 "sFun_finalize"
                            if(_if_conditional141=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional141) {
                                # 7 "sFun_finalize"
                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sFun_finalize"
                            # 8 "sFun_finalize"
                            if(_if_conditional142=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional142) {
                                # 8 "sFun_finalize"
                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sFun_finalize"
                            # 9 "sFun_finalize"
                            if(_if_conditional143=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional143) {
                                # 9 "sFun_finalize"
                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 11 "sFun_finalize"
                            # 10 "sFun_finalize"
                            if(_if_conditional144=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional144) {
                                # 10 "sFun_finalize"
                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 12 "sFun_finalize"
                            # 11 "sFun_finalize"
                            if(_if_conditional145=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional145) {
                                # 11 "sFun_finalize"
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 13 "sFun_finalize"
                            # 12 "sFun_finalize"
                            if(_if_conditional146=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional146) {
                                # 12 "sFun_finalize"
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional139;
_Bool _if_conditional140;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sBlock_finalize"
                                    # 0 "sBlock_finalize"
                                    if(_if_conditional139=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional139) {
                                        # 0 "sBlock_finalize"
                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sBlock_finalize"
                                    # 1 "sBlock_finalize"
                                    if(_if_conditional140=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional140) {
                                        # 1 "sBlock_finalize"
                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional152;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional152=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional152) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional153=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional153) {
                # 1 "CVALUE_finalize"
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional154;
struct list_item$1sTypeph* it_96;
int i_97;
_Bool _while_condtional18;
_Bool _if_conditional155;
struct sType* __result81__;
struct sType* default_value_98;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_97, 0, sizeof(int));
memset(&default_value_98, 0, sizeof(struct sType*));
            # 673 "./neo-c.h"
            # 669 "./neo-c.h"
            if(_if_conditional154=position<0,            _if_conditional154) {
                # 670 "./neo-c.h"
                position+=self->len;
            }
            # 673 "./neo-c.h"
            it_96=self->head;
            # 674 "./neo-c.h"
            i_97=0;
            # 681 "./neo-c.h"
            while(_while_condtional18=it_96!=((void*)0),            _while_condtional18) {
                # 679 "./neo-c.h"
                # 676 "./neo-c.h"
                if(_if_conditional155=position==i_97,                _if_conditional155) {
                    # 677 "./neo-c.h"
                    __result81__ = __result_obj__ = it_96->item;
                    return __result81__;
                }
                # 679 "./neo-c.h"
                it_96=it_96->next;
                # 680 "./neo-c.h"
                i_97++;
            }
            # 683 "./neo-c.h"
            # 684 "./neo-c.h"
            memset(&default_value_98,0,sizeof(struct sType*));
            # 685 "./neo-c.h"
            __result82__ = __result_obj__ = default_value_98;
            come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional161;
void* right_value148;
struct list_item$1CVALUEph* litem_103;
struct CVALUE* __dec_obj50;
_Bool _if_conditional163;
void* right_value149;
struct list_item$1CVALUEph* litem_104;
struct CVALUE* __dec_obj51;
void* right_value150;
struct list_item$1CVALUEph* litem_105;
struct CVALUE* __dec_obj52;
struct list$1CVALUEph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1CVALUEph*));
right_value149 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1CVALUEph*));
right_value150 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1CVALUEph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional161=self->len==0,            _if_conditional161) {
                # 217 "./neo-c.h"
                litem_103=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_103->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_103->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj50=litem_103->item;
                litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_103;
                # 224 "./neo-c.h"
                self->head=litem_103;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional163=self->len==1,                _if_conditional163) {
                    # 227 "./neo-c.h"
                    litem_104=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_104->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_104->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj51=litem_104->item;
                    litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_104;
                    # 234 "./neo-c.h"
                    self->head->next=litem_104;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_105=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_105->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_105->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj52=litem_105->item;
                    litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_105;
                    # 244 "./neo-c.h"
                    self->tail=litem_105;
                }
            }
            # 247 "./neo-c.h"
            self->len++;
            # 249 "./neo-c.h"
            __result83__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1CVALUEphp_finalize"
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(_if_conditional162=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional162) {
                        # 0 "list_item$1CVALUEphp_finalize"
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value151;
char* __dec_obj53;
void* right_value152;
struct sNode* __dec_obj54;
void* right_value153;
struct sNode* __dec_obj55;
void* right_value154;
char* __dec_obj56;
struct sStoreFieldNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    # 127 "18field.c"
    self->sline=info->sline;
    # 128 "18field.c"
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 130 "18field.c"
    __dec_obj54=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(left))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 131 "18field.c"
    __dec_obj55=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(right))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 132 "18field.c"
    __dec_obj56=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 135 "18field.c"
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStoreFieldNode_terminated(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    # 137 "18field.c"
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__;
void* right_value155;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    # 142 "18field.c"
    __result87__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sStoreFieldNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_106;
struct sNode* right_107;
void* right_value156;
char* name_108;
_Bool _if_conditional168;
_Bool __result88__;
void* right_value157;
struct CVALUE* left_value_109;
_Bool _if_conditional169;
void* right_value158;
void* right_value159;
char* __dec_obj57;
_Bool _if_conditional170;
_Bool __result89__;
void* right_value160;
struct CVALUE* right_value_110;
struct sType* right_type_111;
struct sType* left_type_112;
void* right_value161;
struct sType* left_type2_113;
struct sClass* klass_114;
struct sType* field_type_120;
int index_121;
char* child_field_name_122;
_Bool _if_conditional182;
_Bool __result94__;
struct list$1tuple2$2charphsTypephph* o2_saved_123;
struct tuple2$2charphsTypeph* field_126;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_129;
struct sType* field_type2_130;
_Bool _if_conditional187;
void* right_value162;
struct sType* __dec_obj58;
_Bool _if_conditional189;
struct list$1tuple2$2charphsTypephph* o2_saved_131;
struct tuple2$2charphsTypeph* field_132;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_133;
struct sType* field_type2_134;
struct sClass* klass2_135;
struct list$1tuple2$2charphsTypephph* o2_saved_136;
struct tuple2$2charphsTypeph* field2_137;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_138;
struct sType* field_type3_139;
_Bool _if_conditional190;
void* right_value163;
char* __dec_obj59;
void* right_value164;
struct sType* __dec_obj60;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value165;
struct sType* __dec_obj61;
_Bool _if_conditional193;
_Bool __result104__;
void* right_value166;
struct CVALUE* come_value_140;
void* right_value167;
void* right_value168;
void* right_value169;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool __result105__;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value170;
char* c_value_141;
void* right_value171;
char* __dec_obj62;
void* right_value172;
char* c_value_142;
void* right_value173;
char* __dec_obj63;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value174;
char* c_value_143;
void* right_value175;
char* __dec_obj64;
void* right_value176;
char* c_value_144;
void* right_value177;
char* __dec_obj65;
void* right_value178;
char* __dec_obj66;
_Bool __result106__;
int right_value_id_145;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value179;
char* c_value_146;
void* right_value180;
char* __dec_obj67;
void* right_value181;
char* c_value_147;
void* right_value182;
char* __dec_obj68;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value183;
char* c_value_148;
void* right_value184;
char* __dec_obj69;
void* right_value185;
char* c_value_149;
void* right_value186;
char* __dec_obj70;
_Bool __result107__;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value187;
char* __dec_obj71;
void* right_value188;
char* __dec_obj72;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value189;
char* __dec_obj73;
void* right_value190;
char* __dec_obj74;
_Bool __result108__;
void* right_value191;
struct sType* __dec_obj75;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_106, 0, sizeof(struct sNode*));
memset(&right_107, 0, sizeof(struct sNode*));
right_value156 = (void*)0;
memset(&name_108, 0, sizeof(char*));
right_value157 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&right_value_110, 0, sizeof(struct CVALUE*));
memset(&right_type_111, 0, sizeof(struct sType*));
memset(&left_type_112, 0, sizeof(struct sType*));
right_value161 = (void*)0;
memset(&left_type2_113, 0, sizeof(struct sType*));
memset(&klass_114, 0, sizeof(struct sClass*));
memset(&field_type_120, 0, sizeof(struct sType*));
memset(&index_121, 0, sizeof(int));
memset(&child_field_name_122, 0, sizeof(char*));
memset(&o2_saved_123, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_126, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_129, 0, sizeof(char*));
memset(&field_type2_130, 0, sizeof(struct sType*));
memset(&field_name_129, 0, sizeof(char*));
memset(&field_type2_130, 0, sizeof(struct sType*));
right_value162 = (void*)0;
memset(&o2_saved_131, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_132, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
memset(&field_name_133, 0, sizeof(char*));
memset(&field_type2_134, 0, sizeof(struct sType*));
memset(&klass2_135, 0, sizeof(struct sClass*));
memset(&o2_saved_136, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_137, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_138, 0, sizeof(char*));
memset(&field_type3_139, 0, sizeof(struct sType*));
memset(&field_name2_138, 0, sizeof(char*));
memset(&field_type3_139, 0, sizeof(struct sType*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&come_value_140, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&c_value_141, 0, sizeof(char*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&c_value_142, 0, sizeof(char*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&c_value_143, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&c_value_144, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&right_value_id_145, 0, sizeof(int));
right_value179 = (void*)0;
memset(&c_value_146, 0, sizeof(char*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&c_value_147, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&c_value_148, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&c_value_149, 0, sizeof(char*));
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
    # 147 "18field.c"
    left_106=self->mLeft;
    # 148 "18field.c"
    right_107=self->mRight;
    # 149 "18field.c"
    name_108=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(self->mName))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 155 "18field.c"
    # 151 "18field.c"
    if(_if_conditional168=!node_compile(left_106,info),    _if_conditional168) {
        # 152 "18field.c"
        __result88__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    # 155 "18field.c"
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value157,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 156 "18field.c"
    dec_stack_ptr(1,info);
    # 162 "18field.c"
    # 158 "18field.c"
    if(_if_conditional169=gComeDebug&&left_value_109->type->mPointerNum>0,    _if_conditional169) {
        # 159 "18field.c"
        __dec_obj57=left_value_109->c_value;
        left_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value158=make_type_name_string(left_value_109->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_109->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 166 "18field.c"
    # 162 "18field.c"
    if(_if_conditional170=!node_compile(right_107,info),    _if_conditional170) {
        # 163 "18field.c"
        __result89__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result89__;
    }
    # 166 "18field.c"
    right_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 167 "18field.c"
    right_type_111=right_value_110->type;
    # 169 "18field.c"
    dec_stack_ptr(1,info);
    # 171 "18field.c"
    left_type_112=left_value_109->type;
    # 173 "18field.c"
    left_type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=solve_generics(left_type_112,left_type_112,info))));
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 175 "18field.c"
    klass_114=left_type2_113->mClass;
    # 176 "18field.c"
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    # 178 "18field.c"
    field_type_120=((void*)0);
    # 179 "18field.c"
    index_121=0;
    # 180 "18field.c"
    child_field_name_122=((void*)0);
    # 181 "18field.c"
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    # 188 "18field.c"
    # 183 "18field.c"
    if(_if_conditional182=klass_114->mFields==((void*)0),    _if_conditional182) {
        # 184 "18field.c"
        err_msg(info,"%s fields are null",klass_114->mName);
        # 185 "18field.c"
        __result94__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result94__;
    }
    # 199 "18field.c"
    for(    o2_saved_123=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_126=list$1tuple2$2charphsTypephph_begin((o2_saved_123));    !list$1tuple2$2charphsTypephph_end((o2_saved_123));    field_126=list$1tuple2$2charphsTypephph_next((o2_saved_123))    ){
        # 189 "18field.c"
        multiple_assign_var1=field_126;
        field_name_129=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_130=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        # 194 "18field.c"
        # 191 "18field.c"
        if(_if_conditional187=string_operator_equals(field_name_129,name_108),        _if_conditional187) {
            # 192 "18field.c"
            __dec_obj58=field_type_120;
            field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(field_type2_130))));
            come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 193 "18field.c"
            field_name_129 = come_decrement_ref_count2(field_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 196 "18field.c"
        index_121++;
        field_name_129 = come_decrement_ref_count2(field_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    # 234 "18field.c"
    # 199 "18field.c"
    if(_if_conditional189=index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields),    _if_conditional189) {
        # 200 "18field.c"
        index_121=0;
        # 228 "18field.c"
        for(        o2_saved_131=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_132=list$1tuple2$2charphsTypephph_begin((o2_saved_131));        !list$1tuple2$2charphsTypephph_end((o2_saved_131));        field_132=list$1tuple2$2charphsTypephph_next((o2_saved_131))        ){
            # 202 "18field.c"
            multiple_assign_var2=field_132;
            field_name_133=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_134=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            # 204 "18field.c"
            klass2_135=field_type2_134->mClass;
            # 216 "18field.c"
            for(            o2_saved_136=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_135->mFields)),field2_137=list$1tuple2$2charphsTypephph_begin((o2_saved_136));            !list$1tuple2$2charphsTypephph_end((o2_saved_136));            field2_137=list$1tuple2$2charphsTypephph_next((o2_saved_136))            ){
                # 207 "18field.c"
                multiple_assign_var3=field2_137;
                field_name2_138=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_139=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                # 214 "18field.c"
                # 209 "18field.c"
                if(_if_conditional190=string_operator_equals(field_name2_138,name_108),                _if_conditional190) {
                    # 210 "18field.c"
                    __dec_obj59=child_field_name_122;
                    child_field_name_122=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(field_name_133))));
                    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 211 "18field.c"
                    __dec_obj60=field_type_120;
                    field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(field_type3_139))));
                    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 212 "18field.c"
                    field_name2_138 = come_decrement_ref_count2(field_name2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_139,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_138 = come_decrement_ref_count2(field_name2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_139,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_136,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            # 220 "18field.c"
            # 216 "18field.c"
            if(child_field_name_122) {
                # 217 "18field.c"
                field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 223 "18field.c"
            # 220 "18field.c"
            if(_if_conditional192=string_operator_equals(field_name_133,name_108),            _if_conditional192) {
                # 221 "18field.c"
                __dec_obj61=field_type_120;
                field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(field_type2_134))));
                come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 222 "18field.c"
                field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 225 "18field.c"
            index_121++;
            field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_131,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        # 232 "18field.c"
        # 228 "18field.c"
        if(_if_conditional193=index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields),        _if_conditional193) {
            # 229 "18field.c"
            err_msg(info,"field not found(%s) in %s(1)",name_108,klass_114->mName);
            # 230 "18field.c"
            __result104__ = (_Bool)0;
            name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result104__;
        }
    }
    # 234 "18field.c"
    come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 234, "CVALUE"))));
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 236 "18field.c"
    check_assign_type(((char*)(right_value168=xsprintf("\%s is assigned to",((char*)(right_value167=string_to_string(name_108)))))),field_type_120,right_type_111,right_value_110,(_Bool)0,(_Bool)1,info);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 238 "18field.c"
    right_type_111=((struct sType*)(right_value169=sType_clone(right_value_110->type)));
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 252 "18field.c"
    # 240 "18field.c"
    if(_if_conditional194=field_type_120->mHeap&&!right_value_110->type->mHeap,    _if_conditional194) {
        # 251 "18field.c"
        # 241 "18field.c"
        if(_if_conditional195=string_operator_equals(right_value_110->type->mClass->mName,"void")&&right_value_110->type->mPointerNum==1,        _if_conditional195) {
        }
        else {
            # 250 "18field.c"
            # 245 "18field.c"
            if(_if_conditional196=!right_value_110->type->mDelegate&&!right_value_110->type->mShare&&!gComeGC,            _if_conditional196) {
                # 246 "18field.c"
                err_msg(info,"require right value as heap object(%s)(1)",name_108);
                # 247 "18field.c"
                printf("right type is %s pointer num %d heap %d\n",right_value_110->type->mClass->mName,right_value_110->type->mPointerNum,right_value_110->type->mHeap);
                # 248 "18field.c"
                __result105__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result105__;
            }
        }
    }
    # 346 "18field.c"
    # 252 "18field.c"
    if(_if_conditional197=field_type_120->mHeap&&right_type_111->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0,    _if_conditional197) {
        # 286 "18field.c"
        # 254 "18field.c"
        if(_if_conditional198=left_value_109->type->mPointerNum==1,        _if_conditional198) {
            # 267 "18field.c"
            # 255 "18field.c"
            if(child_field_name_122) {
                # 256 "18field.c"
                c_value_141=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 257 "18field.c"
                decrement_ref_count_object(field_type_120,c_value_141,info,(_Bool)0);
                # 258 "18field.c"
                std_move(field_type_120,right_type_111,right_value_110,info);
                # 259 "18field.c"
                __dec_obj62=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_141 = come_decrement_ref_count2(c_value_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 262 "18field.c"
                c_value_142=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s->%s",left_value_109->c_value,name_108))));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 263 "18field.c"
                decrement_ref_count_object(field_type_120,c_value_142,info,(_Bool)0);
                # 264 "18field.c"
                std_move(field_type_120,right_type_111,right_value_110,info);
                # 265 "18field.c"
                __dec_obj63=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_142 = come_decrement_ref_count2(c_value_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            # 286 "18field.c"
            # 268 "18field.c"
            if(_if_conditional200=left_value_109->type->mPointerNum==0,            _if_conditional200) {
                # 281 "18field.c"
                # 269 "18field.c"
                if(child_field_name_122) {
                    # 270 "18field.c"
                    c_value_143=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 271 "18field.c"
                    decrement_ref_count_object(field_type_120,c_value_143,info,(_Bool)0);
                    # 272 "18field.c"
                    std_move(field_type_120,right_type_111,right_value_110,info);
                    # 273 "18field.c"
                    __dec_obj64=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_143 = come_decrement_ref_count2(c_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 276 "18field.c"
                    c_value_144=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s.%s",left_value_109->c_value,name_108))));
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 277 "18field.c"
                    decrement_ref_count_object(field_type_120,c_value_144,info,(_Bool)0);
                    # 278 "18field.c"
                    __dec_obj65=right_value_110->c_value;
                    right_value_110->c_value=(char*)come_increment_ref_count(((char*)(right_value177=increment_ref_count_object(right_value_110->type,right_value_110->c_value,info))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 279 "18field.c"
                    __dec_obj66=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 283 "18field.c"
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                # 284 "18field.c"
                __result106__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result106__;
            }
        }
        # 286 "18field.c"
        right_value_id_145=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_110->c_value));
        # 291 "18field.c"
        # 288 "18field.c"
        if(_if_conditional202=right_value_id_145!=-1,        _if_conditional202) {
            # 289 "18field.c"
            remove_object_from_right_values(right_value_id_145,info);
        }
    }
    else {
        # 346 "18field.c"
        # 292 "18field.c"
        if(_if_conditional203=field_type_120->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0&&string_operator_equals(right_type_111->mClass->mName,"void"),        _if_conditional203) {
            # 322 "18field.c"
            # 294 "18field.c"
            if(_if_conditional204=left_value_109->type->mPointerNum==1,            _if_conditional204) {
                # 305 "18field.c"
                # 295 "18field.c"
                if(child_field_name_122) {
                    # 296 "18field.c"
                    c_value_146=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 297 "18field.c"
                    decrement_ref_count_object(field_type_120,c_value_146,info,(_Bool)0);
                    # 298 "18field.c"
                    __dec_obj67=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_146 = come_decrement_ref_count2(c_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 301 "18field.c"
                    c_value_147=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s->%s",left_value_109->c_value,name_108))));
                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 302 "18field.c"
                    decrement_ref_count_object(field_type_120,c_value_147,info,(_Bool)0);
                    # 303 "18field.c"
                    __dec_obj68=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_147 = come_decrement_ref_count2(c_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                # 322 "18field.c"
                # 306 "18field.c"
                if(_if_conditional206=left_value_109->type->mPointerNum==0,                _if_conditional206) {
                    # 317 "18field.c"
                    # 307 "18field.c"
                    if(child_field_name_122) {
                        # 308 "18field.c"
                        c_value_148=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 309 "18field.c"
                        decrement_ref_count_object(field_type_120,c_value_148,info,(_Bool)0);
                        # 310 "18field.c"
                        __dec_obj69=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_148 = come_decrement_ref_count2(c_value_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        # 313 "18field.c"
                        c_value_149=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s.%s",left_value_109->c_value,name_108))));
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 314 "18field.c"
                        decrement_ref_count_object(field_type_120,c_value_149,info,(_Bool)0);
                        # 315 "18field.c"
                        __dec_obj70=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_149 = come_decrement_ref_count2(c_value_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    # 319 "18field.c"
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                    # 320 "18field.c"
                    __result107__ = (_Bool)0;
                    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result107__;
                }
            }
        }
        else {
            # 344 "18field.c"
            # 324 "18field.c"
            if(_if_conditional208=left_value_109->type->mPointerNum==1,            _if_conditional208) {
                # 331 "18field.c"
                # 325 "18field.c"
                if(child_field_name_122) {
                    # 326 "18field.c"
                    __dec_obj71=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 329 "18field.c"
                    __dec_obj72=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                # 344 "18field.c"
                # 332 "18field.c"
                if(_if_conditional210=left_value_109->type->mPointerNum==0,                _if_conditional210) {
                    # 339 "18field.c"
                    # 333 "18field.c"
                    if(child_field_name_122) {
                        # 334 "18field.c"
                        __dec_obj73=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 337 "18field.c"
                        __dec_obj74=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    # 341 "18field.c"
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                    # 342 "18field.c"
                    __result108__ = (_Bool)0;
                    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result108__;
                }
            }
        }
    }
    # 346 "18field.c"
    __dec_obj75=come_value_140->type;
    come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(field_type_120))));
    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 347 "18field.c"
    come_value_140->var=((void*)0);
    # 349 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
    # 351 "18field.c"
    add_come_last_code(info,"%s;\n",come_value_140->c_value);
    # 353 "18field.c"
    __result109__ = (_Bool)1;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result109__;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_115;
unsigned int hash_116;
unsigned int it_117;
_Bool _while_condtional19;
_Bool _if_conditional171;
_Bool _if_conditional172;
struct sClass* __result90__;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct sClass* __result91__;
struct sClass* __result92__;
struct sClass* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_115, 0, sizeof(struct sClass*));
memset(&hash_116, 0, sizeof(unsigned int));
memset(&it_117, 0, sizeof(unsigned int));
        # 1519 "./neo-c.h"
        # 1520 "./neo-c.h"
        memset(&default_value_115,0,sizeof(struct sClass*));
        # 1522 "./neo-c.h"
        hash_116=string_get_hash_key(((char*)key))%self->size;
        # 1523 "./neo-c.h"
        it_117=hash_116;
        # 1547 "./neo-c.h"
        while(_while_condtional19=(_Bool)1,        _while_condtional19) {
            # 1545 "./neo-c.h"
            # 1526 "./neo-c.h"
            if(_if_conditional171=self->item_existance[it_117],            _if_conditional171) {
                # 1533 "./neo-c.h"
                # 1528 "./neo-c.h"
                if(_if_conditional172=string_equals(self->keys[it_117],key),                _if_conditional172) {
                    # 1530 "./neo-c.h"
                    __result90__ = __result_obj__ = self->items[it_117];
                    come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result90__;
                }
                # 1533 "./neo-c.h"
                it_117++;
                # 1541 "./neo-c.h"
                # 1535 "./neo-c.h"
                if(_if_conditional180=it_117>=self->size,                _if_conditional180) {
                    # 1536 "./neo-c.h"
                    it_117=0;
                }
                else {
                    # 1541 "./neo-c.h"
                    # 1538 "./neo-c.h"
                    if(_if_conditional181=it_117==hash_116,                    _if_conditional181) {
                        # 1539 "./neo-c.h"
                        __result91__ = __result_obj__ = default_value_115;
                        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result91__;
                    }
                }
            }
            else {
                # 1543 "./neo-c.h"
                __result92__ = __result_obj__ = default_value_115;
                come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
            }
        }
        # 1547 "./neo-c.h"
        __result93__ = __result_obj__ = default_value_115;
        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result93__;
        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sClass_finalize"
                        # 0 "sClass_finalize"
                        if(_if_conditional173=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional173) {
                            # 0 "sClass_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sClass_finalize"
                        # 1 "sClass_finalize"
                        if(_if_conditional174=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional174) {
                            # 1 "sClass_finalize"
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sClass_finalize"
                        # 2 "sClass_finalize"
                        if(_if_conditional178=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional178) {
                            # 2 "sClass_finalize"
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sClass_finalize"
                        # 3 "sClass_finalize"
                        if(_if_conditional179=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional179) {
                            # 3 "sClass_finalize"
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_118;
_Bool _while_condtional20;
struct list_item$1tuple2$2charphsTypephph* prev_it_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                # 114 "./neo-c.h"
                                it_118=self->head;
                                # 120 "./neo-c.h"
                                while(_while_condtional20=it_118!=((void*)0),                                _while_condtional20) {
                                    # 116 "./neo-c.h"
                                    prev_it_119=it_118;
                                    # 117 "./neo-c.h"
                                    it_118=it_118->next;
                                    # 118 "./neo-c.h"
                                    come_call_finalizer3(prev_it_119,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                        if(_if_conditional175=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional175) {
                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional176;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                # 0 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional176=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional176) {
                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "tuple2$2charphsTypephp_finalize"
                                                # 1 "tuple2$2charphsTypephp_finalize"
                                                if(_if_conditional177=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional177) {
                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional183;
struct tuple2$2charphsTypeph* result_124;
struct tuple2$2charphsTypeph* __result95__;
_Bool _if_conditional184;
struct tuple2$2charphsTypeph* __result96__;
struct tuple2$2charphsTypeph* result_125;
struct tuple2$2charphsTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_125, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional183=self==((void*)0),        _if_conditional183) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_124,0,sizeof(struct tuple2$2charphsTypeph*));
            # 279 "./neo-c.h"
            __result95__ = __result_obj__ = result_124;
            return __result95__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result96__ = __result_obj__ = self->it->item;
            return __result96__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_125,0,sizeof(struct tuple2$2charphsTypeph*));
        # 289 "./neo-c.h"
        __result97__ = __result_obj__ = result_125;
        return __result97__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result98__ = self==((void*)0)||self->it==((void*)0);
        return __result98__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional185;
struct tuple2$2charphsTypeph* result_127;
struct tuple2$2charphsTypeph* __result99__;
_Bool _if_conditional186;
struct tuple2$2charphsTypeph* __result100__;
struct tuple2$2charphsTypeph* result_128;
struct tuple2$2charphsTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_128, 0, sizeof(struct tuple2$2charphsTypeph*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional185=self==((void*)0)||self->it==((void*)0),        _if_conditional185) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_127,0,sizeof(struct tuple2$2charphsTypeph*));
            # 296 "./neo-c.h"
            __result99__ = __result_obj__ = result_127;
            return __result99__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result100__ = __result_obj__ = self->it->item;
            return __result100__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_128,0,sizeof(struct tuple2$2charphsTypeph*));
        # 307 "./neo-c.h"
        __result101__ = __result_obj__ = result_128;
        return __result101__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional188;
int __result102__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional188=self==((void*)0),        _if_conditional188) {
            # 352 "./neo-c.h"
            __result102__ = 0;
            return __result102__;
        }
        # 354 "./neo-c.h"
        __result103__ = self->len;
        return __result103__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __dec_obj76;
void* right_value193;
struct sNode* __dec_obj77;
struct sNullCheckNode* __result110__;
struct sNullCheckNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    # 365 "18field.c"
    self->sline=info->sline;
    # 366 "18field.c"
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 368 "18field.c"
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 369 "18field.c"
    self->mOnlyNullCecker=only_null_checker;
    # 371 "18field.c"
    __result110__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result110__;
    # 374 "18field.c"
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullCheckNode_terminated(struct sNullCheckNode* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    # 376 "18field.c"
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__;
void* right_value194;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    # 381 "18field.c"
    __result113__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sNullCheckNode")));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_150;
_Bool _if_conditional214;
_Bool __result114__;
void* right_value195;
struct CVALUE* left_value_151;
_Bool _if_conditional215;
void* right_value196;
char* method_name_152;
_Bool _if_conditional220;
struct sType* obj_type_155;
_Bool _if_conditional221;
struct sType* obj_type2_156;
void* right_value197;
void* right_value198;
char* __dec_obj78;
struct sFun* fun_157;
_Bool _if_conditional222;
_Bool __result119__;
void* right_value199;
struct sType* type_158;
void* right_value200;
struct CVALUE* come_value_159;
void* right_value201;
char* __dec_obj79;
void* right_value202;
struct sType* __dec_obj80;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value203;
struct CVALUE* come_value_160;
void* right_value204;
void* right_value205;
char* __dec_obj81;
void* right_value206;
struct sType* __dec_obj82;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_150, 0, sizeof(struct sNode*));
right_value195 = (void*)0;
memset(&left_value_151, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
memset(&method_name_152, 0, sizeof(char*));
memset(&obj_type_155, 0, sizeof(struct sType*));
memset(&obj_type2_156, 0, sizeof(struct sType*));
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&fun_157, 0, sizeof(struct sFun*));
right_value199 = (void*)0;
memset(&type_158, 0, sizeof(struct sType*));
right_value200 = (void*)0;
memset(&come_value_159, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
    # 386 "18field.c"
    left_150=self->mLeft;
    # 392 "18field.c"
    # 388 "18field.c"
    if(_if_conditional214=!node_compile(left_150,info),    _if_conditional214) {
        # 389 "18field.c"
        __result114__ = (_Bool)0;
        return __result114__;
    }
    # 392 "18field.c"
    left_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 393 "18field.c"
    dec_stack_ptr(1,info);
    # 447 "18field.c"
    # 395 "18field.c"
    if(_if_conditional215=!self->mOnlyNullCecker&&left_value_151->type->mNoSolvedGenericsType&&left_value_151->type->mNoSolvedGenericsType->v1&&left_value_151->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_151->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional215) {
        # 396 "18field.c"
        method_name_152=(char*)come_increment_ref_count(((char*)(right_value196=create_method_name(left_value_151->type,(_Bool)0,"expect",info,(_Bool)1))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 410 "18field.c"
        # 398 "18field.c"
        if(_if_conditional220=map$2charphsFunph_at(info->funcs,method_name_152,((void*)0))==((void*)0),        _if_conditional220) {
            # 399 "18field.c"
            obj_type_155=left_value_151->type->mNoSolvedGenericsType->v1;
            # 408 "18field.c"
            # 400 "18field.c"
            if(_if_conditional221=list$1sTypeph_length(obj_type_155->mGenericsTypes)>0,            _if_conditional221) {
                # 401 "18field.c"
                obj_type2_156=left_value_151->type;
                # 402 "18field.c"
                __dec_obj78=method_name_152;
                method_name_152=(char*)come_increment_ref_count(((char*)(right_value198=make_generics_function(obj_type2_156,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("expect")))),info,(_Bool)1))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 405 "18field.c"
                err_msg(info,"require expect implementation(%s)",left_value_151->type->mClass->mName);
                # 406 "18field.c"
                exit(1);
            }
        }
        # 410 "18field.c"
        fun_157=map$2charphsFunphp_operator_load_element(info->funcs,method_name_152);
        # 417 "18field.c"
        # 412 "18field.c"
        if(_if_conditional222=fun_157==((void*)0),        _if_conditional222) {
            # 413 "18field.c"
            err_msg(info,"function not found(%s)",method_name_152);
            # 414 "18field.c"
            __result119__ = (_Bool)1;
            method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result119__;
        }
        # 417 "18field.c"
        type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=solve_generics(fun_157->mResultType,left_value_151->type,info))));
        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 419 "18field.c"
        come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 419, "CVALUE"))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 421 "18field.c"
        __dec_obj79=come_value_159->c_value;
        come_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s(%s)",method_name_152,left_value_151->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 422 "18field.c"
        __dec_obj80=come_value_159->type;
        come_value_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(type_158))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 423 "18field.c"
        come_value_159->var=((void*)0);
        # 425 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        # 427 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_159->c_value);
        method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 447 "18field.c"
        # 429 "18field.c"
        if(_if_conditional223=!gComeDebug,        _if_conditional223) {
            # 430 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
        }
        else {
            # 447 "18field.c"
            # 432 "18field.c"
            if(_if_conditional224=left_value_151->type->mPointerNum>0,            _if_conditional224) {
                # 433 "18field.c"
                come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 433, "CVALUE"))));
                come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 435 "18field.c"
                __dec_obj81=come_value_160->c_value;
                come_value_160->c_value=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value204=make_type_name_string(left_value_151->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_151->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 436 "18field.c"
                __dec_obj82=come_value_160->type;
                come_value_160->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(left_value_151->type))));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 437 "18field.c"
                come_value_160->var=((void*)0);
                # 439 "18field.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
                # 441 "18field.c"
                add_come_last_code(info,"%s;\n",come_value_160->c_value);
                come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 444 "18field.c"
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
            }
        }
    }
    # 447 "18field.c"
    __result120__ = (_Bool)1;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_153;
unsigned int it_154;
_Bool _while_condtional21;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sFun* __result115__;
_Bool _if_conditional218;
_Bool _if_conditional219;
struct sFun* __result116__;
struct sFun* __result117__;
struct sFun* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_153, 0, sizeof(unsigned int));
memset(&it_154, 0, sizeof(unsigned int));
            # 1201 "./neo-c.h"
            hash_153=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_154=hash_153;
            # 1226 "./neo-c.h"
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional216=self->item_existance[it_154],                _if_conditional216) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional217=string_equals(self->keys[it_154],key),                    _if_conditional217) {
                        # 1209 "./neo-c.h"
                        __result115__ = __result_obj__ = self->items[it_154];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result115__;
                    }
                    # 1212 "./neo-c.h"
                    it_154++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional218=it_154>=self->size,                    _if_conditional218) {
                        # 1215 "./neo-c.h"
                        it_154=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional219=it_154==hash_153,                        _if_conditional219) {
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

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value207;
char* __dec_obj83;
void* right_value208;
struct sNode* __dec_obj84;
struct sNullableNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
right_value208 = (void*)0;
    # 459 "18field.c"
    self->sline=info->sline;
    # 460 "18field.c"
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 462 "18field.c"
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 465 "18field.c"
    __result121__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result121__;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullableNode_terminated(struct sNullableNode* self){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    # 467 "18field.c"
    __result122__ = (_Bool)0;
    return __result122__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__;
void* right_value209;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    # 472 "18field.c"
    __result123__ = __result_obj__ = ((char*)(right_value209=__builtin_string("sNullableNode")));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_161;
_Bool _if_conditional227;
_Bool __result124__;
void* right_value210;
struct CVALUE* left_value_162;
_Bool _if_conditional228;
void* right_value214;
struct CVALUE* come_value_164;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_161, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&left_value_162, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
memset(&come_value_164, 0, sizeof(struct CVALUE*));
    # 477 "18field.c"
    left_161=self->mLeft;
    # 483 "18field.c"
    # 479 "18field.c"
    if(_if_conditional227=!node_compile(left_161,info),    _if_conditional227) {
        # 480 "18field.c"
        __result124__ = (_Bool)0;
        return __result124__;
    }
    # 483 "18field.c"
    left_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 484 "18field.c"
    dec_stack_ptr(1,info);
    # 499 "18field.c"
    # 486 "18field.c"
    if(_if_conditional228=left_value_162->type->mPointerNum>0&&left_value_162->type->mNullValue,    _if_conditional228) {
        # 487 "18field.c"
        come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=CVALUE_clone(left_value_162))));
        come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 489 "18field.c"
        come_value_164->type->mNullValue=(_Bool)0;
        # 491 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
        # 493 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_164->c_value);
        come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 496 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_162));
    }
    # 499 "18field.c"
    __result127__ = (_Bool)1;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result127__;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional229;
struct CVALUE* __result125__;
void* right_value211;
struct CVALUE* result_163;
_Bool _if_conditional230;
void* right_value212;
char* __dec_obj85;
_Bool _if_conditional231;
void* right_value213;
struct sType* __dec_obj86;
_Bool _if_conditional232;
struct CVALUE* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
memset(&result_163, 0, sizeof(struct CVALUE*));
right_value212 = (void*)0;
right_value213 = (void*)0;
            # 3 "CVALUE_clone"
            # 2 "CVALUE_clone"
            if(_if_conditional229=self==(void*)0,            _if_conditional229) {
                # 2 "CVALUE_clone"
                __result125__ = __result_obj__ = (void*)0;
                return __result125__;
            }
            # 3 "CVALUE_clone"
            result_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value211,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "CVALUE_clone"
            # 4 "CVALUE_clone"
            if(_if_conditional230=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional230) {
                # 4 "CVALUE_clone"
                __dec_obj85=result_163->c_value;
                result_163->c_value=(char*)come_increment_ref_count(((char*)(right_value212=string_clone(self->c_value))));
                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "CVALUE_clone"
            # 5 "CVALUE_clone"
            if(_if_conditional231=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional231) {
                # 5 "CVALUE_clone"
                __dec_obj86=result_163->type;
                result_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(self->type))));
                come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "CVALUE_clone"
            # 6 "CVALUE_clone"
            if(_if_conditional232=self!=((void*)0),            _if_conditional232) {
                # 6 "CVALUE_clone"
                result_163->var=self->var;
            }
            # 7 "CVALUE_clone"
            __result126__ = __result_obj__ = result_163;
            come_call_finalizer3(result_163,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
            come_call_finalizer3(result_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value215;
char* __dec_obj87;
void* right_value216;
struct sNode* __dec_obj88;
void* right_value217;
struct sNode* __dec_obj89;
void* right_value218;
struct sNode* __dec_obj90;
struct sRangeCheckNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    # 511 "18field.c"
    self->sline=info->sline;
    # 512 "18field.c"
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 514 "18field.c"
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 515 "18field.c"
    __dec_obj89=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(begin))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 516 "18field.c"
    __dec_obj90=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(end))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 519 "18field.c"
    __result128__ = __result_obj__ = self;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sRangeCheckNode_terminated(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    # 521 "18field.c"
    __result129__ = (_Bool)0;
    return __result129__;
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__;
void* right_value219;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    # 526 "18field.c"
    __result130__ = __result_obj__ = ((char*)(right_value219=__builtin_string("sRangeCheckNode")));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_165;
_Bool _if_conditional237;
_Bool __result131__;
void* right_value220;
struct CVALUE* left_value_166;
struct sNode* begin_167;
_Bool _if_conditional238;
_Bool __result132__;
void* right_value221;
struct CVALUE* begin_value_168;
struct sNode* end_169;
_Bool _if_conditional239;
_Bool __result133__;
void* right_value222;
struct CVALUE* end_value_170;
_Bool _if_conditional240;
_Bool _if_conditional241;
void* right_value223;
struct CVALUE* come_value_171;
void* right_value224;
void* right_value225;
char* __dec_obj91;
void* right_value226;
struct sType* __dec_obj92;
void* right_value227;
struct CVALUE* come_value_172;
void* right_value228;
void* right_value229;
char* __dec_obj93;
void* right_value230;
struct sType* __dec_obj94;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_165, 0, sizeof(struct sNode*));
right_value220 = (void*)0;
memset(&left_value_166, 0, sizeof(struct CVALUE*));
memset(&begin_167, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
memset(&begin_value_168, 0, sizeof(struct CVALUE*));
memset(&end_169, 0, sizeof(struct sNode*));
right_value222 = (void*)0;
memset(&end_value_170, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
    # 531 "18field.c"
    left_165=self->mLeft;
    # 537 "18field.c"
    # 533 "18field.c"
    if(_if_conditional237=!node_compile(left_165,info),    _if_conditional237) {
        # 534 "18field.c"
        __result131__ = (_Bool)0;
        return __result131__;
    }
    # 537 "18field.c"
    left_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 538 "18field.c"
    dec_stack_ptr(1,info);
    # 540 "18field.c"
    begin_167=self->mBegin;
    # 546 "18field.c"
    # 542 "18field.c"
    if(_if_conditional238=!node_compile(begin_167,info),    _if_conditional238) {
        # 543 "18field.c"
        __result132__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result132__;
    }
    # 546 "18field.c"
    begin_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 547 "18field.c"
    dec_stack_ptr(1,info);
    # 549 "18field.c"
    end_169=self->mEnd;
    # 555 "18field.c"
    # 551 "18field.c"
    if(_if_conditional239=!node_compile(end_169,info),    _if_conditional239) {
        # 552 "18field.c"
        __result133__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    # 555 "18field.c"
    end_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 556 "18field.c"
    dec_stack_ptr(1,info);
    # 589 "18field.c"
    # 558 "18field.c"
    if(_if_conditional240=left_value_166->type->mPointerNum>0,    _if_conditional240) {
        # 584 "18field.c"
        # 559 "18field.c"
        if(_if_conditional241=!gComeDebug,        _if_conditional241) {
            # 560 "18field.c"
            come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 560, "CVALUE"))));
            come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 562 "18field.c"
            __dec_obj91=come_value_171->c_value;
            come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("(*((%s)%s))",((char*)(right_value224=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_166->c_value))));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 564 "18field.c"
            left_value_166->type->mPointerNum--;
            # 565 "18field.c"
            __dec_obj92=come_value_171->type;
            come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(left_value_166->type))));
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 566 "18field.c"
            come_value_171->var=((void*)0);
            # 568 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
            # 570 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_171->c_value);
            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 573 "18field.c"
            come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573, "CVALUE"))));
            come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 575 "18field.c"
            __dec_obj93=come_value_172->c_value;
            come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value228=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_166->c_value,begin_value_168->c_value,end_value_170->c_value,info->sname,info->sline))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 576 "18field.c"
            left_value_166->type->mPointerNum--;
            # 577 "18field.c"
            __dec_obj94=come_value_172->type;
            come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(left_value_166->type))));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 578 "18field.c"
            come_value_172->var=((void*)0);
            # 580 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
            # 582 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_172->c_value);
            come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        # 586 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_166));
    }
    # 589 "18field.c"
    __result134__ = (_Bool)1;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value231;
char* __dec_obj95;
void* right_value232;
struct sNode* __dec_obj96;
void* right_value233;
char* __dec_obj97;
struct sLoadFieldNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    # 600 "18field.c"
    self->sline=info->sline;
    # 601 "18field.c"
    __dec_obj95=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string(info->sname))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 603 "18field.c"
    __dec_obj96=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=sNode_clone(left))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 604 "18field.c"
    __dec_obj97=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(name))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 607 "18field.c"
    __result135__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result135__;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sLoadFieldNode_terminated(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    # 609 "18field.c"
    __result136__ = (_Bool)0;
    return __result136__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__;
void* right_value234;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    # 614 "18field.c"
    __result137__ = __result_obj__ = ((char*)(right_value234=__builtin_string("sLoadFieldNode")));
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_173;
void* right_value235;
char* name_174;
_Bool _if_conditional245;
_Bool __result138__;
void* right_value236;
struct CVALUE* left_value_175;
_Bool _if_conditional246;
void* right_value237;
void* right_value238;
char* __dec_obj98;
struct sType* left_type_176;
void* right_value239;
struct sType* left_type2_177;
struct sClass* klass_178;
struct sType* field_type_179;
int index_180;
char* child_field_name_181;
_Bool _if_conditional247;
_Bool __result139__;
struct list$1tuple2$2charphsTypephph* o2_saved_182;
struct tuple2$2charphsTypeph* field_183;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_184;
struct sType* field_type2_185;
_Bool _if_conditional248;
void* right_value240;
struct sType* __dec_obj99;
_Bool _if_conditional249;
struct list$1tuple2$2charphsTypephph* o2_saved_186;
struct tuple2$2charphsTypeph* field_187;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_188;
struct sType* field_type2_189;
struct sClass* klass2_190;
struct list$1tuple2$2charphsTypephph* o2_saved_191;
struct tuple2$2charphsTypeph* field2_192;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_193;
struct sType* field_type3_194;
_Bool _if_conditional250;
void* right_value241;
char* __dec_obj100;
void* right_value242;
struct sType* __dec_obj101;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value243;
struct sType* __dec_obj102;
_Bool _if_conditional253;
_Bool __result140__;
void* right_value244;
struct CVALUE* come_value_195;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value245;
char* __dec_obj103;
void* right_value246;
char* __dec_obj104;
_Bool _if_conditional256;
void* right_value247;
char* __dec_obj105;
void* right_value248;
char* __dec_obj106;
void* right_value249;
struct sType* __dec_obj107;
_Bool _if_conditional257;
_Bool __result141__;
_Bool _if_conditional259;
void* right_value250;
struct sType* __dec_obj108;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_173, 0, sizeof(struct sNode*));
right_value235 = (void*)0;
memset(&name_174, 0, sizeof(char*));
right_value236 = (void*)0;
memset(&left_value_175, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&left_type_176, 0, sizeof(struct sType*));
right_value239 = (void*)0;
memset(&left_type2_177, 0, sizeof(struct sType*));
memset(&klass_178, 0, sizeof(struct sClass*));
memset(&field_type_179, 0, sizeof(struct sType*));
memset(&index_180, 0, sizeof(int));
memset(&child_field_name_181, 0, sizeof(char*));
memset(&o2_saved_182, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_183, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_184, 0, sizeof(char*));
memset(&field_type2_185, 0, sizeof(struct sType*));
memset(&field_name_184, 0, sizeof(char*));
memset(&field_type2_185, 0, sizeof(struct sType*));
right_value240 = (void*)0;
memset(&o2_saved_186, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_187, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_188, 0, sizeof(char*));
memset(&field_type2_189, 0, sizeof(struct sType*));
memset(&field_name_188, 0, sizeof(char*));
memset(&field_type2_189, 0, sizeof(struct sType*));
memset(&klass2_190, 0, sizeof(struct sClass*));
memset(&o2_saved_191, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_192, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_193, 0, sizeof(char*));
memset(&field_type3_194, 0, sizeof(struct sType*));
memset(&field_name2_193, 0, sizeof(char*));
memset(&field_type3_194, 0, sizeof(struct sType*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&come_value_195, 0, sizeof(struct CVALUE*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
    # 619 "18field.c"
    left_173=self->mLeft;
    # 620 "18field.c"
    name_174=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(self->mName))));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 626 "18field.c"
    # 622 "18field.c"
    if(_if_conditional245=!node_compile(left_173,info),    _if_conditional245) {
        # 623 "18field.c"
        __result138__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result138__;
    }
    # 626 "18field.c"
    left_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 627 "18field.c"
    dec_stack_ptr(1,info);
    # 633 "18field.c"
    # 629 "18field.c"
    if(_if_conditional246=gComeDebug&&left_value_175->type->mPointerNum>0,    _if_conditional246) {
        # 630 "18field.c"
        __dec_obj98=left_value_175->c_value;
        left_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value237=make_type_name_string(left_value_175->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_175->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 633 "18field.c"
    left_type_176=left_value_175->type;
    # 635 "18field.c"
    left_type2_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=solve_generics(left_type_176,left_type_176,info))));
    come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 637 "18field.c"
    klass_178=left_type2_177->mClass;
    # 638 "18field.c"
    klass_178=map$2charphsClassphp_operator_load_element(info->classes,klass_178->mName);
    # 640 "18field.c"
    field_type_179=((void*)0);
    # 641 "18field.c"
    index_180=0;
    # 642 "18field.c"
    child_field_name_181=((void*)0);
    # 643 "18field.c"
    klass_178=map$2charphsClassphp_operator_load_element(info->classes,klass_178->mName);
    # 648 "18field.c"
    # 644 "18field.c"
    if(_if_conditional247=klass_178==((void*)0)||klass_178->mFields==((void*)0),    _if_conditional247) {
        # 645 "18field.c"
        err_msg(info,"invalid class %s",klass_178->mName);
        # 646 "18field.c"
        __result139__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    # 659 "18field.c"
    for(    o2_saved_182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),field_183=list$1tuple2$2charphsTypephph_begin((o2_saved_182));    !list$1tuple2$2charphsTypephph_end((o2_saved_182));    field_183=list$1tuple2$2charphsTypephph_next((o2_saved_182))    ){
        # 649 "18field.c"
        multiple_assign_var4=field_183;
        field_name_184=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_185=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        # 656 "18field.c"
        # 651 "18field.c"
        if(_if_conditional248=string_operator_equals(field_name_184,name_174),        _if_conditional248) {
            # 652 "18field.c"
            __dec_obj99=field_type_179;
            field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(field_type2_185))));
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 653 "18field.c"
            field_name_184 = come_decrement_ref_count2(field_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        # 656 "18field.c"
        index_180++;
        field_name_184 = come_decrement_ref_count2(field_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_182,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    # 694 "18field.c"
    # 659 "18field.c"
    if(_if_conditional249=index_180==list$1tuple2$2charphsTypephph_length(klass_178->mFields),    _if_conditional249) {
        # 660 "18field.c"
        index_180=0;
        # 688 "18field.c"
        for(        o2_saved_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),field_187=list$1tuple2$2charphsTypephph_begin((o2_saved_186));        !list$1tuple2$2charphsTypephph_end((o2_saved_186));        field_187=list$1tuple2$2charphsTypephph_next((o2_saved_186))        ){
            # 662 "18field.c"
            multiple_assign_var5=field_187;
            field_name_188=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_189=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            # 664 "18field.c"
            klass2_190=field_type2_189->mClass;
            # 676 "18field.c"
            for(            o2_saved_191=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_190->mFields)),field2_192=list$1tuple2$2charphsTypephph_begin((o2_saved_191));            !list$1tuple2$2charphsTypephph_end((o2_saved_191));            field2_192=list$1tuple2$2charphsTypephph_next((o2_saved_191))            ){
                # 667 "18field.c"
                multiple_assign_var6=field2_192;
                field_name2_193=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_194=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                # 674 "18field.c"
                # 669 "18field.c"
                if(_if_conditional250=string_operator_equals(field_name2_193,name_174),                _if_conditional250) {
                    # 670 "18field.c"
                    __dec_obj100=child_field_name_181;
                    child_field_name_181=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(field_name_188))));
                    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 671 "18field.c"
                    __dec_obj101=field_type_179;
                    field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(field_type3_194))));
                    come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 672 "18field.c"
                    field_name2_193 = come_decrement_ref_count2(field_name2_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_194,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_193 = come_decrement_ref_count2(field_name2_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_191,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            # 680 "18field.c"
            # 676 "18field.c"
            if(child_field_name_181) {
                # 677 "18field.c"
                field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 685 "18field.c"
            # 680 "18field.c"
            if(_if_conditional252=string_operator_equals(field_name_188,name_174),            _if_conditional252) {
                # 681 "18field.c"
                __dec_obj102=field_type_179;
                field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(field_type2_189))));
                come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 682 "18field.c"
                field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            # 685 "18field.c"
            index_180++;
            field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_186,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        # 692 "18field.c"
        # 688 "18field.c"
        if(_if_conditional253=index_180==list$1tuple2$2charphsTypephph_length(klass_178->mFields),        _if_conditional253) {
            # 689 "18field.c"
            err_msg(info,"field not found(%s) in %s(2)",name_174,klass_178->mName);
            # 690 "18field.c"
            __result140__ = (_Bool)0;
            name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result140__;
        }
    }
    # 694 "18field.c"
    come_value_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 694, "CVALUE"))));
    come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 712 "18field.c"
    # 696 "18field.c"
    if(_if_conditional254=left_value_175->type->mPointerNum>0,    _if_conditional254) {
        # 703 "18field.c"
        # 697 "18field.c"
        if(child_field_name_181) {
            # 698 "18field.c"
            __dec_obj103=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s->%s.%s",left_value_175->c_value,child_field_name_181,name_174))));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 701 "18field.c"
            __dec_obj104=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("%s->%s",left_value_175->c_value,name_174))));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        # 711 "18field.c"
        # 705 "18field.c"
        if(child_field_name_181) {
            # 706 "18field.c"
            __dec_obj105=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value247=xsprintf("%s.%s.%s",left_value_175->c_value,child_field_name_181,name_174))));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 709 "18field.c"
            __dec_obj106=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("%s.%s",left_value_175->c_value,name_174))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 712 "18field.c"
    __dec_obj107=come_value_195->type;
    come_value_195->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(field_type_179))));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 713 "18field.c"
    come_value_195->var=((void*)0);
    # 720 "18field.c"
    # 715 "18field.c"
    if(_if_conditional257=field_type_179==((void*)0),    _if_conditional257) {
        # 716 "18field.c"
        err_msg(info,"no field(%s)\n",name_174);
        # 717 "18field.c"
        __result141__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result141__;
    }
    # 728 "18field.c"
    # 720 "18field.c"
    if(_if_conditional259=list$1sNodeph_length(come_value_195->type->mArrayNum)==1,    _if_conditional259) {
        # 721 "18field.c"
        __dec_obj108=come_value_195->type->mOriginalLoadVarType->v1;
        come_value_195->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(come_value_195->type))));
        come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 723 "18field.c"
        list$1sNodeph_reset(come_value_195->type->mArrayNum);
        # 724 "18field.c"
        come_value_195->type->mPointerNum++;
        # 725 "18field.c"
        come_value_195->type->mOriginalTypeNamePointerNum=come_value_195->type->mPointerNum;
    }
    # 728 "18field.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
    # 730 "18field.c"
    __result145__ = (_Bool)1;
    name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result145__;
    name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional258;
int __result142__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional258=self==((void*)0),        _if_conditional258) {
            # 352 "./neo-c.h"
            __result142__ = 0;
            return __result142__;
        }
        # 354 "./neo-c.h"
        __result143__ = self->len;
        return __result143__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_196;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_197;
struct list$1sNodeph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_196, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_197, 0, sizeof(struct list_item$1sNodeph*));
            # 420 "./neo-c.h"
            it_196=self->head;
            # 427 "./neo-c.h"
            while(_while_condtional22=it_196!=((void*)0),            _while_condtional22) {
                # 422 "./neo-c.h"
                prev_it_197=it_196;
                # 423 "./neo-c.h"
                it_196=it_196->next;
                # 424 "./neo-c.h"
                come_call_finalizer3(prev_it_197,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 427 "./neo-c.h"
            self->head=((void*)0);
            # 428 "./neo-c.h"
            self->tail=((void*)0);
            # 430 "./neo-c.h"
            self->len=0;
            # 432 "./neo-c.h"
            __result144__ = __result_obj__ = self;
            return __result144__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value251;
char* __dec_obj109;
void* right_value252;
struct sNode* __dec_obj110;
void* right_value253;
struct sNode* __dec_obj111;
void* right_value254;
struct list$1sNodeph* __dec_obj112;
struct sStoreArrayNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
    # 743 "18field.c"
    self->sline=info->sline;
    # 744 "18field.c"
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value251=__builtin_string(info->sname))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 746 "18field.c"
    __dec_obj110=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=sNode_clone(left))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 747 "18field.c"
    __dec_obj111=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(right))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 748 "18field.c"
    __dec_obj112=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value254=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj112,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value254,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 749 "18field.c"
    self->mQuote=quote;
    # 752 "18field.c"
    __result146__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result146__;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sStoreArrayNode_terminated(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    # 754 "18field.c"
    __result147__ = (_Bool)0;
    return __result147__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__;
void* right_value255;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    # 759 "18field.c"
    __result148__ = __result_obj__ = ((char*)(right_value255=__builtin_string("sStoreArrayNode")));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_198;
struct sNode* right_199;
struct list$1sNodeph* array_num_nodes_200;
_Bool _if_conditional264;
_Bool __result149__;
void* right_value256;
struct CVALUE* left_value_201;
_Bool _if_conditional265;
void* right_value257;
void* right_value258;
char* __dec_obj113;
struct sType* left_type_202;
void* right_value259;
void* right_value260;
struct list$1CVALUEph* array_num_205;
struct list$1sNodeph* o2_saved_206;
struct sNode* it_209;
_Bool _if_conditional270;
_Bool __result158__;
void* right_value261;
struct CVALUE* c_value_212;
_Bool _if_conditional271;
_Bool __result159__;
void* right_value262;
struct CVALUE* right_value_213;
struct sType* right_type_214;
struct sClass* klass_215;
void* right_value263;
struct sType* type_216;
char* fun_name_217;
_Bool calling_fun_218;
_Bool _if_conditional272;
_Bool _if_conditional275;
char* check_code_222;
_Bool _if_conditional276;
struct sType* var_type_223;
void* right_value264;
struct sType* result_type_224;
_Bool _if_conditional277;
struct sType* __dec_obj114;
_Bool _if_conditional278;
int n_225;
_Bool _if_conditional280;
void* right_value265;
struct sType* __dec_obj115;
_Bool _if_conditional281;
void* right_value266;
struct sType* __dec_obj116;
_Bool _if_conditional282;
int i_226;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value267;
struct CVALUE* come_value_239;
void* right_value268;
void* right_value269;
struct buffer* buf_240;
void* right_value270;
struct sType* result_type2_241;
void* right_value271;
struct list$1CVALUEph* o2_saved_242;
struct CVALUE* it_245;
void* right_value272;
void* right_value273;
int i_248;
struct list$1sNodeph* o2_saved_249;
struct sNode* it_250;
_Bool _if_conditional309;
void* right_value274;
struct CVALUE* come_value_251;
void* right_value275;
_Bool _if_conditional310;
void* right_value276;
void* right_value277;
char* __dec_obj117;
void* right_value278;
struct CVALUE* come_value_252;
_Bool _if_conditional311;
int i_253;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value279;
void* right_value280;
struct buffer* buf_254;
struct list$1CVALUEph* o2_saved_255;
struct CVALUE* it_256;
void* right_value281;
void* right_value282;
char* left_value_code_257;
void* right_value283;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value284;
char* __dec_obj118;
_Bool _if_conditional316;
void* right_value285;
char* __dec_obj119;
_Bool __result173__;
int right_value_id_258;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value286;
char* __dec_obj120;
_Bool _if_conditional319;
void* right_value287;
char* __dec_obj121;
_Bool __result174__;
void* right_value288;
struct sType* result_type_259;
void* right_value289;
void* right_value290;
struct list$1sNodeph* __dec_obj122;
struct sType* __dec_obj123;
_Bool _if_conditional320;
void* right_value291;
char* __dec_obj124;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_198, 0, sizeof(struct sNode*));
memset(&right_199, 0, sizeof(struct sNode*));
memset(&array_num_nodes_200, 0, sizeof(struct list$1sNodeph*));
right_value256 = (void*)0;
memset(&left_value_201, 0, sizeof(struct CVALUE*));
right_value257 = (void*)0;
right_value258 = (void*)0;
memset(&left_type_202, 0, sizeof(struct sType*));
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&array_num_205, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_206, 0, sizeof(struct list$1sNodeph*));
memset(&it_209, 0, sizeof(struct sNode*));
right_value261 = (void*)0;
memset(&c_value_212, 0, sizeof(struct CVALUE*));
right_value262 = (void*)0;
memset(&right_value_213, 0, sizeof(struct CVALUE*));
memset(&right_type_214, 0, sizeof(struct sType*));
memset(&klass_215, 0, sizeof(struct sClass*));
right_value263 = (void*)0;
memset(&type_216, 0, sizeof(struct sType*));
memset(&fun_name_217, 0, sizeof(char*));
memset(&calling_fun_218, 0, sizeof(_Bool));
memset(&check_code_222, 0, sizeof(char*));
memset(&var_type_223, 0, sizeof(struct sType*));
right_value264 = (void*)0;
memset(&result_type_224, 0, sizeof(struct sType*));
memset(&n_225, 0, sizeof(int));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&i_226, 0, sizeof(int));
right_value267 = (void*)0;
memset(&come_value_239, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&buf_240, 0, sizeof(struct buffer*));
right_value270 = (void*)0;
memset(&result_type2_241, 0, sizeof(struct sType*));
right_value271 = (void*)0;
memset(&o2_saved_242, 0, sizeof(struct list$1CVALUEph*));
memset(&it_245, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&i_248, 0, sizeof(int));
memset(&o2_saved_249, 0, sizeof(struct list$1sNodeph*));
memset(&it_250, 0, sizeof(struct sNode*));
right_value274 = (void*)0;
memset(&come_value_251, 0, sizeof(struct CVALUE*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&come_value_252, 0, sizeof(struct CVALUE*));
memset(&i_253, 0, sizeof(int));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&buf_254, 0, sizeof(struct buffer*));
memset(&o2_saved_255, 0, sizeof(struct list$1CVALUEph*));
memset(&it_256, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&left_value_code_257, 0, sizeof(char*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&right_value_id_258, 0, sizeof(int));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&result_type_259, 0, sizeof(struct sType*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
    # 764 "18field.c"
    left_198=self->mLeft;
    # 765 "18field.c"
    right_199=self->mRight;
    # 766 "18field.c"
    array_num_nodes_200=self->mArrayNum;
    # 772 "18field.c"
    # 768 "18field.c"
    if(_if_conditional264=!node_compile(left_198,info),    _if_conditional264) {
        # 769 "18field.c"
        __result149__ = (_Bool)0;
        return __result149__;
    }
    # 772 "18field.c"
    left_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value256,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 773 "18field.c"
    dec_stack_ptr(1,info);
    # 779 "18field.c"
    # 775 "18field.c"
    if(_if_conditional265=gComeDebug&&left_value_201->type->mPointerNum>0,    _if_conditional265) {
        # 776 "18field.c"
        __dec_obj113=left_value_201->c_value;
        left_value_201->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value257=make_type_name_string(left_value_201->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_201->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 779 "18field.c"
    left_type_202=left_value_201->type;
    # 781 "18field.c"
    array_num_205=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value260=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value259=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 781, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value259,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value260,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 794 "18field.c"
    for(    o2_saved_206=(array_num_nodes_200),it_209=list$1sNodeph_begin((o2_saved_206));    !list$1sNodeph_end((o2_saved_206));    it_209=list$1sNodeph_next((o2_saved_206))    ){
        # 788 "18field.c"
        # 784 "18field.c"
        if(_if_conditional270=!node_compile(it_209,info),        _if_conditional270) {
            # 785 "18field.c"
            __result158__ = (_Bool)0;
            come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result158__;
        }
        # 788 "18field.c"
        c_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value261,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 789 "18field.c"
        dec_stack_ptr(1,info);
        # 791 "18field.c"
        list$1CVALUEph_push_back(array_num_205,(struct CVALUE*)come_increment_ref_count(c_value_212));
        come_call_finalizer3(c_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 798 "18field.c"
    # 794 "18field.c"
    if(_if_conditional271=!node_compile(right_199,info),    _if_conditional271) {
        # 795 "18field.c"
        __result159__ = (_Bool)0;
        come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result159__;
    }
    # 798 "18field.c"
    right_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 799 "18field.c"
    dec_stack_ptr(1,info);
    # 801 "18field.c"
    right_type_214=right_value_213->type;
    # 803 "18field.c"
    klass_215=left_value_201->type->mClass;
    # 805 "18field.c"
    type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_value_201->type))));
    come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 807 "18field.c"
    fun_name_217="operator_store_element";
    # 808 "18field.c"
    # 816 "18field.c"
    # 809 "18field.c"
    if(self->mQuote) {
        # 810 "18field.c"
        calling_fun_218=(_Bool)0;
    }
    else {
        # 813 "18field.c"
        calling_fun_218=operator_overload_fun2(type_216,fun_name_217,left_value_201,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_205,0), "18field.c", 813, 9)),right_value_213,info);
    }
    # 975 "18field.c"
    # 816 "18field.c"
    if(_if_conditional275=!calling_fun_218,    _if_conditional275) {
        # 817 "18field.c"
        check_code_222=((void*)0);
        # 895 "18field.c"
        # 818 "18field.c"
        if(_if_conditional276=left_value_201->var&&left_value_201->var->mType&&list$1sNodeph_length(left_value_201->var->mType->mArrayNum)>0,        _if_conditional276) {
            # 820 "18field.c"
            var_type_223=left_value_201->var->mType;
            # 821 "18field.c"
            result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(left_type_202))));
            come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 827 "18field.c"
            # 823 "18field.c"
            if(result_type_224->mOriginalLoadVarType->v1) {
                # 824 "18field.c"
                __dec_obj114=result_type_224;
                result_type_224=(struct sType*)come_increment_ref_count(result_type_224->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 861 "18field.c"
            # 827 "18field.c"
            if(_if_conditional278=list$1sNodeph_length(result_type_224->mArrayNum)>0,            _if_conditional278) {
                # 828 "18field.c"
                n_225=list$1sNodeph_length(result_type_224->mArrayNum)-list$1CVALUEph_length(array_num_205);
                # 850 "18field.c"
                # 830 "18field.c"
                if(_if_conditional280=n_225==0,                _if_conditional280) {
                    # 831 "18field.c"
                    __dec_obj115=result_type_224;
                    result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(left_type_202))));
                    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 835 "18field.c"
                    # 832 "18field.c"
                    if(left_type_202->mOriginalLoadVarType->v1) {
                        # 833 "18field.c"
                        __dec_obj116=result_type_224;
                        result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(left_type_202->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 835 "18field.c"
                    list$1sNodeph_reset(result_type_224->mArrayNum);
                }
                else {
                    # 850 "18field.c"
                    # 837 "18field.c"
                    if(_if_conditional282=n_225>0,                    _if_conditional282) {
                        # 841 "18field.c"
                        for(                        i_226=0;                        i_226<n_225;                        i_226++                        ){
                            # 839 "18field.c"
                            list$1sNodeph_delete(result_type_224->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 850 "18field.c"
                        # 842 "18field.c"
                        if(_if_conditional301=n_225<0,                        _if_conditional301) {
                            # 843 "18field.c"
                            list$1sNodeph_reset(result_type_224->mArrayNum);
                            # 844 "18field.c"
                            result_type_224->mPointerNum+=n_225;
                            # 849 "18field.c"
                            # 846 "18field.c"
                            if(_if_conditional302=result_type_224->mPointerNum<0,                            _if_conditional302) {
                                # 847 "18field.c"
                                result_type_224->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 859 "18field.c"
                # 852 "18field.c"
                if(_if_conditional303=result_type_224->mPointerNum>0,                _if_conditional303) {
                    # 853 "18field.c"
                    result_type_224->mPointerNum-=list$1CVALUEph_length(array_num_205);
                    # 858 "18field.c"
                    # 855 "18field.c"
                    if(_if_conditional304=result_type_224->mPointerNum<0,                    _if_conditional304) {
                        # 856 "18field.c"
                        result_type_224->mPointerNum=0;
                    }
                }
            }
            # 861 "18field.c"
            come_value_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 861, "CVALUE"))));
            come_call_finalizer3(right_value267,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 863 "18field.c"
            buf_240=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value268=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 863, "buffer"))))))));
            come_call_finalizer3(right_value268,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value269,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 865 "18field.c"
            result_type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(result_type_224))));
            come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 866 "18field.c"
            result_type2_241->mPointerNum++;
            # 868 "18field.c"
            buffer_append_str(buf_240,((char*)(right_value271=xsprintf("come_range_check(&%s",left_value_201->c_value))));
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 873 "18field.c"
            for(            o2_saved_242=(struct list$1CVALUEph*)come_increment_ref_count((array_num_205)),it_245=list$1CVALUEph_begin((o2_saved_242));            !list$1CVALUEph_end((o2_saved_242));            it_245=list$1CVALUEph_next((o2_saved_242))            ){
                # 871 "18field.c"
                buffer_append_str(buf_240,((char*)(right_value272=xsprintf("[%s]",it_245->c_value))));
                right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_242,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            # 873 "18field.c"
            buffer_append_str(buf_240,((char*)(right_value273=xsprintf(",%s,%s+(",left_value_201->c_value,left_value_201->c_value))));
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 874 "18field.c"
            i_248=0;
            # 890 "18field.c"
            for(            o2_saved_249=(struct list$1sNodeph*)come_increment_ref_count((var_type_223->mArrayNum)),it_250=list$1sNodeph_begin((o2_saved_249));            !list$1sNodeph_end((o2_saved_249));            it_250=list$1sNodeph_next((o2_saved_249))            ){
                # 881 "18field.c"
                # 876 "18field.c"
                if(_if_conditional309=!node_compile(it_250,info),                _if_conditional309) {
                    # 877 "18field.c"
                    err_msg(info,"invalid array num");
                    # 878 "18field.c"
                    exit(1);
                }
                # 881 "18field.c"
                come_value_251=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 882 "18field.c"
                dec_stack_ptr(1,info);
                # 884 "18field.c"
                buffer_append_str(buf_240,((char*)(right_value275=xsprintf("%s",come_value_251->c_value))));
                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 888 "18field.c"
                # 885 "18field.c"
                if(_if_conditional310=i_248!=list$1sNodeph_length(var_type_223->mArrayNum)-1,                _if_conditional310) {
                    # 886 "18field.c"
                    buffer_append_str(buf_240,"*");
                }
                # 888 "18field.c"
                i_248++;
                come_call_finalizer3(come_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_249,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            # 890 "18field.c"
            buffer_append_str(buf_240,((char*)(right_value276=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 892 "18field.c"
            __dec_obj117=check_code_222;
            check_code_222=(char*)come_increment_ref_count(((char*)(right_value277=buffer_to_string(buf_240))));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_240,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 895 "18field.c"
        come_value_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 895, "CVALUE"))));
        come_call_finalizer3(right_value278,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 916 "18field.c"
        # 903 "18field.c"
        if(_if_conditional311=list$1sNodeph_length(left_type_202->mArrayNum)>0,        _if_conditional311) {
            # 907 "18field.c"
            for(            i_253=0;            i_253<list$1CVALUEph_length(array_num_205);            i_253++            ){
                # 905 "18field.c"
                list$1sNodeph_delete(left_type_202->mArrayNum,-1,-1);
            }
        }
        else {
            # 916 "18field.c"
            # 908 "18field.c"
            if(_if_conditional312=left_type_202->mPointerNum>0,            _if_conditional312) {
                # 909 "18field.c"
                left_type_202->mPointerNum-=list$1CVALUEph_length(array_num_205);
                # 914 "18field.c"
                # 911 "18field.c"
                if(_if_conditional313=left_type_202->mPointerNum<0,                _if_conditional313) {
                    # 912 "18field.c"
                    left_type_202->mPointerNum=0;
                }
            }
        }
        # 916 "18field.c"
        buf_254=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value280=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value279=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 916, "buffer"))))))));
        come_call_finalizer3(right_value279,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value280,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 918 "18field.c"
        buffer_append_str(buf_254,left_value_201->c_value);
        # 924 "18field.c"
        for(        o2_saved_255=(struct list$1CVALUEph*)come_increment_ref_count((array_num_205)),it_256=list$1CVALUEph_begin((o2_saved_255));        !list$1CVALUEph_end((o2_saved_255));        it_256=list$1CVALUEph_next((o2_saved_255))        ){
            # 921 "18field.c"
            buffer_append_str(buf_254,((char*)(right_value281=xsprintf("[%s]",it_256->c_value))));
            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 924 "18field.c"
        left_value_code_257=(char*)come_increment_ref_count(((char*)(right_value282=buffer_to_string(buf_254))));
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 926 "18field.c"
        check_assign_type(((char*)(right_value283=xsprintf("array is assinged to"))),left_type_202,right_type_214,right_value_213,(_Bool)0,(_Bool)1,info);
        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 961 "18field.c"
        # 927 "18field.c"
        if(_if_conditional314=left_type_202->mHeap&&right_type_214->mHeap&&left_type_202->mPointerNum>0&&right_type_214->mPointerNum>0,        _if_conditional314) {
            # 943 "18field.c"
            # 929 "18field.c"
            if(_if_conditional315=left_value_201->type->mPointerNum>=1,            _if_conditional315) {
                # 930 "18field.c"
                decrement_ref_count_object(left_type_202,left_value_code_257,info,(_Bool)0);
                # 931 "18field.c"
                std_move(left_type_202,right_type_214,right_value_213,info);
                # 932 "18field.c"
                __dec_obj118=come_value_252->c_value;
                come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value284=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 943 "18field.c"
                # 934 "18field.c"
                if(_if_conditional316=left_value_201->type->mPointerNum==0,                _if_conditional316) {
                    # 935 "18field.c"
                    decrement_ref_count_object(left_type_202,left_value_code_257,info,(_Bool)0);
                    # 936 "18field.c"
                    std_move(left_type_202,right_type_214,right_value_213,info);
                    # 937 "18field.c"
                    __dec_obj119=come_value_252->c_value;
                    come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value285=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 940 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_257,left_value_201->type->mPointerNum);
                    # 941 "18field.c"
                    __result173__ = (_Bool)0;
                    check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result173__;
                }
            }
            # 943 "18field.c"
            right_value_id_258=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_213->c_value));
            # 948 "18field.c"
            # 945 "18field.c"
            if(_if_conditional317=right_value_id_258!=-1,            _if_conditional317) {
                # 946 "18field.c"
                remove_object_from_right_values(right_value_id_258,info);
            }
        }
        else {
            # 960 "18field.c"
            # 950 "18field.c"
            if(_if_conditional318=left_value_201->type->mPointerNum>=1,            _if_conditional318) {
                # 951 "18field.c"
                __dec_obj120=come_value_252->c_value;
                come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value286=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 960 "18field.c"
                # 953 "18field.c"
                if(_if_conditional319=left_value_201->type->mPointerNum==0,                _if_conditional319) {
                    # 954 "18field.c"
                    __dec_obj121=come_value_252->c_value;
                    come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 957 "18field.c"
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_257,left_value_201->type->mPointerNum);
                    # 958 "18field.c"
                    __result174__ = (_Bool)0;
                    check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result174__;
                }
            }
        }
        # 961 "18field.c"
        result_type_259=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(left_type_202))));
        come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 962 "18field.c"
        __dec_obj122=result_type_259->mArrayNum;
        result_type_259->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value290=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value289=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 962, "list$1sNodeph"))))))));
        come_call_finalizer3(__dec_obj122,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value289,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value290,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 963 "18field.c"
        __dec_obj123=come_value_252->type;
        come_value_252->type=(struct sType*)come_increment_ref_count(result_type_259);
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        # 964 "18field.c"
        come_value_252->var=((void*)0);
        # 970 "18field.c"
        # 966 "18field.c"
        if(_if_conditional320=check_code_222&&gComeDebug,        _if_conditional320) {
            # 967 "18field.c"
            __dec_obj124=come_value_252->c_value;
            come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value291=xsprintf("(%s, %s)",check_code_222,come_value_252->c_value))));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 970 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_252));
        # 972 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_252->c_value);
        check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 975 "18field.c"
    __result175__ = (_Bool)1;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result175__;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_205,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
        # 95 "./neo-c.h"
        self->head=((void*)0);
        # 96 "./neo-c.h"
        self->tail=((void*)0);
        # 97 "./neo-c.h"
        self->len=0;
        # 99 "./neo-c.h"
        __result150__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result150__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_203;
_Bool _while_condtional23;
struct list_item$1CVALUEph* prev_it_204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_203, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_204, 0, sizeof(struct list_item$1CVALUEph*));
            # 114 "./neo-c.h"
            it_203=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional23=it_203!=((void*)0),            _while_condtional23) {
                # 116 "./neo-c.h"
                prev_it_204=it_203;
                # 117 "./neo-c.h"
                it_203=it_203->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_204,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional266;
struct sNode* result_207;
struct sNode* __result151__;
_Bool _if_conditional267;
struct sNode* __result152__;
struct sNode* result_208;
struct sNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(struct sNode*));
memset(&result_208, 0, sizeof(struct sNode*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional266=self==((void*)0),        _if_conditional266) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_207,0,sizeof(struct sNode*));
            # 279 "./neo-c.h"
            __result151__ = __result_obj__ = result_207;
            return __result151__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result152__ = __result_obj__ = self->it->item;
            return __result152__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_208,0,sizeof(struct sNode*));
        # 289 "./neo-c.h"
        __result153__ = __result_obj__ = result_208;
        return __result153__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result154__ = self==((void*)0)||self->it==((void*)0);
        return __result154__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional268;
struct sNode* result_210;
struct sNode* __result155__;
_Bool _if_conditional269;
struct sNode* __result156__;
struct sNode* result_211;
struct sNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(struct sNode*));
memset(&result_211, 0, sizeof(struct sNode*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional268=self==((void*)0)||self->it==((void*)0),        _if_conditional268) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_210,0,sizeof(struct sNode*));
            # 296 "./neo-c.h"
            __result155__ = __result_obj__ = result_210;
            return __result155__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result156__ = __result_obj__ = self->it->item;
            return __result156__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_211,0,sizeof(struct sNode*));
        # 307 "./neo-c.h"
        __result157__ = __result_obj__ = result_211;
        return __result157__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional273;
struct list_item$1CVALUEph* it_219;
int i_220;
_Bool _while_condtional24;
_Bool _if_conditional274;
struct CVALUE* __result160__;
struct CVALUE* default_value_221;
struct CVALUE* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_220, 0, sizeof(int));
memset(&default_value_221, 0, sizeof(struct CVALUE*));
            # 673 "./neo-c.h"
            # 669 "./neo-c.h"
            if(_if_conditional273=position<0,            _if_conditional273) {
                # 670 "./neo-c.h"
                position+=self->len;
            }
            # 673 "./neo-c.h"
            it_219=self->head;
            # 674 "./neo-c.h"
            i_220=0;
            # 681 "./neo-c.h"
            while(_while_condtional24=it_219!=((void*)0),            _while_condtional24) {
                # 679 "./neo-c.h"
                # 676 "./neo-c.h"
                if(_if_conditional274=position==i_220,                _if_conditional274) {
                    # 677 "./neo-c.h"
                    __result160__ = __result_obj__ = it_219->item;
                    return __result160__;
                }
                # 679 "./neo-c.h"
                it_219=it_219->next;
                # 680 "./neo-c.h"
                i_220++;
            }
            # 683 "./neo-c.h"
            # 684 "./neo-c.h"
            memset(&default_value_221,0,sizeof(struct CVALUE*));
            # 685 "./neo-c.h"
            __result161__ = __result_obj__ = default_value_221;
            come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result161__;
            come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional279;
int __result162__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 354 "./neo-c.h"
                    # 351 "./neo-c.h"
                    if(_if_conditional279=self==((void*)0),                    _if_conditional279) {
                        # 352 "./neo-c.h"
                        __result162__ = 0;
                        return __result162__;
                    }
                    # 354 "./neo-c.h"
                    __result163__ = self->len;
                    return __result163__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
int tmp_227;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
struct list$1sNodeph* __result164__;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list_item$1sNodeph* it_228;
int i_229;
_Bool _while_condtional25;
_Bool _if_conditional291;
struct list_item$1sNodeph* prev_it_230;
_Bool _if_conditional292;
_Bool _if_conditional293;
struct list_item$1sNodeph* it_231;
int i_232;
_Bool _while_condtional26;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct list_item$1sNodeph* prev_it_233;
struct list_item$1sNodeph* it_234;
struct list_item$1sNodeph* head_prev_it_235;
struct list_item$1sNodeph* tail_it_236;
int i_237;
_Bool _while_condtional27;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct list_item$1sNodeph* prev_it_238;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list$1sNodeph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_227, 0, sizeof(int));
memset(&it_228, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_229, 0, sizeof(int));
memset(&prev_it_230, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_231, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_232, 0, sizeof(int));
memset(&prev_it_233, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_234, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_235, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_236, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_237, 0, sizeof(int));
memset(&prev_it_238, 0, sizeof(struct list_item$1sNodeph*));
                                # 454 "./neo-c.h"
                                # 451 "./neo-c.h"
                                if(_if_conditional283=head<0,                                _if_conditional283) {
                                    # 452 "./neo-c.h"
                                    head+=self->len;
                                }
                                # 458 "./neo-c.h"
                                # 454 "./neo-c.h"
                                if(_if_conditional284=tail<0,                                _if_conditional284) {
                                    # 455 "./neo-c.h"
                                    tail+=self->len+1;
                                }
                                # 464 "./neo-c.h"
                                # 458 "./neo-c.h"
                                if(_if_conditional285=head>tail,                                _if_conditional285) {
                                    # 459 "./neo-c.h"
                                    tmp_227=tail;
                                    # 460 "./neo-c.h"
                                    tail=head;
                                    # 461 "./neo-c.h"
                                    head=tmp_227;
                                }
                                # 468 "./neo-c.h"
                                # 464 "./neo-c.h"
                                if(_if_conditional286=head<0,                                _if_conditional286) {
                                    # 465 "./neo-c.h"
                                    head=0;
                                }
                                # 472 "./neo-c.h"
                                # 468 "./neo-c.h"
                                if(_if_conditional287=tail>self->len,                                _if_conditional287) {
                                    # 469 "./neo-c.h"
                                    tail=self->len;
                                }
                                # 476 "./neo-c.h"
                                # 472 "./neo-c.h"
                                if(_if_conditional288=head==tail,                                _if_conditional288) {
                                    # 473 "./neo-c.h"
                                    __result164__ = __result_obj__ = self;
                                    return __result164__;
                                }
                                # 571 "./neo-c.h"
                                # 476 "./neo-c.h"
                                if(_if_conditional289=head==0&&tail==self->len,                                _if_conditional289) {
                                    # 478 "./neo-c.h"
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    # 571 "./neo-c.h"
                                    # 480 "./neo-c.h"
                                    if(_if_conditional290=head==0,                                    _if_conditional290) {
                                        # 481 "./neo-c.h"
                                        it_228=self->head;
                                        # 482 "./neo-c.h"
                                        i_229=0;
                                        # 504 "./neo-c.h"
                                        while(_while_condtional25=it_228!=((void*)0),                                        _while_condtional25) {
                                            # 503 "./neo-c.h"
                                            # 484 "./neo-c.h"
                                            if(_if_conditional291=i_229<tail,                                            _if_conditional291) {
                                                # 485 "./neo-c.h"
                                                prev_it_230=it_228;
                                                # 487 "./neo-c.h"
                                                it_228=it_228->next;
                                                # 488 "./neo-c.h"
                                                i_229++;
                                                # 490 "./neo-c.h"
                                                come_call_finalizer3(prev_it_230,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                # 492 "./neo-c.h"
                                                self->len--;
                                            }
                                            else {
                                                # 503 "./neo-c.h"
                                                # 494 "./neo-c.h"
                                                if(_if_conditional292=i_229==tail,                                                _if_conditional292) {
                                                    # 495 "./neo-c.h"
                                                    self->head=it_228;
                                                    # 496 "./neo-c.h"
                                                    self->head->prev=((void*)0);
                                                    # 497 "./neo-c.h"
                                                    break;
                                                }
                                                else {
                                                    # 500 "./neo-c.h"
                                                    it_228=it_228->next;
                                                    # 501 "./neo-c.h"
                                                    i_229++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 571 "./neo-c.h"
                                        # 505 "./neo-c.h"
                                        if(_if_conditional293=tail==self->len,                                        _if_conditional293) {
                                            # 506 "./neo-c.h"
                                            it_231=self->head;
                                            # 507 "./neo-c.h"
                                            i_232=0;
                                            # 529 "./neo-c.h"
                                            while(_while_condtional26=it_231!=((void*)0),                                            _while_condtional26) {
                                                # 514 "./neo-c.h"
                                                # 509 "./neo-c.h"
                                                if(_if_conditional294=i_232==head,                                                _if_conditional294) {
                                                    # 510 "./neo-c.h"
                                                    self->tail=it_231->prev;
                                                    # 511 "./neo-c.h"
                                                    self->tail->next=((void*)0);
                                                }
                                                # 528 "./neo-c.h"
                                                # 514 "./neo-c.h"
                                                if(_if_conditional295=i_232>=head,                                                _if_conditional295) {
                                                    # 515 "./neo-c.h"
                                                    prev_it_233=it_231;
                                                    # 517 "./neo-c.h"
                                                    it_231=it_231->next;
                                                    # 518 "./neo-c.h"
                                                    i_232++;
                                                    # 520 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_233,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    # 522 "./neo-c.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 525 "./neo-c.h"
                                                    it_231=it_231->next;
                                                    # 526 "./neo-c.h"
                                                    i_232++;
                                                }
                                            }
                                        }
                                        else {
                                            # 531 "./neo-c.h"
                                            it_234=self->head;
                                            # 533 "./neo-c.h"
                                            head_prev_it_235=((void*)0);
                                            # 534 "./neo-c.h"
                                            tail_it_236=((void*)0);
                                            # 537 "./neo-c.h"
                                            i_237=0;
                                            # 563 "./neo-c.h"
                                            while(_while_condtional27=it_234!=((void*)0),                                            _while_condtional27) {
                                                # 542 "./neo-c.h"
                                                # 539 "./neo-c.h"
                                                if(_if_conditional296=i_237==head,                                                _if_conditional296) {
                                                    # 540 "./neo-c.h"
                                                    head_prev_it_235=it_234->prev;
                                                }
                                                # 546 "./neo-c.h"
                                                # 542 "./neo-c.h"
                                                if(_if_conditional297=i_237==tail,                                                _if_conditional297) {
                                                    # 543 "./neo-c.h"
                                                    tail_it_236=it_234;
                                                }
                                                # 561 "./neo-c.h"
                                                # 546 "./neo-c.h"
                                                if(_if_conditional298=i_237>=head&&i_237<tail,                                                _if_conditional298) {
                                                    # 548 "./neo-c.h"
                                                    prev_it_238=it_234;
                                                    # 550 "./neo-c.h"
                                                    it_234=it_234->next;
                                                    # 551 "./neo-c.h"
                                                    i_237++;
                                                    # 553 "./neo-c.h"
                                                    come_call_finalizer3(prev_it_238,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    # 555 "./neo-c.h"
                                                    self->len--;
                                                }
                                                else {
                                                    # 558 "./neo-c.h"
                                                    it_234=it_234->next;
                                                    # 559 "./neo-c.h"
                                                    i_237++;
                                                }
                                            }
                                            # 566 "./neo-c.h"
                                            # 563 "./neo-c.h"
                                            if(_if_conditional299=head_prev_it_235!=((void*)0),                                            _if_conditional299) {
                                                # 564 "./neo-c.h"
                                                head_prev_it_235->next=tail_it_236;
                                            }
                                            # 569 "./neo-c.h"
                                            # 566 "./neo-c.h"
                                            if(_if_conditional300=tail_it_236!=((void*)0),                                            _if_conditional300) {
                                                # 567 "./neo-c.h"
                                                tail_it_236->prev=head_prev_it_235;
                                            }
                                        }
                                    }
                                }
                                # 571 "./neo-c.h"
                                __result165__ = __result_obj__ = self;
                                return __result165__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional305;
struct CVALUE* result_243;
struct CVALUE* __result166__;
_Bool _if_conditional306;
struct CVALUE* __result167__;
struct CVALUE* result_244;
struct CVALUE* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct CVALUE*));
memset(&result_244, 0, sizeof(struct CVALUE*));
                # 281 "./neo-c.h"
                # 276 "./neo-c.h"
                if(_if_conditional305=self==((void*)0),                _if_conditional305) {
                    # 277 "./neo-c.h"
                    # 278 "./neo-c.h"
                    memset(&result_243,0,sizeof(struct CVALUE*));
                    # 279 "./neo-c.h"
                    __result166__ = __result_obj__ = result_243;
                    return __result166__;
                }
                # 281 "./neo-c.h"
                self->it=self->head;
                # 287 "./neo-c.h"
                # 283 "./neo-c.h"
                if(self->it) {
                    # 284 "./neo-c.h"
                    __result167__ = __result_obj__ = self->it->item;
                    return __result167__;
                }
                # 287 "./neo-c.h"
                # 288 "./neo-c.h"
                memset(&result_244,0,sizeof(struct CVALUE*));
                # 289 "./neo-c.h"
                __result168__ = __result_obj__ = result_244;
                return __result168__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
                # 311 "./neo-c.h"
                __result169__ = self==((void*)0)||self->it==((void*)0);
                return __result169__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional307;
struct CVALUE* result_246;
struct CVALUE* __result170__;
_Bool _if_conditional308;
struct CVALUE* __result171__;
struct CVALUE* result_247;
struct CVALUE* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct CVALUE*));
memset(&result_247, 0, sizeof(struct CVALUE*));
                # 299 "./neo-c.h"
                # 293 "./neo-c.h"
                if(_if_conditional307=self==((void*)0)||self->it==((void*)0),                _if_conditional307) {
                    # 294 "./neo-c.h"
                    # 295 "./neo-c.h"
                    memset(&result_246,0,sizeof(struct CVALUE*));
                    # 296 "./neo-c.h"
                    __result170__ = __result_obj__ = result_246;
                    return __result170__;
                }
                # 299 "./neo-c.h"
                self->it=self->it->next;
                # 305 "./neo-c.h"
                # 301 "./neo-c.h"
                if(self->it) {
                    # 302 "./neo-c.h"
                    __result171__ = __result_obj__ = self->it->item;
                    return __result171__;
                }
                # 305 "./neo-c.h"
                # 306 "./neo-c.h"
                memset(&result_247,0,sizeof(struct CVALUE*));
                # 307 "./neo-c.h"
                __result172__ = __result_obj__ = result_247;
                return __result172__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value292;
char* __dec_obj125;
void* right_value293;
struct list$1sNodeph* __dec_obj126;
void* right_value294;
struct sNode* __dec_obj127;
struct sLoadArrayNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
    # 988 "18field.c"
    self->sline=info->sline;
    # 989 "18field.c"
    __dec_obj125=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(info->sname))));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 991 "18field.c"
    __dec_obj126=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value293=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj126,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value293,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 992 "18field.c"
    self->mBreakGuard=break_guard;
    # 994 "18field.c"
    __dec_obj127=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(left))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 995 "18field.c"
    self->mQuote=quote;
    # 998 "18field.c"
    __result176__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result176__;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadArrayNode_terminated(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1000 "18field.c"
    __result177__ = (_Bool)0;
    return __result177__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__;
void* right_value295;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
    # 1005 "18field.c"
    __result178__ = __result_obj__ = ((char*)(right_value295=__builtin_string("sLoadArrayNode")));
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result178__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_260;
struct list$1sNodeph* array_num_nodes_261;
_Bool _if_conditional324;
_Bool __result179__;
void* right_value296;
struct CVALUE* left_value_262;
_Bool _if_conditional325;
void* right_value297;
void* right_value298;
char* __dec_obj128;
void* right_value299;
struct sType* left_type_263;
void* right_value300;
void* right_value301;
struct list$1CVALUEph* array_num_264;
struct list$1sNodeph* o2_saved_265;
struct sNode* it_266;
_Bool _if_conditional326;
_Bool __result180__;
void* right_value302;
struct CVALUE* c_value_267;
void* right_value303;
struct sType* type_268;
char* fun_name_269;
_Bool calling_fun_270;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
struct sType* var_type_271;
void* right_value304;
struct sType* result_type_272;
_Bool _if_conditional330;
struct sType* __dec_obj129;
_Bool _if_conditional331;
int n_273;
_Bool _if_conditional332;
void* right_value305;
struct sType* __dec_obj130;
_Bool _if_conditional333;
void* right_value306;
struct sType* __dec_obj131;
_Bool _if_conditional334;
int i_274;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value307;
struct CVALUE* come_value_275;
void* right_value308;
void* right_value309;
struct buffer* buf_276;
void* right_value310;
struct sType* result_type2_277;
void* right_value311;
void* right_value312;
struct list$1CVALUEph* o2_saved_278;
struct CVALUE* it_279;
void* right_value313;
void* right_value314;
int i_280;
struct list$1sNodeph* o2_saved_281;
struct sNode* it_282;
_Bool _if_conditional339;
void* right_value315;
struct CVALUE* come_value_283;
void* right_value316;
_Bool _if_conditional340;
void* right_value317;
void* right_value318;
char* left_value_code_284;
void* right_value319;
char* __dec_obj132;
void* right_value320;
struct sType* __dec_obj133;
void* right_value321;
struct CVALUE* come_value_285;
void* right_value322;
void* right_value323;
struct buffer* buf_286;
struct list$1CVALUEph* o2_saved_287;
struct CVALUE* it_288;
void* right_value324;
void* right_value325;
char* left_value_code_289;
void* right_value326;
char* __dec_obj134;
void* right_value327;
struct sType* result_type_290;
_Bool _if_conditional341;
struct sType* __dec_obj135;
_Bool _if_conditional342;
int n_291;
_Bool _if_conditional343;
void* right_value328;
struct sType* __dec_obj136;
_Bool _if_conditional344;
void* right_value329;
struct sType* __dec_obj137;
_Bool _if_conditional345;
int i_292;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
void* right_value330;
struct sType* __dec_obj138;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_260, 0, sizeof(struct sNode*));
memset(&array_num_nodes_261, 0, sizeof(struct list$1sNodeph*));
right_value296 = (void*)0;
memset(&left_value_262, 0, sizeof(struct CVALUE*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&left_type_263, 0, sizeof(struct sType*));
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&array_num_264, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_265, 0, sizeof(struct list$1sNodeph*));
memset(&it_266, 0, sizeof(struct sNode*));
right_value302 = (void*)0;
memset(&c_value_267, 0, sizeof(struct CVALUE*));
right_value303 = (void*)0;
memset(&type_268, 0, sizeof(struct sType*));
memset(&fun_name_269, 0, sizeof(char*));
memset(&calling_fun_270, 0, sizeof(_Bool));
memset(&var_type_271, 0, sizeof(struct sType*));
right_value304 = (void*)0;
memset(&result_type_272, 0, sizeof(struct sType*));
memset(&n_273, 0, sizeof(int));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&i_274, 0, sizeof(int));
right_value307 = (void*)0;
memset(&come_value_275, 0, sizeof(struct CVALUE*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&buf_276, 0, sizeof(struct buffer*));
right_value310 = (void*)0;
memset(&result_type2_277, 0, sizeof(struct sType*));
right_value311 = (void*)0;
right_value312 = (void*)0;
memset(&o2_saved_278, 0, sizeof(struct list$1CVALUEph*));
memset(&it_279, 0, sizeof(struct CVALUE*));
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&i_280, 0, sizeof(int));
memset(&o2_saved_281, 0, sizeof(struct list$1sNodeph*));
memset(&it_282, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
memset(&come_value_283, 0, sizeof(struct CVALUE*));
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&left_value_code_284, 0, sizeof(char*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&come_value_285, 0, sizeof(struct CVALUE*));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&buf_286, 0, sizeof(struct buffer*));
memset(&o2_saved_287, 0, sizeof(struct list$1CVALUEph*));
memset(&it_288, 0, sizeof(struct CVALUE*));
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&left_value_code_289, 0, sizeof(char*));
right_value326 = (void*)0;
right_value327 = (void*)0;
memset(&result_type_290, 0, sizeof(struct sType*));
memset(&n_291, 0, sizeof(int));
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&i_292, 0, sizeof(int));
right_value330 = (void*)0;
    # 1010 "18field.c"
    left_260=self->mLeft;
    # 1011 "18field.c"
    array_num_nodes_261=self->mArrayNum;
    # 1017 "18field.c"
    # 1013 "18field.c"
    if(_if_conditional324=!node_compile(left_260,info),    _if_conditional324) {
        # 1014 "18field.c"
        __result179__ = (_Bool)0;
        return __result179__;
    }
    # 1017 "18field.c"
    left_value_262=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value296,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1018 "18field.c"
    dec_stack_ptr(1,info);
    # 1024 "18field.c"
    # 1020 "18field.c"
    if(_if_conditional325=gComeDebug&&left_value_262->type->mPointerNum>0,    _if_conditional325) {
        # 1021 "18field.c"
        __dec_obj128=left_value_262->c_value;
        left_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value298=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value297=make_type_name_string(left_value_262->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_262->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 1024 "18field.c"
    left_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_clone(left_value_262->type))));
    come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1026 "18field.c"
    array_num_264=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value301=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value300=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1026, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value300,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value301,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1039 "18field.c"
    for(    o2_saved_265=(array_num_nodes_261),it_266=list$1sNodeph_begin((o2_saved_265));    !list$1sNodeph_end((o2_saved_265));    it_266=list$1sNodeph_next((o2_saved_265))    ){
        # 1033 "18field.c"
        # 1029 "18field.c"
        if(_if_conditional326=!node_compile(it_266,info),        _if_conditional326) {
            # 1030 "18field.c"
            __result180__ = (_Bool)0;
            come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result180__;
        }
        # 1033 "18field.c"
        c_value_267=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value302,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1034 "18field.c"
        dec_stack_ptr(1,info);
        # 1036 "18field.c"
        list$1CVALUEph_push_back(array_num_264,(struct CVALUE*)come_increment_ref_count(c_value_267));
        come_call_finalizer3(c_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1039 "18field.c"
    type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_value_262->type))));
    come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1041 "18field.c"
    fun_name_269="operator_load_element";
    # 1042 "18field.c"
    # 1050 "18field.c"
    # 1043 "18field.c"
    if(self->mQuote) {
        # 1044 "18field.c"
        calling_fun_270=(_Bool)0;
    }
    else {
        # 1047 "18field.c"
        calling_fun_270=operator_overload_fun(type_268,fun_name_269,left_value_262,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_264,0), "18field.c", 1047, 10)),self->mBreakGuard,info);
    }
    # 1203 "18field.c"
    # 1050 "18field.c"
    if(_if_conditional328=!calling_fun_270,    _if_conditional328) {
        # 1201 "18field.c"
        # 1051 "18field.c"
        if(_if_conditional329=gComeDebug&&left_value_262->var&&left_value_262->var->mType&&list$1sNodeph_length(left_value_262->var->mType->mArrayNum)>0,        _if_conditional329) {
            # 1053 "18field.c"
            var_type_271=left_value_262->var->mType;
            # 1054 "18field.c"
            result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_263))));
            come_call_finalizer3(right_value304,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1060 "18field.c"
            # 1056 "18field.c"
            if(result_type_272->mOriginalLoadVarType->v1) {
                # 1057 "18field.c"
                __dec_obj129=result_type_272;
                result_type_272=(struct sType*)come_increment_ref_count(result_type_272->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 1094 "18field.c"
            # 1060 "18field.c"
            if(_if_conditional331=list$1sNodeph_length(result_type_272->mArrayNum)>0,            _if_conditional331) {
                # 1061 "18field.c"
                n_273=list$1sNodeph_length(result_type_272->mArrayNum)-list$1CVALUEph_length(array_num_264);
                # 1083 "18field.c"
                # 1063 "18field.c"
                if(_if_conditional332=n_273==0,                _if_conditional332) {
                    # 1064 "18field.c"
                    __dec_obj130=result_type_272;
                    result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(left_type_263))));
                    come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value305,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1068 "18field.c"
                    # 1065 "18field.c"
                    if(left_type_263->mOriginalLoadVarType->v1) {
                        # 1066 "18field.c"
                        __dec_obj131=result_type_272;
                        result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(left_type_263->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1068 "18field.c"
                    list$1sNodeph_reset(result_type_272->mArrayNum);
                }
                else {
                    # 1083 "18field.c"
                    # 1070 "18field.c"
                    if(_if_conditional334=n_273>0,                    _if_conditional334) {
                        # 1074 "18field.c"
                        for(                        i_274=0;                        i_274<n_273;                        i_274++                        ){
                            # 1072 "18field.c"
                            list$1sNodeph_delete(result_type_272->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1083 "18field.c"
                        # 1075 "18field.c"
                        if(_if_conditional335=n_273<0,                        _if_conditional335) {
                            # 1076 "18field.c"
                            list$1sNodeph_reset(result_type_272->mArrayNum);
                            # 1077 "18field.c"
                            result_type_272->mPointerNum+=n_273;
                            # 1082 "18field.c"
                            # 1079 "18field.c"
                            if(_if_conditional336=result_type_272->mPointerNum<0,                            _if_conditional336) {
                                # 1080 "18field.c"
                                result_type_272->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1092 "18field.c"
                # 1085 "18field.c"
                if(_if_conditional337=result_type_272->mPointerNum>0,                _if_conditional337) {
                    # 1086 "18field.c"
                    result_type_272->mPointerNum-=list$1CVALUEph_length(array_num_264);
                    # 1091 "18field.c"
                    # 1088 "18field.c"
                    if(_if_conditional338=result_type_272->mPointerNum<0,                    _if_conditional338) {
                        # 1089 "18field.c"
                        result_type_272->mPointerNum=0;
                    }
                }
            }
            # 1094 "18field.c"
            come_value_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value307=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1094, "CVALUE"))));
            come_call_finalizer3(right_value307,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 1096 "18field.c"
            buf_276=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value309=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value308=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1096, "buffer"))))))));
            come_call_finalizer3(right_value308,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value309,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 1099 "18field.c"
            result_type2_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(result_type_272))));
            come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1100 "18field.c"
            result_type2_277->mPointerNum++;
            # 1104 "18field.c"
            buffer_append_str(buf_276,((char*)(right_value312=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value311=make_type_name_string(result_type2_277,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_262->c_value))));
            right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1109 "18field.c"
            for(            o2_saved_278=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_279=list$1CVALUEph_begin((o2_saved_278));            !list$1CVALUEph_end((o2_saved_278));            it_279=list$1CVALUEph_next((o2_saved_278))            ){
                # 1107 "18field.c"
                buffer_append_str(buf_276,((char*)(right_value313=xsprintf("[%s]",it_279->c_value))));
                right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_278,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            # 1109 "18field.c"
            buffer_append_str(buf_276,((char*)(right_value314=xsprintf(",%s,%s+(",left_value_262->c_value,left_value_262->c_value))));
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1110 "18field.c"
            i_280=0;
            # 1126 "18field.c"
            for(            o2_saved_281=(struct list$1sNodeph*)come_increment_ref_count((var_type_271->mArrayNum)),it_282=list$1sNodeph_begin((o2_saved_281));            !list$1sNodeph_end((o2_saved_281));            it_282=list$1sNodeph_next((o2_saved_281))            ){
                # 1117 "18field.c"
                # 1112 "18field.c"
                if(_if_conditional339=!node_compile(it_282,info),                _if_conditional339) {
                    # 1113 "18field.c"
                    err_msg(info,"invalid array num");
                    # 1114 "18field.c"
                    exit(1);
                }
                # 1117 "18field.c"
                come_value_283=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value315,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 1118 "18field.c"
                dec_stack_ptr(1,info);
                # 1120 "18field.c"
                buffer_append_str(buf_276,((char*)(right_value316=xsprintf("%s",come_value_283->c_value))));
                right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1124 "18field.c"
                # 1121 "18field.c"
                if(_if_conditional340=i_280!=list$1sNodeph_length(var_type_271->mArrayNum)-1,                _if_conditional340) {
                    # 1122 "18field.c"
                    buffer_append_str(buf_276,"*");
                }
                # 1124 "18field.c"
                i_280++;
                come_call_finalizer3(come_value_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_281,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            # 1126 "18field.c"
            buffer_append_str(buf_276,((char*)(right_value317=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1128 "18field.c"
            left_value_code_284=(char*)come_increment_ref_count(((char*)(right_value318=buffer_to_string(buf_276))));
            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1130 "18field.c"
            __dec_obj132=come_value_275->c_value;
            come_value_275->c_value=(char*)come_increment_ref_count(((char*)(right_value319=xsprintf("%s",left_value_code_284))));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1132 "18field.c"
            __dec_obj133=come_value_275->type;
            come_value_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_clone(result_type_272))));
            come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1133 "18field.c"
            come_value_275->var=((void*)0);
            # 1135 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
            # 1137 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_275->c_value);
            come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_284 = come_decrement_ref_count2(left_value_code_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1140 "18field.c"
            come_value_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1140, "CVALUE"))));
            come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 1142 "18field.c"
            buf_286=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1142, "buffer"))))))));
            come_call_finalizer3(right_value322,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value323,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 1144 "18field.c"
            buffer_append_str(buf_286,left_value_262->c_value);
            # 1150 "18field.c"
            for(            o2_saved_287=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_288=list$1CVALUEph_begin((o2_saved_287));            !list$1CVALUEph_end((o2_saved_287));            it_288=list$1CVALUEph_next((o2_saved_287))            ){
                # 1147 "18field.c"
                buffer_append_str(buf_286,((char*)(right_value324=xsprintf("[%s]",it_288->c_value))));
                right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_287,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            # 1150 "18field.c"
            left_value_code_289=(char*)come_increment_ref_count(((char*)(right_value325=buffer_to_string(buf_286))));
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1152 "18field.c"
            __dec_obj134=come_value_285->c_value;
            come_value_285->c_value=(char*)come_increment_ref_count(((char*)(right_value326=xsprintf("%s",left_value_code_289))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1154 "18field.c"
            result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(left_type_263))));
            come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1160 "18field.c"
            # 1156 "18field.c"
            if(result_type_290->mOriginalLoadVarType->v1) {
                # 1157 "18field.c"
                __dec_obj135=result_type_290;
                result_type_290=(struct sType*)come_increment_ref_count(result_type_290->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 1194 "18field.c"
            # 1160 "18field.c"
            if(_if_conditional342=list$1sNodeph_length(result_type_290->mArrayNum)>0,            _if_conditional342) {
                # 1161 "18field.c"
                n_291=list$1sNodeph_length(result_type_290->mArrayNum)-list$1CVALUEph_length(array_num_264);
                # 1183 "18field.c"
                # 1163 "18field.c"
                if(_if_conditional343=n_291==0,                _if_conditional343) {
                    # 1164 "18field.c"
                    __dec_obj136=result_type_290;
                    result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(left_type_263))));
                    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 1168 "18field.c"
                    # 1165 "18field.c"
                    if(left_type_263->mOriginalLoadVarType->v1) {
                        # 1166 "18field.c"
                        __dec_obj137=result_type_290;
                        result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=sType_clone(left_type_263->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value329,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 1168 "18field.c"
                    list$1sNodeph_reset(result_type_290->mArrayNum);
                }
                else {
                    # 1183 "18field.c"
                    # 1170 "18field.c"
                    if(_if_conditional345=n_291>0,                    _if_conditional345) {
                        # 1174 "18field.c"
                        for(                        i_292=0;                        i_292<n_291;                        i_292++                        ){
                            # 1172 "18field.c"
                            list$1sNodeph_delete(result_type_290->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        # 1183 "18field.c"
                        # 1175 "18field.c"
                        if(_if_conditional346=n_291<0,                        _if_conditional346) {
                            # 1176 "18field.c"
                            list$1sNodeph_reset(result_type_290->mArrayNum);
                            # 1177 "18field.c"
                            result_type_290->mPointerNum+=n_291;
                            # 1182 "18field.c"
                            # 1179 "18field.c"
                            if(_if_conditional347=result_type_290->mPointerNum<0,                            _if_conditional347) {
                                # 1180 "18field.c"
                                result_type_290->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                # 1192 "18field.c"
                # 1185 "18field.c"
                if(_if_conditional348=result_type_290->mPointerNum>0,                _if_conditional348) {
                    # 1186 "18field.c"
                    result_type_290->mPointerNum-=list$1CVALUEph_length(array_num_264);
                    # 1191 "18field.c"
                    # 1188 "18field.c"
                    if(_if_conditional349=result_type_290->mPointerNum<0,                    _if_conditional349) {
                        # 1189 "18field.c"
                        result_type_290->mPointerNum=0;
                    }
                }
            }
            # 1194 "18field.c"
            __dec_obj138=come_value_285->type;
            come_value_285->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(result_type_290))));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 1195 "18field.c"
            come_value_285->var=((void*)0);
            # 1197 "18field.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_285));
            # 1199 "18field.c"
            add_come_last_code(info,"%s;\n",come_value_285->c_value);
            come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_289 = come_decrement_ref_count2(left_value_code_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 1203 "18field.c"
    __result181__ = (_Bool)1;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result181__;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value331;
char* __dec_obj139;
void* right_value332;
struct list$1sNodeph* __dec_obj140;
void* right_value333;
struct sNode* __dec_obj141;
struct sLoadRangeArrayNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
    # 1215 "18field.c"
    self->sline=info->sline;
    # 1216 "18field.c"
    __dec_obj139=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string(info->sname))));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1218 "18field.c"
    __dec_obj140=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value332=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj140,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value332,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1220 "18field.c"
    __dec_obj141=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=sNode_clone(left))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1221 "18field.c"
    self->mQuote=quote;
    # 1224 "18field.c"
    __result182__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result182__;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLoadRangeArrayNode_terminated(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1226 "18field.c"
    __result183__ = (_Bool)0;
    return __result183__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__;
void* right_value334;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
    # 1231 "18field.c"
    __result184__ = __result_obj__ = ((char*)(right_value334=__builtin_string("sLoadRangeArrayNode")));
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result184__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_293;
struct list$1sNodeph* array_num_nodes_294;
_Bool _if_conditional353;
_Bool __result185__;
void* right_value335;
struct CVALUE* left_value_295;
void* right_value336;
struct sType* left_type_296;
void* right_value337;
void* right_value338;
struct list$1CVALUEph* array_num_297;
struct list$1sNodeph* o2_saved_298;
struct sNode* it_299;
_Bool _if_conditional354;
_Bool __result186__;
void* right_value339;
struct CVALUE* c_value_300;
void* right_value340;
struct sType* type_301;
char* fun_name_302;
_Bool calling_fun_303;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value341;
struct CVALUE* come_value_304;
void* right_value342;
void* right_value343;
struct buffer* buf_305;
struct list$1CVALUEph* o2_saved_306;
struct CVALUE* it_307;
void* right_value344;
void* right_value345;
char* left_value_code_308;
void* right_value346;
char* __dec_obj142;
void* right_value347;
struct sType* result_type_309;
_Bool _if_conditional357;
struct sType* __dec_obj143;
_Bool _if_conditional358;
int n_310;
_Bool _if_conditional359;
void* right_value348;
struct sType* __dec_obj144;
_Bool _if_conditional360;
void* right_value349;
struct sType* __dec_obj145;
_Bool _if_conditional361;
int i_311;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
void* right_value350;
struct sType* __dec_obj146;
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_293, 0, sizeof(struct sNode*));
memset(&array_num_nodes_294, 0, sizeof(struct list$1sNodeph*));
right_value335 = (void*)0;
memset(&left_value_295, 0, sizeof(struct CVALUE*));
right_value336 = (void*)0;
memset(&left_type_296, 0, sizeof(struct sType*));
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&array_num_297, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_298, 0, sizeof(struct list$1sNodeph*));
memset(&it_299, 0, sizeof(struct sNode*));
right_value339 = (void*)0;
memset(&c_value_300, 0, sizeof(struct CVALUE*));
right_value340 = (void*)0;
memset(&type_301, 0, sizeof(struct sType*));
memset(&fun_name_302, 0, sizeof(char*));
memset(&calling_fun_303, 0, sizeof(_Bool));
right_value341 = (void*)0;
memset(&come_value_304, 0, sizeof(struct CVALUE*));
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&buf_305, 0, sizeof(struct buffer*));
memset(&o2_saved_306, 0, sizeof(struct list$1CVALUEph*));
memset(&it_307, 0, sizeof(struct CVALUE*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&left_value_code_308, 0, sizeof(char*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&result_type_309, 0, sizeof(struct sType*));
memset(&n_310, 0, sizeof(int));
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&i_311, 0, sizeof(int));
right_value350 = (void*)0;
    # 1236 "18field.c"
    left_293=self->mLeft;
    # 1237 "18field.c"
    array_num_nodes_294=self->mArrayNum;
    # 1243 "18field.c"
    # 1239 "18field.c"
    if(_if_conditional353=!node_compile(left_293,info),    _if_conditional353) {
        # 1240 "18field.c"
        __result185__ = (_Bool)0;
        return __result185__;
    }
    # 1243 "18field.c"
    left_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value335,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 1244 "18field.c"
    dec_stack_ptr(1,info);
    # 1246 "18field.c"
    left_type_296=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(left_value_295->type))));
    come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1248 "18field.c"
    array_num_297=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value338=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value337=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1248, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value337,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value338,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1261 "18field.c"
    for(    o2_saved_298=(array_num_nodes_294),it_299=list$1sNodeph_begin((o2_saved_298));    !list$1sNodeph_end((o2_saved_298));    it_299=list$1sNodeph_next((o2_saved_298))    ){
        # 1255 "18field.c"
        # 1251 "18field.c"
        if(_if_conditional354=!node_compile(it_299,info),        _if_conditional354) {
            # 1252 "18field.c"
            __result186__ = (_Bool)0;
            come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result186__;
        }
        # 1255 "18field.c"
        c_value_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value339,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1256 "18field.c"
        dec_stack_ptr(1,info);
        # 1258 "18field.c"
        list$1CVALUEph_push_back(array_num_297,(struct CVALUE*)come_increment_ref_count(c_value_300));
        come_call_finalizer3(c_value_300,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1261 "18field.c"
    type_301=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(left_value_295->type))));
    come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 1263 "18field.c"
    fun_name_302="operator_load_range_element";
    # 1264 "18field.c"
    # 1272 "18field.c"
    # 1265 "18field.c"
    if(self->mQuote) {
        # 1266 "18field.c"
        calling_fun_303=(_Bool)0;
    }
    else {
        # 1269 "18field.c"
        calling_fun_303=operator_overload_fun2(type_301,fun_name_302,left_value_295,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_297,0), "18field.c", 1269, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_297,1), "18field.c", 1269, 12)),info);
    }
    # 1335 "18field.c"
    # 1272 "18field.c"
    if(_if_conditional356=!calling_fun_303,    _if_conditional356) {
        # 1273 "18field.c"
        come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1273, "CVALUE"))));
        come_call_finalizer3(right_value341,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 1275 "18field.c"
        buf_305=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value343=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value342=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1275, "buffer"))))))));
        come_call_finalizer3(right_value342,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 1277 "18field.c"
        buffer_append_str(buf_305,left_value_295->c_value);
        # 1283 "18field.c"
        for(        o2_saved_306=(struct list$1CVALUEph*)come_increment_ref_count((array_num_297)),it_307=list$1CVALUEph_begin((o2_saved_306));        !list$1CVALUEph_end((o2_saved_306));        it_307=list$1CVALUEph_next((o2_saved_306))        ){
            # 1280 "18field.c"
            buffer_append_str(buf_305,((char*)(right_value344=xsprintf("[%s]",it_307->c_value))));
            right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_306,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 1283 "18field.c"
        left_value_code_308=(char*)come_increment_ref_count(((char*)(right_value345=buffer_to_string(buf_305))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1285 "18field.c"
        __dec_obj142=come_value_304->c_value;
        come_value_304->c_value=(char*)come_increment_ref_count(((char*)(right_value346=xsprintf("%s",left_value_code_308))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1287 "18field.c"
        result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=sType_clone(left_type_296))));
        come_call_finalizer3(right_value347,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1293 "18field.c"
        # 1289 "18field.c"
        if(result_type_309->mOriginalLoadVarType->v1) {
            # 1290 "18field.c"
            __dec_obj143=result_type_309;
            result_type_309=(struct sType*)come_increment_ref_count(result_type_309->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 1327 "18field.c"
        # 1293 "18field.c"
        if(_if_conditional358=list$1sNodeph_length(result_type_309->mArrayNum)>0,        _if_conditional358) {
            # 1294 "18field.c"
            n_310=list$1sNodeph_length(result_type_309->mArrayNum)-list$1CVALUEph_length(array_num_297);
            # 1316 "18field.c"
            # 1296 "18field.c"
            if(_if_conditional359=n_310==0,            _if_conditional359) {
                # 1297 "18field.c"
                __dec_obj144=result_type_309;
                result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=sType_clone(left_type_296))));
                come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, __result_obj__);
                # 1301 "18field.c"
                # 1298 "18field.c"
                if(left_type_296->mOriginalLoadVarType->v1) {
                    # 1299 "18field.c"
                    __dec_obj145=result_type_309;
                    result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(left_type_296->mOriginalLoadVarType->v1))));
                    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 1301 "18field.c"
                list$1sNodeph_reset(result_type_309->mArrayNum);
            }
            else {
                # 1316 "18field.c"
                # 1303 "18field.c"
                if(_if_conditional361=n_310>0,                _if_conditional361) {
                    # 1307 "18field.c"
                    for(                    i_311=0;                    i_311<n_310;                    i_311++                    ){
                        # 1305 "18field.c"
                        list$1sNodeph_delete(result_type_309->mArrayNum,-1,-1);
                    }
                }
                else {
                    # 1316 "18field.c"
                    # 1308 "18field.c"
                    if(_if_conditional362=n_310<0,                    _if_conditional362) {
                        # 1309 "18field.c"
                        list$1sNodeph_reset(result_type_309->mArrayNum);
                        # 1310 "18field.c"
                        result_type_309->mPointerNum+=n_310;
                        # 1315 "18field.c"
                        # 1312 "18field.c"
                        if(_if_conditional363=result_type_309->mPointerNum<0,                        _if_conditional363) {
                            # 1313 "18field.c"
                            result_type_309->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            # 1325 "18field.c"
            # 1318 "18field.c"
            if(_if_conditional364=result_type_309->mPointerNum>0,            _if_conditional364) {
                # 1319 "18field.c"
                result_type_309->mPointerNum-=list$1CVALUEph_length(array_num_297);
                # 1324 "18field.c"
                # 1321 "18field.c"
                if(_if_conditional365=result_type_309->mPointerNum<0,                _if_conditional365) {
                    # 1322 "18field.c"
                    result_type_309->mPointerNum=0;
                }
            }
        }
        # 1327 "18field.c"
        __dec_obj146=come_value_304->type;
        come_value_304->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(result_type_309))));
        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 1328 "18field.c"
        come_value_304->var=((void*)0);
        # 1330 "18field.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_304));
        # 1332 "18field.c"
        add_come_last_code(info,"%s;\n",come_value_304->c_value);
        come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_308 = come_decrement_ref_count2(left_value_code_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 1335 "18field.c"
    __result187__ = (_Bool)1;
    come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result187__;
    come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1341 "18field.c"
    err_msg(info,"parse_method_call is failed");
    # 1342 "18field.c"
    exit(2);
    # 1344 "18field.c"
    __result188__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result188__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional28;
_Bool range_array_312;
char* p_313;
int sline_314;
_Bool _if_conditional366;
_Bool no_comma_315;
_Bool no_output_err_316;
_Bool no_output_come_code_317;
void* right_value351;
struct sNode* exp_318;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool quote_319;
_Bool _if_conditional369;
void* right_value352;
void* right_value353;
struct list$1sNodeph* array_num_320;
void* right_value354;
struct sNode* node2_321;
_Bool _if_conditional372;
void* right_value358;
struct sNode* node3_325;
int __exception_result_var_b1;
void* right_value359;
void* right_value360;
struct sNode* _inf_value1;
struct sLoadRangeArrayNode* _inf_obj_value1;
void* right_value365;
struct sNode* __dec_obj153;
_Bool _if_conditional382;
_Bool quote_327;
_Bool _if_conditional383;
_Bool range_328;
void* right_value366;
void* right_value367;
struct list$1sNodeph* array_num_329;
_Bool _while_condtional29;
_Bool range_array2_330;
char* p_331;
int sline_332;
_Bool _if_conditional384;
_Bool no_comma_333;
_Bool no_output_err_334;
_Bool no_output_come_code_335;
void* right_value368;
struct sNode* exp_336;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
void* right_value369;
struct sNode* node2_337;
_Bool _if_conditional388;
_Bool break_guard_338;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value370;
struct sNode* right_node_339;
void* right_value371;
void* right_value372;
struct sNode* _inf_value2;
struct sStoreArrayNode* _inf_obj_value2;
void* right_value378;
struct sNode* __dec_obj158;
void* right_value379;
void* right_value380;
struct sNode* _inf_value3;
struct sLoadArrayNode* _inf_obj_value3;
void* right_value385;
struct sNode* __dec_obj162;
_Bool _if_conditional412;
_Bool no_comma_342;
void* right_value386;
struct sNode* begin_343;
int __exception_result_var_b2;
void* right_value387;
struct sNode* end_344;
int __exception_result_var_b3;
void* right_value388;
void* right_value389;
struct sNode* _inf_value4;
struct sRangeCheckNode* _inf_obj_value4;
void* right_value395;
struct sNode* __dec_obj167;
_Bool _if_conditional423;
void* right_value396;
void* right_value397;
struct sNode* _inf_value5;
struct sNullCheckNode* _inf_obj_value5;
void* right_value401;
struct sNode* __dec_obj170;
_Bool _if_conditional431;
void* right_value402;
void* right_value403;
struct sNode* _inf_value6;
struct sNullableNode* _inf_obj_value6;
void* right_value407;
struct sNode* __dec_obj173;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value408;
void* right_value409;
void* right_value410;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* right_value414;
struct sNode* __dec_obj176;
void* right_value415;
char* field_name_349;
_Bool parse_method_generics_type_350;
char* p_351;
int sline_352;
_Bool _if_conditional448;
_Bool _if_conditional449;
void* right_value416;
char* word_353;
_Bool _if_conditional450;
_Bool _if_conditional451;
void* right_value417;
struct sNode* right_node_354;
void* right_value418;
void* right_value419;
struct sNode* _inf_value8;
struct sStoreFieldNode* _inf_obj_value8;
void* right_value425;
struct sNode* __dec_obj181;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value426;
void* right_value427;
struct sNode* __dec_obj182;
_Bool _if_conditional464;
void* right_value428;
void* right_value429;
struct sNode* __dec_obj183;
void* right_value430;
void* right_value431;
struct sNode* __dec_obj184;
void* right_value432;
void* right_value433;
struct sNode* _inf_value9;
struct sLoadFieldNode* _inf_obj_value9;
void* right_value438;
struct sNode* __dec_obj188;
void* right_value439;
struct sNode* node2_357;
_Bool _if_conditional473;
struct sNode* __dec_obj189;
struct sNode* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_312, 0, sizeof(_Bool));
memset(&p_313, 0, sizeof(char*));
memset(&sline_314, 0, sizeof(int));
memset(&no_comma_315, 0, sizeof(_Bool));
memset(&no_output_err_316, 0, sizeof(_Bool));
memset(&no_output_come_code_317, 0, sizeof(_Bool));
right_value351 = (void*)0;
memset(&exp_318, 0, sizeof(struct sNode*));
memset(&quote_319, 0, sizeof(_Bool));
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&array_num_320, 0, sizeof(struct list$1sNodeph*));
right_value354 = (void*)0;
memset(&node2_321, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
memset(&node3_325, 0, sizeof(struct sNode*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value365 = (void*)0;
memset(&quote_327, 0, sizeof(_Bool));
memset(&range_328, 0, sizeof(_Bool));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&array_num_329, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_330, 0, sizeof(_Bool));
memset(&p_331, 0, sizeof(char*));
memset(&sline_332, 0, sizeof(int));
memset(&no_comma_333, 0, sizeof(_Bool));
memset(&no_output_err_334, 0, sizeof(_Bool));
memset(&no_output_come_code_335, 0, sizeof(_Bool));
right_value368 = (void*)0;
memset(&exp_336, 0, sizeof(struct sNode*));
right_value369 = (void*)0;
memset(&node2_337, 0, sizeof(struct sNode*));
memset(&break_guard_338, 0, sizeof(_Bool));
right_value370 = (void*)0;
memset(&right_node_339, 0, sizeof(struct sNode*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value385 = (void*)0;
memset(&no_comma_342, 0, sizeof(_Bool));
right_value386 = (void*)0;
memset(&begin_343, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
memset(&end_344, 0, sizeof(struct sNode*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&field_name_349, 0, sizeof(char*));
memset(&parse_method_generics_type_350, 0, sizeof(_Bool));
memset(&p_351, 0, sizeof(char*));
memset(&sline_352, 0, sizeof(int));
right_value416 = (void*)0;
memset(&word_353, 0, sizeof(char*));
right_value417 = (void*)0;
memset(&right_node_354, 0, sizeof(struct sNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
memset(&node2_357, 0, sizeof(struct sNode*));
    # 1610 "18field.c"
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        # 1351 "18field.c"
        range_array_312=(_Bool)0;
        # 1380 "18field.c"
        {
            # 1353 "18field.c"
            p_313=info->p;
            # 1354 "18field.c"
            sline_314=info->sline;
            # 1376 "18field.c"
            # 1356 "18field.c"
            if(_if_conditional366=*info->p==91,            _if_conditional366) {
                # 1357 "18field.c"
                info->p++;
                # 1358 "18field.c"
                skip_spaces_and_lf(info);
                # 1360 "18field.c"
                no_comma_315=info->no_comma;
                # 1361 "18field.c"
                no_output_err_316=info->no_output_err;
                # 1362 "18field.c"
                no_output_come_code_317=info->no_output_come_code;
                # 1363 "18field.c"
                info->no_output_err=(_Bool)1;
                # 1364 "18field.c"
                info->no_comma=(_Bool)1;
                # 1365 "18field.c"
                info->no_output_come_code=(_Bool)1;
                # 1366 "18field.c"
                exp_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=expression_v13(info))));
                if(right_value351) { right_value351 = come_decrement_ref_count2(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1367 "18field.c"
                info->no_comma=no_comma_315;
                # 1368 "18field.c"
                info->no_output_err=no_output_err_316;
                # 1369 "18field.c"
                info->no_output_come_code=no_output_come_code_317;
                # 1374 "18field.c"
                # 1371 "18field.c"
                if(_if_conditional367=*info->p==46&&*(info->p+1)==46,                _if_conditional367) {
                    # 1372 "18field.c"
                    range_array_312=(_Bool)1;
                }
                if(exp_318) { exp_318 = come_decrement_ref_count2(exp_318, ((struct sNode*)exp_318)->finalize, ((struct sNode*)exp_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1376 "18field.c"
            info->p=p_313;
            # 1377 "18field.c"
            info->sline=sline_314;
        }
        # 1608 "18field.c"
        # 1380 "18field.c"
        if(_if_conditional368=range_array_312&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional368) {
            # 1381 "18field.c"
            quote_319=*info->p==92;
            # 1385 "18field.c"
            # 1382 "18field.c"
            if(quote_319) {
                # 1383 "18field.c"
                info->p++;
            }
            # 1385 "18field.c"
            info->p++;
            # 1386 "18field.c"
            skip_spaces_and_lf(info);
            # 1388 "18field.c"
            array_num_320=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value353=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value352=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1388, "list$1sNodeph"))))))));
            come_call_finalizer3(right_value352,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value353,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 1390 "18field.c"
            skip_pointer_attribute(info);
            # 1392 "18field.c"
            node2_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=expression_v13(info))));
            if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1394 "18field.c"
            list$1sNodeph_push_back(array_num_320,(struct sNode*)come_increment_ref_count(node2_321));
            # 1409 "18field.c"
            # 1396 "18field.c"
            if(_if_conditional372=*info->p==46&&*(info->p+1)==46,            _if_conditional372) {
                # 1397 "18field.c"
                info->p+=2;
                # 1398 "18field.c"
                skip_spaces_and_lf(info);
                # 1400 "18field.c"
                skip_pointer_attribute(info);
                # 1402 "18field.c"
                node3_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=expression_v13(info))));
                if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 1404 "18field.c"
                list$1sNodeph_push_back(array_num_320,(struct sNode*)come_increment_ref_count(node3_325));
                # 1406 "18field.c"
                (come_push_stackframe("18field.c", 1406, 13),__exception_result_var_b1=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b1);
                if(node3_325) { node3_325 = come_decrement_ref_count2(node3_325, ((struct sNode*)node3_325)->finalize, ((struct sNode*)node3_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 1409 "18field.c"
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1409, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value360=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value359=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1409, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_320),quote_319,info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value1->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value1->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value1->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj153=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=_inf_value1)));
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(right_value359,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value360,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer3(array_num_320,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_321) { node2_321 = come_decrement_ref_count2(node2_321, ((struct sNode*)node2_321)->finalize, ((struct sNode*)node2_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 1608 "18field.c"
            # 1411 "18field.c"
            if(_if_conditional382=!range_array_312&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional382) {
                # 1412 "18field.c"
                quote_327=*info->p==92;
                # 1417 "18field.c"
                # 1413 "18field.c"
                if(quote_327) {
                    # 1414 "18field.c"
                    info->p++;
                }
                # 1417 "18field.c"
                range_328=(_Bool)0;
                # 1418 "18field.c"
                array_num_329=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value367=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value366=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1418, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value366,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value367,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 1476 "18field.c"
                while(_while_condtional29=1,                _while_condtional29) {
                    # 1420 "18field.c"
                    range_array2_330=(_Bool)0;
                    # 1449 "18field.c"
                    {
                        # 1422 "18field.c"
                        p_331=info->p;
                        # 1423 "18field.c"
                        sline_332=info->sline;
                        # 1445 "18field.c"
                        # 1425 "18field.c"
                        if(_if_conditional384=*info->p==91,                        _if_conditional384) {
                            # 1426 "18field.c"
                            info->p++;
                            # 1427 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1429 "18field.c"
                            no_comma_333=info->no_comma;
                            # 1430 "18field.c"
                            no_output_err_334=info->no_output_err;
                            # 1431 "18field.c"
                            no_output_come_code_335=info->no_output_come_code;
                            # 1432 "18field.c"
                            info->no_output_err=(_Bool)1;
                            # 1433 "18field.c"
                            info->no_comma=(_Bool)1;
                            # 1434 "18field.c"
                            info->no_output_come_code=(_Bool)1;
                            # 1435 "18field.c"
                            exp_336=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=expression_v13(info))));
                            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1436 "18field.c"
                            info->no_comma=no_comma_333;
                            # 1437 "18field.c"
                            info->no_output_err=no_output_err_334;
                            # 1438 "18field.c"
                            info->no_output_come_code=no_output_come_code_335;
                            # 1443 "18field.c"
                            # 1440 "18field.c"
                            if(_if_conditional385=*info->p==46&&*(info->p+1)==46,                            _if_conditional385) {
                                # 1441 "18field.c"
                                range_array2_330=(_Bool)1;
                            }
                            if(exp_336) { exp_336 = come_decrement_ref_count2(exp_336, ((struct sNode*)exp_336)->finalize, ((struct sNode*)exp_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 1445 "18field.c"
                        info->p=p_331;
                        # 1446 "18field.c"
                        info->sline=sline_332;
                    }
                    # 1474 "18field.c"
                    # 1449 "18field.c"
                    if(range_array2_330) {
                        # 1450 "18field.c"
                        break;
                    }
                    else {
                        # 1474 "18field.c"
                        # 1452 "18field.c"
                        if(_if_conditional387=*info->p==91,                        _if_conditional387) {
                            # 1453 "18field.c"
                            info->p++;
                            # 1454 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1456 "18field.c"
                            skip_pointer_attribute(info);
                            # 1458 "18field.c"
                            node2_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=expression_v13(info))));
                            if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 1460 "18field.c"
                            list$1sNodeph_push_back(array_num_329,(struct sNode*)come_increment_ref_count(node2_337));
                            # 1470 "18field.c"
                            # 1462 "18field.c"
                            if(_if_conditional388=*info->p==93,                            _if_conditional388) {
                                # 1463 "18field.c"
                                info->p++;
                                # 1464 "18field.c"
                                skip_spaces_and_lf(info);
                            }
                            else {
                                # 1467 "18field.c"
                                err_msg(info,"require ] character");
                                # 1468 "18field.c"
                                exit(2);
                            }
                            if(node2_337) { node2_337 = come_decrement_ref_count2(node2_337, ((struct sNode*)node2_337)->finalize, ((struct sNode*)node2_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 1472 "18field.c"
                            break;
                        }
                    }
                }
                # 1476 "18field.c"
                break_guard_338=(_Bool)0;
                # 1483 "18field.c"
                # 1477 "18field.c"
                if(_if_conditional389=*info->p==63&&*(info->p+1)==63,                _if_conditional389) {
                    # 1478 "18field.c"
                    info->p+=2;
                    # 1479 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1480 "18field.c"
                    break_guard_338=(_Bool)1;
                }
                # 1498 "18field.c"
                # 1483 "18field.c"
                if(_if_conditional390=*info->p==61&&*(info->p+1)!=61,                _if_conditional390) {
                    # 1484 "18field.c"
                    info->p++;
                    # 1485 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1487 "18field.c"
                    parse_sharp_v5(info);
                    # 1489 "18field.c"
                    right_node_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=expression_v13(info))));
                    if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1491 "18field.c"
                    parse_sharp_v5(info);
                    # 1493 "18field.c"
                    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1493, "struct sNode");
                    _inf_obj_value2=come_increment_ref_count(((struct sStoreArrayNode*)(right_value372=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value371=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1493, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_339),(struct list$1sNodeph*)come_increment_ref_count(array_num_329),quote_327,info))));
                    _inf_value2->_protocol_obj=_inf_obj_value2;
                    _inf_value2->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value2->clone=(void*)sStoreArrayNode_clone;
                    _inf_value2->compile=(void*)sStoreArrayNode_compile;
                    _inf_value2->sline=(void*)sNodeBase_sline;
                    _inf_value2->sname=(void*)sNodeBase_sname;
                    _inf_value2->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value2->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj158=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=_inf_value2)));
                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value371,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value372,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_339) { right_node_339 = come_decrement_ref_count2(right_node_339, ((struct sNode*)right_node_339)->finalize, ((struct sNode*)right_node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1496 "18field.c"
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1496, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sLoadArrayNode*)(right_value380=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value379=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1496, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_329),quote_327,break_guard_338,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value3->clone=(void*)sLoadArrayNode_clone;
                    _inf_value3->compile=(void*)sLoadArrayNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value3->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj162=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=_inf_value3)));
                    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value379,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value380,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer3(array_num_329,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 1608 "18field.c"
                # 1499 "18field.c"
                if(_if_conditional412=*info->p==33&&*(info->p+1)==123,                _if_conditional412) {
                    # 1500 "18field.c"
                    info->p+=2;
                    # 1501 "18field.c"
                    skip_spaces_and_lf(info);
                    # 1503 "18field.c"
                    no_comma_342=info->no_comma;
                    # 1504 "18field.c"
                    info->no_comma=(_Bool)1;
                    # 1505 "18field.c"
                    begin_343=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=expression_v13(info))));
                    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1508 "18field.c"
                    info->no_comma=no_comma_342;
                    # 1508 "18field.c"
                    (come_push_stackframe("18field.c", 1508, 14),__exception_result_var_b2=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b2);
                    # 1510 "18field.c"
                    end_344=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=expression_v13(info))));
                    if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1512 "18field.c"
                    (come_push_stackframe("18field.c", 1512, 15),__exception_result_var_b3=expected_next_character(125,info), come_pop_stackframe(), __exception_result_var_b3);
                    # 1514 "18field.c"
                    parse_sharp_v5(info);
                    # 1516 "18field.c"
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1516, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sRangeCheckNode*)(right_value389=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value388=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1516, "sRangeCheckNode")))),node,begin_343,end_344,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value4->clone=(void*)sRangeCheckNode_clone;
                    _inf_value4->compile=(void*)sRangeCheckNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value4->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj167=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=_inf_value4)));
                    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value388,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value389,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_343) { begin_343 = come_decrement_ref_count2(begin_343, ((struct sNode*)begin_343)->finalize, ((struct sNode*)begin_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_344) { end_344 = come_decrement_ref_count2(end_344, ((struct sNode*)end_344)->finalize, ((struct sNode*)end_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1608 "18field.c"
                    # 1518 "18field.c"
                    if(_if_conditional423=*info->p==33&&*(info->p+1)!=61,                    _if_conditional423) {
                        # 1519 "18field.c"
                        info->p++;
                        # 1520 "18field.c"
                        skip_spaces_and_lf(info);
                        # 1522 "18field.c"
                        parse_sharp_v5(info);
                        # 1524 "18field.c"
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1524, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sNullCheckNode*)(right_value397=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value396=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1524, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value5->clone=(void*)sNullCheckNode_clone;
                        _inf_value5->compile=(void*)sNullCheckNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value5->kind=(void*)sNullCheckNode_kind;
                        __dec_obj170=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=_inf_value5)));
                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer3(right_value396,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value397,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        # 1608 "18field.c"
                        # 1526 "18field.c"
                        if(_if_conditional431=*info->p==63&&*(info->p+1)==63,                        _if_conditional431) {
                            # 1527 "18field.c"
                            info->p+=2;
                            # 1528 "18field.c"
                            skip_spaces_and_lf(info);
                            # 1530 "18field.c"
                            parse_sharp_v5(info);
                            # 1532 "18field.c"
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1532, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sNullableNode*)(right_value403=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value402=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1532, "sNullableNode")))),node,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sNullableNode_finalize;
                            _inf_value6->clone=(void*)sNullableNode_clone;
                            _inf_value6->compile=(void*)sNullableNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNullableNode_terminated;
                            _inf_value6->kind=(void*)sNullableNode_kind;
                            __dec_obj173=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=_inf_value6)));
                            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer3(right_value402,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value403,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        else {
                            # 1608 "18field.c"
                            # 1534 "18field.c"
                            if(_if_conditional439=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                            _if_conditional439) {
                                # 1544 "18field.c"
                                # 1535 "18field.c"
                                if(_if_conditional440=*info->p==46,                                _if_conditional440) {
                                    # 1536 "18field.c"
                                    info->p++;
                                    # 1537 "18field.c"
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    # 1540 "18field.c"
                                    info->p+=2;
                                    # 1541 "18field.c"
                                    skip_spaces_and_lf(info);
                                }
                                # 1544 "18field.c"
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1544, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sNullCheckNode*)(right_value410=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value408=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1544, "sNullCheckNode")))),((struct sNode*)(right_value409=sNode_clone(node))),(_Bool)1,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sNullCheckNode_finalize;
                                _inf_value7->clone=(void*)sNullCheckNode_clone;
                                _inf_value7->compile=(void*)sNullCheckNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNullCheckNode_terminated;
                                _inf_value7->kind=(void*)sNullCheckNode_kind;
                                __dec_obj176=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=_inf_value7)));
                                if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer3(right_value408,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                come_call_finalizer3(right_value410,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1546 "18field.c"
                                parse_sharp_v5(info);
                                # 1548 "18field.c"
                                field_name_349=(char*)come_increment_ref_count(((char*)(right_value415=parse_word(info))));
                                right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 1550 "18field.c"
                                parse_sharp_v5(info);
                                # 1552 "18field.c"
                                parse_method_generics_type_350=(_Bool)0;
                                # 1574 "18field.c"
                                {
                                    # 1554 "18field.c"
                                    p_351=info->p;
                                    # 1555 "18field.c"
                                    sline_352=info->sline;
                                    # 1570 "18field.c"
                                    # 1557 "18field.c"
                                    if(_if_conditional448=*info->p==60,                                    _if_conditional448) {
                                        # 1558 "18field.c"
                                        info->p++;
                                        # 1559 "18field.c"
                                        skip_spaces_and_lf(info);
                                        # 1568 "18field.c"
                                        # 1561 "18field.c"
                                        if(_if_conditional449=xisalpha(*info->p)||*info->p==95,                                        _if_conditional449) {
                                            # 1562 "18field.c"
                                            word_353=(char*)come_increment_ref_count(((char*)(right_value416=parse_word(info))));
                                            right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            # 1567 "18field.c"
                                            # 1564 "18field.c"
                                            if(_if_conditional450=is_type_name(word_353,info),                                            _if_conditional450) {
                                                # 1565 "18field.c"
                                                parse_method_generics_type_350=(_Bool)1;
                                            }
                                            word_353 = come_decrement_ref_count2(word_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    # 1570 "18field.c"
                                    info->p=p_351;
                                    # 1571 "18field.c"
                                    info->sline=sline_352;
                                }
                                # 1598 "18field.c"
                                # 1574 "18field.c"
                                if(_if_conditional451=*info->p==61&&*(info->p+1)!=61,                                _if_conditional451) {
                                    # 1575 "18field.c"
                                    info->p++;
                                    # 1576 "18field.c"
                                    skip_spaces_and_lf(info);
                                    # 1578 "18field.c"
                                    parse_sharp_v5(info);
                                    # 1580 "18field.c"
                                    right_node_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=expression_v13(info))));
                                    if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1582 "18field.c"
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1582, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sStoreFieldNode*)(right_value419=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value418=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1582, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_354),(char*)come_increment_ref_count(field_name_349),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sStoreFieldNode_finalize;
                                    _inf_value8->clone=(void*)sStoreFieldNode_clone;
                                    _inf_value8->compile=(void*)sStoreFieldNode_compile;
                                    _inf_value8->sline=(void*)sNodeBase_sline;
                                    _inf_value8->sname=(void*)sNodeBase_sname;
                                    _inf_value8->terminated=(void*)sStoreFieldNode_terminated;
                                    _inf_value8->kind=(void*)sStoreFieldNode_kind;
                                    __dec_obj181=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=_inf_value8)));
                                    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer3(right_value418,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value419,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    if(right_node_354) { right_node_354 = come_decrement_ref_count2(right_node_354, ((struct sNode*)right_node_354)->finalize, ((struct sNode*)right_node_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 1598 "18field.c"
                                    # 1584 "18field.c"
                                    if(_if_conditional462=*info->p==40||*info->p==123||parse_method_generics_type_350||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                    _if_conditional462) {
                                        # 1594 "18field.c"
                                        # 1585 "18field.c"
                                        if(_if_conditional463=string_operator_equals(field_name_349,"if"),                                        _if_conditional463) {
                                            # 1586 "18field.c"
                                            __dec_obj182=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=sNode_clone(node)))),info))));
                                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            # 1594 "18field.c"
                                            # 1588 "18field.c"
                                            if(_if_conditional464=string_operator_equals(field_name_349,"elif"),                                            _if_conditional464) {
                                                # 1589 "18field.c"
                                                __dec_obj183=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value429=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value428=sNode_clone(node)))),info))));
                                                if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                # 1592 "18field.c"
                                                __dec_obj184=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_349),info))));
                                                if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        # 1596 "18field.c"
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1596, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sLoadFieldNode*)(right_value433=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value432=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1596, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_349),info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sLoadFieldNode_finalize;
                                        _inf_value9->clone=(void*)sLoadFieldNode_clone;
                                        _inf_value9->compile=(void*)sLoadFieldNode_compile;
                                        _inf_value9->sline=(void*)sNodeBase_sline;
                                        _inf_value9->sname=(void*)sNodeBase_sname;
                                        _inf_value9->terminated=(void*)sLoadFieldNode_terminated;
                                        _inf_value9->kind=(void*)sLoadFieldNode_kind;
                                        __dec_obj188=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=_inf_value9)));
                                        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                        come_call_finalizer3(right_value432,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value433,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                }
                                field_name_349 = come_decrement_ref_count2(field_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 1600 "18field.c"
                                node2_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info))));
                                if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 1606 "18field.c"
                                # 1602 "18field.c"
                                if(_if_conditional473=node2_357==((void*)0),                                _if_conditional473) {
                                    # 1603 "18field.c"
                                    if(node2_357) { node2_357 = come_decrement_ref_count2(node2_357, ((struct sNode*)node2_357)->finalize, ((struct sNode*)node2_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    break;
                                }
                                # 1606 "18field.c"
                                __dec_obj189=node;
                                node=(struct sNode*)come_increment_ref_count(node2_357);
                                if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node2_357) { node2_357 = come_decrement_ref_count2(node2_357, ((struct sNode*)node2_357)->finalize, ((struct sNode*)node2_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        }
                    }
                }
            }
        }
    }
    # 1610 "18field.c"
    __result208__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result208__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional370;
void* right_value355;
struct list_item$1sNodeph* litem_322;
struct sNode* __dec_obj147;
_Bool _if_conditional371;
void* right_value356;
struct list_item$1sNodeph* litem_323;
struct sNode* __dec_obj148;
void* right_value357;
struct list_item$1sNodeph* litem_324;
struct sNode* __dec_obj149;
struct list$1sNodeph* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
memset(&litem_322, 0, sizeof(struct list_item$1sNodeph*));
right_value356 = (void*)0;
memset(&litem_323, 0, sizeof(struct list_item$1sNodeph*));
right_value357 = (void*)0;
memset(&litem_324, 0, sizeof(struct list_item$1sNodeph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional370=self->len==0,                _if_conditional370) {
                    # 217 "./neo-c.h"
                    litem_322=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value355=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 217, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value355,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_322->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_322->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj147=litem_322->item;
                    litem_322->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                    # 223 "./neo-c.h"
                    self->tail=litem_322;
                    # 224 "./neo-c.h"
                    self->head=litem_322;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional371=self->len==1,                    _if_conditional371) {
                        # 227 "./neo-c.h"
                        litem_323=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value356=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value356,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_323->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_323->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj148=litem_323->item;
                        litem_323->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                        # 233 "./neo-c.h"
                        self->tail=litem_323;
                        # 234 "./neo-c.h"
                        self->head->next=litem_323;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value357=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value357,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_324->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_324->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj149=litem_324->item;
                        litem_324->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                        # 243 "./neo-c.h"
                        self->tail->next=litem_324;
                        # 244 "./neo-c.h"
                        self->tail=litem_324;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result189__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result189__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional373;
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sLoadRangeArrayNode_finalize"
                # 0 "sLoadRangeArrayNode_finalize"
                if(_if_conditional373=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional373) {
                    # 0 "sLoadRangeArrayNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sLoadRangeArrayNode_finalize"
                # 1 "sLoadRangeArrayNode_finalize"
                if(_if_conditional374=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional374) {
                    # 1 "sLoadRangeArrayNode_finalize"
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sLoadRangeArrayNode_finalize"
                # 2 "sLoadRangeArrayNode_finalize"
                if(_if_conditional375=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional375) {
                    # 2 "sLoadRangeArrayNode_finalize"
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional376;
struct sLoadRangeArrayNode* __result190__;
void* right_value361;
struct sLoadRangeArrayNode* result_326;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value362;
char* __dec_obj150;
_Bool _if_conditional379;
void* right_value363;
struct sNode* __dec_obj151;
_Bool _if_conditional380;
void* right_value364;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional381;
struct sLoadRangeArrayNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
memset(&result_326, 0, sizeof(struct sLoadRangeArrayNode*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
                # 3 "sLoadRangeArrayNode_clone"
                # 2 "sLoadRangeArrayNode_clone"
                if(_if_conditional376=self==(void*)0,                _if_conditional376) {
                    # 2 "sLoadRangeArrayNode_clone"
                    __result190__ = __result_obj__ = (void*)0;
                    return __result190__;
                }
                # 3 "sLoadRangeArrayNode_clone"
                result_326=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value361=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer3(right_value361,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sLoadRangeArrayNode_clone"
                # 4 "sLoadRangeArrayNode_clone"
                if(_if_conditional377=self!=((void*)0),                _if_conditional377) {
                    # 4 "sLoadRangeArrayNode_clone"
                    result_326->sline=self->sline;
                }
                # 6 "sLoadRangeArrayNode_clone"
                # 5 "sLoadRangeArrayNode_clone"
                if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional378) {
                    # 5 "sLoadRangeArrayNode_clone"
                    __dec_obj150=result_326->sname;
                    result_326->sname=(char*)come_increment_ref_count(((char*)(right_value362=string_clone(self->sname))));
                    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sLoadRangeArrayNode_clone"
                # 6 "sLoadRangeArrayNode_clone"
                if(_if_conditional379=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional379) {
                    # 6 "sLoadRangeArrayNode_clone"
                    __dec_obj151=result_326->mLeft;
                    result_326->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=sNode_clone(self->mLeft))));
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 8 "sLoadRangeArrayNode_clone"
                # 7 "sLoadRangeArrayNode_clone"
                if(_if_conditional380=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional380) {
                    # 7 "sLoadRangeArrayNode_clone"
                    __dec_obj152=result_326->mArrayNum;
                    result_326->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value364=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj152,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value364,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 9 "sLoadRangeArrayNode_clone"
                # 8 "sLoadRangeArrayNode_clone"
                if(_if_conditional381=self!=((void*)0),                _if_conditional381) {
                    # 8 "sLoadRangeArrayNode_clone"
                    result_326->mQuote=self->mQuote;
                }
                # 9 "sLoadRangeArrayNode_clone"
                __result191__ = __result_obj__ = result_326;
                come_call_finalizer3(result_326,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result191__;
                come_call_finalizer3(result_326,sLoadRangeArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sStoreArrayNode_finalize"
                        # 0 "sStoreArrayNode_finalize"
                        if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional391) {
                            # 0 "sStoreArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sStoreArrayNode_finalize"
                        # 1 "sStoreArrayNode_finalize"
                        if(_if_conditional392=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional392) {
                            # 1 "sStoreArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sStoreArrayNode_finalize"
                        # 2 "sStoreArrayNode_finalize"
                        if(_if_conditional393=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional393) {
                            # 2 "sStoreArrayNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 4 "sStoreArrayNode_finalize"
                        # 3 "sStoreArrayNode_finalize"
                        if(_if_conditional394=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional394) {
                            # 3 "sStoreArrayNode_finalize"
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional395;
struct sStoreArrayNode* __result192__;
void* right_value373;
struct sStoreArrayNode* result_340;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value374;
char* __dec_obj154;
_Bool _if_conditional398;
void* right_value375;
struct sNode* __dec_obj155;
_Bool _if_conditional399;
void* right_value376;
struct sNode* __dec_obj156;
_Bool _if_conditional400;
void* right_value377;
struct list$1sNodeph* __dec_obj157;
_Bool _if_conditional401;
struct sStoreArrayNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
memset(&result_340, 0, sizeof(struct sStoreArrayNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
                        # 3 "sStoreArrayNode_clone"
                        # 2 "sStoreArrayNode_clone"
                        if(_if_conditional395=self==(void*)0,                        _if_conditional395) {
                            # 2 "sStoreArrayNode_clone"
                            __result192__ = __result_obj__ = (void*)0;
                            return __result192__;
                        }
                        # 3 "sStoreArrayNode_clone"
                        result_340=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value373=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer3(right_value373,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sStoreArrayNode_clone"
                        # 4 "sStoreArrayNode_clone"
                        if(_if_conditional396=self!=((void*)0),                        _if_conditional396) {
                            # 4 "sStoreArrayNode_clone"
                            result_340->sline=self->sline;
                        }
                        # 6 "sStoreArrayNode_clone"
                        # 5 "sStoreArrayNode_clone"
                        if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional397) {
                            # 5 "sStoreArrayNode_clone"
                            __dec_obj154=result_340->sname;
                            result_340->sname=(char*)come_increment_ref_count(((char*)(right_value374=string_clone(self->sname))));
                            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sStoreArrayNode_clone"
                        # 6 "sStoreArrayNode_clone"
                        if(_if_conditional398=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional398) {
                            # 6 "sStoreArrayNode_clone"
                            __dec_obj155=result_340->mLeft;
                            result_340->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=sNode_clone(self->mLeft))));
                            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sStoreArrayNode_clone"
                        # 7 "sStoreArrayNode_clone"
                        if(_if_conditional399=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional399) {
                            # 7 "sStoreArrayNode_clone"
                            __dec_obj156=result_340->mRight;
                            result_340->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=sNode_clone(self->mRight))));
                            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 9 "sStoreArrayNode_clone"
                        # 8 "sStoreArrayNode_clone"
                        if(_if_conditional400=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional400) {
                            # 8 "sStoreArrayNode_clone"
                            __dec_obj157=result_340->mArrayNum;
                            result_340->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value377=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj157,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value377,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        # 10 "sStoreArrayNode_clone"
                        # 9 "sStoreArrayNode_clone"
                        if(_if_conditional401=self!=((void*)0),                        _if_conditional401) {
                            # 9 "sStoreArrayNode_clone"
                            result_340->mQuote=self->mQuote;
                        }
                        # 10 "sStoreArrayNode_clone"
                        __result193__ = __result_obj__ = result_340;
                        come_call_finalizer3(result_340,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result193__;
                        come_call_finalizer3(result_340,sStoreArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sLoadArrayNode_finalize"
                        # 0 "sLoadArrayNode_finalize"
                        if(_if_conditional402=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional402) {
                            # 0 "sLoadArrayNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sLoadArrayNode_finalize"
                        # 1 "sLoadArrayNode_finalize"
                        if(_if_conditional403=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional403) {
                            # 1 "sLoadArrayNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sLoadArrayNode_finalize"
                        # 2 "sLoadArrayNode_finalize"
                        if(_if_conditional404=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional404) {
                            # 2 "sLoadArrayNode_finalize"
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional405;
struct sLoadArrayNode* __result194__;
void* right_value381;
struct sLoadArrayNode* result_341;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value382;
char* __dec_obj159;
_Bool _if_conditional408;
void* right_value383;
struct sNode* __dec_obj160;
_Bool _if_conditional409;
void* right_value384;
struct list$1sNodeph* __dec_obj161;
_Bool _if_conditional410;
_Bool _if_conditional411;
struct sLoadArrayNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_341, 0, sizeof(struct sLoadArrayNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
                        # 3 "sLoadArrayNode_clone"
                        # 2 "sLoadArrayNode_clone"
                        if(_if_conditional405=self==(void*)0,                        _if_conditional405) {
                            # 2 "sLoadArrayNode_clone"
                            __result194__ = __result_obj__ = (void*)0;
                            return __result194__;
                        }
                        # 3 "sLoadArrayNode_clone"
                        result_341=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value381=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer3(right_value381,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sLoadArrayNode_clone"
                        # 4 "sLoadArrayNode_clone"
                        if(_if_conditional406=self!=((void*)0),                        _if_conditional406) {
                            # 4 "sLoadArrayNode_clone"
                            result_341->sline=self->sline;
                        }
                        # 6 "sLoadArrayNode_clone"
                        # 5 "sLoadArrayNode_clone"
                        if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional407) {
                            # 5 "sLoadArrayNode_clone"
                            __dec_obj159=result_341->sname;
                            result_341->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sLoadArrayNode_clone"
                        # 6 "sLoadArrayNode_clone"
                        if(_if_conditional408=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional408) {
                            # 6 "sLoadArrayNode_clone"
                            __dec_obj160=result_341->mLeft;
                            result_341->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(self->mLeft))));
                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sLoadArrayNode_clone"
                        # 7 "sLoadArrayNode_clone"
                        if(_if_conditional409=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional409) {
                            # 7 "sLoadArrayNode_clone"
                            __dec_obj161=result_341->mArrayNum;
                            result_341->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value384=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj161,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value384,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        # 9 "sLoadArrayNode_clone"
                        # 8 "sLoadArrayNode_clone"
                        if(_if_conditional410=self!=((void*)0),                        _if_conditional410) {
                            # 8 "sLoadArrayNode_clone"
                            result_341->mQuote=self->mQuote;
                        }
                        # 10 "sLoadArrayNode_clone"
                        # 9 "sLoadArrayNode_clone"
                        if(_if_conditional411=self!=((void*)0),                        _if_conditional411) {
                            # 9 "sLoadArrayNode_clone"
                            result_341->mBreakGuard=self->mBreakGuard;
                        }
                        # 10 "sLoadArrayNode_clone"
                        __result195__ = __result_obj__ = result_341;
                        come_call_finalizer3(result_341,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result195__;
                        come_call_finalizer3(result_341,sLoadArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sRangeCheckNode_finalize"
                        # 0 "sRangeCheckNode_finalize"
                        if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional413) {
                            # 0 "sRangeCheckNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sRangeCheckNode_finalize"
                        # 1 "sRangeCheckNode_finalize"
                        if(_if_conditional414=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional414) {
                            # 1 "sRangeCheckNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sRangeCheckNode_finalize"
                        # 2 "sRangeCheckNode_finalize"
                        if(_if_conditional415=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional415) {
                            # 2 "sRangeCheckNode_finalize"
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 4 "sRangeCheckNode_finalize"
                        # 3 "sRangeCheckNode_finalize"
                        if(_if_conditional416=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional416) {
                            # 3 "sRangeCheckNode_finalize"
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional417;
struct sRangeCheckNode* __result196__;
void* right_value390;
struct sRangeCheckNode* result_345;
_Bool _if_conditional418;
_Bool _if_conditional419;
void* right_value391;
char* __dec_obj163;
_Bool _if_conditional420;
void* right_value392;
struct sNode* __dec_obj164;
_Bool _if_conditional421;
void* right_value393;
struct sNode* __dec_obj165;
_Bool _if_conditional422;
void* right_value394;
struct sNode* __dec_obj166;
struct sRangeCheckNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_345, 0, sizeof(struct sRangeCheckNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
                        # 3 "sRangeCheckNode_clone"
                        # 2 "sRangeCheckNode_clone"
                        if(_if_conditional417=self==(void*)0,                        _if_conditional417) {
                            # 2 "sRangeCheckNode_clone"
                            __result196__ = __result_obj__ = (void*)0;
                            return __result196__;
                        }
                        # 3 "sRangeCheckNode_clone"
                        result_345=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value390=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer3(right_value390,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sRangeCheckNode_clone"
                        # 4 "sRangeCheckNode_clone"
                        if(_if_conditional418=self!=((void*)0),                        _if_conditional418) {
                            # 4 "sRangeCheckNode_clone"
                            result_345->sline=self->sline;
                        }
                        # 6 "sRangeCheckNode_clone"
                        # 5 "sRangeCheckNode_clone"
                        if(_if_conditional419=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional419) {
                            # 5 "sRangeCheckNode_clone"
                            __dec_obj163=result_345->sname;
                            result_345->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->sname))));
                            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sRangeCheckNode_clone"
                        # 6 "sRangeCheckNode_clone"
                        if(_if_conditional420=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional420) {
                            # 6 "sRangeCheckNode_clone"
                            __dec_obj164=result_345->mLeft;
                            result_345->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=sNode_clone(self->mLeft))));
                            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 8 "sRangeCheckNode_clone"
                        # 7 "sRangeCheckNode_clone"
                        if(_if_conditional421=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional421) {
                            # 7 "sRangeCheckNode_clone"
                            __dec_obj165=result_345->mBegin;
                            result_345->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=sNode_clone(self->mBegin))));
                            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 9 "sRangeCheckNode_clone"
                        # 8 "sRangeCheckNode_clone"
                        if(_if_conditional422=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional422) {
                            # 8 "sRangeCheckNode_clone"
                            __dec_obj166=result_345->mEnd;
                            result_345->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=sNode_clone(self->mEnd))));
                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 9 "sRangeCheckNode_clone"
                        __result197__ = __result_obj__ = result_345;
                        come_call_finalizer3(result_345,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result197__;
                        come_call_finalizer3(result_345,sRangeCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullableNode_finalize(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional432;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sNullableNode_finalize"
                                # 0 "sNullableNode_finalize"
                                if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional432) {
                                    # 0 "sNullableNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sNullableNode_finalize"
                                # 1 "sNullableNode_finalize"
                                if(_if_conditional433=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional433) {
                                    # 1 "sNullableNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional434;
struct sNullableNode* __result200__;
void* right_value404;
struct sNullableNode* result_347;
_Bool _if_conditional435;
_Bool _if_conditional436;
void* right_value405;
char* __dec_obj171;
_Bool _if_conditional437;
void* right_value406;
struct sNode* __dec_obj172;
_Bool _if_conditional438;
struct sNullableNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value404 = (void*)0;
memset(&result_347, 0, sizeof(struct sNullableNode*));
right_value405 = (void*)0;
right_value406 = (void*)0;
                                # 3 "sNullableNode_clone"
                                # 2 "sNullableNode_clone"
                                if(_if_conditional434=self==(void*)0,                                _if_conditional434) {
                                    # 2 "sNullableNode_clone"
                                    __result200__ = __result_obj__ = (void*)0;
                                    return __result200__;
                                }
                                # 3 "sNullableNode_clone"
                                result_347=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value404=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"))));
                                come_call_finalizer3(right_value404,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sNullableNode_clone"
                                # 4 "sNullableNode_clone"
                                if(_if_conditional435=self!=((void*)0),                                _if_conditional435) {
                                    # 4 "sNullableNode_clone"
                                    result_347->sline=self->sline;
                                }
                                # 6 "sNullableNode_clone"
                                # 5 "sNullableNode_clone"
                                if(_if_conditional436=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional436) {
                                    # 5 "sNullableNode_clone"
                                    __dec_obj171=result_347->sname;
                                    result_347->sname=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->sname))));
                                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sNullableNode_clone"
                                # 6 "sNullableNode_clone"
                                if(_if_conditional437=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional437) {
                                    # 6 "sNullableNode_clone"
                                    __dec_obj172=result_347->mLeft;
                                    result_347->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->mLeft))));
                                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 8 "sNullableNode_clone"
                                # 7 "sNullableNode_clone"
                                if(_if_conditional438=self!=((void*)0),                                _if_conditional438) {
                                    # 7 "sNullableNode_clone"
                                    result_347->mOnlyNullCecker=self->mOnlyNullCecker;
                                }
                                # 8 "sNullableNode_clone"
                                __result201__ = __result_obj__ = result_347;
                                come_call_finalizer3(result_347,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result201__;
                                come_call_finalizer3(result_347,sNullableNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional441;
_Bool _if_conditional442;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sNullCheckNode_finalize"
                                    # 0 "sNullCheckNode_finalize"
                                    if(_if_conditional441=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional441) {
                                        # 0 "sNullCheckNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sNullCheckNode_finalize"
                                    # 1 "sNullCheckNode_finalize"
                                    if(_if_conditional442=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional442) {
                                        # 1 "sNullCheckNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional443;
struct sNullCheckNode* __result202__;
void* right_value411;
struct sNullCheckNode* result_348;
_Bool _if_conditional444;
_Bool _if_conditional445;
void* right_value412;
char* __dec_obj174;
_Bool _if_conditional446;
void* right_value413;
struct sNode* __dec_obj175;
_Bool _if_conditional447;
struct sNullCheckNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value411 = (void*)0;
memset(&result_348, 0, sizeof(struct sNullCheckNode*));
right_value412 = (void*)0;
right_value413 = (void*)0;
                                    # 3 "sNullCheckNode_clone"
                                    # 2 "sNullCheckNode_clone"
                                    if(_if_conditional443=self==(void*)0,                                    _if_conditional443) {
                                        # 2 "sNullCheckNode_clone"
                                        __result202__ = __result_obj__ = (void*)0;
                                        return __result202__;
                                    }
                                    # 3 "sNullCheckNode_clone"
                                    result_348=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value411=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                    come_call_finalizer3(right_value411,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sNullCheckNode_clone"
                                    # 4 "sNullCheckNode_clone"
                                    if(_if_conditional444=self!=((void*)0),                                    _if_conditional444) {
                                        # 4 "sNullCheckNode_clone"
                                        result_348->sline=self->sline;
                                    }
                                    # 6 "sNullCheckNode_clone"
                                    # 5 "sNullCheckNode_clone"
                                    if(_if_conditional445=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional445) {
                                        # 5 "sNullCheckNode_clone"
                                        __dec_obj174=result_348->sname;
                                        result_348->sname=(char*)come_increment_ref_count(((char*)(right_value412=string_clone(self->sname))));
                                        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sNullCheckNode_clone"
                                    # 6 "sNullCheckNode_clone"
                                    if(_if_conditional446=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional446) {
                                        # 6 "sNullCheckNode_clone"
                                        __dec_obj175=result_348->mLeft;
                                        result_348->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=sNode_clone(self->mLeft))));
                                        if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 8 "sNullCheckNode_clone"
                                    # 7 "sNullCheckNode_clone"
                                    if(_if_conditional447=self!=((void*)0),                                    _if_conditional447) {
                                        # 7 "sNullCheckNode_clone"
                                        result_348->mOnlyNullCecker=self->mOnlyNullCecker;
                                    }
                                    # 8 "sNullCheckNode_clone"
                                    __result203__ = __result_obj__ = result_348;
                                    come_call_finalizer3(result_348,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result203__;
                                    come_call_finalizer3(result_348,sNullCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
_Bool _if_conditional455;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sStoreFieldNode_finalize"
                                        # 0 "sStoreFieldNode_finalize"
                                        if(_if_conditional452=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional452) {
                                            # 0 "sStoreFieldNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sStoreFieldNode_finalize"
                                        # 1 "sStoreFieldNode_finalize"
                                        if(_if_conditional453=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional453) {
                                            # 1 "sStoreFieldNode_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sStoreFieldNode_finalize"
                                        # 2 "sStoreFieldNode_finalize"
                                        if(_if_conditional454=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional454) {
                                            # 2 "sStoreFieldNode_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 4 "sStoreFieldNode_finalize"
                                        # 3 "sStoreFieldNode_finalize"
                                        if(_if_conditional455=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional455) {
                                            # 3 "sStoreFieldNode_finalize"
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional456;
struct sStoreFieldNode* __result204__;
void* right_value420;
struct sStoreFieldNode* result_355;
_Bool _if_conditional457;
_Bool _if_conditional458;
void* right_value421;
char* __dec_obj177;
_Bool _if_conditional459;
void* right_value422;
struct sNode* __dec_obj178;
_Bool _if_conditional460;
void* right_value423;
struct sNode* __dec_obj179;
_Bool _if_conditional461;
void* right_value424;
char* __dec_obj180;
struct sStoreFieldNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value420 = (void*)0;
memset(&result_355, 0, sizeof(struct sStoreFieldNode*));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
                                        # 3 "sStoreFieldNode_clone"
                                        # 2 "sStoreFieldNode_clone"
                                        if(_if_conditional456=self==(void*)0,                                        _if_conditional456) {
                                            # 2 "sStoreFieldNode_clone"
                                            __result204__ = __result_obj__ = (void*)0;
                                            return __result204__;
                                        }
                                        # 3 "sStoreFieldNode_clone"
                                        result_355=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value420=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                        come_call_finalizer3(right_value420,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sStoreFieldNode_clone"
                                        # 4 "sStoreFieldNode_clone"
                                        if(_if_conditional457=self!=((void*)0),                                        _if_conditional457) {
                                            # 4 "sStoreFieldNode_clone"
                                            result_355->sline=self->sline;
                                        }
                                        # 6 "sStoreFieldNode_clone"
                                        # 5 "sStoreFieldNode_clone"
                                        if(_if_conditional458=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional458) {
                                            # 5 "sStoreFieldNode_clone"
                                            __dec_obj177=result_355->sname;
                                            result_355->sname=(char*)come_increment_ref_count(((char*)(right_value421=string_clone(self->sname))));
                                            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sStoreFieldNode_clone"
                                        # 6 "sStoreFieldNode_clone"
                                        if(_if_conditional459=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional459) {
                                            # 6 "sStoreFieldNode_clone"
                                            __dec_obj178=result_355->mLeft;
                                            result_355->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=sNode_clone(self->mLeft))));
                                            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 8 "sStoreFieldNode_clone"
                                        # 7 "sStoreFieldNode_clone"
                                        if(_if_conditional460=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional460) {
                                            # 7 "sStoreFieldNode_clone"
                                            __dec_obj179=result_355->mRight;
                                            result_355->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=sNode_clone(self->mRight))));
                                            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 9 "sStoreFieldNode_clone"
                                        # 8 "sStoreFieldNode_clone"
                                        if(_if_conditional461=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional461) {
                                            # 8 "sStoreFieldNode_clone"
                                            __dec_obj180=result_355->mName;
                                            result_355->mName=(char*)come_increment_ref_count(((char*)(right_value424=string_clone(self->mName))));
                                            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sStoreFieldNode_clone"
                                        __result205__ = __result_obj__ = result_355;
                                        come_call_finalizer3(result_355,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result205__;
                                        come_call_finalizer3(result_355,sStoreFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sLoadFieldNode_finalize"
                                            # 0 "sLoadFieldNode_finalize"
                                            if(_if_conditional465=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional465) {
                                                # 0 "sLoadFieldNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sLoadFieldNode_finalize"
                                            # 1 "sLoadFieldNode_finalize"
                                            if(_if_conditional466=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional466) {
                                                # 1 "sLoadFieldNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sLoadFieldNode_finalize"
                                            # 2 "sLoadFieldNode_finalize"
                                            if(_if_conditional467=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional467) {
                                                # 2 "sLoadFieldNode_finalize"
                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional468;
struct sLoadFieldNode* __result206__;
void* right_value434;
struct sLoadFieldNode* result_356;
_Bool _if_conditional469;
_Bool _if_conditional470;
void* right_value435;
char* __dec_obj185;
_Bool _if_conditional471;
void* right_value436;
struct sNode* __dec_obj186;
_Bool _if_conditional472;
void* right_value437;
char* __dec_obj187;
struct sLoadFieldNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value434 = (void*)0;
memset(&result_356, 0, sizeof(struct sLoadFieldNode*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
                                            # 3 "sLoadFieldNode_clone"
                                            # 2 "sLoadFieldNode_clone"
                                            if(_if_conditional468=self==(void*)0,                                            _if_conditional468) {
                                                # 2 "sLoadFieldNode_clone"
                                                __result206__ = __result_obj__ = (void*)0;
                                                return __result206__;
                                            }
                                            # 3 "sLoadFieldNode_clone"
                                            result_356=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value434=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                            come_call_finalizer3(right_value434,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sLoadFieldNode_clone"
                                            # 4 "sLoadFieldNode_clone"
                                            if(_if_conditional469=self!=((void*)0),                                            _if_conditional469) {
                                                # 4 "sLoadFieldNode_clone"
                                                result_356->sline=self->sline;
                                            }
                                            # 6 "sLoadFieldNode_clone"
                                            # 5 "sLoadFieldNode_clone"
                                            if(_if_conditional470=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional470) {
                                                # 5 "sLoadFieldNode_clone"
                                                __dec_obj185=result_356->sname;
                                                result_356->sname=(char*)come_increment_ref_count(((char*)(right_value435=string_clone(self->sname))));
                                                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value435 = come_decrement_ref_count2(right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sLoadFieldNode_clone"
                                            # 6 "sLoadFieldNode_clone"
                                            if(_if_conditional471=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional471) {
                                                # 6 "sLoadFieldNode_clone"
                                                __dec_obj186=result_356->mLeft;
                                                result_356->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=sNode_clone(self->mLeft))));
                                                if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 8 "sLoadFieldNode_clone"
                                            # 7 "sLoadFieldNode_clone"
                                            if(_if_conditional472=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional472) {
                                                # 7 "sLoadFieldNode_clone"
                                                __dec_obj187=result_356->mName;
                                                result_356->mName=(char*)come_increment_ref_count(((char*)(right_value437=string_clone(self->mName))));
                                                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 8 "sLoadFieldNode_clone"
                                            __result207__ = __result_obj__ = result_356;
                                            come_call_finalizer3(result_356,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result207__;
                                            come_call_finalizer3(result_356,sLoadFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

