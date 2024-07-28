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
struct sPlusPlusNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sMinusMinusNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sPlusEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMinusEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sMultEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sDivEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sModEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLShifEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sRShiftEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sXorEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sExpEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
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

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

char* sPlusPlusNode_kind(struct sPlusPlusNode* self);

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

char* sMinusMinusNode_kind(struct sMinusMinusNode* self);

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sPlusEqualNode_kind(struct sPlusEqualNode* self);

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sMinusEqualNode_kind(struct sMinusEqualNode* self);

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sMultEqualNode_kind(struct sMultEqualNode* self);

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sDivEqualNode_kind(struct sDivEqualNode* self);

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sModEqualNode_kind(struct sModEqualNode* self);

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sLShifEqualNode_kind(struct sLShifEqualNode* self);

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self);

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sXorEqualNode_kind(struct sXorEqualNode* self);

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sOrEqualNode_kind(struct sOrEqualNode* self);

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sAndEqualNode_kind(struct sAndEqualNode* self);

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sExpEqualNode_kind(struct sExpEqualNode* self);

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static void sModEqualNode_finalize(struct sModEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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










struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
struct sNode* __exception_result_var_b52;
void* right_value81;
struct sNode* __dec_obj12;
struct sPlusPlusNode* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value81 = (void*)0;
    (come_push_stackframe("19eq.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 7, 573)), "19eq.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 9, 580))->mLeft;
    ((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 9, 580))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=(come_push_stackframe("19eq.c", 9, 615),__exception_result_var_b52=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b52))));
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 10, 616))->mQuote=quote;
    __result54__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result54__;
    come_call_finalizer3(self,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sPlusPlusNode_kind(struct sPlusPlusNode* self){
void* __result_obj__;
void* right_value82;
char* __exception_result_var_b53;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
    __result55__ = __result_obj__ = (come_push_stackframe("19eq.c", 15, 625),__exception_result_var_b53=((char*)(right_value82=__builtin_string("sPlusPlusNode"))), come_pop_stackframe(), __exception_result_var_b53);
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result55__;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_48;
_Bool __exception_result_var_b54;
_Bool _if_conditional31;
_Bool __result56__;
void* right_value83;
struct CVALUE* __exception_result_var_b55;
struct CVALUE* left_value_49;
struct sType* type_56;
char* fun_name_57;
_Bool calling_fun_58;
_Bool _if_conditional51;
_Bool __exception_result_var_b56;
_Bool _if_conditional52;
void* right_value84;
struct CVALUE* come_value_59;
void* right_value85;
char* __exception_result_var_b57;
char* __dec_obj13;
struct sType* __exception_result_var_b81;
void* right_value120;
struct sType* __dec_obj37;
struct list$1CVALUEph* __exception_result_var_b82;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_48, 0, sizeof(struct sNode*));
right_value83 = (void*)0;
memset(&left_value_49, 0, sizeof(struct CVALUE*));
memset(&type_56, 0, sizeof(struct sType*));
memset(&fun_name_57, 0, sizeof(char*));
memset(&calling_fun_58, 0, sizeof(_Bool));
right_value84 = (void*)0;
memset(&come_value_59, 0, sizeof(struct CVALUE*));
right_value85 = (void*)0;
right_value120 = (void*)0;
    left_48=((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 20, 626)), "19eq.c", 20, 627))->mLeft;
    if(_if_conditional31=!(come_push_stackframe("19eq.c", 22, 628),__exception_result_var_b54=node_compile(left_48,info), come_pop_stackframe(), __exception_result_var_b54),    _if_conditional31) {
        __result56__ = (_Bool)0;
        return __result56__;
    }
    left_value_49=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 26, 629),__exception_result_var_b55=((struct CVALUE*)(right_value83=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b55));
    come_call_finalizer3(right_value83,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 27,718),dec_stack_ptr(1,info),come_pop_stackframe());
    type_56=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_49, "19eq.c", 29, 719)), "19eq.c", 29, 720))->type);
    fun_name_57="operator_plus_plus";
    if(((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 34, 721)), "19eq.c", 34, 722))->mQuote) {
        calling_fun_58=(_Bool)0;
    }
    else {
        calling_fun_58=(come_push_stackframe("19eq.c", 38, 723),__exception_result_var_b56=operator_overload_fun_self(type_56,fun_name_57,left_value_49,info), come_pop_stackframe(), __exception_result_var_b56);
    }
    if(_if_conditional52=!calling_fun_58,    _if_conditional52) {
        come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 42, "CVALUE"))));
        come_call_finalizer3(right_value84,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj13=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_59, "19eq.c", 44, 724)), "19eq.c", 44, 725))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_59, "19eq.c", 44, 724)), "19eq.c", 44, 725))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 44, 728),__exception_result_var_b57=((char*)(right_value85=xsprintf("%s++",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_49, "19eq.c", 44, 726)), "19eq.c", 44, 727))->c_value))), come_pop_stackframe(), __exception_result_var_b57));
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj37=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_59, "19eq.c", 45, 729)), "19eq.c", 45, 730))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_59, "19eq.c", 45, 729)), "19eq.c", 45, 730))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=(come_push_stackframe("19eq.c", 45, 1208),__exception_result_var_b81=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_49, "19eq.c", 45, 731)), "19eq.c", 45, 732))->type), come_pop_stackframe(), __exception_result_var_b81))));
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_59, "19eq.c", 46, 1209)), "19eq.c", 46, 1210))->var=((void*)0);
        (come_push_stackframe("19eq.c", 48, 1263),__exception_result_var_b82=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 48, 1211)), "19eq.c", 48, 1212))->stack, "19eq.c", 48, 1213)), "19eq.c", 48, 1214)),(struct CVALUE*)come_increment_ref_count(come_value_59)), come_pop_stackframe(), __exception_result_var_b82);
        (come_push_stackframe("19eq.c", 50,1266),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_59, "19eq.c", 50, 1264)), "19eq.c", 50, 1265))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_59,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result74__ = (_Bool)1;
    come_call_finalizer3(left_value_49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_56,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result74__;
    come_call_finalizer3(left_value_49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_56,sType_finalize, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional20;
struct sNode* __result52__;
void* right_value80;
struct sNode* result_47;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
struct sNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sNode*));
        if(_if_conditional20=self==(void*)0,        _if_conditional20) {
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        result_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
        if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(_if_conditional21=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 581)), "sNode_clone", 4, 582))->clone!=((void*)0),        _if_conditional21) {
            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 4, 583)), "sNode_clone", 4, 584))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 585)), "sNode_clone", 4, 586))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 585)), "sNode_clone", 4, 586))->_protocol_obj);
        }
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 5, 587)), "sNode_clone", 5, 588))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 589)), "sNode_clone", 5, 590))->finalize;
        }
        if(_if_conditional23=self!=((void*)0),        _if_conditional23) {
            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 6, 591)), "sNode_clone", 6, 592))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 593)), "sNode_clone", 6, 594))->clone;
        }
        if(_if_conditional24=self!=((void*)0),        _if_conditional24) {
            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 7, 595)), "sNode_clone", 7, 596))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 597)), "sNode_clone", 7, 598))->compile;
        }
        if(_if_conditional25=self!=((void*)0),        _if_conditional25) {
            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 8, 599)), "sNode_clone", 8, 600))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 601)), "sNode_clone", 8, 602))->sline;
        }
        if(_if_conditional26=self!=((void*)0),        _if_conditional26) {
            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 9, 603)), "sNode_clone", 9, 604))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 605)), "sNode_clone", 9, 606))->sname;
        }
        if(_if_conditional27=self!=((void*)0),        _if_conditional27) {
            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 10, 607)), "sNode_clone", 10, 608))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 609)), "sNode_clone", 10, 610))->terminated;
        }
        if(_if_conditional28=self!=((void*)0),        _if_conditional28) {
            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_47, "sNode_clone", 11, 611)), "sNode_clone", 11, 612))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 613)), "sNode_clone", 11, 614))->kind;
        }
        __result53__ = __result_obj__ = result_47;
        if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result53__;
        if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional32=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 630)), "CVALUE_finalize", 0, 631))->c_value!=((void*)0),        _if_conditional32) {
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 632)), "CVALUE_finalize", 0, 633))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 632)), "CVALUE_finalize", 0, 633))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional33=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 634)), "CVALUE_finalize", 1, 635))->type!=((void*)0),        _if_conditional33) {
            come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 636)), "CVALUE_finalize", 1, 637))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional34;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 638)), "sType_finalize", 0, 639))->mMultipleTypes!=((void*)0),                _if_conditional34) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 640)), "sType_finalize", 0, 641))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 650)), "sType_finalize", 1, 651))->mNoSolvedGenericsType!=((void*)0),                _if_conditional36) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 652)), "sType_finalize", 1, 653))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 658)), "sType_finalize", 2, 659))->mOriginalLoadVarType!=((void*)0),                _if_conditional38) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 660)), "sType_finalize", 2, 661))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 662)), "sType_finalize", 3, 663))->mGenericsName!=((void*)0),                _if_conditional39) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 664)), "sType_finalize", 3, 665))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 664)), "sType_finalize", 3, 665))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 666)), "sType_finalize", 4, 667))->mGenericsTypes!=((void*)0),                _if_conditional40) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 668)), "sType_finalize", 4, 669))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 670)), "sType_finalize", 5, 671))->mArrayNum!=((void*)0),                _if_conditional41) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 672)), "sType_finalize", 5, 673))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 682)), "sType_finalize", 6, 683))->mParamTypes!=((void*)0),                _if_conditional43) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 684)), "sType_finalize", 6, 685))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 686)), "sType_finalize", 7, 687))->mParamNames!=((void*)0),                _if_conditional44) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 688)), "sType_finalize", 7, 689))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional46=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 698)), "sType_finalize", 8, 699))->mResultType!=((void*)0),                _if_conditional46) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 700)), "sType_finalize", 8, 701))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 702)), "sType_finalize", 9, 703))->mAlignas!=((void*)0),                _if_conditional47) {
                    if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 704)), "sType_finalize", 9, 705))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 704)), "sType_finalize", 9, 705))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 704)), "sType_finalize", 9, 705))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 704)), "sType_finalize", 9, 705))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 704)), "sType_finalize", 9, 705))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 706)), "sType_finalize", 10, 707))->mSizeNum!=((void*)0),                _if_conditional48) {
                    if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 708)), "sType_finalize", 10, 709))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 708)), "sType_finalize", 10, 709))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 708)), "sType_finalize", 10, 709))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 708)), "sType_finalize", 10, 709))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 708)), "sType_finalize", 10, 709))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 710)), "sType_finalize", 11, 711))->mOriginalTypeName!=((void*)0),                _if_conditional49) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 712)), "sType_finalize", 11, 713))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 712)), "sType_finalize", 11, 713))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 714)), "sType_finalize", 12, 715))->mAsmName!=((void*)0),                _if_conditional50) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 716)), "sType_finalize", 12, 717))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 716)), "sType_finalize", 12, 717))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_50;
_Bool _while_condtional7;
struct list_item$1sTypeph* prev_it_51;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sTypeph*));
                        it_50=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 642)), "./neo-c.h", 120, 643))->head;
                        while(_while_condtional7=it_50!=((void*)0),                        _while_condtional7) {
                            prev_it_51=it_50;
                            it_50=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_50, "./neo-c.h", 123, 644)), "./neo-c.h", 123, 645))->next;
                            come_call_finalizer3(prev_it_51,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional35=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 646)), "list_item$1sTypephp_finalize", 0, 647))->item!=((void*)0),                                _if_conditional35) {
                                    come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 648)), "list_item$1sTypephp_finalize", 0, 649))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional37=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 654)), "tuple1$1sTypephp_finalize", 0, 655))->v1!=((void*)0),                        _if_conditional37) {
                            come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 656)), "tuple1$1sTypephp_finalize", 0, 657))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_52;
_Bool _while_condtional8;
struct list_item$1sNodeph* prev_it_53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sNodeph*));
                        it_52=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 674)), "./neo-c.h", 120, 675))->head;
                        while(_while_condtional8=it_52!=((void*)0),                        _while_condtional8) {
                            prev_it_53=it_52;
                            it_52=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_52, "./neo-c.h", 123, 676)), "./neo-c.h", 123, 677))->next;
                            come_call_finalizer3(prev_it_53,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional42=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 678)), "list_item$1sNodephp_finalize", 0, 679))->item!=((void*)0),                                _if_conditional42) {
                                    if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 680)), "list_item$1sNodephp_finalize", 0, 681))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 680)), "list_item$1sNodephp_finalize", 0, 681))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 680)), "list_item$1sNodephp_finalize", 0, 681))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 680)), "list_item$1sNodephp_finalize", 0, 681))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 680)), "list_item$1sNodephp_finalize", 0, 681))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_54;
_Bool _while_condtional9;
struct list_item$1charph* prev_it_55;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charph*));
                        it_54=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 690)), "./neo-c.h", 120, 691))->head;
                        while(_while_condtional9=it_54!=((void*)0),                        _while_condtional9) {
                            prev_it_55=it_54;
                            it_54=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_54, "./neo-c.h", 123, 692)), "./neo-c.h", 123, 693))->next;
                            come_call_finalizer3(prev_it_55,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional45=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 694)), "list_item$1charphp_finalize", 0, 695))->item!=((void*)0),                                _if_conditional45) {
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 696)), "list_item$1charphp_finalize", 0, 697))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 696)), "list_item$1charphp_finalize", 0, 697))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional53;
struct sType* __result57__;
void* right_value86;
struct sType* result_60;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct list$1sTypeph* __exception_result_var_b61;
void* right_value93;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional59;
struct tuple1$1sTypeph* __exception_result_var_b63;
void* right_value96;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional63;
struct tuple1$1sTypeph* __exception_result_var_b64;
void* right_value97;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional64;
char* __exception_result_var_b65;
void* right_value98;
char* __dec_obj21;
_Bool _if_conditional65;
struct list$1sTypeph* __exception_result_var_b66;
void* right_value99;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional66;
struct list$1sNodeph* __exception_result_var_b70;
void* right_value106;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct list$1sTypeph* __exception_result_var_b71;
void* right_value107;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional72;
struct list$1charph* __exception_result_var_b75;
void* right_value114;
struct list$1charph* __dec_obj31;
_Bool _if_conditional76;
struct tuple1$1sTypeph* __exception_result_var_b76;
void* right_value115;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct sNode* __exception_result_var_b77;
void* right_value116;
struct sNode* __dec_obj33;
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
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
struct sNode* __exception_result_var_b78;
void* right_value117;
struct sNode* __dec_obj34;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
char* __exception_result_var_b79;
void* right_value118;
char* __dec_obj35;
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
char* __exception_result_var_b80;
void* right_value119;
char* __dec_obj36;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct sType* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&result_60, 0, sizeof(struct sType*));
right_value93 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
            if(_if_conditional53=self==(void*)0,            _if_conditional53) {
                __result57__ = __result_obj__ = (void*)0;
                return __result57__;
            }
            result_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional54=self!=((void*)0),            _if_conditional54) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 4, 733)), "sType_clone", 4, 734))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 735)), "sType_clone", 4, 736))->mClass;
            }
            if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 737)), "sType_clone", 5, 738))->mMultipleTypes!=((void*)0),            _if_conditional55) {
                __dec_obj17=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 5, 739)), "sType_clone", 5, 740))->mMultipleTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 5, 739)), "sType_clone", 5, 740))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value93=(come_push_stackframe("sType_clone", 5, 806),__exception_result_var_b61=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 741)), "sType_clone", 5, 742))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b61))));
                come_call_finalizer3(__dec_obj17,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value93,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional59=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 811)), "sType_clone", 6, 812))->mNoSolvedGenericsType!=((void*)0),            _if_conditional59) {
                __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 6, 813)), "sType_clone", 6, 814))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 6, 813)), "sType_clone", 6, 814))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value96=(come_push_stackframe("sType_clone", 6, 828),__exception_result_var_b63=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 815)), "sType_clone", 6, 816))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b63))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value96,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional63=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 829)), "sType_clone", 7, 830))->mOriginalLoadVarType!=((void*)0),            _if_conditional63) {
                __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 7, 831)), "sType_clone", 7, 832))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 7, 831)), "sType_clone", 7, 832))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value97=(come_push_stackframe("sType_clone", 7, 835),__exception_result_var_b64=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 833)), "sType_clone", 7, 834))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b64))));
                come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value97,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional64=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 836)), "sType_clone", 8, 837))->mGenericsName!=((void*)0),            _if_conditional64) {
                __dec_obj21=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 8, 838)), "sType_clone", 8, 839))->mGenericsName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 8, 838)), "sType_clone", 8, 839))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value98=(come_push_stackframe("sType_clone", 8, 842),__exception_result_var_b65=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 840)), "sType_clone", 8, 841))->mGenericsName), come_pop_stackframe(), __exception_result_var_b65))));
                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 843)), "sType_clone", 9, 844))->mGenericsTypes!=((void*)0),            _if_conditional65) {
                __dec_obj22=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 9, 845)), "sType_clone", 9, 846))->mGenericsTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 9, 845)), "sType_clone", 9, 846))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value99=(come_push_stackframe("sType_clone", 9, 849),__exception_result_var_b66=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 847)), "sType_clone", 9, 848))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b66))));
                come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional66=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 850)), "sType_clone", 10, 851))->mArrayNum!=((void*)0),            _if_conditional66) {
                __dec_obj26=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 10, 852)), "sType_clone", 10, 853))->mArrayNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 10, 852)), "sType_clone", 10, 853))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=(come_push_stackframe("sType_clone", 10, 919),__exception_result_var_b70=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 854)), "sType_clone", 10, 855))->mArrayNum), come_pop_stackframe(), __exception_result_var_b70))));
                come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value106,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional70=self!=((void*)0),            _if_conditional70) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 11, 924)), "sType_clone", 11, 925))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 926)), "sType_clone", 11, 927))->mOmitArrayNum;
            }
            if(_if_conditional71=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 928)), "sType_clone", 12, 929))->mParamTypes!=((void*)0),            _if_conditional71) {
                __dec_obj27=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 12, 930)), "sType_clone", 12, 931))->mParamTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 12, 930)), "sType_clone", 12, 931))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=(come_push_stackframe("sType_clone", 12, 934),__exception_result_var_b71=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 932)), "sType_clone", 12, 933))->mParamTypes), come_pop_stackframe(), __exception_result_var_b71))));
                come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value107,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional72=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 935)), "sType_clone", 13, 936))->mParamNames!=((void*)0),            _if_conditional72) {
                __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 13, 937)), "sType_clone", 13, 938))->mParamNames;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 13, 937)), "sType_clone", 13, 938))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value114=(come_push_stackframe("sType_clone", 13, 1004),__exception_result_var_b75=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 939)), "sType_clone", 13, 940))->mParamNames), come_pop_stackframe(), __exception_result_var_b75))));
                come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value114,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1009)), "sType_clone", 14, 1010))->mResultType!=((void*)0),            _if_conditional76) {
                __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 14, 1011)), "sType_clone", 14, 1012))->mResultType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 14, 1011)), "sType_clone", 14, 1012))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value115=(come_push_stackframe("sType_clone", 14, 1015),__exception_result_var_b76=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1013)), "sType_clone", 14, 1014))->mResultType), come_pop_stackframe(), __exception_result_var_b76))));
                come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value115,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 15, 1016)), "sType_clone", 15, 1017))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1018)), "sType_clone", 15, 1019))->mVarArgs;
            }
            if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1020)), "sType_clone", 16, 1021))->mAlignas!=((void*)0),            _if_conditional78) {
                __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 16, 1022)), "sType_clone", 16, 1023))->mAlignas;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 16, 1022)), "sType_clone", 16, 1023))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=(come_push_stackframe("sType_clone", 16, 1026),__exception_result_var_b77=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1024)), "sType_clone", 16, 1025))->mAlignas), come_pop_stackframe(), __exception_result_var_b77))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 17, 1027)), "sType_clone", 17, 1028))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1029)), "sType_clone", 17, 1030))->mUnsigned;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 18, 1031)), "sType_clone", 18, 1032))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1033)), "sType_clone", 18, 1034))->mShort;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 19, 1035)), "sType_clone", 19, 1036))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1037)), "sType_clone", 19, 1038))->mLong;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 20, 1039)), "sType_clone", 20, 1040))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1041)), "sType_clone", 20, 1042))->mLongLong;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 21, 1043)), "sType_clone", 21, 1044))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1045)), "sType_clone", 21, 1046))->mConstant;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 22, 1047)), "sType_clone", 22, 1048))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1049)), "sType_clone", 22, 1050))->mRegister;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 23, 1051)), "sType_clone", 23, 1052))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1053)), "sType_clone", 23, 1054))->mVolatile;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 24, 1055)), "sType_clone", 24, 1056))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1057)), "sType_clone", 24, 1058))->mStatic;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 25, 1059)), "sType_clone", 25, 1060))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1061)), "sType_clone", 25, 1062))->mUniq;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 26, 1063)), "sType_clone", 26, 1064))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1065)), "sType_clone", 26, 1066))->mRecord;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 27, 1067)), "sType_clone", 27, 1068))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1069)), "sType_clone", 27, 1070))->mExtern;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 28, 1071)), "sType_clone", 28, 1072))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1073)), "sType_clone", 28, 1074))->mRestrict;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 29, 1075)), "sType_clone", 29, 1076))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1077)), "sType_clone", 29, 1078))->mImmutable;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 30, 1079)), "sType_clone", 30, 1080))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1081)), "sType_clone", 30, 1082))->mHeap;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 31, 1083)), "sType_clone", 31, 1084))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1085)), "sType_clone", 31, 1086))->mDummyHeap;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 32, 1087)), "sType_clone", 32, 1088))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1089)), "sType_clone", 32, 1090))->mDelegate;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 33, 1091)), "sType_clone", 33, 1092))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1093)), "sType_clone", 33, 1094))->mShare;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 34, 1095)), "sType_clone", 34, 1096))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1097)), "sType_clone", 34, 1098))->mClone;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 35, 1099)), "sType_clone", 35, 1100))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1101)), "sType_clone", 35, 1102))->mNoHeap;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 36, 1103)), "sType_clone", 36, 1104))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1105)), "sType_clone", 36, 1106))->mNoCallingDestructor;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 37, 1107)), "sType_clone", 37, 1108))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1109)), "sType_clone", 37, 1110))->mRefference;
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 38, 1111)), "sType_clone", 38, 1112))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1113)), "sType_clone", 38, 1114))->mException;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 39, 1115)), "sType_clone", 39, 1116))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1117)), "sType_clone", 39, 1118))->mPointerNum;
            }
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 40, 1119)), "sType_clone", 40, 1120))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1121)), "sType_clone", 40, 1122))->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 41, 1123)), "sType_clone", 41, 1124))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1125)), "sType_clone", 41, 1126))->mNoArrayPointerNum;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 42, 1127)), "sType_clone", 42, 1128))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1129)), "sType_clone", 42, 1130))->mTypedefOriginalPointerNum;
            }
            if(_if_conditional105=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1131)), "sType_clone", 43, 1132))->mSizeNum!=((void*)0),            _if_conditional105) {
                __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 43, 1133)), "sType_clone", 43, 1134))->mSizeNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 43, 1133)), "sType_clone", 43, 1134))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=(come_push_stackframe("sType_clone", 43, 1137),__exception_result_var_b78=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1135)), "sType_clone", 43, 1136))->mSizeNum), come_pop_stackframe(), __exception_result_var_b78))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 44, 1138)), "sType_clone", 44, 1139))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1140)), "sType_clone", 44, 1141))->mDynamicArrayNum;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 45, 1142)), "sType_clone", 45, 1143))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1144)), "sType_clone", 45, 1145))->mTypeOfExpression;
            }
            if(_if_conditional108=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1146)), "sType_clone", 46, 1147))->mOriginalTypeName!=((void*)0),            _if_conditional108) {
                __dec_obj35=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 46, 1148)), "sType_clone", 46, 1149))->mOriginalTypeName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 46, 1148)), "sType_clone", 46, 1149))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value118=(come_push_stackframe("sType_clone", 46, 1152),__exception_result_var_b79=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1150)), "sType_clone", 46, 1151))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b79))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 47, 1153)), "sType_clone", 47, 1154))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1155)), "sType_clone", 47, 1156))->mOriginalPointerNum;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 48, 1157)), "sType_clone", 48, 1158))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1159)), "sType_clone", 48, 1160))->mFunctionParam;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 49, 1161)), "sType_clone", 49, 1162))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1163)), "sType_clone", 49, 1164))->mAllocaValue;
            }
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 50, 1165)), "sType_clone", 50, 1166))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1167)), "sType_clone", 50, 1168))->mGenericsStruct;
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 51, 1169)), "sType_clone", 51, 1170))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1171)), "sType_clone", 51, 1172))->mSolvedGenericsName;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 52, 1173)), "sType_clone", 52, 1174))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1175)), "sType_clone", 52, 1176))->mComeMemCore;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 53, 1177)), "sType_clone", 53, 1178))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1179)), "sType_clone", 53, 1180))->mInline;
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 54, 1181)), "sType_clone", 54, 1182))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1183)), "sType_clone", 54, 1184))->mNullValue;
            }
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 55, 1185)), "sType_clone", 55, 1186))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1187)), "sType_clone", 55, 1188))->mGuardValue;
            }
            if(_if_conditional118=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1189)), "sType_clone", 56, 1190))->mAsmName!=((void*)0),            _if_conditional118) {
                __dec_obj36=((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 56, 1191)), "sType_clone", 56, 1192))->mAsmName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 56, 1191)), "sType_clone", 56, 1192))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value119=(come_push_stackframe("sType_clone", 56, 1195),__exception_result_var_b80=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1193)), "sType_clone", 56, 1194))->mAsmName), come_pop_stackframe(), __exception_result_var_b80))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 57, 1196)), "sType_clone", 57, 1197))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1198)), "sType_clone", 57, 1199))->mArrayPointerType;
            }
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 58, 1200)), "sType_clone", 58, 1201))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1202)), "sType_clone", 58, 1203))->mLambdaArray;
            }
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_60, "sType_clone", 59, 1204)), "sType_clone", 59, 1205))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1206)), "sType_clone", 59, 1207))->mNoNumberArray;
            }
            __result72__ = __result_obj__ = result_60;
            come_call_finalizer3(result_60,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result72__;
            come_call_finalizer3(result_60,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional56;
struct list$1sTypeph* __result58__;
void* right_value87;
void* right_value88;
struct list$1sTypeph* __exception_result_var_b58;
struct list$1sTypeph* result_61;
struct list_item$1sTypeph* it_62;
_Bool _while_condtional10;
struct sType* __exception_result_var_b59;
void* right_value92;
struct list$1sTypeph* __exception_result_var_b60;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&result_61, 0, sizeof(struct list$1sTypeph*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
right_value92 = (void*)0;
                    if(_if_conditional56=self==((void*)0),                    _if_conditional56) {
                        __result58__ = __result_obj__ = ((void*)0);
                        return __result58__;
                    }
                    result_61=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 751),__exception_result_var_b58=((struct list$1sTypeph*)(right_value88=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value87=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 743)), "./neo-c.h", 139, 744)))))), come_pop_stackframe(), __exception_result_var_b58));
                    come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_62=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 752)), "./neo-c.h", 141, 753))->head;
                    while(_while_condtional10=it_62!=((void*)0),                    _while_condtional10) {
                        (come_push_stackframe("./neo-c.h", 143, 803),__exception_result_var_b60=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_61, "./neo-c.h", 143, 754)), "./neo-c.h", 143, 755)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=(come_push_stackframe("./neo-c.h", 143, 802),__exception_result_var_b59=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_62, "./neo-c.h", 143, 800)), "./neo-c.h", 143, 801))->item), come_pop_stackframe(), __exception_result_var_b59))))), come_pop_stackframe(), __exception_result_var_b60);
                        come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_62=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_62, "./neo-c.h", 145, 804)), "./neo-c.h", 145, 805))->next;
                    }
                    __result61__ = __result_obj__ = result_61;
                    come_call_finalizer3(result_61,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result61__;
                    come_call_finalizer3(result_61,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 745)), "./neo-c.h", 101, 746))->head=((void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 747)), "./neo-c.h", 102, 748))->tail=((void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 749)), "./neo-c.h", 103, 750))->len=0;
                        __result59__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result59__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional57;
