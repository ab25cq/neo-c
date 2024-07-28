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
    struct list$1sNodeph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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

struct sNode* parse_enum(char* type_name, struct sInfo* info);

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);

_Bool compiletime_get_exception_value(struct sInfo* info);

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

char* sStoreFieldNode_kind(struct sStoreFieldNode* self);

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
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

char* sNullCheckNode_kind(struct sNullCheckNode* self);

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);

char* sNullableNode_kind(struct sNullableNode* self);

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

char* sRangeCheckNode_kind(struct sRangeCheckNode* self);

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

char* sLoadFieldNode_kind(struct sLoadFieldNode* self);

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

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

char* sLoadArrayNode_kind(struct sLoadArrayNode* self);

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

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










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
struct sType* __exception_result_var_b74;
void* right_value114;
struct sType* generics_type_47;
_Bool _if_conditional114;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
char* fun_name2_80;
struct sFun* operator_fun_81;
_Bool _if_conditional115;
int __exception_result_var_b75;
_Bool _if_conditional117;
void* right_value115;
char* __exception_result_var_b76;
char* none_generics_name_82;
void* right_value116;
struct sType* __exception_result_var_b77;
struct sType* obj_type_83;
void* right_value117;
char* __exception_result_var_b78;
char* __dec_obj36;
void* right_value118;
char* __exception_result_var_b79;
char* fun_name3_84;
struct sGenericsFun* __exception_result_var_b82;
struct sGenericsFun* generics_fun_85;
_Bool _if_conditional132;
void* right_value119;
char* __exception_result_var_b83;
_Bool __exception_result_var_b84;
_Bool _if_conditional133;
_Bool __result76__;
struct sFun* __exception_result_var_b88;
void* right_value120;
char* __exception_result_var_b89;
char* __dec_obj37;
int i_91;
void* right_value121;
char* __exception_result_var_b90;
char* new_fun_name_92;
struct sFun* __exception_result_var_b91;
_Bool _if_conditional153;
void* right_value122;
char* __exception_result_var_b92;
char* __dec_obj38;
_Bool _if_conditional154;
struct sFun* __exception_result_var_b93;
_Bool result_93;
_Bool _if_conditional155;
void* right_value123;
struct CVALUE* come_value_94;
char* left_value2_95;
void* right_value124;
void* right_value125;
struct sType* __exception_result_var_b95;
_Bool __exception_result_var_b96;
struct sType* __exception_result_var_b97;
_Bool _if_conditional160;
struct sType* __exception_result_var_b98;
void* right_value126;
char* __exception_result_var_b99;
char* __dec_obj39;
char* __exception_result_var_b100;
void* right_value127;
char* __dec_obj40;
char* middle_value2_99;
void* right_value128;
void* right_value129;
struct sType* __exception_result_var_b101;
_Bool __exception_result_var_b102;
struct sType* __exception_result_var_b103;
_Bool _if_conditional161;
struct sType* __exception_result_var_b104;
void* right_value130;
char* __exception_result_var_b105;
char* __dec_obj41;
char* __exception_result_var_b106;
void* right_value131;
char* __dec_obj42;
char* right_value2_100;
void* right_value132;
void* right_value133;
struct sType* __exception_result_var_b107;
_Bool __exception_result_var_b108;
struct sType* __exception_result_var_b109;
_Bool _if_conditional162;
struct sType* __exception_result_var_b110;
void* right_value134;
char* __exception_result_var_b111;
char* __dec_obj43;
char* __exception_result_var_b112;
void* right_value135;
char* __dec_obj44;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
char* __dec_obj45;
struct sType* __exception_result_var_b113;
void* right_value141;
struct sType* result_type1_101;
void* right_value142;
struct sType* __exception_result_var_b114;
struct sType* result_type2_102;
struct sType* __exception_result_var_b115;
void* right_value143;
struct sType* __dec_obj46;
_Bool _if_conditional163;
void* right_value144;
char* __exception_result_var_b116;
char* __dec_obj47;
_Bool _if_conditional164;
void* right_value145;
char* __exception_result_var_b117;
void* right_value146;
char* __exception_result_var_b118;
char* __dec_obj48;
void* right_value147;
char* __exception_result_var_b119;
char* __dec_obj49;
struct list$1CVALUEph* __exception_result_var_b120;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&generics_type_47, 0, sizeof(struct sType*));
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
memset(&generics_fun_85, 0, sizeof(struct sGenericsFun*));
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
    generics_type_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=(come_push_stackframe("18field.c", 5, 1162),__exception_result_var_b74=sType_clone(type), come_pop_stackframe(), __exception_result_var_b74))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type_47, "18field.c", 7, 1163)), "18field.c", 7, 1164))->mNoSolvedGenericsType, "18field.c", 7, 1165)), "18field.c", 7, 1166))->v1) {
        __dec_obj35=generics_type_47;
        generics_type_47=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type_47, "18field.c", 8, 1167)), "18field.c", 8, 1168))->mNoSolvedGenericsType, "18field.c", 8, 1169)), "18field.c", 8, 1170))->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_78=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 11, 1171)), "18field.c", 11, 1172))->mClass;
    class_name_79=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_78, "18field.c", 12, 1173)), "18field.c", 12, 1174))->mName;
    operator_fun_81=((void*)0);
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 17, 1175)), "18field.c", 17, 1176))->mNoSolvedGenericsType, "18field.c", 17, 1177)), "18field.c", 17, 1178))->v1) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 18, 1179)), "18field.c", 18, 1180))->mNoSolvedGenericsType, "18field.c", 18, 1181)), "18field.c", 18, 1182))->v1;
    }
    if(_if_conditional117=(come_push_stackframe("18field.c", 21, 1189),__exception_result_var_b75=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 21, 1183)), "18field.c", 21, 1184))->mGenericsTypes, "18field.c", 21, 1185)), "18field.c", 21, 1186))), come_pop_stackframe(), __exception_result_var_b75)>0,    _if_conditional117) {
        none_generics_name_82=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 22, 1194),__exception_result_var_b76=((char*)(right_value115=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 22, 1190)), "18field.c", 22, 1191))->mClass, "18field.c", 22, 1192)), "18field.c", 22, 1193))->mName))), come_pop_stackframe(), __exception_result_var_b76));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_83=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 24, 1197),__exception_result_var_b77=((struct sType*)(right_value116=solve_generics(type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 24, 1195)), "18field.c", 24, 1196))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b77));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 26, 1198),__exception_result_var_b78=((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b78));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_84=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 27, 1199),__exception_result_var_b79=((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))), come_pop_stackframe(), __exception_result_var_b79));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_85=(come_push_stackframe("18field.c", 29, 1263),__exception_result_var_b82=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 29, 1200)), "18field.c", 29, 1201))->generics_funcs, "18field.c", 29, 1202)), "18field.c", 29, 1203)),fun_name3_84,((void*)0)), come_pop_stackframe(), __exception_result_var_b82);
        if(generics_fun_85) {
            if(_if_conditional133=!(come_push_stackframe("18field.c", 32, 1265),__exception_result_var_b84=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("18field.c", 32, 1264),__exception_result_var_b83=((char*)(right_value119=__builtin_string(fun_name2_80))), come_pop_stackframe(), __exception_result_var_b83)),generics_fun_85,obj_type_83,info), come_pop_stackframe(), __exception_result_var_b84),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional133) {
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
        }
        operator_fun_81=(come_push_stackframe("18field.c", 37, 1348),__exception_result_var_b88=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 37, 1266)), "18field.c", 37, 1267))->funcs,fun_name2_80), come_pop_stackframe(), __exception_result_var_b88);
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 40, 1349),__exception_result_var_b89=((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b89));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_91=128-1;        i_91>=1;        i_91--        ){
            new_fun_name_92=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 44, 1350),__exception_result_var_b90=((char*)(right_value121=xsprintf("%s_v%d",fun_name2_80,i_91))), come_pop_stackframe(), __exception_result_var_b90));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_81=(come_push_stackframe("18field.c", 45, 1353),__exception_result_var_b91=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 45, 1351)), "18field.c", 45, 1352))->funcs,new_fun_name_92), come_pop_stackframe(), __exception_result_var_b91);
            if(operator_fun_81) {
                __dec_obj38=fun_name2_80;
                fun_name2_80=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 48, 1354),__exception_result_var_b92=((char*)(right_value122=__builtin_string(new_fun_name_92))), come_pop_stackframe(), __exception_result_var_b92));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional154=operator_fun_81==((void*)0),        _if_conditional154) {
            operator_fun_81=(come_push_stackframe("18field.c", 54, 1357),__exception_result_var_b93=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 54, 1355)), "18field.c", 54, 1356))->funcs,fun_name2_80), come_pop_stackframe(), __exception_result_var_b93);
        }
    }
    result_93=(_Bool)0;
    if(operator_fun_81) {
        come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer3(right_value123,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 63, 1382),__exception_result_var_b96=check_assign_type(((char*)(right_value125=xsprintf("\%s is assigned to",((char*)(right_value124=string_to_string(fun_name2_80)))))),(come_push_stackframe("18field.c", 63, 1379),__exception_result_var_b95=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 63, 1366)), "18field.c", 63, 1367))->mParamTypes, "18field.c", 63, 1368)),0), "18field.c", 63, 1378)), come_pop_stackframe(), __exception_result_var_b95),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 63, 1380)), "18field.c", 63, 1381))->type,left_value,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b96);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional160=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("18field.c", 64, 1387),__exception_result_var_b97=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 64, 1383)), "18field.c", 64, 1384))->mParamTypes, "18field.c", 64, 1385)),0), "18field.c", 64, 1386)), come_pop_stackframe(), __exception_result_var_b97), "18field.c", 64, 1388)), "18field.c", 64, 1389))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 64, 1390)), "18field.c", 64, 1391))->type, "18field.c", 64, 1392)), "18field.c", 64, 1393))->mHeap,        _if_conditional160) {
            (come_push_stackframe("18field.c", 65,1401),std_move((come_push_stackframe("18field.c", 65, 1398),__exception_result_var_b98=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 65, 1394)), "18field.c", 65, 1395))->mParamTypes, "18field.c", 65, 1396)),0), "18field.c", 65, 1397)), come_pop_stackframe(), __exception_result_var_b98),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 65, 1399)), "18field.c", 65, 1400))->type,left_value,info),come_pop_stackframe());
            __dec_obj39=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 66, 1404),__exception_result_var_b99=((char*)(right_value126=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 66, 1402)), "18field.c", 66, 1403))->c_value))), come_pop_stackframe(), __exception_result_var_b99));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj40=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value127=(come_push_stackframe("18field.c", 69, 1407),__exception_result_var_b100=string_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 69, 1405)), "18field.c", 69, 1406))->c_value), come_pop_stackframe(), __exception_result_var_b100))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("18field.c", 72, 1415),__exception_result_var_b102=check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_80)))))),(come_push_stackframe("18field.c", 72, 1412),__exception_result_var_b101=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 72, 1408)), "18field.c", 72, 1409))->mParamTypes, "18field.c", 72, 1410)),1), "18field.c", 72, 1411)), come_pop_stackframe(), __exception_result_var_b101),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 72, 1413)), "18field.c", 72, 1414))->type,middle_value,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b102);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional161=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("18field.c", 73, 1420),__exception_result_var_b103=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 73, 1416)), "18field.c", 73, 1417))->mParamTypes, "18field.c", 73, 1418)),1), "18field.c", 73, 1419)), come_pop_stackframe(), __exception_result_var_b103), "18field.c", 73, 1421)), "18field.c", 73, 1422))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 73, 1423)), "18field.c", 73, 1424))->type, "18field.c", 73, 1425)), "18field.c", 73, 1426))->mHeap,        _if_conditional161) {
            (come_push_stackframe("18field.c", 74,1434),std_move((come_push_stackframe("18field.c", 74, 1431),__exception_result_var_b104=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 74, 1427)), "18field.c", 74, 1428))->mParamTypes, "18field.c", 74, 1429)),1), "18field.c", 74, 1430)), come_pop_stackframe(), __exception_result_var_b104),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 74, 1432)), "18field.c", 74, 1433))->type,middle_value,info),come_pop_stackframe());
            __dec_obj41=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 75, 1437),__exception_result_var_b105=((char*)(right_value130=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 75, 1435)), "18field.c", 75, 1436))->c_value))), come_pop_stackframe(), __exception_result_var_b105));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj42=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value131=(come_push_stackframe("18field.c", 78, 1440),__exception_result_var_b106=string_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 78, 1438)), "18field.c", 78, 1439))->c_value), come_pop_stackframe(), __exception_result_var_b106))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("18field.c", 81, 1448),__exception_result_var_b108=check_assign_type(((char*)(right_value133=xsprintf("\%s is assigned to",((char*)(right_value132=string_to_string(fun_name2_80)))))),(come_push_stackframe("18field.c", 81, 1445),__exception_result_var_b107=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 81, 1441)), "18field.c", 81, 1442))->mParamTypes, "18field.c", 81, 1443)),2), "18field.c", 81, 1444)), come_pop_stackframe(), __exception_result_var_b107),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 81, 1446)), "18field.c", 81, 1447))->type,right_value,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b108);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional162=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("18field.c", 82, 1453),__exception_result_var_b109=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 82, 1449)), "18field.c", 82, 1450))->mParamTypes, "18field.c", 82, 1451)),2), "18field.c", 82, 1452)), come_pop_stackframe(), __exception_result_var_b109), "18field.c", 82, 1454)), "18field.c", 82, 1455))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 82, 1456)), "18field.c", 82, 1457))->type, "18field.c", 82, 1458)), "18field.c", 82, 1459))->mHeap,        _if_conditional162) {
            (come_push_stackframe("18field.c", 83,1467),std_move((come_push_stackframe("18field.c", 83, 1464),__exception_result_var_b110=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 83, 1460)), "18field.c", 83, 1461))->mParamTypes, "18field.c", 83, 1462)),2), "18field.c", 83, 1463)), come_pop_stackframe(), __exception_result_var_b110),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 83, 1465)), "18field.c", 83, 1466))->type,right_value,info),come_pop_stackframe());
            __dec_obj43=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 84, 1470),__exception_result_var_b111=((char*)(right_value134=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 84, 1468)), "18field.c", 84, 1469))->c_value))), come_pop_stackframe(), __exception_result_var_b111));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj44=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value135=(come_push_stackframe("18field.c", 87, 1473),__exception_result_var_b112=string_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 87, 1471)), "18field.c", 87, 1472))->c_value), come_pop_stackframe(), __exception_result_var_b112))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj45=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 90, 1474)), "18field.c", 90, 1475))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 90, 1474)), "18field.c", 90, 1475))->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value136=string_to_string(fun_name2_80))),((char*)(right_value137=string_to_string(left_value2_95))),((char*)(right_value138=string_to_string(middle_value2_99))),((char*)(right_value139=string_to_string(right_value2_100)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type1_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=(come_push_stackframe("18field.c", 92, 1478),__exception_result_var_b113=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_81, "18field.c", 92, 1476)), "18field.c", 92, 1477))->mResultType), come_pop_stackframe(), __exception_result_var_b113))));
        come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type2_102=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 94, 1479),__exception_result_var_b114=((struct sType*)(right_value142=solve_generics(result_type1_101,generics_type_47,info))), come_pop_stackframe(), __exception_result_var_b114));
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj46=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 96, 1480)), "18field.c", 96, 1481))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 96, 1480)), "18field.c", 96, 1481))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(come_push_stackframe("18field.c", 96, 1482),__exception_result_var_b115=sType_clone(result_type2_102), come_pop_stackframe(), __exception_result_var_b115))));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 97, 1483)), "18field.c", 97, 1484))->var=((void*)0);
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_102, "18field.c", 99, 1485)), "18field.c", 99, 1486))->mHeap) {
            __dec_obj47=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 100, 1487)), "18field.c", 100, 1488))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 100, 1487)), "18field.c", 100, 1488))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 100, 1491),__exception_result_var_b116=((char*)(right_value144=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 100, 1489)), "18field.c", 100, 1490))->c_value,(struct sType*)come_increment_ref_count(result_type2_102),info))), come_pop_stackframe(), __exception_result_var_b116));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional164=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_102, "18field.c", 103, 1492)), "18field.c", 103, 1493))->mGuardValue&&((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_102, "18field.c", 103, 1494)), "18field.c", 103, 1495))->mPointerNum>0,        _if_conditional164) {
            __dec_obj48=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 104, 1496)), "18field.c", 104, 1497))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 104, 1496)), "18field.c", 104, 1497))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 104, 1506),__exception_result_var_b118=((char*)(right_value146=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("18field.c", 104, 1498),__exception_result_var_b117=((char*)(right_value145=make_type_name_string(result_type2_102,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b117), "18field.c", 104, 1499)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 104, 1500)), "18field.c", 104, 1501))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 104, 1502)), "18field.c", 104, 1503))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 104, 1504)), "18field.c", 104, 1505))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b118));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj49=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 107, 1507)), "18field.c", 107, 1508))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 107, 1507)), "18field.c", 107, 1508))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 107, 1513),__exception_result_var_b119=((char*)(right_value147=append_stackframe(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 107, 1509)), "18field.c", 107, 1510))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 107, 1511)), "18field.c", 107, 1512))->type,info))), come_pop_stackframe(), __exception_result_var_b119));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 109,1516),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "18field.c", 109, 1514)), "18field.c", 109, 1515))->c_value),come_pop_stackframe());
        (come_push_stackframe("18field.c", 111, 1569),__exception_result_var_b120=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 111, 1517)), "18field.c", 111, 1518))->stack, "18field.c", 111, 1519)), "18field.c", 111, 1520)),(struct CVALUE*)come_increment_ref_count(come_value_94)), come_pop_stackframe(), __exception_result_var_b120);
        result_93=(_Bool)1;
        come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_95 = come_decrement_ref_count2(left_value2_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_99 = come_decrement_ref_count2(middle_value2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_100 = come_decrement_ref_count2(right_value2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_101,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_102,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result84__ = result_93;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional19;
struct sType* __result52__;
void* right_value79;
struct sType* result_48;
_Bool _if_conditional37;
_Bool _if_conditional38;
struct list$1sTypeph* __exception_result_var_b54;
void* right_value86;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional42;
struct tuple1$1sTypeph* __exception_result_var_b56;
void* right_value89;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional46;
struct tuple1$1sTypeph* __exception_result_var_b57;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
char* __exception_result_var_b58;
void* right_value91;
char* __dec_obj19;
_Bool _if_conditional48;
struct list$1sTypeph* __exception_result_var_b59;
void* right_value92;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional49;
struct list$1sNodeph* __exception_result_var_b63;
void* right_value100;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct list$1sTypeph* __exception_result_var_b64;
void* right_value101;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional64;
struct list$1charph* __exception_result_var_b68;
void* right_value108;
struct list$1charph* __dec_obj29;
_Bool _if_conditional68;
struct tuple1$1sTypeph* __exception_result_var_b69;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional69;
_Bool _if_conditional70;
struct sNode* __exception_result_var_b70;
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
_Bool _if_conditional96;
_Bool _if_conditional97;
struct sNode* __exception_result_var_b71;
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
char* __exception_result_var_b72;
void* right_value112;
char* __dec_obj33;
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
char* __exception_result_var_b73;
void* right_value113;
char* __dec_obj34;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&result_48, 0, sizeof(struct sType*));
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
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        result_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value79,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 4, 653)), "sType_clone", 4, 654))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 655)), "sType_clone", 4, 656))->mClass;
        }
        if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 657)), "sType_clone", 5, 658))->mMultipleTypes!=((void*)0),        _if_conditional38) {
            __dec_obj15=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 5, 659)), "sType_clone", 5, 660))->mMultipleTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 5, 659)), "sType_clone", 5, 660))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=(come_push_stackframe("sType_clone", 5, 726),__exception_result_var_b54=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 661)), "sType_clone", 5, 662))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b54))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 731)), "sType_clone", 6, 732))->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            __dec_obj17=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 6, 733)), "sType_clone", 6, 734))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 6, 733)), "sType_clone", 6, 734))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(come_push_stackframe("sType_clone", 6, 748),__exception_result_var_b56=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 735)), "sType_clone", 6, 736))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b56))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 749)), "sType_clone", 7, 750))->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            __dec_obj18=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 7, 751)), "sType_clone", 7, 752))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 7, 751)), "sType_clone", 7, 752))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(come_push_stackframe("sType_clone", 7, 755),__exception_result_var_b57=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 753)), "sType_clone", 7, 754))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b57))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 756)), "sType_clone", 8, 757))->mGenericsName!=((void*)0),        _if_conditional47) {
            __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 8, 758)), "sType_clone", 8, 759))->mGenericsName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 8, 758)), "sType_clone", 8, 759))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=(come_push_stackframe("sType_clone", 8, 762),__exception_result_var_b58=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 760)), "sType_clone", 8, 761))->mGenericsName), come_pop_stackframe(), __exception_result_var_b58))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 763)), "sType_clone", 9, 764))->mGenericsTypes!=((void*)0),        _if_conditional48) {
            __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 9, 765)), "sType_clone", 9, 766))->mGenericsTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 9, 765)), "sType_clone", 9, 766))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=(come_push_stackframe("sType_clone", 9, 769),__exception_result_var_b59=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 767)), "sType_clone", 9, 768))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b59))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 770)), "sType_clone", 10, 771))->mArrayNum!=((void*)0),        _if_conditional49) {
            __dec_obj24=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 10, 772)), "sType_clone", 10, 773))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 10, 772)), "sType_clone", 10, 773))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=(come_push_stackframe("sType_clone", 10, 873),__exception_result_var_b63=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 774)), "sType_clone", 10, 775))->mArrayNum), come_pop_stackframe(), __exception_result_var_b63))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 11, 878)), "sType_clone", 11, 879))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 880)), "sType_clone", 11, 881))->mOmitArrayNum;
        }
        if(_if_conditional63=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 882)), "sType_clone", 12, 883))->mParamTypes!=((void*)0),        _if_conditional63) {
            __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 12, 884)), "sType_clone", 12, 885))->mParamTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 12, 884)), "sType_clone", 12, 885))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=(come_push_stackframe("sType_clone", 12, 888),__exception_result_var_b64=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 886)), "sType_clone", 12, 887))->mParamTypes), come_pop_stackframe(), __exception_result_var_b64))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional64=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 889)), "sType_clone", 13, 890))->mParamNames!=((void*)0),        _if_conditional64) {
            __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 13, 891)), "sType_clone", 13, 892))->mParamNames;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 13, 891)), "sType_clone", 13, 892))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=(come_push_stackframe("sType_clone", 13, 958),__exception_result_var_b68=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 893)), "sType_clone", 13, 894))->mParamNames), come_pop_stackframe(), __exception_result_var_b68))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional68=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 963)), "sType_clone", 14, 964))->mResultType!=((void*)0),        _if_conditional68) {
            __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 14, 965)), "sType_clone", 14, 966))->mResultType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 14, 965)), "sType_clone", 14, 966))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=(come_push_stackframe("sType_clone", 14, 969),__exception_result_var_b69=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 967)), "sType_clone", 14, 968))->mResultType), come_pop_stackframe(), __exception_result_var_b69))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 15, 970)), "sType_clone", 15, 971))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 972)), "sType_clone", 15, 973))->mVarArgs;
        }
        if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 974)), "sType_clone", 16, 975))->mAlignas!=((void*)0),        _if_conditional70) {
            __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 16, 976)), "sType_clone", 16, 977))->mAlignas;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 16, 976)), "sType_clone", 16, 977))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=(come_push_stackframe("sType_clone", 16, 980),__exception_result_var_b70=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 978)), "sType_clone", 16, 979))->mAlignas), come_pop_stackframe(), __exception_result_var_b70))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 17, 981)), "sType_clone", 17, 982))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 983)), "sType_clone", 17, 984))->mUnsigned;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 18, 985)), "sType_clone", 18, 986))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 987)), "sType_clone", 18, 988))->mShort;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 19, 989)), "sType_clone", 19, 990))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 991)), "sType_clone", 19, 992))->mLong;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 20, 993)), "sType_clone", 20, 994))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 995)), "sType_clone", 20, 996))->mLongLong;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 21, 997)), "sType_clone", 21, 998))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 999)), "sType_clone", 21, 1000))->mConstant;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 22, 1001)), "sType_clone", 22, 1002))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1003)), "sType_clone", 22, 1004))->mRegister;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 23, 1005)), "sType_clone", 23, 1006))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1007)), "sType_clone", 23, 1008))->mVolatile;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 24, 1009)), "sType_clone", 24, 1010))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1011)), "sType_clone", 24, 1012))->mStatic;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 25, 1013)), "sType_clone", 25, 1014))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1015)), "sType_clone", 25, 1016))->mUniq;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 26, 1017)), "sType_clone", 26, 1018))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1019)), "sType_clone", 26, 1020))->mRecord;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 27, 1021)), "sType_clone", 27, 1022))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1023)), "sType_clone", 27, 1024))->mExtern;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 28, 1025)), "sType_clone", 28, 1026))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1027)), "sType_clone", 28, 1028))->mRestrict;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 29, 1029)), "sType_clone", 29, 1030))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1031)), "sType_clone", 29, 1032))->mImmutable;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 30, 1033)), "sType_clone", 30, 1034))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1035)), "sType_clone", 30, 1036))->mHeap;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 31, 1037)), "sType_clone", 31, 1038))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1039)), "sType_clone", 31, 1040))->mDummyHeap;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 32, 1041)), "sType_clone", 32, 1042))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1043)), "sType_clone", 32, 1044))->mDelegate;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 33, 1045)), "sType_clone", 33, 1046))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1047)), "sType_clone", 33, 1048))->mShare;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 34, 1049)), "sType_clone", 34, 1050))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1051)), "sType_clone", 34, 1052))->mClone;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 35, 1053)), "sType_clone", 35, 1054))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1055)), "sType_clone", 35, 1056))->mNoHeap;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 36, 1057)), "sType_clone", 36, 1058))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1059)), "sType_clone", 36, 1060))->mNoCallingDestructor;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 37, 1061)), "sType_clone", 37, 1062))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1063)), "sType_clone", 37, 1064))->mRefference;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 38, 1065)), "sType_clone", 38, 1066))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1067)), "sType_clone", 38, 1068))->mException;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 39, 1069)), "sType_clone", 39, 1070))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1071)), "sType_clone", 39, 1072))->mPointerNum;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 40, 1073)), "sType_clone", 40, 1074))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1075)), "sType_clone", 40, 1076))->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 41, 1077)), "sType_clone", 41, 1078))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1079)), "sType_clone", 41, 1080))->mNoArrayPointerNum;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 42, 1081)), "sType_clone", 42, 1082))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1083)), "sType_clone", 42, 1084))->mTypedefOriginalPointerNum;
        }
        if(_if_conditional97=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1085)), "sType_clone", 43, 1086))->mSizeNum!=((void*)0),        _if_conditional97) {
            __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 43, 1087)), "sType_clone", 43, 1088))->mSizeNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 43, 1087)), "sType_clone", 43, 1088))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=(come_push_stackframe("sType_clone", 43, 1091),__exception_result_var_b71=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1089)), "sType_clone", 43, 1090))->mSizeNum), come_pop_stackframe(), __exception_result_var_b71))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 44, 1092)), "sType_clone", 44, 1093))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1094)), "sType_clone", 44, 1095))->mDynamicArrayNum;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 45, 1096)), "sType_clone", 45, 1097))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1098)), "sType_clone", 45, 1099))->mTypeOfExpression;
        }
        if(_if_conditional100=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1100)), "sType_clone", 46, 1101))->mOriginalTypeName!=((void*)0),        _if_conditional100) {
            __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 46, 1102)), "sType_clone", 46, 1103))->mOriginalTypeName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 46, 1102)), "sType_clone", 46, 1103))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=(come_push_stackframe("sType_clone", 46, 1106),__exception_result_var_b72=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1104)), "sType_clone", 46, 1105))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b72))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 47, 1107)), "sType_clone", 47, 1108))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1109)), "sType_clone", 47, 1110))->mOriginalPointerNum;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 48, 1111)), "sType_clone", 48, 1112))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1113)), "sType_clone", 48, 1114))->mFunctionParam;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 49, 1115)), "sType_clone", 49, 1116))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1117)), "sType_clone", 49, 1118))->mAllocaValue;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 50, 1119)), "sType_clone", 50, 1120))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1121)), "sType_clone", 50, 1122))->mGenericsStruct;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 51, 1123)), "sType_clone", 51, 1124))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1125)), "sType_clone", 51, 1126))->mSolvedGenericsName;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 52, 1127)), "sType_clone", 52, 1128))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1129)), "sType_clone", 52, 1130))->mComeMemCore;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 53, 1131)), "sType_clone", 53, 1132))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1133)), "sType_clone", 53, 1134))->mInline;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 54, 1135)), "sType_clone", 54, 1136))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1137)), "sType_clone", 54, 1138))->mNullValue;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 55, 1139)), "sType_clone", 55, 1140))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1141)), "sType_clone", 55, 1142))->mGuardValue;
        }
        if(_if_conditional110=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1143)), "sType_clone", 56, 1144))->mAsmName!=((void*)0),        _if_conditional110) {
            __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 56, 1145)), "sType_clone", 56, 1146))->mAsmName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 56, 1145)), "sType_clone", 56, 1146))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=(come_push_stackframe("sType_clone", 56, 1149),__exception_result_var_b73=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1147)), "sType_clone", 56, 1148))->mAsmName), come_pop_stackframe(), __exception_result_var_b73))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 57, 1150)), "sType_clone", 57, 1151))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1152)), "sType_clone", 57, 1153))->mArrayPointerType;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 58, 1154)), "sType_clone", 58, 1155))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1156)), "sType_clone", 58, 1157))->mLambdaArray;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_48, "sType_clone", 59, 1158)), "sType_clone", 59, 1159))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1160)), "sType_clone", 59, 1161))->mNoNumberArray;
        }
        __result69__ = __result_obj__ = result_48;
        come_call_finalizer3(result_48,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer3(result_48,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 573)), "sType_finalize", 0, 574))->mMultipleTypes!=((void*)0),            _if_conditional20) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 575)), "sType_finalize", 0, 576))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 585)), "sType_finalize", 1, 586))->mNoSolvedGenericsType!=((void*)0),            _if_conditional22) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 587)), "sType_finalize", 1, 588))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 593)), "sType_finalize", 2, 594))->mOriginalLoadVarType!=((void*)0),            _if_conditional24) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 595)), "sType_finalize", 2, 596))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 597)), "sType_finalize", 3, 598))->mGenericsName!=((void*)0),            _if_conditional25) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 599)), "sType_finalize", 3, 600))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 599)), "sType_finalize", 3, 600))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 601)), "sType_finalize", 4, 602))->mGenericsTypes!=((void*)0),            _if_conditional26) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 603)), "sType_finalize", 4, 604))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 605)), "sType_finalize", 5, 606))->mArrayNum!=((void*)0),            _if_conditional27) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 607)), "sType_finalize", 5, 608))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 617)), "sType_finalize", 6, 618))->mParamTypes!=((void*)0),            _if_conditional29) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 619)), "sType_finalize", 6, 620))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 621)), "sType_finalize", 7, 622))->mParamNames!=((void*)0),            _if_conditional30) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 623)), "sType_finalize", 7, 624))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 633)), "sType_finalize", 8, 634))->mResultType!=((void*)0),            _if_conditional32) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 635)), "sType_finalize", 8, 636))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 637)), "sType_finalize", 9, 638))->mAlignas!=((void*)0),            _if_conditional33) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 639)), "sType_finalize", 9, 640))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 639)), "sType_finalize", 9, 640))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 639)), "sType_finalize", 9, 640))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 639)), "sType_finalize", 9, 640))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 639)), "sType_finalize", 9, 640))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 641)), "sType_finalize", 10, 642))->mSizeNum!=((void*)0),            _if_conditional34) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 643)), "sType_finalize", 10, 644))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 643)), "sType_finalize", 10, 644))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 643)), "sType_finalize", 10, 644))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 643)), "sType_finalize", 10, 644))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 643)), "sType_finalize", 10, 644))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 645)), "sType_finalize", 11, 646))->mOriginalTypeName!=((void*)0),            _if_conditional35) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 647)), "sType_finalize", 11, 648))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 647)), "sType_finalize", 11, 648))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 649)), "sType_finalize", 12, 650))->mAsmName!=((void*)0),            _if_conditional36) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 651)), "sType_finalize", 12, 652))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 651)), "sType_finalize", 12, 652))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_49;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sTypeph*));
                    it_49=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 577)), "./neo-c.h", 120, 578))->head;
                    while(_while_condtional7=it_49!=((void*)0),                    _while_condtional7) {
                        prev_it_50=it_49;
                        it_49=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_49, "./neo-c.h", 123, 579)), "./neo-c.h", 123, 580))->next;
                        come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional21=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 581)), "list_item$1sTypephp_finalize", 0, 582))->item!=((void*)0),                            _if_conditional21) {
                                come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 583)), "list_item$1sTypephp_finalize", 0, 584))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional23=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 589)), "tuple1$1sTypephp_finalize", 0, 590))->v1!=((void*)0),                    _if_conditional23) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 591)), "tuple1$1sTypephp_finalize", 0, 592))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_51;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sNodeph*));
                    it_51=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 609)), "./neo-c.h", 120, 610))->head;
                    while(_while_condtional8=it_51!=((void*)0),                    _while_condtional8) {
                        prev_it_52=it_51;
                        it_51=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_51, "./neo-c.h", 123, 611)), "./neo-c.h", 123, 612))->next;
                        come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional28=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 613)), "list_item$1sNodephp_finalize", 0, 614))->item!=((void*)0),                            _if_conditional28) {
                                if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 615)), "list_item$1sNodephp_finalize", 0, 616))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 615)), "list_item$1sNodephp_finalize", 0, 616))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 615)), "list_item$1sNodephp_finalize", 0, 616))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 615)), "list_item$1sNodephp_finalize", 0, 616))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 615)), "list_item$1sNodephp_finalize", 0, 616))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_53;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                    it_53=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 625)), "./neo-c.h", 120, 626))->head;
                    while(_while_condtional9=it_53!=((void*)0),                    _while_condtional9) {
                        prev_it_54=it_53;
                        it_53=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_53, "./neo-c.h", 123, 627)), "./neo-c.h", 123, 628))->next;
                        come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional31=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 629)), "list_item$1charphp_finalize", 0, 630))->item!=((void*)0),                            _if_conditional31) {
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 631)), "list_item$1charphp_finalize", 0, 632))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 631)), "list_item$1charphp_finalize", 0, 632))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sTypeph* __result53__;
void* right_value80;
void* right_value81;
struct list$1sTypeph* __exception_result_var_b51;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
_Bool _while_condtional10;
struct sType* __exception_result_var_b52;
void* right_value85;
struct list$1sTypeph* __exception_result_var_b53;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_55=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 671),__exception_result_var_b51=((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 663)), "./neo-c.h", 139, 664)))))), come_pop_stackframe(), __exception_result_var_b51));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_56=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 672)), "./neo-c.h", 141, 673))->head;
                while(_while_condtional10=it_56!=((void*)0),                _while_condtional10) {
                    (come_push_stackframe("./neo-c.h", 143, 723),__exception_result_var_b53=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_55, "./neo-c.h", 143, 674)), "./neo-c.h", 143, 675)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=(come_push_stackframe("./neo-c.h", 143, 722),__exception_result_var_b52=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_56, "./neo-c.h", 143, 720)), "./neo-c.h", 143, 721))->item), come_pop_stackframe(), __exception_result_var_b52))))), come_pop_stackframe(), __exception_result_var_b53);
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_56=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_56, "./neo-c.h", 145, 724)), "./neo-c.h", 145, 725))->next;
                }
                __result56__ = __result_obj__ = result_55;
                come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 665)), "./neo-c.h", 101, 666))->head=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 667)), "./neo-c.h", 102, 668))->tail=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 669)), "./neo-c.h", 103, 670))->len=0;
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value82;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj12;
_Bool _if_conditional41;
void* right_value83;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj13;
void* right_value84;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj14;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value83 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional40=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 676)), "./neo-c.h", 152, 677))->len==0,                        _if_conditional40) {
                            litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 155, 678)), "./neo-c.h", 155, 679))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 156, 680)), "./neo-c.h", 156, 681))->next=((void*)0);
                            __dec_obj12=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 157, 682)), "./neo-c.h", 157, 683))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 157, 682)), "./neo-c.h", 157, 683))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 684)), "./neo-c.h", 159, 685))->tail=litem_57;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 686)), "./neo-c.h", 160, 687))->head=litem_57;
                        }
                        else {
                            if(_if_conditional41=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 688)), "./neo-c.h", 162, 689))->len==1,                            _if_conditional41) {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 165, 690)), "./neo-c.h", 165, 691))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 692)), "./neo-c.h", 165, 693))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 166, 694)), "./neo-c.h", 166, 695))->next=((void*)0);
                                __dec_obj13=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 167, 696)), "./neo-c.h", 167, 697))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 167, 696)), "./neo-c.h", 167, 697))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 698)), "./neo-c.h", 169, 699))->tail=litem_58;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 700)), "./neo-c.h", 170, 701))->head, "./neo-c.h", 170, 702)), "./neo-c.h", 170, 703))->next=litem_58;
                            }
                            else {
                                litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 175, 704)), "./neo-c.h", 175, 705))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 706)), "./neo-c.h", 175, 707))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 176, 708)), "./neo-c.h", 176, 709))->next=((void*)0);
                                __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 177, 710)), "./neo-c.h", 177, 711))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 177, 710)), "./neo-c.h", 177, 711))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 712)), "./neo-c.h", 179, 713))->tail, "./neo-c.h", 179, 714)), "./neo-c.h", 179, 715))->next=litem_59;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 716)), "./neo-c.h", 180, 717))->tail=litem_59;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 718)), "./neo-c.h", 183, 719))->len++;
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_60;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1sTypeph*));
                it_60=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 727)), "./neo-c.h", 120, 728))->head;
                while(_while_condtional11=it_60!=((void*)0),                _while_condtional11) {
                    prev_it_61=it_60;
                    it_60=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_60, "./neo-c.h", 123, 729)), "./neo-c.h", 123, 730))->next;
                    come_call_finalizer3(prev_it_61,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __result57__;
void* right_value87;
struct tuple1$1sTypeph* result_62;
_Bool _if_conditional45;
struct sType* __exception_result_var_b55;
void* right_value88;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
right_value88 = (void*)0;
                if(_if_conditional43=self==(void*)0,                _if_conditional43) {
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value87,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional45=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 741)), "tuple1$1sTypephp_clone", 4, 742))->v1!=((void*)0),                _if_conditional45) {
                    __dec_obj16=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_62, "tuple1$1sTypephp_clone", 4, 743)), "tuple1$1sTypephp_clone", 4, 744))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_62, "tuple1$1sTypephp_clone", 4, 743)), "tuple1$1sTypephp_clone", 4, 744))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 747),__exception_result_var_b55=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 745)), "tuple1$1sTypephp_clone", 4, 746))->v1), come_pop_stackframe(), __exception_result_var_b55))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result58__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional44=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 737)), "tuple1$1sTypeph_finalize", 0, 738))->v1!=((void*)0),                    _if_conditional44) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 739)), "tuple1$1sTypeph_finalize", 0, 740))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result59__;
void* right_value93;
void* right_value94;
struct list$1sNodeph* __exception_result_var_b60;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
_Bool _while_condtional12;
struct sNode* __exception_result_var_b61;
void* right_value99;
struct list$1sNodeph* __exception_result_var_b62;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                result_63=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 784),__exception_result_var_b60=((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 776)), "./neo-c.h", 139, 777)))))), come_pop_stackframe(), __exception_result_var_b60));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_64=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 785)), "./neo-c.h", 141, 786))->head;
                while(_while_condtional12=it_64!=((void*)0),                _while_condtional12) {
                    (come_push_stackframe("./neo-c.h", 143, 870),__exception_result_var_b62=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_63, "./neo-c.h", 143, 787)), "./neo-c.h", 143, 788)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=(come_push_stackframe("./neo-c.h", 143, 869),__exception_result_var_b61=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_64, "./neo-c.h", 143, 833)), "./neo-c.h", 143, 834))->item), come_pop_stackframe(), __exception_result_var_b61))))), come_pop_stackframe(), __exception_result_var_b62);
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_64=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_64, "./neo-c.h", 145, 871)), "./neo-c.h", 145, 872))->next;
                }
                __result64__ = __result_obj__ = result_63;
                come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 778)), "./neo-c.h", 101, 779))->head=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 780)), "./neo-c.h", 102, 781))->tail=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 782)), "./neo-c.h", 103, 783))->len=0;
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value95;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj21;
_Bool _if_conditional52;
void* right_value96;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj22;
void* right_value97;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional51=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 789)), "./neo-c.h", 152, 790))->len==0,                        _if_conditional51) {
                            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 155, 791)), "./neo-c.h", 155, 792))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 156, 793)), "./neo-c.h", 156, 794))->next=((void*)0);
                            __dec_obj21=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 157, 795)), "./neo-c.h", 157, 796))->item;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 157, 795)), "./neo-c.h", 157, 796))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 797)), "./neo-c.h", 159, 798))->tail=litem_65;
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 799)), "./neo-c.h", 160, 800))->head=litem_65;
                        }
                        else {
                            if(_if_conditional52=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 801)), "./neo-c.h", 162, 802))->len==1,                            _if_conditional52) {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 165, 803)), "./neo-c.h", 165, 804))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 805)), "./neo-c.h", 165, 806))->head;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 166, 807)), "./neo-c.h", 166, 808))->next=((void*)0);
                                __dec_obj22=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 167, 809)), "./neo-c.h", 167, 810))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 167, 809)), "./neo-c.h", 167, 810))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 811)), "./neo-c.h", 169, 812))->tail=litem_66;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 813)), "./neo-c.h", 170, 814))->head, "./neo-c.h", 170, 815)), "./neo-c.h", 170, 816))->next=litem_66;
                            }
                            else {
                                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 175, 817)), "./neo-c.h", 175, 818))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 819)), "./neo-c.h", 175, 820))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 176, 821)), "./neo-c.h", 176, 822))->next=((void*)0);
                                __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 177, 823)), "./neo-c.h", 177, 824))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 177, 823)), "./neo-c.h", 177, 824))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 825)), "./neo-c.h", 179, 826))->tail, "./neo-c.h", 179, 827)), "./neo-c.h", 179, 828))->next=litem_67;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 829)), "./neo-c.h", 180, 830))->tail=litem_67;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 831)), "./neo-c.h", 183, 832))->len++;
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
struct sNode* result_68;
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
memset(&result_68, 0, sizeof(struct sNode*));
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional54=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 835)), "sNode_clone", 4, 836))->clone!=((void*)0),                        _if_conditional54) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 4, 837)), "sNode_clone", 4, 838))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 839)), "sNode_clone", 4, 840))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 839)), "sNode_clone", 4, 840))->_protocol_obj);
                        }
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 5, 841)), "sNode_clone", 5, 842))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 843)), "sNode_clone", 5, 844))->finalize;
                        }
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 6, 845)), "sNode_clone", 6, 846))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 847)), "sNode_clone", 6, 848))->clone;
                        }
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 7, 849)), "sNode_clone", 7, 850))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 851)), "sNode_clone", 7, 852))->compile;
                        }
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 8, 853)), "sNode_clone", 8, 854))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 855)), "sNode_clone", 8, 856))->sline;
                        }
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 9, 857)), "sNode_clone", 9, 858))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 859)), "sNode_clone", 9, 860))->sname;
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 10, 861)), "sNode_clone", 10, 862))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 863)), "sNode_clone", 10, 864))->terminated;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_68, "sNode_clone", 11, 865)), "sNode_clone", 11, 866))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 867)), "sNode_clone", 11, 868))->kind;
                        }
                        __result63__ = __result_obj__ = result_68;
                        if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result63__;
                        if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_69;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_70;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_69, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_70, 0, sizeof(struct list_item$1sNodeph*));
                it_69=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 874)), "./neo-c.h", 120, 875))->head;
                while(_while_condtional13=it_69!=((void*)0),                _while_condtional13) {
                    prev_it_70=it_69;
                    it_69=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_69, "./neo-c.h", 123, 876)), "./neo-c.h", 123, 877))->next;
                    come_call_finalizer3(prev_it_70,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1charph* __result65__;
void* right_value102;
void* right_value103;
struct list$1charph* __exception_result_var_b65;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
_Bool _while_condtional14;
char* __exception_result_var_b66;
void* right_value107;
struct list$1charph* __exception_result_var_b67;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&it_72, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                result_71=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 903),__exception_result_var_b65=((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 895)), "./neo-c.h", 139, 896)))))), come_pop_stackframe(), __exception_result_var_b65));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_72=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 904)), "./neo-c.h", 141, 905))->head;
                while(_while_condtional14=it_72!=((void*)0),                _while_condtional14) {
                    (come_push_stackframe("./neo-c.h", 143, 955),__exception_result_var_b67=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_71, "./neo-c.h", 143, 906)), "./neo-c.h", 143, 907)),(char*)come_increment_ref_count(((char*)(right_value107=(come_push_stackframe("./neo-c.h", 143, 954),__exception_result_var_b66=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_72, "./neo-c.h", 143, 952)), "./neo-c.h", 143, 953))->item), come_pop_stackframe(), __exception_result_var_b66))))), come_pop_stackframe(), __exception_result_var_b67);
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_72=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_72, "./neo-c.h", 145, 956)), "./neo-c.h", 145, 957))->next;
                }
                __result68__ = __result_obj__ = result_71;
                come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 897)), "./neo-c.h", 101, 898))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 899)), "./neo-c.h", 102, 900))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 901)), "./neo-c.h", 103, 902))->len=0;
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional66;
void* right_value104;
struct list_item$1charph* litem_73;
char* __dec_obj26;
_Bool _if_conditional67;
void* right_value105;
struct list_item$1charph* litem_74;
char* __dec_obj27;
void* right_value106;
struct list_item$1charph* litem_75;
char* __dec_obj28;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value105 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional66=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 908)), "./neo-c.h", 152, 909))->len==0,                        _if_conditional66) {
                            litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 155, 910)), "./neo-c.h", 155, 911))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 156, 912)), "./neo-c.h", 156, 913))->next=((void*)0);
                            __dec_obj26=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 157, 914)), "./neo-c.h", 157, 915))->item;
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 157, 914)), "./neo-c.h", 157, 915))->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 916)), "./neo-c.h", 159, 917))->tail=litem_73;
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 918)), "./neo-c.h", 160, 919))->head=litem_73;
                        }
                        else {
                            if(_if_conditional67=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 920)), "./neo-c.h", 162, 921))->len==1,                            _if_conditional67) {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 165, 922)), "./neo-c.h", 165, 923))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 924)), "./neo-c.h", 165, 925))->head;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 166, 926)), "./neo-c.h", 166, 927))->next=((void*)0);
                                __dec_obj27=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 167, 928)), "./neo-c.h", 167, 929))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 167, 928)), "./neo-c.h", 167, 929))->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 930)), "./neo-c.h", 169, 931))->tail=litem_74;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 932)), "./neo-c.h", 170, 933))->head, "./neo-c.h", 170, 934)), "./neo-c.h", 170, 935))->next=litem_74;
                            }
                            else {
                                litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 175, 936)), "./neo-c.h", 175, 937))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 938)), "./neo-c.h", 175, 939))->tail;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 176, 940)), "./neo-c.h", 176, 941))->next=((void*)0);
                                __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 177, 942)), "./neo-c.h", 177, 943))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 177, 942)), "./neo-c.h", 177, 943))->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 944)), "./neo-c.h", 179, 945))->tail, "./neo-c.h", 179, 946)), "./neo-c.h", 179, 947))->next=litem_75;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 948)), "./neo-c.h", 180, 949))->tail=litem_75;
                            }
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 950)), "./neo-c.h", 183, 951))->len++;
                        __result67__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result67__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_76;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1charph*));
                it_76=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 959)), "./neo-c.h", 120, 960))->head;
                while(_while_condtional15=it_76!=((void*)0),                _while_condtional15) {
                    prev_it_77=it_76;
                    it_76=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_76, "./neo-c.h", 123, 961)), "./neo-c.h", 123, 962))->next;
                    come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional116;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional116=self==((void*)0),        _if_conditional116) {
            __result70__ = 0;
            return __result70__;
        }
        __result71__ = ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 360, 1187)), "./neo-c.h", 360, 1188))->len;
        return __result71__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b80;
unsigned int hash_86;
unsigned int it_87;
_Bool _while_condtional16;
_Bool _if_conditional118;
_Bool __exception_result_var_b81;
_Bool _if_conditional119;
struct sGenericsFun* __result72__;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sGenericsFun* __result73__;
struct sGenericsFun* __result74__;
struct sGenericsFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_86, 0, sizeof(unsigned int));
memset(&it_87, 0, sizeof(unsigned int));
            hash_86=(come_push_stackframe("./neo-c.h", 1207, 1206),__exception_result_var_b80=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1204)), "./neo-c.h", 1207, 1205))), come_pop_stackframe(), __exception_result_var_b80)%((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1207, 1207)), "./neo-c.h", 1207, 1208))->size;
            it_87=hash_86;
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                if(_if_conditional118=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1211, 1209)), "./neo-c.h", 1211, 1210))->item_existance, "./neo-c.h", 1211, 1211))[it_87],                _if_conditional118) {
                    if(_if_conditional119=(come_push_stackframe("./neo-c.h", 1213, 1217),__exception_result_var_b81=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1213, 1212)), "./neo-c.h", 1213, 1213))->keys, "./neo-c.h", 1213, 1214))[it_87], "./neo-c.h", 1213, 1215)), "./neo-c.h", 1213, 1216)),key), come_pop_stackframe(), __exception_result_var_b81),                    _if_conditional119) {
                        __result72__ = __result_obj__ = ((struct sGenericsFun**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1215, 1218)), "./neo-c.h", 1215, 1219))->items, "./neo-c.h", 1215, 1220))[it_87];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    it_87++;
                    if(_if_conditional130=it_87>=((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1220, 1261)), "./neo-c.h", 1220, 1262))->size,                    _if_conditional130) {
                        it_87=0;
                    }
                    else {
                        if(_if_conditional131=it_87==hash_86,                        _if_conditional131) {
                            __result73__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result73__;
                        }
                    }
                }
                else {
                    __result74__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
            }
            __result75__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional120=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 1221)), "sGenericsFun_finalize", 0, 1222))->mImplType!=((void*)0),                            _if_conditional120) {
                                come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 1223)), "sGenericsFun_finalize", 0, 1224))->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 1225)), "sGenericsFun_finalize", 1, 1226))->mGenericsTypeNames!=((void*)0),                            _if_conditional121) {
                                come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 1227)), "sGenericsFun_finalize", 1, 1228))->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional122=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 1229)), "sGenericsFun_finalize", 2, 1230))->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional122) {
                                come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 1231)), "sGenericsFun_finalize", 2, 1232))->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 1233)), "sGenericsFun_finalize", 3, 1234))->mName!=((void*)0),                            _if_conditional123) {
                                ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 1235)), "sGenericsFun_finalize", 3, 1236))->mName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 1235)), "sGenericsFun_finalize", 3, 1236))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional124=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 1237)), "sGenericsFun_finalize", 4, 1238))->mResultType!=((void*)0),                            _if_conditional124) {
                                come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 1239)), "sGenericsFun_finalize", 4, 1240))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional125=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 1241)), "sGenericsFun_finalize", 5, 1242))->mParamTypes!=((void*)0),                            _if_conditional125) {
                                come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 1243)), "sGenericsFun_finalize", 5, 1244))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional126=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 1245)), "sGenericsFun_finalize", 6, 1246))->mParamNames!=((void*)0),                            _if_conditional126) {
                                come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 1247)), "sGenericsFun_finalize", 6, 1248))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional127=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 1249)), "sGenericsFun_finalize", 7, 1250))->mParamDefaultParametors!=((void*)0),                            _if_conditional127) {
                                come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 1251)), "sGenericsFun_finalize", 7, 1252))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional128=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 1253)), "sGenericsFun_finalize", 8, 1254))->mBlock!=((void*)0),                            _if_conditional128) {
                                ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 1255)), "sGenericsFun_finalize", 8, 1256))->mBlock = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 1255)), "sGenericsFun_finalize", 8, 1256))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional129=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 1257)), "sGenericsFun_finalize", 9, 1258))->mGenericsSName!=((void*)0),                            _if_conditional129) {
                                ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 1259)), "sGenericsFun_finalize", 9, 1260))->mGenericsSName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 1259)), "sGenericsFun_finalize", 9, 1260))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_88;
void* __exception_result_var_b85;
unsigned int __exception_result_var_b86;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional134;
_Bool __exception_result_var_b87;
_Bool _if_conditional135;
struct sFun* __result77__;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct sFun* __result78__;
struct sFun* __result79__;
struct sFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sFun*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            (come_push_stackframe("./neo-c.h", 1526, 1268),__exception_result_var_b85=memset(&default_value_88,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b85);
            hash_89=(come_push_stackframe("./neo-c.h", 1528, 1271),__exception_result_var_b86=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 1269)), "./neo-c.h", 1528, 1270))), come_pop_stackframe(), __exception_result_var_b86)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1528, 1272)), "./neo-c.h", 1528, 1273))->size;
            it_90=hash_89;
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                if(_if_conditional134=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1532, 1274)), "./neo-c.h", 1532, 1275))->item_existance, "./neo-c.h", 1532, 1276))[it_90],                _if_conditional134) {
                    if(_if_conditional135=(come_push_stackframe("./neo-c.h", 1534, 1282),__exception_result_var_b87=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1534, 1277)), "./neo-c.h", 1534, 1278))->keys, "./neo-c.h", 1534, 1279))[it_90], "./neo-c.h", 1534, 1280)), "./neo-c.h", 1534, 1281)),key), come_pop_stackframe(), __exception_result_var_b87),                    _if_conditional135) {
                        __result77__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1536, 1283)), "./neo-c.h", 1536, 1284))->items, "./neo-c.h", 1536, 1285))[it_90];
                        come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        return __result77__;
                    }
                    it_90++;
                    if(_if_conditional151=it_90>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1541, 1346)), "./neo-c.h", 1541, 1347))->size,                    _if_conditional151) {
                        it_90=0;
                    }
                    else {
                        if(_if_conditional152=it_90==hash_89,                        _if_conditional152) {
                            __result78__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result78__;
                        }
                    }
                }
                else {
                    __result79__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
            }
            __result80__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result80__;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional136=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1286)), "sFun_finalize", 0, 1287))->mName!=((void*)0),                            _if_conditional136) {
                                ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1288)), "sFun_finalize", 0, 1289))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1288)), "sFun_finalize", 0, 1289))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional137=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 1290)), "sFun_finalize", 1, 1291))->mResultType!=((void*)0),                            _if_conditional137) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 1292)), "sFun_finalize", 1, 1293))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional138=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 1294)), "sFun_finalize", 2, 1295))->mParamTypes!=((void*)0),                            _if_conditional138) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 1296)), "sFun_finalize", 2, 1297))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional139=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 1298)), "sFun_finalize", 3, 1299))->mParamNames!=((void*)0),                            _if_conditional139) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 1300)), "sFun_finalize", 3, 1301))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional140=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 1302)), "sFun_finalize", 4, 1303))->mParamDefaultParametors!=((void*)0),                            _if_conditional140) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 1304)), "sFun_finalize", 4, 1305))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional141=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 1306)), "sFun_finalize", 5, 1307))->mLambdaType!=((void*)0),                            _if_conditional141) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 1308)), "sFun_finalize", 5, 1309))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional142=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 1310)), "sFun_finalize", 6, 1311))->mBlock!=((void*)0),                            _if_conditional142) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 1312)), "sFun_finalize", 6, 1313))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional145=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 1322)), "sFun_finalize", 7, 1323))->mSource!=((void*)0),                            _if_conditional145) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 1324)), "sFun_finalize", 7, 1325))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional146=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 1326)), "sFun_finalize", 8, 1327))->mSourceHead!=((void*)0),                            _if_conditional146) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 1328)), "sFun_finalize", 8, 1329))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional147=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1330)), "sFun_finalize", 9, 1331))->mSourceHead2!=((void*)0),                            _if_conditional147) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1332)), "sFun_finalize", 9, 1333))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional148=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1334)), "sFun_finalize", 10, 1335))->mSourceDefer!=((void*)0),                            _if_conditional148) {
                                come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1336)), "sFun_finalize", 10, 1337))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional149=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1338)), "sFun_finalize", 11, 1339))->mComeHeader!=((void*)0),                            _if_conditional149) {
                                ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1340)), "sFun_finalize", 11, 1341))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1340)), "sFun_finalize", 11, 1341))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional150=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1342)), "sFun_finalize", 12, 1343))->mDeclareSName!=((void*)0),                            _if_conditional150) {
                                ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1344)), "sFun_finalize", 12, 1345))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1344)), "sFun_finalize", 12, 1345))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional143=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 1314)), "sBlock_finalize", 0, 1315))->mNodes!=((void*)0),                                    _if_conditional143) {
                                        come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 1316)), "sBlock_finalize", 0, 1317))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional144=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 1318)), "sBlock_finalize", 1, 1319))->mVarTable!=((void*)0),                                    _if_conditional144) {
                                        come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 1320)), "sBlock_finalize", 1, 1321))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional156;
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional156=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1358)), "CVALUE_finalize", 0, 1359))->c_value!=((void*)0),            _if_conditional156) {
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1360)), "CVALUE_finalize", 0, 1361))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1360)), "CVALUE_finalize", 0, 1361))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional157=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1362)), "CVALUE_finalize", 1, 1363))->type!=((void*)0),            _if_conditional157) {
                come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1364)), "CVALUE_finalize", 1, 1365))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional158;
struct list_item$1sTypeph* it_96;
int i_97;
_Bool _while_condtional18;
_Bool _if_conditional159;
struct sType* __result81__;
struct sType* default_value_98;
void* __exception_result_var_b94;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_97, 0, sizeof(int));
memset(&default_value_98, 0, sizeof(struct sType*));
            if(_if_conditional158=position<0,            _if_conditional158) {
                position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 1369)), "./neo-c.h", 676, 1370))->len;
            }
            it_96=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 1371)), "./neo-c.h", 679, 1372))->head;
            i_97=0;
            while(_while_condtional18=it_96!=((void*)0),            _while_condtional18) {
                if(_if_conditional159=position==i_97,                _if_conditional159) {
                    __result81__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_96, "./neo-c.h", 683, 1373)), "./neo-c.h", 683, 1374))->item;
                    return __result81__;
                }
                it_96=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_96, "./neo-c.h", 685, 1375)), "./neo-c.h", 685, 1376))->next;
                i_97++;
            }
            (come_push_stackframe("./neo-c.h", 690, 1377),__exception_result_var_b94=memset(&default_value_98,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b94);
            __result82__ = __result_obj__ = default_value_98;
            come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value148;
struct list_item$1CVALUEph* litem_103;
struct CVALUE* __dec_obj50;
_Bool _if_conditional167;
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
            if(_if_conditional165=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 222, 1521)), "./neo-c.h", 222, 1522))->len==0,            _if_conditional165) {
                litem_103=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_103, "./neo-c.h", 225, 1527)), "./neo-c.h", 225, 1528))->prev=((void*)0);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_103, "./neo-c.h", 226, 1529)), "./neo-c.h", 226, 1530))->next=((void*)0);
                __dec_obj50=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_103, "./neo-c.h", 227, 1531)), "./neo-c.h", 227, 1532))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_103, "./neo-c.h", 227, 1531)), "./neo-c.h", 227, 1532))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 229, 1533)), "./neo-c.h", 229, 1534))->tail=litem_103;
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 230, 1535)), "./neo-c.h", 230, 1536))->head=litem_103;
            }
            else {
                if(_if_conditional167=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 232, 1537)), "./neo-c.h", 232, 1538))->len==1,                _if_conditional167) {
                    litem_104=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_104, "./neo-c.h", 235, 1539)), "./neo-c.h", 235, 1540))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 235, 1541)), "./neo-c.h", 235, 1542))->head;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_104, "./neo-c.h", 236, 1543)), "./neo-c.h", 236, 1544))->next=((void*)0);
                    __dec_obj51=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_104, "./neo-c.h", 237, 1545)), "./neo-c.h", 237, 1546))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_104, "./neo-c.h", 237, 1545)), "./neo-c.h", 237, 1546))->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 239, 1547)), "./neo-c.h", 239, 1548))->tail=litem_104;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 240, 1549)), "./neo-c.h", 240, 1550))->head, "./neo-c.h", 240, 1551)), "./neo-c.h", 240, 1552))->next=litem_104;
                }
                else {
                    litem_105=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_105, "./neo-c.h", 245, 1553)), "./neo-c.h", 245, 1554))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 245, 1555)), "./neo-c.h", 245, 1556))->tail;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_105, "./neo-c.h", 246, 1557)), "./neo-c.h", 246, 1558))->next=((void*)0);
                    __dec_obj52=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_105, "./neo-c.h", 247, 1559)), "./neo-c.h", 247, 1560))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_105, "./neo-c.h", 247, 1559)), "./neo-c.h", 247, 1560))->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 249, 1561)), "./neo-c.h", 249, 1562))->tail, "./neo-c.h", 249, 1563)), "./neo-c.h", 249, 1564))->next=litem_105;
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 250, 1565)), "./neo-c.h", 250, 1566))->tail=litem_105;
                }
            }
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 253, 1567)), "./neo-c.h", 253, 1568))->len++;
            __result83__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional166=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1523)), "list_item$1CVALUEphp_finalize", 0, 1524))->item!=((void*)0),                    _if_conditional166) {
                        come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1525)), "list_item$1CVALUEphp_finalize", 0, 1526))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value151;
struct sNodeBase* __exception_result_var_b121;
struct sNode* __exception_result_var_b122;
void* right_value152;
struct sNode* __dec_obj53;
struct sNode* __exception_result_var_b123;
void* right_value153;
struct sNode* __dec_obj54;
void* right_value154;
char* __exception_result_var_b124;
char* __dec_obj55;
struct sStoreFieldNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    (come_push_stackframe("18field.c", 123, 1572),__exception_result_var_b121=((struct sNodeBase*)(right_value151=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 123, 1570)), "18field.c", 123, 1571))),info))), come_pop_stackframe(), __exception_result_var_b121);
    come_call_finalizer3(right_value151,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 125, 1577))->mLeft;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 125, 1577))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=(come_push_stackframe("18field.c", 125, 1578),__exception_result_var_b122=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b122))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj54=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 126, 1579))->mRight;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 126, 1579))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=(come_push_stackframe("18field.c", 126, 1580),__exception_result_var_b123=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b123))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj55=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 127, 1581))->mName;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 127, 1581))->mName=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 127, 1582),__exception_result_var_b124=((char*)(right_value154=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b124));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__;
void* right_value155;
char* __exception_result_var_b125;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result86__ = __result_obj__ = (come_push_stackframe("18field.c", 132, 1599),__exception_result_var_b125=((char*)(right_value155=__builtin_string("sStoreFieldNode"))), come_pop_stackframe(), __exception_result_var_b125);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_106;
struct sNode* right_107;
void* right_value156;
char* __exception_result_var_b126;
char* name_108;
_Bool __exception_result_var_b127;
_Bool _if_conditional173;
_Bool __result87__;
void* right_value157;
struct CVALUE* __exception_result_var_b128;
struct CVALUE* left_value_109;
_Bool _if_conditional174;
void* right_value158;
char* __exception_result_var_b129;
void* right_value159;
char* __exception_result_var_b130;
char* __dec_obj56;
_Bool __exception_result_var_b131;
_Bool _if_conditional175;
_Bool __result88__;
void* right_value160;
struct CVALUE* __exception_result_var_b132;
struct CVALUE* right_value_110;
struct sType* right_type_111;
struct sType* left_type_112;
void* right_value161;
struct sType* __exception_result_var_b133;
struct sType* left_type2_113;
struct sClass* klass_114;
struct sClass* __exception_result_var_b137;
struct sType* __dec_obj57;
struct sType* field_type_120;
int index_121;
char* __dec_obj58;
char* child_field_name_122;
struct sClass* __exception_result_var_b138;
_Bool _if_conditional187;
_Bool __result93__;
struct list$1tuple2$2charphsTypephph* o2_saved_123;
struct tuple2$2charphsTypeph* __exception_result_var_b141;
struct tuple2$2charphsTypeph* field_126;
_Bool __exception_result_var_b142;
struct tuple2$2charphsTypeph* __exception_result_var_b145;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_129;
struct sType* field_type2_130;
_Bool __exception_result_var_b146;
_Bool _if_conditional192;
struct sType* __exception_result_var_b147;
void* right_value162;
struct sType* __dec_obj59;
int __exception_result_var_b148;
_Bool _if_conditional194;
struct list$1tuple2$2charphsTypephph* o2_saved_131;
struct tuple2$2charphsTypeph* __exception_result_var_b149;
struct tuple2$2charphsTypeph* field_132;
_Bool __exception_result_var_b150;
struct tuple2$2charphsTypeph* __exception_result_var_b151;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_133;
struct sType* field_type2_134;
struct sClass* klass2_135;
struct list$1tuple2$2charphsTypephph* o2_saved_136;
struct tuple2$2charphsTypeph* __exception_result_var_b152;
struct tuple2$2charphsTypeph* field2_137;
_Bool __exception_result_var_b153;
struct tuple2$2charphsTypeph* __exception_result_var_b154;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_138;
struct sType* field_type3_139;
_Bool __exception_result_var_b155;
_Bool _if_conditional195;
void* right_value163;
char* __exception_result_var_b156;
char* __dec_obj60;
struct sType* __exception_result_var_b157;
void* right_value164;
struct sType* __dec_obj61;
_Bool _if_conditional196;
_Bool __exception_result_var_b158;
_Bool _if_conditional197;
struct sType* __exception_result_var_b159;
void* right_value165;
struct sType* __dec_obj62;
int __exception_result_var_b160;
_Bool _if_conditional198;
_Bool __result103__;
void* right_value166;
struct CVALUE* come_value_140;
void* right_value167;
void* right_value168;
_Bool __exception_result_var_b161;
struct sType* __exception_result_var_b162;
void* right_value169;
_Bool _if_conditional199;
_Bool __exception_result_var_b163;
_Bool _if_conditional200;
_Bool _if_conditional201;
int __exception_result_var_b164;
_Bool __result104__;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value170;
char* __exception_result_var_b165;
char* c_value_141;
void* right_value171;
char* __exception_result_var_b166;
char* __dec_obj63;
void* right_value172;
char* __exception_result_var_b167;
char* c_value_142;
void* right_value173;
char* __exception_result_var_b168;
char* __dec_obj64;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value174;
char* __exception_result_var_b169;
char* c_value_143;
void* right_value175;
char* __exception_result_var_b170;
char* __dec_obj65;
void* right_value176;
char* __exception_result_var_b171;
char* c_value_144;
void* right_value177;
char* __exception_result_var_b172;
char* __dec_obj66;
void* right_value178;
char* __exception_result_var_b173;
char* __dec_obj67;
_Bool __result105__;
int __exception_result_var_b174;
int right_value_id_145;
_Bool _if_conditional207;
_Bool __exception_result_var_b175;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value179;
char* __exception_result_var_b176;
char* c_value_146;
void* right_value180;
char* __exception_result_var_b177;
char* __dec_obj68;
void* right_value181;
char* __exception_result_var_b178;
char* c_value_147;
void* right_value182;
char* __exception_result_var_b179;
char* __dec_obj69;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value183;
char* __exception_result_var_b180;
char* c_value_148;
void* right_value184;
char* __exception_result_var_b181;
char* __dec_obj70;
void* right_value185;
char* __exception_result_var_b182;
char* c_value_149;
void* right_value186;
char* __exception_result_var_b183;
char* __dec_obj71;
_Bool __result106__;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value187;
char* __exception_result_var_b184;
char* __dec_obj72;
void* right_value188;
char* __exception_result_var_b185;
char* __dec_obj73;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value189;
char* __exception_result_var_b186;
char* __dec_obj74;
void* right_value190;
char* __exception_result_var_b187;
char* __dec_obj75;
_Bool __result107__;
struct sType* __exception_result_var_b188;
void* right_value191;
struct sType* __dec_obj76;
struct list$1CVALUEph* __exception_result_var_b189;
_Bool __result108__;
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
right_value162 = (void*)0;
memset(&o2_saved_131, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_132, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&klass2_135, 0, sizeof(struct sClass*));
memset(&o2_saved_136, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_137, 0, sizeof(struct tuple2$2charphsTypeph*));
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
    left_106=((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 137, 1600)), "18field.c", 137, 1601))->mLeft;
    right_107=((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 138, 1602)), "18field.c", 138, 1603))->mRight;
    name_108=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 139, 1606),__exception_result_var_b126=((char*)(right_value156=__builtin_string(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 139, 1604)), "18field.c", 139, 1605))->mName))), come_pop_stackframe(), __exception_result_var_b126));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional173=!(come_push_stackframe("18field.c", 141, 1607),__exception_result_var_b127=node_compile(left_106,info), come_pop_stackframe(), __exception_result_var_b127),    _if_conditional173) {
        __result87__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result87__;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 145, 1608),__exception_result_var_b128=((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b128));
    come_call_finalizer3(right_value157,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 146,1609),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional174=gComeDebug&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 148, 1610)), "18field.c", 148, 1611))->type, "18field.c", 148, 1612)), "18field.c", 148, 1613))->mPointerNum>0,    _if_conditional174) {
        __dec_obj56=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 149, 1614)), "18field.c", 149, 1615))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 149, 1614)), "18field.c", 149, 1615))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 149, 1626),__exception_result_var_b130=((char*)(right_value159=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("18field.c", 149, 1618),__exception_result_var_b129=((char*)(right_value158=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 149, 1616)), "18field.c", 149, 1617))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b129), "18field.c", 149, 1619)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 149, 1620)), "18field.c", 149, 1621))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 149, 1622)), "18field.c", 149, 1623))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 149, 1624)), "18field.c", 149, 1625))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b130));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional175=!(come_push_stackframe("18field.c", 152, 1627),__exception_result_var_b131=node_compile(right_107,info), come_pop_stackframe(), __exception_result_var_b131),    _if_conditional175) {
        __result88__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    right_value_110=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 156, 1628),__exception_result_var_b132=((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b132));
    come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    right_type_111=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 157, 1629)), "18field.c", 157, 1630))->type;
    (come_push_stackframe("18field.c", 159,1631),dec_stack_ptr(1,info),come_pop_stackframe());
    left_type_112=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 161, 1632)), "18field.c", 161, 1633))->type;
    left_type2_113=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 163, 1634),__exception_result_var_b133=((struct sType*)(right_value161=solve_generics(left_type_112,left_type_112,info))), come_pop_stackframe(), __exception_result_var_b133));
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_114=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type2_113, "18field.c", 165, 1635)), "18field.c", 165, 1636))->mClass;
    klass_114=(come_push_stackframe("18field.c", 166, 1693),__exception_result_var_b137=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 166, 1637)), "18field.c", 166, 1638))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 166, 1639)), "18field.c", 166, 1640))->mName), come_pop_stackframe(), __exception_result_var_b137);
    __dec_obj57=field_type_120;
    field_type_120=((void*)0);
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    index_121=0;
    __dec_obj58=child_field_name_122;
    child_field_name_122=((void*)0);
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    klass_114=(come_push_stackframe("18field.c", 171, 1698),__exception_result_var_b138=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 171, 1694)), "18field.c", 171, 1695))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 171, 1696)), "18field.c", 171, 1697))->mName), come_pop_stackframe(), __exception_result_var_b138);
    if(_if_conditional187=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 173, 1699)), "18field.c", 173, 1700))->mFields==((void*)0),    _if_conditional187) {
        (come_push_stackframe("18field.c", 174,1703),err_msg(info,"%s fields are null",((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 174, 1701)), "18field.c", 174, 1702))->mName),come_pop_stackframe());
        __result93__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result93__;
    }
    for(    o2_saved_123=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 178, 1704)), "18field.c", 178, 1705))->mFields)),field_126=(come_push_stackframe("18field.c", 178, 1720),__exception_result_var_b141=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_123), "18field.c", 178, 1706)), "18field.c", 178, 1707))), come_pop_stackframe(), __exception_result_var_b141);    !(come_push_stackframe("18field.c", 178, 1725),__exception_result_var_b142=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_123), "18field.c", 178, 1721)), "18field.c", 178, 1722))), come_pop_stackframe(), __exception_result_var_b142);    field_126=(come_push_stackframe("18field.c", 178, 1744),__exception_result_var_b145=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_123), "18field.c", 178, 1726)), "18field.c", 178, 1727))), come_pop_stackframe(), __exception_result_var_b145)    ){
        multiple_assign_var1=field_126;
        field_name_129=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_130=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional192=(come_push_stackframe("18field.c", 181, 1745),__exception_result_var_b146=string_operator_equals(field_name_129,name_108), come_pop_stackframe(), __exception_result_var_b146),        _if_conditional192) {
            __dec_obj59=field_type_120;
            field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=(come_push_stackframe("18field.c", 182, 1746),__exception_result_var_b147=sType_clone(field_type2_130), come_pop_stackframe(), __exception_result_var_b147))));
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
            field_name_129 = come_decrement_ref_count2(field_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_121++;
        field_name_129 = come_decrement_ref_count2(field_name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(_if_conditional194=index_121==(come_push_stackframe("18field.c", 189, 1753),__exception_result_var_b148=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 189, 1747)), "18field.c", 189, 1748))->mFields, "18field.c", 189, 1749)), "18field.c", 189, 1750))), come_pop_stackframe(), __exception_result_var_b148),    _if_conditional194) {
        index_121=0;
        for(        o2_saved_131=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 191, 1754)), "18field.c", 191, 1755))->mFields)),field_132=(come_push_stackframe("18field.c", 191, 1758),__exception_result_var_b149=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_131), "18field.c", 191, 1756)), "18field.c", 191, 1757))), come_pop_stackframe(), __exception_result_var_b149);        !(come_push_stackframe("18field.c", 191, 1761),__exception_result_var_b150=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_131), "18field.c", 191, 1759)), "18field.c", 191, 1760))), come_pop_stackframe(), __exception_result_var_b150);        field_132=(come_push_stackframe("18field.c", 191, 1764),__exception_result_var_b151=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_131), "18field.c", 191, 1762)), "18field.c", 191, 1763))), come_pop_stackframe(), __exception_result_var_b151)        ){
            multiple_assign_var2=field_132;
            field_name_133=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_134=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_135=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type2_134, "18field.c", 194, 1765)), "18field.c", 194, 1766))->mClass;
            for(            o2_saved_136=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_135, "18field.c", 196, 1767)), "18field.c", 196, 1768))->mFields)),field2_137=(come_push_stackframe("18field.c", 196, 1771),__exception_result_var_b152=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_136), "18field.c", 196, 1769)), "18field.c", 196, 1770))), come_pop_stackframe(), __exception_result_var_b152);            !(come_push_stackframe("18field.c", 196, 1774),__exception_result_var_b153=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_136), "18field.c", 196, 1772)), "18field.c", 196, 1773))), come_pop_stackframe(), __exception_result_var_b153);            field2_137=(come_push_stackframe("18field.c", 196, 1777),__exception_result_var_b154=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_136), "18field.c", 196, 1775)), "18field.c", 196, 1776))), come_pop_stackframe(), __exception_result_var_b154)            ){
                multiple_assign_var3=field2_137;
                field_name2_138=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_139=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(_if_conditional195=(come_push_stackframe("18field.c", 199, 1778),__exception_result_var_b155=string_operator_equals(field_name2_138,name_108), come_pop_stackframe(), __exception_result_var_b155),                _if_conditional195) {
                    __dec_obj60=child_field_name_122;
                    child_field_name_122=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 200, 1779),__exception_result_var_b156=((char*)(right_value163=__builtin_string(field_name_133))), come_pop_stackframe(), __exception_result_var_b156));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj61=field_type_120;
                    field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=(come_push_stackframe("18field.c", 201, 1780),__exception_result_var_b157=sType_clone(field_type3_139), come_pop_stackframe(), __exception_result_var_b157))));
                    come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    field_name2_138 = come_decrement_ref_count2(field_name2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_139,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_138 = come_decrement_ref_count2(field_name2_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_139,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_136,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(child_field_name_122) {
                field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional197=(come_push_stackframe("18field.c", 210, 1781),__exception_result_var_b158=string_operator_equals(field_name_133,name_108), come_pop_stackframe(), __exception_result_var_b158),            _if_conditional197) {
                __dec_obj62=field_type_120;
                field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(come_push_stackframe("18field.c", 211, 1782),__exception_result_var_b159=sType_clone(field_type2_134), come_pop_stackframe(), __exception_result_var_b159))));
                come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
                field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_121++;
            field_name_133 = come_decrement_ref_count2(field_name_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_134,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_131,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(_if_conditional198=index_121==(come_push_stackframe("18field.c", 218, 1787),__exception_result_var_b160=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 218, 1783)), "18field.c", 218, 1784))->mFields, "18field.c", 218, 1785)), "18field.c", 218, 1786))), come_pop_stackframe(), __exception_result_var_b160),        _if_conditional198) {
            (come_push_stackframe("18field.c", 219,1790),err_msg(info,"field not found(%s) in %s(1)",name_108,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_114, "18field.c", 219, 1788)), "18field.c", 219, 1789))->mName),come_pop_stackframe());
            __result103__ = (_Bool)0;
            name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result103__;
        }
    }
    come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 224, "CVALUE"))));
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 226, 1791),__exception_result_var_b161=check_assign_type(((char*)(right_value168=xsprintf("\%s is assigned to",((char*)(right_value167=string_to_string(name_108)))))),field_type_120,right_type_111,right_value_110,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b161);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_type_111=((struct sType*)(right_value169=(come_push_stackframe("18field.c", 228, 1794),__exception_result_var_b162=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 228, 1792)), "18field.c", 228, 1793))->type), come_pop_stackframe(), __exception_result_var_b162)));
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional199=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_120, "18field.c", 230, 1795)), "18field.c", 230, 1796))->mHeap&&!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 230, 1797)), "18field.c", 230, 1798))->type, "18field.c", 230, 1799)), "18field.c", 230, 1800))->mHeap,    _if_conditional199) {
        if(_if_conditional200=(come_push_stackframe("18field.c", 231, 1807),__exception_result_var_b163=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 231, 1801)), "18field.c", 231, 1802))->type, "18field.c", 231, 1803)), "18field.c", 231, 1804))->mClass, "18field.c", 231, 1805)), "18field.c", 231, 1806))->mName,"void"), come_pop_stackframe(), __exception_result_var_b163)&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 231, 1808)), "18field.c", 231, 1809))->type, "18field.c", 231, 1810)), "18field.c", 231, 1811))->mPointerNum==1,        _if_conditional200) {
        }
        else {
            if(_if_conditional201=!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 235, 1812)), "18field.c", 235, 1813))->type, "18field.c", 235, 1814)), "18field.c", 235, 1815))->mDelegate&&!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 235, 1816)), "18field.c", 235, 1817))->type, "18field.c", 235, 1818)), "18field.c", 235, 1819))->mShare&&!gComeGC,            _if_conditional201) {
                (come_push_stackframe("18field.c", 236,1820),err_msg(info,"require right value as heap object(%s)(1)",name_108),come_pop_stackframe());
                (come_push_stackframe("18field.c", 237, 1835),__exception_result_var_b164=printf("right type is %s pointer num %d heap %d\n",((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 237, 1821)), "18field.c", 237, 1822))->type, "18field.c", 237, 1823)), "18field.c", 237, 1824))->mClass, "18field.c", 237, 1825)), "18field.c", 237, 1826))->mName,((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 237, 1827)), "18field.c", 237, 1828))->type, "18field.c", 237, 1829)), "18field.c", 237, 1830))->mPointerNum,((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 237, 1831)), "18field.c", 237, 1832))->type, "18field.c", 237, 1833)), "18field.c", 237, 1834))->mHeap), come_pop_stackframe(), __exception_result_var_b164);
                __result104__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result104__;
            }
        }
    }
    if(_if_conditional202=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_120, "18field.c", 242, 1836)), "18field.c", 242, 1837))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_111, "18field.c", 242, 1838)), "18field.c", 242, 1839))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_120, "18field.c", 242, 1840)), "18field.c", 242, 1841))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_111, "18field.c", 242, 1842)), "18field.c", 242, 1843))->mPointerNum>0,    _if_conditional202) {
        if(_if_conditional203=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 244, 1844)), "18field.c", 244, 1845))->type, "18field.c", 244, 1846)), "18field.c", 244, 1847))->mPointerNum==1,        _if_conditional203) {
            if(child_field_name_122) {
                c_value_141=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 246, 1850),__exception_result_var_b165=((char*)(right_value170=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 246, 1848)), "18field.c", 246, 1849))->c_value,child_field_name_122,name_108))), come_pop_stackframe(), __exception_result_var_b165));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("18field.c", 247,1851),decrement_ref_count_object(field_type_120,c_value_141,info,(_Bool)0),come_pop_stackframe());
                (come_push_stackframe("18field.c", 248,1852),std_move(field_type_120,right_type_111,right_value_110,info),come_pop_stackframe());
                __dec_obj63=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 249, 1853)), "18field.c", 249, 1854))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 249, 1853)), "18field.c", 249, 1854))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 249, 1859),__exception_result_var_b166=((char*)(right_value171=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 249, 1855)), "18field.c", 249, 1856))->c_value,child_field_name_122,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 249, 1857)), "18field.c", 249, 1858))->c_value))), come_pop_stackframe(), __exception_result_var_b166));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_141 = come_decrement_ref_count2(c_value_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_142=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 252, 1862),__exception_result_var_b167=((char*)(right_value172=xsprintf("%s->%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 252, 1860)), "18field.c", 252, 1861))->c_value,name_108))), come_pop_stackframe(), __exception_result_var_b167));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("18field.c", 253,1863),decrement_ref_count_object(field_type_120,c_value_142,info,(_Bool)0),come_pop_stackframe());
                (come_push_stackframe("18field.c", 254,1864),std_move(field_type_120,right_type_111,right_value_110,info),come_pop_stackframe());
                __dec_obj64=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 255, 1865)), "18field.c", 255, 1866))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 255, 1865)), "18field.c", 255, 1866))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 255, 1871),__exception_result_var_b168=((char*)(right_value173=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 255, 1867)), "18field.c", 255, 1868))->c_value,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 255, 1869)), "18field.c", 255, 1870))->c_value))), come_pop_stackframe(), __exception_result_var_b168));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_142 = come_decrement_ref_count2(c_value_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(_if_conditional205=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 258, 1872)), "18field.c", 258, 1873))->type, "18field.c", 258, 1874)), "18field.c", 258, 1875))->mPointerNum==0,            _if_conditional205) {
                if(child_field_name_122) {
                    c_value_143=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 260, 1878),__exception_result_var_b169=((char*)(right_value174=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 260, 1876)), "18field.c", 260, 1877))->c_value,child_field_name_122,name_108))), come_pop_stackframe(), __exception_result_var_b169));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("18field.c", 261,1879),decrement_ref_count_object(field_type_120,c_value_143,info,(_Bool)0),come_pop_stackframe());
                    (come_push_stackframe("18field.c", 262,1880),std_move(field_type_120,right_type_111,right_value_110,info),come_pop_stackframe());
                    __dec_obj65=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 263, 1881)), "18field.c", 263, 1882))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 263, 1881)), "18field.c", 263, 1882))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 263, 1887),__exception_result_var_b170=((char*)(right_value175=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 263, 1883)), "18field.c", 263, 1884))->c_value,child_field_name_122,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 263, 1885)), "18field.c", 263, 1886))->c_value))), come_pop_stackframe(), __exception_result_var_b170));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_143 = come_decrement_ref_count2(c_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_144=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 266, 1890),__exception_result_var_b171=((char*)(right_value176=xsprintf("%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 266, 1888)), "18field.c", 266, 1889))->c_value,name_108))), come_pop_stackframe(), __exception_result_var_b171));
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("18field.c", 267,1891),decrement_ref_count_object(field_type_120,c_value_144,info,(_Bool)0),come_pop_stackframe());
                    __dec_obj66=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 268, 1892)), "18field.c", 268, 1893))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 268, 1892)), "18field.c", 268, 1893))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 268, 1898),__exception_result_var_b172=((char*)(right_value177=increment_ref_count_object(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 268, 1894)), "18field.c", 268, 1895))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 268, 1896)), "18field.c", 268, 1897))->c_value,info))), come_pop_stackframe(), __exception_result_var_b172));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj67=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 269, 1899)), "18field.c", 269, 1900))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 269, 1899)), "18field.c", 269, 1900))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 269, 1905),__exception_result_var_b173=((char*)(right_value178=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 269, 1901)), "18field.c", 269, 1902))->c_value,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 269, 1903)), "18field.c", 269, 1904))->c_value))), come_pop_stackframe(), __exception_result_var_b173));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                (come_push_stackframe("18field.c", 273,1910),err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 273, 1906)), "18field.c", 273, 1907))->type, "18field.c", 273, 1908)), "18field.c", 273, 1909))->mPointerNum),come_pop_stackframe());
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
        right_value_id_145=(come_push_stackframe("18field.c", 276, 1913),__exception_result_var_b174=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 276, 1911)), "18field.c", 276, 1912))->c_value)), come_pop_stackframe(), __exception_result_var_b174);
        if(_if_conditional207=right_value_id_145!=-1,        _if_conditional207) {
            (come_push_stackframe("18field.c", 279,1914),remove_object_from_right_values(right_value_id_145,info),come_pop_stackframe());
        }
    }
    else {
        if(_if_conditional208=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_120, "18field.c", 282, 1915)), "18field.c", 282, 1916))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_120, "18field.c", 282, 1917)), "18field.c", 282, 1918))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_111, "18field.c", 282, 1919)), "18field.c", 282, 1920))->mPointerNum>0&&(come_push_stackframe("18field.c", 282, 1925),__exception_result_var_b175=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_111, "18field.c", 282, 1921)), "18field.c", 282, 1922))->mClass, "18field.c", 282, 1923)), "18field.c", 282, 1924))->mName,"void"), come_pop_stackframe(), __exception_result_var_b175),        _if_conditional208) {
            if(_if_conditional209=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 284, 1926)), "18field.c", 284, 1927))->type, "18field.c", 284, 1928)), "18field.c", 284, 1929))->mPointerNum==1,            _if_conditional209) {
                if(child_field_name_122) {
                    c_value_146=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 286, 1932),__exception_result_var_b176=((char*)(right_value179=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 286, 1930)), "18field.c", 286, 1931))->c_value,child_field_name_122,name_108))), come_pop_stackframe(), __exception_result_var_b176));
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("18field.c", 287,1933),decrement_ref_count_object(field_type_120,c_value_146,info,(_Bool)0),come_pop_stackframe());
                    __dec_obj68=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 288, 1934)), "18field.c", 288, 1935))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 288, 1934)), "18field.c", 288, 1935))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 288, 1940),__exception_result_var_b177=((char*)(right_value180=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 288, 1936)), "18field.c", 288, 1937))->c_value,child_field_name_122,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 288, 1938)), "18field.c", 288, 1939))->c_value))), come_pop_stackframe(), __exception_result_var_b177));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_146 = come_decrement_ref_count2(c_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_147=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 291, 1943),__exception_result_var_b178=((char*)(right_value181=xsprintf("%s->%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 291, 1941)), "18field.c", 291, 1942))->c_value,name_108))), come_pop_stackframe(), __exception_result_var_b178));
                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("18field.c", 292,1944),decrement_ref_count_object(field_type_120,c_value_147,info,(_Bool)0),come_pop_stackframe());
                    __dec_obj69=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 293, 1945)), "18field.c", 293, 1946))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 293, 1945)), "18field.c", 293, 1946))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 293, 1951),__exception_result_var_b179=((char*)(right_value182=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 293, 1947)), "18field.c", 293, 1948))->c_value,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 293, 1949)), "18field.c", 293, 1950))->c_value))), come_pop_stackframe(), __exception_result_var_b179));
                    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_147 = come_decrement_ref_count2(c_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(_if_conditional211=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 296, 1952)), "18field.c", 296, 1953))->type, "18field.c", 296, 1954)), "18field.c", 296, 1955))->mPointerNum==0,                _if_conditional211) {
                    if(child_field_name_122) {
                        c_value_148=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 298, 1958),__exception_result_var_b180=((char*)(right_value183=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 298, 1956)), "18field.c", 298, 1957))->c_value,child_field_name_122,name_108))), come_pop_stackframe(), __exception_result_var_b180));
                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("18field.c", 299,1959),decrement_ref_count_object(field_type_120,c_value_148,info,(_Bool)0),come_pop_stackframe());
                        __dec_obj70=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 300, 1960)), "18field.c", 300, 1961))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 300, 1960)), "18field.c", 300, 1961))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 300, 1966),__exception_result_var_b181=((char*)(right_value184=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 300, 1962)), "18field.c", 300, 1963))->c_value,child_field_name_122,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 300, 1964)), "18field.c", 300, 1965))->c_value))), come_pop_stackframe(), __exception_result_var_b181));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_148 = come_decrement_ref_count2(c_value_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        c_value_149=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 303, 1969),__exception_result_var_b182=((char*)(right_value185=xsprintf("%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 303, 1967)), "18field.c", 303, 1968))->c_value,name_108))), come_pop_stackframe(), __exception_result_var_b182));
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("18field.c", 304,1970),decrement_ref_count_object(field_type_120,c_value_149,info,(_Bool)0),come_pop_stackframe());
                        __dec_obj71=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 305, 1971)), "18field.c", 305, 1972))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 305, 1971)), "18field.c", 305, 1972))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 305, 1977),__exception_result_var_b183=((char*)(right_value186=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 305, 1973)), "18field.c", 305, 1974))->c_value,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 305, 1975)), "18field.c", 305, 1976))->c_value))), come_pop_stackframe(), __exception_result_var_b183));
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_149 = come_decrement_ref_count2(c_value_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    (come_push_stackframe("18field.c", 309,1982),err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 309, 1978)), "18field.c", 309, 1979))->type, "18field.c", 309, 1980)), "18field.c", 309, 1981))->mPointerNum),come_pop_stackframe());
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
        }
        else {
            if(_if_conditional213=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 314, 1983)), "18field.c", 314, 1984))->type, "18field.c", 314, 1985)), "18field.c", 314, 1986))->mPointerNum==1,            _if_conditional213) {
                if(child_field_name_122) {
                    __dec_obj72=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 316, 1987)), "18field.c", 316, 1988))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 316, 1987)), "18field.c", 316, 1988))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 316, 1993),__exception_result_var_b184=((char*)(right_value187=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 316, 1989)), "18field.c", 316, 1990))->c_value,child_field_name_122,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 316, 1991)), "18field.c", 316, 1992))->c_value))), come_pop_stackframe(), __exception_result_var_b184));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj73=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 319, 1994)), "18field.c", 319, 1995))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 319, 1994)), "18field.c", 319, 1995))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 319, 2000),__exception_result_var_b185=((char*)(right_value188=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 319, 1996)), "18field.c", 319, 1997))->c_value,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 319, 1998)), "18field.c", 319, 1999))->c_value))), come_pop_stackframe(), __exception_result_var_b185));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                if(_if_conditional215=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 322, 2001)), "18field.c", 322, 2002))->type, "18field.c", 322, 2003)), "18field.c", 322, 2004))->mPointerNum==0,                _if_conditional215) {
                    if(child_field_name_122) {
                        __dec_obj74=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 324, 2005)), "18field.c", 324, 2006))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 324, 2005)), "18field.c", 324, 2006))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 324, 2011),__exception_result_var_b186=((char*)(right_value189=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 324, 2007)), "18field.c", 324, 2008))->c_value,child_field_name_122,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 324, 2009)), "18field.c", 324, 2010))->c_value))), come_pop_stackframe(), __exception_result_var_b186));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        __dec_obj75=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 327, 2012)), "18field.c", 327, 2013))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 327, 2012)), "18field.c", 327, 2013))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 327, 2018),__exception_result_var_b187=((char*)(right_value190=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 327, 2014)), "18field.c", 327, 2015))->c_value,name_108,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_110, "18field.c", 327, 2016)), "18field.c", 327, 2017))->c_value))), come_pop_stackframe(), __exception_result_var_b187));
                        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    (come_push_stackframe("18field.c", 331,2023),err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "18field.c", 331, 2019)), "18field.c", 331, 2020))->type, "18field.c", 331, 2021)), "18field.c", 331, 2022))->mPointerNum),come_pop_stackframe());
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
    }
    __dec_obj76=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 336, 2024)), "18field.c", 336, 2025))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 336, 2024)), "18field.c", 336, 2025))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(come_push_stackframe("18field.c", 336, 2026),__exception_result_var_b188=sType_clone(field_type_120), come_pop_stackframe(), __exception_result_var_b188))));
    come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 337, 2027)), "18field.c", 337, 2028))->var=((void*)0);
    (come_push_stackframe("18field.c", 339, 2033),__exception_result_var_b189=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 339, 2029)), "18field.c", 339, 2030))->stack, "18field.c", 339, 2031)), "18field.c", 339, 2032)),(struct CVALUE*)come_increment_ref_count(come_value_140)), come_pop_stackframe(), __exception_result_var_b189);
    (come_push_stackframe("18field.c", 341,2036),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_140, "18field.c", 341, 2034)), "18field.c", 341, 2035))->c_value),come_pop_stackframe());
    __result108__ = (_Bool)1;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional168=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 1573)), "sNodeBase_finalize", 0, 1574))->sname!=((void*)0),        _if_conditional168) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 1575)), "sNodeBase_finalize", 0, 1576))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 1575)), "sNodeBase_finalize", 0, 1576))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_115;
void* __exception_result_var_b134;
unsigned int __exception_result_var_b135;
unsigned int hash_116;
unsigned int it_117;
_Bool _while_condtional19;
_Bool _if_conditional176;
_Bool __exception_result_var_b136;
_Bool _if_conditional177;
struct sClass* __result89__;
_Bool _if_conditional185;
_Bool _if_conditional186;
struct sClass* __result90__;
struct sClass* __result91__;
struct sClass* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_115, 0, sizeof(struct sClass*));
memset(&hash_116, 0, sizeof(unsigned int));
memset(&it_117, 0, sizeof(unsigned int));
        (come_push_stackframe("./neo-c.h", 1526, 1641),__exception_result_var_b134=memset(&default_value_115,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b134);
        hash_116=(come_push_stackframe("./neo-c.h", 1528, 1644),__exception_result_var_b135=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 1642)), "./neo-c.h", 1528, 1643))), come_pop_stackframe(), __exception_result_var_b135)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1528, 1645)), "./neo-c.h", 1528, 1646))->size;
        it_117=hash_116;
        while(_while_condtional19=(_Bool)1,        _while_condtional19) {
            if(_if_conditional176=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1532, 1647)), "./neo-c.h", 1532, 1648))->item_existance, "./neo-c.h", 1532, 1649))[it_117],            _if_conditional176) {
                if(_if_conditional177=(come_push_stackframe("./neo-c.h", 1534, 1655),__exception_result_var_b136=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1534, 1650)), "./neo-c.h", 1534, 1651))->keys, "./neo-c.h", 1534, 1652))[it_117], "./neo-c.h", 1534, 1653)), "./neo-c.h", 1534, 1654)),key), come_pop_stackframe(), __exception_result_var_b136),                _if_conditional177) {
                    __result89__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1536, 1656)), "./neo-c.h", 1536, 1657))->items, "./neo-c.h", 1536, 1658))[it_117];
                    come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result89__;
                }
                it_117++;
                if(_if_conditional185=it_117>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1541, 1691)), "./neo-c.h", 1541, 1692))->size,                _if_conditional185) {
                    it_117=0;
                }
                else {
                    if(_if_conditional186=it_117==hash_116,                    _if_conditional186) {
                        __result90__ = __result_obj__ = default_value_115;
                        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result90__;
                    }
                }
            }
            else {
                __result91__ = __result_obj__ = default_value_115;
                come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result91__;
            }
        }
        __result92__ = __result_obj__ = default_value_115;
        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result92__;
        come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional178=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1659)), "sClass_finalize", 0, 1660))->mName!=((void*)0),                        _if_conditional178) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1661)), "sClass_finalize", 0, 1662))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1661)), "sClass_finalize", 0, 1662))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional179=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1663)), "sClass_finalize", 1, 1664))->mFields!=((void*)0),                        _if_conditional179) {
                            come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1665)), "sClass_finalize", 1, 1666))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional183=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1683)), "sClass_finalize", 2, 1684))->mDeclareSName!=((void*)0),                        _if_conditional183) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1685)), "sClass_finalize", 2, 1686))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1685)), "sClass_finalize", 2, 1686))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional184=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1687)), "sClass_finalize", 3, 1688))->mParentClassName!=((void*)0),                        _if_conditional184) {
                            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1689)), "sClass_finalize", 3, 1690))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1689)), "sClass_finalize", 3, 1690))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                                it_118=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 1667)), "./neo-c.h", 120, 1668))->head;
                                while(_while_condtional20=it_118!=((void*)0),                                _while_condtional20) {
                                    prev_it_119=it_118;
                                    it_118=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_118, "./neo-c.h", 123, 1669)), "./neo-c.h", 123, 1670))->next;
                                    come_call_finalizer3(prev_it_119,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional180=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1671)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1672))->item!=((void*)0),                                        _if_conditional180) {
                                            come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1673)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 1674))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional181=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1675)), "tuple2$2charphsTypephp_finalize", 0, 1676))->v1!=((void*)0),                                                _if_conditional181) {
                                                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1677)), "tuple2$2charphsTypephp_finalize", 0, 1678))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1677)), "tuple2$2charphsTypephp_finalize", 0, 1678))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional182=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 1679)), "tuple2$2charphsTypephp_finalize", 1, 1680))->v2!=((void*)0),                                                _if_conditional182) {
                                                    come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 1681)), "tuple2$2charphsTypephp_finalize", 1, 1682))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional188;
struct tuple2$2charphsTypeph* result_124;
void* __exception_result_var_b139;
struct tuple2$2charphsTypeph* __result94__;
_Bool _if_conditional189;
struct tuple2$2charphsTypeph* __result95__;
struct tuple2$2charphsTypeph* result_125;
void* __exception_result_var_b140;
struct tuple2$2charphsTypeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_125, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional188=self==((void*)0),        _if_conditional188) {
            (come_push_stackframe("./neo-c.h", 284, 1708),__exception_result_var_b139=memset(&result_124,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b139);
            __result94__ = __result_obj__ = result_124;
            return __result94__;
        }
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 1709)), "./neo-c.h", 287, 1710))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 1711)), "./neo-c.h", 287, 1712))->head;
        if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 289, 1713)), "./neo-c.h", 289, 1714))->it) {
            __result95__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 290, 1715)), "./neo-c.h", 290, 1716))->it, "./neo-c.h", 290, 1717)), "./neo-c.h", 290, 1718))->item;
            return __result95__;
        }
        (come_push_stackframe("./neo-c.h", 294, 1719),__exception_result_var_b140=memset(&result_125,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b140);
        __result96__ = __result_obj__ = result_125;
        return __result96__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
        __result97__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 317, 1723)), "./neo-c.h", 317, 1724))->it==((void*)0);
        return __result97__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional190;
struct tuple2$2charphsTypeph* result_127;
void* __exception_result_var_b143;
struct tuple2$2charphsTypeph* __result98__;
_Bool _if_conditional191;
struct tuple2$2charphsTypeph* __result99__;
struct tuple2$2charphsTypeph* result_128;
void* __exception_result_var_b144;
struct tuple2$2charphsTypeph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_128, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional190=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 299, 1728)), "./neo-c.h", 299, 1729))->it==((void*)0),        _if_conditional190) {
            (come_push_stackframe("./neo-c.h", 301, 1730),__exception_result_var_b143=memset(&result_127,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b143);
            __result98__ = __result_obj__ = result_127;
            return __result98__;
        }
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 1731)), "./neo-c.h", 305, 1732))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 1733)), "./neo-c.h", 305, 1734))->it, "./neo-c.h", 305, 1735)), "./neo-c.h", 305, 1736))->next;
        if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 307, 1737)), "./neo-c.h", 307, 1738))->it) {
            __result99__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 308, 1739)), "./neo-c.h", 308, 1740))->it, "./neo-c.h", 308, 1741)), "./neo-c.h", 308, 1742))->item;
            return __result99__;
        }
        (come_push_stackframe("./neo-c.h", 312, 1743),__exception_result_var_b144=memset(&result_128,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b144);
        __result100__ = __result_obj__ = result_128;
        return __result100__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional193;
int __result101__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional193=self==((void*)0),        _if_conditional193) {
            __result101__ = 0;
            return __result101__;
        }
        __result102__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 360, 1751)), "./neo-c.h", 360, 1752))->len;
        return __result102__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value192;
struct sNodeBase* __exception_result_var_b190;
struct sNode* __exception_result_var_b191;
void* right_value193;
struct sNode* __dec_obj77;
struct sNullCheckNode* __result109__;
struct sNullCheckNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    (come_push_stackframe("18field.c", 351, 2039),__exception_result_var_b190=((struct sNodeBase*)(right_value192=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "18field.c", 351, 2037)), "18field.c", 351, 2038))),info))), come_pop_stackframe(), __exception_result_var_b190);
    come_call_finalizer3(right_value192,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=((struct sNullCheckNode*)come_null_check(self, "18field.c", 353, 2040))->mLeft;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 353, 2040))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=(come_push_stackframe("18field.c", 353, 2041),__exception_result_var_b191=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b191))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 354, 2042))->mOnlyNullCecker=only_null_checker;
    __result109__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
    __result110__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result110__;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__;
void* right_value194;
char* __exception_result_var_b192;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    __result111__ = __result_obj__ = (come_push_stackframe("18field.c", 361, 2051),__exception_result_var_b192=((char*)(right_value194=__builtin_string("sNullCheckNode"))), come_pop_stackframe(), __exception_result_var_b192);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_150;
_Bool __exception_result_var_b193;
_Bool _if_conditional219;
_Bool __result112__;
void* right_value195;
struct CVALUE* __exception_result_var_b194;
struct CVALUE* left_value_151;
_Bool __exception_result_var_b195;
_Bool _if_conditional220;
void* right_value196;
char* __exception_result_var_b196;
char* method_name_152;
struct sFun* __exception_result_var_b199;
_Bool _if_conditional225;
struct sType* obj_type_155;
int __exception_result_var_b200;
_Bool _if_conditional226;
struct sType* obj_type2_156;
void* right_value197;
char* __exception_result_var_b201;
void* right_value198;
char* __exception_result_var_b202;
char* __dec_obj78;
struct sFun* __exception_result_var_b203;
struct sFun* fun_157;
_Bool _if_conditional227;
_Bool __result117__;
void* right_value199;
struct sType* __exception_result_var_b204;
struct sType* type_158;
void* right_value200;
struct CVALUE* come_value_159;
void* right_value201;
char* __exception_result_var_b205;
char* __dec_obj79;
struct sType* __exception_result_var_b206;
void* right_value202;
struct sType* __dec_obj80;
struct list$1CVALUEph* __exception_result_var_b207;
_Bool _if_conditional228;
struct list$1CVALUEph* __exception_result_var_b208;
_Bool _if_conditional229;
void* right_value203;
struct CVALUE* come_value_160;
void* right_value204;
char* __exception_result_var_b209;
void* right_value205;
char* __exception_result_var_b210;
char* __dec_obj81;
struct sType* __exception_result_var_b211;
void* right_value206;
struct sType* __dec_obj82;
struct list$1CVALUEph* __exception_result_var_b212;
struct list$1CVALUEph* __exception_result_var_b213;
_Bool __result118__;
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
    left_150=((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "18field.c", 366, 2052)), "18field.c", 366, 2053))->mLeft;
    if(_if_conditional219=!(come_push_stackframe("18field.c", 368, 2054),__exception_result_var_b193=node_compile(left_150,info), come_pop_stackframe(), __exception_result_var_b193),    _if_conditional219) {
        __result112__ = (_Bool)0;
        return __result112__;
    }
    left_value_151=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 372, 2055),__exception_result_var_b194=((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b194));
    come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 373,2056),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional220=!((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "18field.c", 375, 2057)), "18field.c", 375, 2058))->mOnlyNullCecker&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 375, 2059)), "18field.c", 375, 2060))->type, "18field.c", 375, 2061)), "18field.c", 375, 2062))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 375, 2063)), "18field.c", 375, 2064))->type, "18field.c", 375, 2065)), "18field.c", 375, 2066))->mNoSolvedGenericsType, "18field.c", 375, 2067)), "18field.c", 375, 2068))->v1&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 375, 2069)), "18field.c", 375, 2070))->type, "18field.c", 375, 2071)), "18field.c", 375, 2072))->mNoSolvedGenericsType, "18field.c", 375, 2073)), "18field.c", 375, 2074))->v1, "18field.c", 375, 2075)), "18field.c", 375, 2076))->mClass&&(come_push_stackframe("18field.c", 375, 2087),__exception_result_var_b195=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 375, 2077)), "18field.c", 375, 2078))->type, "18field.c", 375, 2079)), "18field.c", 375, 2080))->mNoSolvedGenericsType, "18field.c", 375, 2081)), "18field.c", 375, 2082))->v1, "18field.c", 375, 2083)), "18field.c", 375, 2084))->mClass, "18field.c", 375, 2085)), "18field.c", 375, 2086))->mName,"optional"), come_pop_stackframe(), __exception_result_var_b195),    _if_conditional220) {
        method_name_152=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 376, 2090),__exception_result_var_b196=((char*)(right_value196=create_method_name(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 376, 2088)), "18field.c", 376, 2089))->type,(_Bool)0,"expect",info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b196));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional225=(come_push_stackframe("18field.c", 378, 2114),__exception_result_var_b199=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 378, 2091)), "18field.c", 378, 2092))->funcs, "18field.c", 378, 2093)), "18field.c", 378, 2094)),method_name_152,((void*)0)), come_pop_stackframe(), __exception_result_var_b199)==((void*)0),        _if_conditional225) {
            obj_type_155=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 379, 2115)), "18field.c", 379, 2116))->type, "18field.c", 379, 2117)), "18field.c", 379, 2118))->mNoSolvedGenericsType, "18field.c", 379, 2119)), "18field.c", 379, 2120))->v1;
            if(_if_conditional226=(come_push_stackframe("18field.c", 380, 2125),__exception_result_var_b200=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type_155, "18field.c", 380, 2121)), "18field.c", 380, 2122))->mGenericsTypes, "18field.c", 380, 2123)), "18field.c", 380, 2124))), come_pop_stackframe(), __exception_result_var_b200)>0,            _if_conditional226) {
                obj_type2_156=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 381, 2126)), "18field.c", 381, 2127))->type;
                __dec_obj78=method_name_152;
                method_name_152=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 382, 2129),__exception_result_var_b202=((char*)(right_value198=make_generics_function(obj_type2_156,(char*)come_increment_ref_count((come_push_stackframe("18field.c", 382, 2128),__exception_result_var_b201=((char*)(right_value197=__builtin_string("expect"))), come_pop_stackframe(), __exception_result_var_b201)),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b202));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                (come_push_stackframe("18field.c", 385,2136),err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 385, 2130)), "18field.c", 385, 2131))->type, "18field.c", 385, 2132)), "18field.c", 385, 2133))->mClass, "18field.c", 385, 2134)), "18field.c", 385, 2135))->mName),come_pop_stackframe());
                (come_push_stackframe("18field.c", 386,2137),exit(1),come_pop_stackframe());
            }
        }
        fun_157=(come_push_stackframe("18field.c", 390, 2140),__exception_result_var_b203=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 390, 2138)), "18field.c", 390, 2139))->funcs,method_name_152), come_pop_stackframe(), __exception_result_var_b203);
        if(_if_conditional227=fun_157==((void*)0),        _if_conditional227) {
            (come_push_stackframe("18field.c", 393,2141),err_msg(info,"function not found(%s)",method_name_152),come_pop_stackframe());
            __result117__ = (_Bool)1;
            method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result117__;
        }
        type_158=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 397, 2146),__exception_result_var_b204=((struct sType*)(right_value199=solve_generics(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_157, "18field.c", 397, 2142)), "18field.c", 397, 2143))->mResultType,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 397, 2144)), "18field.c", 397, 2145))->type,info))), come_pop_stackframe(), __exception_result_var_b204));
        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 399, "CVALUE"))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_159, "18field.c", 401, 2147)), "18field.c", 401, 2148))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_159, "18field.c", 401, 2147)), "18field.c", 401, 2148))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 401, 2151),__exception_result_var_b205=((char*)(right_value201=xsprintf("%s(%s)",method_name_152,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 401, 2149)), "18field.c", 401, 2150))->c_value))), come_pop_stackframe(), __exception_result_var_b205));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj80=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_159, "18field.c", 402, 2152)), "18field.c", 402, 2153))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_159, "18field.c", 402, 2152)), "18field.c", 402, 2153))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(come_push_stackframe("18field.c", 402, 2154),__exception_result_var_b206=sType_clone(type_158), come_pop_stackframe(), __exception_result_var_b206))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_159, "18field.c", 403, 2155)), "18field.c", 403, 2156))->var=((void*)0);
        (come_push_stackframe("18field.c", 405, 2161),__exception_result_var_b207=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 405, 2157)), "18field.c", 405, 2158))->stack, "18field.c", 405, 2159)), "18field.c", 405, 2160)),(struct CVALUE*)come_increment_ref_count(come_value_159)), come_pop_stackframe(), __exception_result_var_b207);
        (come_push_stackframe("18field.c", 407,2164),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_159, "18field.c", 407, 2162)), "18field.c", 407, 2163))->c_value),come_pop_stackframe());
        method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional228=!gComeDebug,        _if_conditional228) {
            (come_push_stackframe("18field.c", 410, 2169),__exception_result_var_b208=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 410, 2165)), "18field.c", 410, 2166))->stack, "18field.c", 410, 2167)), "18field.c", 410, 2168)),(struct CVALUE*)come_increment_ref_count(left_value_151)), come_pop_stackframe(), __exception_result_var_b208);
        }
        else {
            if(_if_conditional229=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 412, 2170)), "18field.c", 412, 2171))->type, "18field.c", 412, 2172)), "18field.c", 412, 2173))->mPointerNum>0,            _if_conditional229) {
                come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 413, "CVALUE"))));
                come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj81=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "18field.c", 415, 2174)), "18field.c", 415, 2175))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "18field.c", 415, 2174)), "18field.c", 415, 2175))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 415, 2186),__exception_result_var_b210=((char*)(right_value205=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("18field.c", 415, 2178),__exception_result_var_b209=((char*)(right_value204=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 415, 2176)), "18field.c", 415, 2177))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b209), "18field.c", 415, 2179)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 415, 2180)), "18field.c", 415, 2181))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 415, 2182)), "18field.c", 415, 2183))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 415, 2184)), "18field.c", 415, 2185))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b210));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj82=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "18field.c", 416, 2187)), "18field.c", 416, 2188))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "18field.c", 416, 2187)), "18field.c", 416, 2188))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=(come_push_stackframe("18field.c", 416, 2191),__exception_result_var_b211=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_151, "18field.c", 416, 2189)), "18field.c", 416, 2190))->type), come_pop_stackframe(), __exception_result_var_b211))));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "18field.c", 417, 2192)), "18field.c", 417, 2193))->var=((void*)0);
                (come_push_stackframe("18field.c", 419, 2198),__exception_result_var_b212=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 419, 2194)), "18field.c", 419, 2195))->stack, "18field.c", 419, 2196)), "18field.c", 419, 2197)),(struct CVALUE*)come_increment_ref_count(come_value_160)), come_pop_stackframe(), __exception_result_var_b212);
                (come_push_stackframe("18field.c", 421,2201),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "18field.c", 421, 2199)), "18field.c", 421, 2200))->c_value),come_pop_stackframe());
                come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                (come_push_stackframe("18field.c", 424, 2206),__exception_result_var_b213=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 424, 2202)), "18field.c", 424, 2203))->stack, "18field.c", 424, 2204)), "18field.c", 424, 2205)),(struct CVALUE*)come_increment_ref_count(left_value_151)), come_pop_stackframe(), __exception_result_var_b213);
            }
        }
    }
    __result118__ = (_Bool)1;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result118__;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b197;
unsigned int hash_153;
unsigned int it_154;
_Bool _while_condtional21;
_Bool _if_conditional221;
_Bool __exception_result_var_b198;
_Bool _if_conditional222;
struct sFun* __result113__;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct sFun* __result114__;
struct sFun* __result115__;
struct sFun* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_153, 0, sizeof(unsigned int));
memset(&it_154, 0, sizeof(unsigned int));
            hash_153=(come_push_stackframe("./neo-c.h", 1207, 2097),__exception_result_var_b197=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2095)), "./neo-c.h", 1207, 2096))), come_pop_stackframe(), __exception_result_var_b197)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1207, 2098)), "./neo-c.h", 1207, 2099))->size;
            it_154=hash_153;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional221=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1211, 2100)), "./neo-c.h", 1211, 2101))->item_existance, "./neo-c.h", 1211, 2102))[it_154],                _if_conditional221) {
                    if(_if_conditional222=(come_push_stackframe("./neo-c.h", 1213, 2108),__exception_result_var_b198=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1213, 2103)), "./neo-c.h", 1213, 2104))->keys, "./neo-c.h", 1213, 2105))[it_154], "./neo-c.h", 1213, 2106)), "./neo-c.h", 1213, 2107)),key), come_pop_stackframe(), __exception_result_var_b198),                    _if_conditional222) {
                        __result113__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1215, 2109)), "./neo-c.h", 1215, 2110))->items, "./neo-c.h", 1215, 2111))[it_154];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result113__;
                    }
                    it_154++;
                    if(_if_conditional223=it_154>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1220, 2112)), "./neo-c.h", 1220, 2113))->size,                    _if_conditional223) {
                        it_154=0;
                    }
                    else {
                        if(_if_conditional224=it_154==hash_153,                        _if_conditional224) {
                            __result114__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result114__;
                        }
                    }
                }
                else {
                    __result115__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result115__;
                }
            }
            __result116__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result116__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value207;
struct sNodeBase* __exception_result_var_b214;
struct sNode* __exception_result_var_b215;
void* right_value208;
struct sNode* __dec_obj83;
struct sNullableNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
right_value208 = (void*)0;
    (come_push_stackframe("18field.c", 435, 2209),__exception_result_var_b214=((struct sNodeBase*)(right_value207=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "18field.c", 435, 2207)), "18field.c", 435, 2208))),info))), come_pop_stackframe(), __exception_result_var_b214);
    come_call_finalizer3(right_value207,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj83=((struct sNullableNode*)come_null_check(self, "18field.c", 437, 2210))->mLeft;
    ((struct sNullableNode*)come_null_check(self, "18field.c", 437, 2210))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=(come_push_stackframe("18field.c", 437, 2211),__exception_result_var_b215=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b215))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result119__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result119__;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__;
void* right_value209;
char* __exception_result_var_b216;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    __result120__ = __result_obj__ = (come_push_stackframe("18field.c", 442, 2220),__exception_result_var_b216=((char*)(right_value209=__builtin_string("sNullableNode"))), come_pop_stackframe(), __exception_result_var_b216);
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_161;
_Bool __exception_result_var_b217;
_Bool _if_conditional232;
_Bool __result121__;
void* right_value210;
struct CVALUE* __exception_result_var_b218;
struct CVALUE* left_value_162;
_Bool _if_conditional233;
struct CVALUE* __exception_result_var_b221;
void* right_value214;
struct CVALUE* come_value_163;
struct list$1CVALUEph* __exception_result_var_b222;
struct list$1CVALUEph* __exception_result_var_b223;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_161, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&left_value_162, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
    left_161=((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "18field.c", 447, 2221)), "18field.c", 447, 2222))->mLeft;
    if(_if_conditional232=!(come_push_stackframe("18field.c", 449, 2223),__exception_result_var_b217=node_compile(left_161,info), come_pop_stackframe(), __exception_result_var_b217),    _if_conditional232) {
        __result121__ = (_Bool)0;
        return __result121__;
    }
    left_value_162=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 453, 2224),__exception_result_var_b218=((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b218));
    come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 454,2225),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional233=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_162, "18field.c", 456, 2226)), "18field.c", 456, 2227))->type, "18field.c", 456, 2228)), "18field.c", 456, 2229))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_162, "18field.c", 456, 2230)), "18field.c", 456, 2231))->type, "18field.c", 456, 2232)), "18field.c", 456, 2233))->mNullValue,    _if_conditional233) {
        come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=(come_push_stackframe("18field.c", 457, 2252),__exception_result_var_b221=CVALUE_clone(left_value_162), come_pop_stackframe(), __exception_result_var_b221))));
        come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "18field.c", 459, 2253)), "18field.c", 459, 2254))->type, "18field.c", 459, 2255)), "18field.c", 459, 2256))->mNullValue=(_Bool)0;
        (come_push_stackframe("18field.c", 461, 2261),__exception_result_var_b222=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 461, 2257)), "18field.c", 461, 2258))->stack, "18field.c", 461, 2259)), "18field.c", 461, 2260)),(struct CVALUE*)come_increment_ref_count(come_value_163)), come_pop_stackframe(), __exception_result_var_b222);
        (come_push_stackframe("18field.c", 463,2264),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "18field.c", 463, 2262)), "18field.c", 463, 2263))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        (come_push_stackframe("18field.c", 466, 2269),__exception_result_var_b223=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 466, 2265)), "18field.c", 466, 2266))->stack, "18field.c", 466, 2267)), "18field.c", 466, 2268)),(struct CVALUE*)come_increment_ref_count(left_value_162)), come_pop_stackframe(), __exception_result_var_b223);
    }
    __result124__ = (_Bool)1;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result124__;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional234;
struct CVALUE* __result122__;
void* right_value211;
struct CVALUE* result_164;
_Bool _if_conditional235;
char* __exception_result_var_b219;
void* right_value212;
char* __dec_obj84;
_Bool _if_conditional236;
struct sType* __exception_result_var_b220;
void* right_value213;
struct sType* __dec_obj85;
_Bool _if_conditional237;
struct CVALUE* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
memset(&result_164, 0, sizeof(struct CVALUE*));
right_value212 = (void*)0;
right_value213 = (void*)0;
            if(_if_conditional234=self==(void*)0,            _if_conditional234) {
                __result122__ = __result_obj__ = (void*)0;
                return __result122__;
            }
            result_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value211,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional235=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4, 2234)), "CVALUE_clone", 4, 2235))->c_value!=((void*)0),            _if_conditional235) {
                __dec_obj84=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_164, "CVALUE_clone", 4, 2236)), "CVALUE_clone", 4, 2237))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_164, "CVALUE_clone", 4, 2236)), "CVALUE_clone", 4, 2237))->c_value=(char*)come_increment_ref_count(((char*)(right_value212=(come_push_stackframe("CVALUE_clone", 4, 2240),__exception_result_var_b219=string_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4, 2238)), "CVALUE_clone", 4, 2239))->c_value), come_pop_stackframe(), __exception_result_var_b219))));
                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional236=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5, 2241)), "CVALUE_clone", 5, 2242))->type!=((void*)0),            _if_conditional236) {
                __dec_obj85=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_164, "CVALUE_clone", 5, 2243)), "CVALUE_clone", 5, 2244))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_164, "CVALUE_clone", 5, 2243)), "CVALUE_clone", 5, 2244))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(come_push_stackframe("CVALUE_clone", 5, 2247),__exception_result_var_b220=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5, 2245)), "CVALUE_clone", 5, 2246))->type), come_pop_stackframe(), __exception_result_var_b220))));
                come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional237=self!=((void*)0),            _if_conditional237) {
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_164, "CVALUE_clone", 6, 2248)), "CVALUE_clone", 6, 2249))->var=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6, 2250)), "CVALUE_clone", 6, 2251))->var;
            }
            __result123__ = __result_obj__ = result_164;
            come_call_finalizer3(result_164,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result123__;
            come_call_finalizer3(result_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value215;
struct sNodeBase* __exception_result_var_b224;
struct sNode* __exception_result_var_b225;
void* right_value216;
struct sNode* __dec_obj86;
struct sNode* __exception_result_var_b226;
void* right_value217;
struct sNode* __dec_obj87;
struct sNode* __exception_result_var_b227;
void* right_value218;
struct sNode* __dec_obj88;
struct sRangeCheckNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    (come_push_stackframe("18field.c", 477, 2272),__exception_result_var_b224=((struct sNodeBase*)(right_value215=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "18field.c", 477, 2270)), "18field.c", 477, 2271))),info))), come_pop_stackframe(), __exception_result_var_b224);
    come_call_finalizer3(right_value215,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj86=((struct sRangeCheckNode*)come_null_check(self, "18field.c", 479, 2273))->mLeft;
    ((struct sRangeCheckNode*)come_null_check(self, "18field.c", 479, 2273))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=(come_push_stackframe("18field.c", 479, 2274),__exception_result_var_b225=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b225))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj87=((struct sRangeCheckNode*)come_null_check(self, "18field.c", 480, 2275))->mBegin;
    ((struct sRangeCheckNode*)come_null_check(self, "18field.c", 480, 2275))->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=(come_push_stackframe("18field.c", 480, 2276),__exception_result_var_b226=sNode_clone(begin), come_pop_stackframe(), __exception_result_var_b226))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj88=((struct sRangeCheckNode*)come_null_check(self, "18field.c", 481, 2277))->mEnd;
    ((struct sRangeCheckNode*)come_null_check(self, "18field.c", 481, 2277))->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=(come_push_stackframe("18field.c", 481, 2278),__exception_result_var_b227=sNode_clone(end), come_pop_stackframe(), __exception_result_var_b227))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result125__ = __result_obj__ = self;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result125__;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__;
void* right_value219;
char* __exception_result_var_b228;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    __result126__ = __result_obj__ = (come_push_stackframe("18field.c", 486, 2295),__exception_result_var_b228=((char*)(right_value219=__builtin_string("sRangeCheckNode"))), come_pop_stackframe(), __exception_result_var_b228);
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_165;
_Bool __exception_result_var_b229;
_Bool _if_conditional242;
_Bool __result127__;
void* right_value220;
struct CVALUE* __exception_result_var_b230;
struct CVALUE* left_value_166;
struct sNode* begin_167;
_Bool __exception_result_var_b231;
_Bool _if_conditional243;
_Bool __result128__;
void* right_value221;
struct CVALUE* __exception_result_var_b232;
struct CVALUE* begin_value_168;
struct sNode* end_169;
_Bool __exception_result_var_b233;
_Bool _if_conditional244;
_Bool __result129__;
void* right_value222;
struct CVALUE* __exception_result_var_b234;
struct CVALUE* end_value_170;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value223;
struct CVALUE* come_value_171;
void* right_value224;
char* __exception_result_var_b235;
void* right_value225;
char* __exception_result_var_b236;
char* __dec_obj89;
struct sType* __exception_result_var_b237;
void* right_value226;
struct sType* __dec_obj90;
struct list$1CVALUEph* __exception_result_var_b238;
void* right_value227;
struct CVALUE* come_value_172;
void* right_value228;
char* __exception_result_var_b239;
void* right_value229;
char* __exception_result_var_b240;
char* __dec_obj91;
struct sType* __exception_result_var_b241;
void* right_value230;
struct sType* __dec_obj92;
struct list$1CVALUEph* __exception_result_var_b242;
struct list$1CVALUEph* __exception_result_var_b243;
_Bool __result130__;
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
    left_165=((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "18field.c", 491, 2296)), "18field.c", 491, 2297))->mLeft;
    if(_if_conditional242=!(come_push_stackframe("18field.c", 493, 2298),__exception_result_var_b229=node_compile(left_165,info), come_pop_stackframe(), __exception_result_var_b229),    _if_conditional242) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    left_value_166=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 497, 2299),__exception_result_var_b230=((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b230));
    come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 498,2300),dec_stack_ptr(1,info),come_pop_stackframe());
    begin_167=((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "18field.c", 500, 2301)), "18field.c", 500, 2302))->mBegin;
    if(_if_conditional243=!(come_push_stackframe("18field.c", 502, 2303),__exception_result_var_b231=node_compile(begin_167,info), come_pop_stackframe(), __exception_result_var_b231),    _if_conditional243) {
        __result128__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result128__;
    }
    begin_value_168=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 506, 2304),__exception_result_var_b232=((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b232));
    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 507,2305),dec_stack_ptr(1,info),come_pop_stackframe());
    end_169=((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "18field.c", 509, 2306)), "18field.c", 509, 2307))->mEnd;
    if(_if_conditional244=!(come_push_stackframe("18field.c", 511, 2308),__exception_result_var_b233=node_compile(end_169,info), come_pop_stackframe(), __exception_result_var_b233),    _if_conditional244) {
        __result129__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result129__;
    }
    end_value_170=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 515, 2309),__exception_result_var_b234=((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b234));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 516,2310),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional245=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 518, 2311)), "18field.c", 518, 2312))->type, "18field.c", 518, 2313)), "18field.c", 518, 2314))->mPointerNum>0,    _if_conditional245) {
        if(_if_conditional246=!gComeDebug,        _if_conditional246) {
            come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 520, "CVALUE"))));
            come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj89=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "18field.c", 522, 2315)), "18field.c", 522, 2316))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "18field.c", 522, 2315)), "18field.c", 522, 2316))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 522, 2322),__exception_result_var_b236=((char*)(right_value225=xsprintf("(*((%s)%s))",(come_push_stackframe("18field.c", 522, 2319),__exception_result_var_b235=((char*)(right_value224=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 522, 2317)), "18field.c", 522, 2318))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b235),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 522, 2320)), "18field.c", 522, 2321))->c_value))), come_pop_stackframe(), __exception_result_var_b236));
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 524, 2323)), "18field.c", 524, 2324))->type, "18field.c", 524, 2325)), "18field.c", 524, 2326))->mPointerNum--;
            __dec_obj90=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "18field.c", 525, 2327)), "18field.c", 525, 2328))->type;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "18field.c", 525, 2327)), "18field.c", 525, 2328))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=(come_push_stackframe("18field.c", 525, 2331),__exception_result_var_b237=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 525, 2329)), "18field.c", 525, 2330))->type), come_pop_stackframe(), __exception_result_var_b237))));
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "18field.c", 526, 2332)), "18field.c", 526, 2333))->var=((void*)0);
            (come_push_stackframe("18field.c", 528, 2338),__exception_result_var_b238=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 528, 2334)), "18field.c", 528, 2335))->stack, "18field.c", 528, 2336)), "18field.c", 528, 2337)),(struct CVALUE*)come_increment_ref_count(come_value_171)), come_pop_stackframe(), __exception_result_var_b238);
            (come_push_stackframe("18field.c", 530,2341),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "18field.c", 530, 2339)), "18field.c", 530, 2340))->c_value),come_pop_stackframe());
            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 533, "CVALUE"))));
            come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj91=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "18field.c", 535, 2342)), "18field.c", 535, 2343))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "18field.c", 535, 2342)), "18field.c", 535, 2343))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 535, 2357),__exception_result_var_b240=((char*)(right_value229=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",(come_push_stackframe("18field.c", 535, 2346),__exception_result_var_b239=((char*)(right_value228=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 535, 2344)), "18field.c", 535, 2345))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b239),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 535, 2347)), "18field.c", 535, 2348))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(begin_value_168, "18field.c", 535, 2349)), "18field.c", 535, 2350))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(end_value_170, "18field.c", 535, 2351)), "18field.c", 535, 2352))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 535, 2353)), "18field.c", 535, 2354))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 535, 2355)), "18field.c", 535, 2356))->sline))), come_pop_stackframe(), __exception_result_var_b240));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 536, 2358)), "18field.c", 536, 2359))->type, "18field.c", 536, 2360)), "18field.c", 536, 2361))->mPointerNum--;
            __dec_obj92=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "18field.c", 537, 2362)), "18field.c", 537, 2363))->type;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "18field.c", 537, 2362)), "18field.c", 537, 2363))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(come_push_stackframe("18field.c", 537, 2366),__exception_result_var_b241=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_166, "18field.c", 537, 2364)), "18field.c", 537, 2365))->type), come_pop_stackframe(), __exception_result_var_b241))));
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "18field.c", 538, 2367)), "18field.c", 538, 2368))->var=((void*)0);
            (come_push_stackframe("18field.c", 540, 2373),__exception_result_var_b242=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 540, 2369)), "18field.c", 540, 2370))->stack, "18field.c", 540, 2371)), "18field.c", 540, 2372)),(struct CVALUE*)come_increment_ref_count(come_value_172)), come_pop_stackframe(), __exception_result_var_b242);
            (come_push_stackframe("18field.c", 542,2376),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "18field.c", 542, 2374)), "18field.c", 542, 2375))->c_value),come_pop_stackframe());
            come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        (come_push_stackframe("18field.c", 546, 2381),__exception_result_var_b243=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 546, 2377)), "18field.c", 546, 2378))->stack, "18field.c", 546, 2379)), "18field.c", 546, 2380)),(struct CVALUE*)come_increment_ref_count(left_value_166)), come_pop_stackframe(), __exception_result_var_b243);
    }
    __result130__ = (_Bool)1;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result130__;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value231;
struct sNodeBase* __exception_result_var_b244;
struct sNode* __exception_result_var_b245;
void* right_value232;
struct sNode* __dec_obj93;
void* right_value233;
char* __exception_result_var_b246;
char* __dec_obj94;
struct sLoadFieldNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    (come_push_stackframe("18field.c", 557, 2384),__exception_result_var_b244=((struct sNodeBase*)(right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 557, 2382)), "18field.c", 557, 2383))),info))), come_pop_stackframe(), __exception_result_var_b244);
    come_call_finalizer3(right_value231,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 559, 2385))->mLeft;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 559, 2385))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=(come_push_stackframe("18field.c", 559, 2386),__exception_result_var_b245=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b245))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj94=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 560, 2387))->mName;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 560, 2387))->mName=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 560, 2388),__exception_result_var_b246=((char*)(right_value233=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b246));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result131__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result131__;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__;
void* right_value234;
char* __exception_result_var_b247;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    __result132__ = __result_obj__ = (come_push_stackframe("18field.c", 565, 2401),__exception_result_var_b247=((char*)(right_value234=__builtin_string("sLoadFieldNode"))), come_pop_stackframe(), __exception_result_var_b247);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_173;
void* right_value235;
char* __exception_result_var_b248;
char* name_174;
_Bool __exception_result_var_b249;
_Bool _if_conditional250;
_Bool __result133__;
void* right_value236;
struct CVALUE* __exception_result_var_b250;
struct CVALUE* left_value_175;
_Bool _if_conditional251;
void* right_value237;
char* __exception_result_var_b251;
void* right_value238;
char* __exception_result_var_b252;
char* __dec_obj95;
struct sType* left_type_176;
void* right_value239;
struct sType* __exception_result_var_b253;
struct sType* left_type2_177;
struct sClass* klass_178;
struct sClass* __exception_result_var_b254;
struct sType* __dec_obj96;
struct sType* field_type_179;
int index_180;
char* __dec_obj97;
char* child_field_name_181;
struct sClass* __exception_result_var_b255;
_Bool _if_conditional252;
_Bool __result134__;
struct list$1tuple2$2charphsTypephph* o2_saved_182;
struct tuple2$2charphsTypeph* __exception_result_var_b256;
struct tuple2$2charphsTypeph* field_183;
_Bool __exception_result_var_b257;
struct tuple2$2charphsTypeph* __exception_result_var_b258;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_184;
struct sType* field_type2_185;
_Bool __exception_result_var_b259;
_Bool _if_conditional253;
struct sType* __exception_result_var_b260;
void* right_value240;
struct sType* __dec_obj98;
int __exception_result_var_b261;
_Bool _if_conditional254;
struct list$1tuple2$2charphsTypephph* o2_saved_186;
struct tuple2$2charphsTypeph* __exception_result_var_b262;
struct tuple2$2charphsTypeph* field_187;
_Bool __exception_result_var_b263;
struct tuple2$2charphsTypeph* __exception_result_var_b264;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_188;
struct sType* field_type2_189;
struct sClass* klass2_190;
struct list$1tuple2$2charphsTypephph* o2_saved_191;
struct tuple2$2charphsTypeph* __exception_result_var_b265;
struct tuple2$2charphsTypeph* field2_192;
_Bool __exception_result_var_b266;
struct tuple2$2charphsTypeph* __exception_result_var_b267;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_193;
struct sType* field_type3_194;
_Bool __exception_result_var_b268;
_Bool _if_conditional255;
void* right_value241;
char* __exception_result_var_b269;
char* __dec_obj99;
struct sType* __exception_result_var_b270;
void* right_value242;
struct sType* __dec_obj100;
_Bool _if_conditional256;
_Bool __exception_result_var_b271;
_Bool _if_conditional257;
struct sType* __exception_result_var_b272;
void* right_value243;
struct sType* __dec_obj101;
int __exception_result_var_b273;
_Bool _if_conditional258;
_Bool __result135__;
void* right_value244;
struct CVALUE* come_value_195;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value245;
char* __exception_result_var_b274;
char* __dec_obj102;
void* right_value246;
char* __exception_result_var_b275;
char* __dec_obj103;
_Bool _if_conditional261;
void* right_value247;
char* __exception_result_var_b276;
char* __dec_obj104;
void* right_value248;
char* __exception_result_var_b277;
char* __dec_obj105;
struct sType* __exception_result_var_b278;
void* right_value249;
struct sType* __dec_obj106;
_Bool _if_conditional262;
_Bool __result136__;
int __exception_result_var_b279;
_Bool _if_conditional264;
struct sType* __exception_result_var_b280;
void* right_value250;
struct sType* __dec_obj107;
struct list$1sNodeph* __exception_result_var_b281;
struct list$1CVALUEph* __exception_result_var_b282;
_Bool __result140__;
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
right_value240 = (void*)0;
memset(&o2_saved_186, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_187, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&klass2_190, 0, sizeof(struct sClass*));
memset(&o2_saved_191, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_192, 0, sizeof(struct tuple2$2charphsTypeph*));
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
    left_173=((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 570, 2402)), "18field.c", 570, 2403))->mLeft;
    name_174=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 571, 2406),__exception_result_var_b248=((char*)(right_value235=__builtin_string(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 571, 2404)), "18field.c", 571, 2405))->mName))), come_pop_stackframe(), __exception_result_var_b248));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional250=!(come_push_stackframe("18field.c", 573, 2407),__exception_result_var_b249=node_compile(left_173,info), come_pop_stackframe(), __exception_result_var_b249),    _if_conditional250) {
        __result133__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    left_value_175=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 577, 2408),__exception_result_var_b250=((struct CVALUE*)(right_value236=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b250));
    come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 578,2409),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional251=gComeDebug&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 580, 2410)), "18field.c", 580, 2411))->type, "18field.c", 580, 2412)), "18field.c", 580, 2413))->mPointerNum>0,    _if_conditional251) {
        __dec_obj95=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 581, 2414)), "18field.c", 581, 2415))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 581, 2414)), "18field.c", 581, 2415))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 581, 2426),__exception_result_var_b252=((char*)(right_value238=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("18field.c", 581, 2418),__exception_result_var_b251=((char*)(right_value237=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 581, 2416)), "18field.c", 581, 2417))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b251), "18field.c", 581, 2419)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 581, 2420)), "18field.c", 581, 2421))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 581, 2422)), "18field.c", 581, 2423))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 581, 2424)), "18field.c", 581, 2425))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b252));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_176=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 584, 2427)), "18field.c", 584, 2428))->type;
    left_type2_177=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 586, 2429),__exception_result_var_b253=((struct sType*)(right_value239=solve_generics(left_type_176,left_type_176,info))), come_pop_stackframe(), __exception_result_var_b253));
    come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_178=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type2_177, "18field.c", 588, 2430)), "18field.c", 588, 2431))->mClass;
    klass_178=(come_push_stackframe("18field.c", 589, 2436),__exception_result_var_b254=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 589, 2432)), "18field.c", 589, 2433))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 589, 2434)), "18field.c", 589, 2435))->mName), come_pop_stackframe(), __exception_result_var_b254);
    __dec_obj96=field_type_179;
    field_type_179=((void*)0);
    come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
    index_180=0;
    __dec_obj97=child_field_name_181;
    child_field_name_181=((void*)0);
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    klass_178=(come_push_stackframe("18field.c", 594, 2441),__exception_result_var_b255=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 594, 2437)), "18field.c", 594, 2438))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 594, 2439)), "18field.c", 594, 2440))->mName), come_pop_stackframe(), __exception_result_var_b255);
    if(_if_conditional252=klass_178==((void*)0)||((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 595, 2442)), "18field.c", 595, 2443))->mFields==((void*)0),    _if_conditional252) {
        (come_push_stackframe("18field.c", 596,2446),err_msg(info,"invalid class %s",((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 596, 2444)), "18field.c", 596, 2445))->mName),come_pop_stackframe());
        __result134__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result134__;
    }
    for(    o2_saved_182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 599, 2447)), "18field.c", 599, 2448))->mFields)),field_183=(come_push_stackframe("18field.c", 599, 2451),__exception_result_var_b256=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "18field.c", 599, 2449)), "18field.c", 599, 2450))), come_pop_stackframe(), __exception_result_var_b256);    !(come_push_stackframe("18field.c", 599, 2454),__exception_result_var_b257=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "18field.c", 599, 2452)), "18field.c", 599, 2453))), come_pop_stackframe(), __exception_result_var_b257);    field_183=(come_push_stackframe("18field.c", 599, 2457),__exception_result_var_b258=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "18field.c", 599, 2455)), "18field.c", 599, 2456))), come_pop_stackframe(), __exception_result_var_b258)    ){
        multiple_assign_var4=field_183;
        field_name_184=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_185=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(_if_conditional253=(come_push_stackframe("18field.c", 602, 2458),__exception_result_var_b259=string_operator_equals(field_name_184,name_174), come_pop_stackframe(), __exception_result_var_b259),        _if_conditional253) {
            __dec_obj98=field_type_179;
            field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(come_push_stackframe("18field.c", 603, 2459),__exception_result_var_b260=sType_clone(field_type2_185), come_pop_stackframe(), __exception_result_var_b260))));
            come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
            field_name_184 = come_decrement_ref_count2(field_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_180++;
        field_name_184 = come_decrement_ref_count2(field_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_182,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(_if_conditional254=index_180==(come_push_stackframe("18field.c", 610, 2464),__exception_result_var_b261=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 610, 2460)), "18field.c", 610, 2461))->mFields, "18field.c", 610, 2462)), "18field.c", 610, 2463))), come_pop_stackframe(), __exception_result_var_b261),    _if_conditional254) {
        index_180=0;
        for(        o2_saved_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 612, 2465)), "18field.c", 612, 2466))->mFields)),field_187=(come_push_stackframe("18field.c", 612, 2469),__exception_result_var_b262=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_186), "18field.c", 612, 2467)), "18field.c", 612, 2468))), come_pop_stackframe(), __exception_result_var_b262);        !(come_push_stackframe("18field.c", 612, 2472),__exception_result_var_b263=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_186), "18field.c", 612, 2470)), "18field.c", 612, 2471))), come_pop_stackframe(), __exception_result_var_b263);        field_187=(come_push_stackframe("18field.c", 612, 2475),__exception_result_var_b264=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_186), "18field.c", 612, 2473)), "18field.c", 612, 2474))), come_pop_stackframe(), __exception_result_var_b264)        ){
            multiple_assign_var5=field_187;
            field_name_188=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_189=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_190=((struct sType*)come_null_check(((struct sType*)come_null_check(field_type2_189, "18field.c", 615, 2476)), "18field.c", 615, 2477))->mClass;
            for(            o2_saved_191=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_190, "18field.c", 617, 2478)), "18field.c", 617, 2479))->mFields)),field2_192=(come_push_stackframe("18field.c", 617, 2482),__exception_result_var_b265=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_191), "18field.c", 617, 2480)), "18field.c", 617, 2481))), come_pop_stackframe(), __exception_result_var_b265);            !(come_push_stackframe("18field.c", 617, 2485),__exception_result_var_b266=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_191), "18field.c", 617, 2483)), "18field.c", 617, 2484))), come_pop_stackframe(), __exception_result_var_b266);            field2_192=(come_push_stackframe("18field.c", 617, 2488),__exception_result_var_b267=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_191), "18field.c", 617, 2486)), "18field.c", 617, 2487))), come_pop_stackframe(), __exception_result_var_b267)            ){
                multiple_assign_var6=field2_192;
                field_name2_193=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_194=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional255=(come_push_stackframe("18field.c", 620, 2489),__exception_result_var_b268=string_operator_equals(field_name2_193,name_174), come_pop_stackframe(), __exception_result_var_b268),                _if_conditional255) {
                    __dec_obj99=child_field_name_181;
                    child_field_name_181=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 621, 2490),__exception_result_var_b269=((char*)(right_value241=__builtin_string(field_name_188))), come_pop_stackframe(), __exception_result_var_b269));
                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj100=field_type_179;
                    field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=(come_push_stackframe("18field.c", 622, 2491),__exception_result_var_b270=sType_clone(field_type3_194), come_pop_stackframe(), __exception_result_var_b270))));
                    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    field_name2_193 = come_decrement_ref_count2(field_name2_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_194,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_193 = come_decrement_ref_count2(field_name2_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_191,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(child_field_name_181) {
                field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(_if_conditional257=(come_push_stackframe("18field.c", 631, 2492),__exception_result_var_b271=string_operator_equals(field_name_188,name_174), come_pop_stackframe(), __exception_result_var_b271),            _if_conditional257) {
                __dec_obj101=field_type_179;
                field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(come_push_stackframe("18field.c", 632, 2493),__exception_result_var_b272=sType_clone(field_type2_189), come_pop_stackframe(), __exception_result_var_b272))));
                come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
                field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_180++;
            field_name_188 = come_decrement_ref_count2(field_name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_186,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(_if_conditional258=index_180==(come_push_stackframe("18field.c", 639, 2498),__exception_result_var_b273=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 639, 2494)), "18field.c", 639, 2495))->mFields, "18field.c", 639, 2496)), "18field.c", 639, 2497))), come_pop_stackframe(), __exception_result_var_b273),        _if_conditional258) {
            (come_push_stackframe("18field.c", 640,2501),err_msg(info,"field not found(%s) in %s(2)",name_174,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_178, "18field.c", 640, 2499)), "18field.c", 640, 2500))->mName),come_pop_stackframe());
            __result135__ = (_Bool)0;
            name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result135__;
        }
    }
    come_value_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 645, "CVALUE"))));
    come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional259=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 647, 2502)), "18field.c", 647, 2503))->type, "18field.c", 647, 2504)), "18field.c", 647, 2505))->mPointerNum>0,    _if_conditional259) {
        if(child_field_name_181) {
            __dec_obj102=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 649, 2506)), "18field.c", 649, 2507))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 649, 2506)), "18field.c", 649, 2507))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 649, 2510),__exception_result_var_b274=((char*)(right_value245=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 649, 2508)), "18field.c", 649, 2509))->c_value,child_field_name_181,name_174))), come_pop_stackframe(), __exception_result_var_b274));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj103=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 652, 2511)), "18field.c", 652, 2512))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 652, 2511)), "18field.c", 652, 2512))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 652, 2515),__exception_result_var_b275=((char*)(right_value246=xsprintf("%s->%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 652, 2513)), "18field.c", 652, 2514))->c_value,name_174))), come_pop_stackframe(), __exception_result_var_b275));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        if(child_field_name_181) {
            __dec_obj104=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 657, 2516)), "18field.c", 657, 2517))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 657, 2516)), "18field.c", 657, 2517))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 657, 2520),__exception_result_var_b276=((char*)(right_value247=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 657, 2518)), "18field.c", 657, 2519))->c_value,child_field_name_181,name_174))), come_pop_stackframe(), __exception_result_var_b276));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj105=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 660, 2521)), "18field.c", 660, 2522))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 660, 2521)), "18field.c", 660, 2522))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 660, 2525),__exception_result_var_b277=((char*)(right_value248=xsprintf("%s.%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_175, "18field.c", 660, 2523)), "18field.c", 660, 2524))->c_value,name_174))), come_pop_stackframe(), __exception_result_var_b277));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __dec_obj106=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 663, 2526)), "18field.c", 663, 2527))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 663, 2526)), "18field.c", 663, 2527))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=(come_push_stackframe("18field.c", 663, 2528),__exception_result_var_b278=sType_clone(field_type_179), come_pop_stackframe(), __exception_result_var_b278))));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 664, 2529)), "18field.c", 664, 2530))->var=((void*)0);
    if(_if_conditional262=field_type_179==((void*)0),    _if_conditional262) {
        (come_push_stackframe("18field.c", 667,2531),err_msg(info,"no field(%s)\n",name_174),come_pop_stackframe());
        __result136__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result136__;
    }
    if(_if_conditional264=(come_push_stackframe("18field.c", 671, 2540),__exception_result_var_b279=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 671, 2532)), "18field.c", 671, 2533))->type, "18field.c", 671, 2534)), "18field.c", 671, 2535))->mArrayNum, "18field.c", 671, 2536)), "18field.c", 671, 2537))), come_pop_stackframe(), __exception_result_var_b279)==1,    _if_conditional264) {
        __dec_obj107=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 672, 2541)), "18field.c", 672, 2542))->type, "18field.c", 672, 2543)), "18field.c", 672, 2544))->mOriginalLoadVarType, "18field.c", 672, 2545)), "18field.c", 672, 2546))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 672, 2541)), "18field.c", 672, 2542))->type, "18field.c", 672, 2543)), "18field.c", 672, 2544))->mOriginalLoadVarType, "18field.c", 672, 2545)), "18field.c", 672, 2546))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(come_push_stackframe("18field.c", 672, 2549),__exception_result_var_b280=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 672, 2547)), "18field.c", 672, 2548))->type), come_pop_stackframe(), __exception_result_var_b280))));
        come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 674, 2566),__exception_result_var_b281=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 674, 2550)), "18field.c", 674, 2551))->type, "18field.c", 674, 2552)), "18field.c", 674, 2553))->mArrayNum, "18field.c", 674, 2554)), "18field.c", 674, 2555))), come_pop_stackframe(), __exception_result_var_b281);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 675, 2567)), "18field.c", 675, 2568))->type, "18field.c", 675, 2569)), "18field.c", 675, 2570))->mPointerNum++;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 676, 2571)), "18field.c", 676, 2572))->type, "18field.c", 676, 2573)), "18field.c", 676, 2574))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "18field.c", 676, 2575)), "18field.c", 676, 2576))->type, "18field.c", 676, 2577)), "18field.c", 676, 2578))->mPointerNum;
    }
    (come_push_stackframe("18field.c", 679, 2583),__exception_result_var_b282=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 679, 2579)), "18field.c", 679, 2580))->stack, "18field.c", 679, 2581)), "18field.c", 679, 2582)),(struct CVALUE*)come_increment_ref_count(come_value_195)), come_pop_stackframe(), __exception_result_var_b282);
    __result140__ = (_Bool)1;
    name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
    name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional263;
int __result137__;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional263=self==((void*)0),        _if_conditional263) {
            __result137__ = 0;
            return __result137__;
        }
        __result138__ = ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 360, 2538)), "./neo-c.h", 360, 2539))->len;
        return __result138__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_196;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_197;
struct list$1sNodeph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_196, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_197, 0, sizeof(struct list_item$1sNodeph*));
            it_196=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 426, 2556)), "./neo-c.h", 426, 2557))->head;
            while(_while_condtional22=it_196!=((void*)0),            _while_condtional22) {
                prev_it_197=it_196;
                it_196=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_196, "./neo-c.h", 429, 2558)), "./neo-c.h", 429, 2559))->next;
                come_call_finalizer3(prev_it_197,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 433, 2560)), "./neo-c.h", 433, 2561))->head=((void*)0);
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 434, 2562)), "./neo-c.h", 434, 2563))->tail=((void*)0);
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 436, 2564)), "./neo-c.h", 436, 2565))->len=0;
            __result139__ = __result_obj__ = self;
            return __result139__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value251;
struct sNodeBase* __exception_result_var_b283;
struct sNode* __exception_result_var_b284;
void* right_value252;
struct sNode* __dec_obj108;
struct sNode* __exception_result_var_b285;
void* right_value253;
struct sNode* __dec_obj109;
struct list$1sNodeph* __exception_result_var_b286;
void* right_value254;
struct list$1sNodeph* __dec_obj110;
struct sStoreArrayNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
    (come_push_stackframe("18field.c", 689, 2586),__exception_result_var_b283=((struct sNodeBase*)(right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 689, 2584)), "18field.c", 689, 2585))),info))), come_pop_stackframe(), __exception_result_var_b283);
    come_call_finalizer3(right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj108=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 691, 2587))->mLeft;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 691, 2587))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=(come_push_stackframe("18field.c", 691, 2588),__exception_result_var_b284=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b284))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj109=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 692, 2589))->mRight;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 692, 2589))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=(come_push_stackframe("18field.c", 692, 2590),__exception_result_var_b285=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b285))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj110=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 693, 2591))->mArrayNum;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 693, 2591))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value254=(come_push_stackframe("18field.c", 693, 2592),__exception_result_var_b286=list$1sNodephp_clone(array_num), come_pop_stackframe(), __exception_result_var_b286))));
    come_call_finalizer3(__dec_obj110,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value254,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 694, 2593))->mQuote=quote;
    __result141__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result141__;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__;
void* right_value255;
char* __exception_result_var_b287;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result142__ = __result_obj__ = (come_push_stackframe("18field.c", 699, 2610),__exception_result_var_b287=((char*)(right_value255=__builtin_string("sStoreArrayNode"))), come_pop_stackframe(), __exception_result_var_b287);
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_198;
struct sNode* right_199;
struct list$1sNodeph* array_num_nodes_200;
_Bool __exception_result_var_b288;
_Bool _if_conditional269;
_Bool __result143__;
void* right_value256;
struct CVALUE* __exception_result_var_b289;
struct CVALUE* left_value_201;
_Bool _if_conditional270;
void* right_value257;
char* __exception_result_var_b290;
void* right_value258;
char* __exception_result_var_b291;
char* __dec_obj111;
struct sType* left_type_202;
void* right_value259;
void* right_value260;
struct list$1CVALUEph* __exception_result_var_b292;
struct list$1CVALUEph* array_num_203;
struct list$1sNodeph* o2_saved_206;
struct sNode* __exception_result_var_b295;
struct sNode* it_209;
_Bool __exception_result_var_b296;
struct sNode* __exception_result_var_b299;
_Bool __exception_result_var_b300;
_Bool _if_conditional275;
_Bool __result152__;
void* right_value261;
struct CVALUE* __exception_result_var_b301;
struct CVALUE* c_value_212;
struct list$1CVALUEph* __exception_result_var_b302;
_Bool __exception_result_var_b303;
_Bool _if_conditional276;
_Bool __result153__;
void* right_value262;
struct CVALUE* __exception_result_var_b304;
struct CVALUE* right_value_213;
struct sType* right_type_214;
struct sClass* klass_215;
struct sType* __exception_result_var_b305;
void* right_value263;
struct sType* type_216;
char* fun_name_217;
_Bool calling_fun_218;
_Bool _if_conditional277;
struct CVALUE* __exception_result_var_b307;
_Bool __exception_result_var_b308;
_Bool _if_conditional280;
char* __dec_obj112;
char* check_code_222;
int __exception_result_var_b309;
_Bool _if_conditional281;
struct sType* var_type_223;
struct sType* __exception_result_var_b310;
void* right_value264;
struct sType* result_type_224;
_Bool _if_conditional282;
struct sType* __dec_obj113;
int __exception_result_var_b311;
_Bool _if_conditional283;
int __exception_result_var_b312;
int __exception_result_var_b313;
int n_225;
_Bool _if_conditional285;
struct sType* __exception_result_var_b314;
void* right_value265;
struct sType* __dec_obj114;
_Bool _if_conditional286;
struct sType* __exception_result_var_b315;
void* right_value266;
struct sType* __dec_obj115;
struct list$1sNodeph* __exception_result_var_b316;
_Bool _if_conditional287;
int i_226;
struct list$1sNodeph* __exception_result_var_b318;
_Bool _if_conditional306;
struct list$1sNodeph* __exception_result_var_b319;
_Bool _if_conditional307;
_Bool _if_conditional308;
int __exception_result_var_b320;
_Bool _if_conditional309;
void* right_value267;
struct CVALUE* come_value_239;
void* right_value268;
void* right_value269;
struct buffer* __exception_result_var_b321;
struct buffer* buf_240;
struct sType* __exception_result_var_b322;
void* right_value270;
struct sType* result_type2_241;
void* right_value271;
char* __exception_result_var_b323;
struct buffer* __exception_result_var_b324;
struct list$1CVALUEph* o2_saved_242;
struct CVALUE* __exception_result_var_b327;
struct CVALUE* it_245;
_Bool __exception_result_var_b328;
struct CVALUE* __exception_result_var_b331;
void* right_value272;
char* __exception_result_var_b332;
struct buffer* __exception_result_var_b333;
void* right_value273;
char* __exception_result_var_b334;
struct buffer* __exception_result_var_b335;
int i_248;
struct list$1sNodeph* o2_saved_249;
struct sNode* __exception_result_var_b336;
struct sNode* it_250;
_Bool __exception_result_var_b337;
struct sNode* __exception_result_var_b338;
_Bool __exception_result_var_b339;
_Bool _if_conditional314;
void* right_value274;
struct CVALUE* __exception_result_var_b340;
struct CVALUE* come_value_251;
void* right_value275;
char* __exception_result_var_b341;
struct buffer* __exception_result_var_b342;
int __exception_result_var_b343;
_Bool _if_conditional315;
struct buffer* __exception_result_var_b344;
void* right_value276;
char* __exception_result_var_b345;
struct buffer* __exception_result_var_b346;
void* right_value277;
char* __exception_result_var_b347;
char* __dec_obj116;
void* right_value278;
struct CVALUE* come_value_252;
int __exception_result_var_b348;
_Bool _if_conditional316;
int i_253;
int __exception_result_var_b349;
struct list$1sNodeph* __exception_result_var_b350;
_Bool _if_conditional317;
int __exception_result_var_b351;
_Bool _if_conditional318;
void* right_value279;
void* right_value280;
struct buffer* __exception_result_var_b352;
struct buffer* buf_254;
struct buffer* __exception_result_var_b353;
struct list$1CVALUEph* o2_saved_255;
struct CVALUE* __exception_result_var_b354;
struct CVALUE* it_256;
_Bool __exception_result_var_b355;
struct CVALUE* __exception_result_var_b356;
void* right_value281;
char* __exception_result_var_b357;
struct buffer* __exception_result_var_b358;
void* right_value282;
char* __exception_result_var_b359;
char* left_value_code_257;
void* right_value283;
_Bool __exception_result_var_b360;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value284;
char* __exception_result_var_b361;
char* __dec_obj117;
_Bool _if_conditional321;
void* right_value285;
char* __exception_result_var_b362;
char* __dec_obj118;
_Bool __result167__;
int __exception_result_var_b363;
int right_value_id_258;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value286;
char* __exception_result_var_b364;
char* __dec_obj119;
_Bool _if_conditional324;
void* right_value287;
char* __exception_result_var_b365;
char* __dec_obj120;
_Bool __result168__;
struct sType* __exception_result_var_b366;
void* right_value288;
struct sType* result_type_259;
void* right_value289;
void* right_value290;
struct list$1sNodeph* __exception_result_var_b367;
struct list$1sNodeph* __dec_obj121;
struct sType* __dec_obj122;
_Bool _if_conditional325;
void* right_value291;
char* __exception_result_var_b368;
char* __dec_obj123;
struct list$1CVALUEph* __exception_result_var_b369;
_Bool __result169__;
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
memset(&array_num_203, 0, sizeof(struct list$1CVALUEph*));
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
    left_198=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 704, 2611)), "18field.c", 704, 2612))->mLeft;
    right_199=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 705, 2613)), "18field.c", 705, 2614))->mRight;
    array_num_nodes_200=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 706, 2615)), "18field.c", 706, 2616))->mArrayNum;
    if(_if_conditional269=!(come_push_stackframe("18field.c", 708, 2617),__exception_result_var_b288=node_compile(left_198,info), come_pop_stackframe(), __exception_result_var_b288),    _if_conditional269) {
        __result143__ = (_Bool)0;
        return __result143__;
    }
    left_value_201=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 712, 2618),__exception_result_var_b289=((struct CVALUE*)(right_value256=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b289));
    come_call_finalizer3(right_value256,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 713,2619),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional270=gComeDebug&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 715, 2620)), "18field.c", 715, 2621))->type, "18field.c", 715, 2622)), "18field.c", 715, 2623))->mPointerNum>0,    _if_conditional270) {
        __dec_obj111=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 716, 2624)), "18field.c", 716, 2625))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 716, 2624)), "18field.c", 716, 2625))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 716, 2636),__exception_result_var_b291=((char*)(right_value258=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("18field.c", 716, 2628),__exception_result_var_b290=((char*)(right_value257=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 716, 2626)), "18field.c", 716, 2627))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b290), "18field.c", 716, 2629)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 716, 2630)), "18field.c", 716, 2631))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 716, 2632)), "18field.c", 716, 2633))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 716, 2634)), "18field.c", 716, 2635))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b291));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_202=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 719, 2637)), "18field.c", 719, 2638))->type;
    array_num_203=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("18field.c", 721, 2650),__exception_result_var_b292=((struct list$1CVALUEph*)(right_value260=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value259=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 721, "list$1CVALUEph"))), "18field.c", 721, 2639)))))), come_pop_stackframe(), __exception_result_var_b292));
    come_call_finalizer3(right_value259,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value260,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_206=(array_num_nodes_200),it_209=(come_push_stackframe("18field.c", 723, 2665),__exception_result_var_b295=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_206), "18field.c", 723, 2651)), "18field.c", 723, 2652))), come_pop_stackframe(), __exception_result_var_b295);    !(come_push_stackframe("18field.c", 723, 2670),__exception_result_var_b296=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_206), "18field.c", 723, 2666)), "18field.c", 723, 2667))), come_pop_stackframe(), __exception_result_var_b296);    it_209=(come_push_stackframe("18field.c", 723, 2689),__exception_result_var_b299=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_206), "18field.c", 723, 2671)), "18field.c", 723, 2672))), come_pop_stackframe(), __exception_result_var_b299)    ){
        if(_if_conditional275=!(come_push_stackframe("18field.c", 724, 2690),__exception_result_var_b300=node_compile(it_209,info), come_pop_stackframe(), __exception_result_var_b300),        _if_conditional275) {
            __result152__ = (_Bool)0;
            come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_203,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result152__;
        }
        c_value_212=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 728, 2691),__exception_result_var_b301=((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b301));
        come_call_finalizer3(right_value261,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 729,2692),dec_stack_ptr(1,info),come_pop_stackframe());
        (come_push_stackframe("18field.c", 731, 2695),__exception_result_var_b302=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_203, "18field.c", 731, 2693)), "18field.c", 731, 2694)),(struct CVALUE*)come_increment_ref_count(c_value_212)), come_pop_stackframe(), __exception_result_var_b302);
        come_call_finalizer3(c_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional276=!(come_push_stackframe("18field.c", 734, 2696),__exception_result_var_b303=node_compile(right_199,info), come_pop_stackframe(), __exception_result_var_b303),    _if_conditional276) {
        __result153__ = (_Bool)0;
        come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_203,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result153__;
    }
    right_value_213=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 738, 2697),__exception_result_var_b304=((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b304));
    come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 739,2698),dec_stack_ptr(1,info),come_pop_stackframe());
    right_type_214=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_213, "18field.c", 741, 2699)), "18field.c", 741, 2700))->type;
    klass_215=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 743, 2701)), "18field.c", 743, 2702))->type, "18field.c", 743, 2703)), "18field.c", 743, 2704))->mClass;
    type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(come_push_stackframe("18field.c", 745, 2707),__exception_result_var_b305=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 745, 2705)), "18field.c", 745, 2706))->type), come_pop_stackframe(), __exception_result_var_b305))));
    come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_217="operator_store_element";
    if(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 749, 2708)), "18field.c", 749, 2709))->mQuote) {
        calling_fun_218=(_Bool)0;
    }
    else {
        calling_fun_218=(come_push_stackframe("18field.c", 753, 2722),__exception_result_var_b308=operator_overload_fun2(type_216,fun_name_217,left_value_201,(come_push_stackframe("18field.c", 753, 2721),__exception_result_var_b307=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(((struct list$1CVALUEph*)come_null_check(array_num_203, "18field.c", 753, 2710)),0), "18field.c", 753, 2720)), come_pop_stackframe(), __exception_result_var_b307),right_value_213,info), come_pop_stackframe(), __exception_result_var_b308);
    }
    if(_if_conditional280=!calling_fun_218,    _if_conditional280) {
        __dec_obj112=check_code_222;
        check_code_222=((void*)0);
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(_if_conditional281=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 758, 2723)), "18field.c", 758, 2724))->var&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 758, 2725)), "18field.c", 758, 2726))->var, "18field.c", 758, 2727)), "18field.c", 758, 2728))->mType&&(come_push_stackframe("18field.c", 758, 2737),__exception_result_var_b309=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 758, 2729)), "18field.c", 758, 2730))->var, "18field.c", 758, 2731)), "18field.c", 758, 2732))->mType, "18field.c", 758, 2733)), "18field.c", 758, 2734))->mArrayNum, "18field.c", 758, 2735)), "18field.c", 758, 2736))), come_pop_stackframe(), __exception_result_var_b309)>0,        _if_conditional281) {
            var_type_223=((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 760, 2738)), "18field.c", 760, 2739))->var, "18field.c", 760, 2740)), "18field.c", 760, 2741))->mType;
            result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=(come_push_stackframe("18field.c", 761, 2742),__exception_result_var_b310=sType_clone(left_type_202), come_pop_stackframe(), __exception_result_var_b310))));
            come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 763, 2743)), "18field.c", 763, 2744))->mOriginalLoadVarType, "18field.c", 763, 2745)), "18field.c", 763, 2746))->v1) {
                __dec_obj113=result_type_224;
                result_type_224=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 764, 2747)), "18field.c", 764, 2748))->mOriginalLoadVarType, "18field.c", 764, 2749)), "18field.c", 764, 2750))->v1);
                come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional283=(come_push_stackframe("18field.c", 767, 2755),__exception_result_var_b311=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 767, 2751)), "18field.c", 767, 2752))->mArrayNum, "18field.c", 767, 2753)), "18field.c", 767, 2754))), come_pop_stackframe(), __exception_result_var_b311)>0,            _if_conditional283) {
                n_225=(come_push_stackframe("18field.c", 768, 2760),__exception_result_var_b312=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 768, 2756)), "18field.c", 768, 2757))->mArrayNum, "18field.c", 768, 2758)), "18field.c", 768, 2759))), come_pop_stackframe(), __exception_result_var_b312)-(come_push_stackframe("18field.c", 768, 2765),__exception_result_var_b313=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_203, "18field.c", 768, 2761)), "18field.c", 768, 2762))), come_pop_stackframe(), __exception_result_var_b313);
                if(_if_conditional285=n_225==0,                _if_conditional285) {
                    __dec_obj114=result_type_224;
                    result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(come_push_stackframe("18field.c", 771, 2766),__exception_result_var_b314=sType_clone(left_type_202), come_pop_stackframe(), __exception_result_var_b314))));
                    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 772, 2767)), "18field.c", 772, 2768))->mOriginalLoadVarType, "18field.c", 772, 2769)), "18field.c", 772, 2770))->v1) {
                        __dec_obj115=result_type_224;
                        result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(come_push_stackframe("18field.c", 773, 2775),__exception_result_var_b315=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 773, 2771)), "18field.c", 773, 2772))->mOriginalLoadVarType, "18field.c", 773, 2773)), "18field.c", 773, 2774))->v1), come_pop_stackframe(), __exception_result_var_b315))));
                        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    (come_push_stackframe("18field.c", 775, 2780),__exception_result_var_b316=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 775, 2776)), "18field.c", 775, 2777))->mArrayNum, "18field.c", 775, 2778)), "18field.c", 775, 2779))), come_pop_stackframe(), __exception_result_var_b316);
                }
                else {
                    if(_if_conditional287=n_225>0,                    _if_conditional287) {
                        for(                        i_226=0;                        i_226<n_225;                        i_226++                        ){
                            (come_push_stackframe("18field.c", 779, 2844),__exception_result_var_b318=list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 779, 2781)), "18field.c", 779, 2782))->mArrayNum, "18field.c", 779, 2783)), "18field.c", 779, 2784)),-1,-1), come_pop_stackframe(), __exception_result_var_b318);
                        }
                    }
                    else {
                        if(_if_conditional306=n_225<0,                        _if_conditional306) {
                            (come_push_stackframe("18field.c", 783, 2849),__exception_result_var_b319=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 783, 2845)), "18field.c", 783, 2846))->mArrayNum, "18field.c", 783, 2847)), "18field.c", 783, 2848))), come_pop_stackframe(), __exception_result_var_b319);
                            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 784, 2850)), "18field.c", 784, 2851))->mPointerNum+=n_225;
                            if(_if_conditional307=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 786, 2852)), "18field.c", 786, 2853))->mPointerNum<0,                            _if_conditional307) {
                                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 787, 2854)), "18field.c", 787, 2855))->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional308=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 792, 2856)), "18field.c", 792, 2857))->mPointerNum>0,                _if_conditional308) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 793, 2858)), "18field.c", 793, 2859))->mPointerNum-=(come_push_stackframe("18field.c", 793, 2862),__exception_result_var_b320=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_203, "18field.c", 793, 2860)), "18field.c", 793, 2861))), come_pop_stackframe(), __exception_result_var_b320);
                    if(_if_conditional309=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 795, 2863)), "18field.c", 795, 2864))->mPointerNum<0,                    _if_conditional309) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_224, "18field.c", 796, 2865)), "18field.c", 796, 2866))->mPointerNum=0;
                    }
                }
            }
            come_value_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 801, "CVALUE"))));
            come_call_finalizer3(right_value267,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_240=(struct buffer*)come_increment_ref_count((come_push_stackframe("18field.c", 803, 2868),__exception_result_var_b321=((struct buffer*)(right_value269=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value268=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 803, "buffer"))), "18field.c", 803, 2867)))))), come_pop_stackframe(), __exception_result_var_b321));
            come_call_finalizer3(right_value268,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value269,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=(come_push_stackframe("18field.c", 805, 2869),__exception_result_var_b322=sType_clone(result_type_224), come_pop_stackframe(), __exception_result_var_b322))));
            come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_241, "18field.c", 806, 2870)), "18field.c", 806, 2871))->mPointerNum++;
            (come_push_stackframe("18field.c", 808, 2877),__exception_result_var_b324=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_240, "18field.c", 808, 2872)), "18field.c", 808, 2873)),(come_push_stackframe("18field.c", 808, 2876),__exception_result_var_b323=((char*)(right_value271=xsprintf("come_range_check(&%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 808, 2874)), "18field.c", 808, 2875))->c_value))), come_pop_stackframe(), __exception_result_var_b323)), come_pop_stackframe(), __exception_result_var_b324);
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_242=(struct list$1CVALUEph*)come_increment_ref_count((array_num_203)),it_245=(come_push_stackframe("18field.c", 810, 2892),__exception_result_var_b327=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_242), "18field.c", 810, 2878)), "18field.c", 810, 2879))), come_pop_stackframe(), __exception_result_var_b327);            !(come_push_stackframe("18field.c", 810, 2897),__exception_result_var_b328=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_242), "18field.c", 810, 2893)), "18field.c", 810, 2894))), come_pop_stackframe(), __exception_result_var_b328);            it_245=(come_push_stackframe("18field.c", 810, 2916),__exception_result_var_b331=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_242), "18field.c", 810, 2898)), "18field.c", 810, 2899))), come_pop_stackframe(), __exception_result_var_b331)            ){
                (come_push_stackframe("18field.c", 811, 2922),__exception_result_var_b333=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_240, "18field.c", 811, 2917)), "18field.c", 811, 2918)),(come_push_stackframe("18field.c", 811, 2921),__exception_result_var_b332=((char*)(right_value272=xsprintf("[%s]",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_245, "18field.c", 811, 2919)), "18field.c", 811, 2920))->c_value))), come_pop_stackframe(), __exception_result_var_b332)), come_pop_stackframe(), __exception_result_var_b333);
                right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_242,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("18field.c", 813, 2930),__exception_result_var_b335=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_240, "18field.c", 813, 2923)), "18field.c", 813, 2924)),(come_push_stackframe("18field.c", 813, 2929),__exception_result_var_b334=((char*)(right_value273=xsprintf(",%s,%s+(",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 813, 2925)), "18field.c", 813, 2926))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 813, 2927)), "18field.c", 813, 2928))->c_value))), come_pop_stackframe(), __exception_result_var_b334)), come_pop_stackframe(), __exception_result_var_b335);
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_248=0;
            for(            o2_saved_249=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(var_type_223, "18field.c", 815, 2931)), "18field.c", 815, 2932))->mArrayNum)),it_250=(come_push_stackframe("18field.c", 815, 2935),__exception_result_var_b336=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_249), "18field.c", 815, 2933)), "18field.c", 815, 2934))), come_pop_stackframe(), __exception_result_var_b336);            !(come_push_stackframe("18field.c", 815, 2938),__exception_result_var_b337=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_249), "18field.c", 815, 2936)), "18field.c", 815, 2937))), come_pop_stackframe(), __exception_result_var_b337);            it_250=(come_push_stackframe("18field.c", 815, 2941),__exception_result_var_b338=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_249), "18field.c", 815, 2939)), "18field.c", 815, 2940))), come_pop_stackframe(), __exception_result_var_b338)            ){
                if(_if_conditional314=!(come_push_stackframe("18field.c", 816, 2942),__exception_result_var_b339=node_compile(it_250,info), come_pop_stackframe(), __exception_result_var_b339),                _if_conditional314) {
                    (come_push_stackframe("18field.c", 817,2943),err_msg(info,"invalid array num"),come_pop_stackframe());
                    (come_push_stackframe("18field.c", 818,2944),exit(1),come_pop_stackframe());
                }
                come_value_251=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 821, 2945),__exception_result_var_b340=((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b340));
                come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("18field.c", 822,2946),dec_stack_ptr(1,info),come_pop_stackframe());
                (come_push_stackframe("18field.c", 824, 2952),__exception_result_var_b342=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_240, "18field.c", 824, 2947)), "18field.c", 824, 2948)),(come_push_stackframe("18field.c", 824, 2951),__exception_result_var_b341=((char*)(right_value275=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_251, "18field.c", 824, 2949)), "18field.c", 824, 2950))->c_value))), come_pop_stackframe(), __exception_result_var_b341)), come_pop_stackframe(), __exception_result_var_b342);
                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional315=i_248!=(come_push_stackframe("18field.c", 825, 2957),__exception_result_var_b343=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(var_type_223, "18field.c", 825, 2953)), "18field.c", 825, 2954))->mArrayNum, "18field.c", 825, 2955)), "18field.c", 825, 2956))), come_pop_stackframe(), __exception_result_var_b343)-1,                _if_conditional315) {
                    (come_push_stackframe("18field.c", 826, 2960),__exception_result_var_b344=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_240, "18field.c", 826, 2958)), "18field.c", 826, 2959)),"*"), come_pop_stackframe(), __exception_result_var_b344);
                }
                i_248++;
                come_call_finalizer3(come_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_249,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("18field.c", 830, 2968),__exception_result_var_b346=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_240, "18field.c", 830, 2961)), "18field.c", 830, 2962)),(come_push_stackframe("18field.c", 830, 2967),__exception_result_var_b345=((char*)(right_value276=xsprintf("), \"%s\", %d)",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 830, 2963)), "18field.c", 830, 2964))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 830, 2965)), "18field.c", 830, 2966))->sline))), come_pop_stackframe(), __exception_result_var_b345)), come_pop_stackframe(), __exception_result_var_b346);
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj116=check_code_222;
            check_code_222=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 832, 2971),__exception_result_var_b347=((char*)(right_value277=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_240, "18field.c", 832, 2969)), "18field.c", 832, 2970))))), come_pop_stackframe(), __exception_result_var_b347));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_240,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 835, "CVALUE"))));
        come_call_finalizer3(right_value278,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional316=(come_push_stackframe("18field.c", 843, 2976),__exception_result_var_b348=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 843, 2972)), "18field.c", 843, 2973))->mArrayNum, "18field.c", 843, 2974)), "18field.c", 843, 2975))), come_pop_stackframe(), __exception_result_var_b348)>0,        _if_conditional316) {
            for(            i_253=0;            i_253<(come_push_stackframe("18field.c", 844, 2979),__exception_result_var_b349=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_203, "18field.c", 844, 2977)), "18field.c", 844, 2978))), come_pop_stackframe(), __exception_result_var_b349);            i_253++            ){
                (come_push_stackframe("18field.c", 845, 2984),__exception_result_var_b350=list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 845, 2980)), "18field.c", 845, 2981))->mArrayNum, "18field.c", 845, 2982)), "18field.c", 845, 2983)),-1,-1), come_pop_stackframe(), __exception_result_var_b350);
            }
        }
        else {
            if(_if_conditional317=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 848, 2985)), "18field.c", 848, 2986))->mPointerNum>0,            _if_conditional317) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 849, 2987)), "18field.c", 849, 2988))->mPointerNum-=(come_push_stackframe("18field.c", 849, 2991),__exception_result_var_b351=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_203, "18field.c", 849, 2989)), "18field.c", 849, 2990))), come_pop_stackframe(), __exception_result_var_b351);
                if(_if_conditional318=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 851, 2992)), "18field.c", 851, 2993))->mPointerNum<0,                _if_conditional318) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 852, 2994)), "18field.c", 852, 2995))->mPointerNum=0;
                }
            }
        }
        buf_254=(struct buffer*)come_increment_ref_count((come_push_stackframe("18field.c", 856, 2997),__exception_result_var_b352=((struct buffer*)(right_value280=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value279=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 856, "buffer"))), "18field.c", 856, 2996)))))), come_pop_stackframe(), __exception_result_var_b352));
        come_call_finalizer3(right_value279,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value280,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 858, 3002),__exception_result_var_b353=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_254, "18field.c", 858, 2998)), "18field.c", 858, 2999)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 858, 3000)), "18field.c", 858, 3001))->c_value), come_pop_stackframe(), __exception_result_var_b353);
        for(        o2_saved_255=(struct list$1CVALUEph*)come_increment_ref_count((array_num_203)),it_256=(come_push_stackframe("18field.c", 860, 3005),__exception_result_var_b354=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_255), "18field.c", 860, 3003)), "18field.c", 860, 3004))), come_pop_stackframe(), __exception_result_var_b354);        !(come_push_stackframe("18field.c", 860, 3008),__exception_result_var_b355=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_255), "18field.c", 860, 3006)), "18field.c", 860, 3007))), come_pop_stackframe(), __exception_result_var_b355);        it_256=(come_push_stackframe("18field.c", 860, 3011),__exception_result_var_b356=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_255), "18field.c", 860, 3009)), "18field.c", 860, 3010))), come_pop_stackframe(), __exception_result_var_b356)        ){
            (come_push_stackframe("18field.c", 861, 3017),__exception_result_var_b358=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_254, "18field.c", 861, 3012)), "18field.c", 861, 3013)),(come_push_stackframe("18field.c", 861, 3016),__exception_result_var_b357=((char*)(right_value281=xsprintf("[%s]",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_256, "18field.c", 861, 3014)), "18field.c", 861, 3015))->c_value))), come_pop_stackframe(), __exception_result_var_b357)), come_pop_stackframe(), __exception_result_var_b358);
            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_257=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 864, 3020),__exception_result_var_b359=((char*)(right_value282=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_254, "18field.c", 864, 3018)), "18field.c", 864, 3019))))), come_pop_stackframe(), __exception_result_var_b359));
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 866, 3021),__exception_result_var_b360=check_assign_type(((char*)(right_value283=xsprintf("array is assinged to"))),left_type_202,right_type_214,right_value_213,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b360);
        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional319=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 867, 3022)), "18field.c", 867, 3023))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_214, "18field.c", 867, 3024)), "18field.c", 867, 3025))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_202, "18field.c", 867, 3026)), "18field.c", 867, 3027))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_214, "18field.c", 867, 3028)), "18field.c", 867, 3029))->mPointerNum>0,        _if_conditional319) {
            if(_if_conditional320=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 869, 3030)), "18field.c", 869, 3031))->type, "18field.c", 869, 3032)), "18field.c", 869, 3033))->mPointerNum>=1,            _if_conditional320) {
                (come_push_stackframe("18field.c", 870,3034),decrement_ref_count_object(left_type_202,left_value_code_257,info,(_Bool)0),come_pop_stackframe());
                (come_push_stackframe("18field.c", 871,3035),std_move(left_type_202,right_type_214,right_value_213,info),come_pop_stackframe());
                __dec_obj117=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 872, 3036)), "18field.c", 872, 3037))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 872, 3036)), "18field.c", 872, 3037))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 872, 3040),__exception_result_var_b361=((char*)(right_value284=xsprintf("%s=%s",left_value_code_257,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_213, "18field.c", 872, 3038)), "18field.c", 872, 3039))->c_value))), come_pop_stackframe(), __exception_result_var_b361));
                __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional321=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 874, 3041)), "18field.c", 874, 3042))->type, "18field.c", 874, 3043)), "18field.c", 874, 3044))->mPointerNum==0,                _if_conditional321) {
                    (come_push_stackframe("18field.c", 875,3045),decrement_ref_count_object(left_type_202,left_value_code_257,info,(_Bool)0),come_pop_stackframe());
                    (come_push_stackframe("18field.c", 876,3046),std_move(left_type_202,right_type_214,right_value_213,info),come_pop_stackframe());
                    __dec_obj118=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 877, 3047)), "18field.c", 877, 3048))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 877, 3047)), "18field.c", 877, 3048))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 877, 3051),__exception_result_var_b362=((char*)(right_value285=xsprintf("%s=%s",left_value_code_257,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_213, "18field.c", 877, 3049)), "18field.c", 877, 3050))->c_value))), come_pop_stackframe(), __exception_result_var_b362));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    (come_push_stackframe("18field.c", 880,3056),err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_257,((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 880, 3052)), "18field.c", 880, 3053))->type, "18field.c", 880, 3054)), "18field.c", 880, 3055))->mPointerNum),come_pop_stackframe());
                    __result167__ = (_Bool)0;
                    check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_203,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result167__;
                }
            }
            right_value_id_258=(come_push_stackframe("18field.c", 883, 3059),__exception_result_var_b363=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_213, "18field.c", 883, 3057)), "18field.c", 883, 3058))->c_value)), come_pop_stackframe(), __exception_result_var_b363);
            if(_if_conditional322=right_value_id_258!=-1,            _if_conditional322) {
                (come_push_stackframe("18field.c", 886,3060),remove_object_from_right_values(right_value_id_258,info),come_pop_stackframe());
            }
        }
        else {
            if(_if_conditional323=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 890, 3061)), "18field.c", 890, 3062))->type, "18field.c", 890, 3063)), "18field.c", 890, 3064))->mPointerNum>=1,            _if_conditional323) {
                __dec_obj119=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 891, 3065)), "18field.c", 891, 3066))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 891, 3065)), "18field.c", 891, 3066))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 891, 3069),__exception_result_var_b364=((char*)(right_value286=xsprintf("%s=%s",left_value_code_257,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_213, "18field.c", 891, 3067)), "18field.c", 891, 3068))->c_value))), come_pop_stackframe(), __exception_result_var_b364));
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional324=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 893, 3070)), "18field.c", 893, 3071))->type, "18field.c", 893, 3072)), "18field.c", 893, 3073))->mPointerNum==0,                _if_conditional324) {
                    __dec_obj120=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 894, 3074)), "18field.c", 894, 3075))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 894, 3074)), "18field.c", 894, 3075))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 894, 3078),__exception_result_var_b365=((char*)(right_value287=xsprintf("%s=%s",left_value_code_257,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_213, "18field.c", 894, 3076)), "18field.c", 894, 3077))->c_value))), come_pop_stackframe(), __exception_result_var_b365));
                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    (come_push_stackframe("18field.c", 897,3083),err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_257,((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "18field.c", 897, 3079)), "18field.c", 897, 3080))->type, "18field.c", 897, 3081)), "18field.c", 897, 3082))->mPointerNum),come_pop_stackframe());
                    __result168__ = (_Bool)0;
                    check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_203,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result168__;
                }
            }
        }
        result_type_259=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=(come_push_stackframe("18field.c", 901, 3084),__exception_result_var_b366=sType_clone(left_type_202), come_pop_stackframe(), __exception_result_var_b366))));
        come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj121=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_259, "18field.c", 902, 3085)), "18field.c", 902, 3086))->mArrayNum;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_259, "18field.c", 902, 3085)), "18field.c", 902, 3086))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("18field.c", 902, 3088),__exception_result_var_b367=((struct list$1sNodeph*)(right_value290=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value289=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 902, "list$1sNodeph"))), "18field.c", 902, 3087)))))), come_pop_stackframe(), __exception_result_var_b367));
        come_call_finalizer3(__dec_obj121,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value289,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value290,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj122=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 903, 3089)), "18field.c", 903, 3090))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 903, 3089)), "18field.c", 903, 3090))->type=(struct sType*)come_increment_ref_count(result_type_259);
        come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 904, 3091)), "18field.c", 904, 3092))->var=((void*)0);
        if(_if_conditional325=check_code_222&&gComeDebug,        _if_conditional325) {
            __dec_obj123=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 907, 3093)), "18field.c", 907, 3094))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 907, 3093)), "18field.c", 907, 3094))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 907, 3097),__exception_result_var_b368=((char*)(right_value291=xsprintf("(%s, %s)",check_code_222,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 907, 3095)), "18field.c", 907, 3096))->c_value))), come_pop_stackframe(), __exception_result_var_b368));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("18field.c", 910, 3102),__exception_result_var_b369=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 910, 3098)), "18field.c", 910, 3099))->stack, "18field.c", 910, 3100)), "18field.c", 910, 3101)),(struct CVALUE*)come_increment_ref_count(come_value_252)), come_pop_stackframe(), __exception_result_var_b369);
        (come_push_stackframe("18field.c", 912,3105),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_252, "18field.c", 912, 3103)), "18field.c", 912, 3104))->c_value),come_pop_stackframe());
        check_code_222 = come_decrement_ref_count2(check_code_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_257 = come_decrement_ref_count2(left_value_code_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result169__ = (_Bool)1;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_203,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result169__;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_203,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_216,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 101, 2640)), "./neo-c.h", 101, 2641))->head=((void*)0);
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 102, 2642)), "./neo-c.h", 102, 2643))->tail=((void*)0);
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 103, 2644)), "./neo-c.h", 103, 2645))->len=0;
        __result144__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result144__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_204;
_Bool _while_condtional23;
struct list_item$1CVALUEph* prev_it_205;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_204, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_205, 0, sizeof(struct list_item$1CVALUEph*));
            it_204=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 120, 2646)), "./neo-c.h", 120, 2647))->head;
            while(_while_condtional23=it_204!=((void*)0),            _while_condtional23) {
                prev_it_205=it_204;
                it_204=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_204, "./neo-c.h", 123, 2648)), "./neo-c.h", 123, 2649))->next;
                come_call_finalizer3(prev_it_205,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional271;
struct sNode* result_207;
void* __exception_result_var_b293;
struct sNode* __result145__;
_Bool _if_conditional272;
struct sNode* __result146__;
struct sNode* result_208;
void* __exception_result_var_b294;
struct sNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(struct sNode*));
memset(&result_208, 0, sizeof(struct sNode*));
        if(_if_conditional271=self==((void*)0),        _if_conditional271) {
            (come_push_stackframe("./neo-c.h", 284, 2653),__exception_result_var_b293=memset(&result_207,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b293);
            __result145__ = __result_obj__ = result_207;
            return __result145__;
        }
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 2654)), "./neo-c.h", 287, 2655))->it=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 2656)), "./neo-c.h", 287, 2657))->head;
        if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 289, 2658)), "./neo-c.h", 289, 2659))->it) {
            __result146__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 290, 2660)), "./neo-c.h", 290, 2661))->it, "./neo-c.h", 290, 2662)), "./neo-c.h", 290, 2663))->item;
            return __result146__;
        }
        (come_push_stackframe("./neo-c.h", 294, 2664),__exception_result_var_b294=memset(&result_208,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b294);
        __result147__ = __result_obj__ = result_208;
        return __result147__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
        __result148__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 317, 2668)), "./neo-c.h", 317, 2669))->it==((void*)0);
        return __result148__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional273;
struct sNode* result_210;
void* __exception_result_var_b297;
struct sNode* __result149__;
_Bool _if_conditional274;
struct sNode* __result150__;
struct sNode* result_211;
void* __exception_result_var_b298;
struct sNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(struct sNode*));
memset(&result_211, 0, sizeof(struct sNode*));
        if(_if_conditional273=self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 299, 2673)), "./neo-c.h", 299, 2674))->it==((void*)0),        _if_conditional273) {
            (come_push_stackframe("./neo-c.h", 301, 2675),__exception_result_var_b297=memset(&result_210,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b297);
            __result149__ = __result_obj__ = result_210;
            return __result149__;
        }
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 2676)), "./neo-c.h", 305, 2677))->it=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 2678)), "./neo-c.h", 305, 2679))->it, "./neo-c.h", 305, 2680)), "./neo-c.h", 305, 2681))->next;
        if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 307, 2682)), "./neo-c.h", 307, 2683))->it) {
            __result150__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 308, 2684)), "./neo-c.h", 308, 2685))->it, "./neo-c.h", 308, 2686)), "./neo-c.h", 308, 2687))->item;
            return __result150__;
        }
        (come_push_stackframe("./neo-c.h", 312, 2688),__exception_result_var_b298=memset(&result_211,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b298);
        __result151__ = __result_obj__ = result_211;
        return __result151__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional278;
struct list_item$1CVALUEph* it_219;
int i_220;
_Bool _while_condtional24;
_Bool _if_conditional279;
struct CVALUE* __result154__;
struct CVALUE* default_value_221;
void* __exception_result_var_b306;
struct CVALUE* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_220, 0, sizeof(int));
memset(&default_value_221, 0, sizeof(struct CVALUE*));
            if(_if_conditional278=position<0,            _if_conditional278) {
                position+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 676, 2711)), "./neo-c.h", 676, 2712))->len;
            }
            it_219=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 679, 2713)), "./neo-c.h", 679, 2714))->head;
            i_220=0;
            while(_while_condtional24=it_219!=((void*)0),            _while_condtional24) {
                if(_if_conditional279=position==i_220,                _if_conditional279) {
                    __result154__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_219, "./neo-c.h", 683, 2715)), "./neo-c.h", 683, 2716))->item;
                    return __result154__;
                }
                it_219=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_219, "./neo-c.h", 685, 2717)), "./neo-c.h", 685, 2718))->next;
                i_220++;
            }
            (come_push_stackframe("./neo-c.h", 690, 2719),__exception_result_var_b306=memset(&default_value_221,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b306);
            __result155__ = __result_obj__ = default_value_221;
            come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result155__;
            come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional284;
int __result156__;
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional284=self==((void*)0),                    _if_conditional284) {
                        __result156__ = 0;
                        return __result156__;
                    }
                    __result157__ = ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 360, 2763)), "./neo-c.h", 360, 2764))->len;
                    return __result157__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
int tmp_227;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
struct list$1sNodeph* __result158__;
_Bool _if_conditional294;
struct list$1sNodeph* __exception_result_var_b317;
_Bool _if_conditional295;
struct list_item$1sNodeph* it_228;
int i_229;
_Bool _while_condtional25;
_Bool _if_conditional296;
struct list_item$1sNodeph* prev_it_230;
_Bool _if_conditional297;
_Bool _if_conditional298;
struct list_item$1sNodeph* it_231;
int i_232;
_Bool _while_condtional26;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list_item$1sNodeph* prev_it_233;
struct list_item$1sNodeph* it_234;
struct list_item$1sNodeph* head_prev_it_235;
struct list_item$1sNodeph* tail_it_236;
int i_237;
_Bool _while_condtional27;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
struct list_item$1sNodeph* prev_it_238;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list$1sNodeph* __result159__;
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
                                if(_if_conditional288=head<0,                                _if_conditional288) {
                                    head+=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 458, 2785)), "./neo-c.h", 458, 2786))->len;
                                }
                                if(_if_conditional289=tail<0,                                _if_conditional289) {
                                    tail+=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 461, 2787)), "./neo-c.h", 461, 2788))->len+1;
                                }
                                if(_if_conditional290=head>tail,                                _if_conditional290) {
                                    tmp_227=tail;
                                    tail=head;
                                    head=tmp_227;
                                }
                                if(_if_conditional291=head<0,                                _if_conditional291) {
                                    head=0;
                                }
                                if(_if_conditional292=tail>((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 474, 2789)), "./neo-c.h", 474, 2790))->len,                                _if_conditional292) {
                                    tail=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 475, 2791)), "./neo-c.h", 475, 2792))->len;
                                }
                                if(_if_conditional293=head==tail,                                _if_conditional293) {
                                    __result158__ = __result_obj__ = self;
                                    return __result158__;
                                }
                                if(_if_conditional294=head==0&&tail==((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 482, 2793)), "./neo-c.h", 482, 2794))->len,                                _if_conditional294) {
                                    (come_push_stackframe("./neo-c.h", 484, 2797),__exception_result_var_b317=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 484, 2795)), "./neo-c.h", 484, 2796))), come_pop_stackframe(), __exception_result_var_b317);
                                }
                                else {
                                    if(_if_conditional295=head==0,                                    _if_conditional295) {
                                        it_228=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 487, 2798)), "./neo-c.h", 487, 2799))->head;
                                        i_229=0;
                                        while(_while_condtional25=it_228!=((void*)0),                                        _while_condtional25) {
                                            if(_if_conditional296=i_229<tail,                                            _if_conditional296) {
                                                prev_it_230=it_228;
                                                it_228=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_228, "./neo-c.h", 493, 2800)), "./neo-c.h", 493, 2801))->next;
                                                i_229++;
                                                come_call_finalizer3(prev_it_230,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 498, 2802)), "./neo-c.h", 498, 2803))->len--;
                                            }
                                            else {
                                                if(_if_conditional297=i_229==tail,                                                _if_conditional297) {
                                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 501, 2804)), "./neo-c.h", 501, 2805))->head=it_228;
                                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 502, 2806)), "./neo-c.h", 502, 2807))->head, "./neo-c.h", 502, 2808)), "./neo-c.h", 502, 2809))->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_228=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_228, "./neo-c.h", 506, 2810)), "./neo-c.h", 506, 2811))->next;
                                                    i_229++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional298=tail==((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 511, 2812)), "./neo-c.h", 511, 2813))->len,                                        _if_conditional298) {
                                            it_231=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 512, 2814)), "./neo-c.h", 512, 2815))->head;
                                            i_232=0;
                                            while(_while_condtional26=it_231!=((void*)0),                                            _while_condtional26) {
                                                if(_if_conditional299=i_232==head,                                                _if_conditional299) {
                                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 516, 2816)), "./neo-c.h", 516, 2817))->tail=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_231, "./neo-c.h", 516, 2818)), "./neo-c.h", 516, 2819))->prev;
                                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 517, 2820)), "./neo-c.h", 517, 2821))->tail, "./neo-c.h", 517, 2822)), "./neo-c.h", 517, 2823))->next=((void*)0);
                                                }
                                                if(_if_conditional300=i_232>=head,                                                _if_conditional300) {
                                                    prev_it_233=it_231;
                                                    it_231=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_231, "./neo-c.h", 523, 2824)), "./neo-c.h", 523, 2825))->next;
                                                    i_232++;
                                                    come_call_finalizer3(prev_it_233,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 528, 2826)), "./neo-c.h", 528, 2827))->len--;
                                                }
                                                else {
                                                    it_231=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_231, "./neo-c.h", 531, 2828)), "./neo-c.h", 531, 2829))->next;
                                                    i_232++;
                                                }
                                            }
                                        }
                                        else {
                                            it_234=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 537, 2830)), "./neo-c.h", 537, 2831))->head;
                                            head_prev_it_235=((void*)0);
                                            tail_it_236=((void*)0);
                                            i_237=0;
                                            while(_while_condtional27=it_234!=((void*)0),                                            _while_condtional27) {
                                                if(_if_conditional301=i_237==head,                                                _if_conditional301) {
                                                    head_prev_it_235=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_234, "./neo-c.h", 546, 2832)), "./neo-c.h", 546, 2833))->prev;
                                                }
                                                if(_if_conditional302=i_237==tail,                                                _if_conditional302) {
                                                    tail_it_236=it_234;
                                                }
                                                if(_if_conditional303=i_237>=head&&i_237<tail,                                                _if_conditional303) {
                                                    prev_it_238=it_234;
                                                    it_234=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_234, "./neo-c.h", 556, 2834)), "./neo-c.h", 556, 2835))->next;
                                                    i_237++;
                                                    come_call_finalizer3(prev_it_238,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 561, 2836)), "./neo-c.h", 561, 2837))->len--;
                                                }
                                                else {
                                                    it_234=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_234, "./neo-c.h", 564, 2838)), "./neo-c.h", 564, 2839))->next;
                                                    i_237++;
                                                }
                                            }
                                            if(_if_conditional304=head_prev_it_235!=((void*)0),                                            _if_conditional304) {
                                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(head_prev_it_235, "./neo-c.h", 570, 2840)), "./neo-c.h", 570, 2841))->next=tail_it_236;
                                            }
                                            if(_if_conditional305=tail_it_236!=((void*)0),                                            _if_conditional305) {
                                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(tail_it_236, "./neo-c.h", 573, 2842)), "./neo-c.h", 573, 2843))->prev=head_prev_it_235;
                                            }
                                        }
                                    }
                                }
                                __result159__ = __result_obj__ = self;
                                return __result159__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional310;
struct CVALUE* result_243;
void* __exception_result_var_b325;
struct CVALUE* __result160__;
_Bool _if_conditional311;
struct CVALUE* __result161__;
struct CVALUE* result_244;
void* __exception_result_var_b326;
struct CVALUE* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct CVALUE*));
memset(&result_244, 0, sizeof(struct CVALUE*));
                if(_if_conditional310=self==((void*)0),                _if_conditional310) {
                    (come_push_stackframe("./neo-c.h", 284, 2880),__exception_result_var_b325=memset(&result_243,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b325);
                    __result160__ = __result_obj__ = result_243;
                    return __result160__;
                }
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 287, 2881)), "./neo-c.h", 287, 2882))->it=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 287, 2883)), "./neo-c.h", 287, 2884))->head;
                if(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 289, 2885)), "./neo-c.h", 289, 2886))->it) {
                    __result161__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 290, 2887)), "./neo-c.h", 290, 2888))->it, "./neo-c.h", 290, 2889)), "./neo-c.h", 290, 2890))->item;
                    return __result161__;
                }
                (come_push_stackframe("./neo-c.h", 294, 2891),__exception_result_var_b326=memset(&result_244,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b326);
                __result162__ = __result_obj__ = result_244;
                return __result162__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
                __result163__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 317, 2895)), "./neo-c.h", 317, 2896))->it==((void*)0);
                return __result163__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional312;
struct CVALUE* result_246;
void* __exception_result_var_b329;
struct CVALUE* __result164__;
_Bool _if_conditional313;
struct CVALUE* __result165__;
struct CVALUE* result_247;
void* __exception_result_var_b330;
struct CVALUE* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct CVALUE*));
memset(&result_247, 0, sizeof(struct CVALUE*));
                if(_if_conditional312=self==((void*)0)||((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 299, 2900)), "./neo-c.h", 299, 2901))->it==((void*)0),                _if_conditional312) {
                    (come_push_stackframe("./neo-c.h", 301, 2902),__exception_result_var_b329=memset(&result_246,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b329);
                    __result164__ = __result_obj__ = result_246;
                    return __result164__;
                }
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 305, 2903)), "./neo-c.h", 305, 2904))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 305, 2905)), "./neo-c.h", 305, 2906))->it, "./neo-c.h", 305, 2907)), "./neo-c.h", 305, 2908))->next;
                if(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 307, 2909)), "./neo-c.h", 307, 2910))->it) {
                    __result165__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 308, 2911)), "./neo-c.h", 308, 2912))->it, "./neo-c.h", 308, 2913)), "./neo-c.h", 308, 2914))->item;
                    return __result165__;
                }
                (come_push_stackframe("./neo-c.h", 312, 2915),__exception_result_var_b330=memset(&result_247,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b330);
                __result166__ = __result_obj__ = result_247;
                return __result166__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value292;
struct sNodeBase* __exception_result_var_b370;
struct list$1sNodeph* __exception_result_var_b371;
void* right_value293;
struct list$1sNodeph* __dec_obj124;
struct sNode* __exception_result_var_b372;
void* right_value294;
struct sNode* __dec_obj125;
struct sLoadArrayNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
    (come_push_stackframe("18field.c", 923, 3108),__exception_result_var_b370=((struct sNodeBase*)(right_value292=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 923, 3106)), "18field.c", 923, 3107))),info))), come_pop_stackframe(), __exception_result_var_b370);
    come_call_finalizer3(right_value292,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj124=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 925, 3109))->mArrayNum;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 925, 3109))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value293=(come_push_stackframe("18field.c", 925, 3110),__exception_result_var_b371=list$1sNodephp_clone(array_num), come_pop_stackframe(), __exception_result_var_b371))));
    come_call_finalizer3(__dec_obj124,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value293,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 926, 3111))->mBreakGuard=break_guard;
    __dec_obj125=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 928, 3112))->mLeft;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 928, 3112))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=(come_push_stackframe("18field.c", 928, 3113),__exception_result_var_b372=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b372))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 929, 3114))->mQuote=quote;
    __result170__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result170__;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__;
void* right_value295;
char* __exception_result_var_b373;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
    __result171__ = __result_obj__ = (come_push_stackframe("18field.c", 934, 3127),__exception_result_var_b373=((char*)(right_value295=__builtin_string("sLoadArrayNode"))), come_pop_stackframe(), __exception_result_var_b373);
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result171__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_260;
struct list$1sNodeph* array_num_nodes_261;
_Bool __exception_result_var_b374;
_Bool _if_conditional329;
_Bool __result172__;
void* right_value296;
struct CVALUE* __exception_result_var_b375;
struct CVALUE* left_value_262;
_Bool _if_conditional330;
void* right_value297;
char* __exception_result_var_b376;
void* right_value298;
char* __exception_result_var_b377;
char* __dec_obj126;
struct sType* __exception_result_var_b378;
void* right_value299;
struct sType* left_type_263;
void* right_value300;
void* right_value301;
struct list$1CVALUEph* __exception_result_var_b379;
struct list$1CVALUEph* array_num_264;
struct list$1sNodeph* o2_saved_265;
struct sNode* __exception_result_var_b380;
struct sNode* it_266;
_Bool __exception_result_var_b381;
struct sNode* __exception_result_var_b382;
_Bool __exception_result_var_b383;
_Bool _if_conditional331;
_Bool __result173__;
void* right_value302;
struct CVALUE* __exception_result_var_b384;
struct CVALUE* c_value_267;
struct list$1CVALUEph* __exception_result_var_b385;
struct sType* __exception_result_var_b386;
void* right_value303;
struct sType* type_268;
char* fun_name_269;
_Bool calling_fun_270;
_Bool _if_conditional332;
struct CVALUE* __exception_result_var_b387;
_Bool __exception_result_var_b388;
_Bool _if_conditional333;
int __exception_result_var_b389;
_Bool _if_conditional334;
struct sType* var_type_271;
struct sType* __exception_result_var_b390;
void* right_value304;
struct sType* result_type_272;
_Bool _if_conditional335;
struct sType* __dec_obj127;
int __exception_result_var_b391;
_Bool _if_conditional336;
int __exception_result_var_b392;
int __exception_result_var_b393;
int n_273;
_Bool _if_conditional337;
struct sType* __exception_result_var_b394;
void* right_value305;
struct sType* __dec_obj128;
_Bool _if_conditional338;
struct sType* __exception_result_var_b395;
void* right_value306;
struct sType* __dec_obj129;
struct list$1sNodeph* __exception_result_var_b396;
_Bool _if_conditional339;
int i_274;
struct list$1sNodeph* __exception_result_var_b397;
_Bool _if_conditional340;
struct list$1sNodeph* __exception_result_var_b398;
_Bool _if_conditional341;
_Bool _if_conditional342;
int __exception_result_var_b399;
_Bool _if_conditional343;
void* right_value307;
struct CVALUE* come_value_275;
void* right_value308;
void* right_value309;
struct buffer* __exception_result_var_b400;
struct buffer* buf_276;
struct sType* __exception_result_var_b401;
void* right_value310;
struct sType* result_type2_277;
void* right_value311;
char* __exception_result_var_b402;
void* right_value312;
char* __exception_result_var_b403;
struct buffer* __exception_result_var_b404;
struct list$1CVALUEph* o2_saved_278;
struct CVALUE* __exception_result_var_b405;
struct CVALUE* it_279;
_Bool __exception_result_var_b406;
struct CVALUE* __exception_result_var_b407;
void* right_value313;
char* __exception_result_var_b408;
struct buffer* __exception_result_var_b409;
void* right_value314;
char* __exception_result_var_b410;
struct buffer* __exception_result_var_b411;
int i_280;
struct list$1sNodeph* o2_saved_281;
struct sNode* __exception_result_var_b412;
struct sNode* it_282;
_Bool __exception_result_var_b413;
struct sNode* __exception_result_var_b414;
_Bool __exception_result_var_b415;
_Bool _if_conditional344;
void* right_value315;
struct CVALUE* __exception_result_var_b416;
struct CVALUE* come_value_283;
void* right_value316;
char* __exception_result_var_b417;
struct buffer* __exception_result_var_b418;
int __exception_result_var_b419;
_Bool _if_conditional345;
struct buffer* __exception_result_var_b420;
void* right_value317;
char* __exception_result_var_b421;
struct buffer* __exception_result_var_b422;
void* right_value318;
char* __exception_result_var_b423;
char* left_value_code_284;
void* right_value319;
char* __exception_result_var_b424;
char* __dec_obj130;
struct sType* __exception_result_var_b425;
void* right_value320;
struct sType* __dec_obj131;
struct list$1CVALUEph* __exception_result_var_b426;
void* right_value321;
struct CVALUE* come_value_285;
void* right_value322;
void* right_value323;
struct buffer* __exception_result_var_b427;
struct buffer* buf_286;
struct buffer* __exception_result_var_b428;
struct list$1CVALUEph* o2_saved_287;
struct CVALUE* __exception_result_var_b429;
struct CVALUE* it_288;
_Bool __exception_result_var_b430;
struct CVALUE* __exception_result_var_b431;
void* right_value324;
char* __exception_result_var_b432;
struct buffer* __exception_result_var_b433;
void* right_value325;
char* __exception_result_var_b434;
char* left_value_code_289;
void* right_value326;
char* __exception_result_var_b435;
char* __dec_obj132;
struct sType* __exception_result_var_b436;
void* right_value327;
struct sType* result_type_290;
_Bool _if_conditional346;
struct sType* __dec_obj133;
int __exception_result_var_b437;
_Bool _if_conditional347;
int __exception_result_var_b438;
int __exception_result_var_b439;
int n_291;
_Bool _if_conditional348;
struct sType* __exception_result_var_b440;
void* right_value328;
struct sType* __dec_obj134;
_Bool _if_conditional349;
struct sType* __exception_result_var_b441;
void* right_value329;
struct sType* __dec_obj135;
struct list$1sNodeph* __exception_result_var_b442;
_Bool _if_conditional350;
int i_292;
struct list$1sNodeph* __exception_result_var_b443;
_Bool _if_conditional351;
struct list$1sNodeph* __exception_result_var_b444;
_Bool _if_conditional352;
_Bool _if_conditional353;
int __exception_result_var_b445;
_Bool _if_conditional354;
struct sType* __exception_result_var_b446;
void* right_value330;
struct sType* __dec_obj136;
struct list$1CVALUEph* __exception_result_var_b447;
_Bool __result174__;
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
    left_260=((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 939, 3128)), "18field.c", 939, 3129))->mLeft;
    array_num_nodes_261=((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 940, 3130)), "18field.c", 940, 3131))->mArrayNum;
    if(_if_conditional329=!(come_push_stackframe("18field.c", 942, 3132),__exception_result_var_b374=node_compile(left_260,info), come_pop_stackframe(), __exception_result_var_b374),    _if_conditional329) {
        __result172__ = (_Bool)0;
        return __result172__;
    }
    left_value_262=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 946, 3133),__exception_result_var_b375=((struct CVALUE*)(right_value296=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b375));
    come_call_finalizer3(right_value296,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 947,3134),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional330=gComeDebug&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 949, 3135)), "18field.c", 949, 3136))->type, "18field.c", 949, 3137)), "18field.c", 949, 3138))->mPointerNum>0&&!((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 949, 3139)), "18field.c", 949, 3140))->mBreakGuard,    _if_conditional330) {
        __dec_obj126=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 950, 3141)), "18field.c", 950, 3142))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 950, 3141)), "18field.c", 950, 3142))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 950, 3153),__exception_result_var_b377=((char*)(right_value298=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("18field.c", 950, 3145),__exception_result_var_b376=((char*)(right_value297=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 950, 3143)), "18field.c", 950, 3144))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b376), "18field.c", 950, 3146)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 950, 3147)), "18field.c", 950, 3148))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 950, 3149)), "18field.c", 950, 3150))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 950, 3151)), "18field.c", 950, 3152))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b377));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=(come_push_stackframe("18field.c", 953, 3156),__exception_result_var_b378=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 953, 3154)), "18field.c", 953, 3155))->type), come_pop_stackframe(), __exception_result_var_b378))));
    come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
    array_num_264=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("18field.c", 955, 3158),__exception_result_var_b379=((struct list$1CVALUEph*)(right_value301=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value300=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 955, "list$1CVALUEph"))), "18field.c", 955, 3157)))))), come_pop_stackframe(), __exception_result_var_b379));
    come_call_finalizer3(right_value300,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value301,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_265=(array_num_nodes_261),it_266=(come_push_stackframe("18field.c", 957, 3161),__exception_result_var_b380=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_265), "18field.c", 957, 3159)), "18field.c", 957, 3160))), come_pop_stackframe(), __exception_result_var_b380);    !(come_push_stackframe("18field.c", 957, 3164),__exception_result_var_b381=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_265), "18field.c", 957, 3162)), "18field.c", 957, 3163))), come_pop_stackframe(), __exception_result_var_b381);    it_266=(come_push_stackframe("18field.c", 957, 3167),__exception_result_var_b382=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_265), "18field.c", 957, 3165)), "18field.c", 957, 3166))), come_pop_stackframe(), __exception_result_var_b382)    ){
        if(_if_conditional331=!(come_push_stackframe("18field.c", 958, 3168),__exception_result_var_b383=node_compile(it_266,info), come_pop_stackframe(), __exception_result_var_b383),        _if_conditional331) {
            __result173__ = (_Bool)0;
            come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result173__;
        }
        c_value_267=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 962, 3169),__exception_result_var_b384=((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b384));
        come_call_finalizer3(right_value302,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 963,3170),dec_stack_ptr(1,info),come_pop_stackframe());
        (come_push_stackframe("18field.c", 965, 3173),__exception_result_var_b385=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_264, "18field.c", 965, 3171)), "18field.c", 965, 3172)),(struct CVALUE*)come_increment_ref_count(c_value_267)), come_pop_stackframe(), __exception_result_var_b385);
        come_call_finalizer3(c_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=(come_push_stackframe("18field.c", 968, 3176),__exception_result_var_b386=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 968, 3174)), "18field.c", 968, 3175))->type), come_pop_stackframe(), __exception_result_var_b386))));
    come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_269="operator_load_element";
    if(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 972, 3177)), "18field.c", 972, 3178))->mQuote) {
        calling_fun_270=(_Bool)0;
    }
    else {
        calling_fun_270=(come_push_stackframe("18field.c", 976, 3184),__exception_result_var_b388=operator_overload_fun(type_268,fun_name_269,left_value_262,(come_push_stackframe("18field.c", 976, 3181),__exception_result_var_b387=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(((struct list$1CVALUEph*)come_null_check(array_num_264, "18field.c", 976, 3179)),0), "18field.c", 976, 3180)), come_pop_stackframe(), __exception_result_var_b387),((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 976, 3182)), "18field.c", 976, 3183))->mBreakGuard,info), come_pop_stackframe(), __exception_result_var_b388);
    }
    if(_if_conditional333=!calling_fun_270,    _if_conditional333) {
        if(_if_conditional334=gComeDebug&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 980, 3185)), "18field.c", 980, 3186))->var&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 980, 3187)), "18field.c", 980, 3188))->var, "18field.c", 980, 3189)), "18field.c", 980, 3190))->mType&&(come_push_stackframe("18field.c", 980, 3199),__exception_result_var_b389=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 980, 3191)), "18field.c", 980, 3192))->var, "18field.c", 980, 3193)), "18field.c", 980, 3194))->mType, "18field.c", 980, 3195)), "18field.c", 980, 3196))->mArrayNum, "18field.c", 980, 3197)), "18field.c", 980, 3198))), come_pop_stackframe(), __exception_result_var_b389)>0,        _if_conditional334) {
            var_type_271=((struct sVar*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 982, 3200)), "18field.c", 982, 3201))->var, "18field.c", 982, 3202)), "18field.c", 982, 3203))->mType;
            result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=(come_push_stackframe("18field.c", 983, 3204),__exception_result_var_b390=sType_clone(left_type_263), come_pop_stackframe(), __exception_result_var_b390))));
            come_call_finalizer3(right_value304,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 985, 3205)), "18field.c", 985, 3206))->mOriginalLoadVarType, "18field.c", 985, 3207)), "18field.c", 985, 3208))->v1) {
                __dec_obj127=result_type_272;
                result_type_272=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 986, 3209)), "18field.c", 986, 3210))->mOriginalLoadVarType, "18field.c", 986, 3211)), "18field.c", 986, 3212))->v1);
                come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional336=(come_push_stackframe("18field.c", 989, 3217),__exception_result_var_b391=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 989, 3213)), "18field.c", 989, 3214))->mArrayNum, "18field.c", 989, 3215)), "18field.c", 989, 3216))), come_pop_stackframe(), __exception_result_var_b391)>0,            _if_conditional336) {
                n_273=(come_push_stackframe("18field.c", 990, 3222),__exception_result_var_b392=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 990, 3218)), "18field.c", 990, 3219))->mArrayNum, "18field.c", 990, 3220)), "18field.c", 990, 3221))), come_pop_stackframe(), __exception_result_var_b392)-(come_push_stackframe("18field.c", 990, 3225),__exception_result_var_b393=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_264, "18field.c", 990, 3223)), "18field.c", 990, 3224))), come_pop_stackframe(), __exception_result_var_b393);
                if(_if_conditional337=n_273==0,                _if_conditional337) {
                    __dec_obj128=result_type_272;
                    result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=(come_push_stackframe("18field.c", 993, 3226),__exception_result_var_b394=sType_clone(left_type_263), come_pop_stackframe(), __exception_result_var_b394))));
                    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value305,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_263, "18field.c", 994, 3227)), "18field.c", 994, 3228))->mOriginalLoadVarType, "18field.c", 994, 3229)), "18field.c", 994, 3230))->v1) {
                        __dec_obj129=result_type_272;
                        result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=(come_push_stackframe("18field.c", 995, 3235),__exception_result_var_b395=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_263, "18field.c", 995, 3231)), "18field.c", 995, 3232))->mOriginalLoadVarType, "18field.c", 995, 3233)), "18field.c", 995, 3234))->v1), come_pop_stackframe(), __exception_result_var_b395))));
                        come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    (come_push_stackframe("18field.c", 997, 3240),__exception_result_var_b396=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 997, 3236)), "18field.c", 997, 3237))->mArrayNum, "18field.c", 997, 3238)), "18field.c", 997, 3239))), come_pop_stackframe(), __exception_result_var_b396);
                }
                else {
                    if(_if_conditional339=n_273>0,                    _if_conditional339) {
                        for(                        i_274=0;                        i_274<n_273;                        i_274++                        ){
                            (come_push_stackframe("18field.c", 1001, 3245),__exception_result_var_b397=list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1001, 3241)), "18field.c", 1001, 3242))->mArrayNum, "18field.c", 1001, 3243)), "18field.c", 1001, 3244)),-1,-1), come_pop_stackframe(), __exception_result_var_b397);
                        }
                    }
                    else {
                        if(_if_conditional340=n_273<0,                        _if_conditional340) {
                            (come_push_stackframe("18field.c", 1005, 3250),__exception_result_var_b398=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1005, 3246)), "18field.c", 1005, 3247))->mArrayNum, "18field.c", 1005, 3248)), "18field.c", 1005, 3249))), come_pop_stackframe(), __exception_result_var_b398);
                            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1006, 3251)), "18field.c", 1006, 3252))->mPointerNum+=n_273;
                            if(_if_conditional341=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1008, 3253)), "18field.c", 1008, 3254))->mPointerNum<0,                            _if_conditional341) {
                                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1009, 3255)), "18field.c", 1009, 3256))->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional342=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1014, 3257)), "18field.c", 1014, 3258))->mPointerNum>0,                _if_conditional342) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1015, 3259)), "18field.c", 1015, 3260))->mPointerNum-=(come_push_stackframe("18field.c", 1015, 3263),__exception_result_var_b399=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_264, "18field.c", 1015, 3261)), "18field.c", 1015, 3262))), come_pop_stackframe(), __exception_result_var_b399);
                    if(_if_conditional343=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1017, 3264)), "18field.c", 1017, 3265))->mPointerNum<0,                    _if_conditional343) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_272, "18field.c", 1018, 3266)), "18field.c", 1018, 3267))->mPointerNum=0;
                    }
                }
            }
            come_value_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value307=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1023, "CVALUE"))));
            come_call_finalizer3(right_value307,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_276=(struct buffer*)come_increment_ref_count((come_push_stackframe("18field.c", 1025, 3269),__exception_result_var_b400=((struct buffer*)(right_value309=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value308=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1025, "buffer"))), "18field.c", 1025, 3268)))))), come_pop_stackframe(), __exception_result_var_b400));
            come_call_finalizer3(right_value308,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value309,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=(come_push_stackframe("18field.c", 1028, 3270),__exception_result_var_b401=sType_clone(result_type_272), come_pop_stackframe(), __exception_result_var_b401))));
            come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_277, "18field.c", 1029, 3271)), "18field.c", 1029, 3272))->mPointerNum++;
            (come_push_stackframe("18field.c", 1033, 3279),__exception_result_var_b404=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_276, "18field.c", 1031, 3273)), "18field.c", 1033, 3274)),(come_push_stackframe("18field.c", 1033, 3278),__exception_result_var_b403=((char*)(right_value312=xsprintf("*(%s)come_range_check(&%s",(come_push_stackframe("18field.c", 1033, 3275),__exception_result_var_b402=((char*)(right_value311=make_type_name_string(result_type2_277,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b402),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 1033, 3276)), "18field.c", 1033, 3277))->c_value))), come_pop_stackframe(), __exception_result_var_b403)), come_pop_stackframe(), __exception_result_var_b404);
            right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_278=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_279=(come_push_stackframe("18field.c", 1035, 3282),__exception_result_var_b405=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_278), "18field.c", 1035, 3280)), "18field.c", 1035, 3281))), come_pop_stackframe(), __exception_result_var_b405);            !(come_push_stackframe("18field.c", 1035, 3285),__exception_result_var_b406=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_278), "18field.c", 1035, 3283)), "18field.c", 1035, 3284))), come_pop_stackframe(), __exception_result_var_b406);            it_279=(come_push_stackframe("18field.c", 1035, 3288),__exception_result_var_b407=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_278), "18field.c", 1035, 3286)), "18field.c", 1035, 3287))), come_pop_stackframe(), __exception_result_var_b407)            ){
                (come_push_stackframe("18field.c", 1036, 3294),__exception_result_var_b409=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_276, "18field.c", 1036, 3289)), "18field.c", 1036, 3290)),(come_push_stackframe("18field.c", 1036, 3293),__exception_result_var_b408=((char*)(right_value313=xsprintf("[%s]",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_279, "18field.c", 1036, 3291)), "18field.c", 1036, 3292))->c_value))), come_pop_stackframe(), __exception_result_var_b408)), come_pop_stackframe(), __exception_result_var_b409);
                right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_278,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("18field.c", 1038, 3302),__exception_result_var_b411=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_276, "18field.c", 1038, 3295)), "18field.c", 1038, 3296)),(come_push_stackframe("18field.c", 1038, 3301),__exception_result_var_b410=((char*)(right_value314=xsprintf(",%s,%s+(",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 1038, 3297)), "18field.c", 1038, 3298))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 1038, 3299)), "18field.c", 1038, 3300))->c_value))), come_pop_stackframe(), __exception_result_var_b410)), come_pop_stackframe(), __exception_result_var_b411);
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_280=0;
            for(            o2_saved_281=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(var_type_271, "18field.c", 1040, 3303)), "18field.c", 1040, 3304))->mArrayNum)),it_282=(come_push_stackframe("18field.c", 1040, 3307),__exception_result_var_b412=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_281), "18field.c", 1040, 3305)), "18field.c", 1040, 3306))), come_pop_stackframe(), __exception_result_var_b412);            !(come_push_stackframe("18field.c", 1040, 3310),__exception_result_var_b413=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_281), "18field.c", 1040, 3308)), "18field.c", 1040, 3309))), come_pop_stackframe(), __exception_result_var_b413);            it_282=(come_push_stackframe("18field.c", 1040, 3313),__exception_result_var_b414=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_281), "18field.c", 1040, 3311)), "18field.c", 1040, 3312))), come_pop_stackframe(), __exception_result_var_b414)            ){
                if(_if_conditional344=!(come_push_stackframe("18field.c", 1041, 3314),__exception_result_var_b415=node_compile(it_282,info), come_pop_stackframe(), __exception_result_var_b415),                _if_conditional344) {
                    (come_push_stackframe("18field.c", 1042,3315),err_msg(info,"invalid array num"),come_pop_stackframe());
                    (come_push_stackframe("18field.c", 1043,3316),exit(1),come_pop_stackframe());
                }
                come_value_283=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 1046, 3317),__exception_result_var_b416=((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b416));
                come_call_finalizer3(right_value315,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("18field.c", 1047,3318),dec_stack_ptr(1,info),come_pop_stackframe());
                (come_push_stackframe("18field.c", 1049, 3324),__exception_result_var_b418=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_276, "18field.c", 1049, 3319)), "18field.c", 1049, 3320)),(come_push_stackframe("18field.c", 1049, 3323),__exception_result_var_b417=((char*)(right_value316=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_283, "18field.c", 1049, 3321)), "18field.c", 1049, 3322))->c_value))), come_pop_stackframe(), __exception_result_var_b417)), come_pop_stackframe(), __exception_result_var_b418);
                right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional345=i_280!=(come_push_stackframe("18field.c", 1050, 3329),__exception_result_var_b419=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(var_type_271, "18field.c", 1050, 3325)), "18field.c", 1050, 3326))->mArrayNum, "18field.c", 1050, 3327)), "18field.c", 1050, 3328))), come_pop_stackframe(), __exception_result_var_b419)-1,                _if_conditional345) {
                    (come_push_stackframe("18field.c", 1051, 3332),__exception_result_var_b420=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_276, "18field.c", 1051, 3330)), "18field.c", 1051, 3331)),"*"), come_pop_stackframe(), __exception_result_var_b420);
                }
                i_280++;
                come_call_finalizer3(come_value_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_281,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("18field.c", 1055, 3340),__exception_result_var_b422=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_276, "18field.c", 1055, 3333)), "18field.c", 1055, 3334)),(come_push_stackframe("18field.c", 1055, 3339),__exception_result_var_b421=((char*)(right_value317=xsprintf("), \"%s\", %d)",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1055, 3335)), "18field.c", 1055, 3336))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1055, 3337)), "18field.c", 1055, 3338))->sline))), come_pop_stackframe(), __exception_result_var_b421)), come_pop_stackframe(), __exception_result_var_b422);
            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_code_284=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1057, 3343),__exception_result_var_b423=((char*)(right_value318=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_276, "18field.c", 1057, 3341)), "18field.c", 1057, 3342))))), come_pop_stackframe(), __exception_result_var_b423));
            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj130=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_275, "18field.c", 1059, 3344)), "18field.c", 1059, 3345))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_275, "18field.c", 1059, 3344)), "18field.c", 1059, 3345))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1059, 3346),__exception_result_var_b424=((char*)(right_value319=xsprintf("%s",left_value_code_284))), come_pop_stackframe(), __exception_result_var_b424));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj131=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_275, "18field.c", 1061, 3347)), "18field.c", 1061, 3348))->type;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_275, "18field.c", 1061, 3347)), "18field.c", 1061, 3348))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=(come_push_stackframe("18field.c", 1061, 3349),__exception_result_var_b425=sType_clone(result_type_272), come_pop_stackframe(), __exception_result_var_b425))));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_275, "18field.c", 1062, 3350)), "18field.c", 1062, 3351))->var=((void*)0);
            (come_push_stackframe("18field.c", 1064, 3356),__exception_result_var_b426=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1064, 3352)), "18field.c", 1064, 3353))->stack, "18field.c", 1064, 3354)), "18field.c", 1064, 3355)),(struct CVALUE*)come_increment_ref_count(come_value_275)), come_pop_stackframe(), __exception_result_var_b426);
            (come_push_stackframe("18field.c", 1066,3359),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_275, "18field.c", 1066, 3357)), "18field.c", 1066, 3358))->c_value),come_pop_stackframe());
            come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_284 = come_decrement_ref_count2(left_value_code_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1069, "CVALUE"))));
            come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_286=(struct buffer*)come_increment_ref_count((come_push_stackframe("18field.c", 1071, 3361),__exception_result_var_b427=((struct buffer*)(right_value323=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value322=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1071, "buffer"))), "18field.c", 1071, 3360)))))), come_pop_stackframe(), __exception_result_var_b427));
            come_call_finalizer3(right_value322,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value323,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("18field.c", 1073, 3366),__exception_result_var_b428=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_286, "18field.c", 1073, 3362)), "18field.c", 1073, 3363)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_262, "18field.c", 1073, 3364)), "18field.c", 1073, 3365))->c_value), come_pop_stackframe(), __exception_result_var_b428);
            for(            o2_saved_287=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_288=(come_push_stackframe("18field.c", 1075, 3369),__exception_result_var_b429=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_287), "18field.c", 1075, 3367)), "18field.c", 1075, 3368))), come_pop_stackframe(), __exception_result_var_b429);            !(come_push_stackframe("18field.c", 1075, 3372),__exception_result_var_b430=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_287), "18field.c", 1075, 3370)), "18field.c", 1075, 3371))), come_pop_stackframe(), __exception_result_var_b430);            it_288=(come_push_stackframe("18field.c", 1075, 3375),__exception_result_var_b431=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_287), "18field.c", 1075, 3373)), "18field.c", 1075, 3374))), come_pop_stackframe(), __exception_result_var_b431)            ){
                (come_push_stackframe("18field.c", 1076, 3381),__exception_result_var_b433=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_286, "18field.c", 1076, 3376)), "18field.c", 1076, 3377)),(come_push_stackframe("18field.c", 1076, 3380),__exception_result_var_b432=((char*)(right_value324=xsprintf("[%s]",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_288, "18field.c", 1076, 3378)), "18field.c", 1076, 3379))->c_value))), come_pop_stackframe(), __exception_result_var_b432)), come_pop_stackframe(), __exception_result_var_b433);
                right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_287,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_289=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1079, 3384),__exception_result_var_b434=((char*)(right_value325=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_286, "18field.c", 1079, 3382)), "18field.c", 1079, 3383))))), come_pop_stackframe(), __exception_result_var_b434));
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj132=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_285, "18field.c", 1081, 3385)), "18field.c", 1081, 3386))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_285, "18field.c", 1081, 3385)), "18field.c", 1081, 3386))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1081, 3387),__exception_result_var_b435=((char*)(right_value326=xsprintf("%s",left_value_code_289))), come_pop_stackframe(), __exception_result_var_b435));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=(come_push_stackframe("18field.c", 1083, 3388),__exception_result_var_b436=sType_clone(left_type_263), come_pop_stackframe(), __exception_result_var_b436))));
            come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1085, 3389)), "18field.c", 1085, 3390))->mOriginalLoadVarType, "18field.c", 1085, 3391)), "18field.c", 1085, 3392))->v1) {
                __dec_obj133=result_type_290;
                result_type_290=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1086, 3393)), "18field.c", 1086, 3394))->mOriginalLoadVarType, "18field.c", 1086, 3395)), "18field.c", 1086, 3396))->v1);
                come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional347=(come_push_stackframe("18field.c", 1089, 3401),__exception_result_var_b437=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1089, 3397)), "18field.c", 1089, 3398))->mArrayNum, "18field.c", 1089, 3399)), "18field.c", 1089, 3400))), come_pop_stackframe(), __exception_result_var_b437)>0,            _if_conditional347) {
                n_291=(come_push_stackframe("18field.c", 1090, 3406),__exception_result_var_b438=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1090, 3402)), "18field.c", 1090, 3403))->mArrayNum, "18field.c", 1090, 3404)), "18field.c", 1090, 3405))), come_pop_stackframe(), __exception_result_var_b438)-(come_push_stackframe("18field.c", 1090, 3409),__exception_result_var_b439=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_264, "18field.c", 1090, 3407)), "18field.c", 1090, 3408))), come_pop_stackframe(), __exception_result_var_b439);
                if(_if_conditional348=n_291==0,                _if_conditional348) {
                    __dec_obj134=result_type_290;
                    result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=(come_push_stackframe("18field.c", 1093, 3410),__exception_result_var_b440=sType_clone(left_type_263), come_pop_stackframe(), __exception_result_var_b440))));
                    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_263, "18field.c", 1094, 3411)), "18field.c", 1094, 3412))->mOriginalLoadVarType, "18field.c", 1094, 3413)), "18field.c", 1094, 3414))->v1) {
                        __dec_obj135=result_type_290;
                        result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=(come_push_stackframe("18field.c", 1095, 3419),__exception_result_var_b441=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_263, "18field.c", 1095, 3415)), "18field.c", 1095, 3416))->mOriginalLoadVarType, "18field.c", 1095, 3417)), "18field.c", 1095, 3418))->v1), come_pop_stackframe(), __exception_result_var_b441))));
                        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value329,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    (come_push_stackframe("18field.c", 1097, 3424),__exception_result_var_b442=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1097, 3420)), "18field.c", 1097, 3421))->mArrayNum, "18field.c", 1097, 3422)), "18field.c", 1097, 3423))), come_pop_stackframe(), __exception_result_var_b442);
                }
                else {
                    if(_if_conditional350=n_291>0,                    _if_conditional350) {
                        for(                        i_292=0;                        i_292<n_291;                        i_292++                        ){
                            (come_push_stackframe("18field.c", 1101, 3429),__exception_result_var_b443=list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1101, 3425)), "18field.c", 1101, 3426))->mArrayNum, "18field.c", 1101, 3427)), "18field.c", 1101, 3428)),-1,-1), come_pop_stackframe(), __exception_result_var_b443);
                        }
                    }
                    else {
                        if(_if_conditional351=n_291<0,                        _if_conditional351) {
                            (come_push_stackframe("18field.c", 1105, 3434),__exception_result_var_b444=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1105, 3430)), "18field.c", 1105, 3431))->mArrayNum, "18field.c", 1105, 3432)), "18field.c", 1105, 3433))), come_pop_stackframe(), __exception_result_var_b444);
                            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1106, 3435)), "18field.c", 1106, 3436))->mPointerNum+=n_291;
                            if(_if_conditional352=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1108, 3437)), "18field.c", 1108, 3438))->mPointerNum<0,                            _if_conditional352) {
                                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1109, 3439)), "18field.c", 1109, 3440))->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional353=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1114, 3441)), "18field.c", 1114, 3442))->mPointerNum>0,                _if_conditional353) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1115, 3443)), "18field.c", 1115, 3444))->mPointerNum-=(come_push_stackframe("18field.c", 1115, 3447),__exception_result_var_b445=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_264, "18field.c", 1115, 3445)), "18field.c", 1115, 3446))), come_pop_stackframe(), __exception_result_var_b445);
                    if(_if_conditional354=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1117, 3448)), "18field.c", 1117, 3449))->mPointerNum<0,                    _if_conditional354) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_290, "18field.c", 1118, 3450)), "18field.c", 1118, 3451))->mPointerNum=0;
                    }
                }
            }
            __dec_obj136=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_285, "18field.c", 1123, 3452)), "18field.c", 1123, 3453))->type;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_285, "18field.c", 1123, 3452)), "18field.c", 1123, 3453))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=(come_push_stackframe("18field.c", 1123, 3454),__exception_result_var_b446=sType_clone(result_type_290), come_pop_stackframe(), __exception_result_var_b446))));
            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_285, "18field.c", 1124, 3455)), "18field.c", 1124, 3456))->var=((void*)0);
            (come_push_stackframe("18field.c", 1126, 3461),__exception_result_var_b447=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1126, 3457)), "18field.c", 1126, 3458))->stack, "18field.c", 1126, 3459)), "18field.c", 1126, 3460)),(struct CVALUE*)come_increment_ref_count(come_value_285)), come_pop_stackframe(), __exception_result_var_b447);
            (come_push_stackframe("18field.c", 1128,3464),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_285, "18field.c", 1128, 3462)), "18field.c", 1128, 3463))->c_value),come_pop_stackframe());
            come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_289 = come_decrement_ref_count2(left_value_code_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result174__ = (_Bool)1;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result174__;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value331;
struct sNodeBase* __exception_result_var_b448;
struct list$1sNodeph* __exception_result_var_b449;
void* right_value332;
struct list$1sNodeph* __dec_obj137;
struct sNode* __exception_result_var_b450;
void* right_value333;
struct sNode* __dec_obj138;
struct sLoadRangeArrayNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
    (come_push_stackframe("18field.c", 1140, 3467),__exception_result_var_b448=((struct sNodeBase*)(right_value331=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1140, 3465)), "18field.c", 1140, 3466))),info))), come_pop_stackframe(), __exception_result_var_b448);
    come_call_finalizer3(right_value331,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1142, 3468))->mArrayNum;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1142, 3468))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value332=(come_push_stackframe("18field.c", 1142, 3469),__exception_result_var_b449=list$1sNodephp_clone(array_num), come_pop_stackframe(), __exception_result_var_b449))));
    come_call_finalizer3(__dec_obj137,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value332,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj138=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1144, 3470))->mLeft;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1144, 3470))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=(come_push_stackframe("18field.c", 1144, 3471),__exception_result_var_b450=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b450))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1145, 3472))->mQuote=quote;
    __result175__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result175__;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__;
void* right_value334;
char* __exception_result_var_b451;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
    __result176__ = __result_obj__ = (come_push_stackframe("18field.c", 1150, 3485),__exception_result_var_b451=((char*)(right_value334=__builtin_string("sLoadRangeArrayNode"))), come_pop_stackframe(), __exception_result_var_b451);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result176__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_293;
struct list$1sNodeph* array_num_nodes_294;
_Bool __exception_result_var_b452;
_Bool _if_conditional358;
_Bool __result177__;
void* right_value335;
struct CVALUE* __exception_result_var_b453;
struct CVALUE* left_value_295;
struct sType* __exception_result_var_b454;
void* right_value336;
struct sType* left_type_296;
void* right_value337;
void* right_value338;
struct list$1CVALUEph* __exception_result_var_b455;
struct list$1CVALUEph* array_num_297;
struct list$1sNodeph* o2_saved_298;
struct sNode* __exception_result_var_b456;
struct sNode* it_299;
_Bool __exception_result_var_b457;
struct sNode* __exception_result_var_b458;
_Bool __exception_result_var_b459;
_Bool _if_conditional359;
_Bool __result178__;
void* right_value339;
struct CVALUE* __exception_result_var_b460;
struct CVALUE* c_value_300;
struct list$1CVALUEph* __exception_result_var_b461;
struct sType* __exception_result_var_b462;
void* right_value340;
struct sType* type_301;
char* fun_name_302;
_Bool calling_fun_303;
_Bool _if_conditional360;
struct CVALUE* __exception_result_var_b463;
struct CVALUE* __exception_result_var_b464;
_Bool __exception_result_var_b465;
_Bool _if_conditional361;
void* right_value341;
struct CVALUE* come_value_304;
void* right_value342;
void* right_value343;
struct buffer* __exception_result_var_b466;
struct buffer* buf_305;
struct buffer* __exception_result_var_b467;
struct list$1CVALUEph* o2_saved_306;
struct CVALUE* __exception_result_var_b468;
struct CVALUE* it_307;
_Bool __exception_result_var_b469;
struct CVALUE* __exception_result_var_b470;
void* right_value344;
char* __exception_result_var_b471;
struct buffer* __exception_result_var_b472;
void* right_value345;
char* __exception_result_var_b473;
char* left_value_code_308;
void* right_value346;
char* __exception_result_var_b474;
char* __dec_obj139;
struct sType* __exception_result_var_b475;
void* right_value347;
struct sType* result_type_309;
_Bool _if_conditional362;
struct sType* __dec_obj140;
int __exception_result_var_b476;
_Bool _if_conditional363;
int __exception_result_var_b477;
int __exception_result_var_b478;
int n_310;
_Bool _if_conditional364;
struct sType* __exception_result_var_b479;
void* right_value348;
struct sType* __dec_obj141;
_Bool _if_conditional365;
struct sType* __exception_result_var_b480;
void* right_value349;
struct sType* __dec_obj142;
struct list$1sNodeph* __exception_result_var_b481;
_Bool _if_conditional366;
int i_311;
struct list$1sNodeph* __exception_result_var_b482;
_Bool _if_conditional367;
struct list$1sNodeph* __exception_result_var_b483;
_Bool _if_conditional368;
_Bool _if_conditional369;
int __exception_result_var_b484;
_Bool _if_conditional370;
struct sType* __exception_result_var_b485;
void* right_value350;
struct sType* __dec_obj143;
struct list$1CVALUEph* __exception_result_var_b486;
_Bool __result179__;
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
    left_293=((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1155, 3486)), "18field.c", 1155, 3487))->mLeft;
    array_num_nodes_294=((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1156, 3488)), "18field.c", 1156, 3489))->mArrayNum;
    if(_if_conditional358=!(come_push_stackframe("18field.c", 1158, 3490),__exception_result_var_b452=node_compile(left_293,info), come_pop_stackframe(), __exception_result_var_b452),    _if_conditional358) {
        __result177__ = (_Bool)0;
        return __result177__;
    }
    left_value_295=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 1162, 3491),__exception_result_var_b453=((struct CVALUE*)(right_value335=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b453));
    come_call_finalizer3(right_value335,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("18field.c", 1163,3492),dec_stack_ptr(1,info),come_pop_stackframe());
    left_type_296=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=(come_push_stackframe("18field.c", 1165, 3495),__exception_result_var_b454=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_295, "18field.c", 1165, 3493)), "18field.c", 1165, 3494))->type), come_pop_stackframe(), __exception_result_var_b454))));
    come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
    array_num_297=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("18field.c", 1167, 3497),__exception_result_var_b455=((struct list$1CVALUEph*)(right_value338=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value337=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1167, "list$1CVALUEph"))), "18field.c", 1167, 3496)))))), come_pop_stackframe(), __exception_result_var_b455));
    come_call_finalizer3(right_value337,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value338,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_298=(array_num_nodes_294),it_299=(come_push_stackframe("18field.c", 1169, 3500),__exception_result_var_b456=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_298), "18field.c", 1169, 3498)), "18field.c", 1169, 3499))), come_pop_stackframe(), __exception_result_var_b456);    !(come_push_stackframe("18field.c", 1169, 3503),__exception_result_var_b457=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_298), "18field.c", 1169, 3501)), "18field.c", 1169, 3502))), come_pop_stackframe(), __exception_result_var_b457);    it_299=(come_push_stackframe("18field.c", 1169, 3506),__exception_result_var_b458=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_298), "18field.c", 1169, 3504)), "18field.c", 1169, 3505))), come_pop_stackframe(), __exception_result_var_b458)    ){
        if(_if_conditional359=!(come_push_stackframe("18field.c", 1170, 3507),__exception_result_var_b459=node_compile(it_299,info), come_pop_stackframe(), __exception_result_var_b459),        _if_conditional359) {
            __result178__ = (_Bool)0;
            come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result178__;
        }
        c_value_300=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 1174, 3508),__exception_result_var_b460=((struct CVALUE*)(right_value339=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b460));
        come_call_finalizer3(right_value339,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 1175,3509),dec_stack_ptr(1,info),come_pop_stackframe());
        (come_push_stackframe("18field.c", 1177, 3512),__exception_result_var_b461=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_297, "18field.c", 1177, 3510)), "18field.c", 1177, 3511)),(struct CVALUE*)come_increment_ref_count(c_value_300)), come_pop_stackframe(), __exception_result_var_b461);
        come_call_finalizer3(c_value_300,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_301=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(come_push_stackframe("18field.c", 1180, 3515),__exception_result_var_b462=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_295, "18field.c", 1180, 3513)), "18field.c", 1180, 3514))->type), come_pop_stackframe(), __exception_result_var_b462))));
    come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_302="operator_load_range_element";
    if(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1184, 3516)), "18field.c", 1184, 3517))->mQuote) {
        calling_fun_303=(_Bool)0;
    }
    else {
        calling_fun_303=(come_push_stackframe("18field.c", 1188, 3524),__exception_result_var_b465=operator_overload_fun2(type_301,fun_name_302,left_value_295,(come_push_stackframe("18field.c", 1188, 3520),__exception_result_var_b463=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(((struct list$1CVALUEph*)come_null_check(array_num_297, "18field.c", 1188, 3518)),0), "18field.c", 1188, 3519)), come_pop_stackframe(), __exception_result_var_b463),(come_push_stackframe("18field.c", 1188, 3523),__exception_result_var_b464=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(((struct list$1CVALUEph*)come_null_check(array_num_297, "18field.c", 1188, 3521)),1), "18field.c", 1188, 3522)), come_pop_stackframe(), __exception_result_var_b464),info), come_pop_stackframe(), __exception_result_var_b465);
    }
    if(_if_conditional361=!calling_fun_303,    _if_conditional361) {
        come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1192, "CVALUE"))));
        come_call_finalizer3(right_value341,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        buf_305=(struct buffer*)come_increment_ref_count((come_push_stackframe("18field.c", 1194, 3526),__exception_result_var_b466=((struct buffer*)(right_value343=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value342=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1194, "buffer"))), "18field.c", 1194, 3525)))))), come_pop_stackframe(), __exception_result_var_b466));
        come_call_finalizer3(right_value342,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("18field.c", 1196, 3531),__exception_result_var_b467=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_305, "18field.c", 1196, 3527)), "18field.c", 1196, 3528)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_295, "18field.c", 1196, 3529)), "18field.c", 1196, 3530))->c_value), come_pop_stackframe(), __exception_result_var_b467);
        for(        o2_saved_306=(struct list$1CVALUEph*)come_increment_ref_count((array_num_297)),it_307=(come_push_stackframe("18field.c", 1198, 3534),__exception_result_var_b468=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_306), "18field.c", 1198, 3532)), "18field.c", 1198, 3533))), come_pop_stackframe(), __exception_result_var_b468);        !(come_push_stackframe("18field.c", 1198, 3537),__exception_result_var_b469=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_306), "18field.c", 1198, 3535)), "18field.c", 1198, 3536))), come_pop_stackframe(), __exception_result_var_b469);        it_307=(come_push_stackframe("18field.c", 1198, 3540),__exception_result_var_b470=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_306), "18field.c", 1198, 3538)), "18field.c", 1198, 3539))), come_pop_stackframe(), __exception_result_var_b470)        ){
            (come_push_stackframe("18field.c", 1199, 3546),__exception_result_var_b472=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_305, "18field.c", 1199, 3541)), "18field.c", 1199, 3542)),(come_push_stackframe("18field.c", 1199, 3545),__exception_result_var_b471=((char*)(right_value344=xsprintf("[%s]",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_307, "18field.c", 1199, 3543)), "18field.c", 1199, 3544))->c_value))), come_pop_stackframe(), __exception_result_var_b471)), come_pop_stackframe(), __exception_result_var_b472);
            right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_306,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_308=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1202, 3549),__exception_result_var_b473=((char*)(right_value345=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_305, "18field.c", 1202, 3547)), "18field.c", 1202, 3548))))), come_pop_stackframe(), __exception_result_var_b473));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj139=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_304, "18field.c", 1204, 3550)), "18field.c", 1204, 3551))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_304, "18field.c", 1204, 3550)), "18field.c", 1204, 3551))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1204, 3552),__exception_result_var_b474=((char*)(right_value346=xsprintf("%s",left_value_code_308))), come_pop_stackframe(), __exception_result_var_b474));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=(come_push_stackframe("18field.c", 1206, 3553),__exception_result_var_b475=sType_clone(left_type_296), come_pop_stackframe(), __exception_result_var_b475))));
        come_call_finalizer3(right_value347,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1208, 3554)), "18field.c", 1208, 3555))->mOriginalLoadVarType, "18field.c", 1208, 3556)), "18field.c", 1208, 3557))->v1) {
            __dec_obj140=result_type_309;
            result_type_309=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1209, 3558)), "18field.c", 1209, 3559))->mOriginalLoadVarType, "18field.c", 1209, 3560)), "18field.c", 1209, 3561))->v1);
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional363=(come_push_stackframe("18field.c", 1212, 3566),__exception_result_var_b476=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1212, 3562)), "18field.c", 1212, 3563))->mArrayNum, "18field.c", 1212, 3564)), "18field.c", 1212, 3565))), come_pop_stackframe(), __exception_result_var_b476)>0,        _if_conditional363) {
            n_310=(come_push_stackframe("18field.c", 1213, 3571),__exception_result_var_b477=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1213, 3567)), "18field.c", 1213, 3568))->mArrayNum, "18field.c", 1213, 3569)), "18field.c", 1213, 3570))), come_pop_stackframe(), __exception_result_var_b477)-(come_push_stackframe("18field.c", 1213, 3574),__exception_result_var_b478=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_297, "18field.c", 1213, 3572)), "18field.c", 1213, 3573))), come_pop_stackframe(), __exception_result_var_b478);
            if(_if_conditional364=n_310==0,            _if_conditional364) {
                __dec_obj141=result_type_309;
                result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=(come_push_stackframe("18field.c", 1216, 3575),__exception_result_var_b479=sType_clone(left_type_296), come_pop_stackframe(), __exception_result_var_b479))));
                come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_296, "18field.c", 1217, 3576)), "18field.c", 1217, 3577))->mOriginalLoadVarType, "18field.c", 1217, 3578)), "18field.c", 1217, 3579))->v1) {
                    __dec_obj142=result_type_309;
                    result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=(come_push_stackframe("18field.c", 1218, 3584),__exception_result_var_b480=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_296, "18field.c", 1218, 3580)), "18field.c", 1218, 3581))->mOriginalLoadVarType, "18field.c", 1218, 3582)), "18field.c", 1218, 3583))->v1), come_pop_stackframe(), __exception_result_var_b480))));
                    come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                (come_push_stackframe("18field.c", 1220, 3589),__exception_result_var_b481=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1220, 3585)), "18field.c", 1220, 3586))->mArrayNum, "18field.c", 1220, 3587)), "18field.c", 1220, 3588))), come_pop_stackframe(), __exception_result_var_b481);
            }
            else {
                if(_if_conditional366=n_310>0,                _if_conditional366) {
                    for(                    i_311=0;                    i_311<n_310;                    i_311++                    ){
                        (come_push_stackframe("18field.c", 1224, 3594),__exception_result_var_b482=list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1224, 3590)), "18field.c", 1224, 3591))->mArrayNum, "18field.c", 1224, 3592)), "18field.c", 1224, 3593)),-1,-1), come_pop_stackframe(), __exception_result_var_b482);
                    }
                }
                else {
                    if(_if_conditional367=n_310<0,                    _if_conditional367) {
                        (come_push_stackframe("18field.c", 1228, 3599),__exception_result_var_b483=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1228, 3595)), "18field.c", 1228, 3596))->mArrayNum, "18field.c", 1228, 3597)), "18field.c", 1228, 3598))), come_pop_stackframe(), __exception_result_var_b483);
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1229, 3600)), "18field.c", 1229, 3601))->mPointerNum+=n_310;
                        if(_if_conditional368=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1231, 3602)), "18field.c", 1231, 3603))->mPointerNum<0,                        _if_conditional368) {
                            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1232, 3604)), "18field.c", 1232, 3605))->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional369=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1237, 3606)), "18field.c", 1237, 3607))->mPointerNum>0,            _if_conditional369) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1238, 3608)), "18field.c", 1238, 3609))->mPointerNum-=(come_push_stackframe("18field.c", 1238, 3612),__exception_result_var_b484=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(array_num_297, "18field.c", 1238, 3610)), "18field.c", 1238, 3611))), come_pop_stackframe(), __exception_result_var_b484);
                if(_if_conditional370=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1240, 3613)), "18field.c", 1240, 3614))->mPointerNum<0,                _if_conditional370) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_309, "18field.c", 1241, 3615)), "18field.c", 1241, 3616))->mPointerNum=0;
                }
            }
        }
        __dec_obj143=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_304, "18field.c", 1246, 3617)), "18field.c", 1246, 3618))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_304, "18field.c", 1246, 3617)), "18field.c", 1246, 3618))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=(come_push_stackframe("18field.c", 1246, 3619),__exception_result_var_b485=sType_clone(result_type_309), come_pop_stackframe(), __exception_result_var_b485))));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_304, "18field.c", 1247, 3620)), "18field.c", 1247, 3621))->var=((void*)0);
        (come_push_stackframe("18field.c", 1249, 3626),__exception_result_var_b486=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1249, 3622)), "18field.c", 1249, 3623))->stack, "18field.c", 1249, 3624)), "18field.c", 1249, 3625)),(struct CVALUE*)come_increment_ref_count(come_value_304)), come_pop_stackframe(), __exception_result_var_b486);
        (come_push_stackframe("18field.c", 1251,3629),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_304, "18field.c", 1251, 3627)), "18field.c", 1251, 3628))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_308 = come_decrement_ref_count2(left_value_code_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result179__ = (_Bool)1;
    come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result179__;
    come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("18field.c", 1260,3630),err_msg(info,"parse_method_call is failed"),come_pop_stackframe());
    (come_push_stackframe("18field.c", 1261,3631),exit(2),come_pop_stackframe());
    __result180__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result180__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value351;
void* right_value352;
struct sStoreFieldNode* __exception_result_var_b487;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value358;
struct sNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value358 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1268, "struct sNode");
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("18field.c", 1268, 3633),__exception_result_var_b487=((struct sStoreFieldNode*)(right_value352=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)(right_value351=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1268, "sStoreFieldNode"))), "18field.c", 1268, 3632))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))), come_pop_stackframe(), __exception_result_var_b487));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result183__ = __result_obj__ = ((struct sNode*)(right_value358=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(right_value351,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value352,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result183__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _while_condtional28;
_Bool range_array_313;
char* p_314;
int sline_315;
_Bool _if_conditional381;
_Bool no_comma_316;
_Bool no_output_err_317;
_Bool no_output_come_code_318;
void* right_value359;
struct sNode* __exception_result_var_b492;
struct sNode* exp_319;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool quote_320;
_Bool _if_conditional384;
void* right_value360;
void* right_value361;
struct list$1sNodeph* __exception_result_var_b493;
struct list$1sNodeph* array_num_321;
void* right_value362;
struct sNode* __exception_result_var_b494;
struct sNode* node2_322;
struct list$1sNodeph* __exception_result_var_b495;
_Bool _if_conditional387;
void* right_value366;
struct sNode* __exception_result_var_b496;
struct sNode* node3_326;
struct list$1sNodeph* __exception_result_var_b497;
int __exception_result_var_b498;
void* right_value367;
void* right_value368;
struct sLoadRangeArrayNode* __exception_result_var_b499;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value373;
struct sNode* __dec_obj154;
_Bool _if_conditional397;
_Bool quote_328;
_Bool _if_conditional398;
_Bool range_329;
void* right_value374;
void* right_value375;
struct list$1sNodeph* __exception_result_var_b503;
struct list$1sNodeph* array_num_330;
_Bool _while_condtional29;
_Bool range_array2_331;
char* p_332;
int sline_333;
_Bool _if_conditional399;
_Bool no_comma_334;
_Bool no_output_err_335;
_Bool no_output_come_code_336;
void* right_value376;
struct sNode* __exception_result_var_b504;
struct sNode* exp_337;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value377;
struct sNode* __exception_result_var_b505;
struct sNode* node2_338;
struct list$1sNodeph* __exception_result_var_b506;
_Bool _if_conditional403;
_Bool break_guard_339;
_Bool _if_conditional404;
_Bool _if_conditional405;
void* right_value378;
struct sNode* __exception_result_var_b507;
struct sNode* right_node_340;
void* right_value379;
void* right_value380;
struct sStoreArrayNode* __exception_result_var_b508;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value386;
struct sNode* __dec_obj159;
void* right_value387;
void* right_value388;
struct sLoadArrayNode* __exception_result_var_b513;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value393;
struct sNode* __dec_obj163;
_Bool _if_conditional427;
_Bool no_comma_343;
void* right_value394;
struct sNode* __exception_result_var_b517;
struct sNode* begin_344;
int __exception_result_var_b518;
void* right_value395;
struct sNode* __exception_result_var_b519;
struct sNode* end_345;
int __exception_result_var_b520;
void* right_value396;
void* right_value397;
struct sRangeCheckNode* __exception_result_var_b521;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value403;
struct sNode* __dec_obj168;
_Bool _if_conditional438;
void* right_value404;
void* right_value405;
struct sNullCheckNode* __exception_result_var_b526;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value409;
struct sNode* __dec_obj171;
_Bool _if_conditional446;
void* right_value410;
void* right_value411;
struct sNullableNode* __exception_result_var_b529;
struct sNode* _inf_value7;
struct sNullableNode* _inf_obj_value7;
void* right_value415;
struct sNode* __dec_obj174;
_Bool _if_conditional453;
_Bool _if_conditional454;
void* right_value416;
struct sNode* __exception_result_var_b532;
void* right_value417;
void* right_value418;
struct sNullCheckNode* __exception_result_var_b533;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value422;
struct sNode* __dec_obj177;
void* right_value423;
char* __exception_result_var_b536;
char* field_name_350;
_Bool parse_method_generics_type_351;
char* p_352;
int sline_353;
_Bool _if_conditional462;
_Bool __exception_result_var_b537;
_Bool _if_conditional463;
void* right_value424;
char* __exception_result_var_b538;
char* word_354;
_Bool __exception_result_var_b539;
_Bool _if_conditional464;
_Bool _if_conditional465;
void* right_value425;
struct sNode* __exception_result_var_b540;
struct sNode* right_node_355;
void* right_value426;
void* right_value427;
struct sStoreFieldNode* __exception_result_var_b541;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* right_value433;
struct sNode* __dec_obj182;
_Bool _if_conditional476;
_Bool __exception_result_var_b546;
_Bool _if_conditional477;
struct sNode* __exception_result_var_b547;
void* right_value434;
void* right_value435;
struct sNode* __exception_result_var_b548;
struct sNode* __dec_obj183;
_Bool __exception_result_var_b549;
_Bool _if_conditional478;
struct sNode* __exception_result_var_b550;
void* right_value436;
void* right_value437;
struct sNode* __exception_result_var_b551;
struct sNode* __dec_obj184;
struct sNode* __exception_result_var_b552;
void* right_value438;
void* right_value439;
struct sNode* __exception_result_var_b553;
struct sNode* __dec_obj185;
void* right_value440;
void* right_value441;
struct sLoadFieldNode* __exception_result_var_b554;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* right_value446;
struct sNode* __dec_obj189;
void* right_value447;
struct sNode* __exception_result_var_b558;
struct sNode* node2_358;
_Bool _if_conditional487;
struct sNode* __dec_obj190;
struct sNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_313, 0, sizeof(_Bool));
memset(&p_314, 0, sizeof(char*));
memset(&sline_315, 0, sizeof(int));
memset(&no_comma_316, 0, sizeof(_Bool));
memset(&no_output_err_317, 0, sizeof(_Bool));
memset(&no_output_come_code_318, 0, sizeof(_Bool));
right_value359 = (void*)0;
memset(&exp_319, 0, sizeof(struct sNode*));
memset(&quote_320, 0, sizeof(_Bool));
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&array_num_321, 0, sizeof(struct list$1sNodeph*));
right_value362 = (void*)0;
memset(&node2_322, 0, sizeof(struct sNode*));
right_value366 = (void*)0;
memset(&node3_326, 0, sizeof(struct sNode*));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value373 = (void*)0;
memset(&quote_328, 0, sizeof(_Bool));
memset(&range_329, 0, sizeof(_Bool));
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&array_num_330, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_331, 0, sizeof(_Bool));
memset(&p_332, 0, sizeof(char*));
memset(&sline_333, 0, sizeof(int));
memset(&no_comma_334, 0, sizeof(_Bool));
memset(&no_output_err_335, 0, sizeof(_Bool));
memset(&no_output_come_code_336, 0, sizeof(_Bool));
right_value376 = (void*)0;
memset(&exp_337, 0, sizeof(struct sNode*));
right_value377 = (void*)0;
memset(&node2_338, 0, sizeof(struct sNode*));
memset(&break_guard_339, 0, sizeof(_Bool));
right_value378 = (void*)0;
memset(&right_node_340, 0, sizeof(struct sNode*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value393 = (void*)0;
memset(&no_comma_343, 0, sizeof(_Bool));
right_value394 = (void*)0;
memset(&begin_344, 0, sizeof(struct sNode*));
right_value395 = (void*)0;
memset(&end_345, 0, sizeof(struct sNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&field_name_350, 0, sizeof(char*));
memset(&parse_method_generics_type_351, 0, sizeof(_Bool));
memset(&p_352, 0, sizeof(char*));
memset(&sline_353, 0, sizeof(int));
right_value424 = (void*)0;
memset(&word_354, 0, sizeof(char*));
right_value425 = (void*)0;
memset(&right_node_355, 0, sizeof(struct sNode*));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
memset(&node2_358, 0, sizeof(struct sNode*));
    while(_while_condtional28=(_Bool)1,    _while_condtional28) {
        range_array_313=(_Bool)0;
        {
            p_314=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1277, 3682)), "18field.c", 1277, 3683))->p;
            sline_315=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1278, 3684)), "18field.c", 1278, 3685))->sline;
            if(_if_conditional381=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1280, 3686)), "18field.c", 1280, 3687))->p, "18field.c", 1280, 3688))==91,            _if_conditional381) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1281, 3689)), "18field.c", 1281, 3690))->p++;
                (come_push_stackframe("18field.c", 1282,3691),skip_spaces_and_lf(info),come_pop_stackframe());
                no_comma_316=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1284, 3692)), "18field.c", 1284, 3693))->no_comma;
                no_output_err_317=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1285, 3694)), "18field.c", 1285, 3695))->no_output_err;
                no_output_come_code_318=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1286, 3696)), "18field.c", 1286, 3697))->no_output_come_code;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1287, 3698)), "18field.c", 1287, 3699))->no_output_err=(_Bool)1;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1288, 3700)), "18field.c", 1288, 3701))->no_comma=(_Bool)1;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1289, 3702)), "18field.c", 1289, 3703))->no_output_come_code=(_Bool)1;
                exp_319=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1290, 3704),__exception_result_var_b492=((struct sNode*)(right_value359=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b492));
                if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1291, 3705)), "18field.c", 1291, 3706))->no_comma=no_comma_316;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1292, 3707)), "18field.c", 1292, 3708))->no_output_err=no_output_err_317;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1293, 3709)), "18field.c", 1293, 3710))->no_output_come_code=no_output_come_code_318;
                if(_if_conditional382=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1295, 3711)), "18field.c", 1295, 3712))->p, "18field.c", 1295, 3713))==46&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1295, 3714)), "18field.c", 1295, 3715))->p+1), "18field.c", 1295, 3716))==46,                _if_conditional382) {
                    range_array_313=(_Bool)1;
                }
                if(exp_319) { exp_319 = come_decrement_ref_count2(exp_319, ((struct sNode*)exp_319)->finalize, ((struct sNode*)exp_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1300, 3717)), "18field.c", 1300, 3718))->p=p_314;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1301, 3719)), "18field.c", 1301, 3720))->sline=sline_315;
        }
        if(_if_conditional383=range_array_313&&(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1304, 3721)), "18field.c", 1304, 3722))->p, "18field.c", 1304, 3723))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1304, 3724)), "18field.c", 1304, 3725))->p+1), "18field.c", 1304, 3726))==91||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1304, 3727)), "18field.c", 1304, 3728))->p, "18field.c", 1304, 3729))==91),        _if_conditional383) {
            quote_320=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1305, 3730)), "18field.c", 1305, 3731))->p, "18field.c", 1305, 3732))==92;
            if(quote_320) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1307, 3733)), "18field.c", 1307, 3734))->p++;
            }
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1309, 3735)), "18field.c", 1309, 3736))->p++;
            (come_push_stackframe("18field.c", 1310,3737),skip_spaces_and_lf(info),come_pop_stackframe());
            array_num_321=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("18field.c", 1312, 3739),__exception_result_var_b493=((struct list$1sNodeph*)(right_value361=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value360=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1312, "list$1sNodeph"))), "18field.c", 1312, 3738)))))), come_pop_stackframe(), __exception_result_var_b493));
            come_call_finalizer3(right_value360,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value361,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("18field.c", 1314,3740),skip_pointer_attribute(info),come_pop_stackframe());
            node2_322=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1316, 3741),__exception_result_var_b494=((struct sNode*)(right_value362=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b494));
            if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            (come_push_stackframe("18field.c", 1318, 3788),__exception_result_var_b495=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(array_num_321, "18field.c", 1318, 3742)), "18field.c", 1318, 3743)),(struct sNode*)come_increment_ref_count(node2_322)), come_pop_stackframe(), __exception_result_var_b495);
            if(_if_conditional387=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1320, 3789)), "18field.c", 1320, 3790))->p, "18field.c", 1320, 3791))==46&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1320, 3792)), "18field.c", 1320, 3793))->p+1), "18field.c", 1320, 3794))==46,            _if_conditional387) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1321, 3795)), "18field.c", 1321, 3796))->p+=2;
                (come_push_stackframe("18field.c", 1322,3797),skip_spaces_and_lf(info),come_pop_stackframe());
                (come_push_stackframe("18field.c", 1324,3798),skip_pointer_attribute(info),come_pop_stackframe());
                node3_326=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1326, 3799),__exception_result_var_b496=((struct sNode*)(right_value366=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b496));
                if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                (come_push_stackframe("18field.c", 1328, 3802),__exception_result_var_b497=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(array_num_321, "18field.c", 1328, 3800)), "18field.c", 1328, 3801)),(struct sNode*)come_increment_ref_count(node3_326)), come_pop_stackframe(), __exception_result_var_b497);
                (come_push_stackframe("18field.c", 1330, 3803),__exception_result_var_b498=expected_next_character(93,info), come_pop_stackframe(), __exception_result_var_b498);
                if(node3_326) { node3_326 = come_decrement_ref_count2(node3_326, ((struct sNode*)node3_326)->finalize, ((struct sNode*)node3_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1333, "struct sNode");
            _inf_obj_value2=come_increment_ref_count((come_push_stackframe("18field.c", 1333, 3805),__exception_result_var_b499=((struct sLoadRangeArrayNode*)(right_value368=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)(right_value367=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1333, "sLoadRangeArrayNode"))), "18field.c", 1333, 3804))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_321),quote_320,info))), come_pop_stackframe(), __exception_result_var_b499));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj154=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=_inf_value2)));
            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(right_value367,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value368,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer3(array_num_321,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_322) { node2_322 = come_decrement_ref_count2(node2_322, ((struct sNode*)node2_322)->finalize, ((struct sNode*)node2_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional397=!range_array_313&&(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1335, 3847)), "18field.c", 1335, 3848))->p, "18field.c", 1335, 3849))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1335, 3850)), "18field.c", 1335, 3851))->p+1), "18field.c", 1335, 3852))==91||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1335, 3853)), "18field.c", 1335, 3854))->p, "18field.c", 1335, 3855))==91),            _if_conditional397) {
                quote_328=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1336, 3856)), "18field.c", 1336, 3857))->p, "18field.c", 1336, 3858))==92;
                if(quote_328) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1338, 3859)), "18field.c", 1338, 3860))->p++;
                }
                range_329=(_Bool)0;
                array_num_330=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("18field.c", 1342, 3862),__exception_result_var_b503=((struct list$1sNodeph*)(right_value375=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value374=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1342, "list$1sNodeph"))), "18field.c", 1342, 3861)))))), come_pop_stackframe(), __exception_result_var_b503));
                come_call_finalizer3(right_value374,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value375,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional29=1,                _while_condtional29) {
                    range_array2_331=(_Bool)0;
                    {
                        p_332=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1346, 3863)), "18field.c", 1346, 3864))->p;
                        sline_333=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1347, 3865)), "18field.c", 1347, 3866))->sline;
                        if(_if_conditional399=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1349, 3867)), "18field.c", 1349, 3868))->p, "18field.c", 1349, 3869))==91,                        _if_conditional399) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1350, 3870)), "18field.c", 1350, 3871))->p++;
                            (come_push_stackframe("18field.c", 1351,3872),skip_spaces_and_lf(info),come_pop_stackframe());
                            no_comma_334=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1353, 3873)), "18field.c", 1353, 3874))->no_comma;
                            no_output_err_335=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1354, 3875)), "18field.c", 1354, 3876))->no_output_err;
                            no_output_come_code_336=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1355, 3877)), "18field.c", 1355, 3878))->no_output_come_code;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1356, 3879)), "18field.c", 1356, 3880))->no_output_err=(_Bool)1;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1357, 3881)), "18field.c", 1357, 3882))->no_comma=(_Bool)1;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1358, 3883)), "18field.c", 1358, 3884))->no_output_come_code=(_Bool)1;
                            exp_337=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1359, 3885),__exception_result_var_b504=((struct sNode*)(right_value376=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b504));
                            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1360, 3886)), "18field.c", 1360, 3887))->no_comma=no_comma_334;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1361, 3888)), "18field.c", 1361, 3889))->no_output_err=no_output_err_335;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1362, 3890)), "18field.c", 1362, 3891))->no_output_come_code=no_output_come_code_336;
                            if(_if_conditional400=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1364, 3892)), "18field.c", 1364, 3893))->p, "18field.c", 1364, 3894))==46&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1364, 3895)), "18field.c", 1364, 3896))->p+1), "18field.c", 1364, 3897))==46,                            _if_conditional400) {
                                range_array2_331=(_Bool)1;
                            }
                            if(exp_337) { exp_337 = come_decrement_ref_count2(exp_337, ((struct sNode*)exp_337)->finalize, ((struct sNode*)exp_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1369, 3898)), "18field.c", 1369, 3899))->p=p_332;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1370, 3900)), "18field.c", 1370, 3901))->sline=sline_333;
                    }
                    if(range_array2_331) {
                        break;
                    }
                    else {
                        if(_if_conditional402=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1376, 3902)), "18field.c", 1376, 3903))->p, "18field.c", 1376, 3904))==91,                        _if_conditional402) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1377, 3905)), "18field.c", 1377, 3906))->p++;
                            (come_push_stackframe("18field.c", 1378,3907),skip_spaces_and_lf(info),come_pop_stackframe());
                            (come_push_stackframe("18field.c", 1380,3908),skip_pointer_attribute(info),come_pop_stackframe());
                            node2_338=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1382, 3909),__exception_result_var_b505=((struct sNode*)(right_value377=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b505));
                            if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            (come_push_stackframe("18field.c", 1384, 3912),__exception_result_var_b506=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(array_num_330, "18field.c", 1384, 3910)), "18field.c", 1384, 3911)),(struct sNode*)come_increment_ref_count(node2_338)), come_pop_stackframe(), __exception_result_var_b506);
                            if(_if_conditional403=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1386, 3913)), "18field.c", 1386, 3914))->p, "18field.c", 1386, 3915))==93,                            _if_conditional403) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1387, 3916)), "18field.c", 1387, 3917))->p++;
                                (come_push_stackframe("18field.c", 1388,3918),skip_spaces_and_lf(info),come_pop_stackframe());
                            }
                            else {
                                (come_push_stackframe("18field.c", 1391,3919),err_msg(info,"require ] character"),come_pop_stackframe());
                                (come_push_stackframe("18field.c", 1392,3920),exit(2),come_pop_stackframe());
                            }
                            if(node2_338) { node2_338 = come_decrement_ref_count2(node2_338, ((struct sNode*)node2_338)->finalize, ((struct sNode*)node2_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                break_guard_339=(_Bool)0;
                if(_if_conditional404=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1401, 3921)), "18field.c", 1401, 3922))->p, "18field.c", 1401, 3923))==63&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1401, 3924)), "18field.c", 1401, 3925))->p+1), "18field.c", 1401, 3926))==63,                _if_conditional404) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1402, 3927)), "18field.c", 1402, 3928))->p+=2;
                    (come_push_stackframe("18field.c", 1403,3929),skip_spaces_and_lf(info),come_pop_stackframe());
                    break_guard_339=(_Bool)1;
                }
                if(_if_conditional405=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1407, 3930)), "18field.c", 1407, 3931))->p, "18field.c", 1407, 3932))==61&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1407, 3933)), "18field.c", 1407, 3934))->p+1), "18field.c", 1407, 3935))!=61,                _if_conditional405) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1408, 3936)), "18field.c", 1408, 3937))->p++;
                    (come_push_stackframe("18field.c", 1409,3938),skip_spaces_and_lf(info),come_pop_stackframe());
                    (come_push_stackframe("18field.c", 1411,3939),parse_sharp_v5(info),come_pop_stackframe());
                    right_node_340=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1413, 3940),__exception_result_var_b507=((struct sNode*)(right_value378=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b507));
                    if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    (come_push_stackframe("18field.c", 1415,3941),parse_sharp_v5(info),come_pop_stackframe());
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1417, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count((come_push_stackframe("18field.c", 1417, 3943),__exception_result_var_b508=((struct sStoreArrayNode*)(right_value380=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)(right_value379=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1417, "sStoreArrayNode"))), "18field.c", 1417, 3942))),node,(struct sNode*)come_increment_ref_count(right_node_340),(struct list$1sNodeph*)come_increment_ref_count(array_num_330),quote_328,info))), come_pop_stackframe(), __exception_result_var_b508));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sNodeBase_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj159=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=_inf_value3)));
                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value379,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value380,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_340) { right_node_340 = come_decrement_ref_count2(right_node_340, ((struct sNode*)right_node_340)->finalize, ((struct sNode*)right_node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1420, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count((come_push_stackframe("18field.c", 1420, 3997),__exception_result_var_b513=((struct sLoadArrayNode*)(right_value388=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)(right_value387=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1420, "sLoadArrayNode"))), "18field.c", 1420, 3996))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_330),quote_328,break_guard_339,info))), come_pop_stackframe(), __exception_result_var_b513));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj163=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=_inf_value4)));
                    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value387,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value388,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer3(array_num_330,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional427=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1423, 4043)), "18field.c", 1423, 4044))->p, "18field.c", 1423, 4045))==33&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1423, 4046)), "18field.c", 1423, 4047))->p+1), "18field.c", 1423, 4048))==123,                _if_conditional427) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1424, 4049)), "18field.c", 1424, 4050))->p+=2;
                    (come_push_stackframe("18field.c", 1425,4051),skip_spaces_and_lf(info),come_pop_stackframe());
                    no_comma_343=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1427, 4052)), "18field.c", 1427, 4053))->no_comma;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1428, 4054)), "18field.c", 1428, 4055))->no_comma=(_Bool)1;
                    begin_344=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1429, 4056),__exception_result_var_b517=((struct sNode*)(right_value394=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b517));
                    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1430, 4057)), "18field.c", 1432, 4058))->no_comma=no_comma_343;
                    (come_push_stackframe("18field.c", 1432, 4059),__exception_result_var_b518=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b518);
                    end_345=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1434, 4060),__exception_result_var_b519=((struct sNode*)(right_value395=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b519));
                    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    (come_push_stackframe("18field.c", 1436, 4061),__exception_result_var_b520=expected_next_character(125,info), come_pop_stackframe(), __exception_result_var_b520);
                    (come_push_stackframe("18field.c", 1438,4062),parse_sharp_v5(info),come_pop_stackframe());
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1440, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count((come_push_stackframe("18field.c", 1440, 4064),__exception_result_var_b521=((struct sRangeCheckNode*)(right_value397=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)(right_value396=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1440, "sRangeCheckNode"))), "18field.c", 1440, 4063))),node,begin_344,end_345,info))), come_pop_stackframe(), __exception_result_var_b521));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj168=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=_inf_value5)));
                    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value396,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value397,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_344) { begin_344 = come_decrement_ref_count2(begin_344, ((struct sNode*)begin_344)->finalize, ((struct sNode*)begin_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_345) { end_345 = come_decrement_ref_count2(end_345, ((struct sNode*)end_345)->finalize, ((struct sNode*)end_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional438=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1442, 4113)), "18field.c", 1442, 4114))->p, "18field.c", 1442, 4115))==33&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1442, 4116)), "18field.c", 1442, 4117))->p+1), "18field.c", 1442, 4118))!=61,                    _if_conditional438) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1443, 4119)), "18field.c", 1443, 4120))->p++;
                        (come_push_stackframe("18field.c", 1444,4121),skip_spaces_and_lf(info),come_pop_stackframe());
                        (come_push_stackframe("18field.c", 1446,4122),parse_sharp_v5(info),come_pop_stackframe());
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1448, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count((come_push_stackframe("18field.c", 1448, 4124),__exception_result_var_b526=((struct sNullCheckNode*)(right_value405=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)(right_value404=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1448, "sNullCheckNode"))), "18field.c", 1448, 4123))),node,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b526));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj171=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=_inf_value6)));
                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer3(right_value404,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value405,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        if(_if_conditional446=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1450, 4155)), "18field.c", 1450, 4156))->p, "18field.c", 1450, 4157))==63&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1450, 4158)), "18field.c", 1450, 4159))->p+1), "18field.c", 1450, 4160))==63,                        _if_conditional446) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1451, 4161)), "18field.c", 1451, 4162))->p+=2;
                            (come_push_stackframe("18field.c", 1452,4163),skip_spaces_and_lf(info),come_pop_stackframe());
                            (come_push_stackframe("18field.c", 1454,4164),parse_sharp_v5(info),come_pop_stackframe());
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1456, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count((come_push_stackframe("18field.c", 1456, 4166),__exception_result_var_b529=((struct sNullableNode*)(right_value411=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)come_null_check(((struct sNullableNode*)(right_value410=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1456, "sNullableNode"))), "18field.c", 1456, 4165))),node,info))), come_pop_stackframe(), __exception_result_var_b529));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullableNode_finalize;
                            _inf_value7->clone=(void*)sNullableNode_clone;
                            _inf_value7->compile=(void*)sNullableNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sNullableNode_kind;
                            __dec_obj174=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=_inf_value7)));
                            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer3(right_value410,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value411,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        else {
                            if(_if_conditional453=(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1458, 4193)), "18field.c", 1458, 4194))->p, "18field.c", 1458, 4195))==46&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1458, 4196)), "18field.c", 1458, 4197))->p+1), "18field.c", 1458, 4198))!=46)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1458, 4199)), "18field.c", 1458, 4200))->p, "18field.c", 1458, 4201))==45&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1458, 4202)), "18field.c", 1458, 4203))->p+1), "18field.c", 1458, 4204))==62),                            _if_conditional453) {
                                if(_if_conditional454=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1459, 4205)), "18field.c", 1459, 4206))->p, "18field.c", 1459, 4207))==46,                                _if_conditional454) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1460, 4208)), "18field.c", 1460, 4209))->p++;
                                    (come_push_stackframe("18field.c", 1461,4210),skip_spaces_and_lf(info),come_pop_stackframe());
                                }
                                else {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1464, 4211)), "18field.c", 1464, 4212))->p+=2;
                                    (come_push_stackframe("18field.c", 1465,4213),skip_spaces_and_lf(info),come_pop_stackframe());
                                }
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1468, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count((come_push_stackframe("18field.c", 1468, 4216),__exception_result_var_b533=((struct sNullCheckNode*)(right_value418=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)(right_value416=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1468, "sNullCheckNode"))), "18field.c", 1468, 4214))),((struct sNode*)(right_value417=(come_push_stackframe("18field.c", 1468, 4215),__exception_result_var_b532=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b532))),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b533));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                                _inf_value8->clone=(void*)sNullCheckNode_clone;
                                _inf_value8->compile=(void*)sNullCheckNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sNullCheckNode_kind;
                                __dec_obj177=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=_inf_value8)));
                                if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer3(right_value416,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                come_call_finalizer3(right_value418,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                (come_push_stackframe("18field.c", 1470,4247),parse_sharp_v5(info),come_pop_stackframe());
                                field_name_350=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1472, 4248),__exception_result_var_b536=((char*)(right_value423=parse_word(info))), come_pop_stackframe(), __exception_result_var_b536));
                                right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                (come_push_stackframe("18field.c", 1474,4249),parse_sharp_v5(info),come_pop_stackframe());
                                parse_method_generics_type_351=(_Bool)0;
                                {
                                    p_352=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1478, 4250)), "18field.c", 1478, 4251))->p;
                                    sline_353=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1479, 4252)), "18field.c", 1479, 4253))->sline;
                                    if(_if_conditional462=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1481, 4254)), "18field.c", 1481, 4255))->p, "18field.c", 1481, 4256))==60,                                    _if_conditional462) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1482, 4257)), "18field.c", 1482, 4258))->p++;
                                        (come_push_stackframe("18field.c", 1483,4259),skip_spaces_and_lf(info),come_pop_stackframe());
                                        if(_if_conditional463=(come_push_stackframe("18field.c", 1485, 4263),__exception_result_var_b537=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1485, 4260)), "18field.c", 1485, 4261))->p, "18field.c", 1485, 4262))), come_pop_stackframe(), __exception_result_var_b537)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1485, 4264)), "18field.c", 1485, 4265))->p, "18field.c", 1485, 4266))==95,                                        _if_conditional463) {
                                            word_354=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1486, 4267),__exception_result_var_b538=((char*)(right_value424=parse_word(info))), come_pop_stackframe(), __exception_result_var_b538));
                                            right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional464=(come_push_stackframe("18field.c", 1488, 4268),__exception_result_var_b539=is_type_name(word_354,info), come_pop_stackframe(), __exception_result_var_b539),                                            _if_conditional464) {
                                                parse_method_generics_type_351=(_Bool)1;
                                            }
                                            word_354 = come_decrement_ref_count2(word_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1494, 4269)), "18field.c", 1494, 4270))->p=p_352;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1495, 4271)), "18field.c", 1495, 4272))->sline=sline_353;
                                }
                                if(_if_conditional465=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1498, 4273)), "18field.c", 1498, 4274))->p, "18field.c", 1498, 4275))==61&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1498, 4276)), "18field.c", 1498, 4277))->p+1), "18field.c", 1498, 4278))!=61,                                _if_conditional465) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1499, 4279)), "18field.c", 1499, 4280))->p++;
                                    (come_push_stackframe("18field.c", 1500,4281),skip_spaces_and_lf(info),come_pop_stackframe());
                                    (come_push_stackframe("18field.c", 1502,4282),parse_sharp_v5(info),come_pop_stackframe());
                                    right_node_355=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1504, 4283),__exception_result_var_b540=((struct sNode*)(right_value425=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b540));
                                    if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1506, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count((come_push_stackframe("18field.c", 1506, 4285),__exception_result_var_b541=((struct sStoreFieldNode*)(right_value427=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)(right_value426=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1506, "sStoreFieldNode"))), "18field.c", 1506, 4284))),node,(struct sNode*)come_increment_ref_count(right_node_355),(char*)come_increment_ref_count(field_name_350),info))), come_pop_stackframe(), __exception_result_var_b541));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                                    _inf_value9->clone=(void*)sStoreFieldNode_clone;
                                    _inf_value9->compile=(void*)sStoreFieldNode_compile;
                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                    _inf_value9->terminated=(void*)sNodeBase_terminated;
                                    _inf_value9->kind=(void*)sStoreFieldNode_kind;
                                    __dec_obj182=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=_inf_value9)));
                                    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer3(right_value426,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value427,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    if(right_node_355) { right_node_355 = come_decrement_ref_count2(right_node_355, ((struct sNode*)right_node_355)->finalize, ((struct sNode*)right_node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional476=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1508, 4334)), "18field.c", 1508, 4335))->p, "18field.c", 1508, 4336))==40||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1508, 4337)), "18field.c", 1508, 4338))->p, "18field.c", 1508, 4339))==123||parse_method_generics_type_351||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1508, 4340)), "18field.c", 1508, 4341))->p, "18field.c", 1508, 4342))==45&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1508, 4343)), "18field.c", 1508, 4344))->p+1), "18field.c", 1508, 4345))==62&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1508, 4346)), "18field.c", 1508, 4347))->p+2), "18field.c", 1508, 4348))==40),                                    _if_conditional476) {
                                        if(_if_conditional477=(come_push_stackframe("18field.c", 1509, 4349),__exception_result_var_b546=string_operator_equals(field_name_350,"if"), come_pop_stackframe(), __exception_result_var_b546),                                        _if_conditional477) {
                                            __dec_obj183=node;
                                            node=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1510, 4351),__exception_result_var_b548=((struct sNode*)(right_value435=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=(come_push_stackframe("18field.c", 1510, 4350),__exception_result_var_b547=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b547)))),info))), come_pop_stackframe(), __exception_result_var_b548));
                                            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            if(_if_conditional478=(come_push_stackframe("18field.c", 1512, 4352),__exception_result_var_b549=string_operator_equals(field_name_350,"elif"), come_pop_stackframe(), __exception_result_var_b549),                                            _if_conditional478) {
                                                __dec_obj184=node;
                                                node=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1513, 4354),__exception_result_var_b551=((struct sNode*)(right_value437=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=(come_push_stackframe("18field.c", 1513, 4353),__exception_result_var_b550=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b550)))),info))), come_pop_stackframe(), __exception_result_var_b551));
                                                if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                __dec_obj185=node;
                                                node=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1516, 4356),__exception_result_var_b553=((struct sNode*)(right_value439=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=(come_push_stackframe("18field.c", 1516, 4355),__exception_result_var_b552=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b552)))),(char*)come_increment_ref_count(field_name_350),info))), come_pop_stackframe(), __exception_result_var_b553));
                                                if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1520, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count((come_push_stackframe("18field.c", 1520, 4358),__exception_result_var_b554=((struct sLoadFieldNode*)(right_value441=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)(right_value440=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1520, "sLoadFieldNode"))), "18field.c", 1520, 4357))),node,(char*)come_increment_ref_count(field_name_350),info))), come_pop_stackframe(), __exception_result_var_b554));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                                        _inf_value10->clone=(void*)sLoadFieldNode_clone;
                                        _inf_value10->compile=(void*)sLoadFieldNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sLoadFieldNode_kind;
                                        __dec_obj189=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=_inf_value10)));
                                        if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                        come_call_finalizer3(right_value440,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value441,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                }
                                field_name_350 = come_decrement_ref_count2(field_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                node2_358=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1524, 4396),__exception_result_var_b558=((struct sNode*)(right_value447=post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info))), come_pop_stackframe(), __exception_result_var_b558));
                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional487=node2_358==((void*)0),                                _if_conditional487) {
                                    if(node2_358) { node2_358 = come_decrement_ref_count2(node2_358, ((struct sNode*)node2_358)->finalize, ((struct sNode*)node2_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    break;
                                }
                                __dec_obj190=node;
                                node=(struct sNode*)come_increment_ref_count(node2_358);
                                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node2_358) { node2_358 = come_decrement_ref_count2(node2_358, ((struct sNode*)node2_358)->finalize, ((struct sNode*)node2_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        }
                    }
                }
            }
        }
    }
    __result203__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result203__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional385;
void* right_value363;
struct list_item$1sNodeph* litem_323;
struct sNode* __dec_obj148;
_Bool _if_conditional386;
void* right_value364;
struct list_item$1sNodeph* litem_324;
struct sNode* __dec_obj149;
void* right_value365;
struct list_item$1sNodeph* litem_325;
struct sNode* __dec_obj150;
struct list$1sNodeph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
memset(&litem_323, 0, sizeof(struct list_item$1sNodeph*));
right_value364 = (void*)0;
memset(&litem_324, 0, sizeof(struct list_item$1sNodeph*));
right_value365 = (void*)0;
memset(&litem_325, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional385=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 222, 3744)), "./neo-c.h", 222, 3745))->len==0,                _if_conditional385) {
                    litem_323=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value363=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 223, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value363,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_323, "./neo-c.h", 225, 3746)), "./neo-c.h", 225, 3747))->prev=((void*)0);
                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_323, "./neo-c.h", 226, 3748)), "./neo-c.h", 226, 3749))->next=((void*)0);
                    __dec_obj148=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_323, "./neo-c.h", 227, 3750)), "./neo-c.h", 227, 3751))->item;
                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_323, "./neo-c.h", 227, 3750)), "./neo-c.h", 227, 3751))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 229, 3752)), "./neo-c.h", 229, 3753))->tail=litem_323;
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 230, 3754)), "./neo-c.h", 230, 3755))->head=litem_323;
                }
                else {
                    if(_if_conditional386=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 232, 3756)), "./neo-c.h", 232, 3757))->len==1,                    _if_conditional386) {
                        litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value364=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 233, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value364,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_324, "./neo-c.h", 235, 3758)), "./neo-c.h", 235, 3759))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 235, 3760)), "./neo-c.h", 235, 3761))->head;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_324, "./neo-c.h", 236, 3762)), "./neo-c.h", 236, 3763))->next=((void*)0);
                        __dec_obj149=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_324, "./neo-c.h", 237, 3764)), "./neo-c.h", 237, 3765))->item;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_324, "./neo-c.h", 237, 3764)), "./neo-c.h", 237, 3765))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 239, 3766)), "./neo-c.h", 239, 3767))->tail=litem_324;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 240, 3768)), "./neo-c.h", 240, 3769))->head, "./neo-c.h", 240, 3770)), "./neo-c.h", 240, 3771))->next=litem_324;
                    }
                    else {
                        litem_325=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value365=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 243, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value365,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_325, "./neo-c.h", 245, 3772)), "./neo-c.h", 245, 3773))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 245, 3774)), "./neo-c.h", 245, 3775))->tail;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_325, "./neo-c.h", 246, 3776)), "./neo-c.h", 246, 3777))->next=((void*)0);
                        __dec_obj150=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_325, "./neo-c.h", 247, 3778)), "./neo-c.h", 247, 3779))->item;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_325, "./neo-c.h", 247, 3778)), "./neo-c.h", 247, 3779))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 249, 3780)), "./neo-c.h", 249, 3781))->tail, "./neo-c.h", 249, 3782)), "./neo-c.h", 249, 3783))->next=litem_325;
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 250, 3784)), "./neo-c.h", 250, 3785))->tail=litem_325;
                    }
                }
                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 253, 3786)), "./neo-c.h", 253, 3787))->len++;
                __result184__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result184__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional388=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0, 3806)), "sLoadRangeArrayNode_finalize", 0, 3807))->sname!=((void*)0),                _if_conditional388) {
                    ((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0, 3808)), "sLoadRangeArrayNode_finalize", 0, 3809))->sname = come_decrement_ref_count2(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0, 3808)), "sLoadRangeArrayNode_finalize", 0, 3809))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional389=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1, 3810)), "sLoadRangeArrayNode_finalize", 1, 3811))->mArrayNum!=((void*)0),                _if_conditional389) {
                    come_call_finalizer3(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1, 3812)), "sLoadRangeArrayNode_finalize", 1, 3813))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional390=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2, 3814)), "sLoadRangeArrayNode_finalize", 2, 3815))->mLeft!=((void*)0),                _if_conditional390) {
                    if(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2, 3816)), "sLoadRangeArrayNode_finalize", 2, 3817))->mLeft) { ((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2, 3816)), "sLoadRangeArrayNode_finalize", 2, 3817))->mLeft = come_decrement_ref_count2(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2, 3816)), "sLoadRangeArrayNode_finalize", 2, 3817))->mLeft, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2, 3816)), "sLoadRangeArrayNode_finalize", 2, 3817))->mLeft)->finalize, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2, 3816)), "sLoadRangeArrayNode_finalize", 2, 3817))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
_Bool _if_conditional391;
struct sLoadRangeArrayNode* __result185__;
void* right_value369;
struct sLoadRangeArrayNode* result_327;
_Bool _if_conditional392;
_Bool _if_conditional393;
char* __exception_result_var_b500;
void* right_value370;
char* __dec_obj151;
_Bool _if_conditional394;
struct list$1sNodeph* __exception_result_var_b501;
void* right_value371;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional395;
struct sNode* __exception_result_var_b502;
void* right_value372;
struct sNode* __dec_obj153;
_Bool _if_conditional396;
struct sLoadRangeArrayNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value369 = (void*)0;
memset(&result_327, 0, sizeof(struct sLoadRangeArrayNode*));
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
                if(_if_conditional391=self==(void*)0,                _if_conditional391) {
                    __result185__ = __result_obj__ = (void*)0;
                    return __result185__;
                }
                result_327=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value369=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer3(right_value369,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional392=self!=((void*)0),                _if_conditional392) {
                    ((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(result_327, "sLoadRangeArrayNode_clone", 4, 3818)), "sLoadRangeArrayNode_clone", 4, 3819))->sline=((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 4, 3820)), "sLoadRangeArrayNode_clone", 4, 3821))->sline;
                }
                if(_if_conditional393=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5, 3822)), "sLoadRangeArrayNode_clone", 5, 3823))->sname!=((void*)0),                _if_conditional393) {
                    __dec_obj151=((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(result_327, "sLoadRangeArrayNode_clone", 5, 3824)), "sLoadRangeArrayNode_clone", 5, 3825))->sname;
                    ((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(result_327, "sLoadRangeArrayNode_clone", 5, 3824)), "sLoadRangeArrayNode_clone", 5, 3825))->sname=(char*)come_increment_ref_count(((char*)(right_value370=(come_push_stackframe("sLoadRangeArrayNode_clone", 5, 3828),__exception_result_var_b500=string_clone(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5, 3826)), "sLoadRangeArrayNode_clone", 5, 3827))->sname), come_pop_stackframe(), __exception_result_var_b500))));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional394=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6, 3829)), "sLoadRangeArrayNode_clone", 6, 3830))->mArrayNum!=((void*)0),                _if_conditional394) {
                    __dec_obj152=((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(result_327, "sLoadRangeArrayNode_clone", 6, 3831)), "sLoadRangeArrayNode_clone", 6, 3832))->mArrayNum;
                    ((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(result_327, "sLoadRangeArrayNode_clone", 6, 3831)), "sLoadRangeArrayNode_clone", 6, 3832))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value371=(come_push_stackframe("sLoadRangeArrayNode_clone", 6, 3835),__exception_result_var_b501=list$1sNodephp_clone(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6, 3833)), "sLoadRangeArrayNode_clone", 6, 3834))->mArrayNum), come_pop_stackframe(), __exception_result_var_b501))));
                    come_call_finalizer3(__dec_obj152,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value371,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional395=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 7, 3836)), "sLoadRangeArrayNode_clone", 7, 3837))->mLeft!=((void*)0),                _if_conditional395) {
                    __dec_obj153=((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(result_327, "sLoadRangeArrayNode_clone", 7, 3838)), "sLoadRangeArrayNode_clone", 7, 3839))->mLeft;
                    ((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(result_327, "sLoadRangeArrayNode_clone", 7, 3838)), "sLoadRangeArrayNode_clone", 7, 3839))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=(come_push_stackframe("sLoadRangeArrayNode_clone", 7, 3842),__exception_result_var_b502=sNode_clone(((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 7, 3840)), "sLoadRangeArrayNode_clone", 7, 3841))->mLeft), come_pop_stackframe(), __exception_result_var_b502))));
                    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional396=self!=((void*)0),                _if_conditional396) {
                    ((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(result_327, "sLoadRangeArrayNode_clone", 8, 3843)), "sLoadRangeArrayNode_clone", 8, 3844))->mQuote=((struct sLoadRangeArrayNode*)come_null_check(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 8, 3845)), "sLoadRangeArrayNode_clone", 8, 3846))->mQuote;
                }
                __result186__ = __result_obj__ = result_327;
                come_call_finalizer3(result_327,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result186__;
                come_call_finalizer3(result_327,sLoadRangeArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional406=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0, 3944)), "sStoreArrayNode_finalize", 0, 3945))->sname!=((void*)0),                        _if_conditional406) {
                            ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0, 3946)), "sStoreArrayNode_finalize", 0, 3947))->sname = come_decrement_ref_count2(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0, 3946)), "sStoreArrayNode_finalize", 0, 3947))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional407=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1, 3948)), "sStoreArrayNode_finalize", 1, 3949))->mLeft!=((void*)0),                        _if_conditional407) {
                            if(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1, 3950)), "sStoreArrayNode_finalize", 1, 3951))->mLeft) { ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1, 3950)), "sStoreArrayNode_finalize", 1, 3951))->mLeft = come_decrement_ref_count2(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1, 3950)), "sStoreArrayNode_finalize", 1, 3951))->mLeft, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1, 3950)), "sStoreArrayNode_finalize", 1, 3951))->mLeft)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1, 3950)), "sStoreArrayNode_finalize", 1, 3951))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional408=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2, 3952)), "sStoreArrayNode_finalize", 2, 3953))->mRight!=((void*)0),                        _if_conditional408) {
                            if(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2, 3954)), "sStoreArrayNode_finalize", 2, 3955))->mRight) { ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2, 3954)), "sStoreArrayNode_finalize", 2, 3955))->mRight = come_decrement_ref_count2(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2, 3954)), "sStoreArrayNode_finalize", 2, 3955))->mRight, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2, 3954)), "sStoreArrayNode_finalize", 2, 3955))->mRight)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2, 3954)), "sStoreArrayNode_finalize", 2, 3955))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional409=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3, 3956)), "sStoreArrayNode_finalize", 3, 3957))->mArrayNum!=((void*)0),                        _if_conditional409) {
                            come_call_finalizer3(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3, 3958)), "sStoreArrayNode_finalize", 3, 3959))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
_Bool _if_conditional410;
struct sStoreArrayNode* __result187__;
void* right_value381;
struct sStoreArrayNode* result_341;
_Bool _if_conditional411;
_Bool _if_conditional412;
char* __exception_result_var_b509;
void* right_value382;
char* __dec_obj155;
_Bool _if_conditional413;
struct sNode* __exception_result_var_b510;
void* right_value383;
struct sNode* __dec_obj156;
_Bool _if_conditional414;
struct sNode* __exception_result_var_b511;
void* right_value384;
struct sNode* __dec_obj157;
_Bool _if_conditional415;
struct list$1sNodeph* __exception_result_var_b512;
void* right_value385;
struct list$1sNodeph* __dec_obj158;
_Bool _if_conditional416;
struct sStoreArrayNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_341, 0, sizeof(struct sStoreArrayNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
                        if(_if_conditional410=self==(void*)0,                        _if_conditional410) {
                            __result187__ = __result_obj__ = (void*)0;
                            return __result187__;
                        }
                        result_341=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value381=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer3(right_value381,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional411=self!=((void*)0),                        _if_conditional411) {
                            ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 4, 3960)), "sStoreArrayNode_clone", 4, 3961))->sline=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 4, 3962)), "sStoreArrayNode_clone", 4, 3963))->sline;
                        }
                        if(_if_conditional412=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5, 3964)), "sStoreArrayNode_clone", 5, 3965))->sname!=((void*)0),                        _if_conditional412) {
                            __dec_obj155=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 5, 3966)), "sStoreArrayNode_clone", 5, 3967))->sname;
                            ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 5, 3966)), "sStoreArrayNode_clone", 5, 3967))->sname=(char*)come_increment_ref_count(((char*)(right_value382=(come_push_stackframe("sStoreArrayNode_clone", 5, 3970),__exception_result_var_b509=string_clone(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5, 3968)), "sStoreArrayNode_clone", 5, 3969))->sname), come_pop_stackframe(), __exception_result_var_b509))));
                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional413=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6, 3971)), "sStoreArrayNode_clone", 6, 3972))->mLeft!=((void*)0),                        _if_conditional413) {
                            __dec_obj156=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 6, 3973)), "sStoreArrayNode_clone", 6, 3974))->mLeft;
                            ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 6, 3973)), "sStoreArrayNode_clone", 6, 3974))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=(come_push_stackframe("sStoreArrayNode_clone", 6, 3977),__exception_result_var_b510=sNode_clone(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6, 3975)), "sStoreArrayNode_clone", 6, 3976))->mLeft), come_pop_stackframe(), __exception_result_var_b510))));
                            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional414=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7, 3978)), "sStoreArrayNode_clone", 7, 3979))->mRight!=((void*)0),                        _if_conditional414) {
                            __dec_obj157=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 7, 3980)), "sStoreArrayNode_clone", 7, 3981))->mRight;
                            ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 7, 3980)), "sStoreArrayNode_clone", 7, 3981))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=(come_push_stackframe("sStoreArrayNode_clone", 7, 3984),__exception_result_var_b511=sNode_clone(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7, 3982)), "sStoreArrayNode_clone", 7, 3983))->mRight), come_pop_stackframe(), __exception_result_var_b511))));
                            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional415=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 8, 3985)), "sStoreArrayNode_clone", 8, 3986))->mArrayNum!=((void*)0),                        _if_conditional415) {
                            __dec_obj158=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 8, 3987)), "sStoreArrayNode_clone", 8, 3988))->mArrayNum;
                            ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 8, 3987)), "sStoreArrayNode_clone", 8, 3988))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value385=(come_push_stackframe("sStoreArrayNode_clone", 8, 3991),__exception_result_var_b512=list$1sNodephp_clone(((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 8, 3989)), "sStoreArrayNode_clone", 8, 3990))->mArrayNum), come_pop_stackframe(), __exception_result_var_b512))));
                            come_call_finalizer3(__dec_obj158,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value385,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional416=self!=((void*)0),                        _if_conditional416) {
                            ((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(result_341, "sStoreArrayNode_clone", 9, 3992)), "sStoreArrayNode_clone", 9, 3993))->mQuote=((struct sStoreArrayNode*)come_null_check(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 9, 3994)), "sStoreArrayNode_clone", 9, 3995))->mQuote;
                        }
                        __result188__ = __result_obj__ = result_341;
                        come_call_finalizer3(result_341,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result188__;
                        come_call_finalizer3(result_341,sStoreArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional417=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0, 3998)), "sLoadArrayNode_finalize", 0, 3999))->sname!=((void*)0),                        _if_conditional417) {
                            ((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0, 4000)), "sLoadArrayNode_finalize", 0, 4001))->sname = come_decrement_ref_count2(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0, 4000)), "sLoadArrayNode_finalize", 0, 4001))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional418=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1, 4002)), "sLoadArrayNode_finalize", 1, 4003))->mArrayNum!=((void*)0),                        _if_conditional418) {
                            come_call_finalizer3(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1, 4004)), "sLoadArrayNode_finalize", 1, 4005))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional419=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2, 4006)), "sLoadArrayNode_finalize", 2, 4007))->mLeft!=((void*)0),                        _if_conditional419) {
                            if(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2, 4008)), "sLoadArrayNode_finalize", 2, 4009))->mLeft) { ((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2, 4008)), "sLoadArrayNode_finalize", 2, 4009))->mLeft = come_decrement_ref_count2(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2, 4008)), "sLoadArrayNode_finalize", 2, 4009))->mLeft, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2, 4008)), "sLoadArrayNode_finalize", 2, 4009))->mLeft)->finalize, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2, 4008)), "sLoadArrayNode_finalize", 2, 4009))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
_Bool _if_conditional420;
struct sLoadArrayNode* __result189__;
void* right_value389;
struct sLoadArrayNode* result_342;
_Bool _if_conditional421;
_Bool _if_conditional422;
char* __exception_result_var_b514;
void* right_value390;
char* __dec_obj160;
_Bool _if_conditional423;
struct list$1sNodeph* __exception_result_var_b515;
void* right_value391;
struct list$1sNodeph* __dec_obj161;
_Bool _if_conditional424;
_Bool _if_conditional425;
struct sNode* __exception_result_var_b516;
void* right_value392;
struct sNode* __dec_obj162;
_Bool _if_conditional426;
struct sLoadArrayNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_342, 0, sizeof(struct sLoadArrayNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
                        if(_if_conditional420=self==(void*)0,                        _if_conditional420) {
                            __result189__ = __result_obj__ = (void*)0;
                            return __result189__;
                        }
                        result_342=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value389=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer3(right_value389,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional421=self!=((void*)0),                        _if_conditional421) {
                            ((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 4, 4010)), "sLoadArrayNode_clone", 4, 4011))->sline=((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 4, 4012)), "sLoadArrayNode_clone", 4, 4013))->sline;
                        }
                        if(_if_conditional422=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5, 4014)), "sLoadArrayNode_clone", 5, 4015))->sname!=((void*)0),                        _if_conditional422) {
                            __dec_obj160=((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 5, 4016)), "sLoadArrayNode_clone", 5, 4017))->sname;
                            ((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 5, 4016)), "sLoadArrayNode_clone", 5, 4017))->sname=(char*)come_increment_ref_count(((char*)(right_value390=(come_push_stackframe("sLoadArrayNode_clone", 5, 4020),__exception_result_var_b514=string_clone(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5, 4018)), "sLoadArrayNode_clone", 5, 4019))->sname), come_pop_stackframe(), __exception_result_var_b514))));
                            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional423=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6, 4021)), "sLoadArrayNode_clone", 6, 4022))->mArrayNum!=((void*)0),                        _if_conditional423) {
                            __dec_obj161=((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 6, 4023)), "sLoadArrayNode_clone", 6, 4024))->mArrayNum;
                            ((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 6, 4023)), "sLoadArrayNode_clone", 6, 4024))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value391=(come_push_stackframe("sLoadArrayNode_clone", 6, 4027),__exception_result_var_b515=list$1sNodephp_clone(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6, 4025)), "sLoadArrayNode_clone", 6, 4026))->mArrayNum), come_pop_stackframe(), __exception_result_var_b515))));
                            come_call_finalizer3(__dec_obj161,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value391,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional424=self!=((void*)0),                        _if_conditional424) {
                            ((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 7, 4028)), "sLoadArrayNode_clone", 7, 4029))->mBreakGuard=((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 7, 4030)), "sLoadArrayNode_clone", 7, 4031))->mBreakGuard;
                        }
                        if(_if_conditional425=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 8, 4032)), "sLoadArrayNode_clone", 8, 4033))->mLeft!=((void*)0),                        _if_conditional425) {
                            __dec_obj162=((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 8, 4034)), "sLoadArrayNode_clone", 8, 4035))->mLeft;
                            ((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 8, 4034)), "sLoadArrayNode_clone", 8, 4035))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=(come_push_stackframe("sLoadArrayNode_clone", 8, 4038),__exception_result_var_b516=sNode_clone(((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 8, 4036)), "sLoadArrayNode_clone", 8, 4037))->mLeft), come_pop_stackframe(), __exception_result_var_b516))));
                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional426=self!=((void*)0),                        _if_conditional426) {
                            ((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(result_342, "sLoadArrayNode_clone", 9, 4039)), "sLoadArrayNode_clone", 9, 4040))->mQuote=((struct sLoadArrayNode*)come_null_check(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 9, 4041)), "sLoadArrayNode_clone", 9, 4042))->mQuote;
                        }
                        __result190__ = __result_obj__ = result_342;
                        come_call_finalizer3(result_342,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result190__;
                        come_call_finalizer3(result_342,sLoadArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional428;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional428=self!=((void*)0)&&((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 0, 4065)), "sRangeCheckNode_finalize", 0, 4066))->sname!=((void*)0),                        _if_conditional428) {
                            ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 0, 4067)), "sRangeCheckNode_finalize", 0, 4068))->sname = come_decrement_ref_count2(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 0, 4067)), "sRangeCheckNode_finalize", 0, 4068))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional429=self!=((void*)0)&&((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 1, 4069)), "sRangeCheckNode_finalize", 1, 4070))->mLeft!=((void*)0),                        _if_conditional429) {
                            if(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 1, 4071)), "sRangeCheckNode_finalize", 1, 4072))->mLeft) { ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 1, 4071)), "sRangeCheckNode_finalize", 1, 4072))->mLeft = come_decrement_ref_count2(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 1, 4071)), "sRangeCheckNode_finalize", 1, 4072))->mLeft, ((struct sNode*)((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 1, 4071)), "sRangeCheckNode_finalize", 1, 4072))->mLeft)->finalize, ((struct sNode*)((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 1, 4071)), "sRangeCheckNode_finalize", 1, 4072))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional430=self!=((void*)0)&&((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 2, 4073)), "sRangeCheckNode_finalize", 2, 4074))->mBegin!=((void*)0),                        _if_conditional430) {
                            if(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 2, 4075)), "sRangeCheckNode_finalize", 2, 4076))->mBegin) { ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 2, 4075)), "sRangeCheckNode_finalize", 2, 4076))->mBegin = come_decrement_ref_count2(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 2, 4075)), "sRangeCheckNode_finalize", 2, 4076))->mBegin, ((struct sNode*)((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 2, 4075)), "sRangeCheckNode_finalize", 2, 4076))->mBegin)->finalize, ((struct sNode*)((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 2, 4075)), "sRangeCheckNode_finalize", 2, 4076))->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional431=self!=((void*)0)&&((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 3, 4077)), "sRangeCheckNode_finalize", 3, 4078))->mEnd!=((void*)0),                        _if_conditional431) {
                            if(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 3, 4079)), "sRangeCheckNode_finalize", 3, 4080))->mEnd) { ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 3, 4079)), "sRangeCheckNode_finalize", 3, 4080))->mEnd = come_decrement_ref_count2(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 3, 4079)), "sRangeCheckNode_finalize", 3, 4080))->mEnd, ((struct sNode*)((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 3, 4079)), "sRangeCheckNode_finalize", 3, 4080))->mEnd)->finalize, ((struct sNode*)((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_finalize", 3, 4079)), "sRangeCheckNode_finalize", 3, 4080))->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
_Bool _if_conditional432;
struct sRangeCheckNode* __result191__;
void* right_value398;
struct sRangeCheckNode* result_346;
_Bool _if_conditional433;
_Bool _if_conditional434;
char* __exception_result_var_b522;
void* right_value399;
char* __dec_obj164;
_Bool _if_conditional435;
struct sNode* __exception_result_var_b523;
void* right_value400;
struct sNode* __dec_obj165;
_Bool _if_conditional436;
struct sNode* __exception_result_var_b524;
void* right_value401;
struct sNode* __dec_obj166;
_Bool _if_conditional437;
struct sNode* __exception_result_var_b525;
void* right_value402;
struct sNode* __dec_obj167;
struct sRangeCheckNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&result_346, 0, sizeof(struct sRangeCheckNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
                        if(_if_conditional432=self==(void*)0,                        _if_conditional432) {
                            __result191__ = __result_obj__ = (void*)0;
                            return __result191__;
                        }
                        result_346=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value398=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer3(right_value398,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional433=self!=((void*)0),                        _if_conditional433) {
                            ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 4, 4081)), "sRangeCheckNode_clone", 4, 4082))->sline=((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 4, 4083)), "sRangeCheckNode_clone", 4, 4084))->sline;
                        }
                        if(_if_conditional434=self!=((void*)0)&&((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 5, 4085)), "sRangeCheckNode_clone", 5, 4086))->sname!=((void*)0),                        _if_conditional434) {
                            __dec_obj164=((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 5, 4087)), "sRangeCheckNode_clone", 5, 4088))->sname;
                            ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 5, 4087)), "sRangeCheckNode_clone", 5, 4088))->sname=(char*)come_increment_ref_count(((char*)(right_value399=(come_push_stackframe("sRangeCheckNode_clone", 5, 4091),__exception_result_var_b522=string_clone(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 5, 4089)), "sRangeCheckNode_clone", 5, 4090))->sname), come_pop_stackframe(), __exception_result_var_b522))));
                            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional435=self!=((void*)0)&&((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 6, 4092)), "sRangeCheckNode_clone", 6, 4093))->mLeft!=((void*)0),                        _if_conditional435) {
                            __dec_obj165=((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 6, 4094)), "sRangeCheckNode_clone", 6, 4095))->mLeft;
                            ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 6, 4094)), "sRangeCheckNode_clone", 6, 4095))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=(come_push_stackframe("sRangeCheckNode_clone", 6, 4098),__exception_result_var_b523=sNode_clone(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 6, 4096)), "sRangeCheckNode_clone", 6, 4097))->mLeft), come_pop_stackframe(), __exception_result_var_b523))));
                            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional436=self!=((void*)0)&&((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 7, 4099)), "sRangeCheckNode_clone", 7, 4100))->mBegin!=((void*)0),                        _if_conditional436) {
                            __dec_obj166=((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 7, 4101)), "sRangeCheckNode_clone", 7, 4102))->mBegin;
                            ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 7, 4101)), "sRangeCheckNode_clone", 7, 4102))->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=(come_push_stackframe("sRangeCheckNode_clone", 7, 4105),__exception_result_var_b524=sNode_clone(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 7, 4103)), "sRangeCheckNode_clone", 7, 4104))->mBegin), come_pop_stackframe(), __exception_result_var_b524))));
                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional437=self!=((void*)0)&&((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 8, 4106)), "sRangeCheckNode_clone", 8, 4107))->mEnd!=((void*)0),                        _if_conditional437) {
                            __dec_obj167=((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 8, 4108)), "sRangeCheckNode_clone", 8, 4109))->mEnd;
                            ((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(result_346, "sRangeCheckNode_clone", 8, 4108)), "sRangeCheckNode_clone", 8, 4109))->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=(come_push_stackframe("sRangeCheckNode_clone", 8, 4112),__exception_result_var_b525=sNode_clone(((struct sRangeCheckNode*)come_null_check(((struct sRangeCheckNode*)come_null_check(self, "sRangeCheckNode_clone", 8, 4110)), "sRangeCheckNode_clone", 8, 4111))->mEnd), come_pop_stackframe(), __exception_result_var_b525))));
                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        __result192__ = __result_obj__ = result_346;
                        come_call_finalizer3(result_346,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result192__;
                        come_call_finalizer3(result_346,sRangeCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullableNode_finalize(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional447;
_Bool _if_conditional448;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional447=self!=((void*)0)&&((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 0, 4167)), "sNullableNode_finalize", 0, 4168))->sname!=((void*)0),                                _if_conditional447) {
                                    ((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 0, 4169)), "sNullableNode_finalize", 0, 4170))->sname = come_decrement_ref_count2(((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 0, 4169)), "sNullableNode_finalize", 0, 4170))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional448=self!=((void*)0)&&((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 1, 4171)), "sNullableNode_finalize", 1, 4172))->mLeft!=((void*)0),                                _if_conditional448) {
                                    if(((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 1, 4173)), "sNullableNode_finalize", 1, 4174))->mLeft) { ((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 1, 4173)), "sNullableNode_finalize", 1, 4174))->mLeft = come_decrement_ref_count2(((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 1, 4173)), "sNullableNode_finalize", 1, 4174))->mLeft, ((struct sNode*)((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 1, 4173)), "sNullableNode_finalize", 1, 4174))->mLeft)->finalize, ((struct sNode*)((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_finalize", 1, 4173)), "sNullableNode_finalize", 1, 4174))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__;
_Bool _if_conditional449;
struct sNullableNode* __result195__;
void* right_value412;
struct sNullableNode* result_348;
_Bool _if_conditional450;
_Bool _if_conditional451;
char* __exception_result_var_b530;
void* right_value413;
char* __dec_obj172;
_Bool _if_conditional452;
struct sNode* __exception_result_var_b531;
void* right_value414;
struct sNode* __dec_obj173;
struct sNullableNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value412 = (void*)0;
memset(&result_348, 0, sizeof(struct sNullableNode*));
right_value413 = (void*)0;
right_value414 = (void*)0;
                                if(_if_conditional449=self==(void*)0,                                _if_conditional449) {
                                    __result195__ = __result_obj__ = (void*)0;
                                    return __result195__;
                                }
                                result_348=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value412=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"))));
                                come_call_finalizer3(right_value412,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional450=self!=((void*)0),                                _if_conditional450) {
                                    ((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(result_348, "sNullableNode_clone", 4, 4175)), "sNullableNode_clone", 4, 4176))->sline=((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_clone", 4, 4177)), "sNullableNode_clone", 4, 4178))->sline;
                                }
                                if(_if_conditional451=self!=((void*)0)&&((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_clone", 5, 4179)), "sNullableNode_clone", 5, 4180))->sname!=((void*)0),                                _if_conditional451) {
                                    __dec_obj172=((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(result_348, "sNullableNode_clone", 5, 4181)), "sNullableNode_clone", 5, 4182))->sname;
                                    ((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(result_348, "sNullableNode_clone", 5, 4181)), "sNullableNode_clone", 5, 4182))->sname=(char*)come_increment_ref_count(((char*)(right_value413=(come_push_stackframe("sNullableNode_clone", 5, 4185),__exception_result_var_b530=string_clone(((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_clone", 5, 4183)), "sNullableNode_clone", 5, 4184))->sname), come_pop_stackframe(), __exception_result_var_b530))));
                                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional452=self!=((void*)0)&&((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_clone", 6, 4186)), "sNullableNode_clone", 6, 4187))->mLeft!=((void*)0),                                _if_conditional452) {
                                    __dec_obj173=((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(result_348, "sNullableNode_clone", 6, 4188)), "sNullableNode_clone", 6, 4189))->mLeft;
                                    ((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(result_348, "sNullableNode_clone", 6, 4188)), "sNullableNode_clone", 6, 4189))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=(come_push_stackframe("sNullableNode_clone", 6, 4192),__exception_result_var_b531=sNode_clone(((struct sNullableNode*)come_null_check(((struct sNullableNode*)come_null_check(self, "sNullableNode_clone", 6, 4190)), "sNullableNode_clone", 6, 4191))->mLeft), come_pop_stackframe(), __exception_result_var_b531))));
                                    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result196__ = __result_obj__ = result_348;
                                come_call_finalizer3(result_348,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result196__;
                                come_call_finalizer3(result_348,sNullableNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional455;
_Bool _if_conditional456;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional455=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0, 4217)), "sNullCheckNode_finalize", 0, 4218))->sname!=((void*)0),                                    _if_conditional455) {
                                        ((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0, 4219)), "sNullCheckNode_finalize", 0, 4220))->sname = come_decrement_ref_count2(((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0, 4219)), "sNullCheckNode_finalize", 0, 4220))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional456=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1, 4221)), "sNullCheckNode_finalize", 1, 4222))->mLeft!=((void*)0),                                    _if_conditional456) {
                                        if(((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1, 4223)), "sNullCheckNode_finalize", 1, 4224))->mLeft) { ((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1, 4223)), "sNullCheckNode_finalize", 1, 4224))->mLeft = come_decrement_ref_count2(((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1, 4223)), "sNullCheckNode_finalize", 1, 4224))->mLeft, ((struct sNode*)((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1, 4223)), "sNullCheckNode_finalize", 1, 4224))->mLeft)->finalize, ((struct sNode*)((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1, 4223)), "sNullCheckNode_finalize", 1, 4224))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
_Bool _if_conditional457;
struct sNullCheckNode* __result197__;
void* right_value419;
struct sNullCheckNode* result_349;
_Bool _if_conditional458;
_Bool _if_conditional459;
char* __exception_result_var_b534;
void* right_value420;
char* __dec_obj175;
_Bool _if_conditional460;
struct sNode* __exception_result_var_b535;
void* right_value421;
struct sNode* __dec_obj176;
_Bool _if_conditional461;
struct sNullCheckNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value419 = (void*)0;
memset(&result_349, 0, sizeof(struct sNullCheckNode*));
right_value420 = (void*)0;
right_value421 = (void*)0;
                                    if(_if_conditional457=self==(void*)0,                                    _if_conditional457) {
                                        __result197__ = __result_obj__ = (void*)0;
                                        return __result197__;
                                    }
                                    result_349=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value419=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                    come_call_finalizer3(right_value419,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional458=self!=((void*)0),                                    _if_conditional458) {
                                        ((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(result_349, "sNullCheckNode_clone", 4, 4225)), "sNullCheckNode_clone", 4, 4226))->sline=((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 4, 4227)), "sNullCheckNode_clone", 4, 4228))->sline;
                                    }
                                    if(_if_conditional459=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5, 4229)), "sNullCheckNode_clone", 5, 4230))->sname!=((void*)0),                                    _if_conditional459) {
                                        __dec_obj175=((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(result_349, "sNullCheckNode_clone", 5, 4231)), "sNullCheckNode_clone", 5, 4232))->sname;
                                        ((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(result_349, "sNullCheckNode_clone", 5, 4231)), "sNullCheckNode_clone", 5, 4232))->sname=(char*)come_increment_ref_count(((char*)(right_value420=(come_push_stackframe("sNullCheckNode_clone", 5, 4235),__exception_result_var_b534=string_clone(((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5, 4233)), "sNullCheckNode_clone", 5, 4234))->sname), come_pop_stackframe(), __exception_result_var_b534))));
                                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional460=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 6, 4236)), "sNullCheckNode_clone", 6, 4237))->mLeft!=((void*)0),                                    _if_conditional460) {
                                        __dec_obj176=((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(result_349, "sNullCheckNode_clone", 6, 4238)), "sNullCheckNode_clone", 6, 4239))->mLeft;
                                        ((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(result_349, "sNullCheckNode_clone", 6, 4238)), "sNullCheckNode_clone", 6, 4239))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=(come_push_stackframe("sNullCheckNode_clone", 6, 4242),__exception_result_var_b535=sNode_clone(((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 6, 4240)), "sNullCheckNode_clone", 6, 4241))->mLeft), come_pop_stackframe(), __exception_result_var_b535))));
                                        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional461=self!=((void*)0),                                    _if_conditional461) {
                                        ((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(result_349, "sNullCheckNode_clone", 7, 4243)), "sNullCheckNode_clone", 7, 4244))->mOnlyNullCecker=((struct sNullCheckNode*)come_null_check(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 7, 4245)), "sNullCheckNode_clone", 7, 4246))->mOnlyNullCecker;
                                    }
                                    __result198__ = __result_obj__ = result_349;
                                    come_call_finalizer3(result_349,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result198__;
                                    come_call_finalizer3(result_349,sNullCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
_Bool _if_conditional469;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional466=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0, 4286)), "sStoreFieldNode_finalize", 0, 4287))->sname!=((void*)0),                                        _if_conditional466) {
                                            ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0, 4288)), "sStoreFieldNode_finalize", 0, 4289))->sname = come_decrement_ref_count2(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0, 4288)), "sStoreFieldNode_finalize", 0, 4289))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional467=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1, 4290)), "sStoreFieldNode_finalize", 1, 4291))->mLeft!=((void*)0),                                        _if_conditional467) {
                                            if(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1, 4292)), "sStoreFieldNode_finalize", 1, 4293))->mLeft) { ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1, 4292)), "sStoreFieldNode_finalize", 1, 4293))->mLeft = come_decrement_ref_count2(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1, 4292)), "sStoreFieldNode_finalize", 1, 4293))->mLeft, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1, 4292)), "sStoreFieldNode_finalize", 1, 4293))->mLeft)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1, 4292)), "sStoreFieldNode_finalize", 1, 4293))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional468=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2, 4294)), "sStoreFieldNode_finalize", 2, 4295))->mRight!=((void*)0),                                        _if_conditional468) {
                                            if(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2, 4296)), "sStoreFieldNode_finalize", 2, 4297))->mRight) { ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2, 4296)), "sStoreFieldNode_finalize", 2, 4297))->mRight = come_decrement_ref_count2(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2, 4296)), "sStoreFieldNode_finalize", 2, 4297))->mRight, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2, 4296)), "sStoreFieldNode_finalize", 2, 4297))->mRight)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2, 4296)), "sStoreFieldNode_finalize", 2, 4297))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional469=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3, 4298)), "sStoreFieldNode_finalize", 3, 4299))->mName!=((void*)0),                                        _if_conditional469) {
                                            ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3, 4300)), "sStoreFieldNode_finalize", 3, 4301))->mName = come_decrement_ref_count2(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3, 4300)), "sStoreFieldNode_finalize", 3, 4301))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
_Bool _if_conditional470;
struct sStoreFieldNode* __result199__;
void* right_value428;
struct sStoreFieldNode* result_356;
_Bool _if_conditional471;
_Bool _if_conditional472;
char* __exception_result_var_b542;
void* right_value429;
char* __dec_obj178;
_Bool _if_conditional473;
struct sNode* __exception_result_var_b543;
void* right_value430;
struct sNode* __dec_obj179;
_Bool _if_conditional474;
struct sNode* __exception_result_var_b544;
void* right_value431;
struct sNode* __dec_obj180;
_Bool _if_conditional475;
char* __exception_result_var_b545;
void* right_value432;
char* __dec_obj181;
struct sStoreFieldNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value428 = (void*)0;
memset(&result_356, 0, sizeof(struct sStoreFieldNode*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
                                        if(_if_conditional470=self==(void*)0,                                        _if_conditional470) {
                                            __result199__ = __result_obj__ = (void*)0;
                                            return __result199__;
                                        }
                                        result_356=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value428=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                        come_call_finalizer3(right_value428,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional471=self!=((void*)0),                                        _if_conditional471) {
                                            ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 4, 4302)), "sStoreFieldNode_clone", 4, 4303))->sline=((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 4, 4304)), "sStoreFieldNode_clone", 4, 4305))->sline;
                                        }
                                        if(_if_conditional472=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5, 4306)), "sStoreFieldNode_clone", 5, 4307))->sname!=((void*)0),                                        _if_conditional472) {
                                            __dec_obj178=((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 5, 4308)), "sStoreFieldNode_clone", 5, 4309))->sname;
                                            ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 5, 4308)), "sStoreFieldNode_clone", 5, 4309))->sname=(char*)come_increment_ref_count(((char*)(right_value429=(come_push_stackframe("sStoreFieldNode_clone", 5, 4312),__exception_result_var_b542=string_clone(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5, 4310)), "sStoreFieldNode_clone", 5, 4311))->sname), come_pop_stackframe(), __exception_result_var_b542))));
                                            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional473=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6, 4313)), "sStoreFieldNode_clone", 6, 4314))->mLeft!=((void*)0),                                        _if_conditional473) {
                                            __dec_obj179=((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 6, 4315)), "sStoreFieldNode_clone", 6, 4316))->mLeft;
                                            ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 6, 4315)), "sStoreFieldNode_clone", 6, 4316))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=(come_push_stackframe("sStoreFieldNode_clone", 6, 4319),__exception_result_var_b543=sNode_clone(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6, 4317)), "sStoreFieldNode_clone", 6, 4318))->mLeft), come_pop_stackframe(), __exception_result_var_b543))));
                                            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional474=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7, 4320)), "sStoreFieldNode_clone", 7, 4321))->mRight!=((void*)0),                                        _if_conditional474) {
                                            __dec_obj180=((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 7, 4322)), "sStoreFieldNode_clone", 7, 4323))->mRight;
                                            ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 7, 4322)), "sStoreFieldNode_clone", 7, 4323))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=(come_push_stackframe("sStoreFieldNode_clone", 7, 4326),__exception_result_var_b544=sNode_clone(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7, 4324)), "sStoreFieldNode_clone", 7, 4325))->mRight), come_pop_stackframe(), __exception_result_var_b544))));
                                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional475=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 8, 4327)), "sStoreFieldNode_clone", 8, 4328))->mName!=((void*)0),                                        _if_conditional475) {
                                            __dec_obj181=((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 8, 4329)), "sStoreFieldNode_clone", 8, 4330))->mName;
                                            ((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(result_356, "sStoreFieldNode_clone", 8, 4329)), "sStoreFieldNode_clone", 8, 4330))->mName=(char*)come_increment_ref_count(((char*)(right_value432=(come_push_stackframe("sStoreFieldNode_clone", 8, 4333),__exception_result_var_b545=string_clone(((struct sStoreFieldNode*)come_null_check(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 8, 4331)), "sStoreFieldNode_clone", 8, 4332))->mName), come_pop_stackframe(), __exception_result_var_b545))));
                                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result200__ = __result_obj__ = result_356;
                                        come_call_finalizer3(result_356,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result200__;
                                        come_call_finalizer3(result_356,sStoreFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool _if_conditional481;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional479=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0, 4359)), "sLoadFieldNode_finalize", 0, 4360))->sname!=((void*)0),                                            _if_conditional479) {
                                                ((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0, 4361)), "sLoadFieldNode_finalize", 0, 4362))->sname = come_decrement_ref_count2(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0, 4361)), "sLoadFieldNode_finalize", 0, 4362))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional480=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1, 4363)), "sLoadFieldNode_finalize", 1, 4364))->mLeft!=((void*)0),                                            _if_conditional480) {
                                                if(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1, 4365)), "sLoadFieldNode_finalize", 1, 4366))->mLeft) { ((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1, 4365)), "sLoadFieldNode_finalize", 1, 4366))->mLeft = come_decrement_ref_count2(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1, 4365)), "sLoadFieldNode_finalize", 1, 4366))->mLeft, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1, 4365)), "sLoadFieldNode_finalize", 1, 4366))->mLeft)->finalize, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1, 4365)), "sLoadFieldNode_finalize", 1, 4366))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional481=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2, 4367)), "sLoadFieldNode_finalize", 2, 4368))->mName!=((void*)0),                                            _if_conditional481) {
                                                ((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2, 4369)), "sLoadFieldNode_finalize", 2, 4370))->mName = come_decrement_ref_count2(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2, 4369)), "sLoadFieldNode_finalize", 2, 4370))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
_Bool _if_conditional482;
struct sLoadFieldNode* __result201__;
void* right_value442;
struct sLoadFieldNode* result_357;
_Bool _if_conditional483;
_Bool _if_conditional484;
char* __exception_result_var_b555;
void* right_value443;
char* __dec_obj186;
_Bool _if_conditional485;
struct sNode* __exception_result_var_b556;
void* right_value444;
struct sNode* __dec_obj187;
_Bool _if_conditional486;
char* __exception_result_var_b557;
void* right_value445;
char* __dec_obj188;
struct sLoadFieldNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value442 = (void*)0;
memset(&result_357, 0, sizeof(struct sLoadFieldNode*));
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value445 = (void*)0;
                                            if(_if_conditional482=self==(void*)0,                                            _if_conditional482) {
                                                __result201__ = __result_obj__ = (void*)0;
                                                return __result201__;
                                            }
                                            result_357=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value442=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                            come_call_finalizer3(right_value442,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional483=self!=((void*)0),                                            _if_conditional483) {
                                                ((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(result_357, "sLoadFieldNode_clone", 4, 4371)), "sLoadFieldNode_clone", 4, 4372))->sline=((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 4, 4373)), "sLoadFieldNode_clone", 4, 4374))->sline;
                                            }
                                            if(_if_conditional484=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5, 4375)), "sLoadFieldNode_clone", 5, 4376))->sname!=((void*)0),                                            _if_conditional484) {
                                                __dec_obj186=((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(result_357, "sLoadFieldNode_clone", 5, 4377)), "sLoadFieldNode_clone", 5, 4378))->sname;
                                                ((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(result_357, "sLoadFieldNode_clone", 5, 4377)), "sLoadFieldNode_clone", 5, 4378))->sname=(char*)come_increment_ref_count(((char*)(right_value443=(come_push_stackframe("sLoadFieldNode_clone", 5, 4381),__exception_result_var_b555=string_clone(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5, 4379)), "sLoadFieldNode_clone", 5, 4380))->sname), come_pop_stackframe(), __exception_result_var_b555))));
                                                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional485=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6, 4382)), "sLoadFieldNode_clone", 6, 4383))->mLeft!=((void*)0),                                            _if_conditional485) {
                                                __dec_obj187=((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(result_357, "sLoadFieldNode_clone", 6, 4384)), "sLoadFieldNode_clone", 6, 4385))->mLeft;
                                                ((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(result_357, "sLoadFieldNode_clone", 6, 4384)), "sLoadFieldNode_clone", 6, 4385))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=(come_push_stackframe("sLoadFieldNode_clone", 6, 4388),__exception_result_var_b556=sNode_clone(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6, 4386)), "sLoadFieldNode_clone", 6, 4387))->mLeft), come_pop_stackframe(), __exception_result_var_b556))));
                                                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional486=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 7, 4389)), "sLoadFieldNode_clone", 7, 4390))->mName!=((void*)0),                                            _if_conditional486) {
                                                __dec_obj188=((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(result_357, "sLoadFieldNode_clone", 7, 4391)), "sLoadFieldNode_clone", 7, 4392))->mName;
                                                ((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(result_357, "sLoadFieldNode_clone", 7, 4391)), "sLoadFieldNode_clone", 7, 4392))->mName=(char*)come_increment_ref_count(((char*)(right_value445=(come_push_stackframe("sLoadFieldNode_clone", 7, 4395),__exception_result_var_b557=string_clone(((struct sLoadFieldNode*)come_null_check(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 7, 4393)), "sLoadFieldNode_clone", 7, 4394))->mName), come_pop_stackframe(), __exception_result_var_b557))));
                                                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result202__ = __result_obj__ = result_357;
                                            come_call_finalizer3(result_357,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result202__;
                                            come_call_finalizer3(result_357,sLoadFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

