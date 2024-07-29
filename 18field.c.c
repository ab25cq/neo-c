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
    struct buffer* mSourceHead3;
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
    _Bool in_fun_param;
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

void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);

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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char")))),self,len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short")))),self,len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int")))),self,len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long")))),self,len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float")))),self,len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double")))),self,len)));
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
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char")))),len,self)));
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
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short")))),len,self)));
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
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int")))),len,self)));
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
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long")))),len,self)));
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
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float")))),len,self)));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double")))),len,self)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char"))));
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
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short"))));
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
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int"))));
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
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long"))));
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
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float"))));
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
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double"))));
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










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_47;
_Bool _if_conditional114;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
char* fun_name2_80;
struct sFun* operator_fun_81;
_Bool _if_conditional115;
_Bool _if_conditional117;
void* right_value115;
char* none_generics_name_82;
void* right_value116;
struct sType* obj_type_83;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_84;
struct sGenericsFun* generics_fun_85;
_Bool _if_conditional132;
void* right_value119;
_Bool _if_conditional133;
_Bool __result76__;
void* right_value120;
char* __dec_obj37;
int i_91;
void* right_value121;
char* new_fun_name_92;
_Bool _if_conditional153;
void* right_value122;
char* __dec_obj38;
_Bool _if_conditional154;
_Bool result_93;
_Bool _if_conditional155;
void* right_value123;
struct CVALUE* come_value_94;
char* left_value2_95;
void* right_value124;
void* right_value125;
_Bool _if_conditional160;
void* right_value126;
char* __dec_obj39;
void* right_value127;
char* __dec_obj40;
char* middle_value2_99;
void* right_value128;
void* right_value129;
_Bool _if_conditional161;
void* right_value130;
char* __dec_obj41;
void* right_value131;
char* __dec_obj42;
char* right_value2_100;
void* right_value132;
void* right_value133;
_Bool _if_conditional162;
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
_Bool _if_conditional163;
void* right_value144;
char* __dec_obj47;
_Bool _if_conditional164;
void* right_value145;
void* right_value146;
char* __dec_obj48;
void* right_value147;
char* __dec_obj49;
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
    generics_type_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(generics_type_47->mNoSolvedGenericsType->v1) {
        __dec_obj35=generics_type_47;
        generics_type_47=(struct sType*)come_increment_ref_count(generics_type_47->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_78=type->mClass;
    class_name_79=klass_78->mName;
    operator_fun_81=((void*)0);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(_if_conditional117=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional117) {
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_85=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        if(generics_fun_85) {
            if(_if_conditional133=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_80)))),generics_fun_85,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
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
        operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_91=128-1;        i_91>=1;        i_91--        ){
            new_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%s_v%d",fun_name2_80,i_91))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_92);
            if(operator_fun_81) {
                __dec_obj38=fun_name2_80;
                fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(new_fun_name_92))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional154=operator_fun_81==((void*)0),        _if_conditional154) {
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        }
    }
    result_93=(_Bool)0;
    if(operator_fun_81) {
        come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        come_call_finalizer3(right_value123,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value125=xsprintf("\%s is assigned to",((char*)(right_value124=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional160=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap,        _if_conditional160) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info);
            __dec_obj39=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj40=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(((char*)(right_value127=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional161=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap,        _if_conditional161) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info);
            __dec_obj41=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",middle_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj42=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(middle_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value133=xsprintf("\%s is assigned to",((char*)(right_value132=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional162=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap,        _if_conditional162) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info);
            __dec_obj43=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s",right_value->c_value))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj44=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(((char*)(right_value135=string_clone(right_value->c_value))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj45=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value136=string_to_string(fun_name2_80))),((char*)(right_value137=string_to_string(left_value2_95))),((char*)(right_value138=string_to_string(middle_value2_99))),((char*)(right_value139=string_to_string(right_value2_100)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type1_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(operator_fun_81->mResultType))));
        come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type2_102=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=solve_generics(result_type1_101,generics_type_47,info))));
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj46=come_value_94->type;
        come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(result_type2_102))));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_94->var=((void*)0);
        if(result_type2_102->mHeap) {
            __dec_obj47=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value144=append_object_to_right_values(come_value_94->c_value,(struct sType*)come_increment_ref_count(result_type2_102),info))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional164=result_type2_102->mGuardValue&&result_type2_102->mPointerNum>0,        _if_conditional164) {
            __dec_obj48=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value146=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value145=make_type_name_string(result_type2_102,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_94->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj49=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value147=append_stackframe(come_value_94->c_value,come_value_94->type,info))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_94->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
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
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
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
            result_48->mClass=self->mClass;
        }
        if(_if_conditional38=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional38) {
            __dec_obj15=result_48->mMultipleTypes;
            result_48->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            __dec_obj17=result_48->mNoSolvedGenericsType;
            result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            __dec_obj18=result_48->mOriginalLoadVarType;
            result_48->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional47) {
            __dec_obj19=result_48->mGenericsName;
            result_48->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional48) {
            __dec_obj20=result_48->mGenericsTypes;
            result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional49) {
            __dec_obj24=result_48->mArrayNum;
            result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_48->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional63=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional63) {
            __dec_obj25=result_48->mParamTypes;
            result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional64) {
            __dec_obj29=result_48->mParamNames;
            result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional68) {
            __dec_obj30=result_48->mResultType;
            result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_48->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional70=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional70) {
            __dec_obj31=result_48->mAlignas;
            result_48->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_48->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_48->mShort=self->mShort;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_48->mLong=self->mLong;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_48->mLongLong=self->mLongLong;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_48->mConstant=self->mConstant;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_48->mRegister=self->mRegister;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_48->mVolatile=self->mVolatile;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_48->mStatic=self->mStatic;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_48->mUniq=self->mUniq;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_48->mRecord=self->mRecord;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_48->mExtern=self->mExtern;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_48->mRestrict=self->mRestrict;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_48->mImmutable=self->mImmutable;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_48->mHeap=self->mHeap;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_48->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_48->mDelegate=self->mDelegate;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_48->mShare=self->mShare;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_48->mClone=self->mClone;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_48->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_48->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_48->mRefference=self->mRefference;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_48->mException=self->mException;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_48->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_48->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_48->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_48->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
        }
        if(_if_conditional97=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional97) {
            __dec_obj32=result_48->mSizeNum;
            result_48->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_48->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_48->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional100=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional100) {
            __dec_obj33=result_48->mOriginalTypeName;
            result_48->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_48->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            result_48->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_48->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_48->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_48->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_48->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_48->mInline=self->mInline;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_48->mNullValue=self->mNullValue;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_48->mGuardValue=self->mGuardValue;
        }
        if(_if_conditional110=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional110) {
            __dec_obj34=result_48->mAsmName;
            result_48->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_48->mArrayPointerType=self->mArrayPointerType;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_48->mLambdaArray=self->mLambdaArray;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_48->mNoNumberArray=self->mNoNumberArray;
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
            if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional20) {
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional22) {
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional24) {
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional25) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional26) {
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional27) {
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional29) {
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional30) {
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional32) {
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional33) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional34) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional35) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional36) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                    it_49=self->head;
                    while(_while_condtional7=it_49!=((void*)0),                    _while_condtional7) {
                        prev_it_50=it_49;
                        it_49=it_49->next;
                        come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional21) {
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional23) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    it_51=self->head;
                    while(_while_condtional8=it_51!=((void*)0),                    _while_condtional8) {
                        prev_it_52=it_51;
                        it_51=it_51->next;
                        come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional28) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                    it_53=self->head;
                    while(_while_condtional9=it_53!=((void*)0),                    _while_condtional9) {
                        prev_it_54=it_53;
                        it_53=it_53->next;
                        come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional31) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional39;
struct list$1sTypeph* __result53__;
void* right_value80;
void* right_value81;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
_Bool _while_condtional10;
void* right_value85;
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
                result_55=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_56=self->head;
                while(_while_condtional10=it_56!=((void*)0),                _while_condtional10) {
                    list$1sTypeph_add(result_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_56->item)))));
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_56=it_56->next;
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
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_57->prev=((void*)0);
                            litem_57->next=((void*)0);
                            __dec_obj12=litem_57->item;
                            litem_57->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_57;
                            self->head=litem_57;
                        }
                        else {
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=self->head;
                                litem_58->next=((void*)0);
                                __dec_obj13=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_58;
                                self->head->next=litem_58;
                            }
                            else {
                                litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_59->prev=self->tail;
                                litem_59->next=((void*)0);
                                __dec_obj14=litem_59->item;
                                litem_59->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_59;
                                self->tail=litem_59;
                            }
                        }
                        self->len++;
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
                it_60=self->head;
                while(_while_condtional11=it_60!=((void*)0),                _while_condtional11) {
                    prev_it_61=it_60;
                    it_60=it_60->next;
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
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    __dec_obj16=result_62->v1;
                    result_62->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
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
                    if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional44) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1sNodeph* __result59__;