void* right_value89;
struct list_item$1sTypeph* litem_63;
struct sType* __dec_obj14;
_Bool _if_conditional58;
void* right_value90;
struct list_item$1sTypeph* litem_64;
struct sType* __dec_obj15;
void* right_value91;
struct list_item$1sTypeph* litem_65;
struct sType* __dec_obj16;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sTypeph*));
right_value90 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sTypeph*));
right_value91 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional57=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 756)), "./neo-c.h", 152, 757))->len==0,                            _if_conditional57) {
                                litem_63=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_63, "./neo-c.h", 155, 758)), "./neo-c.h", 155, 759))->prev=((void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_63, "./neo-c.h", 156, 760)), "./neo-c.h", 156, 761))->next=((void*)0);
                                __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_63, "./neo-c.h", 157, 762)), "./neo-c.h", 157, 763))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_63, "./neo-c.h", 157, 762)), "./neo-c.h", 157, 763))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 764)), "./neo-c.h", 159, 765))->tail=litem_63;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 766)), "./neo-c.h", 160, 767))->head=litem_63;
                            }
                            else {
                                if(_if_conditional58=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 768)), "./neo-c.h", 162, 769))->len==1,                                _if_conditional58) {
                                    litem_64=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_64, "./neo-c.h", 165, 770)), "./neo-c.h", 165, 771))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 772)), "./neo-c.h", 165, 773))->head;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_64, "./neo-c.h", 166, 774)), "./neo-c.h", 166, 775))->next=((void*)0);
                                    __dec_obj15=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_64, "./neo-c.h", 167, 776)), "./neo-c.h", 167, 777))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_64, "./neo-c.h", 167, 776)), "./neo-c.h", 167, 777))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 778)), "./neo-c.h", 169, 779))->tail=litem_64;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 780)), "./neo-c.h", 170, 781))->head, "./neo-c.h", 170, 782)), "./neo-c.h", 170, 783))->next=litem_64;
                                }
                                else {
                                    litem_65=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value91,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_65, "./neo-c.h", 175, 784)), "./neo-c.h", 175, 785))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 786)), "./neo-c.h", 175, 787))->tail;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_65, "./neo-c.h", 176, 788)), "./neo-c.h", 176, 789))->next=((void*)0);
                                    __dec_obj16=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_65, "./neo-c.h", 177, 790)), "./neo-c.h", 177, 791))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_65, "./neo-c.h", 177, 790)), "./neo-c.h", 177, 791))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 792)), "./neo-c.h", 179, 793))->tail, "./neo-c.h", 179, 794)), "./neo-c.h", 179, 795))->next=litem_65;
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 796)), "./neo-c.h", 180, 797))->tail=litem_65;
                                }
                            }
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 798)), "./neo-c.h", 183, 799))->len++;
                            __result60__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result60__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_66;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_67;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_67, 0, sizeof(struct list_item$1sTypeph*));
                    it_66=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 807)), "./neo-c.h", 120, 808))->head;
                    while(_while_condtional11=it_66!=((void*)0),                    _while_condtional11) {
                        prev_it_67=it_66;
                        it_66=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_66, "./neo-c.h", 123, 809)), "./neo-c.h", 123, 810))->next;
                        come_call_finalizer3(prev_it_67,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
struct tuple1$1sTypeph* __result62__;
void* right_value94;
struct tuple1$1sTypeph* result_68;
_Bool _if_conditional62;
struct sType* __exception_result_var_b62;
void* right_value95;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&result_68, 0, sizeof(struct tuple1$1sTypeph*));
right_value95 = (void*)0;
                    if(_if_conditional60=self==(void*)0,                    _if_conditional60) {
                        __result62__ = __result_obj__ = (void*)0;
                        return __result62__;
                    }
                    result_68=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value94,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional62=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 821)), "tuple1$1sTypephp_clone", 4, 822))->v1!=((void*)0),                    _if_conditional62) {
                        __dec_obj18=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_68, "tuple1$1sTypephp_clone", 4, 823)), "tuple1$1sTypephp_clone", 4, 824))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_68, "tuple1$1sTypephp_clone", 4, 823)), "tuple1$1sTypephp_clone", 4, 824))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 827),__exception_result_var_b62=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 825)), "tuple1$1sTypephp_clone", 4, 826))->v1), come_pop_stackframe(), __exception_result_var_b62))));
                        come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value95,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result63__ = __result_obj__ = result_68;
                    come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                    come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional61=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 817)), "tuple1$1sTypeph_finalize", 0, 818))->v1!=((void*)0),                        _if_conditional61) {
                            come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 819)), "tuple1$1sTypeph_finalize", 0, 820))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1sNodeph* __result64__;
void* right_value100;
void* right_value101;
struct list$1sNodeph* __exception_result_var_b67;
struct list$1sNodeph* result_69;
struct list_item$1sNodeph* it_70;
_Bool _while_condtional12;
struct sNode* __exception_result_var_b68;
void* right_value105;
struct list$1sNodeph* __exception_result_var_b69;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&result_69, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct list_item$1sNodeph*));
right_value105 = (void*)0;
                    if(_if_conditional67=self==((void*)0),                    _if_conditional67) {
                        __result64__ = __result_obj__ = ((void*)0);
                        return __result64__;
                    }
                    result_69=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 864),__exception_result_var_b67=((struct list$1sNodeph*)(right_value101=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value100=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 856)), "./neo-c.h", 139, 857)))))), come_pop_stackframe(), __exception_result_var_b67));
                    come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_70=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 865)), "./neo-c.h", 141, 866))->head;
                    while(_while_condtional12=it_70!=((void*)0),                    _while_condtional12) {
                        (come_push_stackframe("./neo-c.h", 143, 916),__exception_result_var_b69=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_69, "./neo-c.h", 143, 867)), "./neo-c.h", 143, 868)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=(come_push_stackframe("./neo-c.h", 143, 915),__exception_result_var_b68=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_70, "./neo-c.h", 143, 913)), "./neo-c.h", 143, 914))->item), come_pop_stackframe(), __exception_result_var_b68))))), come_pop_stackframe(), __exception_result_var_b69);
                        if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_70=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_70, "./neo-c.h", 145, 917)), "./neo-c.h", 145, 918))->next;
                    }
                    __result67__ = __result_obj__ = result_69;
                    come_call_finalizer3(result_69,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result67__;
                    come_call_finalizer3(result_69,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 858)), "./neo-c.h", 101, 859))->head=((void*)0);
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 860)), "./neo-c.h", 102, 861))->tail=((void*)0);
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 862)), "./neo-c.h", 103, 863))->len=0;
                        __result65__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result65__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional68;
void* right_value102;
struct list_item$1sNodeph* litem_71;
struct sNode* __dec_obj23;
_Bool _if_conditional69;
void* right_value103;
struct list_item$1sNodeph* litem_72;
struct sNode* __dec_obj24;
void* right_value104;
struct list_item$1sNodeph* litem_73;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1sNodeph*));
right_value104 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional68=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 869)), "./neo-c.h", 152, 870))->len==0,                            _if_conditional68) {
                                litem_71=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_71, "./neo-c.h", 155, 871)), "./neo-c.h", 155, 872))->prev=((void*)0);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_71, "./neo-c.h", 156, 873)), "./neo-c.h", 156, 874))->next=((void*)0);
                                __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_71, "./neo-c.h", 157, 875)), "./neo-c.h", 157, 876))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_71, "./neo-c.h", 157, 875)), "./neo-c.h", 157, 876))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 877)), "./neo-c.h", 159, 878))->tail=litem_71;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 879)), "./neo-c.h", 160, 880))->head=litem_71;
                            }
                            else {
                                if(_if_conditional69=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 881)), "./neo-c.h", 162, 882))->len==1,                                _if_conditional69) {
                                    litem_72=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_72, "./neo-c.h", 165, 883)), "./neo-c.h", 165, 884))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 885)), "./neo-c.h", 165, 886))->head;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_72, "./neo-c.h", 166, 887)), "./neo-c.h", 166, 888))->next=((void*)0);
                                    __dec_obj24=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_72, "./neo-c.h", 167, 889)), "./neo-c.h", 167, 890))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_72, "./neo-c.h", 167, 889)), "./neo-c.h", 167, 890))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 891)), "./neo-c.h", 169, 892))->tail=litem_72;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 893)), "./neo-c.h", 170, 894))->head, "./neo-c.h", 170, 895)), "./neo-c.h", 170, 896))->next=litem_72;
                                }
                                else {
                                    litem_73=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value104,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_73, "./neo-c.h", 175, 897)), "./neo-c.h", 175, 898))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 899)), "./neo-c.h", 175, 900))->tail;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_73, "./neo-c.h", 176, 901)), "./neo-c.h", 176, 902))->next=((void*)0);
                                    __dec_obj25=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_73, "./neo-c.h", 177, 903)), "./neo-c.h", 177, 904))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_73, "./neo-c.h", 177, 903)), "./neo-c.h", 177, 904))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 905)), "./neo-c.h", 179, 906))->tail, "./neo-c.h", 179, 907)), "./neo-c.h", 179, 908))->next=litem_73;
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 909)), "./neo-c.h", 180, 910))->tail=litem_73;
                                }
                            }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 911)), "./neo-c.h", 183, 912))->len++;
                            __result66__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result66__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_74;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_74, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_75, 0, sizeof(struct list_item$1sNodeph*));
                    it_74=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 920)), "./neo-c.h", 120, 921))->head;
                    while(_while_condtional13=it_74!=((void*)0),                    _while_condtional13) {
                        prev_it_75=it_74;
                        it_74=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_74, "./neo-c.h", 123, 922)), "./neo-c.h", 123, 923))->next;
                        come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional73;
struct list$1charph* __result68__;
void* right_value108;
void* right_value109;
struct list$1charph* __exception_result_var_b72;
struct list$1charph* result_76;
struct list_item$1charph* it_77;
_Bool _while_condtional14;
char* __exception_result_var_b73;
void* right_value113;
struct list$1charph* __exception_result_var_b74;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&result_76, 0, sizeof(struct list$1charph*));
memset(&it_77, 0, sizeof(struct list_item$1charph*));
right_value113 = (void*)0;
                    if(_if_conditional73=self==((void*)0),                    _if_conditional73) {
                        __result68__ = __result_obj__ = ((void*)0);
                        return __result68__;
                    }
                    result_76=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 949),__exception_result_var_b72=((struct list$1charph*)(right_value109=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value108=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 941)), "./neo-c.h", 139, 942)))))), come_pop_stackframe(), __exception_result_var_b72));
                    come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_77=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 950)), "./neo-c.h", 141, 951))->head;
                    while(_while_condtional14=it_77!=((void*)0),                    _while_condtional14) {
                        (come_push_stackframe("./neo-c.h", 143, 1001),__exception_result_var_b74=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_76, "./neo-c.h", 143, 952)), "./neo-c.h", 143, 953)),(char*)come_increment_ref_count(((char*)(right_value113=(come_push_stackframe("./neo-c.h", 143, 1000),__exception_result_var_b73=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_77, "./neo-c.h", 143, 998)), "./neo-c.h", 143, 999))->item), come_pop_stackframe(), __exception_result_var_b73))))), come_pop_stackframe(), __exception_result_var_b74);
                        right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_77=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_77, "./neo-c.h", 145, 1002)), "./neo-c.h", 145, 1003))->next;
                    }
                    __result71__ = __result_obj__ = result_76;
                    come_call_finalizer3(result_76,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result71__;
                    come_call_finalizer3(result_76,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 943)), "./neo-c.h", 101, 944))->head=((void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 945)), "./neo-c.h", 102, 946))->tail=((void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 947)), "./neo-c.h", 103, 948))->len=0;
                        __result69__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result69__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional74;
void* right_value110;
struct list_item$1charph* litem_78;
char* __dec_obj28;
_Bool _if_conditional75;
void* right_value111;
struct list_item$1charph* litem_79;
char* __dec_obj29;
void* right_value112;
struct list_item$1charph* litem_80;
char* __dec_obj30;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1charph*));
right_value112 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional74=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 954)), "./neo-c.h", 152, 955))->len==0,                            _if_conditional74) {
                                litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_78, "./neo-c.h", 155, 956)), "./neo-c.h", 155, 957))->prev=((void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_78, "./neo-c.h", 156, 958)), "./neo-c.h", 156, 959))->next=((void*)0);
                                __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_78, "./neo-c.h", 157, 960)), "./neo-c.h", 157, 961))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_78, "./neo-c.h", 157, 960)), "./neo-c.h", 157, 961))->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 962)), "./neo-c.h", 159, 963))->tail=litem_78;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 964)), "./neo-c.h", 160, 965))->head=litem_78;
                            }
                            else {
                                if(_if_conditional75=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 966)), "./neo-c.h", 162, 967))->len==1,                                _if_conditional75) {
                                    litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                    come_call_finalizer3(right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_79, "./neo-c.h", 165, 968)), "./neo-c.h", 165, 969))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 970)), "./neo-c.h", 165, 971))->head;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_79, "./neo-c.h", 166, 972)), "./neo-c.h", 166, 973))->next=((void*)0);
                                    __dec_obj29=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_79, "./neo-c.h", 167, 974)), "./neo-c.h", 167, 975))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_79, "./neo-c.h", 167, 974)), "./neo-c.h", 167, 975))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 976)), "./neo-c.h", 169, 977))->tail=litem_79;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 978)), "./neo-c.h", 170, 979))->head, "./neo-c.h", 170, 980)), "./neo-c.h", 170, 981))->next=litem_79;
                                }
                                else {
                                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                    come_call_finalizer3(right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_80, "./neo-c.h", 175, 982)), "./neo-c.h", 175, 983))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 984)), "./neo-c.h", 175, 985))->tail;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_80, "./neo-c.h", 176, 986)), "./neo-c.h", 176, 987))->next=((void*)0);
                                    __dec_obj30=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_80, "./neo-c.h", 177, 988)), "./neo-c.h", 177, 989))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_80, "./neo-c.h", 177, 988)), "./neo-c.h", 177, 989))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 990)), "./neo-c.h", 179, 991))->tail, "./neo-c.h", 179, 992)), "./neo-c.h", 179, 993))->next=litem_80;
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 994)), "./neo-c.h", 180, 995))->tail=litem_80;
                                }
                            }
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 996)), "./neo-c.h", 183, 997))->len++;
                            __result70__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result70__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_81;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_82;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_81, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_82, 0, sizeof(struct list_item$1charph*));
                    it_81=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1005)), "./neo-c.h", 120, 1006))->head;
                    while(_while_condtional15=it_81!=((void*)0),                    _while_condtional15) {
                        prev_it_82=it_81;
                        it_81=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_81, "./neo-c.h", 123, 1007)), "./neo-c.h", 123, 1008))->next;
                        come_call_finalizer3(prev_it_82,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional122;
void* right_value121;
struct list_item$1CVALUEph* litem_83;
struct CVALUE* __dec_obj38;
_Bool _if_conditional124;
void* right_value122;
struct list_item$1CVALUEph* litem_84;
struct CVALUE* __dec_obj39;
void* right_value123;
struct list_item$1CVALUEph* litem_85;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1CVALUEph*));
right_value122 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1CVALUEph*));
right_value123 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional122=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 222, 1215)), "./neo-c.h", 222, 1216))->len==0,            _if_conditional122) {
                litem_83=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value121=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value121,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_83, "./neo-c.h", 225, 1221)), "./neo-c.h", 225, 1222))->prev=((void*)0);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_83, "./neo-c.h", 226, 1223)), "./neo-c.h", 226, 1224))->next=((void*)0);
                __dec_obj38=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_83, "./neo-c.h", 227, 1225)), "./neo-c.h", 227, 1226))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_83, "./neo-c.h", 227, 1225)), "./neo-c.h", 227, 1226))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 229, 1227)), "./neo-c.h", 229, 1228))->tail=litem_83;
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 230, 1229)), "./neo-c.h", 230, 1230))->head=litem_83;
            }
            else {
                if(_if_conditional124=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 232, 1231)), "./neo-c.h", 232, 1232))->len==1,                _if_conditional124) {
                    litem_84=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value122=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value122,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_84, "./neo-c.h", 235, 1233)), "./neo-c.h", 235, 1234))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 235, 1235)), "./neo-c.h", 235, 1236))->head;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_84, "./neo-c.h", 236, 1237)), "./neo-c.h", 236, 1238))->next=((void*)0);
                    __dec_obj39=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_84, "./neo-c.h", 237, 1239)), "./neo-c.h", 237, 1240))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_84, "./neo-c.h", 237, 1239)), "./neo-c.h", 237, 1240))->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 239, 1241)), "./neo-c.h", 239, 1242))->tail=litem_84;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 240, 1243)), "./neo-c.h", 240, 1244))->head, "./neo-c.h", 240, 1245)), "./neo-c.h", 240, 1246))->next=litem_84;
                }
                else {
                    litem_85=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value123=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value123,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_85, "./neo-c.h", 245, 1247)), "./neo-c.h", 245, 1248))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 245, 1249)), "./neo-c.h", 245, 1250))->tail;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_85, "./neo-c.h", 246, 1251)), "./neo-c.h", 246, 1252))->next=((void*)0);
                    __dec_obj40=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_85, "./neo-c.h", 247, 1253)), "./neo-c.h", 247, 1254))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_85, "./neo-c.h", 247, 1253)), "./neo-c.h", 247, 1254))->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 249, 1255)), "./neo-c.h", 249, 1256))->tail, "./neo-c.h", 249, 1257)), "./neo-c.h", 249, 1258))->next=litem_85;
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 250, 1259)), "./neo-c.h", 250, 1260))->tail=litem_85;
                }
            }
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 253, 1261)), "./neo-c.h", 253, 1262))->len++;
            __result73__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result73__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional123;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional123=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1217)), "list_item$1CVALUEphp_finalize", 0, 1218))->item!=((void*)0),                    _if_conditional123) {
                        come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1219)), "list_item$1CVALUEphp_finalize", 0, 1220))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value124;
struct sNodeBase* __exception_result_var_b83;
struct sNode* __exception_result_var_b84;
void* right_value125;
struct sNode* __dec_obj41;
struct sMinusMinusNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
right_value125 = (void*)0;
    (come_push_stackframe("19eq.c", 61, 1269),__exception_result_var_b83=((struct sNodeBase*)(right_value124=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 61, 1267)), "19eq.c", 61, 1268))),info))), come_pop_stackframe(), __exception_result_var_b83);
    come_call_finalizer3(right_value124,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj41=((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 63, 1270))->mLeft;
    ((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 63, 1270))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=(come_push_stackframe("19eq.c", 63, 1271),__exception_result_var_b84=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b84))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 64, 1272))->mQuote=quote;
    __result75__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result75__;
    come_call_finalizer3(self,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMinusMinusNode_kind(struct sMinusMinusNode* self){
void* __result_obj__;
void* right_value126;
char* __exception_result_var_b85;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    __result76__ = __result_obj__ = (come_push_stackframe("19eq.c", 69, 1281),__exception_result_var_b85=((char*)(right_value126=__builtin_string("sMinusMinusNode"))), come_pop_stackframe(), __exception_result_var_b85);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result76__;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_86;
_Bool __exception_result_var_b86;
_Bool _if_conditional127;
_Bool __result77__;
void* right_value127;
struct CVALUE* __exception_result_var_b87;
struct CVALUE* left_value_87;
struct sType* type_88;
char* fun_name_89;
_Bool calling_fun_90;
_Bool _if_conditional128;
_Bool __exception_result_var_b88;
_Bool _if_conditional129;
void* right_value128;
struct CVALUE* come_value_91;
void* right_value129;
char* __exception_result_var_b89;
char* __dec_obj42;
struct sType* __exception_result_var_b90;
void* right_value130;
struct sType* __dec_obj43;
struct list$1CVALUEph* __exception_result_var_b91;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_86, 0, sizeof(struct sNode*));
right_value127 = (void*)0;
memset(&left_value_87, 0, sizeof(struct CVALUE*));
memset(&type_88, 0, sizeof(struct sType*));
memset(&fun_name_89, 0, sizeof(char*));
memset(&calling_fun_90, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&come_value_91, 0, sizeof(struct CVALUE*));
right_value129 = (void*)0;
right_value130 = (void*)0;
    left_86=((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 74, 1282)), "19eq.c", 74, 1283))->mLeft;
    if(_if_conditional127=!(come_push_stackframe("19eq.c", 76, 1284),__exception_result_var_b86=node_compile(left_86,info), come_pop_stackframe(), __exception_result_var_b86),    _if_conditional127) {
        __result77__ = (_Bool)0;
        return __result77__;
    }
    left_value_87=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 80, 1285),__exception_result_var_b87=((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b87));
    come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 81,1286),dec_stack_ptr(1,info),come_pop_stackframe());
    type_88=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_87, "19eq.c", 83, 1287)), "19eq.c", 83, 1288))->type);
    fun_name_89="operator_minus_minus";
    if(((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 88, 1289)), "19eq.c", 88, 1290))->mQuote) {
        calling_fun_90=(_Bool)0;
    }
    else {
        calling_fun_90=(come_push_stackframe("19eq.c", 92, 1291),__exception_result_var_b88=operator_overload_fun_self(type_88,fun_name_89,left_value_87,info), come_pop_stackframe(), __exception_result_var_b88);
    }
    if(_if_conditional129=!calling_fun_90,    _if_conditional129) {
        come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 96, "CVALUE"))));
        come_call_finalizer3(right_value128,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj42=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_91, "19eq.c", 98, 1292)), "19eq.c", 98, 1293))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_91, "19eq.c", 98, 1292)), "19eq.c", 98, 1293))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 98, 1296),__exception_result_var_b89=((char*)(right_value129=xsprintf("%s--",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_87, "19eq.c", 98, 1294)), "19eq.c", 98, 1295))->c_value))), come_pop_stackframe(), __exception_result_var_b89));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj43=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_91, "19eq.c", 99, 1297)), "19eq.c", 99, 1298))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_91, "19eq.c", 99, 1297)), "19eq.c", 99, 1298))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=(come_push_stackframe("19eq.c", 99, 1301),__exception_result_var_b90=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_87, "19eq.c", 99, 1299)), "19eq.c", 99, 1300))->type), come_pop_stackframe(), __exception_result_var_b90))));
        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_91, "19eq.c", 100, 1302)), "19eq.c", 100, 1303))->var=((void*)0);
        (come_push_stackframe("19eq.c", 102, 1308),__exception_result_var_b91=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 102, 1304)), "19eq.c", 102, 1305))->stack, "19eq.c", 102, 1306)), "19eq.c", 102, 1307)),(struct CVALUE*)come_increment_ref_count(come_value_91)), come_pop_stackframe(), __exception_result_var_b91);
        (come_push_stackframe("19eq.c", 104,1311),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_91, "19eq.c", 104, 1309)), "19eq.c", 104, 1310))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_91,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result78__ = (_Bool)1;
    come_call_finalizer3(left_value_87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer3(left_value_87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value131;
struct sNodeBase* __exception_result_var_b92;
struct sNode* __exception_result_var_b93;
void* right_value132;
struct sNode* __dec_obj44;
struct sNode* __exception_result_var_b94;
void* right_value133;
struct sNode* __dec_obj45;
struct sPlusEqualNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
    (come_push_stackframe("19eq.c", 115, 1314),__exception_result_var_b92=((struct sNodeBase*)(right_value131=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 115, 1312)), "19eq.c", 115, 1313))),info))), come_pop_stackframe(), __exception_result_var_b92);
    come_call_finalizer3(right_value131,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj44=((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 117, 1315))->mLeft;
    ((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 117, 1315))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value132=(come_push_stackframe("19eq.c", 117, 1316),__exception_result_var_b93=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b93))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj45=((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 118, 1317))->mRight;
    ((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 118, 1317))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value133=(come_push_stackframe("19eq.c", 118, 1318),__exception_result_var_b94=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b94))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, ((struct sNode*)right_value133)->finalize, ((struct sNode*)right_value133)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 119, 1319))->mQuote=quote;
    __result79__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result79__;
    come_call_finalizer3(self,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sPlusEqualNode_kind(struct sPlusEqualNode* self){
void* __result_obj__;
void* right_value134;
char* __exception_result_var_b95;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
    __result80__ = __result_obj__ = (come_push_stackframe("19eq.c", 124, 1332),__exception_result_var_b95=((char*)(right_value134=__builtin_string("sPlusEqualNode"))), come_pop_stackframe(), __exception_result_var_b95);
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_92;
_Bool __exception_result_var_b96;
_Bool _if_conditional133;
_Bool __result81__;
void* right_value135;
struct CVALUE* __exception_result_var_b97;
struct CVALUE* left_value_93;
struct sNode* right_94;
_Bool __exception_result_var_b98;
_Bool _if_conditional134;
_Bool __result82__;
void* right_value136;
struct CVALUE* __exception_result_var_b99;
struct CVALUE* right_value_95;
struct sType* type_96;
char* fun_name_97;
_Bool calling_fun_98;
_Bool _if_conditional135;
_Bool __exception_result_var_b100;
_Bool _if_conditional136;
void* right_value137;
struct CVALUE* come_value_99;
void* right_value138;
char* __exception_result_var_b101;
char* __dec_obj46;
struct sType* __exception_result_var_b102;
void* right_value139;
struct sType* __dec_obj47;
struct list$1CVALUEph* __exception_result_var_b103;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_92, 0, sizeof(struct sNode*));
right_value135 = (void*)0;
memset(&left_value_93, 0, sizeof(struct CVALUE*));
memset(&right_94, 0, sizeof(struct sNode*));
right_value136 = (void*)0;
memset(&right_value_95, 0, sizeof(struct CVALUE*));
memset(&type_96, 0, sizeof(struct sType*));
memset(&fun_name_97, 0, sizeof(char*));
memset(&calling_fun_98, 0, sizeof(_Bool));
right_value137 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
right_value138 = (void*)0;
right_value139 = (void*)0;
    left_92=((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 129, 1333)), "19eq.c", 129, 1334))->mLeft;
    if(_if_conditional133=!(come_push_stackframe("19eq.c", 131, 1335),__exception_result_var_b96=node_compile(left_92,info), come_pop_stackframe(), __exception_result_var_b96),    _if_conditional133) {
        __result81__ = (_Bool)0;
        return __result81__;
    }
    left_value_93=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 135, 1336),__exception_result_var_b97=((struct CVALUE*)(right_value135=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b97));
    come_call_finalizer3(right_value135,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 136,1337),dec_stack_ptr(1,info),come_pop_stackframe());
    right_94=((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 138, 1338)), "19eq.c", 138, 1339))->mRight;
    if(_if_conditional134=!(come_push_stackframe("19eq.c", 140, 1340),__exception_result_var_b98=node_compile(right_94,info), come_pop_stackframe(), __exception_result_var_b98),    _if_conditional134) {
        __result82__ = (_Bool)0;
        come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result82__;
    }
    right_value_95=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 144, 1341),__exception_result_var_b99=((struct CVALUE*)(right_value136=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b99));
    come_call_finalizer3(right_value136,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 145,1342),dec_stack_ptr(1,info),come_pop_stackframe());
    type_96=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_93, "19eq.c", 147, 1343)), "19eq.c", 147, 1344))->type);
    fun_name_97="operator_plus_equal";
    if(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 151, 1345)), "19eq.c", 151, 1346))->mQuote) {
        calling_fun_98=(_Bool)0;
    }
    else {
        calling_fun_98=(come_push_stackframe("19eq.c", 155, 1347),__exception_result_var_b100=operator_overload_fun(type_96,fun_name_97,left_value_93,right_value_95,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b100);
    }
    if(_if_conditional136=!calling_fun_98,    _if_conditional136) {
        come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 159, "CVALUE"))));
        come_call_finalizer3(right_value137,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj46=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "19eq.c", 161, 1348)), "19eq.c", 161, 1349))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "19eq.c", 161, 1348)), "19eq.c", 161, 1349))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 161, 1354),__exception_result_var_b101=((char*)(right_value138=xsprintf("%s+=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_93, "19eq.c", 161, 1350)), "19eq.c", 161, 1351))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_95, "19eq.c", 161, 1352)), "19eq.c", 161, 1353))->c_value))), come_pop_stackframe(), __exception_result_var_b101));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj47=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "19eq.c", 162, 1355)), "19eq.c", 162, 1356))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "19eq.c", 162, 1355)), "19eq.c", 162, 1356))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(come_push_stackframe("19eq.c", 162, 1359),__exception_result_var_b102=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_93, "19eq.c", 162, 1357)), "19eq.c", 162, 1358))->type), come_pop_stackframe(), __exception_result_var_b102))));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "19eq.c", 163, 1360)), "19eq.c", 163, 1361))->var=((void*)0);
        (come_push_stackframe("19eq.c", 165, 1366),__exception_result_var_b103=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 165, 1362)), "19eq.c", 165, 1363))->stack, "19eq.c", 165, 1364)), "19eq.c", 165, 1365)),(struct CVALUE*)come_increment_ref_count(come_value_99)), come_pop_stackframe(), __exception_result_var_b103);
        (come_push_stackframe("19eq.c", 167,1369),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "19eq.c", 167, 1367)), "19eq.c", 167, 1368))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result83__ = (_Bool)1;
    come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value140;
struct sNodeBase* __exception_result_var_b104;
struct sNode* __exception_result_var_b105;
void* right_value141;
struct sNode* __dec_obj48;
struct sNode* __exception_result_var_b106;
void* right_value142;
struct sNode* __dec_obj49;
struct sMinusEqualNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
    (come_push_stackframe("19eq.c", 178, 1372),__exception_result_var_b104=((struct sNodeBase*)(right_value140=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 178, 1370)), "19eq.c", 178, 1371))),info))), come_pop_stackframe(), __exception_result_var_b104);
    come_call_finalizer3(right_value140,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 180, 1373))->mQuote=quote;
    __dec_obj48=((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 182, 1374))->mLeft;
    ((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 182, 1374))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=(come_push_stackframe("19eq.c", 182, 1375),__exception_result_var_b105=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b105))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj49=((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 183, 1376))->mRight;
    ((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 183, 1376))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=(come_push_stackframe("19eq.c", 183, 1377),__exception_result_var_b106=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b106))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result84__;
    come_call_finalizer3(self,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMinusEqualNode_kind(struct sMinusEqualNode* self){
void* __result_obj__;
void* right_value143;
char* __exception_result_var_b107;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    __result85__ = __result_obj__ = (come_push_stackframe("19eq.c", 188, 1390),__exception_result_var_b107=((char*)(right_value143=__builtin_string("sPlusEqualNode"))), come_pop_stackframe(), __exception_result_var_b107);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_100;
_Bool __exception_result_var_b108;
_Bool _if_conditional140;
_Bool __result86__;
void* right_value144;
struct CVALUE* __exception_result_var_b109;
struct CVALUE* left_value_101;
struct sNode* right_102;
_Bool __exception_result_var_b110;
_Bool _if_conditional141;
_Bool __result87__;
void* right_value145;
struct CVALUE* __exception_result_var_b111;
struct CVALUE* right_value_103;
struct sType* type_104;
char* fun_name_105;
_Bool calling_fun_106;
_Bool _if_conditional142;
_Bool __exception_result_var_b112;
_Bool _if_conditional143;
void* right_value146;
struct CVALUE* come_value_107;
void* right_value147;
char* __exception_result_var_b113;
char* __dec_obj50;
struct sType* __exception_result_var_b114;
void* right_value148;
struct sType* __dec_obj51;
struct list$1CVALUEph* __exception_result_var_b115;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_100, 0, sizeof(struct sNode*));
right_value144 = (void*)0;
memset(&left_value_101, 0, sizeof(struct CVALUE*));
memset(&right_102, 0, sizeof(struct sNode*));
right_value145 = (void*)0;
memset(&right_value_103, 0, sizeof(struct CVALUE*));
memset(&type_104, 0, sizeof(struct sType*));
memset(&fun_name_105, 0, sizeof(char*));
memset(&calling_fun_106, 0, sizeof(_Bool));
right_value146 = (void*)0;
memset(&come_value_107, 0, sizeof(struct CVALUE*));
right_value147 = (void*)0;
right_value148 = (void*)0;
    left_100=((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 193, 1391)), "19eq.c", 193, 1392))->mLeft;
    if(_if_conditional140=!(come_push_stackframe("19eq.c", 195, 1393),__exception_result_var_b108=node_compile(left_100,info), come_pop_stackframe(), __exception_result_var_b108),    _if_conditional140) {
        __result86__ = (_Bool)0;
        return __result86__;
    }
    left_value_101=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 199, 1394),__exception_result_var_b109=((struct CVALUE*)(right_value144=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b109));
    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 200,1395),dec_stack_ptr(1,info),come_pop_stackframe());
    right_102=((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 202, 1396)), "19eq.c", 202, 1397))->mRight;
    if(_if_conditional141=!(come_push_stackframe("19eq.c", 204, 1398),__exception_result_var_b110=node_compile(right_102,info), come_pop_stackframe(), __exception_result_var_b110),    _if_conditional141) {
        __result87__ = (_Bool)0;
        come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result87__;
    }
    right_value_103=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 208, 1399),__exception_result_var_b111=((struct CVALUE*)(right_value145=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b111));
    come_call_finalizer3(right_value145,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 209,1400),dec_stack_ptr(1,info),come_pop_stackframe());
    type_104=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_101, "19eq.c", 211, 1401)), "19eq.c", 211, 1402))->type);
    fun_name_105="operator_minus_equal";
    if(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 215, 1403)), "19eq.c", 215, 1404))->mQuote) {
        calling_fun_106=(_Bool)0;
    }
    else {
        calling_fun_106=(come_push_stackframe("19eq.c", 219, 1405),__exception_result_var_b112=operator_overload_fun(type_104,fun_name_105,left_value_101,right_value_103,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b112);
    }
    if(_if_conditional143=!calling_fun_106,    _if_conditional143) {
        come_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 223, "CVALUE"))));
        come_call_finalizer3(right_value146,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj50=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_107, "19eq.c", 225, 1406)), "19eq.c", 225, 1407))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_107, "19eq.c", 225, 1406)), "19eq.c", 225, 1407))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 225, 1412),__exception_result_var_b113=((char*)(right_value147=xsprintf("%s-=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_101, "19eq.c", 225, 1408)), "19eq.c", 225, 1409))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_103, "19eq.c", 225, 1410)), "19eq.c", 225, 1411))->c_value))), come_pop_stackframe(), __exception_result_var_b113));
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj51=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_107, "19eq.c", 226, 1413)), "19eq.c", 226, 1414))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_107, "19eq.c", 226, 1413)), "19eq.c", 226, 1414))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(come_push_stackframe("19eq.c", 226, 1417),__exception_result_var_b114=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_101, "19eq.c", 226, 1415)), "19eq.c", 226, 1416))->type), come_pop_stackframe(), __exception_result_var_b114))));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_107, "19eq.c", 227, 1418)), "19eq.c", 227, 1419))->var=((void*)0);
        (come_push_stackframe("19eq.c", 229, 1424),__exception_result_var_b115=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 229, 1420)), "19eq.c", 229, 1421))->stack, "19eq.c", 229, 1422)), "19eq.c", 229, 1423)),(struct CVALUE*)come_increment_ref_count(come_value_107)), come_pop_stackframe(), __exception_result_var_b115);
        (come_push_stackframe("19eq.c", 231,1427),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_107, "19eq.c", 231, 1425)), "19eq.c", 231, 1426))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result88__ = (_Bool)1;
    come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_104,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_104,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value149;
struct sNodeBase* __exception_result_var_b116;
struct sNode* __exception_result_var_b117;
void* right_value150;
struct sNode* __dec_obj52;
struct sNode* __exception_result_var_b118;
void* right_value151;
struct sNode* __dec_obj53;
struct sMultEqualNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
    (come_push_stackframe("19eq.c", 242, 1430),__exception_result_var_b116=((struct sNodeBase*)(right_value149=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "19eq.c", 242, 1428)), "19eq.c", 242, 1429))),info))), come_pop_stackframe(), __exception_result_var_b116);
    come_call_finalizer3(right_value149,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sMultEqualNode*)come_null_check(self, "19eq.c", 244, 1431))->mQuote=quote;
    __dec_obj52=((struct sMultEqualNode*)come_null_check(self, "19eq.c", 246, 1432))->mLeft;
    ((struct sMultEqualNode*)come_null_check(self, "19eq.c", 246, 1432))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=(come_push_stackframe("19eq.c", 246, 1433),__exception_result_var_b117=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b117))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value150) { right_value150 = come_decrement_ref_count2(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj53=((struct sMultEqualNode*)come_null_check(self, "19eq.c", 247, 1434))->mRight;
    ((struct sMultEqualNode*)come_null_check(self, "19eq.c", 247, 1434))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value151=(come_push_stackframe("19eq.c", 247, 1435),__exception_result_var_b118=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b118))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value151) { right_value151 = come_decrement_ref_count2(right_value151, ((struct sNode*)right_value151)->finalize, ((struct sNode*)right_value151)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result89__ = __result_obj__ = self;
    come_call_finalizer3(self,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result89__;
    come_call_finalizer3(self,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMultEqualNode_kind(struct sMultEqualNode* self){
void* __result_obj__;
void* right_value152;
char* __exception_result_var_b119;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    __result90__ = __result_obj__ = (come_push_stackframe("19eq.c", 252, 1448),__exception_result_var_b119=((char*)(right_value152=__builtin_string("sMultEqualNode"))), come_pop_stackframe(), __exception_result_var_b119);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_108;
_Bool __exception_result_var_b120;
_Bool _if_conditional147;
_Bool __result91__;
void* right_value153;
struct CVALUE* __exception_result_var_b121;
struct CVALUE* left_value_109;
struct sNode* right_110;
_Bool __exception_result_var_b122;
_Bool _if_conditional148;
_Bool __result92__;
void* right_value154;
struct CVALUE* __exception_result_var_b123;
struct CVALUE* right_value_111;
struct sType* type_112;
char* fun_name_113;
_Bool calling_fun_114;
_Bool _if_conditional149;
_Bool __exception_result_var_b124;
_Bool _if_conditional150;
void* right_value155;
struct CVALUE* come_value_115;
void* right_value156;
char* __exception_result_var_b125;
char* __dec_obj54;
struct sType* __exception_result_var_b126;
void* right_value157;
struct sType* __dec_obj55;
struct list$1CVALUEph* __exception_result_var_b127;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_108, 0, sizeof(struct sNode*));
right_value153 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
memset(&right_110, 0, sizeof(struct sNode*));
right_value154 = (void*)0;
memset(&right_value_111, 0, sizeof(struct CVALUE*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&fun_name_113, 0, sizeof(char*));
memset(&calling_fun_114, 0, sizeof(_Bool));
right_value155 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value156 = (void*)0;
right_value157 = (void*)0;
    left_108=((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "19eq.c", 257, 1449)), "19eq.c", 257, 1450))->mLeft;
    if(_if_conditional147=!(come_push_stackframe("19eq.c", 259, 1451),__exception_result_var_b120=node_compile(left_108,info), come_pop_stackframe(), __exception_result_var_b120),    _if_conditional147) {
        __result91__ = (_Bool)0;
        return __result91__;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 263, 1452),__exception_result_var_b121=((struct CVALUE*)(right_value153=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b121));
    come_call_finalizer3(right_value153,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 264,1453),dec_stack_ptr(1,info),come_pop_stackframe());
    right_110=((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "19eq.c", 266, 1454)), "19eq.c", 266, 1455))->mRight;
    if(_if_conditional148=!(come_push_stackframe("19eq.c", 268, 1456),__exception_result_var_b122=node_compile(right_110,info), come_pop_stackframe(), __exception_result_var_b122),    _if_conditional148) {
        __result92__ = (_Bool)0;
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result92__;
    }
    right_value_111=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 272, 1457),__exception_result_var_b123=((struct CVALUE*)(right_value154=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b123));
    come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 273,1458),dec_stack_ptr(1,info),come_pop_stackframe());
    type_112=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "19eq.c", 275, 1459)), "19eq.c", 275, 1460))->type);
    fun_name_113="operator_mult_equal";
    if(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "19eq.c", 279, 1461)), "19eq.c", 279, 1462))->mQuote) {
        calling_fun_114=(_Bool)0;
    }
    else {
        calling_fun_114=(come_push_stackframe("19eq.c", 283, 1463),__exception_result_var_b124=operator_overload_fun(type_112,fun_name_113,left_value_109,right_value_111,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b124);
    }
    if(_if_conditional150=!calling_fun_114,    _if_conditional150) {
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value155=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 287, "CVALUE"))));
        come_call_finalizer3(right_value155,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj54=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_115, "19eq.c", 289, 1464)), "19eq.c", 289, 1465))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_115, "19eq.c", 289, 1464)), "19eq.c", 289, 1465))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 289, 1470),__exception_result_var_b125=((char*)(right_value156=xsprintf("%s*=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "19eq.c", 289, 1466)), "19eq.c", 289, 1467))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_111, "19eq.c", 289, 1468)), "19eq.c", 289, 1469))->c_value))), come_pop_stackframe(), __exception_result_var_b125));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj55=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_115, "19eq.c", 290, 1471)), "19eq.c", 290, 1472))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_115, "19eq.c", 290, 1471)), "19eq.c", 290, 1472))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(come_push_stackframe("19eq.c", 290, 1475),__exception_result_var_b126=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_109, "19eq.c", 290, 1473)), "19eq.c", 290, 1474))->type), come_pop_stackframe(), __exception_result_var_b126))));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_115, "19eq.c", 291, 1476)), "19eq.c", 291, 1477))->var=((void*)0);
        (come_push_stackframe("19eq.c", 293, 1482),__exception_result_var_b127=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 293, 1478)), "19eq.c", 293, 1479))->stack, "19eq.c", 293, 1480)), "19eq.c", 293, 1481)),(struct CVALUE*)come_increment_ref_count(come_value_115)), come_pop_stackframe(), __exception_result_var_b127);
        (come_push_stackframe("19eq.c", 295,1485),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_115, "19eq.c", 295, 1483)), "19eq.c", 295, 1484))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result93__ = (_Bool)1;
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_112,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result93__;
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_112,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value158;
struct sNodeBase* __exception_result_var_b128;
struct sNode* __exception_result_var_b129;
void* right_value159;
struct sNode* __dec_obj56;
struct sNode* __exception_result_var_b130;
void* right_value160;
struct sNode* __dec_obj57;
struct sDivEqualNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
    (come_push_stackframe("19eq.c", 306, 1488),__exception_result_var_b128=((struct sNodeBase*)(right_value158=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "19eq.c", 306, 1486)), "19eq.c", 306, 1487))),info))), come_pop_stackframe(), __exception_result_var_b128);
    come_call_finalizer3(right_value158,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sDivEqualNode*)come_null_check(self, "19eq.c", 308, 1489))->mQuote=quote;
    __dec_obj56=((struct sDivEqualNode*)come_null_check(self, "19eq.c", 310, 1490))->mLeft;
    ((struct sDivEqualNode*)come_null_check(self, "19eq.c", 310, 1490))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=(come_push_stackframe("19eq.c", 310, 1491),__exception_result_var_b129=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b129))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value159) { right_value159 = come_decrement_ref_count2(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj57=((struct sDivEqualNode*)come_null_check(self, "19eq.c", 311, 1492))->mRight;
    ((struct sDivEqualNode*)come_null_check(self, "19eq.c", 311, 1492))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value160=(come_push_stackframe("19eq.c", 311, 1493),__exception_result_var_b130=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b130))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result94__;
    come_call_finalizer3(self,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDivEqualNode_kind(struct sDivEqualNode* self){
void* __result_obj__;
void* right_value161;
char* __exception_result_var_b131;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    __result95__ = __result_obj__ = (come_push_stackframe("19eq.c", 316, 1506),__exception_result_var_b131=((char*)(right_value161=__builtin_string("sDivEqualNode"))), come_pop_stackframe(), __exception_result_var_b131);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_116;
_Bool __exception_result_var_b132;
_Bool _if_conditional154;
_Bool __result96__;
void* right_value162;
struct CVALUE* __exception_result_var_b133;
struct CVALUE* left_value_117;
struct sNode* right_118;
_Bool __exception_result_var_b134;
_Bool _if_conditional155;
_Bool __result97__;
void* right_value163;
struct CVALUE* __exception_result_var_b135;
struct CVALUE* right_value_119;
struct sType* type_120;
char* fun_name_121;
_Bool calling_fun_122;
_Bool _if_conditional156;
_Bool __exception_result_var_b136;
_Bool _if_conditional157;
void* right_value164;
struct CVALUE* come_value_123;
void* right_value165;
char* __exception_result_var_b137;
char* __dec_obj58;
struct sType* __exception_result_var_b138;
void* right_value166;
struct sType* __dec_obj59;
struct list$1CVALUEph* __exception_result_var_b139;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_116, 0, sizeof(struct sNode*));
right_value162 = (void*)0;
memset(&left_value_117, 0, sizeof(struct CVALUE*));
memset(&right_118, 0, sizeof(struct sNode*));
right_value163 = (void*)0;
memset(&right_value_119, 0, sizeof(struct CVALUE*));
memset(&type_120, 0, sizeof(struct sType*));
memset(&fun_name_121, 0, sizeof(char*));
memset(&calling_fun_122, 0, sizeof(_Bool));
right_value164 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
right_value165 = (void*)0;
right_value166 = (void*)0;
    left_116=((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "19eq.c", 321, 1507)), "19eq.c", 321, 1508))->mLeft;
    if(_if_conditional154=!(come_push_stackframe("19eq.c", 323, 1509),__exception_result_var_b132=node_compile(left_116,info), come_pop_stackframe(), __exception_result_var_b132),    _if_conditional154) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    left_value_117=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 327, 1510),__exception_result_var_b133=((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b133));
    come_call_finalizer3(right_value162,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 328,1511),dec_stack_ptr(1,info),come_pop_stackframe());
    right_118=((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "19eq.c", 330, 1512)), "19eq.c", 330, 1513))->mRight;
    if(_if_conditional155=!(come_push_stackframe("19eq.c", 332, 1514),__exception_result_var_b134=node_compile(right_118,info), come_pop_stackframe(), __exception_result_var_b134),    _if_conditional155) {
        __result97__ = (_Bool)0;
        come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result97__;
    }
    right_value_119=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 336, 1515),__exception_result_var_b135=((struct CVALUE*)(right_value163=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b135));
    come_call_finalizer3(right_value163,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 337,1516),dec_stack_ptr(1,info),come_pop_stackframe());
    type_120=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "19eq.c", 339, 1517)), "19eq.c", 339, 1518))->type);
    fun_name_121="operator_div_equal";
    if(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "19eq.c", 343, 1519)), "19eq.c", 343, 1520))->mQuote) {
        calling_fun_122=(_Bool)0;
    }
    else {
        calling_fun_122=(come_push_stackframe("19eq.c", 347, 1521),__exception_result_var_b136=operator_overload_fun(type_120,fun_name_121,left_value_117,right_value_119,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b136);
    }
    if(_if_conditional157=!calling_fun_122,    _if_conditional157) {
        come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 351, "CVALUE"))));
        come_call_finalizer3(right_value164,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj58=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_123, "19eq.c", 353, 1522)), "19eq.c", 353, 1523))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_123, "19eq.c", 353, 1522)), "19eq.c", 353, 1523))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 353, 1528),__exception_result_var_b137=((char*)(right_value165=xsprintf("%s/=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "19eq.c", 353, 1524)), "19eq.c", 353, 1525))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_119, "19eq.c", 353, 1526)), "19eq.c", 353, 1527))->c_value))), come_pop_stackframe(), __exception_result_var_b137));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj59=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_123, "19eq.c", 354, 1529)), "19eq.c", 354, 1530))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_123, "19eq.c", 354, 1529)), "19eq.c", 354, 1530))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=(come_push_stackframe("19eq.c", 354, 1533),__exception_result_var_b138=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "19eq.c", 354, 1531)), "19eq.c", 354, 1532))->type), come_pop_stackframe(), __exception_result_var_b138))));
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_123, "19eq.c", 355, 1534)), "19eq.c", 355, 1535))->var=((void*)0);
        (come_push_stackframe("19eq.c", 357, 1540),__exception_result_var_b139=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 357, 1536)), "19eq.c", 357, 1537))->stack, "19eq.c", 357, 1538)), "19eq.c", 357, 1539)),(struct CVALUE*)come_increment_ref_count(come_value_123)), come_pop_stackframe(), __exception_result_var_b139);
        (come_push_stackframe("19eq.c", 359,1543),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_123, "19eq.c", 359, 1541)), "19eq.c", 359, 1542))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result98__ = (_Bool)1;
    come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value167;
struct sNodeBase* __exception_result_var_b140;
struct sNode* __exception_result_var_b141;
void* right_value168;
struct sNode* __dec_obj60;
struct sNode* __exception_result_var_b142;
void* right_value169;
struct sNode* __dec_obj61;
struct sModEqualNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
    (come_push_stackframe("19eq.c", 370, 1546),__exception_result_var_b140=((struct sNodeBase*)(right_value167=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "19eq.c", 370, 1544)), "19eq.c", 370, 1545))),info))), come_pop_stackframe(), __exception_result_var_b140);
    come_call_finalizer3(right_value167,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sModEqualNode*)come_null_check(self, "19eq.c", 372, 1547))->mQuote=quote;
    __dec_obj60=((struct sModEqualNode*)come_null_check(self, "19eq.c", 374, 1548))->mLeft;
    ((struct sModEqualNode*)come_null_check(self, "19eq.c", 374, 1548))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=(come_push_stackframe("19eq.c", 374, 1549),__exception_result_var_b141=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b141))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value168) { right_value168 = come_decrement_ref_count2(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj61=((struct sModEqualNode*)come_null_check(self, "19eq.c", 375, 1550))->mRight;
    ((struct sModEqualNode*)come_null_check(self, "19eq.c", 375, 1550))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=(come_push_stackframe("19eq.c", 375, 1551),__exception_result_var_b142=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b142))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result99__ = __result_obj__ = self;
    come_call_finalizer3(self,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result99__;
    come_call_finalizer3(self,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sModEqualNode_kind(struct sModEqualNode* self){
void* __result_obj__;
void* right_value170;
char* __exception_result_var_b143;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
    __result100__ = __result_obj__ = (come_push_stackframe("19eq.c", 380, 1564),__exception_result_var_b143=((char*)(right_value170=__builtin_string("sModEqualNode"))), come_pop_stackframe(), __exception_result_var_b143);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result100__;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_124;
_Bool __exception_result_var_b144;
_Bool _if_conditional161;
_Bool __result101__;
void* right_value171;
struct CVALUE* __exception_result_var_b145;
struct CVALUE* left_value_125;
struct sNode* right_126;
_Bool __exception_result_var_b146;
_Bool _if_conditional162;
_Bool __result102__;
void* right_value172;
struct CVALUE* __exception_result_var_b147;
struct CVALUE* right_value_127;
struct sType* type_128;
char* fun_name_129;
_Bool calling_fun_130;
_Bool _if_conditional163;
_Bool __exception_result_var_b148;
_Bool _if_conditional164;
void* right_value173;
struct CVALUE* come_value_131;
void* right_value174;
char* __exception_result_var_b149;
char* __dec_obj62;
struct sType* __exception_result_var_b150;
void* right_value175;
struct sType* __dec_obj63;
struct list$1CVALUEph* __exception_result_var_b151;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_124, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&left_value_125, 0, sizeof(struct CVALUE*));
memset(&right_126, 0, sizeof(struct sNode*));
right_value172 = (void*)0;
memset(&right_value_127, 0, sizeof(struct CVALUE*));
memset(&type_128, 0, sizeof(struct sType*));
memset(&fun_name_129, 0, sizeof(char*));
memset(&calling_fun_130, 0, sizeof(_Bool));
right_value173 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
right_value174 = (void*)0;
right_value175 = (void*)0;
    left_124=((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "19eq.c", 385, 1565)), "19eq.c", 385, 1566))->mLeft;
    if(_if_conditional161=!(come_push_stackframe("19eq.c", 387, 1567),__exception_result_var_b144=node_compile(left_124,info), come_pop_stackframe(), __exception_result_var_b144),    _if_conditional161) {
        __result101__ = (_Bool)0;
        return __result101__;
    }
    left_value_125=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 391, 1568),__exception_result_var_b145=((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b145));
    come_call_finalizer3(right_value171,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 392,1569),dec_stack_ptr(1,info),come_pop_stackframe());
    right_126=((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "19eq.c", 394, 1570)), "19eq.c", 394, 1571))->mRight;
    if(_if_conditional162=!(come_push_stackframe("19eq.c", 396, 1572),__exception_result_var_b146=node_compile(right_126,info), come_pop_stackframe(), __exception_result_var_b146),    _if_conditional162) {
        __result102__ = (_Bool)0;
        come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result102__;
    }
    right_value_127=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 400, 1573),__exception_result_var_b147=((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b147));
    come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 401,1574),dec_stack_ptr(1,info),come_pop_stackframe());
    type_128=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_125, "19eq.c", 403, 1575)), "19eq.c", 403, 1576))->type);
    fun_name_129="operator_mod_equal";
    if(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "19eq.c", 407, 1577)), "19eq.c", 407, 1578))->mQuote) {
        calling_fun_130=(_Bool)0;
    }
    else {
        calling_fun_130=(come_push_stackframe("19eq.c", 411, 1579),__exception_result_var_b148=operator_overload_fun(type_128,fun_name_129,left_value_125,right_value_127,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b148);
    }
    if(_if_conditional164=!calling_fun_130,    _if_conditional164) {
        come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 415, "CVALUE"))));
        come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj62=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_131, "19eq.c", 417, 1580)), "19eq.c", 417, 1581))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_131, "19eq.c", 417, 1580)), "19eq.c", 417, 1581))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 417, 1586),__exception_result_var_b149=((char*)(right_value174=xsprintf("%s%%=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_125, "19eq.c", 417, 1582)), "19eq.c", 417, 1583))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_127, "19eq.c", 417, 1584)), "19eq.c", 417, 1585))->c_value))), come_pop_stackframe(), __exception_result_var_b149));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj63=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_131, "19eq.c", 418, 1587)), "19eq.c", 418, 1588))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_131, "19eq.c", 418, 1587)), "19eq.c", 418, 1588))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(come_push_stackframe("19eq.c", 418, 1591),__exception_result_var_b150=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_125, "19eq.c", 418, 1589)), "19eq.c", 418, 1590))->type), come_pop_stackframe(), __exception_result_var_b150))));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_131, "19eq.c", 419, 1592)), "19eq.c", 419, 1593))->var=((void*)0);
        (come_push_stackframe("19eq.c", 421, 1598),__exception_result_var_b151=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 421, 1594)), "19eq.c", 421, 1595))->stack, "19eq.c", 421, 1596)), "19eq.c", 421, 1597)),(struct CVALUE*)come_increment_ref_count(come_value_131)), come_pop_stackframe(), __exception_result_var_b151);
        (come_push_stackframe("19eq.c", 423,1601),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_131, "19eq.c", 423, 1599)), "19eq.c", 423, 1600))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result103__ = (_Bool)1;
    come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result103__;
    come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value176;