void* right_value93;
void* right_value94;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
_Bool _while_condtional12;
void* right_value99;
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
                result_63=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_64=self->head;
                while(_while_condtional12=it_64!=((void*)0),                _while_condtional12) {
                    list$1sNodeph_add(result_63,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_64->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_64=it_64->next;
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
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_65->prev=((void*)0);
                            litem_65->next=((void*)0);
                            __dec_obj21=litem_65->item;
                            litem_65->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_65;
                            self->head=litem_65;
                        }
                        else {
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_66->prev=self->head;
                                litem_66->next=((void*)0);
                                __dec_obj22=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_66;
                                self->head->next=litem_66;
                            }
                            else {
                                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_67->prev=self->tail;
                                litem_67->next=((void*)0);
                                __dec_obj23=litem_67->item;
                                litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_67;
                                self->tail=litem_67;
                            }
                        }
                        self->len++;
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
                        if(_if_conditional54=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional54) {
                            result_68->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
                            result_68->finalize=self->finalize;
                        }
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            result_68->clone=self->clone;
                        }
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            result_68->compile=self->compile;
                        }
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            result_68->sline=self->sline;
                        }
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            result_68->sname=self->sname;
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            result_68->terminated=self->terminated;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            result_68->kind=self->kind;
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
                it_69=self->head;
                while(_while_condtional13=it_69!=((void*)0),                _while_condtional13) {
                    prev_it_70=it_69;
                    it_69=it_69->next;
                    come_call_finalizer3(prev_it_70,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional65;
struct list$1charph* __result65__;
void* right_value102;
void* right_value103;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
_Bool _while_condtional14;
void* right_value107;
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
                result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))))))));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_72=self->head;
                while(_while_condtional14=it_72!=((void*)0),                _while_condtional14) {
                    list$1charph_add(result_71,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_72->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_72=it_72->next;
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
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
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
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_73->prev=((void*)0);
                            litem_73->next=((void*)0);
                            __dec_obj26=litem_73->item;
                            litem_73->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_73;
                            self->head=litem_73;
                        }
                        else {
                            if(_if_conditional67=self->len==1,                            _if_conditional67) {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=self->head;
                                litem_74->next=((void*)0);
                                __dec_obj27=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_74;
                                self->head->next=litem_74;
                            }
                            else {
                                litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_75->prev=self->tail;
                                litem_75->next=((void*)0);
                                __dec_obj28=litem_75->item;
                                litem_75->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_75;
                                self->tail=litem_75;
                            }
                        }
                        self->len++;
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
                it_76=self->head;
                while(_while_condtional15=it_76!=((void*)0),                _while_condtional15) {
                    prev_it_77=it_76;
                    it_76=it_76->next;
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
        __result71__ = self->len;
        return __result71__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_86;
unsigned int it_87;
_Bool _while_condtional16;
_Bool _if_conditional118;
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
            hash_86=string_get_hash_key(((char*)key))%self->size;
            it_87=hash_86;
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                if(_if_conditional118=self->item_existance[it_87],                _if_conditional118) {
                    if(_if_conditional119=string_equals(self->keys[it_87],key),                    _if_conditional119) {
                        __result72__ = __result_obj__ = self->items[it_87];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    it_87++;
                    if(_if_conditional130=it_87>=self->size,                    _if_conditional130) {
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
                            if(_if_conditional120=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional120) {
                                come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional121) {
                                come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional122) {
                                come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional123) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional124=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional124) {
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional125=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional125) {
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional126=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional126) {
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional127=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional127) {
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional128=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional128) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional129=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional129) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional134;
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
            memset(&default_value_88,0,sizeof(struct sFun*));
            hash_89=string_get_hash_key(((char*)key))%self->size;
            it_90=hash_89;
            while(_while_condtional17=(_Bool)1,            _while_condtional17) {
                if(_if_conditional134=self->item_existance[it_90],                _if_conditional134) {
                    if(_if_conditional135=string_equals(self->keys[it_90],key),                    _if_conditional135) {
                        __result77__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        return __result77__;
                    }
                    it_90++;
                    if(_if_conditional151=it_90>=self->size,                    _if_conditional151) {
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
                            if(_if_conditional136=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional136) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional137=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional137) {
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional138=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional138) {
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional139=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional139) {
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional140=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional140) {
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional141=self!=((void*)0)&&self->mLambdaType!=((void*)0),                            _if_conditional141) {
                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional142=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional142) {
                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional145=self!=((void*)0)&&self->mSource!=((void*)0),                            _if_conditional145) {
                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional146=self!=((void*)0)&&self->mSourceHead!=((void*)0),                            _if_conditional146) {
                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional147=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                            _if_conditional147) {
                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional148=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                            _if_conditional148) {
                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional149=self!=((void*)0)&&self->mComeHeader!=((void*)0),                            _if_conditional149) {
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional150=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                            _if_conditional150) {
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional143=self!=((void*)0)&&self->mNodes!=((void*)0),                                    _if_conditional143) {
                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional144=self!=((void*)0)&&self->mVarTable!=((void*)0),                                    _if_conditional144) {
                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional156;
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional156=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional156) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional157=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional157) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_97, 0, sizeof(int));
memset(&default_value_98, 0, sizeof(struct sType*));
            if(_if_conditional158=position<0,            _if_conditional158) {
                position+=self->len;
            }
            it_96=self->head;
            i_97=0;
            while(_while_condtional18=it_96!=((void*)0),            _while_condtional18) {
                if(_if_conditional159=position==i_97,                _if_conditional159) {
                    __result81__ = __result_obj__ = it_96->item;
                    return __result81__;
                }
                it_96=it_96->next;
                i_97++;
            }
            memset(&default_value_98,0,sizeof(struct sType*));
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
            if(_if_conditional165=self->len==0,            _if_conditional165) {
                litem_103=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_103->prev=((void*)0);
                litem_103->next=((void*)0);
                __dec_obj50=litem_103->item;
                litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_103;
                self->head=litem_103;
            }
            else {
                if(_if_conditional167=self->len==1,                _if_conditional167) {
                    litem_104=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_104->prev=self->head;
                    litem_104->next=((void*)0);
                    __dec_obj51=litem_104->item;
                    litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_104;
                    self->head->next=litem_104;
                }
                else {
                    litem_105=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_105->prev=self->tail;
                    litem_105->next=((void*)0);
                    __dec_obj52=litem_105->item;
                    litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_105;
                    self->tail=litem_105;
                }
            }
            self->len++;
            __result83__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional166=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional166) {
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value151;
void* right_value152;
struct sNode* __dec_obj53;
void* right_value153;
struct sNode* __dec_obj54;
void* right_value154;
char* __dec_obj55;
struct sStoreFieldNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    ((struct sNodeBase*)(right_value151=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value151,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(left))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj54=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(right))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj55=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(name))));
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
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result86__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sStoreFieldNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_106;
struct sNode* right_107;
void* right_value156;
char* name_108;
_Bool _if_conditional173;
_Bool __result87__;
void* right_value157;
struct CVALUE* left_value_109;
_Bool _if_conditional174;
void* right_value158;
void* right_value159;
char* __dec_obj56;
_Bool _if_conditional175;
_Bool __result88__;
void* right_value160;
struct CVALUE* right_value_110;
struct sType* right_type_111;
struct sType* left_type_112;
void* right_value161;
struct sType* left_type2_113;
struct sClass* klass_114;
struct sType* __dec_obj57;
struct sType* field_type_120;
int index_121;
char* __dec_obj58;
char* child_field_name_122;
_Bool _if_conditional187;
_Bool __result93__;
struct list$1tuple2$2charphsTypephph* o2_saved_123;
struct tuple2$2charphsTypeph* field_126;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_129;
struct sType* field_type2_130;
_Bool _if_conditional192;
void* right_value162;
struct sType* __dec_obj59;
_Bool _if_conditional194;
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
_Bool _if_conditional195;
void* right_value163;
char* __dec_obj60;
void* right_value164;
struct sType* __dec_obj61;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value165;
struct sType* __dec_obj62;
_Bool _if_conditional198;
_Bool __result103__;
void* right_value166;
struct CVALUE* come_value_140;
void* right_value167;
void* right_value168;
void* right_value169;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
_Bool __result104__;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value170;
char* c_value_141;
void* right_value171;
char* __dec_obj63;
void* right_value172;
char* c_value_142;
void* right_value173;
char* __dec_obj64;
_Bool _if_conditional205;
_Bool _if_conditional206;
void* right_value174;
char* c_value_143;
void* right_value175;
char* __dec_obj65;
void* right_value176;
char* c_value_144;
void* right_value177;
char* __dec_obj66;
void* right_value178;
char* __dec_obj67;
_Bool __result105__;
int right_value_id_145;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value179;
char* c_value_146;
void* right_value180;
char* __dec_obj68;
void* right_value181;
char* c_value_147;
void* right_value182;
char* __dec_obj69;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value183;
char* c_value_148;
void* right_value184;
char* __dec_obj70;
void* right_value185;
char* c_value_149;
void* right_value186;
char* __dec_obj71;
_Bool __result106__;
_Bool _if_conditional213;
_Bool _if_conditional214;
void* right_value187;
char* __dec_obj72;
void* right_value188;
char* __dec_obj73;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value189;
char* __dec_obj74;
void* right_value190;
char* __dec_obj75;
_Bool __result107__;
void* right_value191;
struct sType* __dec_obj76;
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
    left_106=self->mLeft;
    right_107=self->mRight;
    name_108=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(self->mName))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional173=!node_compile(left_106,info),    _if_conditional173) {
        __result87__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result87__;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value157,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional174=gComeDebug&&left_value_109->type->mPointerNum>0,    _if_conditional174) {
        __dec_obj56=left_value_109->c_value;
        left_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value158=make_type_name_string(left_value_109->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_109->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional175=!node_compile(right_107,info),    _if_conditional175) {
        __result88__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    right_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    right_type_111=right_value_110->type;
    dec_stack_ptr(1,info);
    left_type_112=left_value_109->type;
    left_type2_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=solve_generics(left_type_112,left_type_112,info))));
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_114=left_type2_113->mClass;
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    __dec_obj57=field_type_120;
    field_type_120=((void*)0);
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    index_121=0;
    __dec_obj58=child_field_name_122;
    child_field_name_122=((void*)0);
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    if(_if_conditional187=klass_114->mFields==((void*)0),    _if_conditional187) {
        err_msg(info,"%s fields are null",klass_114->mName);
        __result93__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result93__;
    }
    for(    o2_saved_123=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_126=list$1tuple2$2charphsTypephph_begin((o2_saved_123));    !list$1tuple2$2charphsTypephph_end((o2_saved_123));    field_126=list$1tuple2$2charphsTypephph_next((o2_saved_123))    ){
        multiple_assign_var1=field_126;
        field_name_129=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_130=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional192=string_operator_equals(field_name_129,name_108),        _if_conditional192) {
            __dec_obj59=field_type_120;
            field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(field_type2_130))));
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
    if(_if_conditional194=index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields),    _if_conditional194) {
        index_121=0;
        for(        o2_saved_131=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_132=list$1tuple2$2charphsTypephph_begin((o2_saved_131));        !list$1tuple2$2charphsTypephph_end((o2_saved_131));        field_132=list$1tuple2$2charphsTypephph_next((o2_saved_131))        ){
            multiple_assign_var2=field_132;
            field_name_133=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_134=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_135=field_type2_134->mClass;
            for(            o2_saved_136=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_135->mFields)),field2_137=list$1tuple2$2charphsTypephph_begin((o2_saved_136));            !list$1tuple2$2charphsTypephph_end((o2_saved_136));            field2_137=list$1tuple2$2charphsTypephph_next((o2_saved_136))            ){
                multiple_assign_var3=field2_137;
                field_name2_138=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_139=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(_if_conditional195=string_operator_equals(field_name2_138,name_108),                _if_conditional195) {
                    __dec_obj60=child_field_name_122;
                    child_field_name_122=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(field_name_133))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj61=field_type_120;
                    field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(field_type3_139))));
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
            if(_if_conditional197=string_operator_equals(field_name_133,name_108),            _if_conditional197) {
                __dec_obj62=field_type_120;
                field_type_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(field_type2_134))));
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
        if(_if_conditional198=index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields),        _if_conditional198) {
            err_msg(info,"field not found(%s) in %s(1)",name_108,klass_114->mName);
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
    check_assign_type(((char*)(right_value168=xsprintf("\%s is assigned to",((char*)(right_value167=string_to_string(name_108)))))),field_type_120,right_type_111,right_value_110,(_Bool)0,(_Bool)1,info);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_type_111=((struct sType*)(right_value169=sType_clone(right_value_110->type)));
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional199=field_type_120->mHeap&&!right_value_110->type->mHeap,    _if_conditional199) {
        if(_if_conditional200=string_operator_equals(right_value_110->type->mClass->mName,"void")&&right_value_110->type->mPointerNum==1,        _if_conditional200) {
        }
        else {
            if(_if_conditional201=!right_value_110->type->mDelegate&&!right_value_110->type->mShare&&!gComeGC,            _if_conditional201) {
                err_msg(info,"require right value as heap object(%s)(1)",name_108);
                printf("right type is %s pointer num %d heap %d\n",right_value_110->type->mClass->mName,right_value_110->type->mPointerNum,right_value_110->type->mHeap);
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
    if(_if_conditional202=field_type_120->mHeap&&right_type_111->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0,    _if_conditional202) {
        if(_if_conditional203=left_value_109->type->mPointerNum==1,        _if_conditional203) {
            if(child_field_name_122) {
                c_value_141=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                decrement_ref_count_object(field_type_120,c_value_141,info,(_Bool)0);
                std_move(field_type_120,right_type_111,right_value_110,info);
                __dec_obj63=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_141 = come_decrement_ref_count2(c_value_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_142=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s->%s",left_value_109->c_value,name_108))));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                decrement_ref_count_object(field_type_120,c_value_142,info,(_Bool)0);
                std_move(field_type_120,right_type_111,right_value_110,info);
                __dec_obj64=come_value_140->c_value;
                come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                c_value_142 = come_decrement_ref_count2(c_value_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(_if_conditional205=left_value_109->type->mPointerNum==0,            _if_conditional205) {
                if(child_field_name_122) {
                    c_value_143=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_120,c_value_143,info,(_Bool)0);
                    std_move(field_type_120,right_type_111,right_value_110,info);
                    __dec_obj65=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_143 = come_decrement_ref_count2(c_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_144=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s.%s",left_value_109->c_value,name_108))));
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_120,c_value_144,info,(_Bool)0);
                    __dec_obj66=right_value_110->c_value;
                    right_value_110->c_value=(char*)come_increment_ref_count(((char*)(right_value177=increment_ref_count_object(right_value_110->type,right_value_110->c_value,info))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj67=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
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
        right_value_id_145=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_110->c_value));
        if(_if_conditional207=right_value_id_145!=-1,        _if_conditional207) {
            remove_object_from_right_values(right_value_id_145,info);
        }
    }
    else {
        if(_if_conditional208=field_type_120->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0&&string_operator_equals(right_type_111->mClass->mName,"void"),        _if_conditional208) {
            if(_if_conditional209=left_value_109->type->mPointerNum==1,            _if_conditional209) {
                if(child_field_name_122) {
                    c_value_146=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_120,c_value_146,info,(_Bool)0);
                    __dec_obj68=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_146 = come_decrement_ref_count2(c_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_147=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s->%s",left_value_109->c_value,name_108))));
                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    decrement_ref_count_object(field_type_120,c_value_147,info,(_Bool)0);
                    __dec_obj69=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    c_value_147 = come_decrement_ref_count2(c_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(_if_conditional211=left_value_109->type->mPointerNum==0,                _if_conditional211) {
                    if(child_field_name_122) {
                        c_value_148=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108))));
                        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        decrement_ref_count_object(field_type_120,c_value_148,info,(_Bool)0);
                        __dec_obj70=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_148 = come_decrement_ref_count2(c_value_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        c_value_149=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s.%s",left_value_109->c_value,name_108))));
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        decrement_ref_count_object(field_type_120,c_value_149,info,(_Bool)0);
                        __dec_obj71=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        c_value_149 = come_decrement_ref_count2(c_value_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
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
            if(_if_conditional213=left_value_109->type->mPointerNum==1,            _if_conditional213) {
                if(child_field_name_122) {
                    __dec_obj72=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj73=come_value_140->c_value;
                    come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            else {
                if(_if_conditional215=left_value_109->type->mPointerNum==0,                _if_conditional215) {
                    if(child_field_name_122) {
                        __dec_obj74=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value))));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        __dec_obj75=come_value_140->c_value;
                        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value))));
                        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
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
    __dec_obj76=come_value_140->type;
    come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(field_type_120))));
    come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_140->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
    add_come_last_code(info,"%s;\n",come_value_140->c_value);
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
        if(_if_conditional168=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional168) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_115;
unsigned int hash_116;
unsigned int it_117;
_Bool _while_condtional19;
_Bool _if_conditional176;
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
        memset(&default_value_115,0,sizeof(struct sClass*));
        hash_116=string_get_hash_key(((char*)key))%self->size;
        it_117=hash_116;
        while(_while_condtional19=(_Bool)1,        _while_condtional19) {
            if(_if_conditional176=self->item_existance[it_117],            _if_conditional176) {
                if(_if_conditional177=string_equals(self->keys[it_117],key),                _if_conditional177) {
                    __result89__ = __result_obj__ = self->items[it_117];
                    come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result89__;
                }
                it_117++;
                if(_if_conditional185=it_117>=self->size,                _if_conditional185) {
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
                        if(_if_conditional178=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional178) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional179=self!=((void*)0)&&self->mFields!=((void*)0),                        _if_conditional179) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional183=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                        _if_conditional183) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional184=self!=((void*)0)&&self->mParentClassName!=((void*)0),                        _if_conditional184) {
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
                                it_118=self->head;
                                while(_while_condtional20=it_118!=((void*)0),                                _while_condtional20) {
                                    prev_it_119=it_118;
                                    it_118=it_118->next;
                                    come_call_finalizer3(prev_it_119,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional180;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional180=self!=((void*)0)&&self->item!=((void*)0),                                        _if_conditional180) {
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional181;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional181=self!=((void*)0)&&self->v1!=((void*)0),                                                _if_conditional181) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional182=self!=((void*)0)&&self->v2!=((void*)0),                                                _if_conditional182) {
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional188;
struct tuple2$2charphsTypeph* result_124;
struct tuple2$2charphsTypeph* __result94__;
_Bool _if_conditional189;
struct tuple2$2charphsTypeph* __result95__;
struct tuple2$2charphsTypeph* result_125;
struct tuple2$2charphsTypeph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_125, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional188=self==((void*)0),        _if_conditional188) {
            memset(&result_124,0,sizeof(struct tuple2$2charphsTypeph*));
            __result94__ = __result_obj__ = result_124;
            return __result94__;
        }
        self->it=self->head;
        if(self->it) {
            __result95__ = __result_obj__ = self->it->item;
            return __result95__;
        }
        memset(&result_125,0,sizeof(struct tuple2$2charphsTypeph*));
        __result96__ = __result_obj__ = result_125;
        return __result96__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
        __result97__ = self==((void*)0)||self->it==((void*)0);
        return __result97__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional190;
struct tuple2$2charphsTypeph* result_127;
struct tuple2$2charphsTypeph* __result98__;
_Bool _if_conditional191;
struct tuple2$2charphsTypeph* __result99__;
struct tuple2$2charphsTypeph* result_128;
struct tuple2$2charphsTypeph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_128, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional190=self==((void*)0)||self->it==((void*)0),        _if_conditional190) {
            memset(&result_127,0,sizeof(struct tuple2$2charphsTypeph*));
            __result98__ = __result_obj__ = result_127;
            return __result98__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result99__ = __result_obj__ = self->it->item;
            return __result99__;
        }
        memset(&result_128,0,sizeof(struct tuple2$2charphsTypeph*));
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
        __result102__ = self->len;
        return __result102__;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value192;
void* right_value193;
struct sNode* __dec_obj77;
struct sNullCheckNode* __result109__;
struct sNullCheckNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    ((struct sNodeBase*)(right_value192=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value192,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mOnlyNullCecker=only_null_checker;
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
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value194=__builtin_string("sNullCheckNode")));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_150;
_Bool _if_conditional219;
_Bool __result112__;
void* right_value195;
struct CVALUE* left_value_151;
_Bool _if_conditional220;
void* right_value196;
char* method_name_152;
_Bool _if_conditional225;
struct sType* obj_type_155;
_Bool _if_conditional226;
struct sType* obj_type2_156;
void* right_value197;
void* right_value198;
char* __dec_obj78;
struct sFun* fun_157;
_Bool _if_conditional227;
_Bool __result117__;
void* right_value199;
struct sType* type_158;
void* right_value200;
struct CVALUE* come_value_159;
void* right_value201;
char* __dec_obj79;
void* right_value202;
struct sType* __dec_obj80;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value203;
struct CVALUE* come_value_160;
void* right_value204;
void* right_value205;
char* __dec_obj81;
void* right_value206;
struct sType* __dec_obj82;
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
    left_150=self->mLeft;
    if(_if_conditional219=!node_compile(left_150,info),    _if_conditional219) {
        __result112__ = (_Bool)0;
        return __result112__;
    }
    left_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional220=!self->mOnlyNullCecker&&left_value_151->type->mNoSolvedGenericsType&&left_value_151->type->mNoSolvedGenericsType->v1&&left_value_151->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_151->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional220) {
        method_name_152=(char*)come_increment_ref_count(((char*)(right_value196=create_method_name(left_value_151->type,(_Bool)0,"expect",info,(_Bool)1))));
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional225=map$2charphsFunph_at(info->funcs,method_name_152,((void*)0))==((void*)0),        _if_conditional225) {
            obj_type_155=left_value_151->type->mNoSolvedGenericsType->v1;
            if(_if_conditional226=list$1sTypeph_length(obj_type_155->mGenericsTypes)>0,            _if_conditional226) {
                obj_type2_156=left_value_151->type;
                __dec_obj78=method_name_152;
                method_name_152=(char*)come_increment_ref_count(((char*)(right_value198=make_generics_function(obj_type2_156,(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string("expect")))),info,(_Bool)1))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_151->type->mClass->mName);
                exit(1);
            }
        }
        fun_157=map$2charphsFunphp_operator_load_element(info->funcs,method_name_152);
        if(_if_conditional227=fun_157==((void*)0),        _if_conditional227) {
            err_msg(info,"function not found(%s)",method_name_152);
            __result117__ = (_Bool)1;
            method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result117__;
        }
        type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value199=solve_generics(fun_157->mResultType,left_value_151->type,info))));
        come_call_finalizer3(right_value199,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 399, "CVALUE"))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=come_value_159->c_value;
        come_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s(%s)",method_name_152,left_value_151->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj80=come_value_159->type;
        come_value_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(type_158))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_159->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        add_come_last_code(info,"%s;\n",come_value_159->c_value);
        method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional228=!gComeDebug,        _if_conditional228) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
        }
        else {
            if(_if_conditional229=left_value_151->type->mPointerNum>0,            _if_conditional229) {
                come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 413, "CVALUE"))));
                come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj81=come_value_160->c_value;
                come_value_160->c_value=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value204=make_type_name_string(left_value_151->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_151->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj82=come_value_160->type;
                come_value_160->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(left_value_151->type))));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_160->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
                add_come_last_code(info,"%s;\n",come_value_160->c_value);
                come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
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
unsigned int hash_153;
unsigned int it_154;
_Bool _while_condtional21;
_Bool _if_conditional221;
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
            hash_153=string_get_hash_key(((char*)key))%self->size;
            it_154=hash_153;
            while(_while_condtional21=(_Bool)1,            _while_condtional21) {
                if(_if_conditional221=self->item_existance[it_154],                _if_conditional221) {
                    if(_if_conditional222=string_equals(self->keys[it_154],key),                    _if_conditional222) {
                        __result113__ = __result_obj__ = self->items[it_154];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result113__;
                    }
                    it_154++;
                    if(_if_conditional223=it_154>=self->size,                    _if_conditional223) {
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
void* right_value208;
struct sNode* __dec_obj83;
struct sNullableNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
right_value208 = (void*)0;
    ((struct sNodeBase*)(right_value207=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value207,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(left))));
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
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value209 = (void*)0;
    __result120__ = __result_obj__ = ((char*)(right_value209=__builtin_string("sNullableNode")));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_161;
_Bool _if_conditional232;
_Bool __result121__;
void* right_value210;
struct CVALUE* left_value_162;
_Bool _if_conditional233;
void* right_value214;
struct CVALUE* come_value_163;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_161, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&left_value_162, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
    left_161=self->mLeft;
    if(_if_conditional232=!node_compile(left_161,info),    _if_conditional232) {
        __result121__ = (_Bool)0;
        return __result121__;
    }
    left_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional233=left_value_162->type->mPointerNum>0&&left_value_162->type->mNullValue,    _if_conditional233) {
        come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=CVALUE_clone(left_value_162))));
        come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_163->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
        add_come_last_code(info,"%s;\n",come_value_163->c_value);
        come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_162));
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
void* right_value212;
char* __dec_obj84;
_Bool _if_conditional236;
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
            if(_if_conditional235=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional235) {
                __dec_obj84=result_164->c_value;
                result_164->c_value=(char*)come_increment_ref_count(((char*)(right_value212=string_clone(self->c_value))));
                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional236=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional236) {
                __dec_obj85=result_164->type;
                result_164->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(self->type))));
                come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional237=self!=((void*)0),            _if_conditional237) {
                result_164->var=self->var;
            }
            __result123__ = __result_obj__ = result_164;
            come_call_finalizer3(result_164,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result123__;
            come_call_finalizer3(result_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value215;
void* right_value216;
struct sNode* __dec_obj86;
void* right_value217;
struct sNode* __dec_obj87;
void* right_value218;
struct sNode* __dec_obj88;
struct sRangeCheckNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    ((struct sNodeBase*)(right_value215=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value215,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj86=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(left))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj87=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(begin))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj88=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(end))));
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
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    __result126__ = __result_obj__ = ((char*)(right_value219=__builtin_string("sRangeCheckNode")));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_165;
_Bool _if_conditional242;
_Bool __result127__;
void* right_value220;
struct CVALUE* left_value_166;
struct sNode* begin_167;
_Bool _if_conditional243;
_Bool __result128__;
void* right_value221;
struct CVALUE* begin_value_168;
struct sNode* end_169;
_Bool _if_conditional244;
_Bool __result129__;
void* right_value222;
struct CVALUE* end_value_170;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value223;
struct CVALUE* come_value_171;
void* right_value224;
void* right_value225;
char* __dec_obj89;
void* right_value226;
struct sType* __dec_obj90;
void* right_value227;
struct CVALUE* come_value_172;
void* right_value228;
void* right_value229;
char* __dec_obj91;
void* right_value230;
struct sType* __dec_obj92;
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
    left_165=self->mLeft;
    if(_if_conditional242=!node_compile(left_165,info),    _if_conditional242) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    left_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    begin_167=self->mBegin;
    if(_if_conditional243=!node_compile(begin_167,info),    _if_conditional243) {
        __result128__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result128__;
    }
    begin_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    end_169=self->mEnd;
    if(_if_conditional244=!node_compile(end_169,info),    _if_conditional244) {
        __result129__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result129__;
    }
    end_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional245=left_value_166->type->mPointerNum>0,    _if_conditional245) {
        if(_if_conditional246=!gComeDebug,        _if_conditional246) {
            come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 520, "CVALUE"))));
            come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj89=come_value_171->c_value;
            come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("(*((%s)%s))",((char*)(right_value224=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_166->c_value))));
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_166->type->mPointerNum--;
            __dec_obj90=come_value_171->type;
            come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value226=sType_clone(left_value_166->type))));
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value226,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value_171->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
            add_come_last_code(info,"%s;\n",come_value_171->c_value);
            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 533, "CVALUE"))));
            come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj91=come_value_172->c_value;
            come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value228=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_166->c_value,begin_value_168->c_value,end_value_170->c_value,info->sname,info->sline))));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_166->type->mPointerNum--;
            __dec_obj92=come_value_172->type;
            come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(left_value_166->type))));
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value_172->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
            add_come_last_code(info,"%s;\n",come_value_172->c_value);
            come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_166));
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
void* right_value232;
struct sNode* __dec_obj93;
void* right_value233;
char* __dec_obj94;
struct sLoadFieldNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    ((struct sNodeBase*)(right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value231,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj94=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(name))));
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
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    __result132__ = __result_obj__ = ((char*)(right_value234=__builtin_string("sLoadFieldNode")));
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_173;
void* right_value235;
char* name_174;
_Bool _if_conditional250;
_Bool __result133__;
void* right_value236;
struct CVALUE* left_value_175;
_Bool _if_conditional251;
void* right_value237;
void* right_value238;
char* __dec_obj95;
struct sType* left_type_176;
void* right_value239;
struct sType* left_type2_177;
struct sClass* klass_178;
struct sType* __dec_obj96;
struct sType* field_type_179;
int index_180;
char* __dec_obj97;
char* child_field_name_181;
_Bool _if_conditional252;
_Bool __result134__;
struct list$1tuple2$2charphsTypephph* o2_saved_182;
struct tuple2$2charphsTypeph* field_183;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_184;
struct sType* field_type2_185;
_Bool _if_conditional253;
void* right_value240;
struct sType* __dec_obj98;
_Bool _if_conditional254;
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
_Bool _if_conditional255;
void* right_value241;
char* __dec_obj99;
void* right_value242;
struct sType* __dec_obj100;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value243;
struct sType* __dec_obj101;
_Bool _if_conditional258;
_Bool __result135__;
void* right_value244;
struct CVALUE* come_value_195;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value245;
char* __dec_obj102;
void* right_value246;
char* __dec_obj103;
_Bool _if_conditional261;
void* right_value247;
char* __dec_obj104;
void* right_value248;
char* __dec_obj105;
void* right_value249;
struct sType* __dec_obj106;
_Bool _if_conditional262;
_Bool __result136__;
_Bool _if_conditional264;
void* right_value250;
struct sType* __dec_obj107;
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
    left_173=self->mLeft;
    name_174=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(self->mName))));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional250=!node_compile(left_173,info),    _if_conditional250) {
        __result133__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    left_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional251=gComeDebug&&left_value_175->type->mPointerNum>0,    _if_conditional251) {
        __dec_obj95=left_value_175->c_value;
        left_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value237=make_type_name_string(left_value_175->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_175->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_176=left_value_175->type;
    left_type2_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=solve_generics(left_type_176,left_type_176,info))));
    come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_178=left_type2_177->mClass;
    klass_178=map$2charphsClassphp_operator_load_element(info->classes,klass_178->mName);
    __dec_obj96=field_type_179;
    field_type_179=((void*)0);
    come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
    index_180=0;
    __dec_obj97=child_field_name_181;
    child_field_name_181=((void*)0);
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    klass_178=map$2charphsClassphp_operator_load_element(info->classes,klass_178->mName);
    if(_if_conditional252=klass_178==((void*)0)||klass_178->mFields==((void*)0),    _if_conditional252) {
        err_msg(info,"invalid class %s",klass_178->mName);
        __result134__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result134__;
    }
    for(    o2_saved_182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),field_183=list$1tuple2$2charphsTypephph_begin((o2_saved_182));    !list$1tuple2$2charphsTypephph_end((o2_saved_182));    field_183=list$1tuple2$2charphsTypephph_next((o2_saved_182))    ){
        multiple_assign_var4=field_183;
        field_name_184=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_185=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(_if_conditional253=string_operator_equals(field_name_184,name_174),        _if_conditional253) {
            __dec_obj98=field_type_179;
            field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(field_type2_185))));
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
    if(_if_conditional254=index_180==list$1tuple2$2charphsTypephph_length(klass_178->mFields),    _if_conditional254) {
        index_180=0;
        for(        o2_saved_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),field_187=list$1tuple2$2charphsTypephph_begin((o2_saved_186));        !list$1tuple2$2charphsTypephph_end((o2_saved_186));        field_187=list$1tuple2$2charphsTypephph_next((o2_saved_186))        ){
            multiple_assign_var5=field_187;
            field_name_188=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_189=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_190=field_type2_189->mClass;
            for(            o2_saved_191=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_190->mFields)),field2_192=list$1tuple2$2charphsTypephph_begin((o2_saved_191));            !list$1tuple2$2charphsTypephph_end((o2_saved_191));            field2_192=list$1tuple2$2charphsTypephph_next((o2_saved_191))            ){
                multiple_assign_var6=field2_192;
                field_name2_193=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_194=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(_if_conditional255=string_operator_equals(field_name2_193,name_174),                _if_conditional255) {
                    __dec_obj99=child_field_name_181;
                    child_field_name_181=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(field_name_188))));
                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj100=field_type_179;
                    field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(field_type3_194))));
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
            if(_if_conditional257=string_operator_equals(field_name_188,name_174),            _if_conditional257) {
                __dec_obj101=field_type_179;
                field_type_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(field_type2_189))));
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
        if(_if_conditional258=index_180==list$1tuple2$2charphsTypephph_length(klass_178->mFields),        _if_conditional258) {
            err_msg(info,"field not found(%s) in %s(2)",name_174,klass_178->mName);
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
    if(_if_conditional259=left_value_175->type->mPointerNum>0,    _if_conditional259) {
        if(child_field_name_181) {
            __dec_obj102=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s->%s.%s",left_value_175->c_value,child_field_name_181,name_174))));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj103=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("%s->%s",left_value_175->c_value,name_174))));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        if(child_field_name_181) {
            __dec_obj104=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value247=xsprintf("%s.%s.%s",left_value_175->c_value,child_field_name_181,name_174))));
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj105=come_value_195->c_value;
            come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("%s.%s",left_value_175->c_value,name_174))));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    __dec_obj106=come_value_195->type;
    come_value_195->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(field_type_179))));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_195->var=((void*)0);
    if(_if_conditional262=field_type_179==((void*)0),    _if_conditional262) {
        err_msg(info,"no field(%s)\n",name_174);
        __result136__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_181 = come_decrement_ref_count2(child_field_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result136__;
    }
    if(_if_conditional264=list$1sNodeph_length(come_value_195->type->mArrayNum)==1,    _if_conditional264) {
        __dec_obj107=come_value_195->type->mOriginalLoadVarType->v1;
        come_value_195->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(come_value_195->type))));
        come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_195->type->mArrayNum);
        come_value_195->type->mPointerNum++;
        come_value_195->type->mOriginalTypeNamePointerNum=come_value_195->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
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
        __result138__ = self->len;
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
            it_196=self->head;
            while(_while_condtional22=it_196!=((void*)0),            _while_condtional22) {
                prev_it_197=it_196;
                it_196=it_196->next;
                come_call_finalizer3(prev_it_197,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result139__ = __result_obj__ = self;
            return __result139__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value251;
void* right_value252;
struct sNode* __dec_obj108;
void* right_value253;
struct sNode* __dec_obj109;
void* right_value254;
struct list$1sNodeph* __dec_obj110;
struct sStoreArrayNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
    ((struct sNodeBase*)(right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj108=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=sNode_clone(left))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj109=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(right))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj110=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value254=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj110,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value254,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
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
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result142__ = __result_obj__ = ((char*)(right_value255=__builtin_string("sStoreArrayNode")));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_198;
struct sNode* right_199;
struct list$1sNodeph* array_num_nodes_200;
_Bool _if_conditional269;
_Bool __result143__;
void* right_value256;
struct CVALUE* left_value_201;
_Bool _if_conditional270;
void* right_value257;
void* right_value258;
char* __dec_obj111;
struct sType* left_type_202;
void* right_value259;
void* right_value260;
struct list$1CVALUEph* array_num_203;
struct list$1sNodeph* o2_saved_206;
struct sNode* it_209;
_Bool _if_conditional275;
_Bool __result152__;
void* right_value261;
struct CVALUE* c_value_212;
_Bool _if_conditional276;
_Bool __result153__;
void* right_value262;
struct CVALUE* right_value_213;
struct sType* right_type_214;
struct sClass* klass_215;
void* right_value263;
struct sType* type_216;
char* fun_name_217;
_Bool calling_fun_218;
_Bool _if_conditional277;
_Bool _if_conditional280;
char* __dec_obj112;
char* check_code_222;
_Bool _if_conditional281;
struct sType* var_type_223;
void* right_value264;
struct sType* result_type_224;
_Bool _if_conditional282;
struct sType* __dec_obj113;
_Bool _if_conditional283;
int n_225;
_Bool _if_conditional285;
void* right_value265;
struct sType* __dec_obj114;
_Bool _if_conditional286;
void* right_value266;
struct sType* __dec_obj115;
_Bool _if_conditional287;
int i_226;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
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
_Bool _if_conditional314;
void* right_value274;
struct CVALUE* come_value_251;
void* right_value275;
_Bool _if_conditional315;
void* right_value276;
void* right_value277;
char* __dec_obj116;
void* right_value278;
struct CVALUE* come_value_252;
_Bool _if_conditional316;
int i_253;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value279;
void* right_value280;
struct buffer* buf_254;
struct list$1CVALUEph* o2_saved_255;
struct CVALUE* it_256;
void* right_value281;
void* right_value282;
char* left_value_code_257;
void* right_value283;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value284;
char* __dec_obj117;
_Bool _if_conditional321;
void* right_value285;
char* __dec_obj118;
_Bool __result167__;
int right_value_id_258;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value286;
char* __dec_obj119;
_Bool _if_conditional324;
void* right_value287;
char* __dec_obj120;
_Bool __result168__;
void* right_value288;
struct sType* result_type_259;
void* right_value289;
void* right_value290;
struct list$1sNodeph* __dec_obj121;
struct sType* __dec_obj122;
_Bool _if_conditional325;
void* right_value291;
char* __dec_obj123;
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
    left_198=self->mLeft;
    right_199=self->mRight;
    array_num_nodes_200=self->mArrayNum;
    if(_if_conditional269=!node_compile(left_198,info),    _if_conditional269) {
        __result143__ = (_Bool)0;
        return __result143__;
    }
    left_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value256,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional270=gComeDebug&&left_value_201->type->mPointerNum>0,    _if_conditional270) {
        __dec_obj111=left_value_201->c_value;
        left_value_201->c_value=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value257=make_type_name_string(left_value_201->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_201->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_202=left_value_201->type;
    array_num_203=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value260=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value259=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 721, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value259,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value260,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_206=(array_num_nodes_200),it_209=list$1sNodeph_begin((o2_saved_206));    !list$1sNodeph_end((o2_saved_206));    it_209=list$1sNodeph_next((o2_saved_206))    ){
        if(_if_conditional275=!node_compile(it_209,info),        _if_conditional275) {
            __result152__ = (_Bool)0;
            come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_203,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result152__;
        }
        c_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value261,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_203,(struct CVALUE*)come_increment_ref_count(c_value_212));
        come_call_finalizer3(c_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional276=!node_compile(right_199,info),    _if_conditional276) {
        __result153__ = (_Bool)0;
        come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_203,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result153__;
    }
    right_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_type_214=right_value_213->type;
    klass_215=left_value_201->type->mClass;
    type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_value_201->type))));
    come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_217="operator_store_element";
    if(self->mQuote) {
        calling_fun_218=(_Bool)0;
    }
    else {
        calling_fun_218=operator_overload_fun2(type_216,fun_name_217,left_value_201,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_203,0), "18field.c", 753, 9)),right_value_213,info);
    }
    if(_if_conditional280=!calling_fun_218,    _if_conditional280) {
        __dec_obj112=check_code_222;
        check_code_222=((void*)0);
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(_if_conditional281=left_value_201->var&&left_value_201->var->mType&&list$1sNodeph_length(left_value_201->var->mType->mArrayNum)>0,        _if_conditional281) {
            var_type_223=left_value_201->var->mType;
            result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(left_type_202))));
            come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(result_type_224->mOriginalLoadVarType->v1) {
                __dec_obj113=result_type_224;
                result_type_224=(struct sType*)come_increment_ref_count(result_type_224->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional283=list$1sNodeph_length(result_type_224->mArrayNum)>0,            _if_conditional283) {
                n_225=list$1sNodeph_length(result_type_224->mArrayNum)-list$1CVALUEph_length(array_num_203);
                if(_if_conditional285=n_225==0,                _if_conditional285) {
                    __dec_obj114=result_type_224;
                    result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(left_type_202))));
                    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(left_type_202->mOriginalLoadVarType->v1) {
                        __dec_obj115=result_type_224;
                        result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(left_type_202->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_224->mArrayNum);
                }
                else {
                    if(_if_conditional287=n_225>0,                    _if_conditional287) {
                        for(                        i_226=0;                        i_226<n_225;                        i_226++                        ){
                            list$1sNodeph_delete(result_type_224->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional306=n_225<0,                        _if_conditional306) {
                            list$1sNodeph_reset(result_type_224->mArrayNum);
                            result_type_224->mPointerNum+=n_225;
                            if(_if_conditional307=result_type_224->mPointerNum<0,                            _if_conditional307) {
                                result_type_224->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional308=result_type_224->mPointerNum>0,                _if_conditional308) {
                    result_type_224->mPointerNum-=list$1CVALUEph_length(array_num_203);
                    if(_if_conditional309=result_type_224->mPointerNum<0,                    _if_conditional309) {
                        result_type_224->mPointerNum=0;
                    }
                }
            }
            come_value_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 801, "CVALUE"))));
            come_call_finalizer3(right_value267,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_240=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value268=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 803, "buffer"))))))));
            come_call_finalizer3(right_value268,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value269,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(result_type_224))));
            come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_241->mPointerNum++;
            buffer_append_str(buf_240,((char*)(right_value271=xsprintf("come_range_check(&%s",left_value_201->c_value))));
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_242=(struct list$1CVALUEph*)come_increment_ref_count((array_num_203)),it_245=list$1CVALUEph_begin((o2_saved_242));            !list$1CVALUEph_end((o2_saved_242));            it_245=list$1CVALUEph_next((o2_saved_242))            ){
                buffer_append_str(buf_240,((char*)(right_value272=xsprintf("[%s]",it_245->c_value))));
                right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_242,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_240,((char*)(right_value273=xsprintf(",%s,%s+(",left_value_201->c_value,left_value_201->c_value))));
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_248=0;
            for(            o2_saved_249=(struct list$1sNodeph*)come_increment_ref_count((var_type_223->mArrayNum)),it_250=list$1sNodeph_begin((o2_saved_249));            !list$1sNodeph_end((o2_saved_249));            it_250=list$1sNodeph_next((o2_saved_249))            ){
                if(_if_conditional314=!node_compile(it_250,info),                _if_conditional314) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_251=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_240,((char*)(right_value275=xsprintf("%s",come_value_251->c_value))));
                right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional315=i_248!=list$1sNodeph_length(var_type_223->mArrayNum)-1,                _if_conditional315) {
                    buffer_append_str(buf_240,"*");
                }
                i_248++;
                come_call_finalizer3(come_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_249,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_240,((char*)(right_value276=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj116=check_code_222;
            check_code_222=(char*)come_increment_ref_count(((char*)(right_value277=buffer_to_string(buf_240))));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_240,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 835, "CVALUE"))));
        come_call_finalizer3(right_value278,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional316=list$1sNodeph_length(left_type_202->mArrayNum)>0,        _if_conditional316) {
            for(            i_253=0;            i_253<list$1CVALUEph_length(array_num_203);            i_253++            ){
                list$1sNodeph_delete(left_type_202->mArrayNum,-1,-1);
            }
        }
        else {
            if(_if_conditional317=left_type_202->mPointerNum>0,            _if_conditional317) {
                left_type_202->mPointerNum-=list$1CVALUEph_length(array_num_203);
                if(_if_conditional318=left_type_202->mPointerNum<0,                _if_conditional318) {
                    left_type_202->mPointerNum=0;
                }
            }
        }
        buf_254=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value280=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value279=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 856, "buffer"))))))));
        come_call_finalizer3(right_value279,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value280,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_254,left_value_201->c_value);
        for(        o2_saved_255=(struct list$1CVALUEph*)come_increment_ref_count((array_num_203)),it_256=list$1CVALUEph_begin((o2_saved_255));        !list$1CVALUEph_end((o2_saved_255));        it_256=list$1CVALUEph_next((o2_saved_255))        ){
            buffer_append_str(buf_254,((char*)(right_value281=xsprintf("[%s]",it_256->c_value))));
            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_257=(char*)come_increment_ref_count(((char*)(right_value282=buffer_to_string(buf_254))));
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value283=xsprintf("array is assinged to"))),left_type_202,right_type_214,right_value_213,(_Bool)0,(_Bool)1,info);
        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional319=left_type_202->mHeap&&right_type_214->mHeap&&left_type_202->mPointerNum>0&&right_type_214->mPointerNum>0,        _if_conditional319) {
            if(_if_conditional320=left_value_201->type->mPointerNum>=1,            _if_conditional320) {
                decrement_ref_count_object(left_type_202,left_value_code_257,info,(_Bool)0);
                std_move(left_type_202,right_type_214,right_value_213,info);
                __dec_obj117=come_value_252->c_value;
                come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value284=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional321=left_value_201->type->mPointerNum==0,                _if_conditional321) {
                    decrement_ref_count_object(left_type_202,left_value_code_257,info,(_Bool)0);
                    std_move(left_type_202,right_type_214,right_value_213,info);
                    __dec_obj118=come_value_252->c_value;
                    come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value285=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_257,left_value_201->type->mPointerNum);
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
            right_value_id_258=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_213->c_value));
            if(_if_conditional322=right_value_id_258!=-1,            _if_conditional322) {
                remove_object_from_right_values(right_value_id_258,info);
            }
        }
        else {
            if(_if_conditional323=left_value_201->type->mPointerNum>=1,            _if_conditional323) {
                __dec_obj119=come_value_252->c_value;
                come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value286=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional324=left_value_201->type->mPointerNum==0,                _if_conditional324) {
                    __dec_obj120=come_value_252->c_value;
                    come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("%s=%s",left_value_code_257,right_value_213->c_value))));
                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_257,left_value_201->type->mPointerNum);
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
        result_type_259=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(left_type_202))));
        come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj121=result_type_259->mArrayNum;
        result_type_259->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value290=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value289=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 902, "list$1sNodeph"))))))));
        come_call_finalizer3(__dec_obj121,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value289,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value290,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj122=come_value_252->type;
        come_value_252->type=(struct sType*)come_increment_ref_count(result_type_259);
        come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_252->var=((void*)0);
        if(_if_conditional325=check_code_222&&gComeDebug,        _if_conditional325) {
            __dec_obj123=come_value_252->c_value;
            come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value291=xsprintf("(%s, %s)",check_code_222,come_value_252->c_value))));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_252));
        add_come_last_code(info,"%s;\n",come_value_252->c_value);
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
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
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
            it_204=self->head;
            while(_while_condtional23=it_204!=((void*)0),            _while_condtional23) {
                prev_it_205=it_204;
                it_204=it_204->next;
                come_call_finalizer3(prev_it_205,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional271;
struct sNode* result_207;
struct sNode* __result145__;
_Bool _if_conditional272;
struct sNode* __result146__;
struct sNode* result_208;
struct sNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_207, 0, sizeof(struct sNode*));
memset(&result_208, 0, sizeof(struct sNode*));
        if(_if_conditional271=self==((void*)0),        _if_conditional271) {
            memset(&result_207,0,sizeof(struct sNode*));
            __result145__ = __result_obj__ = result_207;
            return __result145__;
        }
        self->it=self->head;
        if(self->it) {
            __result146__ = __result_obj__ = self->it->item;
            return __result146__;
        }
        memset(&result_208,0,sizeof(struct sNode*));
        __result147__ = __result_obj__ = result_208;
        return __result147__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
        __result148__ = self==((void*)0)||self->it==((void*)0);
        return __result148__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional273;
struct sNode* result_210;
struct sNode* __result149__;
_Bool _if_conditional274;
struct sNode* __result150__;
struct sNode* result_211;
struct sNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(struct sNode*));
memset(&result_211, 0, sizeof(struct sNode*));
        if(_if_conditional273=self==((void*)0)||self->it==((void*)0),        _if_conditional273) {
            memset(&result_210,0,sizeof(struct sNode*));
            __result149__ = __result_obj__ = result_210;
            return __result149__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result150__ = __result_obj__ = self->it->item;
            return __result150__;
        }
        memset(&result_211,0,sizeof(struct sNode*));
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
struct CVALUE* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_220, 0, sizeof(int));
memset(&default_value_221, 0, sizeof(struct CVALUE*));
            if(_if_conditional278=position<0,            _if_conditional278) {
                position+=self->len;
            }
            it_219=self->head;
            i_220=0;
            while(_while_condtional24=it_219!=((void*)0),            _while_condtional24) {
                if(_if_conditional279=position==i_220,                _if_conditional279) {
                    __result154__ = __result_obj__ = it_219->item;
                    return __result154__;
                }
                it_219=it_219->next;
                i_220++;
            }
            memset(&default_value_221,0,sizeof(struct CVALUE*));
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
                    __result157__ = self->len;
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
                                    head+=self->len;
                                }
                                if(_if_conditional289=tail<0,                                _if_conditional289) {
                                    tail+=self->len+1;
                                }
                                if(_if_conditional290=head>tail,                                _if_conditional290) {
                                    tmp_227=tail;
                                    tail=head;
                                    head=tmp_227;
                                }
                                if(_if_conditional291=head<0,                                _if_conditional291) {
                                    head=0;
                                }
                                if(_if_conditional292=tail>self->len,                                _if_conditional292) {
                                    tail=self->len;
                                }
                                if(_if_conditional293=head==tail,                                _if_conditional293) {
                                    __result158__ = __result_obj__ = self;
                                    return __result158__;
                                }
                                if(_if_conditional294=head==0&&tail==self->len,                                _if_conditional294) {
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    if(_if_conditional295=head==0,                                    _if_conditional295) {
                                        it_228=self->head;
                                        i_229=0;
                                        while(_while_condtional25=it_228!=((void*)0),                                        _while_condtional25) {
                                            if(_if_conditional296=i_229<tail,                                            _if_conditional296) {
                                                prev_it_230=it_228;
                                                it_228=it_228->next;
                                                i_229++;
                                                come_call_finalizer3(prev_it_230,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                self->len--;
                                            }
                                            else {
                                                if(_if_conditional297=i_229==tail,                                                _if_conditional297) {
                                                    self->head=it_228;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_228=it_228->next;
                                                    i_229++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional298=tail==self->len,                                        _if_conditional298) {
                                            it_231=self->head;
                                            i_232=0;
                                            while(_while_condtional26=it_231!=((void*)0),                                            _while_condtional26) {
                                                if(_if_conditional299=i_232==head,                                                _if_conditional299) {
                                                    self->tail=it_231->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(_if_conditional300=i_232>=head,                                                _if_conditional300) {
                                                    prev_it_233=it_231;
                                                    it_231=it_231->next;
                                                    i_232++;
                                                    come_call_finalizer3(prev_it_233,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    self->len--;
                                                }
                                                else {
                                                    it_231=it_231->next;
                                                    i_232++;
                                                }
                                            }
                                        }
                                        else {
                                            it_234=self->head;
                                            head_prev_it_235=((void*)0);
                                            tail_it_236=((void*)0);
                                            i_237=0;
                                            while(_while_condtional27=it_234!=((void*)0),                                            _while_condtional27) {
                                                if(_if_conditional301=i_237==head,                                                _if_conditional301) {
                                                    head_prev_it_235=it_234->prev;
                                                }
                                                if(_if_conditional302=i_237==tail,                                                _if_conditional302) {
                                                    tail_it_236=it_234;
                                                }
                                                if(_if_conditional303=i_237>=head&&i_237<tail,                                                _if_conditional303) {
                                                    prev_it_238=it_234;
                                                    it_234=it_234->next;
                                                    i_237++;
                                                    come_call_finalizer3(prev_it_238,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    self->len--;
                                                }
                                                else {
                                                    it_234=it_234->next;
                                                    i_237++;
                                                }
                                            }
                                            if(_if_conditional304=head_prev_it_235!=((void*)0),                                            _if_conditional304) {
                                                head_prev_it_235->next=tail_it_236;
                                            }
                                            if(_if_conditional305=tail_it_236!=((void*)0),                                            _if_conditional305) {
                                                tail_it_236->prev=head_prev_it_235;
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
struct CVALUE* __result160__;
_Bool _if_conditional311;
struct CVALUE* __result161__;
struct CVALUE* result_244;
struct CVALUE* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct CVALUE*));
memset(&result_244, 0, sizeof(struct CVALUE*));
                if(_if_conditional310=self==((void*)0),                _if_conditional310) {
                    memset(&result_243,0,sizeof(struct CVALUE*));
                    __result160__ = __result_obj__ = result_243;
                    return __result160__;
                }
                self->it=self->head;
                if(self->it) {
                    __result161__ = __result_obj__ = self->it->item;
                    return __result161__;
                }
                memset(&result_244,0,sizeof(struct CVALUE*));
                __result162__ = __result_obj__ = result_244;
                return __result162__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
                __result163__ = self==((void*)0)||self->it==((void*)0);
                return __result163__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional312;
struct CVALUE* result_246;
struct CVALUE* __result164__;
_Bool _if_conditional313;
struct CVALUE* __result165__;
struct CVALUE* result_247;
struct CVALUE* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct CVALUE*));
memset(&result_247, 0, sizeof(struct CVALUE*));
                if(_if_conditional312=self==((void*)0)||self->it==((void*)0),                _if_conditional312) {
                    memset(&result_246,0,sizeof(struct CVALUE*));
                    __result164__ = __result_obj__ = result_246;
                    return __result164__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result165__ = __result_obj__ = self->it->item;
                    return __result165__;
                }
                memset(&result_247,0,sizeof(struct CVALUE*));
                __result166__ = __result_obj__ = result_247;
                return __result166__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value292;
void* right_value293;
struct list$1sNodeph* __dec_obj124;
void* right_value294;
struct sNode* __dec_obj125;
struct sLoadArrayNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
    ((struct sNodeBase*)(right_value292=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value292,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj124=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value293=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj124,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value293,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mBreakGuard=break_guard;
    __dec_obj125=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(left))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
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
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
    __result171__ = __result_obj__ = ((char*)(right_value295=__builtin_string("sLoadArrayNode")));
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result171__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_260;
struct list$1sNodeph* array_num_nodes_261;
_Bool _if_conditional329;
_Bool __result172__;
void* right_value296;
struct CVALUE* left_value_262;
_Bool _if_conditional330;
void* right_value297;
void* right_value298;
char* __dec_obj126;
void* right_value299;
struct sType* left_type_263;
void* right_value300;
void* right_value301;
struct list$1CVALUEph* array_num_264;
struct list$1sNodeph* o2_saved_265;
struct sNode* it_266;
_Bool _if_conditional331;
_Bool __result173__;
void* right_value302;
struct CVALUE* c_value_267;
void* right_value303;
struct sType* type_268;
char* fun_name_269;
_Bool calling_fun_270;
_Bool _if_conditional332;
_Bool _if_conditional333;
_Bool _if_conditional334;
struct sType* var_type_271;
void* right_value304;
struct sType* result_type_272;
_Bool _if_conditional335;
struct sType* __dec_obj127;
_Bool _if_conditional336;
int n_273;
_Bool _if_conditional337;
void* right_value305;
struct sType* __dec_obj128;
_Bool _if_conditional338;
void* right_value306;
struct sType* __dec_obj129;
_Bool _if_conditional339;
int i_274;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
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
_Bool _if_conditional344;
void* right_value315;
struct CVALUE* come_value_283;
void* right_value316;
_Bool _if_conditional345;
void* right_value317;
void* right_value318;
char* left_value_code_284;
void* right_value319;
char* __dec_obj130;
void* right_value320;
struct sType* __dec_obj131;
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
char* __dec_obj132;
void* right_value327;
struct sType* result_type_290;
_Bool _if_conditional346;
struct sType* __dec_obj133;
_Bool _if_conditional347;
int n_291;
_Bool _if_conditional348;
void* right_value328;
struct sType* __dec_obj134;
_Bool _if_conditional349;
void* right_value329;
struct sType* __dec_obj135;
_Bool _if_conditional350;
int i_292;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
void* right_value330;
struct sType* __dec_obj136;
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
    left_260=self->mLeft;
    array_num_nodes_261=self->mArrayNum;
    if(_if_conditional329=!node_compile(left_260,info),    _if_conditional329) {
        __result172__ = (_Bool)0;
        return __result172__;
    }
    left_value_262=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value296,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional330=gComeDebug&&left_value_262->type->mPointerNum>0&&!self->mBreakGuard,    _if_conditional330) {
        __dec_obj126=left_value_262->c_value;
        left_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value298=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value297=make_type_name_string(left_value_262->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_262->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    left_type_263=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_clone(left_value_262->type))));
    come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
    array_num_264=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value301=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value300=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 955, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value300,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value301,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_265=(array_num_nodes_261),it_266=list$1sNodeph_begin((o2_saved_265));    !list$1sNodeph_end((o2_saved_265));    it_266=list$1sNodeph_next((o2_saved_265))    ){
        if(_if_conditional331=!node_compile(it_266,info),        _if_conditional331) {
            __result173__ = (_Bool)0;
            come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result173__;
        }
        c_value_267=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value302,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_264,(struct CVALUE*)come_increment_ref_count(c_value_267));
        come_call_finalizer3(c_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_value_262->type))));
    come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_269="operator_load_element";
    if(self->mQuote) {
        calling_fun_270=(_Bool)0;
    }
    else {
        calling_fun_270=operator_overload_fun(type_268,fun_name_269,left_value_262,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_264,0), "18field.c", 976, 10)),self->mBreakGuard,info);
    }
    if(_if_conditional333=!calling_fun_270,    _if_conditional333) {
        if(_if_conditional334=gComeDebug&&left_value_262->var&&left_value_262->var->mType&&list$1sNodeph_length(left_value_262->var->mType->mArrayNum)>0,        _if_conditional334) {
            var_type_271=left_value_262->var->mType;
            result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_type_263))));
            come_call_finalizer3(right_value304,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(result_type_272->mOriginalLoadVarType->v1) {
                __dec_obj127=result_type_272;
                result_type_272=(struct sType*)come_increment_ref_count(result_type_272->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional336=list$1sNodeph_length(result_type_272->mArrayNum)>0,            _if_conditional336) {
                n_273=list$1sNodeph_length(result_type_272->mArrayNum)-list$1CVALUEph_length(array_num_264);
                if(_if_conditional337=n_273==0,                _if_conditional337) {
                    __dec_obj128=result_type_272;
                    result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(left_type_263))));
                    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value305,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(left_type_263->mOriginalLoadVarType->v1) {
                        __dec_obj129=result_type_272;
                        result_type_272=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_clone(left_type_263->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_272->mArrayNum);
                }
                else {
                    if(_if_conditional339=n_273>0,                    _if_conditional339) {
                        for(                        i_274=0;                        i_274<n_273;                        i_274++                        ){
                            list$1sNodeph_delete(result_type_272->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional340=n_273<0,                        _if_conditional340) {
                            list$1sNodeph_reset(result_type_272->mArrayNum);
                            result_type_272->mPointerNum+=n_273;
                            if(_if_conditional341=result_type_272->mPointerNum<0,                            _if_conditional341) {
                                result_type_272->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional342=result_type_272->mPointerNum>0,                _if_conditional342) {
                    result_type_272->mPointerNum-=list$1CVALUEph_length(array_num_264);
                    if(_if_conditional343=result_type_272->mPointerNum<0,                    _if_conditional343) {
                        result_type_272->mPointerNum=0;
                    }
                }
            }
            come_value_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value307=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1023, "CVALUE"))));
            come_call_finalizer3(right_value307,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_276=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value309=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value308=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1025, "buffer"))))))));
            come_call_finalizer3(right_value308,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value309,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(result_type_272))));
            come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_277->mPointerNum++;
            buffer_append_str(buf_276,((char*)(right_value312=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value311=make_type_name_string(result_type2_277,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_262->c_value))));
            right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            o2_saved_278=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_279=list$1CVALUEph_begin((o2_saved_278));            !list$1CVALUEph_end((o2_saved_278));            it_279=list$1CVALUEph_next((o2_saved_278))            ){
                buffer_append_str(buf_276,((char*)(right_value313=xsprintf("[%s]",it_279->c_value))));
                right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_278,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_276,((char*)(right_value314=xsprintf(",%s,%s+(",left_value_262->c_value,left_value_262->c_value))));
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_280=0;
            for(            o2_saved_281=(struct list$1sNodeph*)come_increment_ref_count((var_type_271->mArrayNum)),it_282=list$1sNodeph_begin((o2_saved_281));            !list$1sNodeph_end((o2_saved_281));            it_282=list$1sNodeph_next((o2_saved_281))            ){
                if(_if_conditional344=!node_compile(it_282,info),                _if_conditional344) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_283=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value315,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_276,((char*)(right_value316=xsprintf("%s",come_value_283->c_value))));
                right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional345=i_280!=list$1sNodeph_length(var_type_271->mArrayNum)-1,                _if_conditional345) {
                    buffer_append_str(buf_276,"*");
                }
                i_280++;
                come_call_finalizer3(come_value_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_281,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_276,((char*)(right_value317=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            left_value_code_284=(char*)come_increment_ref_count(((char*)(right_value318=buffer_to_string(buf_276))));
            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj130=come_value_275->c_value;
            come_value_275->c_value=(char*)come_increment_ref_count(((char*)(right_value319=xsprintf("%s",left_value_code_284))));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj131=come_value_275->type;
            come_value_275->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_clone(result_type_272))));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value_275->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
            add_come_last_code(info,"%s;\n",come_value_275->c_value);
            come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_284 = come_decrement_ref_count2(left_value_code_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1069, "CVALUE"))));
            come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            buf_286=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value322=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1071, "buffer"))))))));
            come_call_finalizer3(right_value322,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value323,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_286,left_value_262->c_value);
            for(            o2_saved_287=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_288=list$1CVALUEph_begin((o2_saved_287));            !list$1CVALUEph_end((o2_saved_287));            it_288=list$1CVALUEph_next((o2_saved_287))            ){
                buffer_append_str(buf_286,((char*)(right_value324=xsprintf("[%s]",it_288->c_value))));
                right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_287,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_289=(char*)come_increment_ref_count(((char*)(right_value325=buffer_to_string(buf_286))));
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj132=come_value_285->c_value;
            come_value_285->c_value=(char*)come_increment_ref_count(((char*)(right_value326=xsprintf("%s",left_value_code_289))));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(left_type_263))));
            come_call_finalizer3(right_value327,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(result_type_290->mOriginalLoadVarType->v1) {
                __dec_obj133=result_type_290;
                result_type_290=(struct sType*)come_increment_ref_count(result_type_290->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional347=list$1sNodeph_length(result_type_290->mArrayNum)>0,            _if_conditional347) {
                n_291=list$1sNodeph_length(result_type_290->mArrayNum)-list$1CVALUEph_length(array_num_264);
                if(_if_conditional348=n_291==0,                _if_conditional348) {
                    __dec_obj134=result_type_290;
                    result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(left_type_263))));
                    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(left_type_263->mOriginalLoadVarType->v1) {
                        __dec_obj135=result_type_290;
                        result_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=sType_clone(left_type_263->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value329,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    list$1sNodeph_reset(result_type_290->mArrayNum);
                }
                else {
                    if(_if_conditional350=n_291>0,                    _if_conditional350) {
                        for(                        i_292=0;                        i_292<n_291;                        i_292++                        ){
                            list$1sNodeph_delete(result_type_290->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(_if_conditional351=n_291<0,                        _if_conditional351) {
                            list$1sNodeph_reset(result_type_290->mArrayNum);
                            result_type_290->mPointerNum+=n_291;
                            if(_if_conditional352=result_type_290->mPointerNum<0,                            _if_conditional352) {
                                result_type_290->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(_if_conditional353=result_type_290->mPointerNum>0,                _if_conditional353) {
                    result_type_290->mPointerNum-=list$1CVALUEph_length(array_num_264);
                    if(_if_conditional354=result_type_290->mPointerNum<0,                    _if_conditional354) {
                        result_type_290->mPointerNum=0;
                    }
                }
            }
            __dec_obj136=come_value_285->type;
            come_value_285->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(result_type_290))));
            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_value_285->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_285));
            add_come_last_code(info,"%s;\n",come_value_285->c_value);
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
void* right_value332;
struct list$1sNodeph* __dec_obj137;
void* right_value333;
struct sNode* __dec_obj138;
struct sLoadRangeArrayNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
    ((struct sNodeBase*)(right_value331=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value331,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value332=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj137,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value332,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=sNode_clone(left))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
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
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
    __result176__ = __result_obj__ = ((char*)(right_value334=__builtin_string("sLoadRangeArrayNode")));
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result176__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_293;
struct list$1sNodeph* array_num_nodes_294;
_Bool _if_conditional358;
_Bool __result177__;
void* right_value335;
struct CVALUE* left_value_295;
void* right_value336;
struct sType* left_type_296;
void* right_value337;
void* right_value338;
struct list$1CVALUEph* array_num_297;
struct list$1sNodeph* o2_saved_298;
struct sNode* it_299;
_Bool _if_conditional359;
_Bool __result178__;
void* right_value339;
struct CVALUE* c_value_300;
void* right_value340;
struct sType* type_301;
char* fun_name_302;
_Bool calling_fun_303;
_Bool _if_conditional360;
_Bool _if_conditional361;
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
char* __dec_obj139;
void* right_value347;
struct sType* result_type_309;
_Bool _if_conditional362;
struct sType* __dec_obj140;
_Bool _if_conditional363;
int n_310;
_Bool _if_conditional364;
void* right_value348;
struct sType* __dec_obj141;
_Bool _if_conditional365;
void* right_value349;
struct sType* __dec_obj142;
_Bool _if_conditional366;
int i_311;
_Bool _if_conditional367;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value350;
struct sType* __dec_obj143;
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
    left_293=self->mLeft;
    array_num_nodes_294=self->mArrayNum;
    if(_if_conditional358=!node_compile(left_293,info),    _if_conditional358) {
        __result177__ = (_Bool)0;
        return __result177__;
    }
    left_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value335,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_296=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(left_value_295->type))));
    come_call_finalizer3(right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
    array_num_297=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value338=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value337=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1167, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value337,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value338,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_298=(array_num_nodes_294),it_299=list$1sNodeph_begin((o2_saved_298));    !list$1sNodeph_end((o2_saved_298));    it_299=list$1sNodeph_next((o2_saved_298))    ){
        if(_if_conditional359=!node_compile(it_299,info),        _if_conditional359) {
            __result178__ = (_Bool)0;
            come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result178__;
        }
        c_value_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value339,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_297,(struct CVALUE*)come_increment_ref_count(c_value_300));
        come_call_finalizer3(c_value_300,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_301=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(left_value_295->type))));
    come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_302="operator_load_range_element";
    if(self->mQuote) {
        calling_fun_303=(_Bool)0;
    }
    else {
        calling_fun_303=operator_overload_fun2(type_301,fun_name_302,left_value_295,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_297,0), "18field.c", 1188, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_297,1), "18field.c", 1188, 12)),info);
    }
    if(_if_conditional361=!calling_fun_303,    _if_conditional361) {
        come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1192, "CVALUE"))));
        come_call_finalizer3(right_value341,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        buf_305=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value343=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value342=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1194, "buffer"))))))));
        come_call_finalizer3(right_value342,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value343,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_305,left_value_295->c_value);
        for(        o2_saved_306=(struct list$1CVALUEph*)come_increment_ref_count((array_num_297)),it_307=list$1CVALUEph_begin((o2_saved_306));        !list$1CVALUEph_end((o2_saved_306));        it_307=list$1CVALUEph_next((o2_saved_306))        ){
            buffer_append_str(buf_305,((char*)(right_value344=xsprintf("[%s]",it_307->c_value))));
            right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(o2_saved_306,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_308=(char*)come_increment_ref_count(((char*)(right_value345=buffer_to_string(buf_305))));
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj139=come_value_304->c_value;
        come_value_304->c_value=(char*)come_increment_ref_count(((char*)(right_value346=xsprintf("%s",left_value_code_308))));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value347=sType_clone(left_type_296))));
        come_call_finalizer3(right_value347,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(result_type_309->mOriginalLoadVarType->v1) {
            __dec_obj140=result_type_309;
            result_type_309=(struct sType*)come_increment_ref_count(result_type_309->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional363=list$1sNodeph_length(result_type_309->mArrayNum)>0,        _if_conditional363) {
            n_310=list$1sNodeph_length(result_type_309->mArrayNum)-list$1CVALUEph_length(array_num_297);
            if(_if_conditional364=n_310==0,            _if_conditional364) {
                __dec_obj141=result_type_309;
                result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value348=sType_clone(left_type_296))));
                come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value348,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(left_type_296->mOriginalLoadVarType->v1) {
                    __dec_obj142=result_type_309;
                    result_type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(left_type_296->mOriginalLoadVarType->v1))));
                    come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                list$1sNodeph_reset(result_type_309->mArrayNum);
            }
            else {
                if(_if_conditional366=n_310>0,                _if_conditional366) {
                    for(                    i_311=0;                    i_311<n_310;                    i_311++                    ){
                        list$1sNodeph_delete(result_type_309->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(_if_conditional367=n_310<0,                    _if_conditional367) {
                        list$1sNodeph_reset(result_type_309->mArrayNum);
                        result_type_309->mPointerNum+=n_310;
                        if(_if_conditional368=result_type_309->mPointerNum<0,                        _if_conditional368) {
                            result_type_309->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(_if_conditional369=result_type_309->mPointerNum>0,            _if_conditional369) {
                result_type_309->mPointerNum-=list$1CVALUEph_length(array_num_297);
                if(_if_conditional370=result_type_309->mPointerNum<0,                _if_conditional370) {
                    result_type_309->mPointerNum=0;
                }
            }
        }
        __dec_obj143=come_value_304->type;
        come_value_304->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(result_type_309))));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_304->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_304));
        add_come_last_code(info,"%s;\n",come_value_304->c_value);
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
    err_msg(info,"parse_method_call is failed");
    exit(2);
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
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value358;
struct sNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value358 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1268, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value352=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value351=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1268, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
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
struct sNode* exp_319;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool quote_320;
_Bool _if_conditional384;
void* right_value360;
void* right_value361;
struct list$1sNodeph* array_num_321;
void* right_value362;
struct sNode* node2_322;
_Bool _if_conditional387;
void* right_value366;
struct sNode* node3_326;
void* right_value367;
void* right_value368;
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
struct sNode* exp_337;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value377;
struct sNode* node2_338;
_Bool _if_conditional403;
_Bool break_guard_339;
_Bool _if_conditional404;
_Bool _if_conditional405;
void* right_value378;
struct sNode* right_node_340;
void* right_value379;
void* right_value380;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value386;
struct sNode* __dec_obj159;
void* right_value387;
void* right_value388;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value393;
struct sNode* __dec_obj163;
_Bool _if_conditional427;
_Bool no_comma_343;
void* right_value394;
struct sNode* begin_344;
void* right_value395;
struct sNode* end_345;
void* right_value396;
void* right_value397;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value403;
struct sNode* __dec_obj168;
_Bool _if_conditional438;
void* right_value404;
void* right_value405;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value409;
struct sNode* __dec_obj171;
_Bool _if_conditional446;
void* right_value410;
void* right_value411;
struct sNode* _inf_value7;
struct sNullableNode* _inf_obj_value7;
void* right_value415;
struct sNode* __dec_obj174;
_Bool _if_conditional453;
_Bool _if_conditional454;
void* right_value416;
void* right_value417;
void* right_value418;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value422;
struct sNode* __dec_obj177;
void* right_value423;
char* field_name_350;
_Bool parse_method_generics_type_351;
char* p_352;
int sline_353;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value424;
char* word_354;
_Bool _if_conditional464;
_Bool _if_conditional465;
void* right_value425;
struct sNode* right_node_355;
void* right_value426;
void* right_value427;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* right_value433;
struct sNode* __dec_obj182;
_Bool _if_conditional476;
_Bool _if_conditional477;
void* right_value434;
void* right_value435;
struct sNode* __dec_obj183;
_Bool _if_conditional478;
void* right_value436;
void* right_value437;
struct sNode* __dec_obj184;
void* right_value438;
void* right_value439;
struct sNode* __dec_obj185;
void* right_value440;
void* right_value441;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* right_value446;
struct sNode* __dec_obj189;
void* right_value447;
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
            p_314=info->p;
            sline_315=info->sline;
            if(_if_conditional381=*info->p==91,            _if_conditional381) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_316=info->no_comma;
                no_output_err_317=info->no_output_err;
                no_output_come_code_318=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=expression_v13(info))));
                if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_316;
                info->no_output_err=no_output_err_317;
                info->no_output_come_code=no_output_come_code_318;
                if(_if_conditional382=*info->p==46&&*(info->p+1)==46,                _if_conditional382) {
                    range_array_313=(_Bool)1;
                }
                if(exp_319) { exp_319 = come_decrement_ref_count2(exp_319, ((struct sNode*)exp_319)->finalize, ((struct sNode*)exp_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_314;
            info->sline=sline_315;
        }
        if(_if_conditional383=range_array_313&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        _if_conditional383) {
            quote_320=*info->p==92;
            if(quote_320) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_321=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value361=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value360=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1312, "list$1sNodeph"))))))));
            come_call_finalizer3(right_value360,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value361,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            skip_pointer_attribute(info);
            node2_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=expression_v13(info))));
            if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1sNodeph_push_back(array_num_321,(struct sNode*)come_increment_ref_count(node2_322));
            if(_if_conditional387=*info->p==46&&*(info->p+1)==46,            _if_conditional387) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=expression_v13(info))));
                if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(array_num_321,(struct sNode*)come_increment_ref_count(node3_326));
                expected_next_character(93,info);
                if(node3_326) { node3_326 = come_decrement_ref_count2(node3_326, ((struct sNode*)node3_326)->finalize, ((struct sNode*)node3_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1333, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value368=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value367=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1333, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_321),quote_320,info))));
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
            if(_if_conditional397=!range_array_313&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            _if_conditional397) {
                quote_328=*info->p==92;
                if(quote_328) {
                    info->p++;
                }
                range_329=(_Bool)0;
                array_num_330=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value375=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value374=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1342, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value374,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value375,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional29=1,                _while_condtional29) {
                    range_array2_331=(_Bool)0;
                    {
                        p_332=info->p;
                        sline_333=info->sline;
                        if(_if_conditional399=*info->p==91,                        _if_conditional399) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_334=info->no_comma;
                            no_output_err_335=info->no_output_err;
                            no_output_come_code_336=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=expression_v13(info))));
                            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_334;
                            info->no_output_err=no_output_err_335;
                            info->no_output_come_code=no_output_come_code_336;
                            if(_if_conditional400=*info->p==46&&*(info->p+1)==46,                            _if_conditional400) {
                                range_array2_331=(_Bool)1;
                            }
                            if(exp_337) { exp_337 = come_decrement_ref_count2(exp_337, ((struct sNode*)exp_337)->finalize, ((struct sNode*)exp_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        info->p=p_332;
                        info->sline=sline_333;
                    }
                    if(range_array2_331) {
                        break;
                    }
                    else {
                        if(_if_conditional402=*info->p==91,                        _if_conditional402) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_338=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=expression_v13(info))));
                            if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            list$1sNodeph_push_back(array_num_330,(struct sNode*)come_increment_ref_count(node2_338));
                            if(_if_conditional403=*info->p==93,                            _if_conditional403) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_338) { node2_338 = come_decrement_ref_count2(node2_338, ((struct sNode*)node2_338)->finalize, ((struct sNode*)node2_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                break_guard_339=(_Bool)0;
                if(_if_conditional404=*info->p==63&&*(info->p+1)==63,                _if_conditional404) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    break_guard_339=(_Bool)1;
                }
                if(_if_conditional405=*info->p==61&&*(info->p+1)!=61,                _if_conditional405) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=expression_v13(info))));
                    if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1417, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value380=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value379=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1417, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_340),(struct list$1sNodeph*)come_increment_ref_count(array_num_330),quote_328,info))));
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
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value388=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value387=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1420, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_330),quote_328,break_guard_339,info))));
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
                if(_if_conditional427=*info->p==33&&*(info->p+1)==123,                _if_conditional427) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_343=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_344=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=expression_v13(info))));
                    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_343;
                    expected_next_character(44,info);
                    end_345=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=expression_v13(info))));
                    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(125,info);
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1440, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value397=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value396=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1440, "sRangeCheckNode")))),node,begin_344,end_345,info))));
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
                    if(_if_conditional438=*info->p==33&&*(info->p+1)!=61,                    _if_conditional438) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1448, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value405=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value404=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1448, "sNullCheckNode")))),node,(_Bool)0,info))));
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
                        if(_if_conditional446=*info->p==63&&*(info->p+1)==63,                        _if_conditional446) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            parse_sharp_v5(info);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1456, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullableNode*)(right_value411=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value410=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1456, "sNullableNode")))),node,info))));
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
                            if(_if_conditional453=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                            _if_conditional453) {
                                if(_if_conditional454=*info->p==46,                                _if_conditional454) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                }
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1468, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value418=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value416=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1468, "sNullCheckNode")))),((struct sNode*)(right_value417=sNode_clone(node))),(_Bool)1,info))));
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
                                parse_sharp_v5(info);
                                field_name_350=(char*)come_increment_ref_count(((char*)(right_value423=parse_word(info))));
                                right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                parse_sharp_v5(info);
                                parse_method_generics_type_351=(_Bool)0;
                                {
                                    p_352=info->p;
                                    sline_353=info->sline;
                                    if(_if_conditional462=*info->p==60,                                    _if_conditional462) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        if(_if_conditional463=xisalpha(*info->p)||*info->p==95,                                        _if_conditional463) {
                                            word_354=(char*)come_increment_ref_count(((char*)(right_value424=parse_word(info))));
                                            right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional464=is_type_name(word_354,info),                                            _if_conditional464) {
                                                parse_method_generics_type_351=(_Bool)1;
                                            }
                                            word_354 = come_decrement_ref_count2(word_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    info->p=p_352;
                                    info->sline=sline_353;
                                }
                                if(_if_conditional465=*info->p==61&&*(info->p+1)!=61,                                _if_conditional465) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    parse_sharp_v5(info);
                                    right_node_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=expression_v13(info))));
                                    if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1506, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreFieldNode*)(right_value427=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value426=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1506, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_355),(char*)come_increment_ref_count(field_name_350),info))));
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
                                    if(_if_conditional476=*info->p==40||*info->p==123||parse_method_generics_type_351||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                    _if_conditional476) {
                                        if(_if_conditional477=string_operator_equals(field_name_350,"if"),                                        _if_conditional477) {
                                            __dec_obj183=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(node)))),info))));
                                            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            if(_if_conditional478=string_operator_equals(field_name_350,"elif"),                                            _if_conditional478) {
                                                __dec_obj184=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=sNode_clone(node)))),info))));
                                                if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                __dec_obj185=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_350),info))));
                                                if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1520, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sLoadFieldNode*)(right_value441=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value440=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1520, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_350),info))));
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
                                node2_358=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info))));
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
                if(_if_conditional385=self->len==0,                _if_conditional385) {
                    litem_323=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value363=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 223, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value363,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_323->prev=((void*)0);
                    litem_323->next=((void*)0);
                    __dec_obj148=litem_323->item;
                    litem_323->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_323;
                    self->head=litem_323;
                }
                else {
                    if(_if_conditional386=self->len==1,                    _if_conditional386) {
                        litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value364=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 233, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value364,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_324->prev=self->head;
                        litem_324->next=((void*)0);
                        __dec_obj149=litem_324->item;
                        litem_324->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_324;
                        self->head->next=litem_324;
                    }
                    else {
                        litem_325=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value365=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 243, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value365,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_325->prev=self->tail;
                        litem_325->next=((void*)0);
                        __dec_obj150=litem_325->item;
                        litem_325->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_325;
                        self->tail=litem_325;
                    }
                }
                self->len++;
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
                if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional388) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional389=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional389) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional390=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional390) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