struct sNodeBase* __exception_result_var_b152;
struct sNode* __exception_result_var_b153;
void* right_value177;
struct sNode* __dec_obj64;
struct sNode* __exception_result_var_b154;
void* right_value178;
struct sNode* __dec_obj65;
struct sLShifEqualNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
    (come_push_stackframe("19eq.c", 434, 1604),__exception_result_var_b152=((struct sNodeBase*)(right_value176=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 434, 1602)), "19eq.c", 434, 1603))),info))), come_pop_stackframe(), __exception_result_var_b152);
    come_call_finalizer3(right_value176,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 436, 1605))->mQuote=quote;
    __dec_obj64=((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 438, 1606))->mLeft;
    ((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 438, 1606))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=(come_push_stackframe("19eq.c", 438, 1607),__exception_result_var_b153=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b153))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj65=((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 439, 1608))->mRight;
    ((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 439, 1608))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=(come_push_stackframe("19eq.c", 439, 1609),__exception_result_var_b154=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b154))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result104__ = __result_obj__ = self;
    come_call_finalizer3(self,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result104__;
    come_call_finalizer3(self,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLShifEqualNode_kind(struct sLShifEqualNode* self){
void* __result_obj__;
void* right_value179;
char* __exception_result_var_b155;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result105__ = __result_obj__ = (come_push_stackframe("19eq.c", 444, 1622),__exception_result_var_b155=((char*)(right_value179=__builtin_string("sLShifEqualNode"))), come_pop_stackframe(), __exception_result_var_b155);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_132;
_Bool __exception_result_var_b156;
_Bool _if_conditional168;
_Bool __result106__;
void* right_value180;
struct CVALUE* __exception_result_var_b157;
struct CVALUE* left_value_133;
struct sNode* right_134;
_Bool __exception_result_var_b158;
_Bool _if_conditional169;
_Bool __result107__;
void* right_value181;
struct CVALUE* __exception_result_var_b159;
struct CVALUE* right_value_135;
struct sType* type_136;
char* fun_name_137;
_Bool calling_fun_138;
_Bool _if_conditional170;
_Bool __exception_result_var_b160;
_Bool _if_conditional171;
void* right_value182;
struct CVALUE* come_value_139;
void* right_value183;
char* __exception_result_var_b161;
char* __dec_obj66;
struct sType* __exception_result_var_b162;
void* right_value184;
struct sType* __dec_obj67;
struct list$1CVALUEph* __exception_result_var_b163;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_132, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
memset(&left_value_133, 0, sizeof(struct CVALUE*));
memset(&right_134, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&right_value_135, 0, sizeof(struct CVALUE*));
memset(&type_136, 0, sizeof(struct sType*));
memset(&fun_name_137, 0, sizeof(char*));
memset(&calling_fun_138, 0, sizeof(_Bool));
right_value182 = (void*)0;
memset(&come_value_139, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
    left_132=((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 449, 1623)), "19eq.c", 449, 1624))->mLeft;
    if(_if_conditional168=!(come_push_stackframe("19eq.c", 451, 1625),__exception_result_var_b156=node_compile(left_132,info), come_pop_stackframe(), __exception_result_var_b156),    _if_conditional168) {
        __result106__ = (_Bool)0;
        return __result106__;
    }
    left_value_133=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 455, 1626),__exception_result_var_b157=((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b157));
    come_call_finalizer3(right_value180,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 456,1627),dec_stack_ptr(1,info),come_pop_stackframe());
    right_134=((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 458, 1628)), "19eq.c", 458, 1629))->mRight;
    if(_if_conditional169=!(come_push_stackframe("19eq.c", 460, 1630),__exception_result_var_b158=node_compile(right_134,info), come_pop_stackframe(), __exception_result_var_b158),    _if_conditional169) {
        __result107__ = (_Bool)0;
        come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result107__;
    }
    right_value_135=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 464, 1631),__exception_result_var_b159=((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b159));
    come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 465,1632),dec_stack_ptr(1,info),come_pop_stackframe());
    type_136=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_133, "19eq.c", 467, 1633)), "19eq.c", 467, 1634))->type);
    fun_name_137="operator_lshift_equal";
    if(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 471, 1635)), "19eq.c", 471, 1636))->mQuote) {
        calling_fun_138=(_Bool)0;
    }
    else {
        calling_fun_138=(come_push_stackframe("19eq.c", 475, 1637),__exception_result_var_b160=operator_overload_fun(type_136,fun_name_137,left_value_133,right_value_135,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b160);
    }
    if(_if_conditional171=!calling_fun_138,    _if_conditional171) {
        come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 479, "CVALUE"))));
        come_call_finalizer3(right_value182,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj66=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "19eq.c", 481, 1638)), "19eq.c", 481, 1639))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "19eq.c", 481, 1638)), "19eq.c", 481, 1639))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 481, 1644),__exception_result_var_b161=((char*)(right_value183=xsprintf("%s<<=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_133, "19eq.c", 481, 1640)), "19eq.c", 481, 1641))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_135, "19eq.c", 481, 1642)), "19eq.c", 481, 1643))->c_value))), come_pop_stackframe(), __exception_result_var_b161));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj67=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "19eq.c", 482, 1645)), "19eq.c", 482, 1646))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "19eq.c", 482, 1645)), "19eq.c", 482, 1646))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(come_push_stackframe("19eq.c", 482, 1649),__exception_result_var_b162=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_133, "19eq.c", 482, 1647)), "19eq.c", 482, 1648))->type), come_pop_stackframe(), __exception_result_var_b162))));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "19eq.c", 483, 1650)), "19eq.c", 483, 1651))->var=((void*)0);
        (come_push_stackframe("19eq.c", 485, 1656),__exception_result_var_b163=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 485, 1652)), "19eq.c", 485, 1653))->stack, "19eq.c", 485, 1654)), "19eq.c", 485, 1655)),(struct CVALUE*)come_increment_ref_count(come_value_139)), come_pop_stackframe(), __exception_result_var_b163);
        (come_push_stackframe("19eq.c", 487,1659),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_139, "19eq.c", 487, 1657)), "19eq.c", 487, 1658))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result108__ = (_Bool)1;
    come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_136,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value185;
struct sNodeBase* __exception_result_var_b164;
struct sNode* __exception_result_var_b165;
void* right_value186;
struct sNode* __dec_obj68;
struct sNode* __exception_result_var_b166;
void* right_value187;
struct sNode* __dec_obj69;
struct sRShiftEqualNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    (come_push_stackframe("19eq.c", 498, 1662),__exception_result_var_b164=((struct sNodeBase*)(right_value185=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 498, 1660)), "19eq.c", 498, 1661))),info))), come_pop_stackframe(), __exception_result_var_b164);
    come_call_finalizer3(right_value185,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 500, 1663))->mQuote=quote;
    __dec_obj68=((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 502, 1664))->mLeft;
    ((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 502, 1664))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=(come_push_stackframe("19eq.c", 502, 1665),__exception_result_var_b165=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b165))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj69=((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 503, 1666))->mRight;
    ((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 503, 1666))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=(come_push_stackframe("19eq.c", 503, 1667),__exception_result_var_b166=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b166))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result109__ = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result109__;
    come_call_finalizer3(self,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self){
void* __result_obj__;
void* right_value188;
char* __exception_result_var_b167;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    __result110__ = __result_obj__ = (come_push_stackframe("19eq.c", 508, 1680),__exception_result_var_b167=((char*)(right_value188=__builtin_string("sRShiftEqualNode"))), come_pop_stackframe(), __exception_result_var_b167);
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_140;
_Bool __exception_result_var_b168;
_Bool _if_conditional175;
_Bool __result111__;
void* right_value189;
struct CVALUE* __exception_result_var_b169;
struct CVALUE* left_value_141;
struct sNode* right_142;
_Bool __exception_result_var_b170;
_Bool _if_conditional176;
_Bool __result112__;
void* right_value190;
struct CVALUE* __exception_result_var_b171;
struct CVALUE* right_value_143;
struct sType* type_144;
char* fun_name_145;
_Bool calling_fun_146;
_Bool _if_conditional177;
_Bool __exception_result_var_b172;
_Bool _if_conditional178;
void* right_value191;
struct CVALUE* come_value_147;
void* right_value192;
char* __exception_result_var_b173;
char* __dec_obj70;
struct sType* __exception_result_var_b174;
void* right_value193;
struct sType* __dec_obj71;
struct list$1CVALUEph* __exception_result_var_b175;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_140, 0, sizeof(struct sNode*));
right_value189 = (void*)0;
memset(&left_value_141, 0, sizeof(struct CVALUE*));
memset(&right_142, 0, sizeof(struct sNode*));
right_value190 = (void*)0;
memset(&right_value_143, 0, sizeof(struct CVALUE*));
memset(&type_144, 0, sizeof(struct sType*));
memset(&fun_name_145, 0, sizeof(char*));
memset(&calling_fun_146, 0, sizeof(_Bool));
right_value191 = (void*)0;
memset(&come_value_147, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    left_140=((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 513, 1681)), "19eq.c", 513, 1682))->mLeft;
    if(_if_conditional175=!(come_push_stackframe("19eq.c", 515, 1683),__exception_result_var_b168=node_compile(left_140,info), come_pop_stackframe(), __exception_result_var_b168),    _if_conditional175) {
        __result111__ = (_Bool)0;
        return __result111__;
    }
    left_value_141=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 519, 1684),__exception_result_var_b169=((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b169));
    come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 520,1685),dec_stack_ptr(1,info),come_pop_stackframe());
    right_142=((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 522, 1686)), "19eq.c", 522, 1687))->mRight;
    if(_if_conditional176=!(come_push_stackframe("19eq.c", 524, 1688),__exception_result_var_b170=node_compile(right_142,info), come_pop_stackframe(), __exception_result_var_b170),    _if_conditional176) {
        __result112__ = (_Bool)0;
        come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result112__;
    }
    right_value_143=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 528, 1689),__exception_result_var_b171=((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b171));
    come_call_finalizer3(right_value190,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 529,1690),dec_stack_ptr(1,info),come_pop_stackframe());
    type_144=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_141, "19eq.c", 531, 1691)), "19eq.c", 531, 1692))->type);
    fun_name_145="operator_rshift_equal";
    if(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 535, 1693)), "19eq.c", 535, 1694))->mQuote) {
        calling_fun_146=(_Bool)0;
    }
    else {
        calling_fun_146=(come_push_stackframe("19eq.c", 539, 1695),__exception_result_var_b172=operator_overload_fun(type_144,fun_name_145,left_value_141,right_value_143,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b172);
    }
    if(_if_conditional178=!calling_fun_146,    _if_conditional178) {
        come_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 543, "CVALUE"))));
        come_call_finalizer3(right_value191,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj70=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "19eq.c", 545, 1696)), "19eq.c", 545, 1697))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "19eq.c", 545, 1696)), "19eq.c", 545, 1697))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 545, 1702),__exception_result_var_b173=((char*)(right_value192=xsprintf("%s>>=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_141, "19eq.c", 545, 1698)), "19eq.c", 545, 1699))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_143, "19eq.c", 545, 1700)), "19eq.c", 545, 1701))->c_value))), come_pop_stackframe(), __exception_result_var_b173));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj71=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "19eq.c", 546, 1703)), "19eq.c", 546, 1704))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "19eq.c", 546, 1703)), "19eq.c", 546, 1704))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(come_push_stackframe("19eq.c", 546, 1707),__exception_result_var_b174=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_141, "19eq.c", 546, 1705)), "19eq.c", 546, 1706))->type), come_pop_stackframe(), __exception_result_var_b174))));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "19eq.c", 547, 1708)), "19eq.c", 547, 1709))->var=((void*)0);
        (come_push_stackframe("19eq.c", 549, 1714),__exception_result_var_b175=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 549, 1710)), "19eq.c", 549, 1711))->stack, "19eq.c", 549, 1712)), "19eq.c", 549, 1713)),(struct CVALUE*)come_increment_ref_count(come_value_147)), come_pop_stackframe(), __exception_result_var_b175);
        (come_push_stackframe("19eq.c", 551,1717),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_147, "19eq.c", 551, 1715)), "19eq.c", 551, 1716))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result113__ = (_Bool)1;
    come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result113__;
    come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value194;
struct sNodeBase* __exception_result_var_b176;
struct sNode* __exception_result_var_b177;
void* right_value195;
struct sNode* __dec_obj72;
struct sNode* __exception_result_var_b178;
void* right_value196;
struct sNode* __dec_obj73;
struct sXorEqualNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
    (come_push_stackframe("19eq.c", 562, 1720),__exception_result_var_b176=((struct sNodeBase*)(right_value194=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "19eq.c", 562, 1718)), "19eq.c", 562, 1719))),info))), come_pop_stackframe(), __exception_result_var_b176);
    come_call_finalizer3(right_value194,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sXorEqualNode*)come_null_check(self, "19eq.c", 564, 1721))->mQuote=quote;
    __dec_obj72=((struct sXorEqualNode*)come_null_check(self, "19eq.c", 566, 1722))->mLeft;
    ((struct sXorEqualNode*)come_null_check(self, "19eq.c", 566, 1722))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=(come_push_stackframe("19eq.c", 566, 1723),__exception_result_var_b177=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b177))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj73=((struct sXorEqualNode*)come_null_check(self, "19eq.c", 567, 1724))->mRight;
    ((struct sXorEqualNode*)come_null_check(self, "19eq.c", 567, 1724))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=(come_push_stackframe("19eq.c", 567, 1725),__exception_result_var_b178=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b178))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result114__ = __result_obj__ = self;
    come_call_finalizer3(self,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result114__;
    come_call_finalizer3(self,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sXorEqualNode_kind(struct sXorEqualNode* self){
void* __result_obj__;
void* right_value197;
char* __exception_result_var_b179;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    __result115__ = __result_obj__ = (come_push_stackframe("19eq.c", 572, 1738),__exception_result_var_b179=((char*)(right_value197=__builtin_string("sXorEqualNode"))), come_pop_stackframe(), __exception_result_var_b179);
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result115__;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_148;
_Bool __exception_result_var_b180;
_Bool _if_conditional182;
_Bool __result116__;
void* right_value198;
struct CVALUE* __exception_result_var_b181;
struct CVALUE* left_value_149;
struct sNode* right_150;
_Bool __exception_result_var_b182;
_Bool _if_conditional183;
_Bool __result117__;
void* right_value199;
struct CVALUE* __exception_result_var_b183;
struct CVALUE* right_value_151;
struct sType* type_152;
char* fun_name_153;
_Bool calling_fun_154;
_Bool _if_conditional184;
_Bool __exception_result_var_b184;
_Bool _if_conditional185;
void* right_value200;
struct CVALUE* come_value_155;
void* right_value201;
char* __exception_result_var_b185;
char* __dec_obj74;
struct sType* __exception_result_var_b186;
void* right_value202;
struct sType* __dec_obj75;
struct list$1CVALUEph* __exception_result_var_b187;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_148, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&left_value_149, 0, sizeof(struct CVALUE*));
memset(&right_150, 0, sizeof(struct sNode*));
right_value199 = (void*)0;
memset(&right_value_151, 0, sizeof(struct CVALUE*));
memset(&type_152, 0, sizeof(struct sType*));
memset(&fun_name_153, 0, sizeof(char*));
memset(&calling_fun_154, 0, sizeof(_Bool));
right_value200 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
    left_148=((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "19eq.c", 577, 1739)), "19eq.c", 577, 1740))->mLeft;
    if(_if_conditional182=!(come_push_stackframe("19eq.c", 579, 1741),__exception_result_var_b180=node_compile(left_148,info), come_pop_stackframe(), __exception_result_var_b180),    _if_conditional182) {
        __result116__ = (_Bool)0;
        return __result116__;
    }
    left_value_149=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 583, 1742),__exception_result_var_b181=((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b181));
    come_call_finalizer3(right_value198,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 584,1743),dec_stack_ptr(1,info),come_pop_stackframe());
    right_150=((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "19eq.c", 586, 1744)), "19eq.c", 586, 1745))->mRight;
    if(_if_conditional183=!(come_push_stackframe("19eq.c", 588, 1746),__exception_result_var_b182=node_compile(right_150,info), come_pop_stackframe(), __exception_result_var_b182),    _if_conditional183) {
        __result117__ = (_Bool)0;
        come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result117__;
    }
    right_value_151=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 592, 1747),__exception_result_var_b183=((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b183));
    come_call_finalizer3(right_value199,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 593,1748),dec_stack_ptr(1,info),come_pop_stackframe());
    type_152=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "19eq.c", 595, 1749)), "19eq.c", 595, 1750))->type);
    fun_name_153="operator_xor_equal";
    if(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "19eq.c", 599, 1751)), "19eq.c", 599, 1752))->mQuote) {
        calling_fun_154=(_Bool)0;
    }
    else {
        calling_fun_154=(come_push_stackframe("19eq.c", 603, 1753),__exception_result_var_b184=operator_overload_fun(type_152,fun_name_153,left_value_149,right_value_151,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b184);
    }
    if(_if_conditional185=!calling_fun_154,    _if_conditional185) {
        come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 607, "CVALUE"))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj74=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "19eq.c", 609, 1754)), "19eq.c", 609, 1755))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "19eq.c", 609, 1754)), "19eq.c", 609, 1755))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 609, 1760),__exception_result_var_b185=((char*)(right_value201=xsprintf("%s^=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "19eq.c", 609, 1756)), "19eq.c", 609, 1757))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_151, "19eq.c", 609, 1758)), "19eq.c", 609, 1759))->c_value))), come_pop_stackframe(), __exception_result_var_b185));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj75=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "19eq.c", 610, 1761)), "19eq.c", 610, 1762))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "19eq.c", 610, 1761)), "19eq.c", 610, 1762))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(come_push_stackframe("19eq.c", 610, 1765),__exception_result_var_b186=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_149, "19eq.c", 610, 1763)), "19eq.c", 610, 1764))->type), come_pop_stackframe(), __exception_result_var_b186))));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "19eq.c", 611, 1766)), "19eq.c", 611, 1767))->var=((void*)0);
        (come_push_stackframe("19eq.c", 613, 1772),__exception_result_var_b187=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 613, 1768)), "19eq.c", 613, 1769))->stack, "19eq.c", 613, 1770)), "19eq.c", 613, 1771)),(struct CVALUE*)come_increment_ref_count(come_value_155)), come_pop_stackframe(), __exception_result_var_b187);
        (come_push_stackframe("19eq.c", 615,1775),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "19eq.c", 615, 1773)), "19eq.c", 615, 1774))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result118__ = (_Bool)1;
    come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result118__;
    come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value203;
struct sNodeBase* __exception_result_var_b188;
struct sNode* __exception_result_var_b189;
void* right_value204;
struct sNode* __dec_obj76;
struct sNode* __exception_result_var_b190;
void* right_value205;
struct sNode* __dec_obj77;
struct sOrEqualNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
    (come_push_stackframe("19eq.c", 626, 1778),__exception_result_var_b188=((struct sNodeBase*)(right_value203=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "19eq.c", 626, 1776)), "19eq.c", 626, 1777))),info))), come_pop_stackframe(), __exception_result_var_b188);
    come_call_finalizer3(right_value203,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sOrEqualNode*)come_null_check(self, "19eq.c", 628, 1779))->mQuote=quote;
    __dec_obj76=((struct sOrEqualNode*)come_null_check(self, "19eq.c", 630, 1780))->mLeft;
    ((struct sOrEqualNode*)come_null_check(self, "19eq.c", 630, 1780))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=(come_push_stackframe("19eq.c", 630, 1781),__exception_result_var_b189=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b189))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj77=((struct sOrEqualNode*)come_null_check(self, "19eq.c", 631, 1782))->mRight;
    ((struct sOrEqualNode*)come_null_check(self, "19eq.c", 631, 1782))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=(come_push_stackframe("19eq.c", 631, 1783),__exception_result_var_b190=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b190))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result119__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result119__;
    come_call_finalizer3(self,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sOrEqualNode_kind(struct sOrEqualNode* self){
void* __result_obj__;
void* right_value206;
char* __exception_result_var_b191;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    __result120__ = __result_obj__ = (come_push_stackframe("19eq.c", 636, 1796),__exception_result_var_b191=((char*)(right_value206=__builtin_string("sOrEqualNode"))), come_pop_stackframe(), __exception_result_var_b191);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_156;
_Bool __exception_result_var_b192;
_Bool _if_conditional189;
_Bool __result121__;
void* right_value207;
struct CVALUE* __exception_result_var_b193;
struct CVALUE* left_value_157;
struct sNode* right_158;
_Bool __exception_result_var_b194;
_Bool _if_conditional190;
_Bool __result122__;
void* right_value208;
struct CVALUE* __exception_result_var_b195;
struct CVALUE* right_value_159;
struct sType* type_160;
char* fun_name_161;
_Bool calling_fun_162;
_Bool _if_conditional191;
_Bool __exception_result_var_b196;
_Bool _if_conditional192;
void* right_value209;
struct CVALUE* come_value_163;
void* right_value210;
char* __exception_result_var_b197;
char* __dec_obj78;
struct sType* __exception_result_var_b198;
void* right_value211;
struct sType* __dec_obj79;
struct list$1CVALUEph* __exception_result_var_b199;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_156, 0, sizeof(struct sNode*));
right_value207 = (void*)0;
memset(&left_value_157, 0, sizeof(struct CVALUE*));
memset(&right_158, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&right_value_159, 0, sizeof(struct CVALUE*));
memset(&type_160, 0, sizeof(struct sType*));
memset(&fun_name_161, 0, sizeof(char*));
memset(&calling_fun_162, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    left_156=((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "19eq.c", 641, 1797)), "19eq.c", 641, 1798))->mLeft;
    if(_if_conditional189=!(come_push_stackframe("19eq.c", 643, 1799),__exception_result_var_b192=node_compile(left_156,info), come_pop_stackframe(), __exception_result_var_b192),    _if_conditional189) {
        __result121__ = (_Bool)0;
        return __result121__;
    }
    left_value_157=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 647, 1800),__exception_result_var_b193=((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b193));
    come_call_finalizer3(right_value207,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 648,1801),dec_stack_ptr(1,info),come_pop_stackframe());
    right_158=((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "19eq.c", 650, 1802)), "19eq.c", 650, 1803))->mRight;
    if(_if_conditional190=!(come_push_stackframe("19eq.c", 652, 1804),__exception_result_var_b194=node_compile(right_158,info), come_pop_stackframe(), __exception_result_var_b194),    _if_conditional190) {
        __result122__ = (_Bool)0;
        come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result122__;
    }
    right_value_159=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 656, 1805),__exception_result_var_b195=((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b195));
    come_call_finalizer3(right_value208,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 657,1806),dec_stack_ptr(1,info),come_pop_stackframe());
    type_160=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "19eq.c", 659, 1807)), "19eq.c", 659, 1808))->type);
    fun_name_161="operator_or_equal";
    if(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "19eq.c", 663, 1809)), "19eq.c", 663, 1810))->mQuote) {
        calling_fun_162=(_Bool)0;
    }
    else {
        calling_fun_162=(come_push_stackframe("19eq.c", 667, 1811),__exception_result_var_b196=operator_overload_fun(type_160,fun_name_161,left_value_157,right_value_159,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b196);
    }
    if(_if_conditional192=!calling_fun_162,    _if_conditional192) {
        come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 671, "CVALUE"))));
        come_call_finalizer3(right_value209,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "19eq.c", 673, 1812)), "19eq.c", 673, 1813))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "19eq.c", 673, 1812)), "19eq.c", 673, 1813))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 673, 1818),__exception_result_var_b197=((char*)(right_value210=xsprintf("%s|=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "19eq.c", 673, 1814)), "19eq.c", 673, 1815))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_159, "19eq.c", 673, 1816)), "19eq.c", 673, 1817))->c_value))), come_pop_stackframe(), __exception_result_var_b197));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj79=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "19eq.c", 674, 1819)), "19eq.c", 674, 1820))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "19eq.c", 674, 1819)), "19eq.c", 674, 1820))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(come_push_stackframe("19eq.c", 674, 1823),__exception_result_var_b198=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_157, "19eq.c", 674, 1821)), "19eq.c", 674, 1822))->type), come_pop_stackframe(), __exception_result_var_b198))));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "19eq.c", 675, 1824)), "19eq.c", 675, 1825))->var=((void*)0);
        (come_push_stackframe("19eq.c", 677, 1830),__exception_result_var_b199=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 677, 1826)), "19eq.c", 677, 1827))->stack, "19eq.c", 677, 1828)), "19eq.c", 677, 1829)),(struct CVALUE*)come_increment_ref_count(come_value_163)), come_pop_stackframe(), __exception_result_var_b199);
        (come_push_stackframe("19eq.c", 679,1833),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "19eq.c", 679, 1831)), "19eq.c", 679, 1832))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result123__ = (_Bool)1;
    come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result123__;
    come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value212;
struct sNodeBase* __exception_result_var_b200;
struct sNode* __exception_result_var_b201;
void* right_value213;
struct sNode* __dec_obj80;
struct sNode* __exception_result_var_b202;
void* right_value214;
struct sNode* __dec_obj81;
struct sAndEqualNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
    (come_push_stackframe("19eq.c", 690, 1836),__exception_result_var_b200=((struct sNodeBase*)(right_value212=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "19eq.c", 690, 1834)), "19eq.c", 690, 1835))),info))), come_pop_stackframe(), __exception_result_var_b200);
    come_call_finalizer3(right_value212,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sAndEqualNode*)come_null_check(self, "19eq.c", 692, 1837))->mQuote=quote;
    __dec_obj80=((struct sAndEqualNode*)come_null_check(self, "19eq.c", 694, 1838))->mLeft;
    ((struct sAndEqualNode*)come_null_check(self, "19eq.c", 694, 1838))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=(come_push_stackframe("19eq.c", 694, 1839),__exception_result_var_b201=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b201))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj81=((struct sAndEqualNode*)come_null_check(self, "19eq.c", 695, 1840))->mRight;
    ((struct sAndEqualNode*)come_null_check(self, "19eq.c", 695, 1840))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=(come_push_stackframe("19eq.c", 695, 1841),__exception_result_var_b202=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b202))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result124__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result124__;
    come_call_finalizer3(self,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAndEqualNode_kind(struct sAndEqualNode* self){
void* __result_obj__;
void* right_value215;
char* __exception_result_var_b203;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
    __result125__ = __result_obj__ = (come_push_stackframe("19eq.c", 700, 1854),__exception_result_var_b203=((char*)(right_value215=__builtin_string("sAndEqualNode"))), come_pop_stackframe(), __exception_result_var_b203);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_164;
_Bool __exception_result_var_b204;
_Bool _if_conditional196;
_Bool __result126__;
void* right_value216;
struct CVALUE* __exception_result_var_b205;
struct CVALUE* left_value_165;
struct sNode* right_166;
_Bool __exception_result_var_b206;
_Bool _if_conditional197;
_Bool __result127__;
void* right_value217;
struct CVALUE* __exception_result_var_b207;
struct CVALUE* right_value_167;
struct sType* type_168;
char* fun_name_169;
_Bool calling_fun_170;
_Bool _if_conditional198;
_Bool __exception_result_var_b208;
_Bool _if_conditional199;
void* right_value218;
struct CVALUE* come_value_171;
void* right_value219;
char* __exception_result_var_b209;
char* __dec_obj82;
struct sType* __exception_result_var_b210;
void* right_value220;
struct sType* __dec_obj83;
struct list$1CVALUEph* __exception_result_var_b211;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_164, 0, sizeof(struct sNode*));
right_value216 = (void*)0;
memset(&left_value_165, 0, sizeof(struct CVALUE*));
memset(&right_166, 0, sizeof(struct sNode*));
right_value217 = (void*)0;
memset(&right_value_167, 0, sizeof(struct CVALUE*));
memset(&type_168, 0, sizeof(struct sType*));
memset(&fun_name_169, 0, sizeof(char*));
memset(&calling_fun_170, 0, sizeof(_Bool));
right_value218 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    left_164=((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "19eq.c", 705, 1855)), "19eq.c", 705, 1856))->mLeft;
    if(_if_conditional196=!(come_push_stackframe("19eq.c", 707, 1857),__exception_result_var_b204=node_compile(left_164,info), come_pop_stackframe(), __exception_result_var_b204),    _if_conditional196) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    left_value_165=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 711, 1858),__exception_result_var_b205=((struct CVALUE*)(right_value216=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b205));
    come_call_finalizer3(right_value216,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 712,1859),dec_stack_ptr(1,info),come_pop_stackframe());
    right_166=((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "19eq.c", 714, 1860)), "19eq.c", 714, 1861))->mRight;
    if(_if_conditional197=!(come_push_stackframe("19eq.c", 716, 1862),__exception_result_var_b206=node_compile(right_166,info), come_pop_stackframe(), __exception_result_var_b206),    _if_conditional197) {
        __result127__ = (_Bool)0;
        come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    right_value_167=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 720, 1863),__exception_result_var_b207=((struct CVALUE*)(right_value217=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b207));
    come_call_finalizer3(right_value217,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 721,1864),dec_stack_ptr(1,info),come_pop_stackframe());
    type_168=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_165, "19eq.c", 723, 1865)), "19eq.c", 723, 1866))->type);
    fun_name_169="operator_and_equal";
    if(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "19eq.c", 727, 1867)), "19eq.c", 727, 1868))->mQuote) {
        calling_fun_170=(_Bool)0;
    }
    else {
        calling_fun_170=(come_push_stackframe("19eq.c", 731, 1869),__exception_result_var_b208=operator_overload_fun(type_168,fun_name_169,left_value_165,right_value_167,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b208);
    }
    if(_if_conditional199=!calling_fun_170,    _if_conditional199) {
        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 735, "CVALUE"))));
        come_call_finalizer3(right_value218,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj82=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "19eq.c", 737, 1870)), "19eq.c", 737, 1871))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "19eq.c", 737, 1870)), "19eq.c", 737, 1871))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 737, 1876),__exception_result_var_b209=((char*)(right_value219=xsprintf("%s&=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_165, "19eq.c", 737, 1872)), "19eq.c", 737, 1873))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_167, "19eq.c", 737, 1874)), "19eq.c", 737, 1875))->c_value))), come_pop_stackframe(), __exception_result_var_b209));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj83=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "19eq.c", 738, 1877)), "19eq.c", 738, 1878))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "19eq.c", 738, 1877)), "19eq.c", 738, 1878))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=(come_push_stackframe("19eq.c", 738, 1881),__exception_result_var_b210=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_165, "19eq.c", 738, 1879)), "19eq.c", 738, 1880))->type), come_pop_stackframe(), __exception_result_var_b210))));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "19eq.c", 739, 1882)), "19eq.c", 739, 1883))->var=((void*)0);
        (come_push_stackframe("19eq.c", 741, 1888),__exception_result_var_b211=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 741, 1884)), "19eq.c", 741, 1885))->stack, "19eq.c", 741, 1886)), "19eq.c", 741, 1887)),(struct CVALUE*)come_increment_ref_count(come_value_171)), come_pop_stackframe(), __exception_result_var_b211);
        (come_push_stackframe("19eq.c", 743,1891),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "19eq.c", 743, 1889)), "19eq.c", 743, 1890))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value221;
struct sNodeBase* __exception_result_var_b212;
struct sNode* __exception_result_var_b213;
void* right_value222;
struct sNode* __dec_obj84;
struct sNode* __exception_result_var_b214;
void* right_value223;
struct sNode* __dec_obj85;
struct sExpEqualNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
    (come_push_stackframe("19eq.c", 754, 1894),__exception_result_var_b212=((struct sNodeBase*)(right_value221=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "19eq.c", 754, 1892)), "19eq.c", 754, 1893))),info))), come_pop_stackframe(), __exception_result_var_b212);
    come_call_finalizer3(right_value221,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sExpEqualNode*)come_null_check(self, "19eq.c", 756, 1895))->mQuote=quote;
    __dec_obj84=((struct sExpEqualNode*)come_null_check(self, "19eq.c", 758, 1896))->mLeft;
    ((struct sExpEqualNode*)come_null_check(self, "19eq.c", 758, 1896))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=(come_push_stackframe("19eq.c", 758, 1897),__exception_result_var_b213=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b213))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj85=((struct sExpEqualNode*)come_null_check(self, "19eq.c", 759, 1898))->mRight;
    ((struct sExpEqualNode*)come_null_check(self, "19eq.c", 759, 1898))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=(come_push_stackframe("19eq.c", 759, 1899),__exception_result_var_b214=sNode_clone(right), come_pop_stackframe(), __exception_result_var_b214))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result129__;
    come_call_finalizer3(self,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sExpEqualNode_kind(struct sExpEqualNode* self){
void* __result_obj__;
void* right_value224;
char* __exception_result_var_b215;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
    __result130__ = __result_obj__ = (come_push_stackframe("19eq.c", 764, 1912),__exception_result_var_b215=((char*)(right_value224=__builtin_string("sExpEqualNode"))), come_pop_stackframe(), __exception_result_var_b215);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_172;
_Bool __exception_result_var_b216;
_Bool _if_conditional203;
_Bool __result131__;
void* right_value225;
struct CVALUE* __exception_result_var_b217;
struct CVALUE* left_value_173;
struct sNode* right_174;
_Bool __exception_result_var_b218;
_Bool _if_conditional204;
_Bool __result132__;
void* right_value226;
struct CVALUE* __exception_result_var_b219;
struct CVALUE* right_value_175;
struct sType* type_176;
char* fun_name_177;
_Bool calling_fun_178;
_Bool _if_conditional205;
_Bool __exception_result_var_b220;
_Bool _if_conditional206;
void* right_value227;
struct CVALUE* come_value_179;
void* right_value228;
char* __exception_result_var_b221;
char* __dec_obj86;
struct sType* __exception_result_var_b222;
void* right_value229;
struct sType* __dec_obj87;
struct list$1CVALUEph* __exception_result_var_b223;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_172, 0, sizeof(struct sNode*));
right_value225 = (void*)0;
memset(&left_value_173, 0, sizeof(struct CVALUE*));
memset(&right_174, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
memset(&right_value_175, 0, sizeof(struct CVALUE*));
memset(&type_176, 0, sizeof(struct sType*));
memset(&fun_name_177, 0, sizeof(char*));
memset(&calling_fun_178, 0, sizeof(_Bool));
right_value227 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    left_172=((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "19eq.c", 769, 1913)), "19eq.c", 769, 1914))->mLeft;
    if(_if_conditional203=!(come_push_stackframe("19eq.c", 771, 1915),__exception_result_var_b216=node_compile(left_172,info), come_pop_stackframe(), __exception_result_var_b216),    _if_conditional203) {
        __result131__ = (_Bool)0;
        return __result131__;
    }
    left_value_173=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 775, 1916),__exception_result_var_b217=((struct CVALUE*)(right_value225=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b217));
    come_call_finalizer3(right_value225,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 776,1917),dec_stack_ptr(1,info),come_pop_stackframe());
    right_174=((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "19eq.c", 778, 1918)), "19eq.c", 778, 1919))->mRight;
    if(_if_conditional204=!(come_push_stackframe("19eq.c", 780, 1920),__exception_result_var_b218=node_compile(right_174,info), come_pop_stackframe(), __exception_result_var_b218),    _if_conditional204) {
        __result132__ = (_Bool)0;
        come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result132__;
    }
    right_value_175=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("19eq.c", 784, 1921),__exception_result_var_b219=((struct CVALUE*)(right_value226=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b219));
    come_call_finalizer3(right_value226,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("19eq.c", 785,1922),dec_stack_ptr(1,info),come_pop_stackframe());
    type_176=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_173, "19eq.c", 787, 1923)), "19eq.c", 787, 1924))->type);
    fun_name_177="operator_exp_equal";
    if(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "19eq.c", 791, 1925)), "19eq.c", 791, 1926))->mQuote) {
        calling_fun_178=(_Bool)0;
    }
    else {
        calling_fun_178=(come_push_stackframe("19eq.c", 795, 1927),__exception_result_var_b220=operator_overload_fun(type_176,fun_name_177,left_value_173,right_value_175,(_Bool)0,info), come_pop_stackframe(), __exception_result_var_b220);
    }
    if(_if_conditional206=!calling_fun_178,    _if_conditional206) {
        come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 799, "CVALUE"))));
        come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj86=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "19eq.c", 801, 1928)), "19eq.c", 801, 1929))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "19eq.c", 801, 1928)), "19eq.c", 801, 1929))->c_value=(char*)come_increment_ref_count((come_push_stackframe("19eq.c", 801, 1934),__exception_result_var_b221=((char*)(right_value228=xsprintf("%s=%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_173, "19eq.c", 801, 1930)), "19eq.c", 801, 1931))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_175, "19eq.c", 801, 1932)), "19eq.c", 801, 1933))->c_value))), come_pop_stackframe(), __exception_result_var_b221));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj87=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "19eq.c", 802, 1935)), "19eq.c", 802, 1936))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "19eq.c", 802, 1935)), "19eq.c", 802, 1936))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(come_push_stackframe("19eq.c", 802, 1939),__exception_result_var_b222=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_173, "19eq.c", 802, 1937)), "19eq.c", 802, 1938))->type), come_pop_stackframe(), __exception_result_var_b222))));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "19eq.c", 803, 1940)), "19eq.c", 803, 1941))->var=((void*)0);
        (come_push_stackframe("19eq.c", 805, 1946),__exception_result_var_b223=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 805, 1942)), "19eq.c", 805, 1943))->stack, "19eq.c", 805, 1944)), "19eq.c", 805, 1945)),(struct CVALUE*)come_increment_ref_count(come_value_179)), come_pop_stackframe(), __exception_result_var_b223);
        (come_push_stackframe("19eq.c", 807,1949),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_179, "19eq.c", 807, 1947)), "19eq.c", 807, 1948))->c_value),come_pop_stackframe());
        come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result133__ = (_Bool)1;
    come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result133__;
    come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional207;
_Bool quote_180;
_Bool _if_conditional208;
void* right_value230;
void* right_value231;
struct sPlusPlusNode* __exception_result_var_b224;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* right_value235;
struct sNode* __result136__;
_Bool _if_conditional216;
_Bool quote_182;
_Bool _if_conditional217;
void* right_value236;
void* right_value237;
struct sMinusMinusNode* __exception_result_var_b227;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* right_value241;
struct sNode* __result139__;
_Bool _if_conditional225;
_Bool quote_184;
_Bool _if_conditional226;
void* right_value242;
struct sNode* __exception_result_var_b230;
struct sNode* right_node_185;
void* right_value243;
void* right_value244;
struct sPlusEqualNode* __exception_result_var_b231;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* right_value249;
struct sNode* __result142__;
_Bool _if_conditional236;
_Bool quote_187;
_Bool _if_conditional237;
void* right_value250;
struct sNode* __exception_result_var_b235;
struct sNode* right_node_188;
void* right_value251;
void* right_value252;
struct sMinusEqualNode* __exception_result_var_b236;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* right_value257;
struct sNode* __result145__;
_Bool _if_conditional247;
_Bool quote_190;
_Bool _if_conditional248;
void* right_value258;
struct sNode* __exception_result_var_b240;
struct sNode* right_node_191;
void* right_value259;
void* right_value260;
struct sMultEqualNode* __exception_result_var_b241;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* right_value265;
struct sNode* __result148__;
_Bool _if_conditional258;
_Bool quote_193;
_Bool _if_conditional259;
void* right_value266;
struct sNode* __exception_result_var_b245;
struct sNode* right_node_194;
void* right_value267;
void* right_value268;
struct sDivEqualNode* __exception_result_var_b246;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* right_value273;
struct sNode* __result151__;
_Bool _if_conditional269;
_Bool quote_196;
_Bool _if_conditional270;
void* right_value274;
struct sNode* __exception_result_var_b250;
struct sNode* right_node_197;
void* right_value275;
void* right_value276;
struct sModEqualNode* __exception_result_var_b251;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* right_value281;
struct sNode* __result154__;
_Bool _if_conditional280;
_Bool quote_199;
_Bool _if_conditional281;
void* right_value282;
struct sNode* __exception_result_var_b255;
struct sNode* right_node_200;
void* right_value283;
void* right_value284;
struct sLShifEqualNode* __exception_result_var_b256;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* right_value289;
struct sNode* __result157__;
_Bool _if_conditional291;
_Bool quote_202;
_Bool _if_conditional292;
void* right_value290;
struct sNode* __exception_result_var_b260;
struct sNode* right_node_203;
void* right_value291;
void* right_value292;
struct sRShiftEqualNode* __exception_result_var_b261;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* right_value297;
struct sNode* __result160__;
_Bool _if_conditional302;
_Bool quote_205;
_Bool _if_conditional303;
void* right_value298;
struct sNode* __exception_result_var_b265;
struct sNode* right_node_206;
void* right_value299;
void* right_value300;
struct sXorEqualNode* __exception_result_var_b266;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* right_value305;
struct sNode* __result163__;
_Bool _if_conditional313;
_Bool quote_208;
_Bool _if_conditional314;
void* right_value306;
struct sNode* __exception_result_var_b270;
struct sNode* right_node_209;
void* right_value307;
void* right_value308;
struct sAndEqualNode* __exception_result_var_b271;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* right_value313;
struct sNode* __result166__;
_Bool _if_conditional324;
_Bool quote_211;
_Bool _if_conditional325;
void* right_value314;
struct sNode* __exception_result_var_b275;
struct sNode* right_node_212;
void* right_value315;
void* right_value316;
struct sOrEqualNode* __exception_result_var_b276;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* right_value321;
struct sNode* __result169__;
_Bool _if_conditional335;
_Bool quote_214;
_Bool _if_conditional336;
void* right_value322;
struct sNode* __exception_result_var_b280;
struct sNode* right_node_215;
void* right_value323;
void* right_value324;
struct sExpEqualNode* __exception_result_var_b281;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* right_value329;
struct sNode* __result172__;
void* right_value330;
struct sNode* __exception_result_var_b285;
struct sNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&quote_180, 0, sizeof(_Bool));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value235 = (void*)0;
memset(&quote_182, 0, sizeof(_Bool));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value241 = (void*)0;
memset(&quote_184, 0, sizeof(_Bool));
right_value242 = (void*)0;
memset(&right_node_185, 0, sizeof(struct sNode*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value249 = (void*)0;
memset(&quote_187, 0, sizeof(_Bool));
right_value250 = (void*)0;
memset(&right_node_188, 0, sizeof(struct sNode*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value257 = (void*)0;
memset(&quote_190, 0, sizeof(_Bool));
right_value258 = (void*)0;
memset(&right_node_191, 0, sizeof(struct sNode*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value265 = (void*)0;
memset(&quote_193, 0, sizeof(_Bool));
right_value266 = (void*)0;
memset(&right_node_194, 0, sizeof(struct sNode*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value273 = (void*)0;
memset(&quote_196, 0, sizeof(_Bool));
right_value274 = (void*)0;
memset(&right_node_197, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value281 = (void*)0;
memset(&quote_199, 0, sizeof(_Bool));
right_value282 = (void*)0;
memset(&right_node_200, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value289 = (void*)0;
memset(&quote_202, 0, sizeof(_Bool));
right_value290 = (void*)0;
memset(&right_node_203, 0, sizeof(struct sNode*));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value297 = (void*)0;
memset(&quote_205, 0, sizeof(_Bool));
right_value298 = (void*)0;
memset(&right_node_206, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value305 = (void*)0;
memset(&quote_208, 0, sizeof(_Bool));
right_value306 = (void*)0;
memset(&right_node_209, 0, sizeof(struct sNode*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value313 = (void*)0;
memset(&quote_211, 0, sizeof(_Bool));
right_value314 = (void*)0;
memset(&right_node_212, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value321 = (void*)0;
memset(&quote_214, 0, sizeof(_Bool));
right_value322 = (void*)0;
memset(&right_node_215, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
    if(_if_conditional207=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 816, 1950)), "19eq.c", 816, 1951))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 816, 1950)), "19eq.c", 816, 1951))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 816, 1952)), "19eq.c", 816, 1953))->p, "19eq.c", 816, 1954))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 816, 1955)), "19eq.c", 816, 1956))->p+1), "19eq.c", 816, 1957))==43&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 816, 1958)), "19eq.c", 816, 1959))->p+2), "19eq.c", 816, 1960))==43)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 816, 1961)), "19eq.c", 816, 1962))->p, "19eq.c", 816, 1963))==43&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 816, 1964)), "19eq.c", 816, 1965))->p+1), "19eq.c", 816, 1966))==43)),    _if_conditional207) {
        if(_if_conditional208=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 818, 1967)), "19eq.c", 818, 1968))->p, "19eq.c", 818, 1969))==92,        _if_conditional208) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 819, 1970)), "19eq.c", 819, 1971))->p+=3;
            (come_push_stackframe("19eq.c", 820,1972),skip_spaces_and_lf(info),come_pop_stackframe());
            quote_180=(_Bool)1;
        }
        else {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 824, 1973)), "19eq.c", 824, 1974))->p+=2;
            (come_push_stackframe("19eq.c", 825,1975),skip_spaces_and_lf(info),come_pop_stackframe());
            quote_180=(_Bool)0;
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 829, "struct sNode");
        _inf_obj_value1=come_increment_ref_count((come_push_stackframe("19eq.c", 829, 1977),__exception_result_var_b224=((struct sPlusPlusNode*)(right_value231=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)(right_value230=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 829, "sPlusPlusNode"))), "19eq.c", 829, 1976))),(struct sNode*)come_increment_ref_count(node),quote_180,info))), come_pop_stackframe(), __exception_result_var_b224));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result136__ = __result_obj__ = ((struct sNode*)(right_value235=_inf_value1));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(right_value230,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value231,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result136__;
    }
    else {
        if(_if_conditional216=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 831, 2008)), "19eq.c", 831, 2009))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 831, 2008)), "19eq.c", 831, 2009))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 831, 2010)), "19eq.c", 831, 2011))->p, "19eq.c", 831, 2012))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 831, 2013)), "19eq.c", 831, 2014))->p+1), "19eq.c", 831, 2015))==45&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 831, 2016)), "19eq.c", 831, 2017))->p+2), "19eq.c", 831, 2018))==45)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 831, 2019)), "19eq.c", 831, 2020))->p, "19eq.c", 831, 2021))==45&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 831, 2022)), "19eq.c", 831, 2023))->p+1), "19eq.c", 831, 2024))==45)),        _if_conditional216) {
            if(_if_conditional217=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 833, 2025)), "19eq.c", 833, 2026))->p, "19eq.c", 833, 2027))==92,            _if_conditional217) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 834, 2028)), "19eq.c", 834, 2029))->p+=3;
                (come_push_stackframe("19eq.c", 835,2030),skip_spaces_and_lf(info),come_pop_stackframe());
                quote_182=(_Bool)1;
            }
            else {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 839, 2031)), "19eq.c", 839, 2032))->p+=2;
                (come_push_stackframe("19eq.c", 840,2033),skip_spaces_and_lf(info),come_pop_stackframe());
                quote_182=(_Bool)0;
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 844, "struct sNode");
            _inf_obj_value2=come_increment_ref_count((come_push_stackframe("19eq.c", 844, 2035),__exception_result_var_b227=((struct sMinusMinusNode*)(right_value237=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)(right_value236=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 844, "sMinusMinusNode"))), "19eq.c", 844, 2034))),(struct sNode*)come_increment_ref_count(node),quote_182,info))), come_pop_stackframe(), __exception_result_var_b227));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result139__ = __result_obj__ = ((struct sNode*)(right_value241=_inf_value2));
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(right_value236,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value237,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value241) { right_value241 = come_decrement_ref_count2(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result139__;
        }
        else {
            if(_if_conditional225=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 846, 2066)), "19eq.c", 846, 2067))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 846, 2066)), "19eq.c", 846, 2067))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 846, 2068)), "19eq.c", 846, 2069))->p, "19eq.c", 846, 2070))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 846, 2071)), "19eq.c", 846, 2072))->p+1), "19eq.c", 846, 2073))==43&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 846, 2074)), "19eq.c", 846, 2075))->p+2), "19eq.c", 846, 2076))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 846, 2077)), "19eq.c", 846, 2078))->p, "19eq.c", 846, 2079))==43&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 846, 2080)), "19eq.c", 846, 2081))->p+1), "19eq.c", 846, 2082))==61)),            _if_conditional225) {
                if(_if_conditional226=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 849, 2083)), "19eq.c", 849, 2084))->p, "19eq.c", 849, 2085))==92,                _if_conditional226) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 850, 2086)), "19eq.c", 850, 2087))->p+=3;
                    (come_push_stackframe("19eq.c", 851,2088),skip_spaces_and_lf(info),come_pop_stackframe());
                    quote_184=(_Bool)1;
                }
                else {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 855, 2089)), "19eq.c", 855, 2090))->p+=2;
                    (come_push_stackframe("19eq.c", 856,2091),skip_spaces_and_lf(info),come_pop_stackframe());
                    quote_184=(_Bool)0;
                }
                right_node_185=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 860, 2092),__exception_result_var_b230=((struct sNode*)(right_value242=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b230));
                if(right_value242) { right_value242 = come_decrement_ref_count2(right_value242, ((struct sNode*)right_value242)->finalize, ((struct sNode*)right_value242)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 862, "struct sNode");
                _inf_obj_value3=come_increment_ref_count((come_push_stackframe("19eq.c", 862, 2094),__exception_result_var_b231=((struct sPlusEqualNode*)(right_value244=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)(right_value243=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 862, "sPlusEqualNode"))), "19eq.c", 862, 2093))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_185),quote_184,info))), come_pop_stackframe(), __exception_result_var_b231));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result142__ = __result_obj__ = ((struct sNode*)(right_value249=_inf_value3));
                if(right_node_185) { right_node_185 = come_decrement_ref_count2(right_node_185, ((struct sNode*)right_node_185)->finalize, ((struct sNode*)right_node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(right_value243,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value244,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result142__;
                if(right_node_185) { right_node_185 = come_decrement_ref_count2(right_node_185, ((struct sNode*)right_node_185)->finalize, ((struct sNode*)right_node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional236=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 864, 2136)), "19eq.c", 864, 2137))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 864, 2136)), "19eq.c", 864, 2137))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 864, 2138)), "19eq.c", 864, 2139))->p, "19eq.c", 864, 2140))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 864, 2141)), "19eq.c", 864, 2142))->p+1), "19eq.c", 864, 2143))==45&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 864, 2144)), "19eq.c", 864, 2145))->p+2), "19eq.c", 864, 2146))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 864, 2147)), "19eq.c", 864, 2148))->p, "19eq.c", 864, 2149))==45&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 864, 2150)), "19eq.c", 864, 2151))->p+1), "19eq.c", 864, 2152))==61)),                _if_conditional236) {
                    if(_if_conditional237=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 867, 2153)), "19eq.c", 867, 2154))->p, "19eq.c", 867, 2155))==92,                    _if_conditional237) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 868, 2156)), "19eq.c", 868, 2157))->p+=3;
                        (come_push_stackframe("19eq.c", 869,2158),skip_spaces_and_lf(info),come_pop_stackframe());
                        quote_187=(_Bool)1;
                    }
                    else {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 873, 2159)), "19eq.c", 873, 2160))->p+=2;
                        (come_push_stackframe("19eq.c", 874,2161),skip_spaces_and_lf(info),come_pop_stackframe());
                        quote_187=(_Bool)0;
                    }
                    right_node_188=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 878, 2162),__exception_result_var_b235=((struct sNode*)(right_value250=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b235));
                    if(right_value250) { right_value250 = come_decrement_ref_count2(right_value250, ((struct sNode*)right_value250)->finalize, ((struct sNode*)right_value250)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 880, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count((come_push_stackframe("19eq.c", 880, 2164),__exception_result_var_b236=((struct sMinusEqualNode*)(right_value252=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)(right_value251=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 880, "sMinusEqualNode"))), "19eq.c", 880, 2163))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_188),quote_187,info))), come_pop_stackframe(), __exception_result_var_b236));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result145__ = __result_obj__ = ((struct sNode*)(right_value257=_inf_value4));
                    if(right_node_188) { right_node_188 = come_decrement_ref_count2(right_node_188, ((struct sNode*)right_node_188)->finalize, ((struct sNode*)right_node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    come_call_finalizer3(right_value251,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value252,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result145__;
                    if(right_node_188) { right_node_188 = come_decrement_ref_count2(right_node_188, ((struct sNode*)right_node_188)->finalize, ((struct sNode*)right_node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional247=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 882, 2206)), "19eq.c", 882, 2207))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 882, 2206)), "19eq.c", 882, 2207))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 882, 2208)), "19eq.c", 882, 2209))->p, "19eq.c", 882, 2210))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 882, 2211)), "19eq.c", 882, 2212))->p+1), "19eq.c", 882, 2213))==42&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 882, 2214)), "19eq.c", 882, 2215))->p+2), "19eq.c", 882, 2216))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 882, 2217)), "19eq.c", 882, 2218))->p, "19eq.c", 882, 2219))==42&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 882, 2220)), "19eq.c", 882, 2221))->p+1), "19eq.c", 882, 2222))==61)),                    _if_conditional247) {
                        if(_if_conditional248=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 885, 2223)), "19eq.c", 885, 2224))->p, "19eq.c", 885, 2225))==92,                        _if_conditional248) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 886, 2226)), "19eq.c", 886, 2227))->p+=3;
                            (come_push_stackframe("19eq.c", 887,2228),skip_spaces_and_lf(info),come_pop_stackframe());
                            quote_190=(_Bool)1;
                        }
                        else {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 891, 2229)), "19eq.c", 891, 2230))->p+=2;
                            (come_push_stackframe("19eq.c", 892,2231),skip_spaces_and_lf(info),come_pop_stackframe());
                            quote_190=(_Bool)0;
                        }
                        right_node_191=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 896, 2232),__exception_result_var_b240=((struct sNode*)(right_value258=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b240));
                        if(right_value258) { right_value258 = come_decrement_ref_count2(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 898, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count((come_push_stackframe("19eq.c", 898, 2234),__exception_result_var_b241=((struct sMultEqualNode*)(right_value260=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)(right_value259=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 898, "sMultEqualNode"))), "19eq.c", 898, 2233))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_191),quote_190,info))), come_pop_stackframe(), __exception_result_var_b241));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNodeBase_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result148__ = __result_obj__ = ((struct sNode*)(right_value265=_inf_value5));
                        if(right_node_191) { right_node_191 = come_decrement_ref_count2(right_node_191, ((struct sNode*)right_node_191)->finalize, ((struct sNode*)right_node_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        come_call_finalizer3(right_value259,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value260,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result148__;
                        if(right_node_191) { right_node_191 = come_decrement_ref_count2(right_node_191, ((struct sNode*)right_node_191)->finalize, ((struct sNode*)right_node_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional258=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 900, 2276)), "19eq.c", 900, 2277))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 900, 2276)), "19eq.c", 900, 2277))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 900, 2278)), "19eq.c", 900, 2279))->p, "19eq.c", 900, 2280))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 900, 2281)), "19eq.c", 900, 2282))->p+1), "19eq.c", 900, 2283))==47&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 900, 2284)), "19eq.c", 900, 2285))->p+2), "19eq.c", 900, 2286))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 900, 2287)), "19eq.c", 900, 2288))->p, "19eq.c", 900, 2289))==47&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 900, 2290)), "19eq.c", 900, 2291))->p+1), "19eq.c", 900, 2292))==61)),                        _if_conditional258) {
                            if(_if_conditional259=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 903, 2293)), "19eq.c", 903, 2294))->p, "19eq.c", 903, 2295))==92,                            _if_conditional259) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 904, 2296)), "19eq.c", 904, 2297))->p+=3;
                                (come_push_stackframe("19eq.c", 905,2298),skip_spaces_and_lf(info),come_pop_stackframe());
                                quote_193=(_Bool)1;
                            }
                            else {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 909, 2299)), "19eq.c", 909, 2300))->p+=2;
                                (come_push_stackframe("19eq.c", 910,2301),skip_spaces_and_lf(info),come_pop_stackframe());
                                quote_193=(_Bool)0;
                            }
                            right_node_194=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 914, 2302),__exception_result_var_b245=((struct sNode*)(right_value266=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b245));
                            if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 916, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count((come_push_stackframe("19eq.c", 916, 2304),__exception_result_var_b246=((struct sDivEqualNode*)(right_value268=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)(right_value267=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 916, "sDivEqualNode"))), "19eq.c", 916, 2303))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_194),quote_193,info))), come_pop_stackframe(), __exception_result_var_b246));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result151__ = __result_obj__ = ((struct sNode*)(right_value273=_inf_value6));
                            if(right_node_194) { right_node_194 = come_decrement_ref_count2(right_node_194, ((struct sNode*)right_node_194)->finalize, ((struct sNode*)right_node_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(right_value267,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value268,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result151__;
                            if(right_node_194) { right_node_194 = come_decrement_ref_count2(right_node_194, ((struct sNode*)right_node_194)->finalize, ((struct sNode*)right_node_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional269=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 918, 2346)), "19eq.c", 918, 2347))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 918, 2346)), "19eq.c", 918, 2347))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 918, 2348)), "19eq.c", 918, 2349))->p, "19eq.c", 918, 2350))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 918, 2351)), "19eq.c", 918, 2352))->p+1), "19eq.c", 918, 2353))==37&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 918, 2354)), "19eq.c", 918, 2355))->p+2), "19eq.c", 918, 2356))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 918, 2357)), "19eq.c", 918, 2358))->p, "19eq.c", 918, 2359))==37&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 918, 2360)), "19eq.c", 918, 2361))->p+1), "19eq.c", 918, 2362))==61)),                            _if_conditional269) {
                                if(_if_conditional270=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 921, 2363)), "19eq.c", 921, 2364))->p, "19eq.c", 921, 2365))==92,                                _if_conditional270) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 922, 2366)), "19eq.c", 922, 2367))->p+=3;
                                    (come_push_stackframe("19eq.c", 923,2368),skip_spaces_and_lf(info),come_pop_stackframe());
                                    quote_196=(_Bool)1;
                                }
                                else {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 927, 2369)), "19eq.c", 927, 2370))->p+=2;
                                    (come_push_stackframe("19eq.c", 928,2371),skip_spaces_and_lf(info),come_pop_stackframe());
                                    quote_196=(_Bool)0;
                                }
                                right_node_197=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 933, 2372),__exception_result_var_b250=((struct sNode*)(right_value274=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b250));
                                if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 935, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count((come_push_stackframe("19eq.c", 935, 2374),__exception_result_var_b251=((struct sModEqualNode*)(right_value276=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)(right_value275=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 935, "sModEqualNode"))), "19eq.c", 935, 2373))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_197),quote_196,info))), come_pop_stackframe(), __exception_result_var_b251));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result154__ = __result_obj__ = ((struct sNode*)(right_value281=_inf_value7));
                                if(right_node_197) { right_node_197 = come_decrement_ref_count2(right_node_197, ((struct sNode*)right_node_197)->finalize, ((struct sNode*)right_node_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer3(right_value275,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value276,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result154__;
                                if(right_node_197) { right_node_197 = come_decrement_ref_count2(right_node_197, ((struct sNode*)right_node_197)->finalize, ((struct sNode*)right_node_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional280=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 937, 2416)), "19eq.c", 937, 2417))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 937, 2416)), "19eq.c", 937, 2417))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 937, 2418)), "19eq.c", 937, 2419))->p, "19eq.c", 937, 2420))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 937, 2421)), "19eq.c", 937, 2422))->p+1), "19eq.c", 937, 2423))==60&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 937, 2424)), "19eq.c", 937, 2425))->p+2), "19eq.c", 937, 2426))==60&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 937, 2427)), "19eq.c", 937, 2428))->p+3), "19eq.c", 937, 2429))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 937, 2430)), "19eq.c", 937, 2431))->p, "19eq.c", 937, 2432))==60&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 937, 2433)), "19eq.c", 937, 2434))->p+1), "19eq.c", 937, 2435))==60&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 937, 2436)), "19eq.c", 937, 2437))->p+2), "19eq.c", 937, 2438))==61)),                                _if_conditional280) {
                                    if(_if_conditional281=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 940, 2439)), "19eq.c", 940, 2440))->p, "19eq.c", 940, 2441))==92,                                    _if_conditional281) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 941, 2442)), "19eq.c", 941, 2443))->p+=4;
                                        (come_push_stackframe("19eq.c", 942,2444),skip_spaces_and_lf(info),come_pop_stackframe());
                                        quote_199=(_Bool)1;
                                    }
                                    else {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 946, 2445)), "19eq.c", 946, 2446))->p+=3;
                                        (come_push_stackframe("19eq.c", 947,2447),skip_spaces_and_lf(info),come_pop_stackframe());
                                        quote_199=(_Bool)0;
                                    }
                                    right_node_200=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 951, 2448),__exception_result_var_b255=((struct sNode*)(right_value282=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b255));
                                    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 953, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count((come_push_stackframe("19eq.c", 953, 2450),__exception_result_var_b256=((struct sLShifEqualNode*)(right_value284=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)(right_value283=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 953, "sLShifEqualNode"))), "19eq.c", 953, 2449))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_200),quote_199,info))), come_pop_stackframe(), __exception_result_var_b256));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sNodeBase_sline;
                                    _inf_value8->sname=(void*)sNodeBase_sname;
                                    _inf_value8->terminated=(void*)sNodeBase_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result157__ = __result_obj__ = ((struct sNode*)(right_value289=_inf_value8));
                                    if(right_node_200) { right_node_200 = come_decrement_ref_count2(right_node_200, ((struct sNode*)right_node_200)->finalize, ((struct sNode*)right_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer3(right_value283,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value284,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value289) { right_value289 = come_decrement_ref_count2(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result157__;
                                    if(right_node_200) { right_node_200 = come_decrement_ref_count2(right_node_200, ((struct sNode*)right_node_200)->finalize, ((struct sNode*)right_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional291=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 955, 2492)), "19eq.c", 955, 2493))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 955, 2492)), "19eq.c", 955, 2493))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 955, 2494)), "19eq.c", 955, 2495))->p, "19eq.c", 955, 2496))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 955, 2497)), "19eq.c", 955, 2498))->p+1), "19eq.c", 955, 2499))==62&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 955, 2500)), "19eq.c", 955, 2501))->p+2), "19eq.c", 955, 2502))==62&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 955, 2503)), "19eq.c", 955, 2504))->p+3), "19eq.c", 955, 2505))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 955, 2506)), "19eq.c", 955, 2507))->p, "19eq.c", 955, 2508))==62&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 955, 2509)), "19eq.c", 955, 2510))->p+1), "19eq.c", 955, 2511))==62&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 955, 2512)), "19eq.c", 955, 2513))->p+2), "19eq.c", 955, 2514))==61)),                                    _if_conditional291) {
                                        if(_if_conditional292=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 958, 2515)), "19eq.c", 958, 2516))->p, "19eq.c", 958, 2517))==92,                                        _if_conditional292) {
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 959, 2518)), "19eq.c", 959, 2519))->p+=4;
                                            (come_push_stackframe("19eq.c", 960,2520),skip_spaces_and_lf(info),come_pop_stackframe());
                                            quote_202=(_Bool)1;
                                        }
                                        else {
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 964, 2521)), "19eq.c", 964, 2522))->p+=3;
                                            (come_push_stackframe("19eq.c", 965,2523),skip_spaces_and_lf(info),come_pop_stackframe());
                                            quote_202=(_Bool)0;
                                        }
                                        right_node_203=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 969, 2524),__exception_result_var_b260=((struct sNode*)(right_value290=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b260));
                                        if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 971, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count((come_push_stackframe("19eq.c", 971, 2526),__exception_result_var_b261=((struct sRShiftEqualNode*)(right_value292=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)(right_value291=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 971, "sRShiftEqualNode"))), "19eq.c", 971, 2525))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_203),quote_202,info))), come_pop_stackframe(), __exception_result_var_b261));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sNodeBase_sline;
                                        _inf_value9->sname=(void*)sNodeBase_sname;
                                        _inf_value9->terminated=(void*)sNodeBase_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result160__ = __result_obj__ = ((struct sNode*)(right_value297=_inf_value9));
                                        if(right_node_203) { right_node_203 = come_decrement_ref_count2(right_node_203, ((struct sNode*)right_node_203)->finalize, ((struct sNode*)right_node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        come_call_finalizer3(right_value291,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value292,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result160__;
                                        if(right_node_203) { right_node_203 = come_decrement_ref_count2(right_node_203, ((struct sNode*)right_node_203)->finalize, ((struct sNode*)right_node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional302=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 973, 2568)), "19eq.c", 973, 2569))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 973, 2568)), "19eq.c", 973, 2569))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 973, 2570)), "19eq.c", 973, 2571))->p, "19eq.c", 973, 2572))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 973, 2573)), "19eq.c", 973, 2574))->p+1), "19eq.c", 973, 2575))==94&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 973, 2576)), "19eq.c", 973, 2577))->p+2), "19eq.c", 973, 2578))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 973, 2579)), "19eq.c", 973, 2580))->p, "19eq.c", 973, 2581))==94&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 973, 2582)), "19eq.c", 973, 2583))->p+1), "19eq.c", 973, 2584))==61)),                                        _if_conditional302) {
                                            if(_if_conditional303=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 976, 2585)), "19eq.c", 976, 2586))->p, "19eq.c", 976, 2587))==92,                                            _if_conditional303) {
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 977, 2588)), "19eq.c", 977, 2589))->p+=3;
                                                (come_push_stackframe("19eq.c", 978,2590),skip_spaces_and_lf(info),come_pop_stackframe());
                                                quote_205=(_Bool)1;
                                            }
                                            else {
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 982, 2591)), "19eq.c", 982, 2592))->p+=2;
                                                (come_push_stackframe("19eq.c", 983,2593),skip_spaces_and_lf(info),come_pop_stackframe());
                                                quote_205=(_Bool)0;
                                            }
                                            right_node_206=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 987, 2594),__exception_result_var_b265=((struct sNode*)(right_value298=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b265));
                                            if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 989, "struct sNode");
                                            _inf_obj_value10=come_increment_ref_count((come_push_stackframe("19eq.c", 989, 2596),__exception_result_var_b266=((struct sXorEqualNode*)(right_value300=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)(right_value299=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 989, "sXorEqualNode"))), "19eq.c", 989, 2595))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_206),quote_205,info))), come_pop_stackframe(), __exception_result_var_b266));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sNodeBase_sline;
                                            _inf_value10->sname=(void*)sNodeBase_sname;
                                            _inf_value10->terminated=(void*)sNodeBase_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result163__ = __result_obj__ = ((struct sNode*)(right_value305=_inf_value10));
                                            if(right_node_206) { right_node_206 = come_decrement_ref_count2(right_node_206, ((struct sNode*)right_node_206)->finalize, ((struct sNode*)right_node_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            come_call_finalizer3(right_value299,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value300,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result163__;
                                            if(right_node_206) { right_node_206 = come_decrement_ref_count2(right_node_206, ((struct sNode*)right_node_206)->finalize, ((struct sNode*)right_node_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional313=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 991, 2638)), "19eq.c", 991, 2639))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 991, 2638)), "19eq.c", 991, 2639))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 991, 2640)), "19eq.c", 991, 2641))->p, "19eq.c", 991, 2642))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 991, 2643)), "19eq.c", 991, 2644))->p+1), "19eq.c", 991, 2645))==38&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 991, 2646)), "19eq.c", 991, 2647))->p+2), "19eq.c", 991, 2648))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 991, 2649)), "19eq.c", 991, 2650))->p, "19eq.c", 991, 2651))==38&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 991, 2652)), "19eq.c", 991, 2653))->p+1), "19eq.c", 991, 2654))==61)),                                            _if_conditional313) {
                                                if(_if_conditional314=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 993, 2655)), "19eq.c", 993, 2656))->p, "19eq.c", 993, 2657))==92,                                                _if_conditional314) {
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 994, 2658)), "19eq.c", 994, 2659))->p+=3;
                                                    (come_push_stackframe("19eq.c", 995,2660),skip_spaces_and_lf(info),come_pop_stackframe());
                                                    quote_208=(_Bool)1;
                                                }
                                                else {
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 999, 2661)), "19eq.c", 999, 2662))->p+=2;
                                                    (come_push_stackframe("19eq.c", 1000,2663),skip_spaces_and_lf(info),come_pop_stackframe());
                                                    quote_208=(_Bool)0;
                                                }
                                                right_node_209=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 1004, 2664),__exception_result_var_b270=((struct sNode*)(right_value306=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b270));
                                                if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1006, "struct sNode");
                                                _inf_obj_value11=come_increment_ref_count((come_push_stackframe("19eq.c", 1006, 2666),__exception_result_var_b271=((struct sAndEqualNode*)(right_value308=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)(right_value307=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1006, "sAndEqualNode"))), "19eq.c", 1006, 2665))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_209),quote_208,info))), come_pop_stackframe(), __exception_result_var_b271));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sNodeBase_sline;
                                                _inf_value11->sname=(void*)sNodeBase_sname;
                                                _inf_value11->terminated=(void*)sNodeBase_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result166__ = __result_obj__ = ((struct sNode*)(right_value313=_inf_value11));
                                                if(right_node_209) { right_node_209 = come_decrement_ref_count2(right_node_209, ((struct sNode*)right_node_209)->finalize, ((struct sNode*)right_node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                come_call_finalizer3(right_value307,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value308,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result166__;
                                                if(right_node_209) { right_node_209 = come_decrement_ref_count2(right_node_209, ((struct sNode*)right_node_209)->finalize, ((struct sNode*)right_node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional324=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 1008, 2708)), "19eq.c", 1008, 2709))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "19eq.c", 1008, 2708)), "19eq.c", 1008, 2709))->_protocol_obj)&&((*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1008, 2710)), "19eq.c", 1008, 2711))->p, "19eq.c", 1008, 2712))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1008, 2713)), "19eq.c", 1008, 2714))->p+1), "19eq.c", 1008, 2715))==124&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1008, 2716)), "19eq.c", 1008, 2717))->p+2), "19eq.c", 1008, 2718))==61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1008, 2719)), "19eq.c", 1008, 2720))->p, "19eq.c", 1008, 2721))==124&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1008, 2722)), "19eq.c", 1008, 2723))->p+1), "19eq.c", 1008, 2724))==61)),                                                _if_conditional324) {
                                                    if(_if_conditional325=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1010, 2725)), "19eq.c", 1010, 2726))->p, "19eq.c", 1010, 2727))==92,                                                    _if_conditional325) {
                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1011, 2728)), "19eq.c", 1011, 2729))->p+=3;
                                                        (come_push_stackframe("19eq.c", 1012,2730),skip_spaces_and_lf(info),come_pop_stackframe());
                                                        quote_211=(_Bool)1;
                                                    }
                                                    else {
                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1016, 2731)), "19eq.c", 1016, 2732))->p+=2;
                                                        (come_push_stackframe("19eq.c", 1017,2733),skip_spaces_and_lf(info),come_pop_stackframe());
                                                        quote_211=(_Bool)0;
                                                    }
                                                    right_node_212=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 1021, 2734),__exception_result_var_b275=((struct sNode*)(right_value314=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b275));
                                                    if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1023, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count((come_push_stackframe("19eq.c", 1023, 2736),__exception_result_var_b276=((struct sOrEqualNode*)(right_value316=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)(right_value315=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1023, "sOrEqualNode"))), "19eq.c", 1023, 2735))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_212),quote_211,info))), come_pop_stackframe(), __exception_result_var_b276));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                                    _inf_value12->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result169__ = __result_obj__ = ((struct sNode*)(right_value321=_inf_value12));
                                                    if(right_node_212) { right_node_212 = come_decrement_ref_count2(right_node_212, ((struct sNode*)right_node_212)->finalize, ((struct sNode*)right_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    come_call_finalizer3(right_value315,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value316,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result169__;
                                                    if(right_node_212) { right_node_212 = come_decrement_ref_count2(right_node_212, ((struct sNode*)right_node_212)->finalize, ((struct sNode*)right_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional335=(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1025, 2778)), "19eq.c", 1025, 2779))->p, "19eq.c", 1025, 2780))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1025, 2781)), "19eq.c", 1025, 2782))->p+1), "19eq.c", 1025, 2783))==61&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1025, 2784)), "19eq.c", 1025, 2785))->p+2), "19eq.c", 1025, 2786))!=61)||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1025, 2787)), "19eq.c", 1025, 2788))->p, "19eq.c", 1025, 2789))==61&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1025, 2790)), "19eq.c", 1025, 2791))->p+1), "19eq.c", 1025, 2792))!=61),                                                    _if_conditional335) {
                                                        if(_if_conditional336=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1027, 2793)), "19eq.c", 1027, 2794))->p, "19eq.c", 1027, 2795))==92,                                                        _if_conditional336) {
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1028, 2796)), "19eq.c", 1028, 2797))->p+=2;
                                                            (come_push_stackframe("19eq.c", 1029,2798),skip_spaces_and_lf(info),come_pop_stackframe());
                                                            quote_214=(_Bool)1;
                                                        }
                                                        else {
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 1033, 2799)), "19eq.c", 1033, 2800))->p++;
                                                            (come_push_stackframe("19eq.c", 1034,2801),skip_spaces_and_lf(info),come_pop_stackframe());
                                                            quote_214=(_Bool)0;
                                                        }
                                                        right_node_215=(struct sNode*)come_increment_ref_count((come_push_stackframe("19eq.c", 1038, 2802),__exception_result_var_b280=((struct sNode*)(right_value322=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b280));
                                                        if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1040, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count((come_push_stackframe("19eq.c", 1040, 2804),__exception_result_var_b281=((struct sExpEqualNode*)(right_value324=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)(right_value323=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1040, "sExpEqualNode"))), "19eq.c", 1040, 2803))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_215),quote_214,info))), come_pop_stackframe(), __exception_result_var_b281));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sNodeBase_sline;
                                                        _inf_value13->sname=(void*)sNodeBase_sname;
                                                        _inf_value13->terminated=(void*)sNodeBase_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result172__ = __result_obj__ = ((struct sNode*)(right_value329=_inf_value13));
                                                        if(right_node_215) { right_node_215 = come_decrement_ref_count2(right_node_215, ((struct sNode*)right_node_215)->finalize, ((struct sNode*)right_node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        come_call_finalizer3(right_value323,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value324,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result172__;
                                                        if(right_node_215) { right_node_215 = come_decrement_ref_count2(right_node_215, ((struct sNode*)right_node_215)->finalize, ((struct sNode*)right_node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result173__ = __result_obj__ = (come_push_stackframe("19eq.c", 1043, 2846),__exception_result_var_b285=((struct sNode*)(right_value330=post_position_operator((struct sNode*)come_increment_ref_count(node),info))), come_pop_stackframe(), __exception_result_var_b285);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value330) { right_value330 = come_decrement_ref_count2(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result173__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional209=self!=((void*)0)&&((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 0, 1978)), "sPlusPlusNode_finalize", 0, 1979))->sname!=((void*)0),            _if_conditional209) {
                ((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 0, 1980)), "sPlusPlusNode_finalize", 0, 1981))->sname = come_decrement_ref_count2(((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 0, 1980)), "sPlusPlusNode_finalize", 0, 1981))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional210=self!=((void*)0)&&((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1, 1982)), "sPlusPlusNode_finalize", 1, 1983))->mLeft!=((void*)0),            _if_conditional210) {
                if(((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1, 1984)), "sPlusPlusNode_finalize", 1, 1985))->mLeft) { ((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1, 1984)), "sPlusPlusNode_finalize", 1, 1985))->mLeft = come_decrement_ref_count2(((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1, 1984)), "sPlusPlusNode_finalize", 1, 1985))->mLeft, ((struct sNode*)((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1, 1984)), "sPlusPlusNode_finalize", 1, 1985))->mLeft)->finalize, ((struct sNode*)((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1, 1984)), "sPlusPlusNode_finalize", 1, 1985))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool _if_conditional211;