void* right_value370;
char* __dec_obj151;
_Bool _if_conditional394;
void* right_value371;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional395;
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
                    result_327->sline=self->sline;
                }
                if(_if_conditional393=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional393) {
                    __dec_obj151=result_327->sname;
                    result_327->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(self->sname))));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional394=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional394) {
                    __dec_obj152=result_327->mArrayNum;
                    result_327->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value371=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj152,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value371,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional395=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional395) {
                    __dec_obj153=result_327->mLeft;
                    result_327->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=sNode_clone(self->mLeft))));
                    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional396=self!=((void*)0),                _if_conditional396) {
                    result_327->mQuote=self->mQuote;
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
                        if(_if_conditional406=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional406) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional407=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional407) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional408=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional408) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional409=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional409) {
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
void* right_value382;
char* __dec_obj155;
_Bool _if_conditional413;
void* right_value383;
struct sNode* __dec_obj156;
_Bool _if_conditional414;
void* right_value384;
struct sNode* __dec_obj157;
_Bool _if_conditional415;
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
                            result_341->sline=self->sline;
                        }
                        if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional412) {
                            __dec_obj155=result_341->sname;
                            result_341->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional413=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional413) {
                            __dec_obj156=result_341->mLeft;
                            result_341->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(self->mLeft))));
                            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional414=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional414) {
                            __dec_obj157=result_341->mRight;
                            result_341->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(self->mRight))));
                            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional415=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional415) {
                            __dec_obj158=result_341->mArrayNum;
                            result_341->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value385=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj158,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value385,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional416=self!=((void*)0),                        _if_conditional416) {
                            result_341->mQuote=self->mQuote;
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
                        if(_if_conditional417=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional417) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional418=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional418) {
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional419=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional419) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
void* right_value390;
char* __dec_obj160;
_Bool _if_conditional423;
void* right_value391;
struct list$1sNodeph* __dec_obj161;
_Bool _if_conditional424;
_Bool _if_conditional425;
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
                            result_342->sline=self->sline;
                        }
                        if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional422) {
                            __dec_obj160=result_342->sname;
                            result_342->sname=(char*)come_increment_ref_count(((char*)(right_value390=string_clone(self->sname))));
                            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional423=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        _if_conditional423) {
                            __dec_obj161=result_342->mArrayNum;
                            result_342->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value391=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj161,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value391,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional424=self!=((void*)0),                        _if_conditional424) {
                            result_342->mBreakGuard=self->mBreakGuard;
                        }
                        if(_if_conditional425=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional425) {
                            __dec_obj162=result_342->mLeft;
                            result_342->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=sNode_clone(self->mLeft))));
                            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional426=self!=((void*)0),                        _if_conditional426) {
                            result_342->mQuote=self->mQuote;
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
                        if(_if_conditional428=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional428) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional429=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional429) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional430=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional430) {
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional431=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional431) {
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
void* right_value399;
char* __dec_obj164;
_Bool _if_conditional435;
void* right_value400;
struct sNode* __dec_obj165;
_Bool _if_conditional436;
void* right_value401;
struct sNode* __dec_obj166;
_Bool _if_conditional437;
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
                            result_346->sline=self->sline;
                        }
                        if(_if_conditional434=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional434) {
                            __dec_obj164=result_346->sname;
                            result_346->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->sname))));
                            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional435=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional435) {
                            __dec_obj165=result_346->mLeft;
                            result_346->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=sNode_clone(self->mLeft))));
                            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional436=self!=((void*)0)&&self->mBegin!=((void*)0),                        _if_conditional436) {
                            __dec_obj166=result_346->mBegin;
                            result_346->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=sNode_clone(self->mBegin))));
                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional437=self!=((void*)0)&&self->mEnd!=((void*)0),                        _if_conditional437) {
                            __dec_obj167=result_346->mEnd;
                            result_346->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=sNode_clone(self->mEnd))));
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
                                if(_if_conditional447=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional447) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional448=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional448) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