struct sPlusPlusNode* __result134__;
void* right_value232;
struct sPlusPlusNode* result_181;
_Bool _if_conditional212;
_Bool _if_conditional213;
char* __exception_result_var_b225;
void* right_value233;
char* __dec_obj88;
_Bool _if_conditional214;
struct sNode* __exception_result_var_b226;
void* right_value234;
struct sNode* __dec_obj89;
_Bool _if_conditional215;
struct sPlusPlusNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
memset(&result_181, 0, sizeof(struct sPlusPlusNode*));
right_value233 = (void*)0;
right_value234 = (void*)0;
            if(_if_conditional211=self==(void*)0,            _if_conditional211) {
                __result134__ = __result_obj__ = (void*)0;
                return __result134__;
            }
            result_181=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value232=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3, "sPlusPlusNode"))));
            come_call_finalizer3(right_value232,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional212=self!=((void*)0),            _if_conditional212) {
                ((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(result_181, "sPlusPlusNode_clone", 4, 1986)), "sPlusPlusNode_clone", 4, 1987))->sline=((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 4, 1988)), "sPlusPlusNode_clone", 4, 1989))->sline;
            }
            if(_if_conditional213=self!=((void*)0)&&((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 5, 1990)), "sPlusPlusNode_clone", 5, 1991))->sname!=((void*)0),            _if_conditional213) {
                __dec_obj88=((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(result_181, "sPlusPlusNode_clone", 5, 1992)), "sPlusPlusNode_clone", 5, 1993))->sname;
                ((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(result_181, "sPlusPlusNode_clone", 5, 1992)), "sPlusPlusNode_clone", 5, 1993))->sname=(char*)come_increment_ref_count(((char*)(right_value233=(come_push_stackframe("sPlusPlusNode_clone", 5, 1996),__exception_result_var_b225=string_clone(((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 5, 1994)), "sPlusPlusNode_clone", 5, 1995))->sname), come_pop_stackframe(), __exception_result_var_b225))));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional214=self!=((void*)0)&&((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 6, 1997)), "sPlusPlusNode_clone", 6, 1998))->mLeft!=((void*)0),            _if_conditional214) {
                __dec_obj89=((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(result_181, "sPlusPlusNode_clone", 6, 1999)), "sPlusPlusNode_clone", 6, 2000))->mLeft;
                ((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(result_181, "sPlusPlusNode_clone", 6, 1999)), "sPlusPlusNode_clone", 6, 2000))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=(come_push_stackframe("sPlusPlusNode_clone", 6, 2003),__exception_result_var_b226=sNode_clone(((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 6, 2001)), "sPlusPlusNode_clone", 6, 2002))->mLeft), come_pop_stackframe(), __exception_result_var_b226))));
                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value234) { right_value234 = come_decrement_ref_count2(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional215=self!=((void*)0),            _if_conditional215) {
                ((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(result_181, "sPlusPlusNode_clone", 7, 2004)), "sPlusPlusNode_clone", 7, 2005))->mQuote=((struct sPlusPlusNode*)come_null_check(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 7, 2006)), "sPlusPlusNode_clone", 7, 2007))->mQuote;
            }
            __result135__ = __result_obj__ = result_181;
            come_call_finalizer3(result_181,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result135__;
            come_call_finalizer3(result_181,sPlusPlusNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional218=self!=((void*)0)&&((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 0, 2036)), "sMinusMinusNode_finalize", 0, 2037))->sname!=((void*)0),                _if_conditional218) {
                    ((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 0, 2038)), "sMinusMinusNode_finalize", 0, 2039))->sname = come_decrement_ref_count2(((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 0, 2038)), "sMinusMinusNode_finalize", 0, 2039))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional219=self!=((void*)0)&&((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1, 2040)), "sMinusMinusNode_finalize", 1, 2041))->mLeft!=((void*)0),                _if_conditional219) {
                    if(((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1, 2042)), "sMinusMinusNode_finalize", 1, 2043))->mLeft) { ((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1, 2042)), "sMinusMinusNode_finalize", 1, 2043))->mLeft = come_decrement_ref_count2(((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1, 2042)), "sMinusMinusNode_finalize", 1, 2043))->mLeft, ((struct sNode*)((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1, 2042)), "sMinusMinusNode_finalize", 1, 2043))->mLeft)->finalize, ((struct sNode*)((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1, 2042)), "sMinusMinusNode_finalize", 1, 2043))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool _if_conditional220;
struct sMinusMinusNode* __result137__;
void* right_value238;
struct sMinusMinusNode* result_183;
_Bool _if_conditional221;
_Bool _if_conditional222;
char* __exception_result_var_b228;
void* right_value239;
char* __dec_obj90;
_Bool _if_conditional223;
struct sNode* __exception_result_var_b229;
void* right_value240;
struct sNode* __dec_obj91;
_Bool _if_conditional224;
struct sMinusMinusNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
memset(&result_183, 0, sizeof(struct sMinusMinusNode*));
right_value239 = (void*)0;
right_value240 = (void*)0;
                if(_if_conditional220=self==(void*)0,                _if_conditional220) {
                    __result137__ = __result_obj__ = (void*)0;
                    return __result137__;
                }
                result_183=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value238=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3, "sMinusMinusNode"))));
                come_call_finalizer3(right_value238,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional221=self!=((void*)0),                _if_conditional221) {
                    ((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(result_183, "sMinusMinusNode_clone", 4, 2044)), "sMinusMinusNode_clone", 4, 2045))->sline=((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 4, 2046)), "sMinusMinusNode_clone", 4, 2047))->sline;
                }
                if(_if_conditional222=self!=((void*)0)&&((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 5, 2048)), "sMinusMinusNode_clone", 5, 2049))->sname!=((void*)0),                _if_conditional222) {
                    __dec_obj90=((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(result_183, "sMinusMinusNode_clone", 5, 2050)), "sMinusMinusNode_clone", 5, 2051))->sname;
                    ((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(result_183, "sMinusMinusNode_clone", 5, 2050)), "sMinusMinusNode_clone", 5, 2051))->sname=(char*)come_increment_ref_count(((char*)(right_value239=(come_push_stackframe("sMinusMinusNode_clone", 5, 2054),__exception_result_var_b228=string_clone(((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 5, 2052)), "sMinusMinusNode_clone", 5, 2053))->sname), come_pop_stackframe(), __exception_result_var_b228))));
                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional223=self!=((void*)0)&&((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 6, 2055)), "sMinusMinusNode_clone", 6, 2056))->mLeft!=((void*)0),                _if_conditional223) {
                    __dec_obj91=((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(result_183, "sMinusMinusNode_clone", 6, 2057)), "sMinusMinusNode_clone", 6, 2058))->mLeft;
                    ((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(result_183, "sMinusMinusNode_clone", 6, 2057)), "sMinusMinusNode_clone", 6, 2058))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=(come_push_stackframe("sMinusMinusNode_clone", 6, 2061),__exception_result_var_b229=sNode_clone(((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 6, 2059)), "sMinusMinusNode_clone", 6, 2060))->mLeft), come_pop_stackframe(), __exception_result_var_b229))));
                    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional224=self!=((void*)0),                _if_conditional224) {
                    ((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(result_183, "sMinusMinusNode_clone", 7, 2062)), "sMinusMinusNode_clone", 7, 2063))->mQuote=((struct sMinusMinusNode*)come_null_check(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 7, 2064)), "sMinusMinusNode_clone", 7, 2065))->mQuote;
                }
                __result138__ = __result_obj__ = result_183;
                come_call_finalizer3(result_183,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result138__;
                come_call_finalizer3(result_183,sMinusMinusNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional227=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 0, 2095)), "sPlusEqualNode_finalize", 0, 2096))->sname!=((void*)0),                    _if_conditional227) {
                        ((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 0, 2097)), "sPlusEqualNode_finalize", 0, 2098))->sname = come_decrement_ref_count2(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 0, 2097)), "sPlusEqualNode_finalize", 0, 2098))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional228=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1, 2099)), "sPlusEqualNode_finalize", 1, 2100))->mLeft!=((void*)0),                    _if_conditional228) {
                        if(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1, 2101)), "sPlusEqualNode_finalize", 1, 2102))->mLeft) { ((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1, 2101)), "sPlusEqualNode_finalize", 1, 2102))->mLeft = come_decrement_ref_count2(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1, 2101)), "sPlusEqualNode_finalize", 1, 2102))->mLeft, ((struct sNode*)((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1, 2101)), "sPlusEqualNode_finalize", 1, 2102))->mLeft)->finalize, ((struct sNode*)((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1, 2101)), "sPlusEqualNode_finalize", 1, 2102))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional229=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2, 2103)), "sPlusEqualNode_finalize", 2, 2104))->mRight!=((void*)0),                    _if_conditional229) {
                        if(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2, 2105)), "sPlusEqualNode_finalize", 2, 2106))->mRight) { ((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2, 2105)), "sPlusEqualNode_finalize", 2, 2106))->mRight = come_decrement_ref_count2(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2, 2105)), "sPlusEqualNode_finalize", 2, 2106))->mRight, ((struct sNode*)((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2, 2105)), "sPlusEqualNode_finalize", 2, 2106))->mRight)->finalize, ((struct sNode*)((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2, 2105)), "sPlusEqualNode_finalize", 2, 2106))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional230;
struct sPlusEqualNode* __result140__;
void* right_value245;
struct sPlusEqualNode* result_186;
_Bool _if_conditional231;
_Bool _if_conditional232;
char* __exception_result_var_b232;
void* right_value246;
char* __dec_obj92;
_Bool _if_conditional233;
struct sNode* __exception_result_var_b233;
void* right_value247;
struct sNode* __dec_obj93;
_Bool _if_conditional234;
struct sNode* __exception_result_var_b234;
void* right_value248;
struct sNode* __dec_obj94;
_Bool _if_conditional235;
struct sPlusEqualNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
memset(&result_186, 0, sizeof(struct sPlusEqualNode*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
                    if(_if_conditional230=self==(void*)0,                    _if_conditional230) {
                        __result140__ = __result_obj__ = (void*)0;
                        return __result140__;
                    }
                    result_186=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value245=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3, "sPlusEqualNode"))));
                    come_call_finalizer3(right_value245,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional231=self!=((void*)0),                    _if_conditional231) {
                        ((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(result_186, "sPlusEqualNode_clone", 4, 2107)), "sPlusEqualNode_clone", 4, 2108))->sline=((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 4, 2109)), "sPlusEqualNode_clone", 4, 2110))->sline;
                    }
                    if(_if_conditional232=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 5, 2111)), "sPlusEqualNode_clone", 5, 2112))->sname!=((void*)0),                    _if_conditional232) {
                        __dec_obj92=((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(result_186, "sPlusEqualNode_clone", 5, 2113)), "sPlusEqualNode_clone", 5, 2114))->sname;
                        ((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(result_186, "sPlusEqualNode_clone", 5, 2113)), "sPlusEqualNode_clone", 5, 2114))->sname=(char*)come_increment_ref_count(((char*)(right_value246=(come_push_stackframe("sPlusEqualNode_clone", 5, 2117),__exception_result_var_b232=string_clone(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 5, 2115)), "sPlusEqualNode_clone", 5, 2116))->sname), come_pop_stackframe(), __exception_result_var_b232))));
                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional233=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 6, 2118)), "sPlusEqualNode_clone", 6, 2119))->mLeft!=((void*)0),                    _if_conditional233) {
                        __dec_obj93=((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(result_186, "sPlusEqualNode_clone", 6, 2120)), "sPlusEqualNode_clone", 6, 2121))->mLeft;
                        ((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(result_186, "sPlusEqualNode_clone", 6, 2120)), "sPlusEqualNode_clone", 6, 2121))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=(come_push_stackframe("sPlusEqualNode_clone", 6, 2124),__exception_result_var_b233=sNode_clone(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 6, 2122)), "sPlusEqualNode_clone", 6, 2123))->mLeft), come_pop_stackframe(), __exception_result_var_b233))));
                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional234=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 7, 2125)), "sPlusEqualNode_clone", 7, 2126))->mRight!=((void*)0),                    _if_conditional234) {
                        __dec_obj94=((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(result_186, "sPlusEqualNode_clone", 7, 2127)), "sPlusEqualNode_clone", 7, 2128))->mRight;
                        ((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(result_186, "sPlusEqualNode_clone", 7, 2127)), "sPlusEqualNode_clone", 7, 2128))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=(come_push_stackframe("sPlusEqualNode_clone", 7, 2131),__exception_result_var_b234=sNode_clone(((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 7, 2129)), "sPlusEqualNode_clone", 7, 2130))->mRight), come_pop_stackframe(), __exception_result_var_b234))));
                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional235=self!=((void*)0),                    _if_conditional235) {
                        ((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(result_186, "sPlusEqualNode_clone", 8, 2132)), "sPlusEqualNode_clone", 8, 2133))->mQuote=((struct sPlusEqualNode*)come_null_check(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 8, 2134)), "sPlusEqualNode_clone", 8, 2135))->mQuote;
                    }
                    __result141__ = __result_obj__ = result_186;
                    come_call_finalizer3(result_186,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result141__;
                    come_call_finalizer3(result_186,sPlusEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional238=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 0, 2165)), "sMinusEqualNode_finalize", 0, 2166))->sname!=((void*)0),                        _if_conditional238) {
                            ((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 0, 2167)), "sMinusEqualNode_finalize", 0, 2168))->sname = come_decrement_ref_count2(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 0, 2167)), "sMinusEqualNode_finalize", 0, 2168))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional239=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1, 2169)), "sMinusEqualNode_finalize", 1, 2170))->mLeft!=((void*)0),                        _if_conditional239) {
                            if(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1, 2171)), "sMinusEqualNode_finalize", 1, 2172))->mLeft) { ((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1, 2171)), "sMinusEqualNode_finalize", 1, 2172))->mLeft = come_decrement_ref_count2(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1, 2171)), "sMinusEqualNode_finalize", 1, 2172))->mLeft, ((struct sNode*)((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1, 2171)), "sMinusEqualNode_finalize", 1, 2172))->mLeft)->finalize, ((struct sNode*)((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1, 2171)), "sMinusEqualNode_finalize", 1, 2172))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional240=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2, 2173)), "sMinusEqualNode_finalize", 2, 2174))->mRight!=((void*)0),                        _if_conditional240) {
                            if(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2, 2175)), "sMinusEqualNode_finalize", 2, 2176))->mRight) { ((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2, 2175)), "sMinusEqualNode_finalize", 2, 2176))->mRight = come_decrement_ref_count2(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2, 2175)), "sMinusEqualNode_finalize", 2, 2176))->mRight, ((struct sNode*)((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2, 2175)), "sMinusEqualNode_finalize", 2, 2176))->mRight)->finalize, ((struct sNode*)((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2, 2175)), "sMinusEqualNode_finalize", 2, 2176))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool _if_conditional241;
struct sMinusEqualNode* __result143__;
void* right_value253;
struct sMinusEqualNode* result_189;
_Bool _if_conditional242;
_Bool _if_conditional243;
char* __exception_result_var_b237;
void* right_value254;
char* __dec_obj95;
_Bool _if_conditional244;
_Bool _if_conditional245;
struct sNode* __exception_result_var_b238;
void* right_value255;
struct sNode* __dec_obj96;
_Bool _if_conditional246;
struct sNode* __exception_result_var_b239;
void* right_value256;
struct sNode* __dec_obj97;
struct sMinusEqualNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
memset(&result_189, 0, sizeof(struct sMinusEqualNode*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
                        if(_if_conditional241=self==(void*)0,                        _if_conditional241) {
                            __result143__ = __result_obj__ = (void*)0;
                            return __result143__;
                        }
                        result_189=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value253=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3, "sMinusEqualNode"))));
                        come_call_finalizer3(right_value253,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional242=self!=((void*)0),                        _if_conditional242) {
                            ((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(result_189, "sMinusEqualNode_clone", 4, 2177)), "sMinusEqualNode_clone", 4, 2178))->sline=((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 4, 2179)), "sMinusEqualNode_clone", 4, 2180))->sline;
                        }
                        if(_if_conditional243=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 5, 2181)), "sMinusEqualNode_clone", 5, 2182))->sname!=((void*)0),                        _if_conditional243) {
                            __dec_obj95=((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(result_189, "sMinusEqualNode_clone", 5, 2183)), "sMinusEqualNode_clone", 5, 2184))->sname;
                            ((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(result_189, "sMinusEqualNode_clone", 5, 2183)), "sMinusEqualNode_clone", 5, 2184))->sname=(char*)come_increment_ref_count(((char*)(right_value254=(come_push_stackframe("sMinusEqualNode_clone", 5, 2187),__exception_result_var_b237=string_clone(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 5, 2185)), "sMinusEqualNode_clone", 5, 2186))->sname), come_pop_stackframe(), __exception_result_var_b237))));
                            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional244=self!=((void*)0),                        _if_conditional244) {
                            ((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(result_189, "sMinusEqualNode_clone", 6, 2188)), "sMinusEqualNode_clone", 6, 2189))->mQuote=((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 6, 2190)), "sMinusEqualNode_clone", 6, 2191))->mQuote;
                        }
                        if(_if_conditional245=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 7, 2192)), "sMinusEqualNode_clone", 7, 2193))->mLeft!=((void*)0),                        _if_conditional245) {
                            __dec_obj96=((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(result_189, "sMinusEqualNode_clone", 7, 2194)), "sMinusEqualNode_clone", 7, 2195))->mLeft;
                            ((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(result_189, "sMinusEqualNode_clone", 7, 2194)), "sMinusEqualNode_clone", 7, 2195))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=(come_push_stackframe("sMinusEqualNode_clone", 7, 2198),__exception_result_var_b238=sNode_clone(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 7, 2196)), "sMinusEqualNode_clone", 7, 2197))->mLeft), come_pop_stackframe(), __exception_result_var_b238))));
                            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional246=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 8, 2199)), "sMinusEqualNode_clone", 8, 2200))->mRight!=((void*)0),                        _if_conditional246) {
                            __dec_obj97=((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(result_189, "sMinusEqualNode_clone", 8, 2201)), "sMinusEqualNode_clone", 8, 2202))->mRight;
                            ((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(result_189, "sMinusEqualNode_clone", 8, 2201)), "sMinusEqualNode_clone", 8, 2202))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=(come_push_stackframe("sMinusEqualNode_clone", 8, 2205),__exception_result_var_b239=sNode_clone(((struct sMinusEqualNode*)come_null_check(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 8, 2203)), "sMinusEqualNode_clone", 8, 2204))->mRight), come_pop_stackframe(), __exception_result_var_b239))));
                            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        __result144__ = __result_obj__ = result_189;
                        come_call_finalizer3(result_189,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result144__;
                        come_call_finalizer3(result_189,sMinusEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional249=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 0, 2235)), "sMultEqualNode_finalize", 0, 2236))->sname!=((void*)0),                            _if_conditional249) {
                                ((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 0, 2237)), "sMultEqualNode_finalize", 0, 2238))->sname = come_decrement_ref_count2(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 0, 2237)), "sMultEqualNode_finalize", 0, 2238))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional250=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1, 2239)), "sMultEqualNode_finalize", 1, 2240))->mLeft!=((void*)0),                            _if_conditional250) {
                                if(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1, 2241)), "sMultEqualNode_finalize", 1, 2242))->mLeft) { ((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1, 2241)), "sMultEqualNode_finalize", 1, 2242))->mLeft = come_decrement_ref_count2(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1, 2241)), "sMultEqualNode_finalize", 1, 2242))->mLeft, ((struct sNode*)((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1, 2241)), "sMultEqualNode_finalize", 1, 2242))->mLeft)->finalize, ((struct sNode*)((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1, 2241)), "sMultEqualNode_finalize", 1, 2242))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional251=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2, 2243)), "sMultEqualNode_finalize", 2, 2244))->mRight!=((void*)0),                            _if_conditional251) {
                                if(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2, 2245)), "sMultEqualNode_finalize", 2, 2246))->mRight) { ((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2, 2245)), "sMultEqualNode_finalize", 2, 2246))->mRight = come_decrement_ref_count2(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2, 2245)), "sMultEqualNode_finalize", 2, 2246))->mRight, ((struct sNode*)((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2, 2245)), "sMultEqualNode_finalize", 2, 2246))->mRight)->finalize, ((struct sNode*)((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2, 2245)), "sMultEqualNode_finalize", 2, 2246))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__;
_Bool _if_conditional252;
struct sMultEqualNode* __result146__;
void* right_value261;
struct sMultEqualNode* result_192;
_Bool _if_conditional253;
_Bool _if_conditional254;
char* __exception_result_var_b242;
void* right_value262;
char* __dec_obj98;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct sNode* __exception_result_var_b243;
void* right_value263;
struct sNode* __dec_obj99;
_Bool _if_conditional257;
struct sNode* __exception_result_var_b244;
void* right_value264;
struct sNode* __dec_obj100;
struct sMultEqualNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
memset(&result_192, 0, sizeof(struct sMultEqualNode*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
                            if(_if_conditional252=self==(void*)0,                            _if_conditional252) {
                                __result146__ = __result_obj__ = (void*)0;
                                return __result146__;
                            }
                            result_192=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value261=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3, "sMultEqualNode"))));
                            come_call_finalizer3(right_value261,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional253=self!=((void*)0),                            _if_conditional253) {
                                ((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(result_192, "sMultEqualNode_clone", 4, 2247)), "sMultEqualNode_clone", 4, 2248))->sline=((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 4, 2249)), "sMultEqualNode_clone", 4, 2250))->sline;
                            }
                            if(_if_conditional254=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 5, 2251)), "sMultEqualNode_clone", 5, 2252))->sname!=((void*)0),                            _if_conditional254) {
                                __dec_obj98=((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(result_192, "sMultEqualNode_clone", 5, 2253)), "sMultEqualNode_clone", 5, 2254))->sname;
                                ((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(result_192, "sMultEqualNode_clone", 5, 2253)), "sMultEqualNode_clone", 5, 2254))->sname=(char*)come_increment_ref_count(((char*)(right_value262=(come_push_stackframe("sMultEqualNode_clone", 5, 2257),__exception_result_var_b242=string_clone(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 5, 2255)), "sMultEqualNode_clone", 5, 2256))->sname), come_pop_stackframe(), __exception_result_var_b242))));
                                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional255=self!=((void*)0),                            _if_conditional255) {
                                ((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(result_192, "sMultEqualNode_clone", 6, 2258)), "sMultEqualNode_clone", 6, 2259))->mQuote=((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 6, 2260)), "sMultEqualNode_clone", 6, 2261))->mQuote;
                            }
                            if(_if_conditional256=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 7, 2262)), "sMultEqualNode_clone", 7, 2263))->mLeft!=((void*)0),                            _if_conditional256) {
                                __dec_obj99=((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(result_192, "sMultEqualNode_clone", 7, 2264)), "sMultEqualNode_clone", 7, 2265))->mLeft;
                                ((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(result_192, "sMultEqualNode_clone", 7, 2264)), "sMultEqualNode_clone", 7, 2265))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=(come_push_stackframe("sMultEqualNode_clone", 7, 2268),__exception_result_var_b243=sNode_clone(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 7, 2266)), "sMultEqualNode_clone", 7, 2267))->mLeft), come_pop_stackframe(), __exception_result_var_b243))));
                                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional257=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 8, 2269)), "sMultEqualNode_clone", 8, 2270))->mRight!=((void*)0),                            _if_conditional257) {
                                __dec_obj100=((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(result_192, "sMultEqualNode_clone", 8, 2271)), "sMultEqualNode_clone", 8, 2272))->mRight;
                                ((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(result_192, "sMultEqualNode_clone", 8, 2271)), "sMultEqualNode_clone", 8, 2272))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=(come_push_stackframe("sMultEqualNode_clone", 8, 2275),__exception_result_var_b244=sNode_clone(((struct sMultEqualNode*)come_null_check(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 8, 2273)), "sMultEqualNode_clone", 8, 2274))->mRight), come_pop_stackframe(), __exception_result_var_b244))));
                                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            __result147__ = __result_obj__ = result_192;
                            come_call_finalizer3(result_192,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result147__;
                            come_call_finalizer3(result_192,sMultEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional260;
_Bool _if_conditional261;
_Bool _if_conditional262;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional260=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 0, 2305)), "sDivEqualNode_finalize", 0, 2306))->sname!=((void*)0),                                _if_conditional260) {
                                    ((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 0, 2307)), "sDivEqualNode_finalize", 0, 2308))->sname = come_decrement_ref_count2(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 0, 2307)), "sDivEqualNode_finalize", 0, 2308))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional261=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1, 2309)), "sDivEqualNode_finalize", 1, 2310))->mLeft!=((void*)0),                                _if_conditional261) {
                                    if(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1, 2311)), "sDivEqualNode_finalize", 1, 2312))->mLeft) { ((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1, 2311)), "sDivEqualNode_finalize", 1, 2312))->mLeft = come_decrement_ref_count2(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1, 2311)), "sDivEqualNode_finalize", 1, 2312))->mLeft, ((struct sNode*)((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1, 2311)), "sDivEqualNode_finalize", 1, 2312))->mLeft)->finalize, ((struct sNode*)((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1, 2311)), "sDivEqualNode_finalize", 1, 2312))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional262=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2, 2313)), "sDivEqualNode_finalize", 2, 2314))->mRight!=((void*)0),                                _if_conditional262) {
                                    if(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2, 2315)), "sDivEqualNode_finalize", 2, 2316))->mRight) { ((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2, 2315)), "sDivEqualNode_finalize", 2, 2316))->mRight = come_decrement_ref_count2(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2, 2315)), "sDivEqualNode_finalize", 2, 2316))->mRight, ((struct sNode*)((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2, 2315)), "sDivEqualNode_finalize", 2, 2316))->mRight)->finalize, ((struct sNode*)((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2, 2315)), "sDivEqualNode_finalize", 2, 2316))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__;
_Bool _if_conditional263;
struct sDivEqualNode* __result149__;
void* right_value269;
struct sDivEqualNode* result_195;
_Bool _if_conditional264;
_Bool _if_conditional265;
char* __exception_result_var_b247;
void* right_value270;
char* __dec_obj101;
_Bool _if_conditional266;
_Bool _if_conditional267;
struct sNode* __exception_result_var_b248;
void* right_value271;
struct sNode* __dec_obj102;
_Bool _if_conditional268;
struct sNode* __exception_result_var_b249;
void* right_value272;
struct sNode* __dec_obj103;
struct sDivEqualNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
memset(&result_195, 0, sizeof(struct sDivEqualNode*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
                                if(_if_conditional263=self==(void*)0,                                _if_conditional263) {
                                    __result149__ = __result_obj__ = (void*)0;
                                    return __result149__;
                                }
                                result_195=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value269=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3, "sDivEqualNode"))));
                                come_call_finalizer3(right_value269,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional264=self!=((void*)0),                                _if_conditional264) {
                                    ((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(result_195, "sDivEqualNode_clone", 4, 2317)), "sDivEqualNode_clone", 4, 2318))->sline=((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 4, 2319)), "sDivEqualNode_clone", 4, 2320))->sline;
                                }
                                if(_if_conditional265=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 5, 2321)), "sDivEqualNode_clone", 5, 2322))->sname!=((void*)0),                                _if_conditional265) {
                                    __dec_obj101=((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(result_195, "sDivEqualNode_clone", 5, 2323)), "sDivEqualNode_clone", 5, 2324))->sname;
                                    ((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(result_195, "sDivEqualNode_clone", 5, 2323)), "sDivEqualNode_clone", 5, 2324))->sname=(char*)come_increment_ref_count(((char*)(right_value270=(come_push_stackframe("sDivEqualNode_clone", 5, 2327),__exception_result_var_b247=string_clone(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 5, 2325)), "sDivEqualNode_clone", 5, 2326))->sname), come_pop_stackframe(), __exception_result_var_b247))));
                                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional266=self!=((void*)0),                                _if_conditional266) {
                                    ((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(result_195, "sDivEqualNode_clone", 6, 2328)), "sDivEqualNode_clone", 6, 2329))->mQuote=((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 6, 2330)), "sDivEqualNode_clone", 6, 2331))->mQuote;
                                }
                                if(_if_conditional267=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 7, 2332)), "sDivEqualNode_clone", 7, 2333))->mLeft!=((void*)0),                                _if_conditional267) {
                                    __dec_obj102=((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(result_195, "sDivEqualNode_clone", 7, 2334)), "sDivEqualNode_clone", 7, 2335))->mLeft;
                                    ((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(result_195, "sDivEqualNode_clone", 7, 2334)), "sDivEqualNode_clone", 7, 2335))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=(come_push_stackframe("sDivEqualNode_clone", 7, 2338),__exception_result_var_b248=sNode_clone(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 7, 2336)), "sDivEqualNode_clone", 7, 2337))->mLeft), come_pop_stackframe(), __exception_result_var_b248))));
                                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional268=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 8, 2339)), "sDivEqualNode_clone", 8, 2340))->mRight!=((void*)0),                                _if_conditional268) {
                                    __dec_obj103=((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(result_195, "sDivEqualNode_clone", 8, 2341)), "sDivEqualNode_clone", 8, 2342))->mRight;
                                    ((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(result_195, "sDivEqualNode_clone", 8, 2341)), "sDivEqualNode_clone", 8, 2342))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=(come_push_stackframe("sDivEqualNode_clone", 8, 2345),__exception_result_var_b249=sNode_clone(((struct sDivEqualNode*)come_null_check(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 8, 2343)), "sDivEqualNode_clone", 8, 2344))->mRight), come_pop_stackframe(), __exception_result_var_b249))));
                                    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result150__ = __result_obj__ = result_195;
                                come_call_finalizer3(result_195,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result150__;
                                come_call_finalizer3(result_195,sDivEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional271=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 0, 2375)), "sModEqualNode_finalize", 0, 2376))->sname!=((void*)0),                                    _if_conditional271) {
                                        ((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 0, 2377)), "sModEqualNode_finalize", 0, 2378))->sname = come_decrement_ref_count2(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 0, 2377)), "sModEqualNode_finalize", 0, 2378))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional272=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1, 2379)), "sModEqualNode_finalize", 1, 2380))->mLeft!=((void*)0),                                    _if_conditional272) {
                                        if(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1, 2381)), "sModEqualNode_finalize", 1, 2382))->mLeft) { ((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1, 2381)), "sModEqualNode_finalize", 1, 2382))->mLeft = come_decrement_ref_count2(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1, 2381)), "sModEqualNode_finalize", 1, 2382))->mLeft, ((struct sNode*)((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1, 2381)), "sModEqualNode_finalize", 1, 2382))->mLeft)->finalize, ((struct sNode*)((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1, 2381)), "sModEqualNode_finalize", 1, 2382))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional273=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2, 2383)), "sModEqualNode_finalize", 2, 2384))->mRight!=((void*)0),                                    _if_conditional273) {
                                        if(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2, 2385)), "sModEqualNode_finalize", 2, 2386))->mRight) { ((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2, 2385)), "sModEqualNode_finalize", 2, 2386))->mRight = come_decrement_ref_count2(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2, 2385)), "sModEqualNode_finalize", 2, 2386))->mRight, ((struct sNode*)((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2, 2385)), "sModEqualNode_finalize", 2, 2386))->mRight)->finalize, ((struct sNode*)((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2, 2385)), "sModEqualNode_finalize", 2, 2386))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__;
_Bool _if_conditional274;
struct sModEqualNode* __result152__;
void* right_value277;
struct sModEqualNode* result_198;
_Bool _if_conditional275;
_Bool _if_conditional276;
char* __exception_result_var_b252;
void* right_value278;
char* __dec_obj104;
_Bool _if_conditional277;
_Bool _if_conditional278;
struct sNode* __exception_result_var_b253;
void* right_value279;
struct sNode* __dec_obj105;
_Bool _if_conditional279;
struct sNode* __exception_result_var_b254;
void* right_value280;
struct sNode* __dec_obj106;
struct sModEqualNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
memset(&result_198, 0, sizeof(struct sModEqualNode*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
                                    if(_if_conditional274=self==(void*)0,                                    _if_conditional274) {
                                        __result152__ = __result_obj__ = (void*)0;
                                        return __result152__;
                                    }
                                    result_198=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value277=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3, "sModEqualNode"))));
                                    come_call_finalizer3(right_value277,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional275=self!=((void*)0),                                    _if_conditional275) {
                                        ((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(result_198, "sModEqualNode_clone", 4, 2387)), "sModEqualNode_clone", 4, 2388))->sline=((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 4, 2389)), "sModEqualNode_clone", 4, 2390))->sline;
                                    }
                                    if(_if_conditional276=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 5, 2391)), "sModEqualNode_clone", 5, 2392))->sname!=((void*)0),                                    _if_conditional276) {
                                        __dec_obj104=((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(result_198, "sModEqualNode_clone", 5, 2393)), "sModEqualNode_clone", 5, 2394))->sname;
                                        ((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(result_198, "sModEqualNode_clone", 5, 2393)), "sModEqualNode_clone", 5, 2394))->sname=(char*)come_increment_ref_count(((char*)(right_value278=(come_push_stackframe("sModEqualNode_clone", 5, 2397),__exception_result_var_b252=string_clone(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 5, 2395)), "sModEqualNode_clone", 5, 2396))->sname), come_pop_stackframe(), __exception_result_var_b252))));
                                        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional277=self!=((void*)0),                                    _if_conditional277) {
                                        ((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(result_198, "sModEqualNode_clone", 6, 2398)), "sModEqualNode_clone", 6, 2399))->mQuote=((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 6, 2400)), "sModEqualNode_clone", 6, 2401))->mQuote;
                                    }
                                    if(_if_conditional278=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 7, 2402)), "sModEqualNode_clone", 7, 2403))->mLeft!=((void*)0),                                    _if_conditional278) {
                                        __dec_obj105=((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(result_198, "sModEqualNode_clone", 7, 2404)), "sModEqualNode_clone", 7, 2405))->mLeft;
                                        ((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(result_198, "sModEqualNode_clone", 7, 2404)), "sModEqualNode_clone", 7, 2405))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=(come_push_stackframe("sModEqualNode_clone", 7, 2408),__exception_result_var_b253=sNode_clone(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 7, 2406)), "sModEqualNode_clone", 7, 2407))->mLeft), come_pop_stackframe(), __exception_result_var_b253))));
                                        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value279) { right_value279 = come_decrement_ref_count2(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional279=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 8, 2409)), "sModEqualNode_clone", 8, 2410))->mRight!=((void*)0),                                    _if_conditional279) {
                                        __dec_obj106=((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(result_198, "sModEqualNode_clone", 8, 2411)), "sModEqualNode_clone", 8, 2412))->mRight;
                                        ((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(result_198, "sModEqualNode_clone", 8, 2411)), "sModEqualNode_clone", 8, 2412))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=(come_push_stackframe("sModEqualNode_clone", 8, 2415),__exception_result_var_b254=sNode_clone(((struct sModEqualNode*)come_null_check(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 8, 2413)), "sModEqualNode_clone", 8, 2414))->mRight), come_pop_stackframe(), __exception_result_var_b254))));
                                        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    __result153__ = __result_obj__ = result_198;
                                    come_call_finalizer3(result_198,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result153__;
                                    come_call_finalizer3(result_198,sModEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional282=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 0, 2451)), "sLShifEqualNode_finalize", 0, 2452))->sname!=((void*)0),                                        _if_conditional282) {
                                            ((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 0, 2453)), "sLShifEqualNode_finalize", 0, 2454))->sname = come_decrement_ref_count2(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 0, 2453)), "sLShifEqualNode_finalize", 0, 2454))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional283=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1, 2455)), "sLShifEqualNode_finalize", 1, 2456))->mLeft!=((void*)0),                                        _if_conditional283) {
                                            if(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1, 2457)), "sLShifEqualNode_finalize", 1, 2458))->mLeft) { ((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1, 2457)), "sLShifEqualNode_finalize", 1, 2458))->mLeft = come_decrement_ref_count2(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1, 2457)), "sLShifEqualNode_finalize", 1, 2458))->mLeft, ((struct sNode*)((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1, 2457)), "sLShifEqualNode_finalize", 1, 2458))->mLeft)->finalize, ((struct sNode*)((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1, 2457)), "sLShifEqualNode_finalize", 1, 2458))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional284=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2, 2459)), "sLShifEqualNode_finalize", 2, 2460))->mRight!=((void*)0),                                        _if_conditional284) {
                                            if(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2, 2461)), "sLShifEqualNode_finalize", 2, 2462))->mRight) { ((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2, 2461)), "sLShifEqualNode_finalize", 2, 2462))->mRight = come_decrement_ref_count2(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2, 2461)), "sLShifEqualNode_finalize", 2, 2462))->mRight, ((struct sNode*)((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2, 2461)), "sLShifEqualNode_finalize", 2, 2462))->mRight)->finalize, ((struct sNode*)((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2, 2461)), "sLShifEqualNode_finalize", 2, 2462))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool _if_conditional285;
struct sLShifEqualNode* __result155__;
void* right_value285;
struct sLShifEqualNode* result_201;
_Bool _if_conditional286;
_Bool _if_conditional287;
char* __exception_result_var_b257;
void* right_value286;
char* __dec_obj107;
_Bool _if_conditional288;
_Bool _if_conditional289;
struct sNode* __exception_result_var_b258;
void* right_value287;
struct sNode* __dec_obj108;
_Bool _if_conditional290;
struct sNode* __exception_result_var_b259;
void* right_value288;
struct sNode* __dec_obj109;
struct sLShifEqualNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
memset(&result_201, 0, sizeof(struct sLShifEqualNode*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
                                        if(_if_conditional285=self==(void*)0,                                        _if_conditional285) {
                                            __result155__ = __result_obj__ = (void*)0;
                                            return __result155__;
                                        }
                                        result_201=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value285=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3, "sLShifEqualNode"))));
                                        come_call_finalizer3(right_value285,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional286=self!=((void*)0),                                        _if_conditional286) {
                                            ((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(result_201, "sLShifEqualNode_clone", 4, 2463)), "sLShifEqualNode_clone", 4, 2464))->sline=((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 4, 2465)), "sLShifEqualNode_clone", 4, 2466))->sline;
                                        }
                                        if(_if_conditional287=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 5, 2467)), "sLShifEqualNode_clone", 5, 2468))->sname!=((void*)0),                                        _if_conditional287) {
                                            __dec_obj107=((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(result_201, "sLShifEqualNode_clone", 5, 2469)), "sLShifEqualNode_clone", 5, 2470))->sname;
                                            ((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(result_201, "sLShifEqualNode_clone", 5, 2469)), "sLShifEqualNode_clone", 5, 2470))->sname=(char*)come_increment_ref_count(((char*)(right_value286=(come_push_stackframe("sLShifEqualNode_clone", 5, 2473),__exception_result_var_b257=string_clone(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 5, 2471)), "sLShifEqualNode_clone", 5, 2472))->sname), come_pop_stackframe(), __exception_result_var_b257))));
                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional288=self!=((void*)0),                                        _if_conditional288) {
                                            ((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(result_201, "sLShifEqualNode_clone", 6, 2474)), "sLShifEqualNode_clone", 6, 2475))->mQuote=((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 6, 2476)), "sLShifEqualNode_clone", 6, 2477))->mQuote;
                                        }
                                        if(_if_conditional289=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 7, 2478)), "sLShifEqualNode_clone", 7, 2479))->mLeft!=((void*)0),                                        _if_conditional289) {
                                            __dec_obj108=((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(result_201, "sLShifEqualNode_clone", 7, 2480)), "sLShifEqualNode_clone", 7, 2481))->mLeft;
                                            ((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(result_201, "sLShifEqualNode_clone", 7, 2480)), "sLShifEqualNode_clone", 7, 2481))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=(come_push_stackframe("sLShifEqualNode_clone", 7, 2484),__exception_result_var_b258=sNode_clone(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 7, 2482)), "sLShifEqualNode_clone", 7, 2483))->mLeft), come_pop_stackframe(), __exception_result_var_b258))));
                                            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional290=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 8, 2485)), "sLShifEqualNode_clone", 8, 2486))->mRight!=((void*)0),                                        _if_conditional290) {
                                            __dec_obj109=((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(result_201, "sLShifEqualNode_clone", 8, 2487)), "sLShifEqualNode_clone", 8, 2488))->mRight;
                                            ((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(result_201, "sLShifEqualNode_clone", 8, 2487)), "sLShifEqualNode_clone", 8, 2488))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=(come_push_stackframe("sLShifEqualNode_clone", 8, 2491),__exception_result_var_b259=sNode_clone(((struct sLShifEqualNode*)come_null_check(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 8, 2489)), "sLShifEqualNode_clone", 8, 2490))->mRight), come_pop_stackframe(), __exception_result_var_b259))));
                                            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value288) { right_value288 = come_decrement_ref_count2(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        __result156__ = __result_obj__ = result_201;
                                        come_call_finalizer3(result_201,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result156__;
                                        come_call_finalizer3(result_201,sLShifEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional293=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 0, 2527)), "sRShiftEqualNode_finalize", 0, 2528))->sname!=((void*)0),                                            _if_conditional293) {
                                                ((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 0, 2529)), "sRShiftEqualNode_finalize", 0, 2530))->sname = come_decrement_ref_count2(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 0, 2529)), "sRShiftEqualNode_finalize", 0, 2530))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional294=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1, 2531)), "sRShiftEqualNode_finalize", 1, 2532))->mLeft!=((void*)0),                                            _if_conditional294) {
                                                if(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1, 2533)), "sRShiftEqualNode_finalize", 1, 2534))->mLeft) { ((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1, 2533)), "sRShiftEqualNode_finalize", 1, 2534))->mLeft = come_decrement_ref_count2(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1, 2533)), "sRShiftEqualNode_finalize", 1, 2534))->mLeft, ((struct sNode*)((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1, 2533)), "sRShiftEqualNode_finalize", 1, 2534))->mLeft)->finalize, ((struct sNode*)((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1, 2533)), "sRShiftEqualNode_finalize", 1, 2534))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional295=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2, 2535)), "sRShiftEqualNode_finalize", 2, 2536))->mRight!=((void*)0),                                            _if_conditional295) {
                                                if(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2, 2537)), "sRShiftEqualNode_finalize", 2, 2538))->mRight) { ((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2, 2537)), "sRShiftEqualNode_finalize", 2, 2538))->mRight = come_decrement_ref_count2(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2, 2537)), "sRShiftEqualNode_finalize", 2, 2538))->mRight, ((struct sNode*)((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2, 2537)), "sRShiftEqualNode_finalize", 2, 2538))->mRight)->finalize, ((struct sNode*)((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2, 2537)), "sRShiftEqualNode_finalize", 2, 2538))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool _if_conditional296;