void* right_value413;
char* __dec_obj172;
_Bool _if_conditional452;
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
                                    result_348->sline=self->sline;
                                }
                                if(_if_conditional451=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional451) {
                                    __dec_obj172=result_348->sname;
                                    result_348->sname=(char*)come_increment_ref_count(((char*)(right_value413=string_clone(self->sname))));
                                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional452=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional452) {
                                    __dec_obj173=result_348->mLeft;
                                    result_348->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=sNode_clone(self->mLeft))));
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
                                    if(_if_conditional455=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional455) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional456=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional456) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
void* right_value420;
char* __dec_obj175;
_Bool _if_conditional460;
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
                                        result_349->sline=self->sline;
                                    }
                                    if(_if_conditional459=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional459) {
                                        __dec_obj175=result_349->sname;
                                        result_349->sname=(char*)come_increment_ref_count(((char*)(right_value420=string_clone(self->sname))));
                                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional460=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional460) {
                                        __dec_obj176=result_349->mLeft;
                                        result_349->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=sNode_clone(self->mLeft))));
                                        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional461=self!=((void*)0),                                    _if_conditional461) {
                                        result_349->mOnlyNullCecker=self->mOnlyNullCecker;
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
                                        if(_if_conditional466=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional466) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional467=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional467) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional468=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional468) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional469=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional469) {
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* right_value429;
char* __dec_obj178;
_Bool _if_conditional473;
void* right_value430;
struct sNode* __dec_obj179;
_Bool _if_conditional474;
void* right_value431;
struct sNode* __dec_obj180;
_Bool _if_conditional475;
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
                                            result_356->sline=self->sline;
                                        }
                                        if(_if_conditional472=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional472) {
                                            __dec_obj178=result_356->sname;
                                            result_356->sname=(char*)come_increment_ref_count(((char*)(right_value429=string_clone(self->sname))));
                                            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional473=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional473) {
                                            __dec_obj179=result_356->mLeft;
                                            result_356->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=sNode_clone(self->mLeft))));
                                            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional474=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional474) {
                                            __dec_obj180=result_356->mRight;
                                            result_356->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=sNode_clone(self->mRight))));
                                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional475=self!=((void*)0)&&self->mName!=((void*)0),                                        _if_conditional475) {
                                            __dec_obj181=result_356->mName;
                                            result_356->mName=(char*)come_increment_ref_count(((char*)(right_value432=string_clone(self->mName))));
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
                                            if(_if_conditional479=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional479) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional480=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional480) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional481=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional481) {
                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* right_value443;
char* __dec_obj186;
_Bool _if_conditional485;
void* right_value444;
struct sNode* __dec_obj187;
_Bool _if_conditional486;
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
                                                result_357->sline=self->sline;
                                            }
                                            if(_if_conditional484=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional484) {
                                                __dec_obj186=result_357->sname;
                                                result_357->sname=(char*)come_increment_ref_count(((char*)(right_value443=string_clone(self->sname))));
                                                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional485=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional485) {
                                                __dec_obj187=result_357->mLeft;
                                                result_357->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNode_clone(self->mLeft))));
                                                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional486=self!=((void*)0)&&self->mName!=((void*)0),                                            _if_conditional486) {
                                                __dec_obj188=result_357->mName;
                                                result_357->mName=(char*)come_increment_ref_count(((char*)(right_value445=string_clone(self->mName))));
                                                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result202__ = __result_obj__ = result_357;
                                            come_call_finalizer3(result_357,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result202__;
                                            come_call_finalizer3(result_357,sLoadFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