struct sRShiftEqualNode* __result158__;
void* right_value293;
struct sRShiftEqualNode* result_204;
_Bool _if_conditional297;
_Bool _if_conditional298;
char* __exception_result_var_b262;
void* right_value294;
char* __dec_obj110;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct sNode* __exception_result_var_b263;
void* right_value295;
struct sNode* __dec_obj111;
_Bool _if_conditional301;
struct sNode* __exception_result_var_b264;
void* right_value296;
struct sNode* __dec_obj112;
struct sRShiftEqualNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
memset(&result_204, 0, sizeof(struct sRShiftEqualNode*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
                                            if(_if_conditional296=self==(void*)0,                                            _if_conditional296) {
                                                __result158__ = __result_obj__ = (void*)0;
                                                return __result158__;
                                            }
                                            result_204=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value293=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3, "sRShiftEqualNode"))));
                                            come_call_finalizer3(right_value293,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional297=self!=((void*)0),                                            _if_conditional297) {
                                                ((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(result_204, "sRShiftEqualNode_clone", 4, 2539)), "sRShiftEqualNode_clone", 4, 2540))->sline=((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 4, 2541)), "sRShiftEqualNode_clone", 4, 2542))->sline;
                                            }
                                            if(_if_conditional298=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 5, 2543)), "sRShiftEqualNode_clone", 5, 2544))->sname!=((void*)0),                                            _if_conditional298) {
                                                __dec_obj110=((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(result_204, "sRShiftEqualNode_clone", 5, 2545)), "sRShiftEqualNode_clone", 5, 2546))->sname;
                                                ((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(result_204, "sRShiftEqualNode_clone", 5, 2545)), "sRShiftEqualNode_clone", 5, 2546))->sname=(char*)come_increment_ref_count(((char*)(right_value294=(come_push_stackframe("sRShiftEqualNode_clone", 5, 2549),__exception_result_var_b262=string_clone(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 5, 2547)), "sRShiftEqualNode_clone", 5, 2548))->sname), come_pop_stackframe(), __exception_result_var_b262))));
                                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional299=self!=((void*)0),                                            _if_conditional299) {
                                                ((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(result_204, "sRShiftEqualNode_clone", 6, 2550)), "sRShiftEqualNode_clone", 6, 2551))->mQuote=((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 6, 2552)), "sRShiftEqualNode_clone", 6, 2553))->mQuote;
                                            }
                                            if(_if_conditional300=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 7, 2554)), "sRShiftEqualNode_clone", 7, 2555))->mLeft!=((void*)0),                                            _if_conditional300) {
                                                __dec_obj111=((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(result_204, "sRShiftEqualNode_clone", 7, 2556)), "sRShiftEqualNode_clone", 7, 2557))->mLeft;
                                                ((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(result_204, "sRShiftEqualNode_clone", 7, 2556)), "sRShiftEqualNode_clone", 7, 2557))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=(come_push_stackframe("sRShiftEqualNode_clone", 7, 2560),__exception_result_var_b263=sNode_clone(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 7, 2558)), "sRShiftEqualNode_clone", 7, 2559))->mLeft), come_pop_stackframe(), __exception_result_var_b263))));
                                                if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional301=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 8, 2561)), "sRShiftEqualNode_clone", 8, 2562))->mRight!=((void*)0),                                            _if_conditional301) {
                                                __dec_obj112=((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(result_204, "sRShiftEqualNode_clone", 8, 2563)), "sRShiftEqualNode_clone", 8, 2564))->mRight;
                                                ((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(result_204, "sRShiftEqualNode_clone", 8, 2563)), "sRShiftEqualNode_clone", 8, 2564))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=(come_push_stackframe("sRShiftEqualNode_clone", 8, 2567),__exception_result_var_b264=sNode_clone(((struct sRShiftEqualNode*)come_null_check(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 8, 2565)), "sRShiftEqualNode_clone", 8, 2566))->mRight), come_pop_stackframe(), __exception_result_var_b264))));
                                                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            __result159__ = __result_obj__ = result_204;
                                            come_call_finalizer3(result_204,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result159__;
                                            come_call_finalizer3(result_204,sRShiftEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional304;
_Bool _if_conditional305;
_Bool _if_conditional306;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional304=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 0, 2597)), "sXorEqualNode_finalize", 0, 2598))->sname!=((void*)0),                                                _if_conditional304) {
                                                    ((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 0, 2599)), "sXorEqualNode_finalize", 0, 2600))->sname = come_decrement_ref_count2(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 0, 2599)), "sXorEqualNode_finalize", 0, 2600))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional305=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1, 2601)), "sXorEqualNode_finalize", 1, 2602))->mLeft!=((void*)0),                                                _if_conditional305) {
                                                    if(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1, 2603)), "sXorEqualNode_finalize", 1, 2604))->mLeft) { ((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1, 2603)), "sXorEqualNode_finalize", 1, 2604))->mLeft = come_decrement_ref_count2(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1, 2603)), "sXorEqualNode_finalize", 1, 2604))->mLeft, ((struct sNode*)((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1, 2603)), "sXorEqualNode_finalize", 1, 2604))->mLeft)->finalize, ((struct sNode*)((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1, 2603)), "sXorEqualNode_finalize", 1, 2604))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional306=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2, 2605)), "sXorEqualNode_finalize", 2, 2606))->mRight!=((void*)0),                                                _if_conditional306) {
                                                    if(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2, 2607)), "sXorEqualNode_finalize", 2, 2608))->mRight) { ((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2, 2607)), "sXorEqualNode_finalize", 2, 2608))->mRight = come_decrement_ref_count2(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2, 2607)), "sXorEqualNode_finalize", 2, 2608))->mRight, ((struct sNode*)((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2, 2607)), "sXorEqualNode_finalize", 2, 2608))->mRight)->finalize, ((struct sNode*)((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2, 2607)), "sXorEqualNode_finalize", 2, 2608))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__;
_Bool _if_conditional307;
struct sXorEqualNode* __result161__;
void* right_value301;
struct sXorEqualNode* result_207;
_Bool _if_conditional308;
_Bool _if_conditional309;
char* __exception_result_var_b267;
void* right_value302;
char* __dec_obj113;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct sNode* __exception_result_var_b268;
void* right_value303;
struct sNode* __dec_obj114;
_Bool _if_conditional312;
struct sNode* __exception_result_var_b269;
void* right_value304;
struct sNode* __dec_obj115;
struct sXorEqualNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
memset(&result_207, 0, sizeof(struct sXorEqualNode*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
                                                if(_if_conditional307=self==(void*)0,                                                _if_conditional307) {
                                                    __result161__ = __result_obj__ = (void*)0;
                                                    return __result161__;
                                                }
                                                result_207=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value301=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3, "sXorEqualNode"))));
                                                come_call_finalizer3(right_value301,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional308=self!=((void*)0),                                                _if_conditional308) {
                                                    ((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(result_207, "sXorEqualNode_clone", 4, 2609)), "sXorEqualNode_clone", 4, 2610))->sline=((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 4, 2611)), "sXorEqualNode_clone", 4, 2612))->sline;
                                                }
                                                if(_if_conditional309=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 5, 2613)), "sXorEqualNode_clone", 5, 2614))->sname!=((void*)0),                                                _if_conditional309) {
                                                    __dec_obj113=((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(result_207, "sXorEqualNode_clone", 5, 2615)), "sXorEqualNode_clone", 5, 2616))->sname;
                                                    ((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(result_207, "sXorEqualNode_clone", 5, 2615)), "sXorEqualNode_clone", 5, 2616))->sname=(char*)come_increment_ref_count(((char*)(right_value302=(come_push_stackframe("sXorEqualNode_clone", 5, 2619),__exception_result_var_b267=string_clone(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 5, 2617)), "sXorEqualNode_clone", 5, 2618))->sname), come_pop_stackframe(), __exception_result_var_b267))));
                                                    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional310=self!=((void*)0),                                                _if_conditional310) {
                                                    ((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(result_207, "sXorEqualNode_clone", 6, 2620)), "sXorEqualNode_clone", 6, 2621))->mQuote=((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 6, 2622)), "sXorEqualNode_clone", 6, 2623))->mQuote;
                                                }
                                                if(_if_conditional311=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 7, 2624)), "sXorEqualNode_clone", 7, 2625))->mLeft!=((void*)0),                                                _if_conditional311) {
                                                    __dec_obj114=((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(result_207, "sXorEqualNode_clone", 7, 2626)), "sXorEqualNode_clone", 7, 2627))->mLeft;
                                                    ((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(result_207, "sXorEqualNode_clone", 7, 2626)), "sXorEqualNode_clone", 7, 2627))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=(come_push_stackframe("sXorEqualNode_clone", 7, 2630),__exception_result_var_b268=sNode_clone(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 7, 2628)), "sXorEqualNode_clone", 7, 2629))->mLeft), come_pop_stackframe(), __exception_result_var_b268))));
                                                    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional312=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 8, 2631)), "sXorEqualNode_clone", 8, 2632))->mRight!=((void*)0),                                                _if_conditional312) {
                                                    __dec_obj115=((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(result_207, "sXorEqualNode_clone", 8, 2633)), "sXorEqualNode_clone", 8, 2634))->mRight;
                                                    ((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(result_207, "sXorEqualNode_clone", 8, 2633)), "sXorEqualNode_clone", 8, 2634))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=(come_push_stackframe("sXorEqualNode_clone", 8, 2637),__exception_result_var_b269=sNode_clone(((struct sXorEqualNode*)come_null_check(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 8, 2635)), "sXorEqualNode_clone", 8, 2636))->mRight), come_pop_stackframe(), __exception_result_var_b269))));
                                                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                __result162__ = __result_obj__ = result_207;
                                                come_call_finalizer3(result_207,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result162__;
                                                come_call_finalizer3(result_207,sXorEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional315=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 0, 2667)), "sAndEqualNode_finalize", 0, 2668))->sname!=((void*)0),                                                    _if_conditional315) {
                                                        ((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 0, 2669)), "sAndEqualNode_finalize", 0, 2670))->sname = come_decrement_ref_count2(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 0, 2669)), "sAndEqualNode_finalize", 0, 2670))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional316=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1, 2671)), "sAndEqualNode_finalize", 1, 2672))->mLeft!=((void*)0),                                                    _if_conditional316) {
                                                        if(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1, 2673)), "sAndEqualNode_finalize", 1, 2674))->mLeft) { ((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1, 2673)), "sAndEqualNode_finalize", 1, 2674))->mLeft = come_decrement_ref_count2(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1, 2673)), "sAndEqualNode_finalize", 1, 2674))->mLeft, ((struct sNode*)((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1, 2673)), "sAndEqualNode_finalize", 1, 2674))->mLeft)->finalize, ((struct sNode*)((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1, 2673)), "sAndEqualNode_finalize", 1, 2674))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional317=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2, 2675)), "sAndEqualNode_finalize", 2, 2676))->mRight!=((void*)0),                                                    _if_conditional317) {
                                                        if(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2, 2677)), "sAndEqualNode_finalize", 2, 2678))->mRight) { ((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2, 2677)), "sAndEqualNode_finalize", 2, 2678))->mRight = come_decrement_ref_count2(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2, 2677)), "sAndEqualNode_finalize", 2, 2678))->mRight, ((struct sNode*)((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2, 2677)), "sAndEqualNode_finalize", 2, 2678))->mRight)->finalize, ((struct sNode*)((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2, 2677)), "sAndEqualNode_finalize", 2, 2678))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__;
_Bool _if_conditional318;
struct sAndEqualNode* __result164__;
void* right_value309;
struct sAndEqualNode* result_210;
_Bool _if_conditional319;
_Bool _if_conditional320;
char* __exception_result_var_b272;
void* right_value310;
char* __dec_obj116;
_Bool _if_conditional321;
_Bool _if_conditional322;
struct sNode* __exception_result_var_b273;
void* right_value311;
struct sNode* __dec_obj117;
_Bool _if_conditional323;
struct sNode* __exception_result_var_b274;
void* right_value312;
struct sNode* __dec_obj118;
struct sAndEqualNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
memset(&result_210, 0, sizeof(struct sAndEqualNode*));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
                                                    if(_if_conditional318=self==(void*)0,                                                    _if_conditional318) {
                                                        __result164__ = __result_obj__ = (void*)0;
                                                        return __result164__;
                                                    }
                                                    result_210=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value309=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3, "sAndEqualNode"))));
                                                    come_call_finalizer3(right_value309,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional319=self!=((void*)0),                                                    _if_conditional319) {
                                                        ((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(result_210, "sAndEqualNode_clone", 4, 2679)), "sAndEqualNode_clone", 4, 2680))->sline=((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 4, 2681)), "sAndEqualNode_clone", 4, 2682))->sline;
                                                    }
                                                    if(_if_conditional320=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 5, 2683)), "sAndEqualNode_clone", 5, 2684))->sname!=((void*)0),                                                    _if_conditional320) {
                                                        __dec_obj116=((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(result_210, "sAndEqualNode_clone", 5, 2685)), "sAndEqualNode_clone", 5, 2686))->sname;
                                                        ((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(result_210, "sAndEqualNode_clone", 5, 2685)), "sAndEqualNode_clone", 5, 2686))->sname=(char*)come_increment_ref_count(((char*)(right_value310=(come_push_stackframe("sAndEqualNode_clone", 5, 2689),__exception_result_var_b272=string_clone(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 5, 2687)), "sAndEqualNode_clone", 5, 2688))->sname), come_pop_stackframe(), __exception_result_var_b272))));
                                                        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    if(_if_conditional321=self!=((void*)0),                                                    _if_conditional321) {
                                                        ((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(result_210, "sAndEqualNode_clone", 6, 2690)), "sAndEqualNode_clone", 6, 2691))->mQuote=((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 6, 2692)), "sAndEqualNode_clone", 6, 2693))->mQuote;
                                                    }
                                                    if(_if_conditional322=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 7, 2694)), "sAndEqualNode_clone", 7, 2695))->mLeft!=((void*)0),                                                    _if_conditional322) {
                                                        __dec_obj117=((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(result_210, "sAndEqualNode_clone", 7, 2696)), "sAndEqualNode_clone", 7, 2697))->mLeft;
                                                        ((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(result_210, "sAndEqualNode_clone", 7, 2696)), "sAndEqualNode_clone", 7, 2697))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=(come_push_stackframe("sAndEqualNode_clone", 7, 2700),__exception_result_var_b273=sNode_clone(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 7, 2698)), "sAndEqualNode_clone", 7, 2699))->mLeft), come_pop_stackframe(), __exception_result_var_b273))));
                                                        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional323=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 8, 2701)), "sAndEqualNode_clone", 8, 2702))->mRight!=((void*)0),                                                    _if_conditional323) {
                                                        __dec_obj118=((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(result_210, "sAndEqualNode_clone", 8, 2703)), "sAndEqualNode_clone", 8, 2704))->mRight;
                                                        ((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(result_210, "sAndEqualNode_clone", 8, 2703)), "sAndEqualNode_clone", 8, 2704))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=(come_push_stackframe("sAndEqualNode_clone", 8, 2707),__exception_result_var_b274=sNode_clone(((struct sAndEqualNode*)come_null_check(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 8, 2705)), "sAndEqualNode_clone", 8, 2706))->mRight), come_pop_stackframe(), __exception_result_var_b274))));
                                                        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    __result165__ = __result_obj__ = result_210;
                                                    come_call_finalizer3(result_210,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result165__;
                                                    come_call_finalizer3(result_210,sAndEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional326=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 0, 2737)), "sOrEqualNode_finalize", 0, 2738))->sname!=((void*)0),                                                        _if_conditional326) {
                                                            ((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 0, 2739)), "sOrEqualNode_finalize", 0, 2740))->sname = come_decrement_ref_count2(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 0, 2739)), "sOrEqualNode_finalize", 0, 2740))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional327=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1, 2741)), "sOrEqualNode_finalize", 1, 2742))->mLeft!=((void*)0),                                                        _if_conditional327) {
                                                            if(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1, 2743)), "sOrEqualNode_finalize", 1, 2744))->mLeft) { ((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1, 2743)), "sOrEqualNode_finalize", 1, 2744))->mLeft = come_decrement_ref_count2(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1, 2743)), "sOrEqualNode_finalize", 1, 2744))->mLeft, ((struct sNode*)((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1, 2743)), "sOrEqualNode_finalize", 1, 2744))->mLeft)->finalize, ((struct sNode*)((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1, 2743)), "sOrEqualNode_finalize", 1, 2744))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional328=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2, 2745)), "sOrEqualNode_finalize", 2, 2746))->mRight!=((void*)0),                                                        _if_conditional328) {
                                                            if(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2, 2747)), "sOrEqualNode_finalize", 2, 2748))->mRight) { ((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2, 2747)), "sOrEqualNode_finalize", 2, 2748))->mRight = come_decrement_ref_count2(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2, 2747)), "sOrEqualNode_finalize", 2, 2748))->mRight, ((struct sNode*)((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2, 2747)), "sOrEqualNode_finalize", 2, 2748))->mRight)->finalize, ((struct sNode*)((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2, 2747)), "sOrEqualNode_finalize", 2, 2748))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__;
_Bool _if_conditional329;
struct sOrEqualNode* __result167__;
void* right_value317;
struct sOrEqualNode* result_213;
_Bool _if_conditional330;
_Bool _if_conditional331;
char* __exception_result_var_b277;
void* right_value318;
char* __dec_obj119;
_Bool _if_conditional332;
_Bool _if_conditional333;
struct sNode* __exception_result_var_b278;
void* right_value319;
struct sNode* __dec_obj120;
_Bool _if_conditional334;
struct sNode* __exception_result_var_b279;
void* right_value320;
struct sNode* __dec_obj121;
struct sOrEqualNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
memset(&result_213, 0, sizeof(struct sOrEqualNode*));
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
                                                        if(_if_conditional329=self==(void*)0,                                                        _if_conditional329) {
                                                            __result167__ = __result_obj__ = (void*)0;
                                                            return __result167__;
                                                        }
                                                        result_213=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value317=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3, "sOrEqualNode"))));
                                                        come_call_finalizer3(right_value317,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional330=self!=((void*)0),                                                        _if_conditional330) {
                                                            ((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(result_213, "sOrEqualNode_clone", 4, 2749)), "sOrEqualNode_clone", 4, 2750))->sline=((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 4, 2751)), "sOrEqualNode_clone", 4, 2752))->sline;
                                                        }
                                                        if(_if_conditional331=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 5, 2753)), "sOrEqualNode_clone", 5, 2754))->sname!=((void*)0),                                                        _if_conditional331) {
                                                            __dec_obj119=((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(result_213, "sOrEqualNode_clone", 5, 2755)), "sOrEqualNode_clone", 5, 2756))->sname;
                                                            ((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(result_213, "sOrEqualNode_clone", 5, 2755)), "sOrEqualNode_clone", 5, 2756))->sname=(char*)come_increment_ref_count(((char*)(right_value318=(come_push_stackframe("sOrEqualNode_clone", 5, 2759),__exception_result_var_b277=string_clone(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 5, 2757)), "sOrEqualNode_clone", 5, 2758))->sname), come_pop_stackframe(), __exception_result_var_b277))));
                                                            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional332=self!=((void*)0),                                                        _if_conditional332) {
                                                            ((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(result_213, "sOrEqualNode_clone", 6, 2760)), "sOrEqualNode_clone", 6, 2761))->mQuote=((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 6, 2762)), "sOrEqualNode_clone", 6, 2763))->mQuote;
                                                        }
                                                        if(_if_conditional333=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 7, 2764)), "sOrEqualNode_clone", 7, 2765))->mLeft!=((void*)0),                                                        _if_conditional333) {
                                                            __dec_obj120=((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(result_213, "sOrEqualNode_clone", 7, 2766)), "sOrEqualNode_clone", 7, 2767))->mLeft;
                                                            ((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(result_213, "sOrEqualNode_clone", 7, 2766)), "sOrEqualNode_clone", 7, 2767))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=(come_push_stackframe("sOrEqualNode_clone", 7, 2770),__exception_result_var_b278=sNode_clone(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 7, 2768)), "sOrEqualNode_clone", 7, 2769))->mLeft), come_pop_stackframe(), __exception_result_var_b278))));
                                                            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional334=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 8, 2771)), "sOrEqualNode_clone", 8, 2772))->mRight!=((void*)0),                                                        _if_conditional334) {
                                                            __dec_obj121=((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(result_213, "sOrEqualNode_clone", 8, 2773)), "sOrEqualNode_clone", 8, 2774))->mRight;
                                                            ((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(result_213, "sOrEqualNode_clone", 8, 2773)), "sOrEqualNode_clone", 8, 2774))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=(come_push_stackframe("sOrEqualNode_clone", 8, 2777),__exception_result_var_b279=sNode_clone(((struct sOrEqualNode*)come_null_check(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 8, 2775)), "sOrEqualNode_clone", 8, 2776))->mRight), come_pop_stackframe(), __exception_result_var_b279))));
                                                            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        __result168__ = __result_obj__ = result_213;
                                                        come_call_finalizer3(result_213,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result168__;
                                                        come_call_finalizer3(result_213,sOrEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional337=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 0, 2805)), "sExpEqualNode_finalize", 0, 2806))->sname!=((void*)0),                                                            _if_conditional337) {
                                                                ((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 0, 2807)), "sExpEqualNode_finalize", 0, 2808))->sname = come_decrement_ref_count2(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 0, 2807)), "sExpEqualNode_finalize", 0, 2808))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(_if_conditional338=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1, 2809)), "sExpEqualNode_finalize", 1, 2810))->mLeft!=((void*)0),                                                            _if_conditional338) {
                                                                if(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1, 2811)), "sExpEqualNode_finalize", 1, 2812))->mLeft) { ((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1, 2811)), "sExpEqualNode_finalize", 1, 2812))->mLeft = come_decrement_ref_count2(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1, 2811)), "sExpEqualNode_finalize", 1, 2812))->mLeft, ((struct sNode*)((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1, 2811)), "sExpEqualNode_finalize", 1, 2812))->mLeft)->finalize, ((struct sNode*)((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1, 2811)), "sExpEqualNode_finalize", 1, 2812))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional339=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2, 2813)), "sExpEqualNode_finalize", 2, 2814))->mRight!=((void*)0),                                                            _if_conditional339) {
                                                                if(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2, 2815)), "sExpEqualNode_finalize", 2, 2816))->mRight) { ((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2, 2815)), "sExpEqualNode_finalize", 2, 2816))->mRight = come_decrement_ref_count2(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2, 2815)), "sExpEqualNode_finalize", 2, 2816))->mRight, ((struct sNode*)((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2, 2815)), "sExpEqualNode_finalize", 2, 2816))->mRight)->finalize, ((struct sNode*)((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2, 2815)), "sExpEqualNode_finalize", 2, 2816))->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__;
_Bool _if_conditional340;
struct sExpEqualNode* __result170__;
void* right_value325;
struct sExpEqualNode* result_216;
_Bool _if_conditional341;
_Bool _if_conditional342;
char* __exception_result_var_b282;
void* right_value326;
char* __dec_obj122;
_Bool _if_conditional343;
_Bool _if_conditional344;
struct sNode* __exception_result_var_b283;
void* right_value327;
struct sNode* __dec_obj123;
_Bool _if_conditional345;
struct sNode* __exception_result_var_b284;
void* right_value328;
struct sNode* __dec_obj124;
struct sExpEqualNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
memset(&result_216, 0, sizeof(struct sExpEqualNode*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
                                                            if(_if_conditional340=self==(void*)0,                                                            _if_conditional340) {
                                                                __result170__ = __result_obj__ = (void*)0;
                                                                return __result170__;
                                                            }
                                                            result_216=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value325=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3, "sExpEqualNode"))));
                                                            come_call_finalizer3(right_value325,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional341=self!=((void*)0),                                                            _if_conditional341) {
                                                                ((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(result_216, "sExpEqualNode_clone", 4, 2817)), "sExpEqualNode_clone", 4, 2818))->sline=((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 4, 2819)), "sExpEqualNode_clone", 4, 2820))->sline;
                                                            }
                                                            if(_if_conditional342=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 5, 2821)), "sExpEqualNode_clone", 5, 2822))->sname!=((void*)0),                                                            _if_conditional342) {
                                                                __dec_obj122=((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(result_216, "sExpEqualNode_clone", 5, 2823)), "sExpEqualNode_clone", 5, 2824))->sname;
                                                                ((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(result_216, "sExpEqualNode_clone", 5, 2823)), "sExpEqualNode_clone", 5, 2824))->sname=(char*)come_increment_ref_count(((char*)(right_value326=(come_push_stackframe("sExpEqualNode_clone", 5, 2827),__exception_result_var_b282=string_clone(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 5, 2825)), "sExpEqualNode_clone", 5, 2826))->sname), come_pop_stackframe(), __exception_result_var_b282))));
                                                                __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            if(_if_conditional343=self!=((void*)0),                                                            _if_conditional343) {
                                                                ((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(result_216, "sExpEqualNode_clone", 6, 2828)), "sExpEqualNode_clone", 6, 2829))->mQuote=((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 6, 2830)), "sExpEqualNode_clone", 6, 2831))->mQuote;
                                                            }
                                                            if(_if_conditional344=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 7, 2832)), "sExpEqualNode_clone", 7, 2833))->mLeft!=((void*)0),                                                            _if_conditional344) {
                                                                __dec_obj123=((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(result_216, "sExpEqualNode_clone", 7, 2834)), "sExpEqualNode_clone", 7, 2835))->mLeft;
                                                                ((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(result_216, "sExpEqualNode_clone", 7, 2834)), "sExpEqualNode_clone", 7, 2835))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=(come_push_stackframe("sExpEqualNode_clone", 7, 2838),__exception_result_var_b283=sNode_clone(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 7, 2836)), "sExpEqualNode_clone", 7, 2837))->mLeft), come_pop_stackframe(), __exception_result_var_b283))));
                                                                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional345=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 8, 2839)), "sExpEqualNode_clone", 8, 2840))->mRight!=((void*)0),                                                            _if_conditional345) {
                                                                __dec_obj124=((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(result_216, "sExpEqualNode_clone", 8, 2841)), "sExpEqualNode_clone", 8, 2842))->mRight;
                                                                ((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(result_216, "sExpEqualNode_clone", 8, 2841)), "sExpEqualNode_clone", 8, 2842))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=(come_push_stackframe("sExpEqualNode_clone", 8, 2845),__exception_result_var_b284=sNode_clone(((struct sExpEqualNode*)come_null_check(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 8, 2843)), "sExpEqualNode_clone", 8, 2844))->mRight), come_pop_stackframe(), __exception_result_var_b284))));
                                                                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            __result171__ = __result_obj__ = result_216;
                                                            come_call_finalizer3(result_216,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result171__;
                                                            come_call_finalizer3(result_216,sExpEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

